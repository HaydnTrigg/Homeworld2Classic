#if 0
#ifndef __RETIRECOMMAND_H__
#define __RETIRECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RetireCommand :
    public Command
{
public:
    RetireCommand(RetireCommand const &); /* compiler_generated() */
    RetireCommand(SaveGameData *);
    RetireCommand(Squadron *, Command::CommandOrigin);
    virtual ~RetireCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    RetireCommand &operator=(RetireCommand const &); /* compiler_generated() */
};
static_assert(sizeof(RetireCommand) == 20, "Invalid RetireCommand size");

class RetireCommand :
    public Command
{
public:
    RetireCommand(RetireCommand const &); /* compiler_generated() */
    RetireCommand(SaveGameData *);
    RetireCommand(Squadron *, Command::CommandOrigin);
    virtual ~RetireCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    RetireCommand &operator=(RetireCommand const &); /* compiler_generated() */
};
static_assert(sizeof(RetireCommand) == 20, "Invalid RetireCommand size");

class RetireCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    RetireCommandStaticInfo(RetireCommandStaticInfo const &); /* compiler_generated() */
    RetireCommandStaticInfo(ShipStatic *, bool);
    virtual ~RetireCommandStaticInfo() override;
    _inline bool shouldDisableOnRaceChange() const;
protected:
    bool m_shouldDisable; // 0x8
public:
    RetireCommandStaticInfo &operator=(RetireCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(RetireCommandStaticInfo) == 12, "Invalid RetireCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AC30A(RetireCommand *const, CommandType, Command *);
_inline bool RetireCommand::canBeInterrupted(CommandType, Command *) // 0x6AC30A
{
    mangled_assert("?canBeInterrupted@RetireCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AC30A(this, arg, arg);
    return __result;
}

_extern bool _sub_6AC31A(RetireCommand *const);
_inline bool RetireCommand::isDeterministic() // 0x6AC31A
{
    mangled_assert("?isDeterministic@RetireCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AC31A(this);
    return __result;
}

_extern char const *_sub_6AC3B6(RetireCommand *const);
_inline char const *RetireCommand::saveToken() // 0x6AC3B6
{
    mangled_assert("?saveToken@RetireCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AC3B6(this);
    return __result;
}

_extern bool _sub_48FD42(RetireCommandStaticInfo const *const);
_inline bool RetireCommandStaticInfo::shouldDisableOnRaceChange() const // 0x48FD42
{
    mangled_assert("?shouldDisableOnRaceChange@RetireCommandStaticInfo@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_48FD42(this);
    return __result;
}

/* ---------- private code */

#endif // __RETIRECOMMAND_H__
#endif
