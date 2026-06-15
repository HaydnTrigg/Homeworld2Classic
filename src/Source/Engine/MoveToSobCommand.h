#if 0
#ifndef __MOVETOSOBCOMMAND_H__
#define __MOVETOSOBCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MoveToSobCommand :
    public Command
{
public:
    MoveToSobCommand(MoveToSobCommand const &); /* compiler_generated() */
    MoveToSobCommand(SaveGameData *);
    MoveToSobCommand(Squadron *, SobID const &, vector3 const &, Command::CommandOrigin);
    virtual ~MoveToSobCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void resetCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    void useSubDestination(vector3 const &);
    enum CommandState
    {
        Initial = 0,
        Moving,
    };
private:
    MoveToSobCommand::CommandState m_State; // 0x14
    SobID m_target; // 0x18
    vector3 m_offsetInWorldSpace; // 0x24
    vector3 m_lastKnownDestination; // 0x30
    vector3 m_subDestination; // 0x3C
    bool m_useSubDestination; // 0x48
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    MoveToSobCommand &operator=(MoveToSobCommand const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToSobCommand) == 76, "Invalid MoveToSobCommand size");

class MoveToSobCommand :
    public Command
{
public:
    MoveToSobCommand(MoveToSobCommand const &); /* compiler_generated() */
    MoveToSobCommand(SaveGameData *);
    MoveToSobCommand(Squadron *, SobID const &, vector3 const &, Command::CommandOrigin);
    virtual ~MoveToSobCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void resetCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
    void useSubDestination(vector3 const &);
    enum CommandState
    {
        Initial = 0,
        Moving,
    };
private:
    MoveToSobCommand::CommandState m_State; // 0x14
    SobID m_target; // 0x18
    vector3 m_offsetInWorldSpace; // 0x24
    vector3 m_lastKnownDestination; // 0x30
    vector3 m_subDestination; // 0x3C
    bool m_useSubDestination; // 0x48
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    MoveToSobCommand &operator=(MoveToSobCommand const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToSobCommand) == 76, "Invalid MoveToSobCommand size");

class MoveToSobCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    MoveToSobCommandStaticInfo(MoveToSobCommandStaticInfo const &); /* compiler_generated() */
    MoveToSobCommandStaticInfo();
    virtual ~MoveToSobCommandStaticInfo() override;
    bool m_oneShotMovement; // 0x8
    MoveToSobCommandStaticInfo &operator=(MoveToSobCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(MoveToSobCommandStaticInfo) == 12, "Invalid MoveToSobCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool MoveToSobCommand::canBeInterrupted(CommandType, Command *) // 0x6AB12D
{
    mangled_assert("?canBeInterrupted@MoveToSobCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
}

_inline bool MoveToSobCommand::isDeterministic() // 0x6AB244
{
    mangled_assert("?isDeterministic@MoveToSobCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *MoveToSobCommand::saveToken() // 0x6AB2F1
{
    mangled_assert("?saveToken@MoveToSobCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MOVETOSOBCOMMAND_H__
#endif
