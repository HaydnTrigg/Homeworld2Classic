#if 0
#ifndef __WAYPOINTMOVECOMMAND_H__
#define __WAYPOINTMOVECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WaypointMoveCommand :
    public Command
{
public:
    WaypointMoveCommand(WaypointMoveCommand const &); /* compiler_generated() */
    WaypointMoveCommand(SaveGameData *);
    WaypointMoveCommand(Squadron *, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    virtual ~WaypointMoveCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    vector3 const &getCurrentDestination() const;
    _inline __int32 getCurrentDestinationIndex() const;
    _inline std::vector<vector3,std::allocator<vector3> > const &getPathPoints() const;
    virtual void resetCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    _inline Command *getFinalCommand() const;
    _inline Sob const *getFinalTarget() const;
    virtual char const *getName() const override;
private:
    void spawnEndCommand();
    void moveToPoint(vector3 const &, bool);
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    WaypointMoveCommand::eMoveState m_moveState; // 0x14
    unsigned __int32 m_expectExtraCommand; // 0x18
    Command *m_finalCommand; // 0x1C
    std::vector<vector3,std::allocator<vector3> > const m_path; // 0x20
    __int32 m_current; // 0x2C
    bool m_forward; // 0x30
    bool m_looped; // 0x31
    SobID m_finalTargetID; // 0x34
    bool m_attackMove; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
};
static_assert(sizeof(WaypointMoveCommand) == 68, "Invalid WaypointMoveCommand size");

class WaypointMoveCommand :
    public Command
{
public:
    WaypointMoveCommand(WaypointMoveCommand const &); /* compiler_generated() */
    WaypointMoveCommand(SaveGameData *);
    WaypointMoveCommand(Squadron *, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    virtual ~WaypointMoveCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    vector3 const &getCurrentDestination() const;
    _inline __int32 getCurrentDestinationIndex() const;
    _inline std::vector<vector3,std::allocator<vector3> > const &getPathPoints() const;
    virtual void resetCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    _inline Command *getFinalCommand() const;
    _inline Sob const *getFinalTarget() const;
    virtual char const *getName() const override;
private:
    void spawnEndCommand();
    void moveToPoint(vector3 const &, bool);
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    WaypointMoveCommand::eMoveState m_moveState; // 0x14
    unsigned __int32 m_expectExtraCommand; // 0x18
    Command *m_finalCommand; // 0x1C
    std::vector<vector3,std::allocator<vector3> > const m_path; // 0x20
    __int32 m_current; // 0x2C
    bool m_forward; // 0x30
    bool m_looped; // 0x31
    SobID m_finalTargetID; // 0x34
    bool m_attackMove; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
};
static_assert(sizeof(WaypointMoveCommand) == 68, "Invalid WaypointMoveCommand size");

class WaypointMoveCommand :
    public Command
{
public:
    WaypointMoveCommand(WaypointMoveCommand const &); /* compiler_generated() */
    WaypointMoveCommand(SaveGameData *);
    WaypointMoveCommand(Squadron *, std::vector<vector3,std::allocator<vector3> > const &, bool, unsigned __int32, bool, bool, SobID const &, Command::CommandOrigin);
    virtual ~WaypointMoveCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    vector3 const &getCurrentDestination() const;
    _inline __int32 getCurrentDestinationIndex() const;
    _inline std::vector<vector3,std::allocator<vector3> > const &getPathPoints() const;
    virtual void resetCommand() override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    _inline Command *getFinalCommand() const;
    _inline Sob const *getFinalTarget() const;
    virtual char const *getName() const override;
private:
    void spawnEndCommand();
    void moveToPoint(vector3 const &, bool);
    enum eMoveState
    {
        Init = 0,
        Moving,
    };
    WaypointMoveCommand::eMoveState m_moveState; // 0x14
    unsigned __int32 m_expectExtraCommand; // 0x18
    Command *m_finalCommand; // 0x1C
    std::vector<vector3,std::allocator<vector3> > const m_path; // 0x20
    __int32 m_current; // 0x2C
    bool m_forward; // 0x30
    bool m_looped; // 0x31
    SobID m_finalTargetID; // 0x34
    bool m_attackMove; // 0x40
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
};
static_assert(sizeof(WaypointMoveCommand) == 68, "Invalid WaypointMoveCommand size");

class WaypointMoveCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    WaypointMoveCommandStaticInfo(WaypointMoveCommandStaticInfo const &); /* compiler_generated() */
    WaypointMoveCommandStaticInfo();
    virtual ~WaypointMoveCommandStaticInfo() override;
    WaypointMoveCommandStaticInfo &operator=(WaypointMoveCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(WaypointMoveCommandStaticInfo) == 8, "Invalid WaypointMoveCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 WaypointMoveCommand::getCurrentDestinationIndex() const // 0x61261A
{
    mangled_assert("?getCurrentDestinationIndex@WaypointMoveCommand@@QBEHXZ");
    todo("implement");
}

_inline std::vector<vector3,std::allocator<vector3> > const &WaypointMoveCommand::getPathPoints() const // 0x612677
{
    mangled_assert("?getPathPoints@WaypointMoveCommand@@QBEABV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
}

_inline Command *WaypointMoveCommand::getFinalCommand() const // 0x4B93FB
{
    mangled_assert("?getFinalCommand@WaypointMoveCommand@@QBEPAVCommand@@XZ");
    todo("implement");
}

_inline Sob const *WaypointMoveCommand::getFinalTarget() const // 0x612664
{
    mangled_assert("?getFinalTarget@WaypointMoveCommand@@QBEPBVSob@@XZ");
    todo("implement");
}

_inline bool WaypointMoveCommand::isDeterministic() // 0x6A8EF8
{
    mangled_assert("?isDeterministic@WaypointMoveCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *WaypointMoveCommand::saveToken() // 0x6A9080
{
    mangled_assert("?saveToken@WaypointMoveCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __WAYPOINTMOVECOMMAND_H__
#endif
