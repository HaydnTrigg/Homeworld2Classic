#if 0
/* ---------- headers */

#include "decomp.h"
#include <swprintf.inl>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <winuser.h>
#include <ime_cmodes.h>
#include <winsock.h>
#include <sysinfoapi.h>
#include <windows.h>
#include <winapifamily.h>
#include <time.h>
#include <threadpoolapiset.h>
#include <sdkddkver.h>
#include <time.inl>
#include <excpt.h>
#include <stringapiset.h>
#include <stdlib.h>
#include <libloaderapi.h>
#include <limits.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <GSLobby\GamespySDK\nonport.h>
#include <imm.h>
#include <minwinbase.h>
#include <string.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <stdio.h>
#include <synchapi.h>
#include <vadefs.h>
#include <poppack.h>
#include <guiddef.h>
#include <stdarg.h>
#include <windef.h>
#include <minwindef.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <inaddr.h>
#include <stralign.h>
#include <namespaceapi.h>
#include <winsvc.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <timezoneapi.h>
#include <ioapiset.h>
#include <memoryapi.h>
#include <GSLobby\GamespySDK\qr2\qr2.h>
#include <winnt.h>
#include <GSLobby\GamespySDK\qr2\qr2regkeys.h>
#include <ctype.h>
#include <apiset.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <systemtopologyapi.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <assert.h>
#include <debugapi.h>
#include <fibersapi.h>
#include <kernelspecs.h>
#include <basetsd.h>
#include <mcx.h>
#include <pshpack1.h>
#include <winnls.h>
#include <datetimeapi.h>
#include <namedpipeapi.h>
#include <securityappcontainer.h>
#include <wincon.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <wtime.inl>
#include <ktmtypes.h>
#include <pshpack4.h>

/* ---------- constants */

/* ---------- definitions */

struct qr2_keybuffer_s
{
    unsigned char keys[254]; // 0x0
    __int32 numkeys; // 0x100
};
static_assert(sizeof(qr2_keybuffer_s) == 260, "Invalid qr2_keybuffer_s size");

struct qr2_buffer_s
{
    char buffer[2048]; // 0x0
    __int32 len; // 0x800
};
static_assert(sizeof(qr2_buffer_s) == 2052, "Invalid qr2_buffer_s size");

/* ---------- prototypes */

extern qr2_error_t qr2_init_socket(qr2_implementation_s **qrec, unsigned __int32 s, __int32 boundport, char const *gamename, char const *secret_key, __int32 ispublic, __int32 natnegotiate, void (*server_key_callback)(__int32, qr2_buffer_s *, void *), void (*player_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*team_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*key_list_callback)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*playerteam_count_callback)(qr2_key_type, void *), void (*adderror_callback)(qr2_error_t, char *, void *), void *userdata);
extern qr2_error_t qr2_init(qr2_implementation_s **qrec, char const *ip, __int32 baseport, char const *gamename, char const *secret_key, __int32 ispublic, __int32 natnegotiate, void (*server_key_callback)(__int32, qr2_buffer_s *, void *), void (*player_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*team_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*key_list_callback)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*playerteam_count_callback)(qr2_key_type, void *), void (*adderror_callback)(qr2_error_t, char *, void *), void *userdata);
extern void qr2_register_natneg_callback(qr2_implementation_s *qrec, void (*nncallback)(__int32, void *));
extern void qr2_think(qr2_implementation_s *qrec);
extern void qr2_send_statechanged(qr2_implementation_s *qrec);
extern void qr2_shutdown(qr2_implementation_s *qrec);
extern void qr2_keybuffer_add(qr2_keybuffer_s *keybuffer, __int32 keyid);
extern void qr2_buffer_add_int(qr2_buffer_s *outbuf, __int32 value);
extern void qr2_buffer_add(qr2_buffer_s *outbuf, char const *value);
extern void qr2_parse_query(qr2_implementation_s *qrec, char *query, __int32 len, sockaddr *sender);

