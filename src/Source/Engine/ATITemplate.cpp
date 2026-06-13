#if 0
/* ---------- headers */

#include "decomp.h"
#include <SobWithMesh.h>
#include <Render\objects\debugrender.h>
#include <Modifiers\ModifierEffect.h>
#include <SobRigidBody.h>
#include <Render\objects\core.h>
#include <assist\stlexsmallvector.h>
#include <sob.h>
#include <Render\objects\objects.h>
#include <sobstatic.h>
#include <xstring>
#include <Render\gl\types.h>
#include <Collision\Primitives\sphere.h>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <Mathlib\matvec.h>
#include <seInterface2\SampleID.h>
#include <boost\shared_array.hpp>
#include <pch.h>
#include <seInterface2\SampleBase.h>
#include <renderer.h>
#include <TacticalIcon.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <Universe.h>
#include <Render\gl\lotypes.h>
#include <Waypoint.h>
#include <SobUnmoveable.h>
#include <Mathlib\matrix3.h>
#include <shipstatic.h>
#include <weaponstaticinfo.h>
#include <GunBinding.h>
#include <weaponTargetInfo.h>
#include <Render\gl\r_types.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Collision\Primitives\capsule.h>
#include <DynamicPoint.h>
#include <Collision\Primitives\segment.h>
#include <Modifiers\ModifierTargetCache.h>
#include <Collision\BVH\profiling.h>
#include <HyperspaceManager.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <WeaponClassSpecificInfo.h>
#include <xmemory>
#include <fixedpoint.h>
#include <Collision\Primitives\obb.h>
#include <util\fixed.h>
#include <seInterface2\sedefinesshared.h>
#include <Race.h>
#include <HyperSpaceBaseCommand.h>
#include <list>
#include <TacticalOverlay.h>
#include <CloakManager.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector3.h>
#include <MainUIImpl.h>
#include <UIGraphic.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <Mathlib\vector4.h>
#include <Cursor.h>
#include <resourceCommand.h>
#include <BuildManager.h>
#include <MultiplierTypes.h>
#include <Collision\BVH\bvh.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <map>
#include <xtree>
#include <boost\smart_ptr.hpp>
#include <Sob\Resource\Resource.h>
#include <dbdefines.h>
#include <boost\scoped_ptr.hpp>
#include <Sob\Resource\ResourceStatic.h>
#include <UnitCaps\UnitCaps.h>
#include <SelTarg.h>
#include <Mathlib\vector2.h>
#include <Parade.h>
#include <util\types.h>
#include <Modifiers\ModifierAbility.h>
#include <hash_map>
#include <xhash>
#include <LuaRender.h>
#include <weaponinfo.h>
#include <DefenseFieldManager.h>
#include <boost\cstdint.hpp>
#include <Mathlib\mathutil.h>
#include <playerresourcetype.h>
#include <boost\scoped_array.hpp>
#include <TeamColourRegistry.h>
#include <Camera\OrbitParameters.h>
#include <Mathlib\quat.h>
#include <savegame.h>
#include <task.h>
#include <stack>
#include <SoundManager\SoundEntityHandle.h>
#include <seInterface2\PatchID.h>
#include <SobWithMeshStatic.h>
#include <Player.h>
#include <seInterface2\PatchBase.h>
#include <ResearchManager.h>
#include <assist\typemagic.h>
#include <seInterface2\SoundParams.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\Subsystem.h>
#include <FormHyperspaceGateCommand.h>
#include <Mathlib\mathlibdll.h>
#include <Tactics.h>
#include <SOBGroupManager.h>
#include <Mathlib\fastmath.h>
#include <Subsystems\SubsystemStatic.h>
#include <MeshAnimation.h>
#include <ShieldTypes.h>
#include <CameraCommand.h>
#include <pathpoints.h>
#include <luaconfig\luaconfig.h>
#include <CameraHW.h>
#include <lua.h>
#include <Camera\CameraOrbitTarget.h>
#include <debug\db.h>
#include <SensorsBlobs.h>
#include <Subsystems\HardPointManager.h>
#include <Subsystems\HardPoint.h>
#include <deque>
#include <Collision\BVH\octree.h>
#include <Subsystems\HardPointStatic.h>
#include <SensorsManager.h>
#include <Collision\BVH\span.h>
#include <Subsystems\SubSystemType.h>
#include <SoundManager\SoundManager.h>
#include <Collision\BVH\Internal\span_i.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <Collision\BVH\proxy.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <CaptureManager.h>
#include <Missile.h>
#include <boost\shared_ptr.hpp>
#include <Collision\intersect.h>
#include <util\colour.h>
#include <LatchPointManager.h>
#include <localizer\localizer.h>
#include <MissileStatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <Collision\primitivesfwd.h>
#include <selection.h>
#include <savegamedef.h>
#include <MainUI.h>
#include <Squadron.h>
#include <boost\detail\shared_count.hpp>
#include <Selector.h>
#include <bitset>
#include <command.h>
#include <MetaSelTarg.h>
#include <platform\timer.h>
#include <sobid.h>
#include <boost\detail\lwm_win32.hpp>
#include <ParadeCommand.h>
#include <platform\platformexports.h>
#include <commandtype.h>
#include <OrderFeedback.h>
#include <SquadronList.h>
#include <Interpolation.h>
#include <profile\profile.h>
#include <iostream>
#include <Collision\Primitives\aabb.h>
#include <abilities.h>
#include <Camera\Camera.h>
#include <mainuidefines.h>
#include <Graphics\TeamColour.h>
#include <Camera\Frustum.h>
#include <ATITemplate.h>
#include <Camera\Plane3.h>
#include <ATI.h>
#include <wchar.h>
#include <platform\osdef.h>
#include <string>
#include <prim.h>
#include <swprintf.inl>
#include <queue>
#include <algorithm>
#include <Modifiers\ModifierUIInfo.h>
#include <ship.h>
#include <Modifiers\ModifierMultiplier.h>

