#if 0
/* ---------- headers */

#include "decomp.h"
#include <errno.h>
#include <winnls.h>
#include <bcrypt.h>
#include <datetimeapi.h>
#include <string.h>
#include <namedpipeapi.h>
#include <propidl.h>
#include <unknwnbase.h>
#include <ole2.h>
#include <mmiscapi.h>
#include <securityappcontainer.h>
#include <objbase.h>
#include <joystickapi.h>
#include <wincon.h>
#include <combaseapi.h>
#include <stdlib.h>
#include <limits.h>
#include <fileapi.h>
#include <jobapi.h>
#include <pshpack2.h>
#include <ZLib\Src\trees.h>
#include <stralign.h>
#include <mciapi.h>
#include <ktmtypes.h>
#include <pshpack4.h>
#include <objidl.h>
#include <winver.h>
#include <winnetwk.h>
#include <verrsrc.h>
#include <realtimeapiset.h>
#include <processenv.h>
#include <winspool.h>
#include <wnnc.h>
#include <wow64apiset.h>
#include <utilapiset.h>
#include <ZLib\Src\deflate.h>
#include <winsvc.h>
#include <prsht.h>
#include <winuser.h>
#include <winnt.h>
#include <ZLib\Src\zutil.h>
#include <ZLib\Src\zlib.h>
#include <rpcdcep.h>
#include <ctype.h>
#include <ZLib\Src\zconf.h>
#include <ddeml.h>
#include <windows.h>
#include <sysinfoapi.h>
#include <winapifamily.h>
#include <sdkddkver.h>
#include <threadpoolapiset.h>
#include <excpt.h>
#include <oleauto.h>
#include <crtdefs.h>
#include <sal.h>
#include <inaddr.h>
#include <dlgs.h>
#include <stringapiset.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <winsmcrd.h>
#include <wtypesbase.h>
#include <winefs.h>
#include <libloaderapi.h>
#include <tvout.h>
#include <interlockedapi.h>
#include <lzexpand.h>
#include <winbase.h>
#include <handleapi.h>
#include <apisetcconv.h>
#include <minwinbase.h>
#include <winperf.h>
#include <servprov.h>
#include <synchapi.h>
#include <mmiscapi2.h>
#include <poppack.h>
#include <cguid.h>
#include <winscard.h>
#include <oaidl.h>
#include <wtypes.h>
#include <rpcndr.h>
#include <rpcnsip.h>
#include <dpapi.h>
#include <cderr.h>
#include <dde.h>
#include <rpcnterr.h>
#include <kernelspecs.h>
#include <rpcasync.h>
#include <rpc.h>
#include <basetsd.h>
#include <rpcdce.h>
#include <namespaceapi.h>
#include <oleidl.h>
#include <errhandlingapi.h>
#include <winerror.h>
#include <playsoundapi.h>
#include <securitybaseapi.h>
#include <winreg.h>
#include <reason.h>
#include <consoleapi.h>
#include <wingdi.h>
#include <pshpack8.h>
#include <shellapi.h>
#include <mcx.h>
#include <winioctl.h>
#include <timezoneapi.h>
#include <wincrypt.h>
#include <ioapiset.h>
#include <objidlbase.h>
#include <memoryapi.h>
#include <rpcsal.h>
#include <urlmon.h>
#include <apiset.h>
#include <nb30.h>
#include <processthreadsapi.h>
#include <profileapi.h>
#include <mmeapi.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <unknwn.h>
#include <systemtopologyapi.h>
#include <commdlg.h>
#include <heapapi.h>
#include <bemapiset.h>
#include <ime_cmodes.h>
#include <threadpoollegacyapiset.h>
#include <processtopologyapi.h>
#include <timeapi.h>
#include <stdarg.h>
#include <windef.h>
#include <msxml.h>
#include <debugapi.h>
#include <minwindef.h>
#include <specstrings.h>
#include <fibersapi.h>
#include <specstrings_strict.h>
#include <guiddef.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <imm.h>
#include <winsock.h>
#include <stddef.h>
#include <ncrypt.h>
#include <rpcnsi.h>
#include <pshpack1.h>

/* ---------- constants */

/* ---------- definitions */

struct static_tree_desc_s
{
    ct_data_s const *static_tree; // 0x0
    __int32 const *extra_bits; // 0x4
    __int32 extra_base; // 0x8
    __int32 elems; // 0xC
    __int32 max_length; // 0x10
};
static_assert(sizeof(static_tree_desc_s) == 20, "Invalid static_tree_desc_s size");

