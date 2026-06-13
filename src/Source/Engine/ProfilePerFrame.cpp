#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <list>
#include <assist\fixedstring.h>
#include <map>
#include <xtree>
#include <fileio\logfile.h>
#include <ProfilePerFrame.h>
#include <profile\profile.h>
#include <iostream>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern LogFile logfile; // 0x846E40
    extern bool logFileCreated; // 0x846E38
    extern unsigned __int32 frameCount; // 0x846E3C
}

/* ---------- public code */

_extern _sub_5CB73C(Profile::ProfilePerFrame *const, char const *);
Profile::ProfilePerFrame::ProfilePerFrame(char const *) // 0x5CB73C
{
    mangled_assert("??0ProfilePerFrame@Profile@@QAE@PBD@Z");
    todo("implement");
    _sub_5CB73C(this, arg);
}

_extern void _sub_5CB785(Profile::ProfilePerFrame *const);
Profile::ProfilePerFrame::~ProfilePerFrame() // 0x5CB785
{
    mangled_assert("??1ProfilePerFrame@Profile@@QAE@XZ");
    todo("implement");
    _sub_5CB785(this);
}

/* ---------- private code */
#endif
