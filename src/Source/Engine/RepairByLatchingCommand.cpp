#if 0
/* ---------- headers */

#include "decomp.h"
#include <Engine\DynamicPoint.h>
#include <xstring>
#include <xmemory0>
#include <Engine\Ship\Formation.h>
#include <Engine\Ship\FormationPattern.h>
#include <Engine\visibility.h>
#include <Engine\MultiplierTypes.h>
#include <new>
#include <Engine\Squadron.h>
#include <Engine\ship.h>
#include <xstddef>
#include <type_traits>
#include <Engine\SobWithMesh.h>
#include <Engine\SobRigidBody.h>
#include <Engine\sob.h>
#include <Collision\Primitives\sphere.h>
#include <Engine\CoordSysUtilities.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <profile\profile.h>
#include <iostream>
#include <list>
#include <Engine\savegame.h>
#include <Engine\EffectCreate.h>
#include <Mathlib\vector3.h>
#include <map>
#include <xtree>
#include <Engine\Interpolation.h>
#include <boost\scoped_ptr.hpp>
#include <Engine\ITweak.h>
#include <Engine\Tactics.h>
#include <Engine\MeshAnimation.h>
#include <Engine\RepairManager.h>
#include <util\colour.h>
#include <Engine\LatchPointManager.h>
#include <Engine\command.h>
#include <Engine\selection.h>
#include <Engine\savegamedef.h>
#include <Engine\Ship\FormationController.h>
#include <Engine\Ship\AdvRigidBodyController.h>
#include <Engine\Physics\RigidBodyController.h>
#include <Engine\GameEventDefs.h>
#include <Engine\GameEventSys.h>
#include <Engine\pch.h>
#include <Engine\RepairByLatchingCommand.h>
#include <Engine\TrailTargetCommand.h>
#include <Mathlib\vector2.h>
#include <assist\stlexsmallvector.h>
#include <boost\shared_ptr.hpp>
#include <boost\throw_exception.hpp>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Engine\Ship\FormationTargetInfo.h>
#include <Engine\MADState.h>
#include <luaconfig\luabinding.h>
#include <luaconfig\luaconfig.h>
#include <lua\lua.h>
#include <Engine\sobid.h>

/* ---------- constants */

/* ---------- definitions */

class RepairCompare :
    public Selection::MinElementCompare
{
public:
    RepairCompare(RepairCompare const &); /* compiler_generated() */
    _inline RepairCompare(Ship const *);
    virtual bool Compare(Sob const &, Sob const &) const override;
private:
    bool CompareByFreeSlots(Sob const &, Sob const &) const;
    bool CompareByHealth(Sob const &, Sob const &) const;
    bool CompareByInterest(Sob const &, Sob const &) const;
    Ship const *m_repairer; // 0x4
public:
    RepairCompare &operator=(RepairCompare const &); /* compiler_generated() */
};
static_assert(sizeof(RepairCompare) == 8, "Invalid RepairCompare size");

/* ---------- prototypes */

extern bool canLatchRepair(Sob const *sob);
extern bool isAllied(Sob const *sob, void *data);

/* ---------- globals */

extern char const RepairByLatchingCommand::m_saveToken[0]; // 0x7B7558
extern SaveData const RepairByLatchingCommand::m_saveData[4]; // 0x7B7570

/* ---------- private variables */

/* ---------- public code */

bool canLatchRepair(Sob const *sob) // 0x6A15D4
{
    mangled_assert("?canLatchRepair@@YG_NPBVSob@@@Z");
    todo("implement");
}

RepairByLatchingCommand::RepairByLatchingCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &) // 0x6A1192
{
    mangled_assert("??0RepairByLatchingCommand@@QAE@PAVSquadron@@ABVSelection@@W4CommandOrigin@Command@@ABVvector3@@@Z");
    todo("implement");
}

RepairByLatchingCommand::~RepairByLatchingCommand() // 0x6A1271
{
    mangled_assert("??1RepairByLatchingCommand@@UAE@XZ");
    todo("implement");
}

