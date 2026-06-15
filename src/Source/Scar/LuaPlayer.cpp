#if 0
/* ---------- headers */

#include "decomp.h"
#include <deque>
#include <Engine\LevelDesc.h>
#include <xstring>
#include <Engine\Hash.h>
#include <xmemory0>
#include <fileio\md5.h>
#include <Scar\pch.h>
#include <Engine\BuildQueue.h>
#include <Engine\BuildData.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <Engine\gamestructimpl.h>
#include <Engine\Badge.h>
#include <luaconfig\luabinding.h>
#include <Engine\App\Hw2Identify.h>
#include <Engine\alliance.h>
#include <Mathlib\matrix4.h>
#include <Engine\BuildJob.h>
#include <Scar\LuaRuleSystem.h>
#include <Engine\MultiplierContainer.h>
#include <boost\utility.hpp>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <boost\utility\addressof.hpp>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <boost\utility\base_from_member.hpp>
#include <boost\utility_fwd.hpp>
#include <Mathlib\matrix3.h>
#include <queue>
#include <algorithm>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <boost\config.hpp>
#include <boost\static_assert.hpp>
#include <map>
#include <xtree>
#include <xmemory>
#include <Engine\ShieldTypes.h>
#include <Engine\ProfileSystem.h>
#include <Engine\MeshAnimation.h>
#include <Engine\Stats\StatLogging.h>
#include <Engine\Subsystems\SubsystemStatic.h>
#include <Engine\DynamicPoint.h>
#include <Engine\SobWithMeshStatic.h>
#include <Engine\SobRigidBodyStatic.h>
#include <SoundManager\SoundEntityHandle.h>
#include <boost\next_prior.hpp>
#include <Engine\Subsystems\HardPointManager.h>
#include <Engine\shipstatic.h>
#include <Engine\Subsystems\HardPoint.h>
#include <fileio\fileioexports.h>
#include <Engine\Subsystems\HardPointStatic.h>
#include <Engine\Parade.h>
#include <boost\noncopyable.hpp>
#include <vector>
#include <Engine\shipHold.h>
#include <Scar\wcharbinding.h>
#include <Engine\SquadronList.h>
#include <boost\detail\workaround.hpp>
#include <Engine\Subsystems\SubSystemType.h>
#include <Mathlib\quat.h>
#include <Engine\Modifiers\ModifierUIInfo.h>
#include <Engine\ship.h>
#include <Engine\Modifiers\ModifierMultiplier.h>
#include <Engine\SobWithMesh.h>
#include <Mathlib\vector3.h>
#include <Engine\Modifiers\ModifierEffect.h>
#include <Mathlib\vector4.h>
#include <Engine\SobRigidBody.h>
#include <Mathlib\luamathbinding.h>
#include <util\colour.h>
#include <Engine\sobid.h>
#include <localizer\localizer.h>
#include <Engine\Modifiers\ModifierApplier.h>
#include <Engine\orders.h>
#include <Engine\Tactics.h>
#include <Engine\orders_base.h>
#include <Mathlib\vector2.h>
#include <Engine\sobtypes.h>
#include <util\types.h>
#include <Engine\weaponstaticinfo.h>
#include <Engine\GunBinding.h>
#include <Engine\TeamColourRegistry.h>
#include <Engine\savegame.h>
#include <Engine\gamemsg.h>
#include <Engine\BuildJobType.h>
#include <Engine\task.h>
#include <stack>
#include <Engine\SOBGroup.h>
#include <profile\profile.h>
#include <iostream>
#include <Engine\Universe.h>
#include <Engine\savegamedef.h>
#include <Engine\BuildManager.h>
#include <Engine\abilities.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <Engine\playerresourcetype.h>
#include <Engine\ParadeCommand.h>
#include <Engine\WeaponClassSpecificInfo.h>
#include <Engine\commandtype.h>
#include <boost\detail\shared_count.hpp>
#include <Scar\GameQuery.h>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Sob\Resource\Resource.h>
#include <Engine\Squadron.h>
#include <Engine\Sob\Resource\ResourceStatic.h>
#include <Engine\command.h>
#include <Engine\DockCommand.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\selection.h>
#include <Engine\Race.h>
#include <Engine\fixedpoint.h>
#include <util\fixed.h>
#include <Engine\gameSettings.h>
#include <Engine\config.h>
#include <Engine\syncChecking.h>
#include <cstdarg>
#include <stdarg.h>
#include <assist\stlexsmallvector.h>
#include <Scar\LuaPlayer.h>
#include <set>
#include <Engine\Player.h>
#include <Engine\ResearchManager.h>
#include <Engine\weaponinfo.h>
#include <Engine\Volume.h>
#include <Engine\VolumeStatic.h>
#include <list>
#include <wchar.h>
#include <Engine\SobUnmoveableStatic.h>
#include <Engine\Graphics\TeamColour.h>
#include <string>
#include <Engine\Modifiers\ModifierAbility.h>
#include <Scar\Scar.h>
#include <Engine\Modifiers\ModifierTargetCache.h>
#include <Scar\ScarEventSys.h>
#include <Engine\OrderFeedback.h>
#include <Engine\ResearchData.h>
#include <Engine\DependencyData.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaPlayerLib :
    public LuaLibrary
{
public:
    LuaPlayerLib(`anonymous-namespace'::LuaPlayerLib const &); /* compiler_generated() */
    LuaPlayerLib();
    virtual ~LuaPlayerLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaPlayerLib &operator=(`anonymous-namespace'::LuaPlayerLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaPlayerLib) == 16, "Invalid `anonymous-namespace'::LuaPlayerLib size");

class `anonymous-namespace'::LuaPlayerConsoleLib :
    public LuaLibrary
{
public:
    LuaPlayerConsoleLib(`anonymous-namespace'::LuaPlayerConsoleLib const &); /* compiler_generated() */
    LuaPlayerConsoleLib();
    virtual ~LuaPlayerConsoleLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaPlayerConsoleLib &operator=(`anonymous-namespace'::LuaPlayerConsoleLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaPlayerConsoleLib) == 16, "Invalid `anonymous-namespace'::LuaPlayerConsoleLib size");

typedef `anonymous-namespace'::LuaPlayerLib ?A0xd759bdc7::LuaPlayerLib;
typedef `anonymous-namespace'::LuaPlayerConsoleLib ?A0xd759bdc7::LuaPlayerConsoleLib;

/* ---------- prototypes */

extern void Player_RestrictResearchOption(unsigned __int32 playerIndex, char const *research);
extern void Player_UnrestrictResearchOption(unsigned __int32 playerIndex, char const *research);
extern void Player_GrantResearchOption(unsigned __int32 playerIndex, char const *research);
extern void Player_GrantAllResearch(unsigned __int32 playerIndex);
extern void Player_Research(unsigned __int32 playerIndex, char const *research);
extern void Player_CancelResearch(unsigned __int32 playerIndex, char const *research);
extern bool Player_HasResearch(unsigned __int32 playerIndex, char const *research);
extern bool Player_IsResearching(unsigned __int32 playerIndex);
extern bool Player_HasSubsystem(unsigned __int32 playerIndex, char const *subSystemName);
extern bool Player_CanResearch(unsigned __int32 playerIndex, char const *research);
extern bool Player_HasQueuedResearch(unsigned __int32 playerIndex, char const *research);
extern void Player_RestrictBuildOption(unsigned __int32 playerIndex, char const *buildoption);
extern void Player_UnrestrictBuildOption(unsigned __int32 playerIndex, char const *buildoption);
extern float Player_GetRU(unsigned __int32 playerIndex);
extern float Player_GatheredRUs(unsigned __int32 playerIndex);
extern void Player_SetRU(unsigned __int32 playerIndex, unsigned __int32 ru);
extern void Player_SetBounty(unsigned __int32 playerIndex, float bounty);
extern void Player_Kill(unsigned __int32 playerIndex);
extern bool Player_HasShipWithBuildQueue(unsigned __int32 playerIndex);
extern bool Player_IsAlive(unsigned __int32 playerIndex);
extern void Player_SetDefaultShipTactic(unsigned __int32 playerIndex, __int32 tactic);
extern void Player_FillShipsByType(char const *sobGroupNameOut, unsigned __int32 playerID, char const *shipTypeName);
extern char const *Player_GetShipsByType(unsigned __int32 playerID, char const *shipTypeName);
extern void Player_FillSobGroupInVolume(char const *sobGroupNameOut, unsigned __int32 playerIndex, char const *volumeName);
extern bool Player_IsShipInVolume(unsigned __int32 playerIndex, char const *volumeName);
extern bool Player_FillProximitySobGroup(char const *sobGroupNameOut, __int32 playerIndex, char const *sobGroupName, float distance);
extern void Player_SetTeamColours(__int32 playerIndex, vector3 baseColour, vector3 stripeColour);
extern void Player_SetBadgeTexture(__int32 playerIndex, char const *badgeTexture);
extern void Player_SetPlayerName(__int32 playerIndex, char const *locPlayerName);
extern void Player_ShareVision(unsigned __int32 player1, unsigned __int32 player2, bool visible);
extern void Player_InstantDockAndParade(unsigned __int32 playerIndex, char const *sobGroupName, bool useHyperspaceEffect);
extern unsigned __int32 Player_NumberOfAwakeShips(unsigned __int32 playerIndex);
extern void gatherResourceType(Player *player, SobType resourceType, PlayerResourceType resType);
extern void Player_InstantlyGatherAllResources(unsigned __int32 playerIndex);
extern bool Player_HasQueuedBuild(unsigned __int32 playerIndex, char const *shipType);
extern unsigned __int32 Player_GetRace(unsigned __int32 playerIndex);
extern wchar_t const *Player_GetName(unsigned __int32 playerIndex);
extern void Player_AllowDockFromUIOverride(unsigned __int32 playerIndex, char const *shipTypeName);
extern unsigned __int32 Player_GetNumberOfSquadronsOfTypeAwakeOrSleeping(unsigned __int32 playerIndex, char const *shipName);

/* ---------- globals */

extern char const *LUALIB_PLAYER; // 0x841D9C
extern char const *LUALIB_PLAYER_CONSOLE; // 0x841DA0

/* ---------- private variables */

/* ---------- public code */

void Player_RestrictResearchOption(unsigned __int32 playerIndex, char const *research) // 0x712310
{
    mangled_assert("?Player_RestrictResearchOption@@YGXIPBD@Z");
    todo("implement");
}

void Player_UnrestrictResearchOption(unsigned __int32 playerIndex, char const *research) // 0x712985
{
    mangled_assert("?Player_UnrestrictResearchOption@@YGXIPBD@Z");
    todo("implement");
}

void Player_GrantResearchOption(unsigned __int32 playerIndex, char const *research) // 0x711855
{
    mangled_assert("?Player_GrantResearchOption@@YGXIPBD@Z");
    todo("implement");
}

void Player_GrantAllResearch(unsigned __int32 playerIndex) // 0x71180C
{
    mangled_assert("?Player_GrantAllResearch@@YGXI@Z");
    todo("implement");
}

void Player_Research(unsigned __int32 playerIndex, char const *research) // 0x71209E
{
    mangled_assert("?Player_Research@@YGXIPBD@Z");
    todo("implement");
}

void Player_CancelResearch(unsigned __int32 playerIndex, char const *research) // 0x71105B
{
    mangled_assert("?Player_CancelResearch@@YGXIPBD@Z");
    todo("implement");
}

bool Player_HasResearch(unsigned __int32 playerIndex, char const *research) // 0x711A83
{
    mangled_assert("?Player_HasResearch@@YG_NIPBD@Z");
    todo("implement");
}

bool Player_IsResearching(unsigned __int32 playerIndex) // 0x711F1D
{
    mangled_assert("?Player_IsResearching@@YG_NI@Z");
    todo("implement");
}

bool Player_HasSubsystem(unsigned __int32 playerIndex, char const *subSystemName) // 0x711B86
{
    mangled_assert("?Player_HasSubsystem@@YG_NIPBD@Z");
    todo("implement");
}

bool Player_CanResearch(unsigned __int32 playerIndex, char const *research) // 0x710FEE
{
    mangled_assert("?Player_CanResearch@@YG_NIPBD@Z");
    todo("implement");
}

bool Player_HasQueuedResearch(unsigned __int32 playerIndex, char const *research) // 0x711A16
{
    mangled_assert("?Player_HasQueuedResearch@@YG_NIPBD@Z");
    todo("implement");
}

void Player_RestrictBuildOption(unsigned __int32 playerIndex, char const *buildoption) // 0x712181
{
    mangled_assert("?Player_RestrictBuildOption@@YGXIPBD@Z");
    todo("implement");
}

void Player_UnrestrictBuildOption(unsigned __int32 playerIndex, char const *buildoption) // 0x7127FC
{
    mangled_assert("?Player_UnrestrictBuildOption@@YGXIPBD@Z");
    todo("implement");
}

float Player_GetRU(unsigned __int32 playerIndex) // 0x7116CA
{
    mangled_assert("?Player_GetRU@@YGMI@Z");
    todo("implement");
}

float Player_GatheredRUs(unsigned __int32 playerIndex) // 0x7115A5
{
    mangled_assert("?Player_GatheredRUs@@YGMI@Z");
    todo("implement");
}

void Player_SetRU(unsigned __int32 playerIndex, unsigned __int32 ru) // 0x7125D6
{
    mangled_assert("?Player_SetRU@@YGXII@Z");
    todo("implement");
}

void Player_SetBounty(unsigned __int32 playerIndex, float bounty) // 0x71249F
{
    mangled_assert("?Player_SetBounty@@YGXIM@Z");
    todo("implement");
}

void Player_Kill(unsigned __int32 playerIndex) // 0x71200F
{
    mangled_assert("?Player_Kill@@YGXI@Z");
    todo("implement");
}

bool Player_HasShipWithBuildQueue(unsigned __int32 playerIndex) // 0x711AF0
{
    mangled_assert("?Player_HasShipWithBuildQueue@@YG_NI@Z");
    todo("implement");
}

bool Player_IsAlive(unsigned __int32 playerIndex) // 0x711ED7
{
    mangled_assert("?Player_IsAlive@@YG_NI@Z");
    todo("implement");
}

void Player_SetDefaultShipTactic(unsigned __int32 playerIndex, __int32 tactic) // 0x7124EB
{
    mangled_assert("?Player_SetDefaultShipTactic@@YGXIH@Z");
    todo("implement");
}

void Player_FillShipsByType(char const *sobGroupNameOut, unsigned __int32 playerID, char const *shipTypeName) // 0x711332
{
    mangled_assert("?Player_FillShipsByType@@YGXPBDI0@Z");
    todo("implement");
}

char const *Player_GetShipsByType(unsigned __int32 playerID, char const *shipTypeName) // 0x711765
{
    mangled_assert("?Player_GetShipsByType@@YGPBDIPBD@Z");
    todo("implement");
}

void Player_FillSobGroupInVolume(char const *sobGroupNameOut, unsigned __int32 playerIndex, char const *volumeName) // 0x7113FA
{
    mangled_assert("?Player_FillSobGroupInVolume@@YGXPBDI0@Z");
    todo("implement");
}

bool Player_IsShipInVolume(unsigned __int32 playerIndex, char const *volumeName) // 0x711F68
{
    mangled_assert("?Player_IsShipInVolume@@YG_NIPBD@Z");
    todo("implement");
}

bool Player_FillProximitySobGroup(char const *sobGroupNameOut, __int32 playerIndex, char const *sobGroupName, float distance) // 0x711139
{
    mangled_assert("?Player_FillProximitySobGroup@@YG_NPBDH0M@Z");
    todo("implement");
}

void Player_SetTeamColours(__int32 playerIndex, vector3 baseColour, vector3 stripeColour) // 0x71262A
{
    mangled_assert("?Player_SetTeamColours@@YGXHVvector3@@0@Z");
    todo("implement");
}

void Player_SetBadgeTexture(__int32 playerIndex, char const *badgeTexture) // 0x7123EC
{
    mangled_assert("?Player_SetBadgeTexture@@YGXHPBD@Z");
    todo("implement");
}

void Player_SetPlayerName(__int32 playerIndex, char const *locPlayerName) // 0x712565
{
    mangled_assert("?Player_SetPlayerName@@YGXHPBD@Z");
    todo("implement");
}

void Player_ShareVision(unsigned __int32 player1, unsigned __int32 player2, bool visible) // 0x712763
{
    mangled_assert("?Player_ShareVision@@YGXII_N@Z");
    todo("implement");
}

void Player_InstantDockAndParade(unsigned __int32 playerIndex, char const *sobGroupName, bool useHyperspaceEffect) // 0x711C2A
{
    mangled_assert("?Player_InstantDockAndParade@@YGXIPBD_N@Z");
    todo("implement");
}

unsigned __int32 Player_NumberOfAwakeShips(unsigned __int32 playerIndex) // 0x712054
{
    mangled_assert("?Player_NumberOfAwakeShips@@YGII@Z");
    todo("implement");
}

void gatherResourceType(Player *player, SobType resourceType, PlayerResourceType resType) // 0x7133D5
{
    mangled_assert("?gatherResourceType@@YGXPAVPlayer@@W4SobType@@W4PlayerResourceType@@@Z");
    todo("implement");
}

void Player_InstantlyGatherAllResources(unsigned __int32 playerIndex) // 0x711E81
{
    mangled_assert("?Player_InstantlyGatherAllResources@@YGXI@Z");
    todo("implement");
}

bool Player_HasQueuedBuild(unsigned __int32 playerIndex, char const *shipType) // 0x711931
{
    mangled_assert("?Player_HasQueuedBuild@@YG_NIPBD@Z");
    todo("implement");
}

unsigned __int32 Player_GetRace(unsigned __int32 playerIndex) // 0x71171F
{
    mangled_assert("?Player_GetRace@@YGII@Z");
    todo("implement");
}

wchar_t const *Player_GetName(unsigned __int32 playerIndex) // 0x7115CA
{
    mangled_assert("?Player_GetName@@YGPB_WI@Z");
    todo("implement");
}

void Player_AllowDockFromUIOverride(unsigned __int32 playerIndex, char const *shipTypeName) // 0x710F23
{
    mangled_assert("?Player_AllowDockFromUIOverride@@YGXIPBD@Z");
    todo("implement");
}

unsigned __int32 Player_GetNumberOfSquadronsOfTypeAwakeOrSleeping(unsigned __int32 playerIndex, char const *shipName) // 0x711617
{
    mangled_assert("?Player_GetNumberOfSquadronsOfTypeAwakeOrSleeping@@YGIIPBD@Z");
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1Free<unsigned int,unsigned int> >::~ObjInternal1<unsigned int,unsigned int,LuaBinding::Functor1Free<unsigned int,unsigned int> >() // 0x710618
{
    mangled_assert("??1?$ObjInternal1@IIV?$Functor1Free@II@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,float,LuaBinding::Functor1Free<unsigned int,float> >::~ObjInternal1<unsigned int,float,LuaBinding::Functor1Free<unsigned int,float> >() // 0x71061E
{
    mangled_assert("??1?$ObjInternal1@IMV?$Functor1Free@IM@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal1<unsigned int,wchar_t const *,LuaBinding::Functor1Free<unsigned int,wchar_t const *> >::~ObjInternal1<unsigned int,wchar_t const *,LuaBinding::Functor1Free<unsigned int,wchar_t const *> >() // 0x710624
{
    mangled_assert("??1?$ObjInternal1@IPB_WV?$Functor1Free@IPB_W@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,int,void,LuaBinding::Functor2Free<unsigned int,int,void> >::~ObjInternal2<unsigned int,int,void,LuaBinding::Functor2Free<unsigned int,int,void> >() // 0x71062A
{
    mangled_assert("??1?$ObjInternal2@IHXV?$Functor2Free@IHX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,float,void,LuaBinding::Functor2Free<unsigned int,float,void> >::~ObjInternal2<unsigned int,float,void,LuaBinding::Functor2Free<unsigned int,float,void> >() // 0x710630
{
    mangled_assert("??1?$ObjInternal2@IMXV?$Functor2Free@IMX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,char const *,unsigned int,LuaBinding::Functor2Free<unsigned int,char const *,unsigned int> >::~ObjInternal2<unsigned int,char const *,unsigned int,LuaBinding::Functor2Free<unsigned int,char const *,unsigned int> >() // 0x710636
{
    mangled_assert("??1?$ObjInternal2@IPBDIV?$Functor2Free@IPBDI@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,char const *,char const *,LuaBinding::Functor2Free<unsigned int,char const *,char const *> >::~ObjInternal2<unsigned int,char const *,char const *,LuaBinding::Functor2Free<unsigned int,char const *,char const *> >() // 0x71063C
{
    mangled_assert("??1?$ObjInternal2@IPBDPBDV?$Functor2Free@IPBDPBD@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal2<unsigned int,char const *,bool,LuaBinding::Functor2Free<unsigned int,char const *,bool> >::~ObjInternal2<unsigned int,char const *,bool,LuaBinding::Functor2Free<unsigned int,char const *,bool> >() // 0x710642
{
    mangled_assert("??1?$ObjInternal2@IPBD_NV?$Functor2Free@IPBD_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<int,vector3,vector3,void,LuaBinding::Functor3Free<int,vector3,vector3,void> >::~ObjInternal3<int,vector3,vector3,void,LuaBinding::Functor3Free<int,vector3,vector3,void> >() // 0x710648
{
    mangled_assert("??1?$ObjInternal3@HVvector3@@V1@XV?$Functor3Free@HVvector3@@V1@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<unsigned int,char const *,bool,void,LuaBinding::Functor3Free<unsigned int,char const *,bool,void> >::~ObjInternal3<unsigned int,char const *,bool,void,LuaBinding::Functor3Free<unsigned int,char const *,bool,void> >() // 0x71064E
{
    mangled_assert("??1?$ObjInternal3@IPBD_NXV?$Functor3Free@IPBD_NX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal3<char const *,unsigned int,char const *,void,LuaBinding::Functor3Free<char const *,unsigned int,char const *,void> >::~ObjInternal3<char const *,unsigned int,char const *,void,LuaBinding::Functor3Free<char const *,unsigned int,char const *,void> >() // 0x710654
{
    mangled_assert("??1?$ObjInternal3@PBDIPBDXV?$Functor3Free@PBDIPBDX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline LuaBinding::ObjInternal4<char const *,int,char const *,float,bool,LuaBinding::Functor4Free<char const *,int,char const *,float,bool> >::~ObjInternal4<char const *,int,char const *,float,bool,LuaBinding::Functor4Free<char const *,int,char const *,float,bool> >() // 0x71065A
{
    mangled_assert("??1?$ObjInternal4@PBDHPBDM_NV?$Functor4Free@PBDHPBDM_N@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
}

/* ---------- private code */
#endif
