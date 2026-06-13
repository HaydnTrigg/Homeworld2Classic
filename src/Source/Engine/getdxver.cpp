#if 0
/* ---------- headers */

#include "decomp.h"
#include <mmiscapi2.h>
#include <profileapi.h>
#include <winefs.h>
#include <synchapi.h>
#include <inaddr.h>
#include <pch.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <urlmon.h>
#include <crtdefs.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <wnnc.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <specstrings.h>
#include <playsoundapi.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <handleapi.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>
#include <namespaceapi.h>
#include <oleauto.h>
#include <ktmtypes.h>
#include <servprov.h>
#include <winsmcrd.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <apiset.h>
#include <ole2.h>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <winnls.h>
#include <shellapi.h>
#include <datetimeapi.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <libloaderapi.h>
#include <sysinfoapi.h>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <winsock.h>
#include <oleidl.h>
#include <mcx.h>
#include <nb30.h>
#include <timeapi.h>
#include <dpapi.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <objidl.h>
#include <msxml.h>
#include <winver.h>
#include <winscard.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <mciapi.h>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <ime_cmodes.h>
#include <tchar.h>
#include <mbstring.h>
#include <wingdi.h>
#include <rpc.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <wincrypt.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <Dx8\dxdiag.h>
#include <oaidl.h>
#include <commdlg.h>
#include <winioctl.h>
#include <propidl.h>
#include <debugapi.h>
#include <unknwn.h>
#include <fileapi.h>
#include <imm.h>
#include <cderr.h>
#include <dde.h>
#include <windows.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <stralign.h>
#include <excpt.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <poppack.h>
#include <winsvc.h>

/* ---------- constants */

/* ---------- definitions */

typedef void const *LPCVOID;
typedef unsigned __int32 *PUINT;
typedef tagVS_FIXEDFILEINFO VS_FIXEDFILEINFO;
typedef _DXDIAG_INIT_PARAMS DXDIAG_INIT_PARAMS;

/* ---------- prototypes */

extern HRESULT GetDXVersion(unsigned long *pdwDirectXVersion, char *strDirectXVersion, __int32 cchDirectXVersion);
extern HRESULT GetDirectXVersionViaDxDiag(unsigned long *pdwDirectXVersionMajor, unsigned long *pdwDirectXVersionMinor, char *pcDirectXVersionLetter);
extern HRESULT GetDirectXVerionViaFileVersions(unsigned long *pdwDirectXVersionMajor, unsigned long *pdwDirectXVersionMinor, char *pcDirectXVersionLetter);
extern HRESULT GetFileVersion(char *szPath, _ULARGE_INTEGER *pllFileVersion);
extern _ULARGE_INTEGER MakeInt64(unsigned short a, unsigned short b, unsigned short c, unsigned short d);
extern __int32 CompareLargeInts(_ULARGE_INTEGER ullParam1, _ULARGE_INTEGER ullParam2);

/* ---------- globals */

