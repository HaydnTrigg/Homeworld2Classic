#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <MultiplierTypes.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <math.h>
#include <list>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <fileio\crc.h>
#include <map>
#include <xtree>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\vector2.h>
#include <assist\typemagic.h>
#include <luaconfig\luautils.h>
#include <Mathlib\mathutil.h>
#include <util\colour.h>
#include <profile\profile.h>
#include <ITweak.h>
#include <iostream>
#include <Tactics.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern bool __LCGetVal(LuaConfig &L, char const *field, vector4 &c);
extern bool __LCGetVal(LuaConfig &L, char const *field, vector3 &v);
extern bool __LCGetVal(LuaConfig &L, char const *field, vector2 &v);

_static void LoadInfo(ITweak::ResourceInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::DustCloudInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::NebulaInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::FormationInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::ShipInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::ShipControllerInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::DockingInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::LaunchingInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::ParadeInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::ResearchInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::BuildInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::AvoidanceInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::OrderInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::WeaponFireInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::HyperSpaceInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::SensorPingInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::CaptureInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::RepairInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::UnitCapsInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::AutoFormationInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::EngineTrailInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::CombatInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::LatchInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::StrikeGroupInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::TimingInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::MineLayingInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::CollisionInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::FXInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::MultiplierCapInfo &inf, LuaConfig &lc);
_static void LoadInfo(ITweak::AutoLODInfo &inf, LuaConfig &lc);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern ITweak *s_instance; // 0x848ABC
}

/* ---------- public code */

_inline ITweak::DockingInfo::DockingInfo() // 0x5FBBBB
{
    mangled_assert("??0DockingInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ITweak::DustCloudInfo::DustCloudInfo() // 0x5FBBBE
{
    mangled_assert("??0DustCloudInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ITweak::EngineTrailInfo::EngineTrailInfo() // 0x5FBBC1
{
    mangled_assert("??0EngineTrailInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline ITweak::FXInfo::FXInfo() // 0x5FBBC4
{
    mangled_assert("??0FXInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, vector4 &c) // 0x5FE73E
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector4@@@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, vector3 &v) // 0x5FE6F8
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector3@@@Z");
    todo("implement");
}

bool __LCGetVal(LuaConfig &L, char const *field, vector2 &v) // 0x5FE6BD
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector2@@@Z");
    todo("implement");
}

ITweak::ITweak() // 0x5FBBC7
{
    mangled_assert("??0ITweak@@AAE@XZ");
    todo("implement");
}

ITweak::~ITweak() // 0x5FBBCA
{
    mangled_assert("??1ITweak@@AAE@XZ");
    todo("implement");
}

bool ITweak::initialize() // 0x5FE794
{
    mangled_assert("?initialize@ITweak@@SG_NXZ");
    todo("implement");
}

bool ITweak::shutdown() // 0x5FE7B4
{
    mangled_assert("?shutdown@ITweak@@SG_NXZ");
    todo("implement");
}

ITweak *ITweak::i() // 0x5FE78E
{
    mangled_assert("?i@ITweak@@SGPAV1@XZ");
    todo("implement");
}

void ITweak::LoadFrom(char const *) // 0x5FBE58
{
    mangled_assert("?LoadFrom@ITweak@@AAEXPBD@Z");
    todo("implement");
}

unsigned __int32 ITweak::GetSyncToken() const // 0x5FBC05
{
    mangled_assert("?GetSyncToken@ITweak@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

_static void LoadInfo(ITweak::ResourceInfo &inf, LuaConfig &lc) // 0x5FDE66
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::DustCloudInfo &inf, LuaConfig &lc) // 0x5FCF77
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::NebulaInfo &inf, LuaConfig &lc) // 0x5FDC9C
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::FormationInfo &inf, LuaConfig &lc) // 0x5FD823
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::ShipInfo &inf, LuaConfig &lc) // 0x5FE217
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::ShipControllerInfo &inf, LuaConfig &lc) // 0x5FE137
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::DockingInfo &inf, LuaConfig &lc) // 0x5FCCFC
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::LaunchingInfo &inf, LuaConfig &lc) // 0x5FDA5F
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::ParadeInfo &inf, LuaConfig &lc) // 0x5FDD2E
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::ResearchInfo &inf, LuaConfig &lc) // 0x5FDE14
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::BuildInfo &inf, LuaConfig &lc) // 0x5FC8A2
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::AvoidanceInfo &inf, LuaConfig &lc) // 0x5FC6E9
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::OrderInfo &inf, LuaConfig &lc) // 0x5FDCE5
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::WeaponFireInfo &inf, LuaConfig &lc) // 0x5FE677
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::HyperSpaceInfo &inf, LuaConfig &lc) // 0x5FD8FE
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::SensorPingInfo &inf, LuaConfig &lc) // 0x5FE0EE
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::CaptureInfo &inf, LuaConfig &lc) // 0x5FC932
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::RepairInfo &inf, LuaConfig &lc) // 0x5FDDA1
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::UnitCapsInfo &inf, LuaConfig &lc) // 0x5FE62E
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::AutoFormationInfo &inf, LuaConfig &lc) // 0x5FC529
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::EngineTrailInfo &inf, LuaConfig &lc) // 0x5FD2ED
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::CombatInfo &inf, LuaConfig &lc) // 0x5FCB19
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::LatchInfo &inf, LuaConfig &lc) // 0x5FD971
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::StrikeGroupInfo &inf, LuaConfig &lc) // 0x5FE3B6
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::TimingInfo &inf, LuaConfig &lc) // 0x5FE517
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::MineLayingInfo &inf, LuaConfig &lc) // 0x5FDB11
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::CollisionInfo &inf, LuaConfig &lc) // 0x5FCAA6
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::FXInfo &inf, LuaConfig &lc) // 0x5FD761
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::MultiplierCapInfo &inf, LuaConfig &lc) // 0x5FDBA7
{
    mangled_assert("LoadInfo");
    todo("implement");
}

_static void LoadInfo(ITweak::AutoLODInfo &inf, LuaConfig &lc) // 0x5FC5BF
{
    mangled_assert("LoadInfo");
    todo("implement");
}
#endif
