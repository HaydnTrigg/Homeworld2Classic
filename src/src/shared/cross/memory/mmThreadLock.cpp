#if 0
/* ---------- headers */

#include "decomp.h"
#include <new>
#include <.h>
#include <Memory\mmThreadLock.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void GlobalLockInit();
extern void GlobalLockShutdown();

/* ---------- globals */

extern MMThreadLockObj *g_GlobalLock; // 0x1000B2AC

/* ---------- private variables */

_static
{
    extern unsigned char g_GlobalLockBuf[24]; // 0x1000B2B0
}

/* ---------- public code */

MMThreadLockObj::MMThreadLockObj() // 0x10006190
{
    mangled_assert("??0MMThreadLockObj@@QAE@XZ");
    todo("implement");
}

MMThreadLockObj::~MMThreadLockObj() // 0x100061A0
{
    mangled_assert("??1MMThreadLockObj@@QAE@XZ");
    todo("implement");
}

void GlobalLockInit() // 0x100061E0
{
    mangled_assert("?GlobalLockInit@@YGXXZ");
    todo("implement");
}

void GlobalLockShutdown() // 0x10006200
{
    mangled_assert("?GlobalLockShutdown@@YGXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
