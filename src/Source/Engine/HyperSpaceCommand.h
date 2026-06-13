#if 0
#ifndef __HYPERSPACECOMMAND_H__
#define __HYPERSPACECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HyperSpaceCommand :
    public HyperSpaceBaseCommand
{
public:
    HyperSpaceCommand(HyperSpaceCommand const &); /* compiler_generated() */
    HyperSpaceCommand(SaveGameData *);
    HyperSpaceCommand(Squadron *, Command::CommandOrigin, bool);
    HyperSpaceCommand(Squadron *, vector3 const &, vector3 const &, vector3 const &, Command::CommandOrigin);
    HyperSpaceCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~HyperSpaceCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
    void setOrientation(vector3 const &, vector3 const &);
    void bringOnMap(vector3 const &, bool);
    virtual float getTransitTime() const override;
    virtual void jumpEffectToEnd() override;
    virtual char const *getName() const override;
protected:
    virtual void exitHyperspace() override;
    virtual void dropOutOfHyperspace() override;
    enum CommandState
    {
        Start = 0,
        Start_OffmapHyper,
        EnteringHyperspace,
        InHyperspace,
        ExitHyperspace,
        ExitingHyperspace,
        Disabled,
    };
public:
    _inline HyperSpaceCommand::CommandState getHyperSpaceState() const;
private:
    vector3 m_destination; // 0x14
    bool m_useForwardUp; // 0x20
    vector3 m_forward; // 0x24
    vector3 m_up; // 0x30
    bool m_offMap; // 0x3C
    HyperSpaceCommand::CommandState m_State; // 0x40
    float m_Time; // 0x44
    bool m_bUseEffects; // 0x48
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperSpaceCommand &operator=(HyperSpaceCommand const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceCommand) == 76, "Invalid HyperSpaceCommand size");

class HyperSpaceCommand :
    public HyperSpaceBaseCommand
{
public:
    HyperSpaceCommand(HyperSpaceCommand const &); /* compiler_generated() */
    HyperSpaceCommand(SaveGameData *);
    HyperSpaceCommand(Squadron *, Command::CommandOrigin, bool);
    HyperSpaceCommand(Squadron *, vector3 const &, vector3 const &, vector3 const &, Command::CommandOrigin);
    HyperSpaceCommand(Squadron *, vector3 const &, Command::CommandOrigin);
    virtual ~HyperSpaceCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    virtual bool allowPassiveActions() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
    void setOrientation(vector3 const &, vector3 const &);
    void bringOnMap(vector3 const &, bool);
    virtual float getTransitTime() const override;
    virtual void jumpEffectToEnd() override;
    virtual char const *getName() const override;
protected:
    virtual void exitHyperspace() override;
    virtual void dropOutOfHyperspace() override;
    enum CommandState
    {
        Start = 0,
        Start_OffmapHyper,
        EnteringHyperspace,
        InHyperspace,
        ExitHyperspace,
        ExitingHyperspace,
        Disabled,
    };
public:
    _inline HyperSpaceCommand::CommandState getHyperSpaceState() const;
private:
    vector3 m_destination; // 0x14
    bool m_useForwardUp; // 0x20
    vector3 m_forward; // 0x24
    vector3 m_up; // 0x30
    bool m_offMap; // 0x3C
    HyperSpaceCommand::CommandState m_State; // 0x40
    float m_Time; // 0x44
    bool m_bUseEffects; // 0x48
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    HyperSpaceCommand &operator=(HyperSpaceCommand const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceCommand) == 76, "Invalid HyperSpaceCommand size");

class HyperSpaceCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    HyperSpaceCommandStaticInfo(HyperSpaceCommandStaticInfo const &); /* compiler_generated() */
    HyperSpaceCommandStaticInfo(ShipStatic *);
    virtual ~HyperSpaceCommandStaticInfo() override;
    float m_hyperSpaceCostFactor; // 0x8
    float m_maxHyperSpaceCost; // 0xC
    float m_minHyperSpaceCost; // 0x10
    float m_hyperSpaceRecoveryTime; // 0x14
    float m_hyperSpaceTransitTime; // 0x18
    HyperSpaceCommandStaticInfo &operator=(HyperSpaceCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(HyperSpaceCommandStaticInfo) == 28, "Invalid HyperSpaceCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AAA35(HyperSpaceCommand *const, CommandType, Command *);
_inline bool HyperSpaceCommand::canBeInterrupted(CommandType, Command *) // 0x6AAA35
{
    mangled_assert("?canBeInterrupted@HyperSpaceCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AAA35(this, arg, arg);
    return __result;
}

_extern vector3 const &_sub_6AAB2C(HyperSpaceCommand const *const);
_inline vector3 const &HyperSpaceCommand::getDestinationDtrm() const // 0x6AAB2C
{
    mangled_assert("?getDestinationDtrm@HyperSpaceCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AAB2C(this);
    return __result;
}

_extern vector3 const &_sub_6AAB30(HyperSpaceCommand const *const);
_inline vector3 const &HyperSpaceCommand::getDestinationVis() const // 0x6AAB30
{
    mangled_assert("?getDestinationVis@HyperSpaceCommand@@UBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6AAB30(this);
    return __result;
}

_extern HyperSpaceCommand::CommandState _sub_6A7F6E(HyperSpaceCommand const *const);
_inline HyperSpaceCommand::CommandState HyperSpaceCommand::getHyperSpaceState() const // 0x6A7F6E
{
    mangled_assert("?getHyperSpaceState@HyperSpaceCommand@@QBE?AW4CommandState@1@XZ");
    todo("implement");
    HyperSpaceCommand::CommandState __result = _sub_6A7F6E(this);
    return __result;
}

_extern bool _sub_6AAB51(HyperSpaceCommand *const);
_inline bool HyperSpaceCommand::isDeterministic() // 0x6AAB51
{
    mangled_assert("?isDeterministic@HyperSpaceCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AAB51(this);
    return __result;
}

_extern char const *_sub_6AAC6D(HyperSpaceCommand *const);
_inline char const *HyperSpaceCommand::saveToken() // 0x6AAC6D
{
    mangled_assert("?saveToken@HyperSpaceCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AAC6D(this);
    return __result;
}

/* ---------- private code */

#endif // __HYPERSPACECOMMAND_H__
#endif
