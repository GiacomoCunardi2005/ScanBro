#include "preview_attempt_data.h"

const unsigned int kTransferTimeoutMs = 2000U;
const unsigned int kPreviewBulkInTimeoutMs = 500U;
const unsigned int kPreviewMaxTotalTransfers = 220U;
const unsigned int kPreviewMaxBulkInTransfers = 32U;
const unsigned int kPreviewMaxConsecutiveTimeouts = 4U;
const size_t kPreviewMaxBytes = 131072U;
const int kPreviewBulkInReadSize = 8192;
const char *kPreviewDumpPath = "data/preview-attempt-0x81.raw";
const size_t kPreviewSummarySampleBytes = 32U;

static const char kPreviewBulkPayloadAHex[] =
    "4c1d4c1d4c1d4c1d4c1d4c1d4c1d4c1d4c1df71ca21c4d1cf81ba31b4e1bf91a"
    "a41a4f1afa19a5195019fb18a5185018fb17a6175117fc16a7165216fd15a815"
    "5315fe14a9145414fe13a9135413ff12aa1255120012ab1156110111ac105710"
    "0210ad0f570f020fad0e580e030eae0d590d040daf0c5a0c050cb00bb00ab00a";

static const char kPreviewBulkPayloadBHex[] =
    "b00ab00ab00ab00ab00ab00ab00ab00a";

static const char kPreviewBulkPayloadCHex[] =
    "3300330033003300320032003200320035003500350035003800380038003800"
    "3c003c003c003c00180018001800180015001500150015001200120012001200"
    "0300030003000300020002000200020005000500050005000800080008000800"
    "0c000c000c000c00280028002800280025002500250025002200220022002200";

static const char kPreviewBulkPayloadDHex[] =
    "53075307530753075307530753075307530751074f074d074a07480746074307"
    "41073f073d073a0738073607330731072f072d072a072807260723071c071c07";

static const char kPreviewBulkPayloadEHex[] =
    "5307520750074e074d074b074907470746074407420741073f073d073b073a07"
    "380736073507330731072f072e072c072a07290727072507230722071c071c07";

static const char kPreviewBulkPayloadFHex[] =
    "0000000100020003000400050006000700080009000a000b000c000d000e000f"
    "0010001100120013001400150016001700180019001a001b001c001d001e001f"
    "0020002100220023002400250026002700280029002a002b002c002d002e002f"
    "0030003100320033003400350036003700380039003a003b003c003d003e003f"
    "0040004100420043004400450046004700480049004a004b004c004d004e004f"
    "0050005100520053005400550056005700580059005a005b005c005d005e005f"
    "0060006100620063006400650066006700680069006a006b006c006d006e006f"
    "0070007100720073007400750076007700780079007a007b007c007d007e007f"
    "0080008100820083008400850086008700880089008a008b008c008d008e008f"
    "0090009100920093009400950096009700980099009a009b009c009d009e009f"
    "00a000a100a200a300a400a500a600a700a800a900aa00ab00ac00ad00ae00af"
    "00b000b100b200b300b400b500b600b700b800b900ba00bb00bc00bd00be00bf"
    "00c000c100c200c300c400c500c600c700c800c900ca00cb00cc00cd00ce00cf"
    "00d000d100d200d300d400d500d600d700d800d900da00db00dc00dd00de00df"
    "00e000e100e200e300e400e500e600e700e800e900ea00eb00ec00ed00ee00ef"
    "00f000f100f200f300f400f500f600f700f800f900fa00fb00fc00fd00fe00ff";

static const char kPreviewBulkPayloadGHex[] =
    "5307530753075307530753075307530753074f074a07450740073b0737073207"
    "2d07280723071f071a07150710070b0707070207fd06f806f306ef06ea06e506"
    "e006db06d706d206cd06c806c306bf06ba06b506b006ab06a706a2069d069806"
    "93068f068a06850680067b06770672066d06680663065f065a06550650064b06"
    "470642063d06380633062f062a06250620061b06170612060d0608060306ff05"
    "fa05f505f005eb05e705e205dd05d805d305cf05ca05c505c005bb05b605b205"
    "ad05a805a3059e059a05950590058b05860582057d05780573056e056a056505"
    "60055b05560552054d05480543053e053a05350530052b05260522051d051805"
    "13050e050a0505050005fb04f604f204ed04e804e304de04da04d504d004cb04"
    "c604c204bd04b804b304ae04aa04a504a0049b04960492048d04880483047e04"
    "7a04750470046b04660462045d04580453044e044a04450440043b0436043104"
    "2d04280423041e041904150410040b0406040104fd03f803f303ee03e903e503"
    "e003db03d603d103cd03c803c303be03b903b503b003ab03a603a1039d039803"
    "93038e038903850380037b03760371036d03680363035e035903550350034b03"
    "460341033d03380333032e032903250320031b03160311030d0308030303fe02"
    "f902f502f002eb02e602e102dd02d802d302ce02c902c502c002bb02ac02ac02";

