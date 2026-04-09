const state = {
  report: null,
};

const elements = {
  reloadButton: document.getElementById("reload-button"),
  statusPill: document.getElementById("status-pill"),
  probeTimestamp: document.getElementById("probe-timestamp"),
  overviewGrid: document.getElementById("overview-grid"),
  canonDriver: document.getElementById("canon-driver"),
  twainSummary: document.getElementById("twain-summary"),
  pnpDevices: document.getElementById("pnp-devices"),
  wiaDevices: document.getElementById("wia-devices"),
  twainCapabilities: document.getElementById("twain-capabilities"),
  messages: document.getElementById("messages"),
  rawJson: document.getElementById("raw-json"),
  scanForm: document.getElementById("scan-form"),
  scanButton: document.getElementById("scan-button"),
  outputSuggestionButton: document.getElementById("output-suggestion-button"),
  sourceName: document.getElementById("source-name"),
  outputPath: document.getElementById("output-path"),
  outputFileFormat: document.getElementById("output-file-format"),
  transferMode: document.getElementById("transfer-mode"),
  resolutionDpi: document.getElementById("resolution-dpi"),
  bitDepth: document.getElementById("bit-depth"),
  colorMode: document.getElementById("color-mode"),
  timeoutSeconds: document.getElementById("timeout-seconds"),
  hideIndicators: document.getElementById("hide-indicators"),
  dryRun: document.getElementById("dry-run"),
  scanResult: document.getElementById("scan-result"),
  scanStatusText: document.getElementById("scan-status-text"),
};

async function loadProbe() {
  setStatus("Caricamento...", "busy");
  elements.reloadButton.disabled = true;

  try {
    const response = await fetch("/api/probe", { cache: "no-store" });
    if (!response.ok) {
      const errorText = await response.text();
      throw new Error(errorText);
    }

    const report = await response.json();
    state.report = report;
    renderReport(report);
    setStatus("Probe completato", "ok");
  } catch (error) {
    state.report = null;
    clearPanels();
    elements.messages.innerHTML = renderMessageList([
      {
        severity: "error",
        message: error instanceof Error ? error.message : String(error),
      },
    ]);
    elements.rawJson.textContent = "";
    setStatus("Errore", "error");
  } finally {
    elements.reloadButton.disabled = false;
  }
}

async function submitScan(event) {
  event.preventDefault();

  const payload = {
    sourceName: elements.sourceName.value.trim() || "CanoScan 5600F",
    outputPath: elements.outputPath.value.trim(),
    outputFileFormat: elements.outputFileFormat.value,
    transferMode: elements.transferMode.value,
    resolutionDpi: Number(elements.resolutionDpi.value),
    bitDepth: Number(elements.bitDepth.value),
    colorMode: elements.colorMode.value,
    timeoutSeconds: Number(elements.timeoutSeconds.value),
    hideIndicators: elements.hideIndicators.checked,
    dryRun: elements.dryRun.checked,
  };

  elements.scanButton.disabled = true;
  elements.scanStatusText.textContent = payload.dryRun
    ? "Dry run in corso..."
    : "Scansione in corso...";

  try {
    const response = await fetch("/api/scan", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify(payload),
    });

    const text = await response.text();
    let data = null;

    if (text) {
      try {
        data = JSON.parse(text);
      } catch {
        // leave as null and show raw text below
      }
    }

    if (!response.ok) {
      if (data && Array.isArray(data.operations)) {
        renderScanResult(data);
        elements.scanStatusText.textContent = data.errorMessage || "Scansione fallita.";
        return;
      }

      if (data && data.title) {
        throw new Error(`${data.title}: ${data.detail || ""}`.trim());
      }

      throw new Error(text || `Errore HTTP ${response.status}`);
    }

    renderScanResult(data);
    elements.scanStatusText.textContent = data.success
      ? (data.dryRun ? "Dry run completato." : "Scansione completata.")
      : "Scansione fallita.";

    if (data.resolvedOutputPath) {
      elements.outputPath.value = suggestOutputPath();
    }
  } catch (error) {
    renderScanResult({
      success: false,
      errorMessage: error instanceof Error ? error.message : String(error),
      operations: [],
      messages: [],
    });
    elements.scanStatusText.textContent = "Scansione fallita.";
  } finally {
    elements.scanButton.disabled = false;
  }
}

