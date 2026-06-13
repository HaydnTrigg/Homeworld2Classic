#if 0
#ifndef __TRAILTARGETCOMMAND_H__
#define __TRAILTARGETCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TrailTargetCommand :
    public Command
{
public:
    TrailTargetCommand(TrailTargetCommand const &); /* compiler_generated() */
    TrailTargetCommand(SaveGameData *);
    TrailTargetCommand(Squadron *, Command::CommandOrigin, vector3 const &);
    virtual ~TrailTargetCommand() override;
protected:
    virtual Sob *getTarget() = 0;
    virtual float getDesiredDistance() = 0;
    void trailTarget();
private:
    bool targetMovingRelativeToUs(Sob const *);
    void moveToAndMaintain(Sob *);
    void moveTo(Sob *);
    vector3 m_wsOffsetFromTarget; // 0x14
    unsigned __int32 m_timeForAvoidanceToWork; // 0x20
    TrailTargetCommand::TrailState m_movementState; // 0x24
    enum TrailState
    {
        FirstTime = 0,
        Initial,
        MovingUpClose,
        MovingFromFar,
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
    TrailTargetCommand &operator=(TrailTargetCommand const &); /* compiler_generated() */
};
static_assert(sizeof(TrailTargetCommand) == 40, "Invalid TrailTargetCommand size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6BCE1C(TrailTargetCommand *const);
_inline bool TrailTargetCommand::isDeterministic() // 0x6BCE1C
{
    mangled_assert("?isDeterministic@TrailTargetCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6BCE1C(this);
    return __result;
}

_extern char const *_sub_6BD078(TrailTargetCommand *const);
_inline char const *TrailTargetCommand::saveToken() // 0x6BD078
{
    mangled_assert("?saveToken@TrailTargetCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6BD078(this);
    return __result;
}

/* ---------- private code */

#endif // __TRAILTARGETCOMMAND_H__
#endif
