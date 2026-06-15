#if 0
/* ---------- headers */

#include "decomp.h"
#include <set>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <crtdefs.h>
#include <assist\fileobj.h>
#include <fileio\filepathhd.h>
#include <boost\checked_delete.hpp>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <localizer\localizer.h>
#include <boost\noncopyable.hpp>
#include <list>
#include <assist\fixedstring.h>
#include <sys\types.h>
#include <assist\stlexstring.h>
#include <sys\stat.h>
#include <fileio\filepath.h>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <fileio\platform.h>
#include <sys\stat.inl>
#include <assist\typemagic.h>
#include <LevelDesc.h>
#include <Hash.h>
#include <direct.h>
#include <fileio\md5.h>
#include <App\PlayerProfileGameOptions.h>
#include <KeyBindings.h>
#include <config.h>
#include <platform\keydefines.h>
#include <io.h>
#include <App\PlayerProfileMan.h>
#include <App\PlayerProfile.h>
#include <wchar.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>

/* ---------- constants */

/* ---------- definitions */

typedef std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > DirCache;

/* ---------- prototypes */


_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > NameToFolderName(wchar_t const *name);
_static void PlayerToAlias(char *alias, char const *folder);
_static FilePath::FILE_Type GetUnaliasedFileType(char const *name);
_static bool PlayerNameWrite(wchar_t const *name, char const *folder);
_static bool PlayerNameRead(wchar_t *name, char const *folder);
_static bool copyfile(char const *srcname, char const *destname);
_static void InternalCopyDefaultToProfile(char const *folder, char const *newprofile, char const *wildcard);
_static void GetAllSubDirs(char const *folder, char const *subfolder, std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &dirout);
_static void CopyDefaultDirectories(char const *newprofile, char const *folder);
_static bool DeleteFileInternal(char const *filename);
_static bool DeleteDirInternal(char const *dir);
_static bool RemoveDirRecursive(char const *dir);
_static bool RemoveDir(char const *dir);

/* ---------- globals */

extern char const *PROFILEALIAS; // 0x837060

/* ---------- private variables */

_static
{
    extern std::_Nil _Nil_obj; // 0x8444FC
    extern PlayerProfileMan *g_Instance; // 0x844500
    extern char const *PROFILEFOLDER; // 0x837054
    extern char const *DEFPROFILEFOLDER; // 0x837058
    extern char const *PROFILEBASENAME; // 0x83705C
    extern unsigned char const UNICODETAG[2]; // 0x79BB9C
}

/* ---------- public code */

PlayerProfileMan::PlayerProfileMan() // 0x504595
{
    mangled_assert("??0PlayerProfileMan@@AAE@XZ");
    todo("implement");
}