function renderReport(report) {
  const process = report.process ?? {};
  const canon = report.canonDriver ?? {};
  const twain = report.twain ?? {};
  const negotiation = twain.canonNegotiation ?? {};

  elements.probeTimestamp.textContent = `Generato: ${new Date(report.generatedAtUtc).toLocaleString("it-IT")}`;
  elements.overviewGrid.innerHTML = [
    renderStat("Processo", process.processArchitecture || "n/d"),
    renderStat("OS", process.osDescription || "n/d"),
    renderStat("Framework", process.frameworkDescription || "n/d"),
    renderStat("Canon driver", canon.driverVersion || "n/d"),
    renderStat("WIA devices", String((report.wiaDevices || []).length)),
    renderStat("TWAIN sources", String((twain.sources || []).length)),
  ].join("");

  elements.canonDriver.innerHTML = renderKeyValueTable([
    ["Device", canon.deviceName],
    ["Device ID", canon.deviceId],
    ["Driver provider", canon.driverProvider],
    ["Driver version", canon.driverVersion],
    ["Driver date", canon.driverDate],
    ["INF", canon.infPath],
    ["Service", canon.service],
    ["TWAIN dir", canon.twainInstallDirectory],
    ["DSM path", canon.dsmPath],
    ["DSM arch", canon.dsmArchitecture],
  ]) + renderRegistryKeys(canon.registryKeys || []) + renderTwainFiles(canon.twainFiles || []);

  elements.twainSummary.innerHTML =
    renderKeyValueTable([
      ["Legacy DSM", String(Boolean(twain.preferLegacyDsm))],
      ["Canon source", twain.canonSourceName || "n/d"],
      ["Open ok", String(Boolean(twain.canonSourceOpenSucceeded))],
      ["Probe error", twain.probeError || ""],
    ]) +
    renderKeyValueTable([
      ["Native DPI", formatNumber(negotiation.nativeResolutionDpi)],
      ["Max DPI", formatNumber(negotiation.maxResolutionDpi)],
      ["Light path", negotiation.currentLightPath || ""],
      ["Default frame", negotiation.defaultFrame || ""],
      ["DPI consigliati", formatDpiList(negotiation.recommendedDpiValues)],
      ["Transfer", formatStringList(negotiation.transferModes)],
      ["File format", formatStringList(negotiation.fileFormats)],
      ["Pixel type", formatStringList(negotiation.pixelTypes)],
      ["Bit depth", formatNumberList(negotiation.bitDepths)],
      ["Supported sizes", formatStringList(negotiation.supportedSizes)],
      ["Light paths", formatStringList(negotiation.lightPaths)],
    ]) +
    renderSourcesTable(twain.sources || []);

  elements.pnpDevices.innerHTML = renderDevices(report.pnpDevices || [], "PnP");
  elements.wiaDevices.innerHTML = renderWiaDevices(report.wiaDevices || []);
  elements.twainCapabilities.innerHTML = renderCapabilities(twain.canonCapabilities || []);
  elements.messages.innerHTML = renderMessageList(report.messages || []);
  elements.rawJson.textContent = JSON.stringify(report, null, 2);

  populateSourceOptions(twain.sources || [], twain.canonSourceName);
  populateDpiOptions(negotiation);

  if (!elements.outputPath.value) {
    elements.outputPath.value = suggestOutputPath();
  }
}

function renderScanResult(result) {
  if (!result) {
    elements.scanResult.innerHTML = `<p class="muted">Nessun risultato disponibile.</p>`;
    return;
  }

  const operations = result.operations || [];
  const messages = result.messages || [];

  elements.scanResult.innerHTML =
    renderKeyValueTable([
      ["Success", String(Boolean(result.success))],
      ["Dry run", String(Boolean(result.dryRun))],
      ["Source", result.sourceName],
      ["Output", result.resolvedOutputPath || result.requestedOutputPath],
      ["Format", result.outputFormat],
      ["Transfer type", result.transferType],
      ["Requested transfer", result.requestedTransferMode],
      ["Negotiated transfer", result.negotiatedTransferMode],
      ["Requested format", result.requestedOutputFileFormat],
      ["Negotiated format", result.negotiatedOutputFileFormat],
      ["Negotiation", result.negotiationSummary],
      ["DPI", String(result.resolutionDpi || "")],
      ["Bit depth", String(result.bitDepth || "")],
      ["Color mode", result.colorMode],
      ["Delivered", formatDeliveredOutput(result)],
      ["Delivered size", formatDeliveredSize(result)],
      ["Elapsed ms", String(result.elapsedMilliseconds || "")],
      ["Error", result.errorMessage || ""],
    ]) +
    renderOperations(operations) +
    renderMessageSection(messages);
}