typedef unsigned short Pos;
typedef tree_desc_s tree_desc;
typedef unsigned char uchf;
typedef unsigned long ulg;
typedef ct_data_s ct_data;
typedef internal_state deflate_state;
typedef unsigned short Posf;
typedef __int32 intf;
typedef unsigned short ush;
typedef char charf;
typedef static_tree_desc_s static_tree_desc;
typedef unsigned short ushf;
typedef unsigned __int32 IPos;
typedef unsigned char uch;

/* ---------- prototypes */

extern void _tr_init(internal_state *s);
extern void _tr_stored_block(internal_state *s, char *buf, unsigned long stored_len, __int32 eof);
extern void _tr_align(internal_state *s);
extern void _tr_flush_block(internal_state *s, char *buf, unsigned long stored_len, __int32 eof);
extern __int32 _tr_tally(internal_state *s, unsigned __int32 dist, unsigned __int32 lc);

_static void tr_static_init(...);
_static void init_block(internal_state *s);
_static void pqdownheap(internal_state *s, ct_data_s *tree, __int32 k);
_static void gen_bitlen(internal_state *s, tree_desc_s *desc);
_static void gen_codes(ct_data_s *tree, __int32 max_code, unsigned short *bl_count);
_static void build_tree(internal_state *s, tree_desc_s *desc);
_static void scan_tree(internal_state *s, ct_data_s *tree, __int32 max_code);
_static void send_tree(internal_state *s, ct_data_s *tree, __int32 max_code);
_static __int32 build_bl_tree(internal_state *s);
_static void send_all_trees(internal_state *s, __int32 lcodes, __int32 dcodes, __int32 blcodes);
_static void compress_block(internal_state *s, ct_data_s *ltree, ct_data_s *dtree);
_static void set_data_type(internal_state *s);
_static unsigned __int32 bi_reverse(unsigned __int32 code, __int32 len);
_static void bi_flush(internal_state *s);
_static void bi_windup(internal_state *s);
_static void copy_block(internal_state *s, char *buf, unsigned __int32 len, __int32 header);

/* ---------- globals */

extern unsigned char const _length_code[256]; // 0x10009DD8
extern unsigned char const _dist_code[512]; // 0x10009ED8

/* ---------- private variables */

_static
{
    extern __int32 const extra_lbits[29]; // 0x1000A0D8
    extern __int32 const extra_dbits[30]; // 0x1000A160
    extern __int32 const extra_blbits[19]; // 0x1000A1D8
    extern unsigned char const bl_order[19]; // 0x1000A14C
    extern ct_data_s const static_ltree[288]; // 0x1000A228
    extern ct_data_s const static_dtree[30]; // 0x1000A6A8
    extern __int32 const base_length[29]; // 0x1000A720
    extern __int32 const base_dist[30]; // 0x1000A798
    extern static_tree_desc_s static_l_desc; // 0x1000D20C
    extern static_tree_desc_s static_d_desc; // 0x1000D220
    extern static_tree_desc_s static_bl_desc; // 0x1000D234
}

/* ---------- public code */

_extern void _sub_10005DE2(internal_state *);
void _tr_init(internal_state *s) // 0x10005DE2
{
    mangled_assert("__tr_init@4");
    todo("implement");
    _sub_10005DE2(s);
}

_extern void _sub_10005E4A(internal_state *, char *, unsigned long, __int32);
void _tr_stored_block(internal_state *s, char *buf, unsigned long stored_len, __int32 eof) // 0x10005E4A
{
    mangled_assert("__tr_stored_block@16");
    todo("implement");
    _sub_10005E4A(s, buf, stored_len, eof);
}

_extern void _sub_10005A75(internal_state *);
void _tr_align(internal_state *s) // 0x10005A75
{
    mangled_assert("__tr_align@4");
    todo("implement");
    _sub_10005A75(s);
}

_extern void _sub_10005C29(internal_state *, char *, unsigned long, __int32);
void _tr_flush_block(internal_state *s, char *buf, unsigned long stored_len, __int32 eof) // 0x10005C29
{
    mangled_assert("__tr_flush_block@16");
    todo("implement");
    _sub_10005C29(s, buf, stored_len, eof);
}

_extern __int32 _sub_10005ED5(internal_state *, unsigned __int32, unsigned __int32);
__int32 _tr_tally(internal_state *s, unsigned __int32 dist, unsigned __int32 lc) // 0x10005ED5
{
    mangled_assert("__tr_tally@12");
    todo("implement");
    __int32 __result = _sub_10005ED5(s, dist, lc);
    return __result;
}

