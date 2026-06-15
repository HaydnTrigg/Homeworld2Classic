#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\serverbrowsing\sb_crypt.h>
#include <stdlib.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <string.h>
#include <limits.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void GOAHashInit(_GOACryptState *state);
extern void GOACryptInit(_GOACryptState *state, unsigned char *key, unsigned char keysize);
extern unsigned char GOADecryptByte(_GOACryptState *state, unsigned char b);
extern void GOADecrypt(_GOACryptState *state, unsigned char *bp, __int32 len);

_static unsigned char keyrand(_GOACryptState *state, __int32 limit, unsigned char *user_key, unsigned char keysize, unsigned char *rsum, unsigned __int32 *keypos);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

void GOAHashInit(_GOACryptState *state) // 0x1000E630
{
    mangled_assert("_GOAHashInit@4");
    todo("implement");
}

void GOACryptInit(_GOACryptState *state, unsigned char *key, unsigned char keysize) // 0x1000E496
{
    mangled_assert("_GOACryptInit@12");
    todo("implement");
}

unsigned char GOADecryptByte(_GOACryptState *state, unsigned char b) // 0x1000E552
{
    mangled_assert("_GOADecryptByte@8");
    todo("implement");
}

void GOADecrypt(_GOACryptState *state, unsigned char *bp, __int32 len) // 0x1000E527
{
    mangled_assert("_GOADecrypt@12");
    todo("implement");
}

/* ---------- private code */

_static unsigned char keyrand(_GOACryptState *state, __int32 limit, unsigned char *user_key, unsigned char keysize, unsigned char *rsum, unsigned __int32 *keypos) // 0x1000E65C
{
    mangled_assert("keyrand");
    todo("implement");
}
#endif