extern _GUID FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE; // 0x7A9E24
extern _GUID FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE; // 0x7A9E34
extern _GUID FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE; // 0x7A9E44
extern _GUID PPM_PERFSTATE_CHANGE_GUID; // 0x7A9E54
extern _GUID PPM_PERFSTATE_DOMAIN_CHANGE_GUID; // 0x7A9E64
extern _GUID PPM_IDLESTATE_CHANGE_GUID; // 0x7A9E74
extern _GUID PPM_PERFSTATES_DATA_GUID; // 0x7A9E84
extern _GUID PPM_IDLESTATES_DATA_GUID; // 0x7A9E94
extern _GUID PPM_IDLE_ACCOUNTING_GUID; // 0x7A9EA4
extern _GUID PPM_IDLE_ACCOUNTING_EX_GUID; // 0x7A9EB4
extern _GUID PPM_THERMALCONSTRAINT_GUID; // 0x7A9EC4
extern _GUID PPM_PERFMON_PERFSTATE_GUID; // 0x7A9ED4
extern _GUID PPM_THERMAL_POLICY_CHANGE_GUID; // 0x7A9EE4
extern _GUID IID_IPrintDialogCallback; // 0x7A9EF4
extern _GUID IID_IPrintDialogServices; // 0x7A9F04
extern _GUID GUID_DEVINTERFACE_DISK; // 0x7A9F14
extern _GUID GUID_DEVINTERFACE_CDROM; // 0x7A9F24
extern _GUID GUID_DEVINTERFACE_PARTITION; // 0x7A9F34
extern _GUID GUID_DEVINTERFACE_TAPE; // 0x7A9F44
extern _GUID GUID_DEVINTERFACE_WRITEONCEDISK; // 0x7A9F54
extern _GUID GUID_DEVINTERFACE_VOLUME; // 0x7A9F64
extern _GUID GUID_DEVINTERFACE_MEDIUMCHANGER; // 0x7A9F74
extern _GUID GUID_DEVINTERFACE_FLOPPY; // 0x7A9F84
extern _GUID GUID_DEVINTERFACE_CDCHANGER; // 0x7A9F94
extern _GUID GUID_DEVINTERFACE_STORAGEPORT; // 0x7A9FA4
extern _GUID GUID_DEVINTERFACE_VMLUN; // 0x7A9FB4
extern _GUID GUID_DEVINTERFACE_SES; // 0x7A9FC4
extern _GUID GUID_DEVINTERFACE_HIDDEN_VOLUME; // 0x7A9FD4
extern _GUID GUID_DEVINTERFACE_COMPORT; // 0x7A9FE4
extern _GUID GUID_DEVINTERFACE_SERENUM_BUS_ENUMERATOR; // 0x7A9FF4
extern _GUID GUID_DEVINTERFACE_SMARTCARD_READER; // 0x7AA004
extern _GUID GUID_MAX_POWER_SAVINGS; // 0x7AA014
extern _GUID GUID_MIN_POWER_SAVINGS; // 0x7AA024
extern _GUID GUID_TYPICAL_POWER_SAVINGS; // 0x7AA034
extern _GUID NO_SUBGROUP_GUID; // 0x7AA044
extern _GUID ALL_POWERSCHEMES_GUID; // 0x7AA054
extern _GUID GUID_POWERSCHEME_PERSONALITY; // 0x7AA064
extern _GUID GUID_ACTIVE_POWERSCHEME; // 0x7AA074
extern _GUID GUID_IDLE_RESILIENCY_SUBGROUP; // 0x7AA084
extern _GUID GUID_IDLE_RESILIENCY_PERIOD; // 0x7AA094
extern _GUID GUID_DISK_COALESCING_POWERDOWN_TIMEOUT; // 0x7AA0A4
extern _GUID GUID_EXECUTION_REQUIRED_REQUEST_TIMEOUT; // 0x7AA0B4
extern _GUID GUID_VIDEO_SUBGROUP; // 0x7AA0C4
extern _GUID GUID_VIDEO_POWERDOWN_TIMEOUT; // 0x7AA0D4
extern _GUID GUID_VIDEO_ANNOYANCE_TIMEOUT; // 0x7AA0E4
extern _GUID GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE; // 0x7AA0F4
extern _GUID GUID_VIDEO_DIM_TIMEOUT; // 0x7AA104
extern _GUID GUID_VIDEO_ADAPTIVE_POWERDOWN; // 0x7AA114
extern _GUID GUID_MONITOR_POWER_ON; // 0x7AA124
extern _GUID GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS; // 0x7AA134
extern _GUID GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS; // 0x7AA144
extern _GUID GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS; // 0x7AA154
extern _GUID GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS; // 0x7AA164
extern _GUID GUID_CONSOLE_DISPLAY_STATE; // 0x7AA174
extern _GUID GUID_ALLOW_DISPLAY_REQUIRED; // 0x7AA184
extern _GUID GUID_VIDEO_CONSOLE_LOCK_TIMEOUT; // 0x7AA194
extern _GUID GUID_ADAPTIVE_POWER_BEHAVIOR_SUBGROUP; // 0x7AA1A4
extern _GUID GUID_NON_ADAPTIVE_INPUT_TIMEOUT; // 0x7AA1B4
extern _GUID GUID_DISK_SUBGROUP; // 0x7AA1C4
extern _GUID GUID_DISK_POWERDOWN_TIMEOUT; // 0x7AA1D4
extern _GUID GUID_DISK_IDLE_TIMEOUT; // 0x7AA1E4
extern _GUID GUID_DISK_BURST_IGNORE_THRESHOLD; // 0x7AA1F4
extern _GUID GUID_DISK_ADAPTIVE_POWERDOWN; // 0x7AA204
extern _GUID GUID_SLEEP_SUBGROUP; // 0x7AA214
extern _GUID GUID_SLEEP_IDLE_THRESHOLD; // 0x7AA224
extern _GUID GUID_STANDBY_TIMEOUT; // 0x7AA234
extern _GUID GUID_UNATTEND_SLEEP_TIMEOUT; // 0x7AA244
extern _GUID GUID_HIBERNATE_TIMEOUT; // 0x7AA254
extern _GUID GUID_HIBERNATE_FASTS4_POLICY; // 0x7AA264
extern _GUID GUID_CRITICAL_POWER_TRANSITION; // 0x7AA274
extern _GUID GUID_SYSTEM_AWAYMODE; // 0x7AA284
extern _GUID GUID_ALLOW_AWAYMODE; // 0x7AA294
extern _GUID GUID_ALLOW_STANDBY_STATES; // 0x7AA2A4
extern _GUID GUID_ALLOW_RTC_WAKE; // 0x7AA2B4
extern _GUID GUID_ALLOW_SYSTEM_REQUIRED; // 0x7AA2C4
extern _GUID GUID_SYSTEM_BUTTON_SUBGROUP; // 0x7AA2D4
extern _GUID GUID_POWERBUTTON_ACTION; // 0x7AA2E4
extern _GUID GUID_SLEEPBUTTON_ACTION; // 0x7AA2F4
extern _GUID GUID_USERINTERFACEBUTTON_ACTION; // 0x7AA304
extern _GUID GUID_LIDCLOSE_ACTION; // 0x7AA314
extern _GUID GUID_LIDOPEN_POWERSTATE; // 0x7AA324
extern _GUID GUID_BATTERY_SUBGROUP; // 0x7AA334
extern _GUID GUID_BATTERY_DISCHARGE_ACTION_0; // 0x7AA344
extern _GUID GUID_BATTERY_DISCHARGE_LEVEL_0; // 0x7AA354
extern _GUID GUID_BATTERY_DISCHARGE_FLAGS_0; // 0x7AA364
extern _GUID GUID_BATTERY_DISCHARGE_ACTION_1; // 0x7AA374
extern _GUID GUID_BATTERY_DISCHARGE_LEVEL_1; // 0x7AA384
extern _GUID GUID_BATTERY_DISCHARGE_FLAGS_1; // 0x7AA394
extern _GUID GUID_BATTERY_DISCHARGE_ACTION_2; // 0x7AA3A4
extern _GUID GUID_BATTERY_DISCHARGE_LEVEL_2; // 0x7AA3B4
extern _GUID GUID_BATTERY_DISCHARGE_FLAGS_2; // 0x7AA3C4
extern _GUID GUID_BATTERY_DISCHARGE_ACTION_3; // 0x7AA3D4
extern _GUID GUID_BATTERY_DISCHARGE_LEVEL_3; // 0x7AA3E4
extern _GUID GUID_BATTERY_DISCHARGE_FLAGS_3; // 0x7AA3F4
extern _GUID GUID_PROCESSOR_SETTINGS_SUBGROUP; // 0x7AA404
extern _GUID GUID_PROCESSOR_THROTTLE_POLICY; // 0x7AA414
extern _GUID GUID_PROCESSOR_THROTTLE_MAXIMUM; // 0x7AA424
extern _GUID GUID_PROCESSOR_THROTTLE_MINIMUM; // 0x7AA434
extern _GUID GUID_PROCESSOR_ALLOW_THROTTLING; // 0x7AA444
extern _GUID GUID_PROCESSOR_IDLESTATE_POLICY; // 0x7AA454
extern _GUID GUID_PROCESSOR_PERFSTATE_POLICY; // 0x7AA464
extern _GUID GUID_PROCESSOR_PERF_INCREASE_THRESHOLD; // 0x7AA474
extern _GUID GUID_PROCESSOR_PERF_DECREASE_THRESHOLD; // 0x7AA484
extern _GUID GUID_PROCESSOR_PERF_INCREASE_POLICY; // 0x7AA494
extern _GUID GUID_PROCESSOR_PERF_DECREASE_POLICY; // 0x7AA4A4
extern _GUID GUID_PROCESSOR_PERF_INCREASE_TIME; // 0x7AA4B4
extern _GUID GUID_PROCESSOR_PERF_DECREASE_TIME; // 0x7AA4C4
extern _GUID GUID_PROCESSOR_PERF_TIME_CHECK; // 0x7AA4D4
extern _GUID GUID_PROCESSOR_PERF_BOOST_POLICY; // 0x7AA4E4
extern _GUID GUID_PROCESSOR_PERF_BOOST_MODE; // 0x7AA4F4
extern _GUID GUID_PROCESSOR_IDLE_ALLOW_SCALING; // 0x7AA504
extern _GUID GUID_PROCESSOR_IDLE_DISABLE; // 0x7AA514
extern _GUID GUID_PROCESSOR_IDLE_STATE_MAXIMUM; // 0x7AA524
extern _GUID GUID_PROCESSOR_IDLE_TIME_CHECK; // 0x7AA534
extern _GUID GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD; // 0x7AA544
extern _GUID GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD; // 0x7AA554
extern _GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD; // 0x7AA564
extern _GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD; // 0x7AA574
extern _GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY; // 0x7AA584
extern _GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY; // 0x7AA594
extern _GUID GUID_PROCESSOR_CORE_PARKING_MAX_CORES; // 0x7AA5A4
extern _GUID GUID_PROCESSOR_CORE_PARKING_MIN_CORES; // 0x7AA5B4
extern _GUID GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME; // 0x7AA5C4
extern _GUID GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME; // 0x7AA5D4
extern _GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR; // 0x7AA5E4
extern _GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD; // 0x7AA5F4
extern _GUID GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING; // 0x7AA604
extern _GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR; // 0x7AA614
extern _GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD; // 0x7AA624
extern _GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING; // 0x7AA634
extern _GUID GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD; // 0x7AA644
extern _GUID GUID_PROCESSOR_PARKING_CORE_OVERRIDE; // 0x7AA654
extern _GUID GUID_PROCESSOR_PARKING_PERF_STATE; // 0x7AA664
extern _GUID GUID_PROCESSOR_PARKING_CONCURRENCY_THRESHOLD; // 0x7AA674
extern _GUID GUID_PROCESSOR_PARKING_HEADROOM_THRESHOLD; // 0x7AA684
extern _GUID GUID_PROCESSOR_PERF_HISTORY; // 0x7AA694
extern _GUID GUID_PROCESSOR_PERF_LATENCY_HINT; // 0x7AA6A4
extern _GUID GUID_PROCESSOR_DISTRIBUTE_UTILITY; // 0x7AA6B4
extern _GUID GUID_SYSTEM_COOLING_POLICY; // 0x7AA6C4
extern _GUID GUID_LOCK_CONSOLE_ON_WAKE; // 0x7AA6D4
extern _GUID GUID_DEVICE_IDLE_POLICY; // 0x7AA6E4
extern _GUID GUID_ACDC_POWER_SOURCE; // 0x7AA6F4
extern _GUID GUID_LIDSWITCH_STATE_CHANGE; // 0x7AA704
extern _GUID GUID_BATTERY_PERCENTAGE_REMAINING; // 0x7AA714
extern _GUID GUID_GLOBAL_USER_PRESENCE; // 0x7AA724
extern _GUID GUID_SESSION_DISPLAY_STATUS; // 0x7AA734
extern _GUID GUID_SESSION_USER_PRESENCE; // 0x7AA744
extern _GUID GUID_IDLE_BACKGROUND_TASK; // 0x7AA754
extern _GUID GUID_BACKGROUND_TASK_NOTIFICATION; // 0x7AA764
extern _GUID GUID_APPLAUNCH_BUTTON; // 0x7AA774
extern _GUID GUID_PCIEXPRESS_SETTINGS_SUBGROUP; // 0x7AA784
extern _GUID GUID_PCIEXPRESS_ASPM_POLICY; // 0x7AA794
extern _GUID GUID_ENABLE_SWITCH_FORCED_SHUTDOWN; // 0x7AA7A4
extern _GUID CLSID_DxDiagProvider; // 0x7AA7B4
extern _GUID IID_IDxDiagProvider; // 0x7AA7C4
extern _GUID IID_IDxDiagContainer; // 0x7AA7D4
extern _GUID NETWORK_MANAGER_FIRST_IP_ADDRESS_ARRIVAL_GUID; // 0x7AA7E4
extern _GUID NETWORK_MANAGER_LAST_IP_ADDRESS_REMOVAL_GUID; // 0x7AA7F4
extern _GUID DOMAIN_JOIN_GUID; // 0x7AA804
extern _GUID DOMAIN_LEAVE_GUID; // 0x7AA814
extern _GUID FIREWALL_PORT_OPEN_GUID; // 0x7AA824
extern _GUID FIREWALL_PORT_CLOSE_GUID; // 0x7AA834
extern _GUID MACHINE_POLICY_PRESENT_GUID; // 0x7AA844
extern _GUID USER_POLICY_PRESENT_GUID; // 0x7AA854
extern _GUID RPC_INTERFACE_EVENT_GUID; // 0x7AA864
extern _GUID NAMED_PIPE_EVENT_GUID; // 0x7AA874
extern _GUID CUSTOM_SYSTEM_STATE_CHANGE_EVENT_GUID; // 0x7AA884

