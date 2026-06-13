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

_extern _sub_5FBBBB(ITweak::DockingInfo *const);
_inline ITweak::DockingInfo::DockingInfo() // 0x5FBBBB
{
    mangled_assert("??0DockingInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FBBBB(this);
}

_extern _sub_5FBBBE(ITweak::DustCloudInfo *const);
_inline ITweak::DustCloudInfo::DustCloudInfo() // 0x5FBBBE
{
    mangled_assert("??0DustCloudInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FBBBE(this);
}

_extern _sub_5FBBC1(ITweak::EngineTrailInfo *const);
_inline ITweak::EngineTrailInfo::EngineTrailInfo() // 0x5FBBC1
{
    mangled_assert("??0EngineTrailInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FBBC1(this);
}

_extern _sub_5FBBC4(ITweak::FXInfo *const);
_inline ITweak::FXInfo::FXInfo() // 0x5FBBC4
{
    mangled_assert("??0FXInfo@ITweak@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_5FBBC4(this);
}

_extern bool _sub_5FE73E(LuaConfig &, char const *, vector4 &);
bool __LCGetVal(LuaConfig &L, char const *field, vector4 &c) // 0x5FE73E
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_5FE73E(L, field, c);
    return __result;
}

_extern bool _sub_5FE6F8(LuaConfig &, char const *, vector3 &);
bool __LCGetVal(LuaConfig &L, char const *field, vector3 &v) // 0x5FE6F8
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_5FE6F8(L, field, v);
    return __result;
}

_extern bool _sub_5FE6BD(LuaConfig &, char const *, vector2 &);
bool __LCGetVal(LuaConfig &L, char const *field, vector2 &v) // 0x5FE6BD
{
    mangled_assert("?__LCGetVal@@YG_NAAVLuaConfig@@PBDAAVvector2@@@Z");
    todo("implement");
    bool __result = _sub_5FE6BD(L, field, v);
    return __result;
}

_extern _sub_5FBBC7(ITweak *const);
ITweak::ITweak() // 0x5FBBC7
{
    mangled_assert("??0ITweak@@AAE@XZ");
    todo("implement");
    _sub_5FBBC7(this);
}

_extern void _sub_5FBBCA(ITweak *const);
ITweak::~ITweak() // 0x5FBBCA
{
    mangled_assert("??1ITweak@@AAE@XZ");
    todo("implement");
    _sub_5FBBCA(this);
}

_extern bool _sub_5FE794();
bool ITweak::initialize() // 0x5FE794
{
    mangled_assert("?initialize@ITweak@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5FE794();
    return __result;
}

_extern bool _sub_5FE7B4();
bool ITweak::shutdown() // 0x5FE7B4
{
    mangled_assert("?shutdown@ITweak@@SG_NXZ");
    todo("implement");
    bool __result = _sub_5FE7B4();
    return __result;
}

_extern ITweak *_sub_5FE78E();
ITweak *ITweak::i() // 0x5FE78E
{
    mangled_assert("?i@ITweak@@SGPAV1@XZ");
    todo("implement");
    ITweak * __result = _sub_5FE78E();
    return __result;
}

_extern void _sub_5FBE58(ITweak *const, char const *);
void ITweak::LoadFrom(char const *) // 0x5FBE58
{
    mangled_assert("?LoadFrom@ITweak@@AAEXPBD@Z");
    todo("implement");
    _sub_5FBE58(this, arg);
}

_extern unsigned __int32 _sub_5FBC05(ITweak const *const);
unsigned __int32 ITweak::GetSyncToken() const // 0x5FBC05
{
    mangled_assert("?GetSyncToken@ITweak@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5FBC05(this);
    return __result;
}

/* ---------- private code */

_extern void _sub_5FDE66(ITweak::ResourceInfo &, LuaConfig &);
_static void LoadInfo(ITweak::ResourceInfo &inf, LuaConfig &lc) // 0x5FDE66
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDE66(inf, lc);
}

_extern void _sub_5FCF77(ITweak::DustCloudInfo &, LuaConfig &);
_static void LoadInfo(ITweak::DustCloudInfo &inf, LuaConfig &lc) // 0x5FCF77
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FCF77(inf, lc);
}

_extern void _sub_5FDC9C(ITweak::NebulaInfo &, LuaConfig &);
_static void LoadInfo(ITweak::NebulaInfo &inf, LuaConfig &lc) // 0x5FDC9C
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDC9C(inf, lc);
}

_extern void _sub_5FD823(ITweak::FormationInfo &, LuaConfig &);
_static void LoadInfo(ITweak::FormationInfo &inf, LuaConfig &lc) // 0x5FD823
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FD823(inf, lc);
}

_extern void _sub_5FE217(ITweak::ShipInfo &, LuaConfig &);
_static void LoadInfo(ITweak::ShipInfo &inf, LuaConfig &lc) // 0x5FE217
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE217(inf, lc);
}

_extern void _sub_5FE137(ITweak::ShipControllerInfo &, LuaConfig &);
_static void LoadInfo(ITweak::ShipControllerInfo &inf, LuaConfig &lc) // 0x5FE137
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE137(inf, lc);
}

_extern void _sub_5FCCFC(ITweak::DockingInfo &, LuaConfig &);
_static void LoadInfo(ITweak::DockingInfo &inf, LuaConfig &lc) // 0x5FCCFC
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FCCFC(inf, lc);
}

_extern void _sub_5FDA5F(ITweak::LaunchingInfo &, LuaConfig &);
_static void LoadInfo(ITweak::LaunchingInfo &inf, LuaConfig &lc) // 0x5FDA5F
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDA5F(inf, lc);
}