_inline PlayerProfileMan::ProfileEntry::ProfileEntry() // 0x5045DC
{
    mangled_assert("??0ProfileEntry@PlayerProfileMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x5045F0
{
    mangled_assert("??1?$_List_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_buy<PlayerProfileMan::Observer *,std::allocator<PlayerProfileMan::Observer *> >::~_Tree_buy<PlayerProfileMan::Observer *,std::allocator<PlayerProfileMan::Observer *> >() // 0x504620
{
    mangled_assert("??1?$_Tree_buy@PAVObserver@PlayerProfileMan@@V?$allocator@PAVObserver@PlayerProfileMan@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Tree_comp<0,std::_Tset_traits<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *>,0> >::~_Tree_comp<0,std::_Tset_traits<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *>,0> >() // 0x504629
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@PAVObserver@PlayerProfileMan@@U?$less@PAVObserver@PlayerProfileMan@@@std@@V?$allocator@PAVObserver@PlayerProfileMan@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> >::~set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> >() // 0x50464E
{
    mangled_assert("??1?$set@PAVObserver@PlayerProfileMan@@U?$less@PAVObserver@PlayerProfileMan@@@std@@V?$allocator@PAVObserver@PlayerProfileMan@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PlayerProfileMan::~PlayerProfileMan() // 0x50467C
{
    mangled_assert("??1PlayerProfileMan@@AAE@XZ");
    todo("implement");
}

_inline PlayerProfileMan::ProfileEntry::~ProfileEntry() // 0x5046B9
{
    mangled_assert("??1ProfileEntry@PlayerProfileMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

PlayerProfileMan *PlayerProfileMan::Instance() // 0x5050C2
{
    mangled_assert("?Instance@PlayerProfileMan@@SGPAV1@XZ");
    todo("implement");
}

bool PlayerProfileMan::Initialize() // 0x50507E
{
    mangled_assert("?Initialize@PlayerProfileMan@@SG_NXZ");
    todo("implement");
}

bool PlayerProfileMan::Shutdown() // 0x5058D0
{
    mangled_assert("?Shutdown@PlayerProfileMan@@SG_NXZ");
    todo("implement");
}

void PlayerProfileMan::Init() // 0x504DC8
{
    mangled_assert("?Init@PlayerProfileMan@@AAEXXZ");
    todo("implement");
}

void PlayerProfileMan::Shut() // 0x5058CB
{
    mangled_assert("?Shut@PlayerProfileMan@@AAEXXZ");
    todo("implement");
}

void PlayerProfileMan::AddObserver(PlayerProfileMan::Observer *) // 0x504921
{
    mangled_assert("?AddObserver@PlayerProfileMan@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

void PlayerProfileMan::RemoveObserver(PlayerProfileMan::Observer *) // 0x505830
{
    mangled_assert("?RemoveObserver@PlayerProfileMan@@QAEXPAVObserver@1@@Z");
    todo("implement");
}

unsigned __int32 PlayerProfileMan::ProfileGetCount() const // 0x5055B9
{
    mangled_assert("?ProfileGetCount@PlayerProfileMan@@QBEIXZ");
    todo("implement");
}

std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > PlayerProfileMan::ProfileGetAt(unsigned __int32) const // 0x505599
{
    mangled_assert("?ProfileGetAt@PlayerProfileMan@@QBE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@I@Z");
    todo("implement");
}

PlayerProfile *PlayerProfileMan::GetCurrentProfile() // 0x504D3E
{
    mangled_assert("?GetCurrentProfile@PlayerProfileMan@@QAEPAVPlayerProfile@@XZ");
    todo("implement");
}

void PlayerProfileMan::CurrentProfileSave() // 0x504BCF
{
    mangled_assert("?CurrentProfileSave@PlayerProfileMan@@AAEXXZ");
    todo("implement");
}

void PlayerProfileMan::CurrentProfileClose() // 0x504AB0
{
    mangled_assert("?CurrentProfileClose@PlayerProfileMan@@AAEXXZ");
    todo("implement");
}

bool PlayerProfileMan::CurrentProfileOpen(PlayerProfileMan::ProfileEntry const &) // 0x504B1D
{
    mangled_assert("?CurrentProfileOpen@PlayerProfileMan@@AAE_NABUProfileEntry@1@@Z");
    todo("implement");
}

bool PlayerProfileMan::SetCurrentProfile(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x50585A
{
    mangled_assert("?SetCurrentProfile@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

bool PlayerProfileMan::ProfileCreate(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x5053A1
{
    mangled_assert("?ProfileCreate@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

bool PlayerProfileMan::ProfileDelete(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x5054AE
{
    mangled_assert("?ProfileDelete@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

bool PlayerProfileMan::ProfileIsValid() // 0x5055C7
{
    mangled_assert("?ProfileIsValid@PlayerProfileMan@@QAE_NXZ");
    todo("implement");
}

bool PlayerProfileMan::ProfileExists(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x505558
{
    mangled_assert("?ProfileExists@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
}

void PlayerProfileMan::CopyDefaultToProfile(char const *, char const *) // 0x504A1B
{
    mangled_assert("?CopyDefaultToProfile@PlayerProfileMan@@QAEXPBD0@Z");
    todo("implement");
}

void PlayerProfileMan::CreateFolderProfiles() // 0x504A92
{
    mangled_assert("?CreateFolderProfiles@PlayerProfileMan@@AAEXXZ");
    todo("implement");
}

unsigned __int32 PlayerProfileMan::GetNextDirNumber() // 0x504D42
{
    mangled_assert("?GetNextDirNumber@PlayerProfileMan@@AAEIXZ");
    todo("implement");
}

char const *PlayerProfileMan::ProfileSave() // 0x50564D
{
    mangled_assert("?ProfileSave@PlayerProfileMan@@QAEPBDXZ");
    todo("implement");
}

void PlayerProfileMan::ProfileLoad(char const *) // 0x5055D0
{
    mangled_assert("?ProfileLoad@PlayerProfileMan@@QAEXPBD@Z");
    todo("implement");
}

/* ---------- private code */

_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > NameToFolderName(wchar_t const *name) // 0x5051CA
{
    mangled_assert("NameToFolderName");
    todo("implement");
}

_static void PlayerToAlias(char *alias, char const *folder) // 0x50534F
{
    mangled_assert("PlayerToAlias");
    todo("implement");
}

_static FilePath::FILE_Type GetUnaliasedFileType(char const *name) // 0x504D96
{
    mangled_assert("GetUnaliasedFileType");
    todo("implement");
}

_static bool PlayerNameWrite(wchar_t const *name, char const *folder) // 0x5052B7
{
    mangled_assert("PlayerNameWrite");
    todo("implement");
}

_static bool PlayerNameRead(wchar_t *name, char const *folder) // 0x505203
{
    mangled_assert("PlayerNameRead");
    todo("implement");
}

_static bool copyfile(char const *srcname, char const *destname) // 0x505EDB
{
    mangled_assert("copyfile");
    todo("implement");
}

_static void InternalCopyDefaultToProfile(char const *folder, char const *newprofile, char const *wildcard) // 0x5050C8
{
    mangled_assert("InternalCopyDefaultToProfile");
    todo("implement");
}

_static void GetAllSubDirs(char const *folder, char const *subfolder, std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &dirout) // 0x504C32
{
    mangled_assert("GetAllSubDirs");
    todo("implement");
}

_static void CopyDefaultDirectories(char const *newprofile, char const *folder) // 0x50493A
{
    mangled_assert("CopyDefaultDirectories");
    todo("implement");
}

_static bool DeleteFileInternal(char const *filename) // 0x504C1C
{
    mangled_assert("DeleteFileInternal");
    todo("implement");
}

_static bool DeleteDirInternal(char const *dir) // 0x504C09
{
    mangled_assert("DeleteDirInternal");
    todo("implement");
}

_static bool RemoveDirRecursive(char const *dir) // 0x50569C
{
    mangled_assert("RemoveDirRecursive");
    todo("implement");
}

_static bool RemoveDir(char const *dir) // 0x505697
{
    mangled_assert("RemoveDir");
    todo("implement");
}
#endif