bool RepairByLatchingCommand::canBeInterrupted(CommandType, Command *) // 0x6A156A
{
    mangled_assert("?canBeInterrupted@RepairByLatchingCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

Sob *RepairByLatchingCommand::getTarget() // 0x6A17F1
{
    mangled_assert("?getTarget@RepairByLatchingCommand@@MAEPAVSob@@XZ");
    todo("implement");
}

float RepairByLatchingCommand::getDesiredDistance() // 0x6A168E
{
    mangled_assert("?getDesiredDistance@RepairByLatchingCommand@@MAEMXZ");
    todo("implement");
}

ComResult RepairByLatchingCommand::update(float) // 0x6A1AF6
{
    mangled_assert("?update@RepairByLatchingCommand@@UAE?AW4ComResult@@M@Z");
    todo("implement");
}

void RepairByLatchingCommand::unLatch() // 0x6A19B7
{
    mangled_assert("?unLatch@RepairByLatchingCommand@@AAEXXZ");
    todo("implement");
}

CommandType RepairByLatchingCommand::getCommandType() const // 0x6A168A
{
    mangled_assert("?getCommandType@RepairByLatchingCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

void RepairByLatchingCommand::resetCommand() // 0x6A1837
{
    mangled_assert("?resetCommand@RepairByLatchingCommand@@UAEXXZ");
    todo("implement");
}

void RepairByLatchingCommand::cleanUpCommand() // 0x6A15F3
{
    mangled_assert("?cleanUpCommand@RepairByLatchingCommand@@UAEXXZ");
    todo("implement");
}

_inline RepairCompare::RepairCompare(Ship const *) // 0x6A1258
{
    mangled_assert("??0RepairCompare@@QAE@PBVShip@@@Z");
    todo("implement");
}

_inline GameEvent_ShipRepairs::~GameEvent_ShipRepairs() // 0x6A126A
{
    mangled_assert("??1GameEvent_ShipRepairs@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool RepairCompare::Compare(Sob const &, Sob const &) const // 0x6A1310
{
    mangled_assert("?Compare@RepairCompare@@UBE_NABVSob@@0@Z");
    todo("implement");
}

bool RepairCompare::CompareByFreeSlots(Sob const &, Sob const &) const // 0x6A139E
{
    mangled_assert("?CompareByFreeSlots@RepairCompare@@ABE_NABVSob@@0@Z");
    todo("implement");
}

bool RepairCompare::CompareByInterest(Sob const &, Sob const &) const // 0x6A1520
{
    mangled_assert("?CompareByInterest@RepairCompare@@ABE_NABVSob@@0@Z");
    todo("implement");
}

bool RepairCompare::CompareByHealth(Sob const &, Sob const &) const // 0x6A13FE
{
    mangled_assert("?CompareByHealth@RepairCompare@@ABE_NABVSob@@0@Z");
    todo("implement");
}

bool isAllied(Sob const *sob, void *data) // 0x6A17F6
{
    mangled_assert("?isAllied@@YG_NPBVSob@@PAX@Z");
    todo("implement");
}

Ship *RepairByLatchingCommand::getBestTarget() // 0x6A161C
{
    mangled_assert("?getBestTarget@RepairByLatchingCommand@@AAEPAVShip@@XZ");
    todo("implement");
}

Ship *RepairByLatchingCommand::getBestTarget(Squadron const *squad, Selection const &targets) // 0x6A165C
{
    mangled_assert("?getBestTarget@RepairByLatchingCommand@@SGPAVShip@@PBVSquadron@@ABVSelection@@@Z");
    todo("implement");
}

vector3 const &RepairByLatchingCommand::getDestinationDtrm() const // 0x6A174A
{
    mangled_assert("?getDestinationDtrm@RepairByLatchingCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

vector3 const &RepairByLatchingCommand::getDestinationVis() const // 0x6A176D
{
    mangled_assert("?getDestinationVis@RepairByLatchingCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

Sob *RepairByLatchingCommand::getSobToNotAvoid() const // 0x6A17C5
{
    mangled_assert("?getSobToNotAvoid@RepairByLatchingCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

Sob *RepairByLatchingCommand::getSobToNotCollideWith() const // 0x6A17DB
{
    mangled_assert("?getSobToNotCollideWith@RepairByLatchingCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

bool RepairByLatchingCommand::setCurrentTarget(Ship *) // 0x6A1924
{
    mangled_assert("?setCurrentTarget@RepairByLatchingCommand@@AAE_NPAVShip@@@Z");
    todo("implement");
}

char const *RepairByLatchingCommand::getName() const // 0x6A178D
{
    mangled_assert("?getName@RepairByLatchingCommand@@UBEPBDXZ");
    todo("implement");
}

RepairByLatchingCommand::RepairByLatchingCommand(SaveGameData *) // 0x6A113D
{
    mangled_assert("??0RepairByLatchingCommand@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void RepairByLatchingCommand::defaultSettings() // 0x6A1603
{
    mangled_assert("?defaultSettings@RepairByLatchingCommand@@QAEXXZ");
    todo("implement");
}

void RepairByLatchingCommand::postRestore() // 0x6A1832
{
    mangled_assert("?postRestore@RepairByLatchingCommand@@UAEXXZ");
    todo("implement");
}

bool RepairByLatchingCommand::restore(SaveGameData *) // 0x6A188A
{
    mangled_assert("?restore@RepairByLatchingCommand@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool RepairByLatchingCommand::save(SaveGameData *, SaveType) // 0x6A18D7
{
    mangled_assert("?save@RepairByLatchingCommand@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

RepairByLatchingCommandStaticInfo::RepairByLatchingCommandStaticInfo(ShipStatic *, float) // 0x6A1207
{
    mangled_assert("??0RepairByLatchingCommandStaticInfo@@QAE@PAVShipStatic@@M@Z");
    todo("implement");
}

RepairByLatchingCommandStaticInfo::~RepairByLatchingCommandStaticInfo() // 0x6A12BF
{
    mangled_assert("??1RepairByLatchingCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

float RepairByLatchingCommandStaticInfo::getRepairRate(unsigned __int32) const // 0x6A1797
{
    mangled_assert("?getRepairRate@RepairByLatchingCommandStaticInfo@@QBEMI@Z");
    todo("implement");
}

/* ---------- private code */
#endif
