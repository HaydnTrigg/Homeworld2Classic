#if 0
#ifndef __MODIFIERTARGETCACHE_H__
#define __MODIFIERTARGETCACHE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ModifierTargetCache :
    public Saveable
{
public:
    ModifierTargetCache(ModifierTargetCache const &); /* compiler_generated() */
    ModifierTargetCache(unsigned __int32);
    virtual ~ModifierTargetCache() override;
    std::vector<Selection *,std::allocator<Selection *> > m_cache; // 0x4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveModifierCache(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadModifierCache(void *objectPtr, SaveGameData *saveGameData);
    ModifierTargetCache &operator=(ModifierTargetCache const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierTargetCache) == 16, "Invalid ModifierTargetCache size");

class ModifierTargetCache :
    public Saveable
{
public:
    ModifierTargetCache(ModifierTargetCache const &); /* compiler_generated() */
    ModifierTargetCache(unsigned __int32);
    virtual ~ModifierTargetCache() override;
    std::vector<Selection *,std::allocator<Selection *> > m_cache; // 0x4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveModifierCache(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void loadModifierCache(void *objectPtr, SaveGameData *saveGameData);
    ModifierTargetCache &operator=(ModifierTargetCache const &); /* compiler_generated() */
};
static_assert(sizeof(ModifierTargetCache) == 16, "Invalid ModifierTargetCache size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_56EFD0(ModifierTargetCache *const);
_inline bool ModifierTargetCache::isDeterministic() // 0x56EFD0
{
    mangled_assert("?isDeterministic@ModifierTargetCache@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_56EFD0(this);
    return __result;
}

_extern char const *_sub_56F105(ModifierTargetCache *const);
_inline char const *ModifierTargetCache::saveToken() // 0x56F105
{
    mangled_assert("?saveToken@ModifierTargetCache@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_56F105(this);
    return __result;
}

/* ---------- private code */

#endif // __MODIFIERTARGETCACHE_H__
#endif
