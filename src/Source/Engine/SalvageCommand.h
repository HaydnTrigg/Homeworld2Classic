#if 0
#ifndef __SALVAGECOMMAND_H__
#define __SALVAGECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SalvageCommand :
    public Command
{
public:
    SalvageCommand(SalvageCommand const &); /* compiler_generated() */
    SalvageCommand(SaveGameData *);
    SalvageCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~SalvageCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
private:
    void moveToTarget(Ship *);
    void moveToLatchPoint(Ship *);
    bool latchWithTarget(Ship *);
    enum State
    {
        Initial = 0,
        MovingToTarget,
        MovingToLatchPoint,
        LatchedAndDocking,
    };
    SalvageCommand::State m_State; // 0x14
    SobID m_target; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    SalvageCommand &operator=(SalvageCommand const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageCommand) == 36, "Invalid SalvageCommand size");

class SalvageCommand :
    public Command
{
public:
    SalvageCommand(SalvageCommand const &); /* compiler_generated() */
    SalvageCommand(SaveGameData *);
    SalvageCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~SalvageCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual char const *getName() const override;
private:
    void moveToTarget(Ship *);
    void moveToLatchPoint(Ship *);
    bool latchWithTarget(Ship *);
    enum State
    {
        Initial = 0,
        MovingToTarget,
        MovingToLatchPoint,
        LatchedAndDocking,
    };
    SalvageCommand::State m_State; // 0x14
    SobID m_target; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    SalvageCommand &operator=(SalvageCommand const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageCommand) == 36, "Invalid SalvageCommand size");

class SalvageCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    SalvageCommandStaticInfo(SalvageCommandStaticInfo const &); /* compiler_generated() */
    SalvageCommandStaticInfo(ShipStatic *);
    virtual ~SalvageCommandStaticInfo() override;
    _inline float getDistanceFromTarget() const;
protected:
    float m_distanceToMaintainFromTarget; // 0x8
public:
    SalvageCommandStaticInfo &operator=(SalvageCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(SalvageCommandStaticInfo) == 12, "Invalid SalvageCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AE8F1(SalvageCommand *const);
_inline bool SalvageCommand::isDeterministic() // 0x6AE8F1
{
    mangled_assert("?isDeterministic@SalvageCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AE8F1(this);
    return __result;
}

_extern char const *_sub_6AEC07(SalvageCommand *const);
_inline char const *SalvageCommand::saveToken() // 0x6AEC07
{
    mangled_assert("?saveToken@SalvageCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AEC07(this);
    return __result;
}

_extern float _sub_6AE8B4(SalvageCommandStaticInfo const *const);
_inline float SalvageCommandStaticInfo::getDistanceFromTarget() const // 0x6AE8B4
{
    mangled_assert("?getDistanceFromTarget@SalvageCommandStaticInfo@@QBEMXZ");
    todo("implement");
    float __result = _sub_6AE8B4(this);
    return __result;
}

/* ---------- private code */

#endif // __SALVAGECOMMAND_H__
#endif
