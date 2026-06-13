#if 0
#ifndef __FORMATIONCOMMAND_H__
#define __FORMATIONCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationCommand :
    public SaveObject
{
public:
    enum FormationCommandType
    {
        Move = 0,
        Attack,
        Dock,
        Launch,
        Latch,
        NUMBER_OF_FORMATION_COMMAND_TYPES,
    };
    enum CommandResult
    {
        StillProcessing = 0,
        Finished,
        NUMBER_OF_COMMAND_RESULTS,
    };
    FormationCommand(FormationCommand const &); /* compiler_generated() */
    FormationCommand(SaveGameData *);
    FormationCommand(Formation *);
    virtual ~FormationCommand() = 0;
    virtual _inline void emergencyCleanUp();
    virtual FormationCommand::CommandResult update(float) = 0;
    virtual FormationCommand::FormationCommandType getType() const = 0;
    virtual _inline Sob *getSobToNotAvoid() const;
    virtual _inline Sob *getSobToNotCollideWith() const;
    virtual vector3 const &getDestinationDtrm() const;
    virtual vector3 const &getDestinationVis() const;
    _inline Formation *getFormation() const;
    Squadron *getSquadron() const;
    virtual _inline bool handleMoveRequest(vector3 const &);
    virtual _inline bool canHandleMoveRequests() const;
protected:
    Formation *m_pFormation; // 0xC
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationCommand &operator=(FormationCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationCommand) == 16, "Invalid FormationCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_6B08E8(FormationCommand *const);
_inline void FormationCommand::emergencyCleanUp() // 0x6B08E8
{
    mangled_assert("?emergencyCleanUp@FormationCommand@@UAEXXZ");
    todo("implement");
    _sub_6B08E8(this);
}

_extern Sob *_sub_6B08F9(FormationCommand const *const);
_inline Sob *FormationCommand::getSobToNotAvoid() const // 0x6B08F9
{
    mangled_assert("?getSobToNotAvoid@FormationCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B08F9(this);
    return __result;
}

_extern Sob *_sub_6B08FC(FormationCommand const *const);
_inline Sob *FormationCommand::getSobToNotCollideWith() const // 0x6B08FC
{
    mangled_assert("?getSobToNotCollideWith@FormationCommand@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_6B08FC(this);
    return __result;
}

_extern Formation *_sub_69E265(FormationCommand const *const);
_inline Formation *FormationCommand::getFormation() const // 0x69E265
{
    mangled_assert("?getFormation@FormationCommand@@QBEPAVFormation@@XZ");
    todo("implement");
    Formation * __result = _sub_69E265(this);
    return __result;
}

_extern bool _sub_69E2F3(FormationCommand *const, vector3 const &);
_inline bool FormationCommand::handleMoveRequest(vector3 const &) // 0x69E2F3
{
    mangled_assert("?handleMoveRequest@FormationCommand@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_69E2F3(this, arg);
    return __result;
}

_extern bool _sub_69DD0F(FormationCommand const *const);
_inline bool FormationCommand::canHandleMoveRequests() const // 0x69DD0F
{
    mangled_assert("?canHandleMoveRequests@FormationCommand@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_69DD0F(this);
    return __result;
}

_extern bool _sub_6BB24D(FormationCommand *const);
_inline bool FormationCommand::isDeterministic() // 0x6BB24D
{
    mangled_assert("?isDeterministic@FormationCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6BB24D(this);
    return __result;
}

_extern char const *_sub_6BB2C4(FormationCommand *const);
_inline char const *FormationCommand::saveToken() // 0x6BB2C4
{
    mangled_assert("?saveToken@FormationCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6BB2C4(this);
    return __result;
}

/* ---------- private code */

#endif // __FORMATIONCOMMAND_H__
#endif
