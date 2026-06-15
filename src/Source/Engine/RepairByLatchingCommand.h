#if 0
#ifndef __REPAIRBYLATCHINGCOMMAND_H__
#define __REPAIRBYLATCHINGCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RepairByLatchingCommand :
    public TrailTargetCommand
{
public:
    RepairByLatchingCommand(RepairByLatchingCommand const &); /* compiler_generated() */
    RepairByLatchingCommand(SaveGameData *);
    RepairByLatchingCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
    virtual ~RepairByLatchingCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
private:
    Ship *getBestTarget();
public:
    static Ship *getBestTarget(Squadron const *squad, Selection const &targets);
    virtual char const *getName() const override;
protected:
    virtual Sob *getTarget() override;
    virtual float getDesiredDistance() override;
private:
    void unLatch();
    bool setCurrentTarget(Ship *);
    enum State
    {
        Start = 0,
        MovingToTarget,
        Latching,
        Healing,
    };
    RepairByLatchingCommand::State m_State; // 0x28
    Selection m_targets; // 0x2C
    SobID m_currentTarget; // 0x60
    float m_timeSinceDamage; // 0x6C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    RepairByLatchingCommand &operator=(RepairByLatchingCommand const &); /* compiler_generated() */
};
static_assert(sizeof(RepairByLatchingCommand) == 112, "Invalid RepairByLatchingCommand size");

class RepairByLatchingCommand :
    public TrailTargetCommand
{
public:
    RepairByLatchingCommand(RepairByLatchingCommand const &); /* compiler_generated() */
    RepairByLatchingCommand(SaveGameData *);
    RepairByLatchingCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
    virtual ~RepairByLatchingCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
private:
    Ship *getBestTarget();
public:
    static Ship *getBestTarget(Squadron const *squad, Selection const &targets);
    virtual char const *getName() const override;
protected:
    virtual Sob *getTarget() override;
    virtual float getDesiredDistance() override;
private:
    void unLatch();
    bool setCurrentTarget(Ship *);
    enum State
    {
        Start = 0,
        MovingToTarget,
        Latching,
        Healing,
    };
    RepairByLatchingCommand::State m_State; // 0x28
    Selection m_targets; // 0x2C
    SobID m_currentTarget; // 0x60
    float m_timeSinceDamage; // 0x6C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    RepairByLatchingCommand &operator=(RepairByLatchingCommand const &); /* compiler_generated() */
};
static_assert(sizeof(RepairByLatchingCommand) == 112, "Invalid RepairByLatchingCommand size");

class RepairByLatchingCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    RepairByLatchingCommandStaticInfo(RepairByLatchingCommandStaticInfo const &); /* compiler_generated() */
    RepairByLatchingCommandStaticInfo(ShipStatic *, float);
    virtual ~RepairByLatchingCommandStaticInfo() override;
    float getRepairRate(unsigned __int32) const;
    _inline float getOffsetFromRepairTarget() const;
protected:
    float m_repairRate; // 0x8
    std::map<unsigned int,float,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,float> > > m_repairRatesFromFamilyIndex; // 0xC
    float m_offsetFromTarget; // 0x14
public:
    RepairByLatchingCommandStaticInfo &operator=(RepairByLatchingCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(RepairByLatchingCommandStaticInfo) == 24, "Invalid RepairByLatchingCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool RepairByLatchingCommand::isDeterministic() // 0x6A182B
{
    mangled_assert("?isDeterministic@RepairByLatchingCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *RepairByLatchingCommand::saveToken() // 0x6A191E
{
    mangled_assert("?saveToken@RepairByLatchingCommand@@UAEPBDXZ");
    todo("implement");
}

_inline float RepairByLatchingCommandStaticInfo::getOffsetFromRepairTarget() const // 0x6A1793
{
    mangled_assert("?getOffsetFromRepairTarget@RepairByLatchingCommandStaticInfo@@QBEMXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __REPAIRBYLATCHINGCOMMAND_H__
#endif
