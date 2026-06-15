#if 0
#ifndef __RALLYPARADECOMMAND_H__
#define __RALLYPARADECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RallyParadeCommand :
    public Command
{
public:
    RallyParadeCommand(RallyParadeCommand const &); /* compiler_generated() */
    RallyParadeCommand(SaveGameData *);
    RallyParadeCommand(Squadron *, SobID const &, Command::CommandOrigin);
    virtual ~RallyParadeCommand() override;
    virtual void cleanUpCommand() override;
    void unregisterParadeSpot();
    virtual ComResult update(float) override;
    virtual _inline CommandType getCommandType() const override;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    bool canBeInterrupted(CommandType) const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    bool inParadePosition() const;
    virtual bool allowPassiveActions() const override;
    Ship *getWhatWeAreParadingWith() const;
    virtual char const *getName() const override;
private:
    SobID m_paradeAround; // 0x14
    RallyParadeCommand::ParadeState m_paradeState; // 0x20
    bool m_initial; // 0x24
    DynamicPoint m_paradePoint; // 0x28
    vector3 m_offset; // 0xE4
    vector3 m_heading; // 0xF0
    SlotID m_slotID; // 0xFC
    enum ParadeState
    {
        PARADE_OrderGiven = 0,
        PARADE_RegisterForParade,
        PARADE_FlyToParadePosition,
    };
    void setParadeState(RallyParadeCommand::ParadeState);
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
    RallyParadeCommand &operator=(RallyParadeCommand const &); /* compiler_generated() */
};
static_assert(sizeof(RallyParadeCommand) == 264, "Invalid RallyParadeCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CommandType RallyParadeCommand::getCommandType() const // 0x6A72C7
{
    mangled_assert("?getCommandType@RallyParadeCommand@@UBE?AW4CommandType@@XZ");
    todo("implement");
}

_inline bool RallyParadeCommand::isDeterministic() // 0x6A7386
{
    mangled_assert("?isDeterministic@RallyParadeCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *RallyParadeCommand::saveToken() // 0x6A7435
{
    mangled_assert("?saveToken@RallyParadeCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __RALLYPARADECOMMAND_H__
#endif
