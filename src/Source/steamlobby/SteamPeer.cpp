#if 0
/* ---------- headers */

#include "decomp.h"
#include <steamclientpublic.h>
#include <steamuniverse.h>
#include <isteamnetworking.h>
#include <util\types.h>
#include <isteamutils.h>
#include <SteamLobby\SteamLobbySessionDesc.h>
#include <xmemory>
#include <xmemory0>
#include <new>
#include <isteammatchmaking.h>
#include <xstddef>
#include <string>
#include <matchmakingtypes.h>
#include <isteamunifiedmessages.h>
#include <isteamapps.h>
#include <type_traits>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <SteamLobby\SteamLobbyPlayerDesc.h>
#include <vector>
#include <isteamscreenshots.h>
#include <isteamfriends.h>
#include <xstring>
#include <assist\typemagic.h>
#include <isteamcontroller.h>
#include <pch.h>
#include <SteamLobby\SteamPeer.h>
#include <steamcontrollerpublic.h>
#include <SteamLobby\steamlobbyexport.h>
#include <SteamLobby\steamlobbydefines.h>
#include <isteammusicremote.h>
#include <steam_api.h>
#include <isteamclient.h>
#include <steamtypes.h>
#include <assist\stlexmap.h>
#include <isteamuser.h>
#include <isteamhtmlsurface.h>
#include <isteammusic.h>
#include <isteamuserstats.h>
#include <isteamugc.h>
#include <map>
#include <isteamremotestorage.h>
#include <xtree>
#include <SteamLobby\steamevent.h>
#include <isteamapplist.h>
#include <isteamhttp.h>
#include <steamhttpenums.h>

/* ---------- constants */

enum `anonymous-namespace'::ConnectionStatus
{
    CS_Unconnected = 0,
    CS_Connected,
};

enum `anonymous-namespace'::AuthenticationStatus
{
    AS_Invalid = 0,
    AS_Authenticated,
    AS_Denied,
};

/* ---------- definitions */

typedef unsigned long long GID_t;
typedef unsigned __int32 PackageId_t;
typedef unsigned __int32 AppId_t;
typedef unsigned long long AssetClassId_t;
typedef unsigned __int32 PhysicalItemId_t;
typedef unsigned __int32 DepotId_t;
typedef unsigned __int32 RTime32;
typedef unsigned __int32 CellID_t;
typedef unsigned long long SteamAPICall_t;
typedef unsigned __int32 AccountID_t;
typedef unsigned __int32 PartnerId_t;
typedef unsigned long long ManifestId_t;
typedef unsigned __int32 HAuthTicket;
typedef __int32 HSteamPipe;
typedef __int32 HSteamUser;
typedef void (*SteamAPIWarningMessageHook_t)(__int32, char const *);
typedef void *HServerListRequest;
typedef __int32 HServerQuery;
typedef unsigned long long UGCHandle_t;
typedef unsigned long long PublishedFileUpdateHandle_t;
typedef unsigned long long PublishedFileId_t;
typedef unsigned long long UGCFileWriteStreamHandle_t;
typedef unsigned long long ClientUnifiedMessageHandle;
typedef unsigned long long UGCQueryHandle_t;
typedef unsigned long long UGCUpdateHandle_t;
typedef unsigned __int32 HHTMLBrowser;
typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PlayerCont;
typedef void *func_t(LobbyCreated_t *, bool);
typedef std::vector<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > ParamCont;
typedef SteamLobbySessionDesc::Param value_type;
typedef unsigned __int32 size_type;
typedef __int32 difference_type;
typedef SteamLobbySessionDesc::Param *pointer;
typedef SteamLobbySessionDesc::Param const *const_pointer;
typedef SteamLobbySessionDesc::Param &reference;
typedef SteamLobbySessionDesc::Param const &const_reference;
typedef std::allocator<SteamLobbySessionDesc::Param> _Alloc;
typedef std::_Wrap_alloc<std::allocator<SteamLobbySessionDesc::Param> > other;
typedef std::_Wrap_alloc<std::allocator<SteamLobbySessionDesc::Param> > _Alty;
typedef std::_Vector_alloc<0,std::_Vec_base_types<SteamLobbySessionDesc::Param,std::allocator<SteamLobbySessionDesc::Param> > > _Myt;
typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SteamLobbySessionDesc::Param> > > const_iterator;
typedef char _Elem;
typedef char *type;
typedef long long timerVal;
typedef std::map<unsigned __int64,SteamLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > > SessionMap;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SteamLobbyPlayerDesc,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SteamLobbyPlayerDesc> > > PlayerDataCont;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,SteamLobbySessionDesc>,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,SteamLobbySessionDesc>,void *> _Node;
typedef std::_Tree_node<std::pair<unsigned __int64 const ,SteamLobbySessionDesc>,void *> *&_Nodepref;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const ,SteamLobbySessionDesc>,void *> > > _Alnod_type;
typedef std::allocator<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > allocator_type;
typedef std::less<unsigned __int64> key_compare;
typedef unsigned long long key_type;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > > > iterator;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > > >,bool> _Pairib;
typedef SteamLobbySessionDesc mapped_type;
typedef `anonymous-namespace'::ConnectionStatus ?A0x7e5bfbed::ConnectionStatus;
typedef `anonymous-namespace'::AuthenticationStatus ?A0x7e5bfbed::AuthenticationStatus;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > >,std::_Iterator_base0> _Myiter;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > >,std::_Iterator_base0> _Unchecked_type;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::allocator<SteamLobbySessionDesc::Param> _Mybase;
typedef SteamLobbySessionDesc::Param *_Tptr;
typedef std::pair<unsigned __int64 const ,SteamLobbySessionDesc> const &_Reftype;

