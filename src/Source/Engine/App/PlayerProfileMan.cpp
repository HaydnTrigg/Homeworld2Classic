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

_extern _sub_504595(PlayerProfileMan *const);
PlayerProfileMan::PlayerProfileMan() // 0x504595
{
    mangled_assert("??0PlayerProfileMan@@AAE@XZ");
    todo("implement");
    _sub_504595(this);
}

_extern _sub_5045DC(PlayerProfileMan::ProfileEntry *const);
_inline PlayerProfileMan::ProfileEntry::ProfileEntry() // 0x5045DC
{
    mangled_assert("??0ProfileEntry@PlayerProfileMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5045DC(this);
}

_extern void _sub_5045F0(std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *const);
_inline std::_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >::~_List_buy<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >() // 0x5045F0
{
    mangled_assert("??1?$_List_buy@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5045F0(this);
}

_extern void _sub_504620(std::_Tree_buy<PlayerProfileMan::Observer *,std::allocator<PlayerProfileMan::Observer *> > *const);
_inline std::_Tree_buy<PlayerProfileMan::Observer *,std::allocator<PlayerProfileMan::Observer *> >::~_Tree_buy<PlayerProfileMan::Observer *,std::allocator<PlayerProfileMan::Observer *> >() // 0x504620
{
    mangled_assert("??1?$_Tree_buy@PAVObserver@PlayerProfileMan@@V?$allocator@PAVObserver@PlayerProfileMan@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_504620(this);
}

_extern void _sub_504629(std::_Tree_comp<0,std::_Tset_traits<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *>,0> > *const);
_inline std::_Tree_comp<0,std::_Tset_traits<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *>,0> >::~_Tree_comp<0,std::_Tset_traits<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *>,0> >() // 0x504629
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tset_traits@PAVObserver@PlayerProfileMan@@U?$less@PAVObserver@PlayerProfileMan@@@std@@V?$allocator@PAVObserver@PlayerProfileMan@@@4@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_504629(this);
}

_extern void _sub_50464E(std::set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> > *const);
_inline std::set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> >::~set<PlayerProfileMan::Observer *,std::less<PlayerProfileMan::Observer *>,std::allocator<PlayerProfileMan::Observer *> >() // 0x50464E
{
    mangled_assert("??1?$set@PAVObserver@PlayerProfileMan@@U?$less@PAVObserver@PlayerProfileMan@@@std@@V?$allocator@PAVObserver@PlayerProfileMan@@@4@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_50464E(this);
}

_extern void _sub_50467C(PlayerProfileMan *const);
PlayerProfileMan::~PlayerProfileMan() // 0x50467C
{
    mangled_assert("??1PlayerProfileMan@@AAE@XZ");
    todo("implement");
    _sub_50467C(this);
}

_extern void _sub_5046B9(PlayerProfileMan::ProfileEntry *const);
_inline PlayerProfileMan::ProfileEntry::~ProfileEntry() // 0x5046B9
{
    mangled_assert("??1ProfileEntry@PlayerProfileMan@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5046B9(this);
}

_extern PlayerProfileMan *_sub_5050C2();
PlayerProfileMan *PlayerProfileMan::Instance() // 0x5050C2
{
    mangled_assert("?Instance@PlayerProfileMan@@SGPAV1@XZ");
    todo("implement");
    PlayerProfileMan * __result = _sub_5050C2();
    return __result;
}

_extern bool _sub_50507E();
bool PlayerProfileMan::Initialize() // 0x50507E
{
    mangled_assert("?Initialize@PlayerProfileMan@@SG_NXZ");
    todo("implement");
    bool __result = _sub_50507E();
    return __result;
}

_extern bool _sub_5058D0();
bool PlayerProfileMan::Shutdown() // 0x5058D0
{
    mangled_assert("?Shutdown@PlayerProfileMan@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5058D0();
    return __result;
}

_extern void _sub_504DC8(PlayerProfileMan *const);
void PlayerProfileMan::Init() // 0x504DC8
{
    mangled_assert("?Init@PlayerProfileMan@@AAEXXZ");
    todo("implement");
    _sub_504DC8(this);
}

_extern void _sub_5058CB(PlayerProfileMan *const);
void PlayerProfileMan::Shut() // 0x5058CB
{
    mangled_assert("?Shut@PlayerProfileMan@@AAEXXZ");
    todo("implement");
    _sub_5058CB(this);
}

_extern void _sub_504921(PlayerProfileMan *const, PlayerProfileMan::Observer *);
void PlayerProfileMan::AddObserver(PlayerProfileMan::Observer *) // 0x504921
{
    mangled_assert("?AddObserver@PlayerProfileMan@@QAEXPAVObserver@1@@Z");
    todo("implement");
    _sub_504921(this, arg);
}

_extern void _sub_505830(PlayerProfileMan *const, PlayerProfileMan::Observer *);
void PlayerProfileMan::RemoveObserver(PlayerProfileMan::Observer *) // 0x505830
{
    mangled_assert("?RemoveObserver@PlayerProfileMan@@QAEXPAVObserver@1@@Z");
    todo("implement");
    _sub_505830(this, arg);
}

_extern unsigned __int32 _sub_5055B9(PlayerProfileMan const *const);
unsigned __int32 PlayerProfileMan::ProfileGetCount() const // 0x5055B9
{
    mangled_assert("?ProfileGetCount@PlayerProfileMan@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5055B9(this);
    return __result;
}

_extern std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > _sub_505599(PlayerProfileMan const *const, unsigned __int32);
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > PlayerProfileMan::ProfileGetAt(unsigned __int32) const // 0x505599
{
    mangled_assert("?ProfileGetAt@PlayerProfileMan@@QBE?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@I@Z");
    todo("implement");
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > __result = _sub_505599(this, arg);
    return __result;
}

_extern PlayerProfile *_sub_504D3E(PlayerProfileMan *const);
PlayerProfile *PlayerProfileMan::GetCurrentProfile() // 0x504D3E
{
    mangled_assert("?GetCurrentProfile@PlayerProfileMan@@QAEPAVPlayerProfile@@XZ");
    todo("implement");
    PlayerProfile * __result = _sub_504D3E(this);
    return __result;
}

_extern void _sub_504BCF(PlayerProfileMan *const);
void PlayerProfileMan::CurrentProfileSave() // 0x504BCF
{
    mangled_assert("?CurrentProfileSave@PlayerProfileMan@@AAEXXZ");
    todo("implement");
    _sub_504BCF(this);
}

_extern void _sub_504AB0(PlayerProfileMan *const);
void PlayerProfileMan::CurrentProfileClose() // 0x504AB0
{
    mangled_assert("?CurrentProfileClose@PlayerProfileMan@@AAEXXZ");
    todo("implement");
    _sub_504AB0(this);
}

_extern bool _sub_504B1D(PlayerProfileMan *const, PlayerProfileMan::ProfileEntry const &);
bool PlayerProfileMan::CurrentProfileOpen(PlayerProfileMan::ProfileEntry const &) // 0x504B1D
{
    mangled_assert("?CurrentProfileOpen@PlayerProfileMan@@AAE_NABUProfileEntry@1@@Z");
    todo("implement");
    bool __result = _sub_504B1D(this, arg);
    return __result;
}

_extern bool _sub_50585A(PlayerProfileMan *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool PlayerProfileMan::SetCurrentProfile(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x50585A
{
    mangled_assert("?SetCurrentProfile@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_50585A(this, arg);
    return __result;
}

_extern bool _sub_5053A1(PlayerProfileMan *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool PlayerProfileMan::ProfileCreate(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x5053A1
{
    mangled_assert("?ProfileCreate@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_5053A1(this, arg);
    return __result;
}

_extern bool _sub_5054AE(PlayerProfileMan *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool PlayerProfileMan::ProfileDelete(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x5054AE
{
    mangled_assert("?ProfileDelete@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_5054AE(this, arg);
    return __result;
}

_extern bool _sub_5055C7(PlayerProfileMan *const);
bool PlayerProfileMan::ProfileIsValid() // 0x5055C7
{
    mangled_assert("?ProfileIsValid@PlayerProfileMan@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_5055C7(this);
    return __result;
}

_extern bool _sub_505558(PlayerProfileMan *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
bool PlayerProfileMan::ProfileExists(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &) // 0x505558
{
    mangled_assert("?ProfileExists@PlayerProfileMan@@QAE_NABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_505558(this, arg);
    return __result;
}

_extern void _sub_504A1B(PlayerProfileMan *const, char const *, char const *);
void PlayerProfileMan::CopyDefaultToProfile(char const *, char const *) // 0x504A1B
{
    mangled_assert("?CopyDefaultToProfile@PlayerProfileMan@@QAEXPBD0@Z");
    todo("implement");
    _sub_504A1B(this, arg, arg);
}

_extern void _sub_504A92(PlayerProfileMan *const);
void PlayerProfileMan::CreateFolderProfiles() // 0x504A92
{
    mangled_assert("?CreateFolderProfiles@PlayerProfileMan@@AAEXXZ");
    todo("implement");
    _sub_504A92(this);
}

_extern unsigned __int32 _sub_504D42(PlayerProfileMan *const);
unsigned __int32 PlayerProfileMan::GetNextDirNumber() // 0x504D42
{
    mangled_assert("?GetNextDirNumber@PlayerProfileMan@@AAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_504D42(this);
    return __result;
}

_extern char const *_sub_50564D(PlayerProfileMan *const);
char const *PlayerProfileMan::ProfileSave() // 0x50564D
{
    mangled_assert("?ProfileSave@PlayerProfileMan@@QAEPBDXZ");
    todo("implement");
    char const * __result = _sub_50564D(this);
    return __result;
}

_extern void _sub_5055D0(PlayerProfileMan *const, char const *);
void PlayerProfileMan::ProfileLoad(char const *) // 0x5055D0
{
    mangled_assert("?ProfileLoad@PlayerProfileMan@@QAEXPBD@Z");
    todo("implement");
    _sub_5055D0(this, arg);
}

/* ---------- private code */

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_5051CA(wchar_t const *);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > NameToFolderName(wchar_t const *name) // 0x5051CA
{
    mangled_assert("NameToFolderName");
    todo("implement");
    std::string __result = _sub_5051CA(name);
    return __result;
}

_extern void _sub_50534F(char *, char const *);
_static void PlayerToAlias(char *alias, char const *folder) // 0x50534F
{
    mangled_assert("PlayerToAlias");
    todo("implement");
    _sub_50534F(alias, folder);
}

_extern FilePath::FILE_Type _sub_504D96(char const *);
_static FilePath::FILE_Type GetUnaliasedFileType(char const *name) // 0x504D96
{
    mangled_assert("GetUnaliasedFileType");
    todo("implement");
    FilePath::FILE_Type __result = _sub_504D96(name);
    return __result;
}

_extern bool _sub_5052B7(wchar_t const *, char const *);
_static bool PlayerNameWrite(wchar_t const *name, char const *folder) // 0x5052B7
{
    mangled_assert("PlayerNameWrite");
    todo("implement");
    bool __result = _sub_5052B7(name, folder);
    return __result;
}

_extern bool _sub_505203(wchar_t *, char const *);
_static bool PlayerNameRead(wchar_t *name, char const *folder) // 0x505203
{
    mangled_assert("PlayerNameRead");
    todo("implement");
    bool __result = _sub_505203(name, folder);
    return __result;
}

_extern bool _sub_505EDB(char const *, char const *);
_static bool copyfile(char const *srcname, char const *destname) // 0x505EDB
{
    mangled_assert("copyfile");
    todo("implement");
    bool __result = _sub_505EDB(srcname, destname);
    return __result;
}

_extern void _sub_5050C8(char const *, char const *, char const *);
_static void InternalCopyDefaultToProfile(char const *folder, char const *newprofile, char const *wildcard) // 0x5050C8
{
    mangled_assert("InternalCopyDefaultToProfile");
    todo("implement");
    _sub_5050C8(folder, newprofile, wildcard);
}

_extern void _sub_504C32(char const *, char const *, std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &);
_static void GetAllSubDirs(char const *folder, char const *subfolder, std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &dirout) // 0x504C32
{
    mangled_assert("GetAllSubDirs");
    todo("implement");
    _sub_504C32(folder, subfolder, dirout);
}

_extern void _sub_50493A(char const *, char const *);
_static void CopyDefaultDirectories(char const *newprofile, char const *folder) // 0x50493A
{
    mangled_assert("CopyDefaultDirectories");
    todo("implement");
    _sub_50493A(newprofile, folder);
}

_extern bool _sub_504C1C(char const *);
_static bool DeleteFileInternal(char const *filename) // 0x504C1C
{
    mangled_assert("DeleteFileInternal");
    todo("implement");
    bool __result = _sub_504C1C(filename);
    return __result;
}

_extern bool _sub_504C09(char const *);
_static bool DeleteDirInternal(char const *dir) // 0x504C09
{
    mangled_assert("DeleteDirInternal");
    todo("implement");
    bool __result = _sub_504C09(dir);
    return __result;
}

_extern bool _sub_50569C(char const *);
_static bool RemoveDirRecursive(char const *dir) // 0x50569C
{
    mangled_assert("RemoveDirRecursive");
    todo("implement");
    bool __result = _sub_50569C(dir);
    return __result;
}

_extern bool _sub_505697(char const *);
_static bool RemoveDir(char const *dir) // 0x505697
{
    mangled_assert("RemoveDir");
    todo("implement");
    bool __result = _sub_505697(dir);
    return __result;
}
#endif