_extern void _sub_5FDD2E(ITweak::ParadeInfo &, LuaConfig &);
_static void LoadInfo(ITweak::ParadeInfo &inf, LuaConfig &lc) // 0x5FDD2E
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDD2E(inf, lc);
}

_extern void _sub_5FDE14(ITweak::ResearchInfo &, LuaConfig &);
_static void LoadInfo(ITweak::ResearchInfo &inf, LuaConfig &lc) // 0x5FDE14
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDE14(inf, lc);
}

_extern void _sub_5FC8A2(ITweak::BuildInfo &, LuaConfig &);
_static void LoadInfo(ITweak::BuildInfo &inf, LuaConfig &lc) // 0x5FC8A2
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FC8A2(inf, lc);
}

_extern void _sub_5FC6E9(ITweak::AvoidanceInfo &, LuaConfig &);
_static void LoadInfo(ITweak::AvoidanceInfo &inf, LuaConfig &lc) // 0x5FC6E9
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FC6E9(inf, lc);
}

_extern void _sub_5FDCE5(ITweak::OrderInfo &, LuaConfig &);
_static void LoadInfo(ITweak::OrderInfo &inf, LuaConfig &lc) // 0x5FDCE5
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDCE5(inf, lc);
}

_extern void _sub_5FE677(ITweak::WeaponFireInfo &, LuaConfig &);
_static void LoadInfo(ITweak::WeaponFireInfo &inf, LuaConfig &lc) // 0x5FE677
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE677(inf, lc);
}

_extern void _sub_5FD8FE(ITweak::HyperSpaceInfo &, LuaConfig &);
_static void LoadInfo(ITweak::HyperSpaceInfo &inf, LuaConfig &lc) // 0x5FD8FE
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FD8FE(inf, lc);
}

_extern void _sub_5FE0EE(ITweak::SensorPingInfo &, LuaConfig &);
_static void LoadInfo(ITweak::SensorPingInfo &inf, LuaConfig &lc) // 0x5FE0EE
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE0EE(inf, lc);
}

_extern void _sub_5FC932(ITweak::CaptureInfo &, LuaConfig &);
_static void LoadInfo(ITweak::CaptureInfo &inf, LuaConfig &lc) // 0x5FC932
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FC932(inf, lc);
}

_extern void _sub_5FDDA1(ITweak::RepairInfo &, LuaConfig &);
_static void LoadInfo(ITweak::RepairInfo &inf, LuaConfig &lc) // 0x5FDDA1
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDDA1(inf, lc);
}

_extern void _sub_5FE62E(ITweak::UnitCapsInfo &, LuaConfig &);
_static void LoadInfo(ITweak::UnitCapsInfo &inf, LuaConfig &lc) // 0x5FE62E
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE62E(inf, lc);
}

_extern void _sub_5FC529(ITweak::AutoFormationInfo &, LuaConfig &);
_static void LoadInfo(ITweak::AutoFormationInfo &inf, LuaConfig &lc) // 0x5FC529
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FC529(inf, lc);
}

_extern void _sub_5FD2ED(ITweak::EngineTrailInfo &, LuaConfig &);
_static void LoadInfo(ITweak::EngineTrailInfo &inf, LuaConfig &lc) // 0x5FD2ED
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FD2ED(inf, lc);
}

_extern void _sub_5FCB19(ITweak::CombatInfo &, LuaConfig &);
_static void LoadInfo(ITweak::CombatInfo &inf, LuaConfig &lc) // 0x5FCB19
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FCB19(inf, lc);
}

_extern void _sub_5FD971(ITweak::LatchInfo &, LuaConfig &);
_static void LoadInfo(ITweak::LatchInfo &inf, LuaConfig &lc) // 0x5FD971
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FD971(inf, lc);
}

_extern void _sub_5FE3B6(ITweak::StrikeGroupInfo &, LuaConfig &);
_static void LoadInfo(ITweak::StrikeGroupInfo &inf, LuaConfig &lc) // 0x5FE3B6
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE3B6(inf, lc);
}

_extern void _sub_5FE517(ITweak::TimingInfo &, LuaConfig &);
_static void LoadInfo(ITweak::TimingInfo &inf, LuaConfig &lc) // 0x5FE517
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FE517(inf, lc);
}

_extern void _sub_5FDB11(ITweak::MineLayingInfo &, LuaConfig &);
_static void LoadInfo(ITweak::MineLayingInfo &inf, LuaConfig &lc) // 0x5FDB11
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDB11(inf, lc);
}

_extern void _sub_5FCAA6(ITweak::CollisionInfo &, LuaConfig &);
_static void LoadInfo(ITweak::CollisionInfo &inf, LuaConfig &lc) // 0x5FCAA6
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FCAA6(inf, lc);
}

_extern void _sub_5FD761(ITweak::FXInfo &, LuaConfig &);
_static void LoadInfo(ITweak::FXInfo &inf, LuaConfig &lc) // 0x5FD761
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FD761(inf, lc);
}

_extern void _sub_5FDBA7(ITweak::MultiplierCapInfo &, LuaConfig &);
_static void LoadInfo(ITweak::MultiplierCapInfo &inf, LuaConfig &lc) // 0x5FDBA7
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FDBA7(inf, lc);
}

_extern void _sub_5FC5BF(ITweak::AutoLODInfo &, LuaConfig &);
_static void LoadInfo(ITweak::AutoLODInfo &inf, LuaConfig &lc) // 0x5FC5BF
{
    mangled_assert("LoadInfo");
    todo("implement");
    _sub_5FC5BF(inf, lc);
}
#endif
