#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\stlexsmallvector.h>
#include <Modifiers\ModifierAbility.h>
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <platform\timer.h>
#include <platform\platformexports.h>
#include <TeamColourRegistry.h>
#include <savegame.h>
#include <task.h>
#include <SoundManager\SoundEntityHandle.h>
#include <stack>
#include <Sob\Resource\Asteroid.h>
#include <Mathlib\matrix3.h>
#include <Sob\Resource\Resource.h>
#include <BuildManager.h>
#include <Ship\FormationTargetInfo.h>
#include <Sob\Resource\ResourceStatic.h>
#include <Collision\Primitives\obb.h>
#include <new>
#include <Collision\BVH\octree.h>
#include <Collision\BVH\span.h>
#include <exception>
#include <xstddef>
#include <Collision\BVH\Internal\span_i.h>
#include <playerresourcetype.h>
#include <type_traits>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <Tactics.h>
#include <gameRandom.h>
#include <xutility>
#include <Race.h>
#include <utility>
#include <iosfwd>
#include <fileio\filepath.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <Interpolation.h>
#include <DynamicPoint.h>
#include <Collision\Primitives\aabb.h>
#include <ShipQuery.h>
#include <Parade.h>
#include <list>
#include <sobid.h>
#include <Player.h>
#include <ResearchManager.h>
#include <Ship\Formation.h>
#include <Mathlib\vector3.h>
#include <Ship\FormationPattern.h>
#include <Mathlib\vector4.h>
#include <campaign.h>
#include <scripting.h>
#include <map>
#include <scriptaccess.h>
#include <xtree>
#include <scripttypedef.h>
#include <boost\scoped_ptr.hpp>
#include <abilities.h>
#include <lua.h>
#include <App\Hw2Identify.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <seInterface2\PatchID.h>
#include <SelTarg.h>
#include <seInterface2\PatchBase.h>
#include <prim.h>
#include <seInterface2\SoundParams.h>
#include <boost\cstdint.hpp>
#include <Modifiers\ModifierUIInfo.h>
#include <Modifiers\ModifierMultiplier.h>
#include <Modifiers\ModifierEffect.h>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <fixedpoint.h>
#include <Collision\BVH\profiling.h>
#include <util\fixed.h>
#include <Mathlib\quat.h>
#include <config.h>
#include <Modifiers\ModifierApplier.h>
#include <dbdefines.h>
#include <random.h>
#include <UnitCaps\UnitCaps.h>
#include <profile\profile.h>
#include <shipstatic.h>
#include <iostream>
#include <SOBGroupManager.h>
#include <weaponstaticinfo.h>
#include <hash_map>
#include <GunBinding.h>
#include <xhash>
#include <weaponinfo.h>
#include <alliance.h>
#include <ParadeCommand.h>
#include <Modifiers\ModifierTargetCache.h>
#include <commandtype.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <deque>
#include <MultiplierTypes.h>
#include <SOBGroup.h>
#include <Collision\BVH\bvh.h>
#include <WeaponClassSpecificInfo.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <SobFactory.h>
#include <selection.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <MeshAnimation.h>
#include <Universe.h>
#include <ShieldTypes.h>
#include <Waypoint.h>
#include <Sob\Resource\AsteroidStatic.h>
#include <SobUnmoveable.h>
#include <sob.h>
#include <luaconfig\luabinding.h>
#include <sobstatic.h>
#include <SobWithMeshStatic.h>
#include <luaconfig\luaconfig.h>
#include <Collision\Primitives\sphere.h>
#include <Squadron.h>
#include <command.h>
#include <ship.h>
#include <SobWithMesh.h>
#include <Subsystems\HardPointManager.h>
#include <ReactiveFleet.h>
#include <SobRigidBody.h>
#include <Subsystems\HardPoint.h>
#include <wchar.h>
#include <HyperspaceManager.h>
#include <Subsystems\HardPointStatic.h>
#include <SquadronList.h>
#include <SobRigidBodyStatic.h>
#include <Subsystems\SubSystemType.h>
#include <OrderFeedback.h>
#include <queue>

/* ---------- constants */

/* ---------- definitions */

class Score
{
public:
    Score();
    CounterValue m_score; // 0x0
    float m_resourceCost; // 0x1C
    void operator+=(ShipStatic const *);
    void operator+=(Score const &);
    void operator*=(float);
};
static_assert(sizeof(Score) == 32, "Invalid Score size");