static const char kPreviewBulkPayloadHHex[] =
    "53072e070907e406bf06990674064f062a060506df05ba05950570054a052505"
    "0005db04b60490046b0446042104fb03d603b1038c03670341031c03ac02ac02";

const preview_control_step kPreviewInitialControlSteps[] =
    {
        {1059U, 1, 0x0C, 0x008EU, 0x0000U, 1U, NULL},
        {1061U, 1, 0x04, 0x008EU, 0x0622U, 2U, NULL},
        {1063U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0e01"},
        {1071U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0e00"},
        {1073U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0140"}};
const size_t kPreviewInitialControlStepCount =
    sizeof(kPreviewInitialControlSteps) / sizeof(kPreviewInitialControlSteps[0]);

const preview_control_step kPreviewTransitionControlSteps[] =
    {
        {1817U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1819U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0280"},
        {1821U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1823U, 0, 0x04, 0x0083U, 0x0000U, 2U, "0280"},
        {1825U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1827U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
        {1829U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1833U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
        {1835U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1837U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
        {1839U, 1, 0x04, 0x008EU, 0x0222U, 2U, NULL},
        {1841U, 0, 0x04, 0x0083U, 0x0000U, 2U, "02c0"},
        {1843U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2108"},
        {1845U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2408"},
        {1847U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6901"},
        {1849U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6a08"},
        {1851U, 0, 0x04, 0x0083U, 0x0000U, 2U, "5f01"},
        {1853U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3d00"},
        {1855U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3e00"},
        {1857U, 0, 0x04, 0x0083U, 0x0000U, 2U, "3f04"},
        {1859U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2500"},
        {1861U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2600"},
        {1863U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2710"},
        {1865U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2301"},
        {1867U, 0, 0x04, 0x0083U, 0x0000U, 2U, "2201"},
        {1869U, 1, 0x04, 0x008EU, 0x6C22U, 2U, NULL},
        {1871U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6cf1"},
        {1873U, 1, 0x04, 0x008EU, 0x6C22U, 2U, NULL},
        {1875U, 0, 0x04, 0x0083U, 0x0000U, 2U, "6cf1"}};
const size_t kPreviewTransitionControlStepCount =
    sizeof(kPreviewTransitionControlSteps) / sizeof(kPreviewTransitionControlSteps[0]);

const preview_bulk_pair kPreviewBulkPairs[] =
    {
        {1877U, "0000001080000000", 1879U, kPreviewBulkPayloadAHex},
        {1881U, "0040001080000000", 1883U, kPreviewBulkPayloadAHex},
        {1885U, "0080001010000000", 1887U, kPreviewBulkPayloadBHex},
        {1889U, "00c0001080000000", 1893U, kPreviewBulkPayloadAHex},
        {1895U, "0000011010000000", 1897U, kPreviewBulkPayloadBHex},
        {2427U, "000a000180000000", 2429U, kPreviewBulkPayloadCHex},
        {2463U, "000a000180000000", 2465U, kPreviewBulkPayloadCHex},
        {2719U, "0000001040000000", 2721U, kPreviewBulkPayloadDHex},
        {2723U, "0040001040000000", 2725U, kPreviewBulkPayloadDHex},
        {2727U, "0080001040000000", 2729U, kPreviewBulkPayloadEHex},
        {2731U, "00c0001040000000", 2733U, kPreviewBulkPayloadDHex},
        {2735U, "0000011040000000", 2737U, kPreviewBulkPayloadEHex},
        {2907U, "0000000100020000", 2909U, kPreviewBulkPayloadFHex},
        {2923U, "0002000100020000", 2925U, kPreviewBulkPayloadFHex},
        {2939U, "0004000100020000", 2941U, kPreviewBulkPayloadFHex},
        {3097U, "0000001000020000", 3099U, kPreviewBulkPayloadGHex},
        {3101U, "0040001000020000", 3103U, kPreviewBulkPayloadGHex},
        {3105U, "0080001040000000", 3107U, kPreviewBulkPayloadHHex},
        {3109U, "00c0001000020000", 3111U, kPreviewBulkPayloadGHex},
        {3113U, "0000011040000000", 3115U, kPreviewBulkPayloadHHex}};
const size_t kPreviewBulkPairCount = sizeof(kPreviewBulkPairs) / sizeof(kPreviewBulkPairs[0]);

const preview_pointer_step kPreviewPointerSteps[] =
    {
        {3603U, "0000001090130000", 3607U, 3609U, {3611U, 3613U, 3617U, 3619U}},
        {3621U, "00000010881a0000", 3625U, 3627U, {3629U, 3632U, 3635U, 3637U}},
        {3641U, "00000010681a0000", 3643U, 3645U, {3647U, 3651U, 3653U, 3657U}},
        {3659U, "00000010a81b0000", 3661U, 3665U, {3667U, 3669U, 3671U, 3675U}},
        {3677U, "00000010e8200000", 3679U, 0U, {0U, 0U, 0U, 0U}}};
const size_t kPreviewPointerStepCount =
    sizeof(kPreviewPointerSteps) / sizeof(kPreviewPointerSteps[0]);
const uint16_t kPreviewPointerPollIndices[4] = {0x4222U, 0x4322U, 0x4422U, 0x4522U};

const preview_state_poll_step kPreview03TransitionPollSteps[5] =
    {
        {2629U, 0x0C22U, "0x0C22"},
        {2742U, 0x6B22U, "0x6B22"},
        {2749U, 0x0122U, "0x0122"},
        {2753U, 0x0D22U, "0x0D22"},
        {2643U, 0x6C22U, "0x6C22"}};

const preview_state_poll_step kPreview03ReadinessPollSteps[4] =
    {
        {3129U, 0x4222U, "0x4222"},
        {3133U, 0x4322U, "0x4322"},
        {3135U, 0x4422U, "0x4422"},
        {3137U, 0x4522U, "0x4522"}};

const preview_state_write_step kPreview03Write6B87Step =
    {2747U, 0x04U, 0x0083U, 0x0000U, 2U, "6b87", "write 6b87"};
const preview_state_write_step kPreview03Write0141Step =
    {2751U, 0x04U, 0x0083U, 0x0000U, 2U, "0141", "write 0141"};
const preview_state_write_step kPreview03Write0D01PreStep =
    {2635U, 0x04U, 0x0083U, 0x0000U, 2U, "0d01", "write 0d01 (pre-kickoff)"};
const preview_state_write_step kPreview03Write0D01Step =
    {2755U, 0x04U, 0x0083U, 0x0000U, 2U, "0d01", "write 0d01"};
const preview_state_write_step kPreview03Write0FFFStep =
    {2759U, 0x04U, 0x0083U, 0x0000U, 2U, "0fff", "write 0fff"};
const preview_state_write_step kPreview03Write0140Step =
    {2653U, 0x04U, 0x0083U, 0x0000U, 2U, "0140", "write 0140"};
const preview_state_write_step kPreview03Write0C00Step =
    {2631U, 0x04U, 0x0083U, 0x0000U, 2U, "0c00", "write 0c00"};
const preview_state_write_step kPreview03Write6EFFGpioProfilePrimeStep =
    {2636U, 0x04U, 0x0083U, 0x0000U, 2U, "6eff", "write 6eff (gl847 gpio profile prime)"};
const preview_state_write_step kPreview03Write6C00GpioProfileStep =
    {2637U, 0x04U, 0x0083U, 0x0000U, 2U, "6c00", "write 6c00 (gl847 gpio profile neutral)"};
const preview_state_write_step kPreview03Write6B02GpioProfileStep =
    {2638U, 0x04U, 0x0083U, 0x0000U, 2U, "6b02", "write 6b02 (gl847 gpio profile)"};
const preview_state_write_step kPreview03Write6CF9GpioProfileStep =
    {2639U, 0x04U, 0x0083U, 0x0000U, 2U, "6cf9", "write 6cf9 (gl847 gpio profile)"};
const preview_state_write_step kPreview03Write6D20GpioProfileStep =
    {2640U, 0x04U, 0x0083U, 0x0000U, 2U, "6d20", "write 6d20 (gl847 gpio profile)"};
const preview_state_write_step kPreview03Write6EFFGpioProfileFinalStep =
    {2641U, 0x04U, 0x0083U, 0x0000U, 2U, "6eff", "write 6eff (gl847 gpio profile final)"};
const preview_state_write_step kPreview03Write6F00GpioProfileStep =
    {2642U, 0x04U, 0x0083U, 0x0000U, 2U, "6f00", "write 6f00 (gl847 gpio profile)"};
const preview_state_write_step kPreview03Write6CF0Step =
    {2645U, 0x04U, 0x0083U, 0x0000U, 2U, "6cf0", "write 6cf0"};
const unsigned int kPreview03Write6CGpio10PreArmFrame = 2644U;
/* Keep GPIO10 bit semantics only for pre-arm; consume edge follows capture-literal 6cf0. */
const uint8_t kPreview03Reg6CGpio10Mask = 0x02U;
const preview_state_write_step kPreview03PointerWriteStep =
    {3139U, 0x04U, 0x0082U, 0x0000U, 8U, "00000010f01c0000", "pointer write"};

const unsigned int kPreview03BulkFrameHints[2] = {3144U, 3146U};
const size_t kPreview03BulkFrameHintCount =
    sizeof(kPreview03BulkFrameHints) / sizeof(kPreview03BulkFrameHints[0]);
