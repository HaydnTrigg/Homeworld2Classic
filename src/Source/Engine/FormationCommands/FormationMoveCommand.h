#if 0
#ifndef __FORMATIONMOVECOMMAND_H__
#define __FORMATIONMOVECOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationMoveCommand :
    public FormationCommand
{
public:
    FormationMoveCommand(FormationMoveCommand const &); /* compiler_generated() */
    FormationMoveCommand(SaveGameData *);
    FormationMoveCommand(Formation *, FormationTargetInfo const &);
    virtual ~FormationMoveCommand() override;
    virtual FormationCommand::CommandResult update(float) override;
    virtual FormationCommand::FormationCommandType getType() const override;
    virtual _inline vector3 const &getDestinationDtrm() const override;
    virtual _inline vector3 const &getDestinationVis() const override;
private:
    void journeyAnimation(bool);
    bool CanRetaliate() const;
    Selection m_Targets; // 0x10
    DynamicPoint m_destination; // 0x44
    bool m_flyingNormally; // 0x100
    bool m_useHeading; // 0x101
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationMoveCommand &operator=(FormationMoveCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationMoveCommand) == 260, "Invalid FormationMoveCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &FormationMoveCommand::getDestinationDtrm() const // 0x6B08E9
{
    mangled_assert("?getDestinationDtrm@FormationMoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

_inline vector3 const &FormationMoveCommand::getDestinationVis() const // 0x6B08F1
{
    mangled_assert("?getDestinationVis@FormationMoveCommand@@UBEABVvector3@@XZ");
    todo("implement");
}

_inline bool FormationMoveCommand::isDeterministic() // 0x6B0902
{
    mangled_assert("?isDeterministic@FormationMoveCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormationMoveCommand::saveToken() // 0x6B09EE
{
    mangled_assert("?saveToken@FormationMoveCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONMOVECOMMAND_H__
#endif