/* ---------- private variables */

/* ---------- public code */

_extern HRESULT _sub_5F7B3F(unsigned long *, char *, __int32);
HRESULT GetDXVersion(unsigned long *pdwDirectXVersion, char *strDirectXVersion, __int32 cchDirectXVersion) // 0x5F7B3F
{
    mangled_assert("?GetDXVersion@@YGJPAKPADH@Z");
    todo("implement");
    HRESULT __result = _sub_5F7B3F(pdwDirectXVersion, strDirectXVersion, cchDirectXVersion);
    return __result;
}

_extern HRESULT _sub_5F8319(unsigned long *, unsigned long *, char *);
HRESULT GetDirectXVersionViaDxDiag(unsigned long *pdwDirectXVersionMajor, unsigned long *pdwDirectXVersionMinor, char *pcDirectXVersionLetter) // 0x5F8319
{
    mangled_assert("?GetDirectXVersionViaDxDiag@@YGJPAK0PAD@Z");
    todo("implement");
    HRESULT __result = _sub_5F8319(pdwDirectXVersionMajor, pdwDirectXVersionMinor, pcDirectXVersionLetter);
    return __result;
}

_extern HRESULT _sub_5F7C17(unsigned long *, unsigned long *, char *);
HRESULT GetDirectXVerionViaFileVersions(unsigned long *pdwDirectXVersionMajor, unsigned long *pdwDirectXVersionMinor, char *pcDirectXVersionLetter) // 0x5F7C17
{
    mangled_assert("?GetDirectXVerionViaFileVersions@@YGJPAK0PAD@Z");
    todo("implement");
    HRESULT __result = _sub_5F7C17(pdwDirectXVersionMajor, pdwDirectXVersionMinor, pcDirectXVersionLetter);
    return __result;
}