_static void qr2_check_send_heartbeat(qr2_implementation_s *qrec);
_static __int32 get_sockaddrin(char const *host, __int32 port, sockaddr_in *saddr, hostent **savehent);
_static void gs_encode(unsigned char *ins, __int32 size, unsigned char *result);
_static void gs_encrypt(unsigned char *key, __int32 key_len, unsigned char *buffer_ptr, __int32 buffer_len);
_static void qr_add_packet_header(qr2_buffer_s *buf, char ptype, char *reqkey);
_static void compute_challenge_response(qr2_implementation_s *qrec, qr2_buffer_s *buf, char *challenge, __int32 challengelen);
_static void qr_build_partial_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, qr2_key_type keytype, __int32 keycount, unsigned char *keys);
_static void qr_build_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, __int32 serverkeycount, unsigned char *serverkeys, __int32 playerkeycount, unsigned char *playerkeys, __int32 teamkeycount, unsigned char *teamkeys);
_static void qr_process_query(qr2_implementation_s *qrec, qr2_buffer_s *buf, unsigned char *qdata, __int32 len);
_static void qr_build_partial_old_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, qr2_key_type keytype);
_static void qr_process_old_query(qr2_implementation_s *qrec, qr2_buffer_s *buf);
_static void qr_process_client_message(qr2_implementation_s *qrec, char *buf, __int32 len);
_static __int32 qr_got_recent_message(qr2_implementation_s *qrec, __int32 msgkey);
_static void send_keepalive(qr2_implementation_s *qrec);
_static void send_heartbeat(qr2_implementation_s *qrec, __int32 statechanged);

/* ---------- globals */

extern qr2_implementation_s static_qr2_rec; // 0x1001E080

/* ---------- private variables */

_static
{
    extern qr2_implementation_s *current_rec; // 0x1001E188
    extern __int32 num_local_ips; // 0x1001E930
    extern in_addr local_ip_list[5]; // 0x1001E934
}

/* ---------- public code */

_extern qr2_error_t _sub_10006F83(qr2_implementation_s **, unsigned __int32, __int32, char const *, char const *, __int32, __int32, void (*)(__int32, qr2_buffer_s *, void *), void (*)(__int32, __int32, qr2_buffer_s *, void *), void (*)(__int32, __int32, qr2_buffer_s *, void *), void (*)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*)(qr2_key_type, void *), void (*)(qr2_error_t, char *, void *), void *);
qr2_error_t qr2_init_socket(qr2_implementation_s **qrec, unsigned __int32 s, __int32 boundport, char const *gamename, char const *secret_key, __int32 ispublic, __int32 natnegotiate, void (*server_key_callback)(__int32, qr2_buffer_s *, void *), void (*player_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*team_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*key_list_callback)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*playerteam_count_callback)(qr2_key_type, void *), void (*adderror_callback)(qr2_error_t, char *, void *), void *userdata) // 0x10006F83
{
    mangled_assert("_qr2_init_socket@56");
    todo("implement");
    qr2_error_t __result = _sub_10006F83(qrec, s, boundport, gamename, secret_key, ispublic, natnegotiate, server_key_callback, player_key_callback, team_key_callback, key_list_callback, playerteam_count_callback, adderror_callback, userdata);
    return __result;
}

_extern qr2_error_t _sub_10006E97(qr2_implementation_s **, char const *, __int32, char const *, char const *, __int32, __int32, void (*)(__int32, qr2_buffer_s *, void *), void (*)(__int32, __int32, qr2_buffer_s *, void *), void (*)(__int32, __int32, qr2_buffer_s *, void *), void (*)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*)(qr2_key_type, void *), void (*)(qr2_error_t, char *, void *), void *);
qr2_error_t qr2_init(qr2_implementation_s **qrec, char const *ip, __int32 baseport, char const *gamename, char const *secret_key, __int32 ispublic, __int32 natnegotiate, void (*server_key_callback)(__int32, qr2_buffer_s *, void *), void (*player_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*team_key_callback)(__int32, __int32, qr2_buffer_s *, void *), void (*key_list_callback)(qr2_key_type, qr2_keybuffer_s *, void *), __int32 (*playerteam_count_callback)(qr2_key_type, void *), void (*adderror_callback)(qr2_error_t, char *, void *), void *userdata) // 0x10006E97
{
    mangled_assert("_qr2_init@56");
    todo("implement");
    qr2_error_t __result = _sub_10006E97(qrec, ip, baseport, gamename, secret_key, ispublic, natnegotiate, server_key_callback, player_key_callback, team_key_callback, key_list_callback, playerteam_count_callback, adderror_callback, userdata);
    return __result;
}

