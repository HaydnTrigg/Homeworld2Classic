#if 0
/* ---------- headers */

#include "decomp.h"
#include <platform\cmdline.h>
#include <Render\GL\pch.h>
#include <platform\platformexports.h>
#include <list>
#include <memory\memorylib.h>
#include <xmemory0>
#include <Render\GL\gls.h>
#include <Render\GL\glext.h>
#include <new>
#include <Render\GL\interface.h>
#include <Render\GL\types.h>
#include <xstddef>
#include <Render\GL\r_pbuffer.h>
#include <compiler\compilerconfig.h>
#include <debug\db.h>
#include <type_traits>
#include <profile\profile.h>
#include <iostream>
#include <Render\GL\hiddeninterface.h>
#include <Render\GL\r_funcs.h>
#include <map>
#include <xtree>
#include <Render\GL\r_defines.h>
#include <xutility>
#include <utility>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern PBuffer *rglCreatePbuffer(unsigned __int32 const width, unsigned __int32 const height, PBufferTexture style, unsigned __int32 const depthBits, unsigned __int32 const stencilBits);
extern bool rglApplyContext(PBuffer **ppPBuf);
extern bool rglUnapplyContext(PBuffer *PBuf);
extern void rglBindAsTexture(PBuffer &PBuf, PBufferTexture type, bool disableDepthTests);
extern void rglUnbindAsTexture(PBuffer &PBuf, PBufferTexture type);
extern void rglDestroyPbuffer(PBuffer *PBuf);

_static unsigned __int32 createPBufferTextureColour();
_static unsigned __int32 createPBufferTextureDepth();

/* ---------- globals */

extern __int32 allAttributes[41]; // 0x10020558

/* ---------- private variables */

/* ---------- public code */

PBuffer::PBuffer(unsigned __int32 const, unsigned __int32 const) // 0x100102DD
{
    mangled_assert("??0PBuffer@@QAE@II@Z");
    todo("implement");
}

PBuffer *rglCreatePbuffer(unsigned __int32 const width, unsigned __int32 const height, PBufferTexture style, unsigned __int32 const depthBits, unsigned __int32 const stencilBits) // 0x10010602
{
    mangled_assert("?rglCreatePbuffer@@YGPAVPBuffer@@IIW4PBufferTexture@@II@Z");
    todo("implement");
}

bool rglApplyContext(PBuffer **ppPBuf) // 0x10010450
{
    mangled_assert("?rglApplyContext@@YG_NPAPAVPBuffer@@@Z");
    todo("implement");
}

bool rglUnapplyContext(PBuffer *PBuf) // 0x10010A29
{
    mangled_assert("?rglUnapplyContext@@YG_NPAVPBuffer@@@Z");
    todo("implement");
}

void rglBindAsTexture(PBuffer &PBuf, PBufferTexture type, bool disableDepthTests) // 0x10010537
{
    mangled_assert("?rglBindAsTexture@@YGXAAVPBuffer@@W4PBufferTexture@@_N@Z");
    todo("implement");
}

void rglUnbindAsTexture(PBuffer &PBuf, PBufferTexture type) // 0x10010ADD
{
    mangled_assert("?rglUnbindAsTexture@@YGXAAVPBuffer@@W4PBufferTexture@@@Z");
    todo("implement");
}

void rglDestroyPbuffer(PBuffer *PBuf) // 0x100109B1
{
    mangled_assert("?rglDestroyPbuffer@@YGXPAVPBuffer@@@Z");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 createPBufferTextureColour() // 0x100102F2
{
    mangled_assert("createPBufferTextureColour");
    todo("implement");
}

_static unsigned __int32 createPBufferTextureDepth() // 0x100103AE
{
    mangled_assert("createPBufferTextureDepth");
    todo("implement");
}
#endif
