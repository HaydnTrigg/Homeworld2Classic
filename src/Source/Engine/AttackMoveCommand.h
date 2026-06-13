#if 0
#ifndef __ATTACKMOVECOMMAND_H__
#define __ATTACKMOVECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class AttackMoveCommand :
    public MoveCommand
{
public:
    AttackMoveCommand(AttackMoveCommand const &); /* compiler_generated() */
    AttackMoveCommand(SaveGameData *);
    AttackMoveCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~AttackMoveCommand() override;
    virtual CommandType getCommandType() const override;
protected:
    virtual void checkAttack() override;
private:
    void orderAttack(Selection const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackMoveCommand &operator=(AttackMoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackMoveCommand) == 68, "Invalid AttackMoveCommand size");

class AttackMoveCommand :
    public MoveCommand
{
public:
    AttackMoveCommand(AttackMoveCommand const &); /* compiler_generated() */
    AttackMoveCommand(SaveGameData *);
    AttackMoveCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~AttackMoveCommand() override;
    virtual CommandType getCommandType() const override;
protected:
    virtual void checkAttack() override;
private:
    void orderAttack(Selection const &);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    AttackMoveCommand &operator=(AttackMoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(AttackMoveCommand) == 68, "Invalid AttackMoveCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AEED4(AttackMoveCommand *const);
_inline bool AttackMoveCommand::isDeterministic() // 0x6AEED4
{
    mangled_assert("?isDeterministic@AttackMoveCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AEED4(this);
    return __result;
}

_extern char const *_sub_6AEFF0(AttackMoveCommand *const);
_inline char const *AttackMoveCommand::saveToken() // 0x6AEFF0
{
    mangled_assert("?saveToken@AttackMoveCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AEFF0(this);
    return __result;
}

/* ---------- private code */

#endif // __ATTACKMOVECOMMAND_H__
#endif
