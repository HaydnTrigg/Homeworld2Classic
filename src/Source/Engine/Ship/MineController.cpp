#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <exception>
#include <type_traits>
#include <utility>
#include <Mathlib\vector3.h>
#include <DynamicPoint.h>
#include <sobid.h>
#include <Mathlib\quat.h>
#include <Mathlib\mathutil.h>
#include <boost\shared_ptr.hpp>
#include <sobtypes.h>
#include <Physics\RigidBody.h>
#include <Physics\PhysicsObject.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Ship\MineController.h>
#include <Ship\ShipController.h>
#include <Ship\AdvRigidBodyController.h>
#include <Physics\RigidBodyController.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern char const MineController::m_saveToken[0]; // 0x78E09C
extern SaveData const MineController::m_saveData[1]; // 0x78E07C

/* ---------- private variables */

/* ---------- public code */

MineController::MineController(SaveGameData *) // 0x49B91E
{
    mangled_assert("??0MineController@@QAE@PAVSaveGameData@@@Z");
    todo("implement");
}

void MineController::defaultSettings() // 0x49B975
{
    mangled_assert("?defaultSettings@MineController@@QAEXXZ");
    todo("implement");
}

void MineController::postRestore() // 0x49BA9C
{
    mangled_assert("?postRestore@MineController@@UAEXXZ");
    todo("implement");
}

bool MineController::restore(SaveGameData *) // 0x49BAA1
{
    mangled_assert("?restore@MineController@@UAE_NPAVSaveGameData@@@Z");
    todo("implement");
}

bool MineController::save(SaveGameData *, SaveType) // 0x49BAEE
{
    mangled_assert("?save@MineController@@UAE_NPAVSaveGameData@@W4SaveType@@@Z");
    todo("implement");
}

MineController::MineController() // 0x49B936
{
    mangled_assert("??0MineController@@QAE@XZ");
    todo("implement");
}

MineController::~MineController() // 0x49B948
{
    mangled_assert("??1MineController@@UAE@XZ");
    todo("implement");
}

void MineController::doBehaviour(float) // 0x49B976
{
    mangled_assert("?doBehaviour@MineController@@UAEXM@Z");
    todo("implement");
}

/* ---------- private code */
#endif
