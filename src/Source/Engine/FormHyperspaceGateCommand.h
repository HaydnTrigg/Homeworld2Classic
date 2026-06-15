#if 0
#ifndef __FORMHYPERSPACEGATECOMMAND_H__
#define __FORMHYPERSPACEGATECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormHyperspaceGateCommand :
    public Command
{
public:
    FormHyperspaceGateCommand(FormHyperspaceGateCommand const &); /* compiler_generated() */
    FormHyperspaceGateCommand(SaveGameData *);
    FormHyperspaceGateCommand(Squadron *, Squadron *, Command::CommandOrigin);
    virtual ~FormHyperspaceGateCommand() override;
    virtual ComResult update(float) override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    _inline bool gateCanBeUsed() const;
    _inline bool gateCanBeReasigned() const;
    Squadron *getTargetGate() const;
    bool registerWithGate(Squadron const *);
    static Fixed<10> costOfSettingUpGate(Squadron const *gate);
    virtual char const *getName() const override;
    enum State
    {
        Start = 0,
        Waiting,
        Ready,
        NUMBER_OF_STATES,
    };
private:
    FormHyperspaceGateCommand::State m_State; // 0x14
    unsigned __int32 m_targetSquadID; // 0x18
    Selection m_shipsInHyperSpace; // 0x1C
    bool m_payedTheSetUpCost; // 0x50
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormHyperspaceGateCommand &operator=(FormHyperspaceGateCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormHyperspaceGateCommand) == 84, "Invalid FormHyperspaceGateCommand size");

class FormHyperspaceGateCommand :
    public Command
{
public:
    FormHyperspaceGateCommand(FormHyperspaceGateCommand const &); /* compiler_generated() */
    FormHyperspaceGateCommand(SaveGameData *);
    FormHyperspaceGateCommand(Squadron *, Squadron *, Command::CommandOrigin);
    virtual ~FormHyperspaceGateCommand() override;
    virtual ComResult update(float) override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    _inline bool gateCanBeUsed() const;
    _inline bool gateCanBeReasigned() const;
    Squadron *getTargetGate() const;
    bool registerWithGate(Squadron const *);
    static Fixed<10> costOfSettingUpGate(Squadron const *gate);
    virtual char const *getName() const override;
    enum State
    {
        Start = 0,
        Waiting,
        Ready,
        NUMBER_OF_STATES,
    };
private:
    FormHyperspaceGateCommand::State m_State; // 0x14
    unsigned __int32 m_targetSquadID; // 0x18
    Selection m_shipsInHyperSpace; // 0x1C
    bool m_payedTheSetUpCost; // 0x50
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormHyperspaceGateCommand &operator=(FormHyperspaceGateCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormHyperspaceGateCommand) == 84, "Invalid FormHyperspaceGateCommand size");

class FormHyperspaceGateCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    FormHyperspaceGateCommandStaticInfo(FormHyperspaceGateCommandStaticInfo const &); /* compiler_generated() */
    FormHyperspaceGateCommandStaticInfo(ShipStatic *);
    virtual ~FormHyperspaceGateCommandStaticInfo() override;
    float m_HyperspaceStartDistance; // 0x8
    float m_hyperspaceEndDistance; // 0xC
    unsigned __int32 m_setUpCost; // 0x10
    unsigned __int32 m_useCost; // 0x14
    FormHyperspaceGateCommandStaticInfo &operator=(FormHyperspaceGateCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(FormHyperspaceGateCommandStaticInfo) == 24, "Invalid FormHyperspaceGateCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FormHyperspaceGateCommand::gateCanBeUsed() const // 0x4AE460
{
    mangled_assert("?gateCanBeUsed@FormHyperspaceGateCommand@@QBE_NXZ");
    todo("implement");
}

_inline bool FormHyperspaceGateCommand::gateCanBeReasigned() const // 0x63156C
{
    mangled_assert("?gateCanBeReasigned@FormHyperspaceGateCommand@@QBE_NXZ");
    todo("implement");
}

_inline bool FormHyperspaceGateCommand::isDeterministic() // 0x69AC62
{
    mangled_assert("?isDeterministic@FormHyperspaceGateCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormHyperspaceGateCommand::saveToken() // 0x69AE03
{
    mangled_assert("?saveToken@FormHyperspaceGateCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMHYPERSPACEGATECOMMAND_H__
#endif
