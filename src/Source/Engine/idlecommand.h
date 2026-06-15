#if 0
#ifndef __IDLECOMMAND_H__
#define __IDLECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class IdleCommand :
    public Command
{
public:
    IdleCommand(IdleCommand const &); /* compiler_generated() */
    IdleCommand(SaveGameData *);
    IdleCommand(Squadron *, Command::CommandOrigin);
    virtual ~IdleCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    _inline void clearNoReactionsTimer();
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    enum IdleState
    {
        Initial = 0,
        Inactive,
        Idling,
    };
private:
    IdleCommand::IdleState m_State; // 0x14
    float m_Time; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    IdleCommand &operator=(IdleCommand const &); /* compiler_generated() */
};
static_assert(sizeof(IdleCommand) == 28, "Invalid IdleCommand size");

class IdleCommand :
    public Command
{
public:
    IdleCommand(IdleCommand const &); /* compiler_generated() */
    IdleCommand(SaveGameData *);
    IdleCommand(Squadron *, Command::CommandOrigin);
    virtual ~IdleCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    _inline void clearNoReactionsTimer();
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    enum IdleState
    {
        Initial = 0,
        Inactive,
        Idling,
    };
private:
    IdleCommand::IdleState m_State; // 0x14
    float m_Time; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    IdleCommand &operator=(IdleCommand const &); /* compiler_generated() */
};
static_assert(sizeof(IdleCommand) == 28, "Invalid IdleCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void IdleCommand::clearNoReactionsTimer() // 0x4B8F84
{
    mangled_assert("?clearNoReactionsTimer@IdleCommand@@QAEXXZ");
    todo("implement");
}

_inline bool IdleCommand::canBeInterrupted(CommandType, Command *) // 0x6A8414
{
    mangled_assert("?canBeInterrupted@IdleCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

_inline bool IdleCommand::isDeterministic() // 0x6A8427
{
    mangled_assert("?isDeterministic@IdleCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *IdleCommand::saveToken() // 0x6A84C8
{
    mangled_assert("?saveToken@IdleCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __IDLECOMMAND_H__
#endif
