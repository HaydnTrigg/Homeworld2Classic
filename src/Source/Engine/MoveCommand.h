#if 0
#ifndef __MOVECOMMAND_H__
#define __MOVECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MoveCommand :
    public Command
{
public:
    MoveCommand(MoveCommand const &); /* compiler_generated() */
    MoveCommand(SaveGameData *);
    MoveCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~MoveCommand() override;
    void useHeading(vector3 const &);
    void useSubDestination(vector3 const &);
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
    virtual void resetCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
protected:
    virtual _inline void checkAttack();
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    MoveCommand::eMoveState m_moveState; // 0x14
private:
    vector3 m_destination; // 0x18
    vector3 m_subDestination; // 0x24
    bool m_useSubDestination; // 0x30
    vector3 m_heading; // 0x34
    bool m_useHeading; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    MoveCommand &operator=(MoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(MoveCommand) == 68, "Invalid MoveCommand size");

class MoveCommand :
    public Command
{
public:
    MoveCommand(MoveCommand const &); /* compiler_generated() */
    MoveCommand(SaveGameData *);
    MoveCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~MoveCommand() override;
    void useHeading(vector3 const &);
    void useSubDestination(vector3 const &);
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
    virtual void resetCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
protected:
    virtual _inline void checkAttack();
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    MoveCommand::eMoveState m_moveState; // 0x14
private:
    vector3 m_destination; // 0x18
    vector3 m_subDestination; // 0x24
    bool m_useSubDestination; // 0x30
    vector3 m_heading; // 0x34
    bool m_useHeading; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    MoveCommand &operator=(MoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(MoveCommand) == 68, "Invalid MoveCommand size");

class MoveCommand :
    public Command
{
public:
    MoveCommand(MoveCommand const &); /* compiler_generated() */
    MoveCommand(SaveGameData *);
    MoveCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~MoveCommand() override;
    void useHeading(vector3 const &);
    void useSubDestination(vector3 const &);
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
    virtual void resetCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
protected:
    virtual _inline void checkAttack();
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    MoveCommand::eMoveState m_moveState; // 0x14
private:
    vector3 m_destination; // 0x18
    vector3 m_subDestination; // 0x24
    bool m_useSubDestination; // 0x30
    vector3 m_heading; // 0x34
    bool m_useHeading; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    MoveCommand &operator=(MoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(MoveCommand) == 68, "Invalid MoveCommand size");

class MoveCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    MoveCommandStaticInfo(MoveCommandStaticInfo const &); /* compiler_generated() */
    MoveCommandStaticInfo();
    virtual ~MoveCommandStaticInfo() override;
    bool m_oneShotMovement; // 0x8
    MoveCommandStaticInfo &operator=(MoveCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(MoveCommandStaticInfo) == 12, "Invalid MoveCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern vector3 const &_sub_6A88AF(MoveCommand const *const);
_inline vector3 const &MoveCommand::getDestinationDtrm() const // 0x6A88AF
{
    mangled_assert("?getDestinationDtrm@MoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A88AF(this);
    return __result;
}

_extern vector3 const &_sub_6A88B3(MoveCommand const *const);
_inline vector3 const &MoveCommand::getDestinationVis() const // 0x6A88B3
{
    mangled_assert("?getDestinationVis@MoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6A88B3(this);
    return __result;
}

_extern bool _sub_6A8874(MoveCommand *const, CommandType, Command *);
_inline bool MoveCommand::canBeInterrupted(CommandType, Command *) // 0x6A8874
{
    mangled_assert("?canBeInterrupted@MoveCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6A8874(this, arg, arg);
    return __result;
}

_extern void _sub_6A8879(MoveCommand *const);
_inline void MoveCommand::checkAttack() // 0x6A8879
{
    mangled_assert("?checkAttack@MoveCommand@@MAEXXZ");
    todo("implement");
    _sub_6A8879(this);
}

_extern bool _sub_6A88BD(MoveCommand *const);
_inline bool MoveCommand::isDeterministic() // 0x6A88BD
{
    mangled_assert("?isDeterministic@MoveCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6A88BD(this);
    return __result;
}

_extern char const *_sub_6A896A(MoveCommand *const);
_inline char const *MoveCommand::saveToken() // 0x6A896A
{
    mangled_assert("?saveToken@MoveCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A896A(this);
    return __result;
}

/* ---------- private code */

#endif // __MOVECOMMAND_H__
#endif