_extern HRESULT _sub_5F84EA(char *, _ULARGE_INTEGER *);
HRESULT GetFileVersion(char *szPath, _ULARGE_INTEGER *pllFileVersion) // 0x5F84EA
{
    mangled_assert("?GetFileVersion@@YGJPADPAT_ULARGE_INTEGER@@@Z");
    todo("implement");
    HRESULT __result = _sub_5F84EA(szPath, pllFileVersion);
    return __result;
}

_extern _ULARGE_INTEGER _sub_5F858B(unsigned short, unsigned short, unsigned short, unsigned short);
_ULARGE_INTEGER MakeInt64(unsigned short a, unsigned short b, unsigned short c, unsigned short d) // 0x5F858B
{
    mangled_assert("?MakeInt64@@YG?AT_ULARGE_INTEGER@@GGGG@Z");
    todo("implement");
    _ULARGE_INTEGER __result = _sub_5F858B(a, b, c, d);
    return __result;
}

_extern __int32 _sub_5F7B1A(_ULARGE_INTEGER, _ULARGE_INTEGER);
__int32 CompareLargeInts(_ULARGE_INTEGER ullParam1, _ULARGE_INTEGER ullParam2) // 0x5F7B1A
{
    mangled_assert("?CompareLargeInts@@YGHT_ULARGE_INTEGER@@0@Z");
    todo("implement");
    __int32 __result = _sub_5F7B1A(ullParam1, ullParam2);
    return __result;
}

/* ---------- private code */
#endif