function renderOperations(operations) {
  if (!operations.length) {
    return `<p class="muted">Nessuna operazione registrata.</p>`;
  }

  return `
    <div class="table-wrap">
      <table>
        <thead>
          <tr>
            <th>Step</th>
            <th>Status</th>
            <th>Detail</th>
          </tr>
        </thead>
        <tbody>
          ${operations.map(operation => `
            <tr>
              <td>${escapeHtml(operation.step)}</td>
              <td>${escapeHtml(operation.status)}</td>
              <td>${escapeHtml(operation.detail)}</td>
            </tr>
          `).join("")}
        </tbody>
      </table>
    </div>
  `;
}

function renderMessageSection(messages) {
  return `
    <div class="message-stack">
      ${renderMessageList(messages)}
    </div>
  `;
}

function clearPanels() {
  elements.probeTimestamp.textContent = "Nessun dato disponibile.";
  elements.overviewGrid.innerHTML = "";
  elements.canonDriver.innerHTML = "";
  elements.twainSummary.innerHTML = "";
  elements.pnpDevices.innerHTML = "";
  elements.wiaDevices.innerHTML = "";
  elements.twainCapabilities.innerHTML = "";
}

function setStatus(text, state) {
  elements.statusPill.textContent = text;
  elements.statusPill.dataset.state = state;
}

function suggestOutputPath() {
  const now = new Date();
  const stamp = [
    now.getFullYear(),
    String(now.getMonth() + 1).padStart(2, "0"),
    String(now.getDate()).padStart(2, "0"),
    "-",
    String(now.getHours()).padStart(2, "0"),
    String(now.getMinutes()).padStart(2, "0"),
    String(now.getSeconds()).padStart(2, "0"),
  ].join("");
  const extension = resolveSuggestedExtension();

  return `data/scans/scanbro-${stamp}${extension}`;
}

function resolveSuggestedExtension() {
  if (shouldPreferTiffOutput()) {
    return ".tif";
  }

  const requestedFormat = elements.outputFileFormat.value;
  if (requestedFormat === "Bmp") {
    return ".bmp";
  }

  if (requestedFormat === "Tiff") {
    return ".tif";
  }

  const supportedFormats = getSupportedDriverFileFormats();
  if (supportedFormats.includes("Tiff")) {
    return ".tif";
  }

  if (supportedFormats.includes("Bmp")) {
    return ".bmp";
  }

  return ".tif";
}

function shouldPreferTiffOutput() {
  const transferMode = elements.transferMode.value;
  if (transferMode === "Memory") {
    return true;
  }

  if (transferMode === "File") {
    return elements.outputFileFormat.value === "Tiff" && getSupportedDriverFileFormats().includes("Tiff");
  }

  if (requiresMemoryTransfer()) {
    return true;
  }

  return elements.outputFileFormat.value === "Tiff" && !getSupportedDriverFileFormats().includes("Tiff");
}

function requiresMemoryTransfer() {
  const bitDepth = Number(elements.bitDepth.value);
  const colorMode = elements.colorMode.value;

  return bitDepth === 48 || (colorMode === "Grayscale" && bitDepth === 16);
}

function getSupportedDriverFileFormats() {
  const capabilities = state.report?.twain?.canonCapabilities || [];
  const fileFormatCapability = capabilities.find(capability => capability.id === "ICapImageFileFormat");
  if (!fileFormatCapability || !fileFormatCapability.values) {
    return [];
  }

  return String(fileFormatCapability.values)
    .split(",")
    .map(value => Number(value.trim()))
    .filter(value => Number.isFinite(value))
    .map(mapTwainFileFormatValue)
    .filter(Boolean);
}

function mapTwainFileFormatValue(value) {
  switch (value) {
    case 0:
      return "Tiff";
    case 2:
      return "Bmp";
    default:
      return "";
  }
}

function renderStat(label, value) {
  return `
    <article class="stat-card">
      <span class="stat-label">${escapeHtml(label)}</span>
      <strong class="stat-value">${escapeHtml(value)}</strong>
    </article>
  `;
}

