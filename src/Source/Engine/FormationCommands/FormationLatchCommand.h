#if 0
#ifndef __FORMATIONLATCHCOMMAND_H__
#define __FORMATIONLATCHCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FormationLatchCommand :
    public FormationCommand
{
public:
    FormationLatchCommand(FormationLatchCommand const &); /* compiler_generated() */
    FormationLatchCommand(SaveGameData *);
    FormationLatchCommand(Formation *, SobID const &, vector3 const &, matrix3 const &, bool);
    virtual ~FormationLatchCommand() override;
    virtual void emergencyCleanUp() override;
    virtual Sob *getSobToNotAvoid() const override;
    virtual Sob *getSobToNotCollideWith() const override;
    Sob *getSobTarget() const;
    virtual FormationCommand::CommandResult update(float) override;
    virtual FormationCommand::FormationCommandType getType() const override;
    bool isLatched() const;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
private:
    void flyToAboveLatchPoint(SobWithMesh *);
    void flyDownToLatchPoint(SobWithMesh *);
    void latch(SobWithMesh *);
    vector3 const &getShipOffset(Ship const *) const;
    matrix3 const &getShipRotation(Ship const *) const;
    SobID m_latchWith; // 0x10
    vector3 m_latchPointInBS; // 0x1C
    matrix3 m_latchRotationInBS; // 0x28
    bool m_salvage; // 0x4C
    FormationLatchCommand::State m_State; // 0x50
    enum State
    {
        Start = 0,
        FlyingToAboveLatchPoint,
        FlyingDownToLatchPoint,
        Latched,
    };
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    FormationLatchCommand &operator=(FormationLatchCommand const &); /* compiler_generated() */
};
static_assert(sizeof(FormationLatchCommand) == 84, "Invalid FormationLatchCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FormationLatchCommand::isDeterministic() // 0x69E2F8
{
    mangled_assert("?isDeterministic@FormationLatchCommand@@UAE_NXZ");
    todo("implement");
}

_inline char const *FormationLatchCommand::saveToken() // 0x69E4B0
{
    mangled_assert("?saveToken@FormationLatchCommand@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FORMATIONLATCHCOMMAND_H__
#endif