_extern void _sub_10007408(qr2_implementation_s *, void (*)(__int32, void *));
void qr2_register_natneg_callback(qr2_implementation_s *qrec, void (*nncallback)(__int32, void *)) // 0x10007408
{
    mangled_assert("_qr2_register_natneg_callback@8");
    todo("implement");
    _sub_10007408(qrec, nncallback);
}

_extern void _sub_100074B7(qr2_implementation_s *);
void qr2_think(qr2_implementation_s *qrec) // 0x100074B7
{
    mangled_assert("_qr2_think@4");
    todo("implement");
    _sub_100074B7(qrec);
}

_extern void _sub_10007422(qr2_implementation_s *);
void qr2_send_statechanged(qr2_implementation_s *qrec) // 0x10007422
{
    mangled_assert("_qr2_send_statechanged@4");
    todo("implement");
    _sub_10007422(qrec);
}

_extern void _sub_10007457(qr2_implementation_s *);
void qr2_shutdown(qr2_implementation_s *qrec) // 0x10007457
{
    mangled_assert("_qr2_shutdown@4");
    todo("implement");
    _sub_10007457(qrec);
}

_extern void _sub_1000715C(qr2_keybuffer_s *, __int32);
void qr2_keybuffer_add(qr2_keybuffer_s *keybuffer, __int32 keyid) // 0x1000715C
{
    mangled_assert("_qr2_keybuffer_add@8");
    todo("implement");
    _sub_1000715C(keybuffer, keyid);
}

_extern void _sub_10006DD8(qr2_buffer_s *, __int32);
void qr2_buffer_add_int(qr2_buffer_s *outbuf, __int32 value) // 0x10006DD8
{
    mangled_assert("_qr2_buffer_add_int@8");
    todo("implement");
    _sub_10006DD8(outbuf, value);
}

_extern void _sub_10006D85(qr2_buffer_s *, char const *);
void qr2_buffer_add(qr2_buffer_s *outbuf, char const *value) // 0x10006D85
{
    mangled_assert("_qr2_buffer_add@8");
    todo("implement");
    _sub_10006D85(outbuf, value);
}

_extern void _sub_1000718A(qr2_implementation_s *, char *, __int32, sockaddr *);
void qr2_parse_query(qr2_implementation_s *qrec, char *query, __int32 len, sockaddr *sender) // 0x1000718A
{
    mangled_assert("_qr2_parse_query@16");
    todo("implement");
    _sub_1000718A(qrec, query, len, sender);
}

/* ---------- private code */

_extern void _sub_10006E03(qr2_implementation_s *);
_static void qr2_check_send_heartbeat(qr2_implementation_s *qrec) // 0x10006E03
{
    mangled_assert("qr2_check_send_heartbeat");
    todo("implement");
    _sub_10006E03(qrec);
}

_extern __int32 _sub_10006B32(char const *, __int32, sockaddr_in *, hostent **);
_static __int32 get_sockaddrin(char const *host, __int32 port, sockaddr_in *saddr, hostent **savehent) // 0x10006B32
{
    mangled_assert("get_sockaddrin");
    todo("implement");
    __int32 __result = _sub_10006B32(host, port, saddr, savehent);
    return __result;
}

_extern void _sub_10006BA5(unsigned char *, __int32, unsigned char *);
_static void gs_encode(unsigned char *ins, __int32 size, unsigned char *result) // 0x10006BA5
{
    mangled_assert("gs_encode");
    todo("implement");
    _sub_10006BA5(ins, size, result);
}

_extern void _sub_10006C61(unsigned char *, __int32, unsigned char *, __int32);
_static void gs_encrypt(unsigned char *key, __int32 key_len, unsigned char *buffer_ptr, __int32 buffer_len) // 0x10006C61
{
    mangled_assert("gs_encrypt");
    todo("implement");
    _sub_10006C61(key, key_len, buffer_ptr, buffer_len);
}