/* ---------- private code */

_extern void _sub_10007312(...);
_static void tr_static_init(...) // 0x10007312
{
    mangled_assert("tr_static_init");
    todo("implement");
    _sub_10007312(arg);
}

_extern void _sub_100069DE(internal_state *);
_static void init_block(internal_state *s) // 0x100069DE
{
    mangled_assert("init_block");
    todo("implement");
    _sub_100069DE(s);
}

_extern void _sub_10006A49(internal_state *, ct_data_s *, __int32);
_static void pqdownheap(internal_state *s, ct_data_s *tree, __int32 k) // 0x10006A49
{
    mangled_assert("pqdownheap");
    todo("implement");
    _sub_10006A49(s, tree, k);
}

_extern void _sub_1000672F(internal_state *, tree_desc_s *);
_static void gen_bitlen(internal_state *s, tree_desc_s *desc) // 0x1000672F
{
    mangled_assert("gen_bitlen");
    todo("implement");
    _sub_1000672F(s, desc);
}

_extern void _sub_10006967(ct_data_s *, __int32, unsigned short *);
_static void gen_codes(ct_data_s *tree, __int32 max_code, unsigned short *bl_count) // 0x10006967
{
    mangled_assert("gen_codes");
    todo("implement");
    _sub_10006967(tree, max_code, bl_count);
}

_extern void _sub_100060B7(internal_state *, tree_desc_s *);
_static void build_tree(internal_state *s, tree_desc_s *desc) // 0x100060B7
{
    mangled_assert("build_tree");
    todo("implement");
    _sub_100060B7(s, desc);
}

_extern void _sub_10006B0D(internal_state *, ct_data_s *, __int32);
_static void scan_tree(internal_state *s, ct_data_s *tree, __int32 max_code) // 0x10006B0D
{
    mangled_assert("scan_tree");
    todo("implement");
    _sub_10006B0D(s, tree, max_code);
}

_extern void _sub_10006DF9(internal_state *, ct_data_s *, __int32);
_static void send_tree(internal_state *s, ct_data_s *tree, __int32 max_code) // 0x10006DF9
{
    mangled_assert("send_tree");
    todo("implement");
    _sub_10006DF9(s, tree, max_code);
}

_extern __int32 _sub_10006050(internal_state *);
_static __int32 build_bl_tree(internal_state *s) // 0x10006050
{
    mangled_assert("build_bl_tree");
    todo("implement");
    __int32 __result = _sub_10006050(s);
    return __result;
}

_extern void _sub_10006BDB(internal_state *, __int32, __int32, __int32);
_static void send_all_trees(internal_state *s, __int32 lcodes, __int32 dcodes, __int32 blcodes) // 0x10006BDB
{
    mangled_assert("send_all_trees");
    todo("implement");
    _sub_10006BDB(s, lcodes, dcodes, blcodes);
}

_extern void _sub_10006301(internal_state *, ct_data_s *, ct_data_s *);
_static void compress_block(internal_state *s, ct_data_s *ltree, ct_data_s *dtree) // 0x10006301
{
    mangled_assert("compress_block");
    todo("implement");
    _sub_10006301(s, ltree, dtree);
}

_extern void _sub_100072B7(internal_state *);
_static void set_data_type(internal_state *s) // 0x100072B7
{
    mangled_assert("set_data_type");
    todo("implement");
    _sub_100072B7(s);
}

_extern unsigned __int32 _sub_10005FD4(unsigned __int32, __int32);
_static unsigned __int32 bi_reverse(unsigned __int32 code, __int32 len) // 0x10005FD4
{
    mangled_assert("bi_reverse");
    todo("implement");
    unsigned __int32 __result = _sub_10005FD4(code, len);
    return __result;
}

_extern void _sub_10005F66(internal_state *);
_static void bi_flush(internal_state *s) // 0x10005F66
{
    mangled_assert("bi_flush");
    todo("implement");
    _sub_10005F66(s);
}

_extern void _sub_10005FF7(internal_state *);
_static void bi_windup(internal_state *s) // 0x10005FF7
{
    mangled_assert("bi_windup");
    todo("implement");
    _sub_10005FF7(s);
}

_extern void _sub_100066AD(internal_state *, char *, unsigned __int32, __int32);
_static void copy_block(internal_state *s, char *buf, unsigned __int32 len, __int32 header) // 0x100066AD
{
    mangled_assert("copy_block");
    todo("implement");
    _sub_100066AD(s, buf, len, header);
}
#endif
