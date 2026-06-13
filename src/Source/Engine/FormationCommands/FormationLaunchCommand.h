#if 0
#ifndef __FORMATIONLAUNCHCOMMAND_H__
#define __FORMATIONLAUNCHCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationLaunchCommand :
    public FormationCommand
{
public:
    FormationLaunchCommand(FormationLaunchCommand const &); /* compiler_generated() */
    FormationLaunchCommand(SaveGameData *);
    FormationLaunchCommand(Formation *, Ship *, unsigned __int32);
    virtual ~FormationLaunchCommand() override;
    virtual FormationCommand::CommandResult update(float) override;
    virtual FormationCommand::FormationCommandType getType() const override;
    virtual _inline Sob *getSobToNotAvoid() const override;
    virtual _inline Sob *getSobToNotCollideWith() const override;
    _inline unsigned __int32 getCurrentLaunchPointID() const;
    enum State
    {
        Initial = 0,
        WaitingForAnimation,
        PickPoint,
        MovingToPoint,
    };
private:
    SobID m_launchFrom; // 0x10
    unsigned __int32 m_launchPathID; // 0x1C
    unsigned __int32 m_currentLaunchPointID; // 0x20
    FormationLaunchCommand::State m_movementState; // 0x24
    vector3 m_referencePosition; // 0x28
    bool GetPathPoint(Ship *, unsigned __int32, unsigned __int32, DockPathPointStatic **, DockPathPoint **);
    bool NeedsToDoPathfinding() const;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationLaunchCommand &operator=(FormationLaunchCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationLaunchCommand) == 52, "Invalid FormationLaunchCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Sob *_sub_6B1BE8(FormationLaunchCommand const *const);
_inline Sob *FormationLaunchCommand::getSobToNotAvoid() const // 0x6B1BE8
{
    mangled_assert("?getSobToNotAvoid@FormationLaunchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B1BE8(this);
    return __result;
}

_extern Sob *_sub_6B1BF0(FormationLaunchCommand const *const);
_inline Sob *FormationLaunchCommand::getSobToNotCollideWith() const // 0x6B1BF0
{
    mangled_assert("?getSobToNotCollideWith@FormationLaunchCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B1BF0(this);
    return __result;
}

_extern unsigned __int32 _sub_6A2902(FormationLaunchCommand const *const);
_inline unsigned __int32 FormationLaunchCommand::getCurrentLaunchPointID() const // 0x6A2902
{
    mangled_assert("?getCurrentLaunchPointID@FormationLaunchCommand@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_6A2902(this);
    return __result;
}

_extern bool _sub_6B1BFC(FormationLaunchCommand *const);
_inline bool FormationLaunchCommand::isDeterministic() // 0x6B1BFC
{
    mangled_assert("?isDeterministic@FormationLaunchCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6B1BFC(this);
    return __result;
}

_extern char const *_sub_6B1C98(FormationLaunchCommand *const);
_inline char const *FormationLaunchCommand::saveToken() // 0x6B1C98
{
    mangled_assert("?saveToken@FormationLaunchCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6B1C98(this);
    return __result;
}

/* ---------- private code */

#endif // __FORMATIONLAUNCHCOMMAND_H__
#endif