/* ---------- prototypes */

extern void Int32ToIPAddress(unsigned __int32 unIP, char *szIPAddress, unsigned __int32 nIPAddressLen);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_InSetupValue; // 0x100090B4
    extern char const *k_NotInSetupValue; // 0x100090B8
}

/* ---------- public code */

_extern void _sub_10002F57(unsigned __int32, char *, unsigned __int32);
void Int32ToIPAddress(unsigned __int32 unIP, char *szIPAddress, unsigned __int32 nIPAddressLen) // 0x10002F57
{
    mangled_assert("?Int32ToIPAddress@@YGXIPADI@Z");
    todo("implement");
    _sub_10002F57(unIP, szIPAddress, nIPAddressLen);
}

_extern _sub_10002903(SteamPeer::Dispatch *const, SteamPeer *);
_inline SteamPeer::Dispatch::Dispatch(SteamPeer *) // 0x10002903
{
    mangled_assert("??0Dispatch@SteamPeer@@QAE@PAV1@@Z");
    todo("implement");
    _sub_10002903(this, arg);
}

_extern _sub_1000298C(ServerMatchmakingManager *const, ServerMatchmakingManager const &);
_inline ServerMatchmakingManager::ServerMatchmakingManager(ServerMatchmakingManager const &) // 0x1000298C
{
    mangled_assert("??0ServerMatchmakingManager@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_1000298C(this, arg);
}

_extern _sub_10002A14(SteamPeer *const);
SteamPeer::SteamPeer() // 0x10002A14
{
    mangled_assert("??0SteamPeer@@QAE@XZ");
    todo("implement");
    _sub_10002A14(this);
}

_extern void _sub_10002BBB(std::map<unsigned __int64,SteamLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > > *const);
_inline std::map<unsigned __int64,SteamLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > >::~map<unsigned __int64,SteamLobbySessionDesc,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,SteamLobbySessionDesc> > >() // 0x10002BBB
{
    mangled_assert("??1?$map@_KVSteamLobbySessionDesc@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KVSteamLobbySessionDesc@@@std@@@3@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10002BBB(this);
}

_extern void _sub_10002BC0(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SteamLobbyPlayerDesc> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SteamLobbyPlayerDesc>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,SteamLobbyPlayerDesc>() // 0x10002BC0
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VSteamLobbyPlayerDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10002BC0(this);
}

_extern void _sub_10002BDD(std::pair<unsigned __int64,SteamLobbySessionDesc> *const);
_inline std::pair<unsigned __int64,SteamLobbySessionDesc>::~pair<unsigned __int64,SteamLobbySessionDesc>() // 0x10002BDD
{
    mangled_assert("??1?$pair@_KVSteamLobbySessionDesc@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10002BDD(this);
}

_extern void _sub_10002BE5(SteamPeer::Dispatch *const);
_inline SteamPeer::Dispatch::~Dispatch() // 0x10002BE5
{
    mangled_assert("??1Dispatch@SteamPeer@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10002BE5(this);
}

_extern void _sub_10002C39(SteamPeer *const);
SteamPeer::~SteamPeer() // 0x10002C39
{
    mangled_assert("??1SteamPeer@@QAE@XZ");
    todo("implement");
    _sub_10002C39(this);
}

_extern CCallResult<SteamPeer,LobbyCreated_t> &_sub_10002CDC(CCallResult<SteamPeer,LobbyCreated_t> *const, CCallResult<SteamPeer,LobbyCreated_t> const &);
_inline CCallResult<SteamPeer,LobbyCreated_t> &CCallResult<SteamPeer,LobbyCreated_t>::operator=(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x10002CDC
{
    mangled_assert("??4?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    CCallResult<SteamPeer,LobbyCreated_t> & __result = _sub_10002CDC(this, arg);
    return __result;
}

_extern ServerMatchmakingManager &_sub_10002D09(ServerMatchmakingManager *const, ServerMatchmakingManager const &);
_inline ServerMatchmakingManager &ServerMatchmakingManager::operator=(ServerMatchmakingManager const &) // 0x10002D09
{
    mangled_assert("??4ServerMatchmakingManager@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    ServerMatchmakingManager & __result = _sub_10002D09(this, arg);
    return __result;
}

_extern SteamPeer &_sub_10002D1E(SteamPeer *const, SteamPeer const &);
_inline SteamPeer &SteamPeer::operator=(SteamPeer const &) // 0x10002D1E
{
    mangled_assert("??4SteamPeer@@QAEAAV0@ABV0@@Z");
    compiler_generated();
    todo("implement");
    SteamPeer & __result = _sub_10002D1E(this, arg);
    return __result;
}

_extern SteamLobbySessionDesc const &_sub_10002F41(SteamPeer const *const);
SteamLobbySessionDesc const &SteamPeer::GetLocalSession() const // 0x10002F41
{
    mangled_assert("?GetLocalSession@SteamPeer@@QBEABVSteamLobbySessionDesc@@XZ");
    todo("implement");
    SteamLobbySessionDesc const & __result = _sub_10002F41(this);
    return __result;
}

_extern bool _sub_10003A61(SteamPeer const *const, unsigned long long, SteamLobbySessionDesc &);
bool SteamPeer::SessionGetDesc(unsigned long long, SteamLobbySessionDesc &) const // 0x10003A61
{
    mangled_assert("?SessionGetDesc@SteamPeer@@QBE_N_KAAVSteamLobbySessionDesc@@@Z");
    todo("implement");
    bool __result = _sub_10003A61(this, arg, arg);
    return __result;
}

_extern bool _sub_10003B25(SteamPeer const *const, unsigned long long);
bool SteamPeer::SessionUpdate(unsigned long long) const // 0x10003B25
{
    mangled_assert("?SessionUpdate@SteamPeer@@QBE_N_K@Z");
    todo("implement");
    bool __result = _sub_10003B25(this, arg);
    return __result;
}

_extern void _sub_10003B97(SteamPeer *const, LobbyDataUpdate_t *);
void SteamPeer::OnLobbyDataUpdate(LobbyDataUpdate_t *) // 0x10003B97
{
    mangled_assert("?OnLobbyDataUpdate@SteamPeer@@QAEXPAULobbyDataUpdate_t@@@Z");
    todo("implement");
    _sub_10003B97(this, arg);
}

_extern _sub_100026C6(CCallResult<SteamPeer,LobbyCreated_t> *const, CCallResult<SteamPeer,LobbyCreated_t> const &);
_inline CCallResult<SteamPeer,LobbyCreated_t>::CCallResult<SteamPeer,LobbyCreated_t>(CCallResult<SteamPeer,LobbyCreated_t> const &) // 0x100026C6
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyCreated_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100026C6(this, arg);
}

_extern _sub_10002720(CCallResult<SteamPeer,LobbyEnter_t> *const, CCallResult<SteamPeer,LobbyEnter_t> const &);
_inline CCallResult<SteamPeer,LobbyEnter_t>::CCallResult<SteamPeer,LobbyEnter_t>(CCallResult<SteamPeer,LobbyEnter_t> const &) // 0x10002720
{
    mangled_assert("??0?$CCallResult@VSteamPeer@@ULobbyEnter_t@@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10002720(this, arg);
}

_extern _sub_100027E6(CCallback<SteamPeer,LobbyChatMsg_t,0> *const, CCallback<SteamPeer,LobbyChatMsg_t,0> const &);
_inline CCallback<SteamPeer,LobbyChatMsg_t,0>::CCallback<SteamPeer,LobbyChatMsg_t,0>(CCallback<SteamPeer,LobbyChatMsg_t,0> const &) // 0x100027E6
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyChatMsg_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100027E6(this, arg);
}

_extern _sub_10002849(CCallback<SteamPeer,LobbyDataUpdate_t,0> *const, CCallback<SteamPeer,LobbyDataUpdate_t,0> const &);
_inline CCallback<SteamPeer,LobbyDataUpdate_t,0>::CCallback<SteamPeer,LobbyDataUpdate_t,0>(CCallback<SteamPeer,LobbyDataUpdate_t,0> const &) // 0x10002849
{
    mangled_assert("??0?$CCallback@VSteamPeer@@ULobbyDataUpdate_t@@$0A@@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10002849(this, arg);
}

_extern _sub_100028CC(SteamPeer::Data *const);
_inline SteamPeer::Data::Data() // 0x100028CC
{
    mangled_assert("??0Data@SteamPeer@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_100028CC(this);
}

_extern void _sub_10003036(SteamPeer *const, LobbyCreated_t *, bool);
void SteamPeer::OnLobbyCreated(LobbyCreated_t *, bool) // 0x10003036
{
    mangled_assert("?OnLobbyCreated@SteamPeer@@QAEXPAULobbyCreated_t@@_N@Z");
    todo("implement");
    _sub_10003036(this, arg, arg);
}

_extern void _sub_1000348F(SteamPeer *const, LobbyEnter_t *, bool);
void SteamPeer::OnLobbyEntered(LobbyEnter_t *, bool) // 0x1000348F
{
    mangled_assert("?OnLobbyEntered@SteamPeer@@QAEXPAULobbyEnter_t@@_N@Z");
    todo("implement");
    _sub_1000348F(this, arg, arg);
}

_extern void _sub_10002F9E(SteamPeer *const, LobbyChatMsg_t *);
void SteamPeer::OnLobbyChatMsg(LobbyChatMsg_t *) // 0x10002F9E
{
    mangled_assert("?OnLobbyChatMsg@SteamPeer@@QAEXPAULobbyChatMsg_t@@@Z");
    todo("implement");
    _sub_10002F9E(this, arg);
}

_extern bool _sub_10002F48(SteamPeer *const, char const *, char const *, SteamEvent *);
bool SteamPeer::Initialize(char const *, char const *, SteamEvent *) // 0x10002F48
{
    mangled_assert("?Initialize@SteamPeer@@QAE_NPBD0PAVSteamEvent@@@Z");
    todo("implement");
    bool __result = _sub_10002F48(this, arg, arg, arg);
    return __result;
}

_extern void _sub_1000386B(SteamPeer *const);
void SteamPeer::Release() // 0x1000386B
{
    mangled_assert("?Release@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_1000386B(this);
}

_extern char const *_sub_10002F1F(SteamPeer const *const);
char const *SteamPeer::GetActualNickname() const // 0x10002F1F
{
    mangled_assert("?GetActualNickname@SteamPeer@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10002F1F(this);
    return __result;
}

_extern void _sub_10003ABA(SteamPeer *const, SteamLobbySessionDesc const &);
void SteamPeer::SessionHost(SteamLobbySessionDesc const &) // 0x10003ABA
{
    mangled_assert("?SessionHost@SteamPeer@@QAEXABVSteamLobbySessionDesc@@@Z");
    todo("implement");
    _sub_10003ABA(this, arg);
}

_extern void _sub_10003937(SteamPeer *const);
void SteamPeer::SessionCancel() // 0x10003937
{
    mangled_assert("?SessionCancel@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_10003937(this);
}

_extern void _sub_10003B1D(SteamPeer *const);
void SteamPeer::SessionStart() // 0x10003B1D
{
    mangled_assert("?SessionStart@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_10003B1D(this);
}

_extern void _sub_10003960(SteamPeer *const, SteamLobbySessionDesc const &);
void SteamPeer::SessionChangeSettings(SteamLobbySessionDesc const &) // 0x10003960
{
    mangled_assert("?SessionChangeSettings@SteamPeer@@QAEXABVSteamLobbySessionDesc@@@Z");
    todo("implement");
    _sub_10003960(this, arg);
}

_extern void _sub_10003AA1(SteamPeer *const);
void SteamPeer::SessionGetList() // 0x10003AA1
{
    mangled_assert("?SessionGetList@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_10003AA1(this);
}

_extern void _sub_10003AB9(SteamPeer *const);
void SteamPeer::PlayerUpdateList() // 0x10003AB9
{
    mangled_assert("?PlayerUpdateList@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_10003AB9(this);
}

_extern void _sub_10003713(SteamPeer *const, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
void SteamPeer::PlayerGetList(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) // 0x10003713
{
    mangled_assert("?PlayerGetList@SteamPeer@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
    _sub_10003713(this, arg);
}

_extern char const *_sub_1000374F(SteamPeer const *const);
char const *SteamPeer::PlayerGetName() const // 0x1000374F
{
    mangled_assert("?PlayerGetName@SteamPeer@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_1000374F(this);
    return __result;
}

_extern bool _sub_100036C2(SteamPeer const *const, char const *, SteamLobbyPlayerDesc &);
bool SteamPeer::PlayerGetDesc(char const *, SteamLobbyPlayerDesc &) const // 0x100036C2
{
    mangled_assert("?PlayerGetDesc@SteamPeer@@QBE_NPBDAAVSteamLobbyPlayerDesc@@@Z");
    todo("implement");
    bool __result = _sub_100036C2(this, arg, arg);
    return __result;
}

_extern void _sub_1000375E(SteamPeer *const, bool);
void SteamPeer::PlayerSetPlaying(bool) // 0x1000375E
{
    mangled_assert("?PlayerSetPlaying@SteamPeer@@QAEX_N@Z");
    todo("implement");
    _sub_1000375E(this, arg);
}

_extern void _sub_10002EF8(SteamPeer *const, char const *);
void SteamPeer::ChatConnect(char const *) // 0x10002EF8
{
    mangled_assert("?ChatConnect@SteamPeer@@QAEXPBD@Z");
    todo("implement");
    _sub_10002EF8(this, arg);
}

_extern void _sub_10002F17(SteamPeer *const);
void SteamPeer::ChatDisconnect() // 0x10002F17
{
    mangled_assert("?ChatDisconnect@SteamPeer@@QAEXXZ");
    todo("implement");
    _sub_10002F17(this);
}

_extern unsigned long long _sub_10002F3A(SteamPeer *const);
unsigned long long SteamPeer::GetLobbyID() // 0x10002F3A
{
    mangled_assert("?GetLobbyID@SteamPeer@@QAE_KXZ");
    todo("implement");
    unsigned long long __result = _sub_10002F3A(this);
    return __result;
}

_extern void _sub_100034A1(SteamPeer::Dispatch *const, LobbyMatchList_t *);
void SteamPeer::Dispatch::OnLobbyMatchListCallback(LobbyMatchList_t *) // 0x100034A1
{
    mangled_assert("?OnLobbyMatchListCallback@Dispatch@SteamPeer@@QAEXPAULobbyMatchList_t@@@Z");
    todo("implement");
    _sub_100034A1(this, arg);
}

_extern void _sub_100031AB(SteamPeer::Dispatch *const, LobbyDataUpdate_t *);
void SteamPeer::Dispatch::OnLobbyDataUpdatedCallback(LobbyDataUpdate_t *) // 0x100031AB
{
    mangled_assert("?OnLobbyDataUpdatedCallback@Dispatch@SteamPeer@@QAEXPAULobbyDataUpdate_t@@@Z");
    todo("implement");
    _sub_100031AB(this, arg);
}

_extern _sub_100029A7(ServerMatchmakingManager *const, SteamPeer *);
ServerMatchmakingManager::ServerMatchmakingManager(SteamPeer *) // 0x100029A7
{
    mangled_assert("??0ServerMatchmakingManager@@QAE@PAVSteamPeer@@@Z");
    todo("implement");
    _sub_100029A7(this, arg);
}

_extern _sub_100029BD(SteamPeer *const, SteamPeer const &);
_inline SteamPeer::SteamPeer(SteamPeer const &) // 0x100029BD
{
    mangled_assert("??0SteamPeer@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_100029BD(this, arg);
}

_extern void _sub_10002C18(ServerMatchmakingManager *const);
ServerMatchmakingManager::~ServerMatchmakingManager() // 0x10002C18
{
    mangled_assert("??1ServerMatchmakingManager@@QAE@XZ");
    todo("implement");
    _sub_10002C18(this);
}

_extern void _sub_1000376B(ServerMatchmakingManager *const);
void ServerMatchmakingManager::RefreshInternetServers() // 0x1000376B
{
    mangled_assert("?RefreshInternetServers@ServerMatchmakingManager@@QAEXXZ");
    todo("implement");
    _sub_1000376B(this);
}

_extern void _sub_100038EF(ServerMatchmakingManager *const, void *, __int32);
void ServerMatchmakingManager::ServerResponded(void *, __int32) // 0x100038EF
{
    mangled_assert("?ServerResponded@ServerMatchmakingManager@@UAEXPAXH@Z");
    todo("implement");
    _sub_100038EF(this, arg, arg);
}

_extern void _sub_10003768(ServerMatchmakingManager *const, void *, EMatchMakingServerResponse);
void ServerMatchmakingManager::RefreshComplete(void *, EMatchMakingServerResponse) // 0x10003768
{
    mangled_assert("?RefreshComplete@ServerMatchmakingManager@@UAEXPAXW4EMatchMakingServerResponse@@@Z");
    todo("implement");
    _sub_10003768(this, arg, arg);
}

/* ---------- private code */
#endif
