#if 0
#ifndef __FORMATIONDOCKCOMMAND_H__
#define __FORMATIONDOCKCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationDockCommand :
    public FormationCommand
{
public:
    FormationDockCommand(FormationDockCommand const &); /* compiler_generated() */
    FormationDockCommand(SaveGameData *);
    FormationDockCommand(Formation *, Ship *, unsigned __int32);
    virtual ~FormationDockCommand() override;
    virtual FormationCommand::CommandResult update(float) override;
    virtual FormationCommand::FormationCommandType getType() const override;
    virtual _inline Sob *getSobToNotAvoid() const override;
    virtual _inline Sob *getSobToNotCollideWith() const override;
    _inline Ship *getDockWith() const;
    _inline unsigned __int32 getCurrentPoint() const;
    enum State
    {
        PickPoint = 0,
        MoveToPoint,
        WaitForAnimationToFinish,
    };
private:
    SobID m_dockWith; // 0x10
    unsigned __int32 m_dockPathID; // 0x1C
    unsigned __int32 m_currentDockPointID; // 0x20
    FormationDockCommand::State m_movementState; // 0x24
    vector3 m_referencePosition; // 0x28
    void GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    void putFormationInsideDockShip();
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationDockCommand &operator=(FormationDockCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationDockCommand) == 52, "Invalid FormationDockCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Sob *FormationDockCommand::getSobToNotAvoid() const // 0x6B1269
{
    mangled_assert("?getSobToNotAvoid@FormationDockCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

_inline Sob *FormationDockCommand::getSobToNotCollideWith() const // 0x6B1271
{
    mangled_assert("?getSobToNotCollideWith@FormationDockCommand@@UBEPAVSob@@XZ");
    todo("implement");
}

_inline Ship *FormationDockCommand::getDockWith() const // 0x4E46A4
{
    mangled_assert("?getDockWith@FormationDockCommand@@QBEPAVShip@@XZ");
    todo("implement");
}

_inline unsigned __int32 FormationDockCommand::getCurrentPoint() const // 0x69A194
{
    mangled_assert("?getCurrentPoint@FormationDockCommand@@QBEIXZ");
    todo("implement");
}

_inline bool FormationDockCommand::isDeterministic() // 0x6B127D
{
    mangled_assert("?isDeterministic@FormationDockCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormationDockCommand::saveToken() // 0x6B145F
{
    mangled_assert("?saveToken@FormationDockCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONDOCKCOMMAND_H__
#endif