/* ---------- constants */

/* ---------- definitions */

struct ATITemplateSobs::{ctor}::__l2::<unnamed-type-stringsToRead>
{
    char const *key; // 0x0
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *dest; // 0x4
};
static_assert(sizeof(ATITemplateSobs::{ctor}::__l2::<unnamed-type-stringsToRead>) == 8, "Invalid ATITemplateSobs::{ctor}::__l2::<unnamed-type-stringsToRead> size");

/* ---------- prototypes */

extern wchar_t *ATIGetGroupNumberString(__int32 num);
extern bool ATIStartup();
extern bool ATIShutdown();
extern bool GetVisFlag(char const *name, unsigned __int32 &out);

/* ---------- globals */

extern ATITemplateSobs *ATIAllied; // 0x8486E0
extern ATITemplateSobs *ATIEnemy; // 0x8486E4
extern std::vector<UIGraphicMesh2D *,std::allocator<UIGraphicMesh2D *> > ATIHealthBars; // 0x84870C
extern std::vector<UIGraphicMesh2D *,std::allocator<UIGraphicMesh2D *> > ATIHealthBarOutlines; // 0x848718
extern ATITemplateSobs *ATIFriendly; // 0x8486DC
extern ATITemplateSubsystem *ATISubSystemFriendly; // 0x8486E8
extern ATITemplateSubsystem *ATISubSystemAllied; // 0x8486EC
extern ATITemplateSubsystem *ATISubSystemEnemy; // 0x8486F0
extern ATITemplateSobs *ATIResource; // 0x8486F4
extern ATITemplateSobs *ATIMissileFriendly; // 0x8486F8
extern ATITemplateSobs *ATIMissileAllied; // 0x8486FC
extern ATITemplateSobs *ATIMissileEnemy; // 0x848700
extern ATITemplateSobs *ATISphereModifierFriendly; // 0x848704
extern ATITemplate *ATIRallyPoint; // 0x848708

/* ---------- private variables */

_static
{
    extern wchar_t *ATIGroupStrings[21]; // 0x83BAB0
    extern ATIPossibleVisFlag ATIVisibilityFlags[30]; // 0x83BB08
}

/* ---------- public code */

_extern wchar_t *_sub_5E2B37(__int32);
wchar_t *ATIGetGroupNumberString(__int32 num) // 0x5E2B37
{
    mangled_assert("?ATIGetGroupNumberString@@YGPA_WH@Z");
    todo("implement");
    wchar_t * __result = _sub_5E2B37(num);
    return __result;
}

