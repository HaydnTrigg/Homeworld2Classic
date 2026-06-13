#if 0
#ifndef __CAPTURECOMMAND_H__
#define __CAPTURECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CaptureCommand :
    public Command
{
public:
    CaptureCommand(CaptureCommand const &); /* compiler_generated() */
    CaptureCommand(SaveGameData *);
    CaptureCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~CaptureCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual WeaponActivate getWeaponActivation() const override;
    virtual char const *getName() const override;
private:
    void unLatch();
    void moveToTarget(Ship *);
    bool tooFarAwayFromTarget(Ship *);
    void moveToLastKnownPosition();
    void setCaptureAnimation();
    void closeDownCaptureAnimation();
    enum State
    {
        Start = 0,
        MovingToTarget,
        MovingToLastKnownPos,
        WaitingForFreeSlot,
        Latching,
        Latched,
        Detaching,
    };
    CaptureCommand::State m_State; // 0x14
    SobID m_Target; // 0x18
    vector3 m_lastKnownPosition; // 0x24
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    CaptureCommand &operator=(CaptureCommand const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureCommand) == 48, "Invalid CaptureCommand size");

class CaptureCommand :
    public Command
{
public:
    CaptureCommand(CaptureCommand const &); /* compiler_generated() */
    CaptureCommand(SaveGameData *);
    CaptureCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~CaptureCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual WeaponActivate getWeaponActivation() const override;
    virtual char const *getName() const override;
private:
    void unLatch();
    void moveToTarget(Ship *);
    bool tooFarAwayFromTarget(Ship *);
    void moveToLastKnownPosition();
    void setCaptureAnimation();
    void closeDownCaptureAnimation();
    enum State
    {
        Start = 0,
        MovingToTarget,
        MovingToLastKnownPos,
        WaitingForFreeSlot,
        Latching,
        Latched,
        Detaching,
    };
    CaptureCommand::State m_State; // 0x14
    SobID m_Target; // 0x18
    vector3 m_lastKnownPosition; // 0x24
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    CaptureCommand &operator=(CaptureCommand const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureCommand) == 48, "Invalid CaptureCommand size");

class CaptureCommand :
    public Command
{
public:
    CaptureCommand(CaptureCommand const &); /* compiler_generated() */
    CaptureCommand(SaveGameData *);
    CaptureCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~CaptureCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual WeaponActivate getWeaponActivation() const override;
    virtual char const *getName() const override;
private:
    void unLatch();
    void moveToTarget(Ship *);
    bool tooFarAwayFromTarget(Ship *);
    void moveToLastKnownPosition();
    void setCaptureAnimation();
    void closeDownCaptureAnimation();
    enum State
    {
        Start = 0,
        MovingToTarget,
        MovingToLastKnownPos,
        WaitingForFreeSlot,
        Latching,
        Latched,
        Detaching,
    };
    CaptureCommand::State m_State; // 0x14
    SobID m_Target; // 0x18
    vector3 m_lastKnownPosition; // 0x24
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    CaptureCommand &operator=(CaptureCommand const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureCommand) == 48, "Invalid CaptureCommand size");

class CaptureCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    CaptureCommandStaticInfo(CaptureCommandStaticInfo const &); /* compiler_generated() */
    CaptureCommandStaticInfo(ShipStatic *, float);
    virtual ~CaptureCommandStaticInfo() override;
    _inline float getLatchOffset() const;
private:
    float m_latchOffset; // 0x8
public:
    CaptureCommandStaticInfo &operator=(CaptureCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(CaptureCommandStaticInfo) == 12, "Invalid CaptureCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6A9EB2(CaptureCommand *const);
_inline bool CaptureCommand::isDeterministic() // 0x6A9EB2
{
    mangled_assert("?isDeterministic@CaptureCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6A9EB2(this);
    return __result;
}

_extern char const *_sub_6AA097(CaptureCommand *const);
_inline char const *CaptureCommand::saveToken() // 0x6AA097
{
    mangled_assert("?saveToken@CaptureCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AA097(this);
    return __result;
}

_extern float _sub_6A9E82(CaptureCommandStaticInfo const *const);
_inline float CaptureCommandStaticInfo::getLatchOffset() const // 0x6A9E82
{
    mangled_assert("?getLatchOffset@CaptureCommandStaticInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_6A9E82(this);
    return __result;
}

/* ---------- private code */

#endif // __CAPTURECOMMAND_H__
#endif
