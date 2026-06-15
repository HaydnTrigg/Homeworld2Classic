#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <string.h>
#include <assist\fixedstring.h>
#include <boost\scoped_ptr.hpp>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <fileio\archivemanager.h>
#include <assist\typemagic.h>
#include <localizer\localizer.h>
#include <LocalizerDirectory.h>
#include <fileio\archive.h>
#include <fileio\archiveinternals.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <fileio\filepath.h>
#include <algorithm>

/* ---------- constants */

/* ---------- definitions */

struct LocalizerUnload
{
    void operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
};
static_assert(sizeof(LocalizerUnload) == 1, "Invalid LocalizerUnload size");

typedef ArchiveInternals::TOCEntry PTR;
typedef ArchiveIterator<Archive::TOCProxy> tociterator;
typedef unsigned long ArchiveID;
typedef bool (*MapArchiveCB)(ArchiveIterator<Archive::TOCProxy>);

/* ---------- prototypes */


_static bool MatchingLocaleOrData(ArchiveIterator<Archive::TOCProxy> iTOC);
_static bool MatchingLocaleOnly(ArchiveIterator<Archive::TOCProxy> iTOC);

/* ---------- globals */

extern LocalizerDirectory *LocalizerDirectory::s_instance; // 0x848B24

/* ---------- private variables */

_static
{
    extern char const *k_ArchiveFileSignature; // 0x83C2A0
    extern char const *k_ArchiveMD5SecurityKey; // 0x83C2A4
    extern char const *k_ArchiveMD5RootSecurityKey; // 0x83C2A8
    extern ArchiveIterator<Archive::TOCProxy> s_localeTOC; // 0x848B28
    extern bool s_localeTOCFound; // 0x848B38
    extern Archive *s_archive; // 0x848B3C
}

/* ---------- public code */

_inline void LocalizerUnload::operator()(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const // 0x6047F3
{
    mangled_assert("??RLocalizerUnload@@QBEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

LocalizerDirectory *LocalizerDirectory::Instance() // 0x6049EA
{
    mangled_assert("?Instance@LocalizerDirectory@@SGPAV1@XZ");
    todo("implement");
}

bool LocalizerDirectory::Restart() // 0x604B74
{
    mangled_assert("?Restart@LocalizerDirectory@@SG_NXZ");
    todo("implement");
}

bool LocalizerDirectory::Shutdown() // 0x604DA6
{
    mangled_assert("?Shutdown@LocalizerDirectory@@SG_NXZ");
    todo("implement");
}

LocalizerDirectory::~LocalizerDirectory() // 0x60478D
{
    mangled_assert("??1LocalizerDirectory@@AAE@XZ");
    todo("implement");
}

bool LocalizerDirectory::Append(char const *, __int32, __int32) // 0x604825
{
    mangled_assert("?Append@LocalizerDirectory@@QAE_NPBDHH@Z");
    todo("implement");
}

char const *LocalizerDirectory::_stristr(char const *string, char *substring) // 0x604DD3
{
    mangled_assert("?_stristr@LocalizerDirectory@@SGPBDPBDPAD@Z");
    todo("implement");
}

ArchiveIterator<Archive::TOCProxy> LocalizerDirectory::FindLocaleTOC(Archive *archive) // 0x604879
{
    mangled_assert("?FindLocaleTOC@LocalizerDirectory@@SG?AV?$ArchiveIterator@VTOCProxy@Archive@@@@PAVArchive@@@Z");
    todo("implement");
}

void LocalizerDirectory::UnloadLocale(char const *filename) // 0x604DCA
{
    mangled_assert("?UnloadLocale@LocalizerDirectory@@SGXPBD@Z");
    todo("implement");
}

bool LocalizerDirectory::MapArchiveWithLocale(unsigned long archiveID, unsigned __int32 priority) // 0x604A4F
{
    mangled_assert("?MapArchiveWithLocale@LocalizerDirectory@@SG_NKI@Z");
    todo("implement");
}

bool LocalizerDirectory::MapArchiveOnlyLocale(unsigned long archiveID, unsigned __int32 priority) // 0x6049F0
{
    mangled_assert("?MapArchiveOnlyLocale@LocalizerDirectory@@SG_NKI@Z");
    todo("implement");
}

/* ---------- private code */

_static bool MatchingLocaleOrData(ArchiveIterator<Archive::TOCProxy> iTOC) // 0x604B11
{
    mangled_assert("MatchingLocaleOrData");
    todo("implement");
}

_static bool MatchingLocaleOnly(ArchiveIterator<Archive::TOCProxy> iTOC) // 0x604AAE
{
    mangled_assert("MatchingLocaleOnly");
    todo("implement");
}
#endif
