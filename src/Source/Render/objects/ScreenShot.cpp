#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <Objects\ScreenShot.h>
#include <Objects\Objects.h>
#include <Objects\Jpg\INTERFCE.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void screenshotSave(char const *fullpath, unsigned char *buf, __int32 width, __int32 height);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern void _sub_1008FC40(char const *, unsigned char *, __int32, __int32);
void screenshotSave(char const *fullpath, unsigned char *buf, __int32 width, __int32 height) // 0x1008FC40
{
    mangled_assert("?screenshotSave@@YGXPBDPAEHH@Z");
    todo("implement");
    _sub_1008FC40(fullpath, buf, width, height);
}

/* ---------- private code */
#endif
