#if 0
/* ---------- headers */

#include "decomp.h"
#include <GSLobby\GamespySDK\md5.h>
#include <string.h>
#include <stdio.h>
#include <crtdefs.h>
#include <sal.h>
#include <concurrencysal.h>
#include <vadefs.h>
#include <swprintf.inl>

/* ---------- constants */

/* ---------- definitions */

typedef unsigned __int32 UINT4;
typedef unsigned char *POINTER;

/* ---------- prototypes */

extern void MD5Init(MD5_CTX *context);
extern void MD5Update(MD5_CTX *context, unsigned char *input, unsigned __int32 inputLen);
extern void MD5Final(unsigned char *digest, MD5_CTX *context);
extern void MD5Print(unsigned char *digest, char *output);
extern void MD5Digest(unsigned char *input, unsigned __int32 len, char *output);

_static void MD5Transform(unsigned __int32 *state, unsigned char *block);
_static void Encode(unsigned char *output, unsigned __int32 *input, unsigned __int32 len);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned char PADDING[64]; // 0x1001E038
}

/* ---------- public code */

void MD5Init(MD5_CTX *context) // 0x10005F87
{
    mangled_assert("_MD5Init@4");
    todo("implement");
}

void MD5Update(MD5_CTX *context, unsigned char *input, unsigned __int32 inputLen) // 0x10006705
{
    mangled_assert("_MD5Update@12");
    todo("implement");
}

void MD5Final(unsigned char *digest, MD5_CTX *context) // 0x10005F20
{
    mangled_assert("_MD5Final@8");
    todo("implement");
}

void MD5Print(unsigned char *digest, char *output) // 0x10005FB1
{
    mangled_assert("_MD5Print@8");
    todo("implement");
}

void MD5Digest(unsigned char *input, unsigned __int32 len, char *output) // 0x10005EE5
{
    mangled_assert("_MD5Digest@12");
    todo("implement");
}

/* ---------- private code */

_static void MD5Transform(unsigned __int32 *state, unsigned char *block) // 0x10005FE1
{
    mangled_assert("MD5Transform");
    todo("implement");
}

_static void Encode(unsigned char *output, unsigned __int32 *input, unsigned __int32 len) // 0x10005EA8
{
    mangled_assert("Encode");
    todo("implement");
}
#endif
