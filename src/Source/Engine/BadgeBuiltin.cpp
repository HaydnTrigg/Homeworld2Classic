#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <pch.h>
#include <fileio\filepath.h>
#include <fileio\ramstream.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <assist\fixedstring.h>
#include <assist\stlexstring.h>
#include <BadgeBuiltin.h>
#include <Badge.h>

/* ---------- constants */

/* ---------- definitions */

struct BuiltinBadge
{
    char const *filename; // 0x0
    unsigned char const *data; // 0x4
    unsigned __int32 size; // 0x8
};
static_assert(sizeof(BuiltinBadge) == 12, "Invalid BuiltinBadge size");

/* ---------- prototypes */


_static BuiltinBadge const *FindBadge(char const *filename);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned char const BADGE_DEFAULT[16428]; // 0x7624F0
    extern unsigned char const BADGE_STEPHANE[16428]; // 0x766520
    extern unsigned char const BADGE_BIZOU[16428]; // 0x76A550
    extern unsigned char const BADGE_ASSPROD[16428]; // 0x76E580
    extern unsigned char const BADGE_POUTTE[16428]; // 0x7725B0
    extern unsigned char const BADGE_DANTHEMAN[16428]; // 0x7765E0
    extern unsigned char const BADGE_MECHA[16428]; // 0x77A610
    extern unsigned char const BADGE_THEDUTCH[16428]; // 0x77E640
    extern unsigned char const BADGE_TUNACOMMANDER[16428]; // 0x782670
    extern unsigned char const BADGE_SOUPNAZI[16428]; // 0x7866A0
    extern BuiltinBadge const BADGES[11]; // 0x78A6D0
}

/* ---------- public code */

bool BuiltinSource::ConvertFromAlias(char *, char const *, StreamMode const) // 0x469A57
{
    mangled_assert("?ConvertFromAlias@BuiltinSource@@UAE_NPADPBDW4StreamMode@@@Z");
    todo("implement");
}

bool BuiltinSource::ConvertToAlias(char *, char const *) // 0x469A6B
{
    mangled_assert("?ConvertToAlias@BuiltinSource@@UAE_NPADPBD@Z");
    todo("implement");
}

ByteStream *BuiltinSource::FileOpen(char const *, StreamMode) // 0x469ACA
{
    mangled_assert("?FileOpen@BuiltinSource@@UAEPAVByteStream@@PBDW4StreamMode@@@Z");
    todo("implement");
}

bool BuiltinSource::FileDel(char const *) // 0x469A7F
{
    mangled_assert("?FileDel@BuiltinSource@@UAE_NPBD@Z");
    todo("implement");
}

FilePath::FILE_Type BuiltinSource::FileType(char const *, StreamMode) // 0x469B44
{
    mangled_assert("?FileType@BuiltinSource@@UAE?AW4FILE_Type@FilePath@@PBDW4StreamMode@@@Z");
    todo("implement");
}

void BuiltinSource::FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) // 0x469A84
{
    mangled_assert("?FileList@BuiltinSource@@UAEXPBDAAV?$vector@V?$fstring@$0BAE@@@V?$allocator@V?$fstring@$0BAE@@@@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

_static BuiltinBadge const *FindBadge(char const *filename) // 0x469B4A
{
    mangled_assert("FindBadge");
    todo("implement");
}
#endif