function renderKeyValueTable(rows) {
  const filteredRows = rows.filter(([, value]) => value);
  if (!filteredRows.length) {
    return `<p class="muted">Nessun valore disponibile.</p>`;
  }

  return `
    <dl class="kv-grid">
      ${filteredRows.map(([label, value]) => `
        <div class="kv-row">
          <dt>${escapeHtml(label)}</dt>
          <dd>${escapeHtml(value)}</dd>
        </div>
      `).join("")}
    </dl>
  `;
}

function renderRegistryKeys(keys) {
  if (!keys.length) {
    return "";
  }

  return keys.map(key => `
    <details class="details-block">
      <summary>${escapeHtml(key.path)}</summary>
      ${renderKeyValueTable((key.values || []).map(value => [value.name, value.value]))}
    </details>
  `).join("");
}

function renderTwainFiles(files) {
  if (!files.length) {
    return "";
  }

  return `
    <details class="details-block">
      <summary>File TWAIN Canon (${files.length})</summary>
      <div class="table-wrap">
        <table>
          <thead>
            <tr>
              <th>Nome</th>
              <th>Ext</th>
              <th>Size</th>
              <th>Arch</th>
            </tr>
          </thead>
          <tbody>
            ${files.map(file => `
              <tr>
                <td>${escapeHtml(file.name)}</td>
                <td>${escapeHtml(file.extension || "")}</td>
                <td>${escapeHtml(String(file.length))}</td>
                <td>${escapeHtml(file.architecture || "")}</td>
              </tr>
            `).join("")}
          </tbody>
        </table>
      </div>
    </details>
  `;
}

function renderSourcesTable(sources) {
  if (!sources.length) {
    return `<p class="muted">Nessuna sorgente TWAIN visibile.</p>`;
  }

  return `
    <div class="table-wrap">
      <table>
        <thead>
          <tr>
            <th>Name</th>
            <th>Manufacturer</th>
            <th>Family</th>
            <th>Version</th>
            <th>Protocol</th>
            <th>Open</th>
          </tr>
        </thead>
        <tbody>
          ${sources.map(source => `
            <tr>
              <td>${escapeHtml(source.name)}</td>
              <td>${escapeHtml(source.manufacturer || "")}</td>
              <td>${escapeHtml(source.productFamily || "")}</td>
              <td>${escapeHtml(source.version || "")}</td>
              <td>${escapeHtml(source.protocolVersion || "")}</td>
              <td>${escapeHtml(String(Boolean(source.opened)))}</td>
            </tr>
          `).join("")}
        </tbody>
      </table>
    </div>
  `;
}

function renderDevices(devices, title) {
  if (!devices.length) {
    return `<p class="muted">Nessun device ${escapeHtml(title)}.</p>`;
  }

  return devices.map(device => `
    <details class="details-block" open>
      <summary>${escapeHtml(device.name || device.deviceId)}</summary>
      ${renderKeyValueTable([
        ["Device ID", device.deviceId],
        ["Status", device.status],
        ["Manufacturer", device.manufacturer],
        ["Service", device.service],
        ["Driver provider", device.driverProvider],
        ["Driver version", device.driverVersion],
        ["Driver date", device.driverDate],
        ["INF", device.infPath],
      ])}
    </details>
  `).join("");
}

function renderWiaDevices(devices) {
  if (!devices.length) {
    return `<p class="muted">Nessun device WIA.</p>`;
  }

  return devices.map(device => `
    <details class="details-block" open>
      <summary>${escapeHtml(device.name || device.deviceId)}</summary>
      ${renderKeyValueTable([
        ["Device ID", device.deviceId],
        ["Type", device.type],
      ])}
      <details class="details-inline">
        <summary>Proprieta\` WIA</summary>
        ${renderKeyValueTable((device.properties || []).map(property => [property.name, property.value]))}
      </details>
    </details>
  `).join("");
}

function renderCapabilities(capabilities) {
  if (!capabilities.length) {
    return `<p class="muted">Nessuna capability disponibile.</p>`;
  }

  return `
    <div class="table-wrap">
      <table>
        <thead>
          <tr>
            <th>Capability</th>
            <th>Support</th>
            <th>Current</th>
            <th>Default</th>
            <th>Values</th>
          </tr>
        </thead>
        <tbody>
          ${capabilities.map(capability => `
            <tr>
              <td>${escapeHtml(capability.id)}</td>
              <td>${escapeHtml(capability.support || "")}</td>
              <td>${escapeHtml(capability.current || "")}</td>
              <td>${escapeHtml(capability.default || "")}</td>
              <td>${escapeHtml(capability.values || "")}</td>
            </tr>
          `).join("")}
        </tbody>
      </table>
    </div>
  `;
}

