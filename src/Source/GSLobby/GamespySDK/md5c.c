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

_extern void _sub_10005F87(MD5_CTX *);
void MD5Init(MD5_CTX *context) // 0x10005F87
{
    mangled_assert("_MD5Init@4");
    todo("implement");
    _sub_10005F87(context);
}

_extern void _sub_10006705(MD5_CTX *, unsigned char *, unsigned __int32);
void MD5Update(MD5_CTX *context, unsigned char *input, unsigned __int32 inputLen) // 0x10006705
{
    mangled_assert("_MD5Update@12");
    todo("implement");
    _sub_10006705(context, input, inputLen);
}

_extern void _sub_10005F20(unsigned char *, MD5_CTX *);
void MD5Final(unsigned char *digest, MD5_CTX *context) // 0x10005F20
{
    mangled_assert("_MD5Final@8");
    todo("implement");
    _sub_10005F20(digest, context);
}

_extern void _sub_10005FB1(unsigned char *, char *);
void MD5Print(unsigned char *digest, char *output) // 0x10005FB1
{
    mangled_assert("_MD5Print@8");
    todo("implement");
    _sub_10005FB1(digest, output);
}

_extern void _sub_10005EE5(unsigned char *, unsigned __int32, char *);
void MD5Digest(unsigned char *input, unsigned __int32 len, char *output) // 0x10005EE5
{
    mangled_assert("_MD5Digest@12");
    todo("implement");
    _sub_10005EE5(input, len, output);
}

/* ---------- private code */

_extern void _sub_10005FE1(unsigned __int32 *, unsigned char *);
_static void MD5Transform(unsigned __int32 *state, unsigned char *block) // 0x10005FE1
{
    mangled_assert("MD5Transform");
    todo("implement");
    _sub_10005FE1(state, block);
}

_extern void _sub_10005EA8(unsigned char *, unsigned __int32 *, unsigned __int32);
_static void Encode(unsigned char *output, unsigned __int32 *input, unsigned __int32 len) // 0x10005EA8
{
    mangled_assert("Encode");
    todo("implement");
    _sub_10005EA8(output, input, len);
}
#endif