_extern _sub_5E26B2(ATITemplateHealth *const, LuaConfig &, char const *);
ATITemplateHealth::ATITemplateHealth(LuaConfig &, char const *) // 0x5E26B2
{
    mangled_assert("??0ATITemplateHealth@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5E26B2(this, arg, arg);
}

_extern vector4 const *_sub_5E2B77(ATITemplateHealth const *const, float);
vector4 const *ATITemplateHealth::ATIGetHealthColour(float) const // 0x5E2B77
{
    mangled_assert("?ATIGetHealthColour@ATITemplateHealth@@QBEPBVvector4@@M@Z");
    todo("implement");
    vector4 const * __result = _sub_5E2B77(this, arg);
    return __result;
}

_extern vector4 const *_sub_5E2B51(ATITemplateHealth const *const, float);
vector4 const *ATITemplateHealth::ATIGetHealthBackgroundColour(float) const // 0x5E2B51
{
    mangled_assert("?ATIGetHealthBackgroundColour@ATITemplateHealth@@QBEPBVvector4@@M@Z");
    todo("implement");
    vector4 const * __result = _sub_5E2B51(this, arg);
    return __result;
}

_extern _sub_5E2778(ATITemplateSobs *const, LuaConfig &, char const *);
ATITemplateSobs::ATITemplateSobs(LuaConfig &, char const *) // 0x5E2778
{
    mangled_assert("??0ATITemplateSobs@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5E2778(this, arg, arg);
}

_extern void _sub_5E3DD5(ATITemplateSobs *const, Squadron const *, OrderFeedbackValue const &, unsigned __int32);
void ATITemplateSobs::display(Squadron const *, OrderFeedbackValue const &, unsigned __int32) // 0x5E3DD5
{
    mangled_assert("?display@ATITemplateSobs@@QAEXPBVSquadron@@ABUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_5E3DD5(this, arg, arg, arg);
}

_extern void _sub_5E35D5(ATITemplateSobs *const, Selection const &, OrderFeedbackValue const &, unsigned __int32);
void ATITemplateSobs::display(Selection const &, OrderFeedbackValue const &, unsigned __int32) // 0x5E35D5
{
    mangled_assert("?display@ATITemplateSobs@@QAEXABVSelection@@ABUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_5E35D5(this, arg, arg, arg);
}

_extern void _sub_5E3A04(ATITemplateSobs *const, Missile *, unsigned __int32);
void ATITemplateSobs::display(Missile *, unsigned __int32) // 0x5E3A04
{
    mangled_assert("?display@ATITemplateSobs@@QAEXPAVMissile@@I@Z");
    todo("implement");
    _sub_5E3A04(this, arg, arg);
}

_extern void _sub_5E3B48(ATITemplateSobs *const, Sob *, unsigned __int32);
void ATITemplateSobs::display(Sob *, unsigned __int32) // 0x5E3B48
{
    mangled_assert("?display@ATITemplateSobs@@QAEXPAVSob@@I@Z");
    todo("implement");
    _sub_5E3B48(this, arg, arg);
}

_extern void _sub_5E3BED(ATITemplateSobs *const, SobWithMesh const *, float, vector4 const &, unsigned __int32);
void ATITemplateSobs::display(SobWithMesh const *, float, vector4 const &, unsigned __int32) // 0x5E3BED
{
    mangled_assert("?display@ATITemplateSobs@@QAEXPBVSobWithMesh@@MABVvector4@@I@Z");
    todo("implement");
    _sub_5E3BED(this, arg, arg, arg, arg);
}

_extern unsigned __int32 _sub_5E348F(ATITemplateSobs *const, vector4 *, ATIParameter *, SobWithMesh const *, vector4 const *, vector4 const *, unsigned __int32);
unsigned __int32 ATITemplateSobs::computeTOParams(vector4 *, ATIParameter *, SobWithMesh const *, vector4 const *, vector4 const *, unsigned __int32) // 0x5E348F
{
    mangled_assert("?computeTOParams@ATITemplateSobs@@QAEIPAVvector4@@PAUATIParameter@@PBVSobWithMesh@@PBV2@3I@Z");
    todo("implement");
    unsigned __int32 __result = _sub_5E348F(this, arg, arg, arg, arg, arg, arg);
    return __result;
}

_extern _sub_5E2A41(ATITemplateSubsystem *const, LuaConfig &, char const *);
ATITemplateSubsystem::ATITemplateSubsystem(LuaConfig &, char const *) // 0x5E2A41
{
    mangled_assert("??0ATITemplateSubsystem@@QAE@AAVLuaConfig@@PBD@Z");
    todo("implement");
    _sub_5E2A41(this, arg, arg);
}

_extern void _sub_5E2A5C(ATITemplateHealth *const);
_inline ATITemplateHealth::~ATITemplateHealth() // 0x5E2A5C
{
    mangled_assert("??1ATITemplateHealth@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E2A5C(this);
}

_extern void _sub_5E2A61(ATITemplateSobs *const);
_inline ATITemplateSobs::~ATITemplateSobs() // 0x5E2A61
{
    mangled_assert("??1ATITemplateSobs@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E2A61(this);
}

_extern void _sub_5E2AB6(ATITemplateSubsystem *const);
_inline ATITemplateSubsystem::~ATITemplateSubsystem() // 0x5E2AB6
{
    mangled_assert("??1ATITemplateSubsystem@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5E2AB6(this);
}

_extern void _sub_5E447E(ATITemplateSubsystem *const, SubSystem *, OrderFeedbackValue const &, unsigned __int32);
void ATITemplateSubsystem::display(SubSystem *, OrderFeedbackValue const &, unsigned __int32) // 0x5E447E
{
    mangled_assert("?display@ATITemplateSubsystem@@QAEXPAVSubSystem@@ABUOrderFeedbackValue@@I@Z");
    todo("implement");
    _sub_5E447E(this, arg, arg, arg);
}

_extern bool _sub_5E2DC2();
bool ATIStartup() // 0x5E2DC2
{
    mangled_assert("?ATIStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5E2DC2();
    return __result;
}

_extern bool _sub_5E2B9D();
bool ATIShutdown() // 0x5E2B9D
{
    mangled_assert("?ATIShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_5E2B9D();
    return __result;
}

_extern bool _sub_5E32DA(char const *, unsigned __int32 &);
bool GetVisFlag(char const *name, unsigned __int32 &out) // 0x5E32DA
{
    mangled_assert("?GetVisFlag@@YG_NPBDAAI@Z");
    todo("implement");
    bool __result = _sub_5E32DA(name, out);
    return __result;
}

/* ---------- private code */
#endif
