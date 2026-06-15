#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <profile\profile.h>
#include <iostream>
#include <Mathlib\matrix3.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\weaponTargetInfo.h>
#include <Engine\sob.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <Engine\Ship\FormationTargetInfo.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Engine\SobWithMeshStatic.h>
#include <map>
#include <xtree>
#include <util\colour.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\pch.h>
#include <Engine\LayMinesCommand.h>
#include <Engine\ITweak.h>
#include <Mathlib\vector2.h>
#include <Engine\Tactics.h>
#include <assist\stlexsmallvector.h>
#include <Engine\Missile.h>
#include <Engine\MissileStatic.h>
#include <Mathlib\mathutil.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

struct MineSphereRing
{
    std::vector<vector3,std::allocator<vector3> > m_toPositions; // 0x0
    MineSphereRing(MineSphereRing const &); /* compiler_generated() */
    _inline MineSphereRing(); /* compiler_generated() */
    _inline ~MineSphereRing(); /* compiler_generated() */
    MineSphereRing &operator=(MineSphereRing const &); /* compiler_generated() */
};
static_assert(sizeof(MineSphereRing) == 12, "Invalid MineSphereRing size");

struct MineSphere
{
    _inline ~MineSphere();
    std::vector<MineSphereRing *,std::allocator<MineSphereRing *> > m_sphereRings; // 0x0
    unsigned __int32 m_numberOfSlots; // 0xC
    MineSphere(MineSphere const &); /* compiler_generated() */
    _inline MineSphere(); /* compiler_generated() */
    MineSphere &operator=(MineSphere const &); /* compiler_generated() */
};
static_assert(sizeof(MineSphere) == 16, "Invalid MineSphere size");

/* ---------- prototypes */

/* ---------- globals */

extern char const LayMinesCommand::m_saveToken[0]; // 0x7B8E70
extern SaveData const LayMinesCommand::m_saveData[4]; // 0x7B8E80

/* ---------- private variables */

_static
{
    extern std::vector<MineSphere *,std::allocator<MineSphere *> > mineSpheres; // 0x84CA70
}

/* ---------- public code */

_inline MineSphere::~MineSphere() // 0x6ACF40
{
    mangled_assert("??1MineSphere@@QAE@XZ");
    todo("implement");
}

_inline MineSphereRing::~MineSphereRing() // 0x6ACF88
{
    mangled_assert("??1MineSphereRing@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool LayMinesCommand::initialiseSpheres() // 0x6AE098
{
    mangled_assert("?initialiseSpheres@LayMinesCommand@@SG_NXZ");
    todo("implement");
}

bool LayMinesCommand::shutdownSpheres() // 0x6AE59E
{
    mangled_assert("?shutdownSpheres@LayMinesCommand@@SG_NXZ");
    todo("implement");
}

void LayMinesCommand::getPointsFromSphereFor(vector3 const &centre, float const radius, float const densityModifier, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists) // 0x6ADECD
{
    mangled_assert("?getPointsFromSphereFor@LayMinesCommand@@SGXABVvector3@@MMIAAV?$list@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@V?$allocator@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
}

void LayMinesCommand::getPointsFor(vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists) // 0x6AD583
{
    mangled_assert("?getPointsFor@LayMinesCommand@@SGXABVvector3@@0IAAV?$list@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@V?$allocator@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
}

void LayMinesCommand::getPointsFromCuboidFor(matrix3 const &rotation, vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists) // 0x6AD8A4
{
    mangled_assert("?getPointsFromCuboidFor@LayMinesCommand@@SGXABVmatrix3@@ABVvector3@@1IAAV?$list@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@V?$allocator@V?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@2@@std@@@Z");
    todo("implement");
}

LayMinesCommand::LayMinesCommand(Squadron *, std::list<vector3,std::allocator<vector3> > const &, Command::CommandOrigin) // 0x6ACE1F
{
    mangled_assert("??0LayMinesCommand@@QAE@PAVSquadron@@ABV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@W4CommandOrigin@Command@@@Z");
    todo("implement");
}

LayMinesCommand::~LayMinesCommand() // 0x6ACED2
{
    mangled_assert("??1LayMinesCommand@@UAE@XZ");
    todo("implement");
}

void LayMinesCommand::Notify_Insertion(Sob *) // 0x6AD020
{
    mangled_assert("?Notify_Insertion@LayMinesCommand@@EAEXPAVSob@@@Z");
    // __shifted(LayMinesCommand, 20);
    todo("implement");
}

void LayMinesCommand::Notify_Removal(Sob *) // 0x6AD023
{
    mangled_assert("?Notify_Removal@LayMinesCommand@@EAEXPAVSob@@@Z");
    // __shifted(LayMinesCommand, 20);
    todo("implement");
}

void LayMinesCommand::flyToPoint(vector3 const &) // 0x6AD475
{
    mangled_assert("?flyToPoint@LayMinesCommand@@AAEXABVvector3@@@Z");
    todo("implement");
}

void LayMinesCommand::dropMine() // 0x6AD3C0
{
    mangled_assert("?dropMine@LayMinesCommand@@AAEXXZ");
    todo("implement");
}

ComResult LayMinesCommand::update(float) // 0x6AE603
{
    mangled_assert("?update@LayMinesCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

CommandType LayMinesCommand::getCommandType() const // 0x6AD54A
{
    mangled_assert("?getCommandType@LayMinesCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void LayMinesCommand::resetCommand() // 0x6AE4EE
{
    mangled_assert("?resetCommand@LayMinesCommand@@UAEXXZ");
    todo("implement");
}

void LayMinesCommand::cleanUpCommand() // 0x6AD338
{
    mangled_assert("?cleanUpCommand@LayMinesCommand@@UAEXXZ");
    todo("implement");
}

vector3 const &LayMinesCommand::getDestinationDtrm() const // 0x6AD54E
{
    mangled_assert("?getDestinationDtrm@LayMinesCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &LayMinesCommand::getDestinationVis() const // 0x6AD562
{
    mangled_assert("?getDestinationVis@LayMinesCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

char const *LayMinesCommand::getName() const // 0x6AD57D
{
    mangled_assert("?getName@LayMinesCommand@@UBEPBDXZ");
    todo("implement");
}

LayMinesCommand::LayMinesCommand(SaveGameData *) // 0x6ACD9D
{
    mangled_assert("??0LayMinesCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void LayMinesCommand::defaultSettings() // 0x6AD3B7
{
    mangled_assert("?defaultSettings@LayMinesCommand@@QAEXXZ");
    todo("implement");
}

void LayMinesCommand::postRestore() // 0x6AE429
{
    mangled_assert("?postRestore@LayMinesCommand@@UAEXXZ");
    todo("implement");
}

bool LayMinesCommand::restore(SaveGameData *) // 0x6AE4EF
{
    mangled_assert("?restore@LayMinesCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool LayMinesCommand::save(SaveGameData *, SaveType) // 0x6AE53C
{
    mangled_assert("?save@LayMinesCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

LayMinesCommandStaticInfo::LayMinesCommandStaticInfo(ShipStatic *) // 0x6ACE95
{
    mangled_assert("??0LayMinesCommandStaticInfo@@QAE@PAVShipStatic@@@Z");
    todo("implement");
}

_inline MineSphere::MineSphere() // 0x6ACEAE
{
    mangled_assert("??0MineSphere@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline MineSphereRing::MineSphereRing() // 0x6ACEBB
{
    mangled_assert("??0MineSphereRing@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

LayMinesCommandStaticInfo::~LayMinesCommandStaticInfo() // 0x6ACF39
{
    mangled_assert("??1LayMinesCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