class ReinforcementShipList
{
public:
    ReinforcementShipList(ReinforcementShipList const &); /* compiler_generated() */
    ReinforcementShipList();
    ~ReinforcementShipList();
    bool loadData(unsigned __int32, std::list<unsigned int,std::allocator<unsigned int> > const &);
    unsigned __int32 getShipToCounter(Score const &, Score const &) const;
    class ReinforcementShipType
    {
    public:
        ReinforcementShipType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, float);
        Score const &getFleetScore() const;
        _inline unsigned __int32 getShipType() const;
        _inline float getWeighting() const;
        ShipStatic *getShipStatic() const;
    private:
        unsigned __int32 m_typeID; // 0x0
        float m_weighting; // 0x4
        Score m_score; // 0x8
    };
    static_assert(sizeof(ReinforcementShipType) == 40, "Invalid ReinforcementShipType size");
private:
    std::list<ReinforcementShipList::ReinforcementShipType *,std::allocator<ReinforcementShipList::ReinforcementShipType *> > m_reinforcements; // 0x0
public:
    ReinforcementShipList &operator=(ReinforcementShipList const &); /* compiler_generated() */
};
static_assert(sizeof(ReinforcementShipList) == 8, "Invalid ReinforcementShipList size");

class ReactiveFleetResourceSlot
{
public:
    _inline ReactiveFleetResourceSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 const &, float const, float const, float const);
    _inline bool placed() const;
    unsigned __int32 placeResource(unsigned __int32);
private:
    bool m_placed; // 0x0
    vector3 m_startPosition; // 0x4
    matrix3 m_startRotation; // 0x10
    AsteroidStatic *m_staticData; // 0x34
};
static_assert(sizeof(ReactiveFleetResourceSlot) == 56, "Invalid ReactiveFleetResourceSlot size");

class ReactiveFleetSlot
{
public:
    ReactiveFleetSlot(ReactiveFleetSlot const &); /* compiler_generated() */
    _inline ReactiveFleetSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32 const, bool const, vector3 const &, float const, float const, float const, ReinforcementShipList *);
    _inline ~ReactiveFleetSlot();
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getSobGroupName() const;
    _inline bool getStartInHyperspace() const;
    _inline vector3 const &getStartPosition() const;
    _inline matrix3 const &getStartRotation() const;
    _inline __int32 getPlayerID() const;
    _inline ReinforcementShipList const *getShipList() const;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_sobGroupName; // 0x0
    bool m_startInHyperspace; // 0x18
    vector3 m_startPosition; // 0x1C
    matrix3 m_startRotation; // 0x28
    __int32 m_playerID; // 0x4C
    ReinforcementShipList *m_shipList; // 0x50
public:
    ReactiveFleetSlot &operator=(ReactiveFleetSlot const &); /* compiler_generated() */
};
static_assert(sizeof(ReactiveFleetSlot) == 84, "Invalid ReactiveFleetSlot size");

/* ---------- prototypes */

extern bool operator<(Score const &lhs, Score const &rhs);
extern float operator/(Score const &lhs, Score const &rhs);

/* ---------- globals */

extern ReactiveFleet *ReactiveFleet::s_instance; // 0x84AA30

/* ---------- private variables */

/* ---------- public code */

_extern _sub_621B68(Score *const);
Score::Score() // 0x621B68
{
    mangled_assert("??0Score@@QAE@XZ");
    todo("implement");
    _sub_621B68(this);
}