_extern void _sub_1000753A(qr2_buffer_s *, char, char *);
_static void qr_add_packet_header(qr2_buffer_s *buf, char ptype, char *reqkey) // 0x1000753A
{
    mangled_assert("qr_add_packet_header");
    todo("implement");
    _sub_1000753A(buf, ptype, reqkey);
}

_extern void _sub_10006ABD(qr2_implementation_s *, qr2_buffer_s *, char *, __int32);
_static void compute_challenge_response(qr2_implementation_s *qrec, qr2_buffer_s *buf, char *challenge, __int32 challengelen) // 0x10006ABD
{
    mangled_assert("compute_challenge_response");
    todo("implement");
    _sub_10006ABD(qrec, buf, challenge, challengelen);
}

_extern void _sub_100076D5(qr2_implementation_s *, qr2_buffer_s *, qr2_key_type, __int32, unsigned char *);
_static void qr_build_partial_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, qr2_key_type keytype, __int32 keycount, unsigned char *keys) // 0x100076D5
{
    mangled_assert("qr_build_partial_query_reply");
    todo("implement");
    _sub_100076D5(qrec, buf, keytype, keycount, keys);
}

_extern void _sub_1000790D(qr2_implementation_s *, qr2_buffer_s *, __int32, unsigned char *, __int32, unsigned char *, __int32, unsigned char *);
_static void qr_build_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, __int32 serverkeycount, unsigned char *serverkeys, __int32 playerkeycount, unsigned char *playerkeys, __int32 teamkeycount, unsigned char *teamkeys) // 0x1000790D
{
    mangled_assert("qr_build_query_reply");
    todo("implement");
    _sub_1000790D(qrec, buf, serverkeycount, serverkeys, playerkeycount, playerkeys, teamkeycount, teamkeys);
}

_extern void _sub_10007A6A(qr2_implementation_s *, qr2_buffer_s *, unsigned char *, __int32);
_static void qr_process_query(qr2_implementation_s *qrec, qr2_buffer_s *buf, unsigned char *qdata, __int32 len) // 0x10007A6A
{
    mangled_assert("qr_process_query");
    todo("implement");
    _sub_10007A6A(qrec, buf, qdata, len);
}

_extern void _sub_10007565(qr2_implementation_s *, qr2_buffer_s *, qr2_key_type);
_static void qr_build_partial_old_query_reply(qr2_implementation_s *qrec, qr2_buffer_s *buf, qr2_key_type keytype) // 0x10007565
{
    mangled_assert("qr_build_partial_old_query_reply");
    todo("implement");
    _sub_10007565(qrec, buf, keytype);
}

_extern void _sub_10007A1F(qr2_implementation_s *, qr2_buffer_s *);
_static void qr_process_old_query(qr2_implementation_s *qrec, qr2_buffer_s *buf) // 0x10007A1F
{
    mangled_assert("qr_process_old_query");
    todo("implement");
    _sub_10007A1F(qrec, buf);
}

_extern void _sub_10007993(qr2_implementation_s *, char *, __int32);
_static void qr_process_client_message(qr2_implementation_s *qrec, char *buf, __int32 len) // 0x10007993
{
    mangled_assert("qr_process_client_message");
    todo("implement");
    _sub_10007993(qrec, buf, len);
}

_extern __int32 _sub_1000794D(qr2_implementation_s *, __int32);
_static __int32 qr_got_recent_message(qr2_implementation_s *qrec, __int32 msgkey) // 0x1000794D
{
    mangled_assert("qr_got_recent_message");
    todo("implement");
    __int32 __result = _sub_1000794D(qrec, msgkey);
    return __result;
}

_extern void _sub_10007C9D(qr2_implementation_s *);
_static void send_keepalive(qr2_implementation_s *qrec) // 0x10007C9D
{
    mangled_assert("send_keepalive");
    todo("implement");
    _sub_10007C9D(qrec);
}

_extern void _sub_10007AF7(qr2_implementation_s *, __int32);
_static void send_heartbeat(qr2_implementation_s *qrec, __int32 statechanged) // 0x10007AF7
{
    mangled_assert("send_heartbeat");
    todo("implement");
    _sub_10007AF7(qrec, statechanged);
}
#endif
