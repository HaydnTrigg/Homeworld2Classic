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

_inline vector3 const &MoveCommand::getDestinationDtrm() const // 0x6A88AF
{
    mangled_assert("?getDestinationDtrm@MoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &MoveCommand::getDestinationVis() const // 0x6A88B3
{
    mangled_assert("?getDestinationVis@MoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

_inline bool MoveCommand::canBeInterrupted(CommandType, Command *) // 0x6A8874
{
    mangled_assert("?canBeInterrupted@MoveCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

_inline void MoveCommand::checkAttack() // 0x6A8879
{
    mangled_assert("?checkAttack@MoveCommand@@MAEXXZ");
    todo("implement");
}

_inline bool MoveCommand::isDeterministic() // 0x6A88BD
{
    mangled_assert("?isDeterministic@MoveCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *MoveCommand::saveToken() // 0x6A896A
{
    mangled_assert("?saveToken@MoveCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MOVECOMMAND_H__
#endif