_extern void _sub_621B96(std::_List_buy<ReinforcementShipList::ReinforcementShipType *,std::allocator<ReinforcementShipList::ReinforcementShipType *> > *const);
_inline std::_List_buy<ReinforcementShipList::ReinforcementShipType *,std::allocator<ReinforcementShipList::ReinforcementShipType *> >::~_List_buy<ReinforcementShipList::ReinforcementShipType *,std::allocator<ReinforcementShipList::ReinforcementShipType *> >() // 0x621B96
{
    mangled_assert("??1?$_List_buy@PAVReinforcementShipType@ReinforcementShipList@@V?$allocator@PAVReinforcementShipType@ReinforcementShipList@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_621B96(this);
}

_extern void _sub_621B9F(std::_List_buy<Resource *,std::allocator<Resource *> > *const);
_inline std::_List_buy<Resource *,std::allocator<Resource *> >::~_List_buy<Resource *,std::allocator<Resource *> >() // 0x621B9F
{
    mangled_assert("??1?$_List_buy@PAVResource@@V?$allocator@PAVResource@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_621B9F(this);
}

_extern void _sub_621E96(Score *const, ShipStatic const *);
void Score::operator+=(ShipStatic const *) // 0x621E96
{
    mangled_assert("??YScore@@QAEXPBVShipStatic@@@Z");
    todo("implement");
    _sub_621E96(this, arg);
}

_extern void _sub_621E58(Score *const, Score const &);
void Score::operator+=(Score const &) // 0x621E58
{
    mangled_assert("??YScore@@QAEXABV0@@Z");
    todo("implement");
    _sub_621E58(this, arg);
}

_extern void _sub_621DC2(Score *const, float);
void Score::operator*=(float) // 0x621DC2
{
    mangled_assert("??XScore@@QAEXM@Z");
    todo("implement");
    _sub_621DC2(this, arg);
}

_extern bool _sub_621DA9(Score const &, Score const &);
bool operator<(Score const &lhs, Score const &rhs) // 0x621DA9
{
    mangled_assert("??M@YG_NABVScore@@0@Z");
    todo("implement");
    bool __result = _sub_621DA9(lhs, rhs);
    return __result;
}

_extern float _sub_621D8A(Score const &, Score const &);
float operator/(Score const &lhs, Score const &rhs) // 0x621D8A
{
    mangled_assert("??K@YGMABVScore@@0@Z");
    todo("implement");
    float __result = _sub_621D8A(lhs, rhs);
    return __result;
}

_extern unsigned __int32 _sub_622D8E(ReinforcementShipList::ReinforcementShipType const *const);
_inline unsigned __int32 ReinforcementShipList::ReinforcementShipType::getShipType() const // 0x622D8E
{
    mangled_assert("?getShipType@ReinforcementShipType@ReinforcementShipList@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_622D8E(this);
    return __result;
}

_extern float _sub_622DA0(ReinforcementShipList::ReinforcementShipType const *const);
_inline float ReinforcementShipList::ReinforcementShipType::getWeighting() const // 0x622DA0
{
    mangled_assert("?getWeighting@ReinforcementShipType@ReinforcementShipList@@QBEMXZ");
    todo("implement");
    float __result = _sub_622DA0(this);
    return __result;
}

_extern _sub_621B23(ReinforcementShipList::ReinforcementShipType *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, float);
ReinforcementShipList::ReinforcementShipType::ReinforcementShipType(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, float) // 0x621B23
{
    mangled_assert("??0ReinforcementShipType@ReinforcementShipList@@QAE@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z");
    todo("implement");
    _sub_621B23(this, arg, arg);
}

_extern ShipStatic *_sub_622BF3(ReinforcementShipList::ReinforcementShipType const *const);
ShipStatic *ReinforcementShipList::ReinforcementShipType::getShipStatic() const // 0x622BF3
{
    mangled_assert("?getShipStatic@ReinforcementShipType@ReinforcementShipList@@QBEPAVShipStatic@@XZ");
    todo("implement");
    ShipStatic * __result = _sub_622BF3(this);
    return __result;
}

_extern _sub_621B0C(ReinforcementShipList *const);
ReinforcementShipList::ReinforcementShipList() // 0x621B0C
{
    mangled_assert("??0ReinforcementShipList@@QAE@XZ");
    todo("implement");
    _sub_621B0C(this);
}

_extern bool _sub_622DC9(ReinforcementShipList *const, unsigned __int32, std::list<unsigned int,std::allocator<unsigned int> > const &);
bool ReinforcementShipList::loadData(unsigned __int32, std::list<unsigned int,std::allocator<unsigned int> > const &) // 0x622DC9
{
    mangled_assert("?loadData@ReinforcementShipList@@QAE_NIABV?$list@IV?$allocator@I@std@@@std@@@Z");
    todo("implement");
    bool __result = _sub_622DC9(this, arg, arg);
    return __result;
}

_extern void _sub_621C82(ReinforcementShipList *const);
ReinforcementShipList::~ReinforcementShipList() // 0x621C82
{
    mangled_assert("??1ReinforcementShipList@@QAE@XZ");
    todo("implement");
    _sub_621C82(this);
}

_extern _sub_621A3D(ReactiveFleetResourceSlot *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 const &, float const, float const, float const);
_inline ReactiveFleetResourceSlot::ReactiveFleetResourceSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, vector3 const &, float const, float const, float const) // 0x621A3D
{
    mangled_assert("??0ReactiveFleetResourceSlot@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVvector3@@MMM@Z");
    todo("implement");
    _sub_621A3D(this, arg, arg, arg, arg, arg);
}

_extern bool _sub_6232FD(ReactiveFleetResourceSlot const *const);
_inline bool ReactiveFleetResourceSlot::placed() const // 0x6232FD
{
    mangled_assert("?placed@ReactiveFleetResourceSlot@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6232FD(this);
    return __result;
}

_extern unsigned __int32 _sub_62326D(ReactiveFleetResourceSlot *const, unsigned __int32);
unsigned __int32 ReactiveFleetResourceSlot::placeResource(unsigned __int32) // 0x62326D
{
    mangled_assert("?placeResource@ReactiveFleetResourceSlot@@QAEII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_62326D(this, arg);
    return __result;
}

_extern _sub_621A94(ReactiveFleetSlot *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32 const, bool const, vector3 const &, float const, float const, float const, ReinforcementShipList *);
_inline ReactiveFleetSlot::ReactiveFleetSlot(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, __int32 const, bool const, vector3 const &, float const, float const, float const, ReinforcementShipList *) // 0x621A94
{
    mangled_assert("??0ReactiveFleetSlot@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NABVvector3@@MMMPAVReinforcementShipList@@@Z");
    todo("implement");
    _sub_621A94(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_621C5C(ReactiveFleetSlot *const);
_inline ReactiveFleetSlot::~ReactiveFleetSlot() // 0x621C5C
{
    mangled_assert("??1ReactiveFleetSlot@@QAE@XZ");
    todo("implement");
    _sub_621C5C(this);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_622D91(ReactiveFleetSlot const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &ReactiveFleetSlot::getSobGroupName() const // 0x622D91
{
    mangled_assert("?getSobGroupName@ReactiveFleetSlot@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_622D91(this);
    return __result;
}

_extern bool _sub_622D94(ReactiveFleetSlot const *const);
_inline bool ReactiveFleetSlot::getStartInHyperspace() const // 0x622D94
{
    mangled_assert("?getStartInHyperspace@ReactiveFleetSlot@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_622D94(this);
    return __result;
}

_extern vector3 const &_sub_622D98(ReactiveFleetSlot const *const);
_inline vector3 const &ReactiveFleetSlot::getStartPosition() const // 0x622D98
{
    mangled_assert("?getStartPosition@ReactiveFleetSlot@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_622D98(this);
    return __result;
}

_extern matrix3 const &_sub_622D9C(ReactiveFleetSlot const *const);
_inline matrix3 const &ReactiveFleetSlot::getStartRotation() const // 0x622D9C
{
    mangled_assert("?getStartRotation@ReactiveFleetSlot@@QBEABVmatrix3@@XZ");
    todo("implement");
    matrix3 const & __result = _sub_622D9C(this);
    return __result;
}

_extern __int32 _sub_622BEB(ReactiveFleetSlot const *const);
_inline __int32 ReactiveFleetSlot::getPlayerID() const // 0x622BEB
{
    mangled_assert("?getPlayerID@ReactiveFleetSlot@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_622BEB(this);
    return __result;
}

_extern ReinforcementShipList const *_sub_622BEF(ReactiveFleetSlot const *const);
_inline ReinforcementShipList const *ReactiveFleetSlot::getShipList() const // 0x622BEF
{
    mangled_assert("?getShipList@ReactiveFleetSlot@@QBEPBVReinforcementShipList@@XZ");
    todo("implement");
    ReinforcementShipList const * __result = _sub_622BEF(this);
    return __result;
}

_extern bool _sub_622DA4();
bool ReactiveFleet::initialise() // 0x622DA4
{
    mangled_assert("?initialise@ReactiveFleet@@SG_NXZ");
    todo("implement");
    bool __result = _sub_622DA4();
    return __result;
}

_extern bool _sub_62399D();
bool ReactiveFleet::shutdown() // 0x62399D
{
    mangled_assert("?shutdown@ReactiveFleet@@SG_NXZ");
    todo("implement");
    bool __result = _sub_62399D();
    return __result;
}

_extern ReactiveFleet *_sub_622DC3();
ReactiveFleet *ReactiveFleet::instance() // 0x622DC3
{
    mangled_assert("?instance@ReactiveFleet@@SGPAV1@XZ");
    todo("implement");
    ReactiveFleet * __result = _sub_622DC3();
    return __result;
}

_extern void _sub_62251C(ReactiveFleet *const, char const *, __int32, bool, vector3, float, float, float, char const *);
void ReactiveFleet::addReactiveFleetSlot(char const *, __int32, bool, vector3, float, float, float, char const *) // 0x62251C
{
    mangled_assert("?addReactiveFleetSlot@ReactiveFleet@@QAEXPBDH_NVvector3@@MMM0@Z");
    todo("implement");
    _sub_62251C(this, arg, arg, arg, arg, arg, arg, arg, arg);
}

_extern void _sub_622475(ReactiveFleet *const, char const *, vector3, float, float, float);
void ReactiveFleet::addReactiveFleetResourceSlot(char const *, vector3, float, float, float) // 0x622475
{
    mangled_assert("?addReactiveFleetResourceSlot@ReactiveFleet@@QAEXPBDVvector3@@MMM@Z");
    todo("implement");
    _sub_622475(this, arg, arg, arg, arg, arg);
}

_extern unsigned __int32 _sub_622BFB(ReinforcementShipList const *const, Score const &, Score const &);
unsigned __int32 ReinforcementShipList::getShipToCounter(Score const &, Score const &) const // 0x622BFB
{
    mangled_assert("?getShipToCounter@ReinforcementShipList@@QBEIABVScore@@0@Z");
    todo("implement");
    unsigned __int32 __result = _sub_622BFB(this, arg, arg);
    return __result;
}

_extern bool _sub_6236AF(ReactiveFleet *const, Score &);
bool ReactiveFleet::scoreReferenceFleet(Score &) // 0x6236AF
{
    mangled_assert("?scoreReferenceFleet@ReactiveFleet@@AAE_NAAVScore@@@Z");
    todo("implement");
    bool __result = _sub_6236AF(this, arg);
    return __result;
}

_extern void _sub_623965(ReactiveFleet *const, Squadron *, Score &);
void ReactiveFleet::scoreSquadron(Squadron *, Score &) // 0x623965
{
    mangled_assert("?scoreSquadron@ReactiveFleet@@AAEXPAVSquadron@@AAVScore@@@Z");
    todo("implement");
    _sub_623965(this, arg, arg);
}

_extern void _sub_623655(ReactiveFleet *const, unsigned __int32, Score &);
void ReactiveFleet::scorePlayersFleet(unsigned __int32, Score &) // 0x623655
{
    mangled_assert("?scorePlayersFleet@ReactiveFleet@@AAEXIAAVScore@@@Z");
    todo("implement");
    _sub_623655(this, arg, arg);
}

_extern void _sub_622874(ReactiveFleet *const, Player *, ShipStatic *, ReactiveFleetSlot *);
void ReactiveFleet::createSquadronForPlayer(Player *, ShipStatic *, ReactiveFleetSlot *) // 0x622874
{
    mangled_assert("?createSquadronForPlayer@ReactiveFleet@@AAEXPAVPlayer@@PAVShipStatic@@PAVReactiveFleetSlot@@@Z");
    todo("implement");
    _sub_622874(this, arg, arg, arg);
}

_extern void _sub_6229FF(ReactiveFleet *const, Player *, Score const &, Score const &, Score const &);
void ReactiveFleet::createSquadronsForPlayer(Player *, Score const &, Score const &, Score const &) // 0x6229FF
{
    mangled_assert("?createSquadronsForPlayer@ReactiveFleet@@AAEXPAVPlayer@@ABVScore@@11@Z");
    todo("implement");
    _sub_6229FF(this, arg, arg, arg, arg);
}

_extern void _sub_62345D(ReactiveFleet *const, float);
void ReactiveFleet::raiseResourcesForPlayer(float) // 0x62345D
{
    mangled_assert("?raiseResourcesForPlayer@ReactiveFleet@@AAEXM@Z");
    todo("implement");
    _sub_62345D(this, arg);
}

_extern void _sub_622FCE(ReactiveFleet *const);
void ReactiveFleet::loadReactiveFleet() // 0x622FCE
{
    mangled_assert("?loadReactiveFleet@ReactiveFleet@@QAEXXZ");
    todo("implement");
    _sub_622FCE(this);
}

_extern _sub_621A0D(ReactiveFleet *const);
ReactiveFleet::ReactiveFleet() // 0x621A0D
{
    mangled_assert("??0ReactiveFleet@@AAE@XZ");
    todo("implement");
    _sub_621A0D(this);
}

_extern void _sub_621BDB(ReactiveFleet *const);
ReactiveFleet::~ReactiveFleet() // 0x621BDB
{
    mangled_assert("??1ReactiveFleet@@AAE@XZ");
    todo("implement");
    _sub_621BDB(this);
}

/* ---------- private code */
#endif
