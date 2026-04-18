using System.Threading;

namespace ScanBro.Api.Services;

public sealed class ScannerOperationGate
{
    private readonly object _sync = new();
    private bool _isBusy;
    private string _operationName = string.Empty;
    private DateTimeOffset _startedAtUtc;

    public ScannerOperationLease? TryEnter(string operationName, out ScannerOperationSnapshot busySnapshot)
    {
        lock (_sync)
        {
            if (_isBusy)
            {
                busySnapshot = new ScannerOperationSnapshot(_operationName, _startedAtUtc);
                return null;
            }

            _isBusy = true;
            _operationName = operationName;
            _startedAtUtc = DateTimeOffset.UtcNow;

            busySnapshot = new ScannerOperationSnapshot(_operationName, _startedAtUtc);
            return new ScannerOperationLease(this);
        }
    }

    private void Exit()
    {
        lock (_sync)
        {
            _isBusy = false;
            _operationName = string.Empty;
            _startedAtUtc = default;
        }
    }

    public sealed class ScannerOperationLease : IDisposable
    {
        private ScannerOperationGate? _gate;

        internal ScannerOperationLease(ScannerOperationGate gate)
        {
            _gate = gate;
        }

        public void Dispose()
        {
            var gate = Interlocked.Exchange(ref _gate, null);
            gate?.Exit();
        }
    }
}

public sealed record ScannerOperationSnapshot(string OperationName, DateTimeOffset StartedAtUtc);
