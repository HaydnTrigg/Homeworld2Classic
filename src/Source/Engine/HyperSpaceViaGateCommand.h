#if 0
#ifndef __HYPERSPACEVIAGATECOMMAND_H__
#define __HYPERSPACEVIAGATECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HyperSpaceViaGateCommand :
    public HyperSpaceBaseCommand
{
public:
    HyperSpaceViaGateCommand(HyperSpaceViaGateCommand const &); /* compiler_generated() */
    HyperSpaceViaGateCommand(SaveGameData *);
    HyperSpaceViaGateCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~HyperSpaceViaGateCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual bool allowPassiveActions() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual float getTransitTime() const override;
    static Fixed<10> getCostOfUsingGate(Squadron const *squadUsingTheGate, Squadron const *gate);
    virtual char const *getName() const override;
protected:
    virtual void exitHyperspace() override;
    virtual void dropOutOfHyperspace() override;
    virtual void jumpEffectToEnd() override;
private:
    bool canHyperspace() const;
    enum State
    {
        Start = 0,
        FlyingToNearGate,
        FlyingToGate,
        EnteringGate,
        Hyperspace,
        LeavingGate,
        ExitHyperspace,
        Disabled,
    };
public:
    _inline HyperSpaceViaGateCommand::State getHyperSpaceState() const;
private:
    void flyToGate(Ship *);
    void flyToNearGate(Ship *);
    HyperSpaceViaGateCommand::State m_State; // 0x14
    SobID m_gateTarget; // 0x18
    float m_Time; // 0x24
    vector3 m_offestFromEndGate; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperSpaceViaGateCommand &operator=(HyperSpaceViaGateCommand const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceViaGateCommand) == 52, "Invalid HyperSpaceViaGateCommand size");

class HyperSpaceViaGateCommand :
    public HyperSpaceBaseCommand
{
public:
    HyperSpaceViaGateCommand(HyperSpaceViaGateCommand const &); /* compiler_generated() */
    HyperSpaceViaGateCommand(SaveGameData *);
    HyperSpaceViaGateCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~HyperSpaceViaGateCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual bool allowPassiveActions() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual float getTransitTime() const override;
    static Fixed<10> getCostOfUsingGate(Squadron const *squadUsingTheGate, Squadron const *gate);
    virtual char const *getName() const override;
protected:
    virtual void exitHyperspace() override;
    virtual void dropOutOfHyperspace() override;
    virtual void jumpEffectToEnd() override;
private:
    bool canHyperspace() const;
    enum State
    {
        Start = 0,
        FlyingToNearGate,
        FlyingToGate,
        EnteringGate,
        Hyperspace,
        LeavingGate,
        ExitHyperspace,
        Disabled,
    };
public:
    _inline HyperSpaceViaGateCommand::State getHyperSpaceState() const;
private:
    void flyToGate(Ship *);
    void flyToNearGate(Ship *);
    HyperSpaceViaGateCommand::State m_State; // 0x14
    SobID m_gateTarget; // 0x18
    float m_Time; // 0x24
    vector3 m_offestFromEndGate; // 0x28
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperSpaceViaGateCommand &operator=(HyperSpaceViaGateCommand const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceViaGateCommand) == 52, "Invalid HyperSpaceViaGateCommand size");

class HyperSpaceViaGateCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    HyperSpaceViaGateCommandStaticInfo(HyperSpaceViaGateCommandStaticInfo const &); /* compiler_generated() */
    HyperSpaceViaGateCommandStaticInfo(ShipStatic *);
    virtual ~HyperSpaceViaGateCommandStaticInfo() override;
    float m_hyperSpaceTransitTime; // 0x8
    float m_damagePercentageForAbort; // 0xC
    float m_gateUseCostMultiplier; // 0x10
    HyperSpaceViaGateCommandStaticInfo &operator=(HyperSpaceViaGateCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceViaGateCommandStaticInfo) == 20, "Invalid HyperSpaceViaGateCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline HyperSpaceViaGateCommand::State HyperSpaceViaGateCommand::getHyperSpaceState() const // 0x6A7F72
{
    mangled_assert("?getHyperSpaceState@HyperSpaceViaGateCommand@@QBE?AW4State@1@XZ");
    todo("implement");
}

_inline bool HyperSpaceViaGateCommand::isDeterministic() // 0x6ABD13
{
    mangled_assert("?isDeterministic@HyperSpaceViaGateCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *HyperSpaceViaGateCommand::saveToken() // 0x6ABE31
{
    mangled_assert("?saveToken@HyperSpaceViaGateCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __HYPERSPACEVIAGATECOMMAND_H__
#endif
