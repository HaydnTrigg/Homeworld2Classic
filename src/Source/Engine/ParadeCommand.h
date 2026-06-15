#if 0
#ifndef __PARADECOMMAND_H__
#define __PARADECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ParadeCommand :
    public Command
{
public:
    enum ParadeMode
    {
        Normal = 0,
        InstantWithHyperspace,
        Instant,
    };
    ParadeCommand(ParadeCommand const &); /* compiler_generated() */
    ParadeCommand(SaveGameData *);
    ParadeCommand(Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin);
    virtual ~ParadeCommand() override;
    virtual void cleanUpCommand() override;
    virtual ComResult update(float) override;
    virtual _inline CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    bool canBeInterrupted(CommandType) const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    static Ship *getClosestShipToParadeWith(Ship *ship);
    bool inParadePosition() const;
    virtual bool allowPassiveActions() const override;
    Ship *getWhatWeAreParadingWith() const;
    virtual char const *getName() const override;
private:
    bool warpToParadeSpot(ParadeCommand::ParadeMode);
    SobID m_paradeAround; // 0x14
    ParadeCommand::ParadeState m_paradeState; // 0x20
    bool m_initial; // 0x24
    DynamicPoint m_paradePoint; // 0x28
    vector3 m_offset; // 0xE4
    vector3 m_heading; // 0xF0
    SlotID m_slotID; // 0xFC
    ParadeCommand::ParadeMode m_paradeMode; // 0x108
    enum ParadeState
    {
        PARADE_OrderGiven = 0,
        PARADE_RegisterForParade,
        PARADE_FlyToParadePosition,
    };
    void setParadeState(ParadeCommand::ParadeState);
    bool OrderGiven();
    bool RegisterForParade();
    bool FlyToParadePosition();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ParadeCommand &operator=(ParadeCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeCommand) == 268, "Invalid ParadeCommand size");

class ParadeCommand :
    public Command
{
public:
    enum ParadeMode
    {
        Normal = 0,
        InstantWithHyperspace,
        Instant,
    };
    ParadeCommand(ParadeCommand const &); /* compiler_generated() */
    ParadeCommand(SaveGameData *);
    ParadeCommand(Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin);
    virtual ~ParadeCommand() override;
    virtual void cleanUpCommand() override;
    virtual ComResult update(float) override;
    virtual _inline CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    bool canBeInterrupted(CommandType) const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    static Ship *getClosestShipToParadeWith(Ship *ship);
    bool inParadePosition() const;
    virtual bool allowPassiveActions() const override;
    Ship *getWhatWeAreParadingWith() const;
    virtual char const *getName() const override;
private:
    bool warpToParadeSpot(ParadeCommand::ParadeMode);
    SobID m_paradeAround; // 0x14
    ParadeCommand::ParadeState m_paradeState; // 0x20
    bool m_initial; // 0x24
    DynamicPoint m_paradePoint; // 0x28
    vector3 m_offset; // 0xE4
    vector3 m_heading; // 0xF0
    SlotID m_slotID; // 0xFC
    ParadeCommand::ParadeMode m_paradeMode; // 0x108
    enum ParadeState
    {
        PARADE_OrderGiven = 0,
        PARADE_RegisterForParade,
        PARADE_FlyToParadePosition,
    };
    void setParadeState(ParadeCommand::ParadeState);
    bool OrderGiven();
    bool RegisterForParade();
    bool FlyToParadePosition();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ParadeCommand &operator=(ParadeCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeCommand) == 268, "Invalid ParadeCommand size");

class ParadeCommand :
    public Command
{
public:
    enum ParadeMode
    {
        Normal = 0,
        InstantWithHyperspace,
        Instant,
    };
    ParadeCommand(ParadeCommand const &); /* compiler_generated() */
    ParadeCommand(SaveGameData *);
    ParadeCommand(Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin);
    virtual ~ParadeCommand() override;
    virtual void cleanUpCommand() override;
    virtual ComResult update(float) override;
    virtual _inline CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    bool canBeInterrupted(CommandType) const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    static Ship *getClosestShipToParadeWith(Ship *ship);
    bool inParadePosition() const;
    virtual bool allowPassiveActions() const override;
    Ship *getWhatWeAreParadingWith() const;
    virtual char const *getName() const override;
private:
    bool warpToParadeSpot(ParadeCommand::ParadeMode);
    SobID m_paradeAround; // 0x14
    ParadeCommand::ParadeState m_paradeState; // 0x20
    bool m_initial; // 0x24
    DynamicPoint m_paradePoint; // 0x28
    vector3 m_offset; // 0xE4
    vector3 m_heading; // 0xF0
    SlotID m_slotID; // 0xFC
    ParadeCommand::ParadeMode m_paradeMode; // 0x108
    enum ParadeState
    {
        PARADE_OrderGiven = 0,
        PARADE_RegisterForParade,
        PARADE_FlyToParadePosition,
    };
    void setParadeState(ParadeCommand::ParadeState);
    bool OrderGiven();
    bool RegisterForParade();
    bool FlyToParadePosition();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ParadeCommand &operator=(ParadeCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeCommand) == 268, "Invalid ParadeCommand size");

class ParadeCommand :
    public Command
{
public:
    enum ParadeMode
    {
        Normal = 0,
        InstantWithHyperspace,
        Instant,
    };
    ParadeCommand(ParadeCommand const &); /* compiler_generated() */
    ParadeCommand(SaveGameData *);
    ParadeCommand(Squadron *, SobID const &, ParadeCommand::ParadeMode, Command::CommandOrigin);
    virtual ~ParadeCommand() override;
    virtual void cleanUpCommand() override;
    virtual ComResult update(float) override;
    virtual _inline CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    bool canBeInterrupted(CommandType) const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    static Ship *getClosestShipToParadeWith(Ship *ship);
    bool inParadePosition() const;
    virtual bool allowPassiveActions() const override;
    Ship *getWhatWeAreParadingWith() const;
    virtual char const *getName() const override;
private:
    bool warpToParadeSpot(ParadeCommand::ParadeMode);
    SobID m_paradeAround; // 0x14
    ParadeCommand::ParadeState m_paradeState; // 0x20
    bool m_initial; // 0x24
    DynamicPoint m_paradePoint; // 0x28
    vector3 m_offset; // 0xE4
    vector3 m_heading; // 0xF0
    SlotID m_slotID; // 0xFC
    ParadeCommand::ParadeMode m_paradeMode; // 0x108
    enum ParadeState
    {
        PARADE_OrderGiven = 0,
        PARADE_RegisterForParade,
        PARADE_FlyToParadePosition,
    };
    void setParadeState(ParadeCommand::ParadeState);
    bool OrderGiven();
    bool RegisterForParade();
    bool FlyToParadePosition();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    ParadeCommand &operator=(ParadeCommand const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeCommand) == 268, "Invalid ParadeCommand size");

class ParadeCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    ParadeCommandStaticInfo(ParadeCommandStaticInfo const &); /* compiler_generated() */
    ParadeCommandStaticInfo();
    virtual ~ParadeCommandStaticInfo() override;
    ParadeCommandStaticInfo &operator=(ParadeCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(ParadeCommandStaticInfo) == 8, "Invalid ParadeCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CommandType ParadeCommand::getCommandType() const // 0x6A7EFB
{
    mangled_assert("?getCommandType@ParadeCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

_inline bool ParadeCommand::isDeterministic() // 0x6A7FB2
{
    mangled_assert("?isDeterministic@ParadeCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *ParadeCommand::saveToken() // 0x6A804E
{
    mangled_assert("?saveToken@ParadeCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PARADECOMMAND_H__
#endif
