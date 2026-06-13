#if 0
#ifndef __HYPERSPACEBASECOMMAND_H__
#define __HYPERSPACEBASECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HyperSpaceBaseCommand :
    public Command
{
public:
    HyperSpaceBaseCommand(HyperSpaceBaseCommand const &); /* compiler_generated() */
    HyperSpaceBaseCommand(SaveGameData *);
    HyperSpaceBaseCommand(Squadron *, Command::CommandOrigin);
    virtual ~HyperSpaceBaseCommand() = 0;
    virtual float getTransitTime() const = 0;
    virtual void cleanUpCommand() override;
    virtual void emergencyCleanUp() override;
    virtual void jumpEffectToEnd();
protected:
    bool ableToEnterHyperspace() const;
    virtual void exitHyperspace() = 0;
    virtual void dropOutOfHyperspace() = 0;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperSpaceBaseCommand &operator=(HyperSpaceBaseCommand const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceBaseCommand) == 20, "Invalid HyperSpaceBaseCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6BD61E(HyperSpaceBaseCommand *const);
_inline bool HyperSpaceBaseCommand::isDeterministic() // 0x6BD61E
{
    mangled_assert("?isDeterministic@HyperSpaceBaseCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6BD61E(this);
    return __result;
}

_extern char const *_sub_6BD6C3(HyperSpaceBaseCommand *const);
_inline char const *HyperSpaceBaseCommand::saveToken() // 0x6BD6C3
{
    mangled_assert("?saveToken@HyperSpaceBaseCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6BD6C3(this);
    return __result;
}

/* ---------- private code */

#endif // __HYPERSPACEBASECOMMAND_H__
#endif
