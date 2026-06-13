#if 0
#ifndef __GUARDCOMMAND_H__
#define __GUARDCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class GuardCommand :
    public TrailTargetCommand
{
public:
    GuardCommand(GuardCommand const &); /* compiler_generated() */
    GuardCommand(SaveGameData *);
    GuardCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
    virtual ~GuardCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    _inline Selection const &getGuardTargets() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline SobID const &getCurrentTarget() const;
    virtual char const *getName() const override;
protected:
    virtual Sob *getTarget() override;
    virtual float getDesiredDistance() override;
private:
    void getTargets(Selection &);
    bool checkAttack();
    Selection m_sobsToGuard; // 0x28
    SobID m_GuardTarget; // 0x5C
    GuardCommand::GuardState m_State; // 0x68
    enum GuardState
    {
        Moving = 0,
        Attacking,
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
    GuardCommand &operator=(GuardCommand const &); /* compiler_generated() */
};
static_assert(sizeof(GuardCommand) == 108, "Invalid GuardCommand size");

class GuardCommand :
    public TrailTargetCommand
{
public:
    GuardCommand(GuardCommand const &); /* compiler_generated() */
    GuardCommand(SaveGameData *);
    GuardCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
    virtual ~GuardCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    _inline Selection const &getGuardTargets() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline SobID const &getCurrentTarget() const;
    virtual char const *getName() const override;
protected:
    virtual Sob *getTarget() override;
    virtual float getDesiredDistance() override;
private:
    void getTargets(Selection &);
    bool checkAttack();
    Selection m_sobsToGuard; // 0x28
    SobID m_GuardTarget; // 0x5C
    GuardCommand::GuardState m_State; // 0x68
    enum GuardState
    {
        Moving = 0,
        Attacking,
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
    GuardCommand &operator=(GuardCommand const &); /* compiler_generated() */
};
static_assert(sizeof(GuardCommand) == 108, "Invalid GuardCommand size");

class GuardCommand :
    public TrailTargetCommand
{
public:
    GuardCommand(GuardCommand const &); /* compiler_generated() */
    GuardCommand(SaveGameData *);
    GuardCommand(Squadron *, Selection const &, Command::CommandOrigin, vector3 const &);
    virtual ~GuardCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual void cleanUpCommand() override;
    virtual void resetCommand() override;
    _inline Selection const &getGuardTargets() const;
    virtual bool canBeInterrupted(CommandType, Command *) override;
    static Sob *getBestTarget(Squadron const *squad, Selection const &targets);
    _inline SobID const &getCurrentTarget() const;
    virtual char const *getName() const override;
protected:
    virtual Sob *getTarget() override;
    virtual float getDesiredDistance() override;
private:
    void getTargets(Selection &);
    bool checkAttack();
    Selection m_sobsToGuard; // 0x28
    SobID m_GuardTarget; // 0x5C
    GuardCommand::GuardState m_State; // 0x68
    enum GuardState
    {
        Moving = 0,
        Attacking,
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
    GuardCommand &operator=(GuardCommand const &); /* compiler_generated() */
};
static_assert(sizeof(GuardCommand) == 108, "Invalid GuardCommand size");

class GuardCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    GuardCommandStaticInfo(GuardCommandStaticInfo const &); /* compiler_generated() */
    GuardCommandStaticInfo(ShipStatic *);
    float m_guardRadius; // 0x8
    float m_guardSeparation; // 0xC
    virtual ~GuardCommandStaticInfo() override;
    GuardCommandStaticInfo &operator=(GuardCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(GuardCommandStaticInfo) == 16, "Invalid GuardCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Selection const &_sub_71CBC2(GuardCommand const *const);
_inline Selection const &GuardCommand::getGuardTargets() const // 0x71CBC2
{
    mangled_assert("?getGuardTargets@GuardCommand@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_71CBC2(this);
    return __result;
}

_extern SobID const &_sub_69A198(GuardCommand const *const);
_inline SobID const &GuardCommand::getCurrentTarget() const // 0x69A198
{
    mangled_assert("?getCurrentTarget@GuardCommand@@QBEABVSobID@@XZ");
    todo("implement");
    SobID const & __result = _sub_69A198(this);
    return __result;
}

_extern bool _sub_6A98C1(GuardCommand *const);
_inline bool GuardCommand::isDeterministic() // 0x6A98C1
{
    mangled_assert("?isDeterministic@GuardCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6A98C1(this);
    return __result;
}

_extern char const *_sub_6A99BB(GuardCommand *const);
_inline char const *GuardCommand::saveToken() // 0x6A99BB
{
    mangled_assert("?saveToken@GuardCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6A99BB(this);
    return __result;
}

/* ---------- private code */

#endif // __GUARDCOMMAND_H__
#endif
