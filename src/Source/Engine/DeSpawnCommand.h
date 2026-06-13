#if 0
#ifndef __DESPAWNCOMMAND_H__
#define __DESPAWNCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DeSpawnCommand :
    public HyperSpaceBaseCommand
{
public:
    DeSpawnCommand(DeSpawnCommand const &); /* compiler_generated() */
    DeSpawnCommand(SaveGameData *);
    DeSpawnCommand(Squadron *, Command::CommandOrigin);
    virtual ~DeSpawnCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual bool allowPassiveActions() const override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    void setOrientation(vector3 const &, vector3 const &);
    void spawn(vector3 const &, bool, bool);
    virtual _inline float getTransitTime() const override;
    virtual void jumpEffectToEnd() override;
    virtual char const *getName() const override;
protected:
    virtual void exitHyperspace() override;
    virtual void dropOutOfHyperspace() override;
    enum State
    {
        Start = 0,
        NotSpawned,
        Spawn,
        Spawning,
        Done,
    };
private:
    DeSpawnCommand::State m_State; // 0x14
    vector3 m_destination; // 0x18
    bool m_useHyperspaceEffects; // 0x24
    vector3 m_forward; // 0x28
    vector3 m_up; // 0x34
    bool m_repositionForCollision; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    DeSpawnCommand &operator=(DeSpawnCommand const &); /* compiler_generated() */
};
static_assert(sizeof(DeSpawnCommand) == 68, "Invalid DeSpawnCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AC5FA(DeSpawnCommand *const, CommandType, Command *);
_inline bool DeSpawnCommand::canBeInterrupted(CommandType, Command *) // 0x6AC5FA
{
    mangled_assert("?canBeInterrupted@DeSpawnCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AC5FA(this, arg, arg);
    return __result;
}

_extern float _sub_6AC648(DeSpawnCommand const *const);
_inline float DeSpawnCommand::getTransitTime() const // 0x6AC648
{
    mangled_assert("?getTransitTime@DeSpawnCommand@@UBEMXZ");
    todo("implement");
    float __result = _sub_6AC648(this);
    return __result;
}

_extern bool _sub_6AC64F(DeSpawnCommand *const);
_inline bool DeSpawnCommand::isDeterministic() // 0x6AC64F
{
    mangled_assert("?isDeterministic@DeSpawnCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AC64F(this);
    return __result;
}

_extern char const *_sub_6AC714(DeSpawnCommand *const);
_inline char const *DeSpawnCommand::saveToken() // 0x6AC714
{
    mangled_assert("?saveToken@DeSpawnCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AC714(this);
    return __result;
}

/* ---------- private code */

#endif // __DESPAWNCOMMAND_H__
#endif
