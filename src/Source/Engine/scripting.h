#if 0
#ifndef __SCRIPTING_H__
#define __SCRIPTING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ScriptTag
{
    SCTTAG_UdwordGlobal = 0,
    SCTTAG_SdwordGlobal,
    SCTTAG_Real32Global,
    SCTTAG_BoolGlobal,
    SCTTAG_StringGlobal,
    SCTTAG_Vector2Global,
    SCTTAG_Vector2Type,
    SCTTAG_Vector3Global,
    SCTTAG_Vector3Type,
    SCTTAG_ColourGlobal,
    SCTTAG_ColourType,
    SCTTAG_ObjLoadTag,
    SCTTAG_ShipLoadTag,
    SCTTAG_ResourceLoadTag,
    SCTTAG_AsteroidLoadTag,
    SCTTAG_SalvageLoadTag,
    SCTTAG_DustCloudLoadTag,
    SCTTAG_CloudLoadTag,
    SCTTAG_PebbleLoadTag,
    SCTTAG_NebulaLoadTag,
    SCTTAG_EngineTrailLoadTag,
    SCTTAG_EffectLoadTag,
    SCTTAG_EtgMeshAnimTag,
    SCTTAG_SobRigidBodyLoadTag,
    SCTTAG_SobPointMassLoadTag,
    SCTTAG_WeaponLoadTag,
    SCTTAG_SubSystemLoadTag,
    SCTTAG_SobWithMeshLoadTag,
    SCTTAG_MissileLoadTag,
    NUM_SCTTAG,
};

enum
{
    SCTSTATE_GenericLoad = 0,
    SCTSTATE_ObjectLoad,
    SCTSTATE_WeaponLoad,
    SCTSTATE_WeaponFireLoad,
    NUMBER_SctStateFlags,
};

enum
{
    SCTCONF_LuaLib = 0, // 0x0000
    SCTCONF_LuaMathLib = 1, // 0x0001
    SCTCONF_BasicGlobals = 2, // 0x0002
    SCTCONF_MatVec = 3, // 0x0003
    SCTCONF_ObjectLoad = 4, // 0x0004
    SCTCONF_Tweakables = 5, // 0x0005
    SCTCONF_ErrorDebug = 6, // 0x0006
    NUMBER_SctStateConfigFlags = 7, // 0x0007
    SCTCONF_END = 255, // 0x00FF
    SCTCONF_Max = 256, // 0x0100
};

/* ---------- definitions */

struct SctStateConfig
{
    lua_State *m_state; // 0x0
    std::map<enum ScriptTag,int,std::less<enum ScriptTag>,std::allocator<std::pair<enum ScriptTag const ,int> > > Tag; // 0x4
    unsigned char *m_configs; // 0xC
    __int32 m_classRef; // 0x10
    SctStateConfig(SctStateConfig const &); /* compiler_generated() */
    _inline SctStateConfig(); /* compiler_generated() */
    _inline ~SctStateConfig(); /* compiler_generated() */
    SctStateConfig &operator=(SctStateConfig const &); /* compiler_generated() */
};
static_assert(sizeof(SctStateConfig) == 20, "Invalid SctStateConfig size");

/* ---------- prototypes */

extern _inline void sctPopStack(__int32 x);
extern _inline void sctSetString(char *str, char *name);
extern _inline bool sctGetRef(__int32 reference);
extern _inline void sctDeleteRef(__int32 reference);
extern _inline __int32 sctTag(ScriptTag tag);
extern _inline void sctNewTag(ScriptTag newTag);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_4D00A5(__int32);
_inline void sctPopStack(__int32 x) // 0x4D00A5
{
    mangled_assert("?sctPopStack@@YGXH@Z");
    todo("implement");
    _sub_4D00A5(x);
}

_extern void _sub_4C94DF(char *, char *);
_inline void sctSetString(char *str, char *name) // 0x4C94DF
{
    mangled_assert("?sctSetString@@YGXPAD0@Z");
    todo("implement");
    _sub_4C94DF(str, name);
}

_extern bool _sub_4C8A85(__int32);
_inline bool sctGetRef(__int32 reference) // 0x4C8A85
{
    mangled_assert("?sctGetRef@@YG_NH@Z");
    todo("implement");
    bool __result = _sub_4C8A85(reference);
    return __result;
}

_extern void _sub_4C84D4(__int32);
_inline void sctDeleteRef(__int32 reference) // 0x4C84D4
{
    mangled_assert("?sctDeleteRef@@YGXH@Z");
    todo("implement");
    _sub_4C84D4(reference);
}

_extern __int32 _sub_45584E(ScriptTag);
_inline __int32 sctTag(ScriptTag tag) // 0x45584E
{
    mangled_assert("?sctTag@@YGHW4ScriptTag@@@Z");
    todo("implement");
    __int32 __result = _sub_45584E(tag);
    return __result;
}

_extern void _sub_4424AE(ScriptTag);
_inline void sctNewTag(ScriptTag newTag) // 0x4424AE
{
    mangled_assert("?sctNewTag@@YGXW4ScriptTag@@@Z");
    todo("implement");
    _sub_4424AE(newTag);
}

/* ---------- private code */

#endif // __SCRIPTING_H__
#endif
