#if 0
#ifndef __GAMERANDOM_H__
#define __GAMERANDOM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GameRandomStreams :
    public Saveable
{
public:
    RandomStream m_randyDamage; // 0x4
    RandomStream m_randyBattle; // 0x20
    RandomStream m_randyStatic; // 0x3C
    RandomStream m_randyGame; // 0x58
    RandomStream m_randyCommands; // 0x74
    RandomStream m_randyWeapon; // 0x90
    RandomStream m_randyMissile; // 0xAC
    RandomStream m_randySob; // 0xC8
    RandomStream m_randyAttackStyle; // 0xE4
    RandomStream m_randyPath; // 0x100
    RandomStream m_randyLua; // 0x11C
    RandomStream m_syncRandom; // 0x138
    RandomStream m_randyAIPlayer; // 0x154
    RandomStream m_randyParticleStream; // 0x170
    RandomStream m_randyETG; // 0x18C
    RandomStream m_randySound; // 0x1A8
    RandomStream m_randyTrails; // 0x1C4
    RandomStream m_randyRender; // 0x1E0
private:
    unsigned __int32 m_lastChecksum; // 0x1FC
public:
    GameRandomStreams(GameRandomStreams const &); /* compiler_generated() */
    GameRandomStreams();
    virtual ~GameRandomStreams() override;
    void resetAllSeeds();
    void setAllSeeds(unsigned __int32);
    unsigned __int32 getChecksum();
    unsigned __int32 getLastChecksum();
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
private:
    static SaveData const m_saveData[0];
public:
    GameRandomStreams &operator=(GameRandomStreams const &); /* compiler_generated() */
};
static_assert(sizeof(GameRandomStreams) == 512, "Invalid GameRandomStreams size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_5EFBF0(GameRandomStreams *const);
_inline bool GameRandomStreams::isDeterministic() // 0x5EFBF0
{
    mangled_assert("?isDeterministic@GameRandomStreams@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5EFBF0(this);
    return __result;
}

_extern char const *_sub_5EFD78(GameRandomStreams *const);
_inline char const *GameRandomStreams::saveToken() // 0x5EFD78
{
    mangled_assert("?saveToken@GameRandomStreams@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5EFD78(this);
    return __result;
}

/* ---------- private code */

#endif // __GAMERANDOM_H__
#endif