function renderMessageList(messages) {
  if (!messages || !messages.length) {
    return `<p class="muted">Nessun messaggio.</p>`;
  }

  return messages.map(message => `
    <article class="message-card" data-severity="${escapeHtml(message.severity || "info")}">
      <strong>${escapeHtml((message.severity || "info").toUpperCase())}</strong>
      <p>${escapeHtml(message.message || "")}</p>
    </article>
  `).join("");
}

function escapeHtml(value) {
  return String(value ?? "")
    .replaceAll("&", "&amp;")
    .replaceAll("<", "&lt;")
    .replaceAll(">", "&gt;")
    .replaceAll('"', "&quot;")
    .replaceAll("'", "&#39;");
}

function populateSourceOptions(sources, preferredSourceName) {
  const sourceNames = sources
    .map(source => source?.name)
    .filter(Boolean);
  const values = sourceNames.length ? sourceNames : ["CanoScan 5600F"];
  const selectedValue = values.includes(elements.sourceName.value)
    ? elements.sourceName.value
    : (values.includes(preferredSourceName) ? preferredSourceName : values[0]);

  elements.sourceName.innerHTML = values
    .map(name => `<option value="${escapeHtml(name)}">${escapeHtml(name)}</option>`)
    .join("");
  elements.sourceName.value = selectedValue;
}

function populateDpiOptions(negotiation) {
  const values = getRecommendedDpiValues(negotiation);
  const preferredValue = selectPreferredDpiValue(values, Number(elements.resolutionDpi.value));

  elements.resolutionDpi.innerHTML = values
    .map(value => `<option value="${value}">${value} dpi</option>`)
    .join("");
  elements.resolutionDpi.value = String(preferredValue);
}

function getRecommendedDpiValues(negotiation) {
  const probedValues = Array.isArray(negotiation?.recommendedDpiValues)
    ? negotiation.recommendedDpiValues
        .map(value => Number(value))
        .filter(value => Number.isFinite(value) && value > 0)
    : [];

  if (probedValues.length) {
    return probedValues;
  }

  return [75, 150, 300, 600, 1200, 2400, 4800, 9600];
}

function selectPreferredDpiValue(values, currentValue) {
  if (values.includes(currentValue)) {
    return currentValue;
  }

  if (values.includes(2400)) {
    return 2400;
  }

  return values[values.length - 1];
}

function formatStringList(values) {
  return Array.isArray(values) && values.length ? values.join(", ") : "";
}

function formatNumberList(values) {
  return Array.isArray(values) && values.length ? values.join(", ") : "";
}

function formatDpiList(values) {
  return Array.isArray(values) && values.length ? values.map(value => `${value}`).join(", ") : "";
}

function formatNumber(value) {
  return Number.isFinite(Number(value)) && Number(value) > 0 ? String(value) : "";
}

function formatDeliveredOutput(result) {
  if (!result) {
    return "";
  }

  if (!result.deliveredPixelType && !result.deliveredBitDepth) {
    return "";
  }

  return [result.deliveredPixelType, result.deliveredBitDepth ? `${result.deliveredBitDepth}-bit` : ""]
    .filter(Boolean)
    .join(" ");
}

function formatDeliveredSize(result) {
  if (!result?.deliveredWidth || !result?.deliveredHeight) {
    return "";
  }

  return `${result.deliveredWidth} x ${result.deliveredHeight}`;
}

elements.reloadButton.addEventListener("click", loadProbe);
elements.scanForm.addEventListener("submit", submitScan);
elements.outputSuggestionButton.addEventListener("click", () => {
  elements.outputPath.value = suggestOutputPath();
});
elements.outputFileFormat.addEventListener("change", () => {
  elements.outputPath.value = suggestOutputPath();
});
elements.transferMode.addEventListener("change", () => {
  elements.outputPath.value = suggestOutputPath();
});
elements.bitDepth.addEventListener("change", () => {
  elements.outputPath.value = suggestOutputPath();
});
elements.colorMode.addEventListener("change", () => {
  elements.outputPath.value = suggestOutputPath();
});

populateSourceOptions([], "CanoScan 5600F");
populateDpiOptions({});
elements.outputPath.value = suggestOutputPath();
elements.scanResult.innerHTML = `<p class="muted">Nessuna scansione eseguita.</p>`;
loadProbe();
