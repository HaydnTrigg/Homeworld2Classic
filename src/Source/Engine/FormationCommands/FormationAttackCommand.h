#if 0
#ifndef __FORMATIONATTACKCOMMAND_H__
#define __FORMATIONATTACKCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationAttackCommand :
    public FormationCommand
{
public:
    FormationAttackCommand(FormationAttackCommand const &); /* compiler_generated() */
    FormationAttackCommand(SaveGameData *);
    FormationAttackCommand(Formation *, Selection const &);
    virtual ~FormationAttackCommand() override;
    virtual FormationCommand::CommandResult update(float) override;
    Selection &getTargets();
    virtual FormationCommand::FormationCommandType getType() const override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    Sob *getTargetNonDeterministicSafe() const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual bool handleMoveRequest(vector3 const &) override;
    virtual bool canHandleMoveRequests() const override;
    bool handleNewTargets(Selection const &);
    _inline bool firstUpdate() const;
private:
    Selection m_targetList; // 0x10
    AttackStyle *m_pAttackStyle; // 0x44
    bool m_firstTime; // 0x48
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationAttackCommand &operator=(FormationAttackCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationAttackCommand) == 76, "Invalid FormationAttackCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FormationAttackCommand::firstUpdate() const // 0x6B554E
{
    mangled_assert("?firstUpdate@FormationAttackCommand@@QBE_NXZ");
    todo("implement");
}

_inline bool FormationAttackCommand::isDeterministic() // 0x6B0FC8
{
    mangled_assert("?isDeterministic@FormationAttackCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormationAttackCommand::saveToken() // 0x6B1064
{
    mangled_assert("?saveToken@FormationAttackCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONATTACKCOMMAND_H__
#endif
