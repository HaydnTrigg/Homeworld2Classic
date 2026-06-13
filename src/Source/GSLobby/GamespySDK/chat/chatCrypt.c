#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\chat\chatCrypt.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void gs_prepare_key(unsigned char *key_data_ptr, __int32 key_data_len, _gs_crypt_key *key);
extern void gs_crypt(unsigned char *buffer_ptr, __int32 buffer_len, _gs_crypt_key *key);
extern void gs_xcode_buf(char *buf, __int32 len, char *enckey);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_100097D3(unsigned char *, __int32, _gs_crypt_key *);
void gs_prepare_key(unsigned char *key_data_ptr, __int32 key_data_len, _gs_crypt_key *key) // 0x100097D3
{
    mangled_assert("_gs_prepare_key@12");
    todo("implement");
    _sub_100097D3(key_data_ptr, key_data_len, key);
}

_extern void _sub_10009727(unsigned char *, __int32, _gs_crypt_key *);
void gs_crypt(unsigned char *buffer_ptr, __int32 buffer_len, _gs_crypt_key *key) // 0x10009727
{
    mangled_assert("_gs_crypt@12");
    todo("implement");
    _sub_10009727(buffer_ptr, buffer_len, key);
}

_extern void _sub_10009847(char *, __int32, char *);
void gs_xcode_buf(char *buf, __int32 len, char *enckey) // 0x10009847
{
    mangled_assert("_gs_xcode_buf@12");
    todo("implement");
    _sub_10009847(buf, len, enckey);
}

/* ---------- private code */
#endif
