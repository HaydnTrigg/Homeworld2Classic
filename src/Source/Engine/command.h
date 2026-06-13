#if 0
#ifndef __COMMAND_H__
#define __COMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ComResult
{
    CR_Done = 0,
    CR_Processing,
};

/* ---------- definitions */

class Command :
    public SaveObject
{
public:
    enum CommandOrigin
    {
        playerOrdered = 0,
        gameLogic,
        scripting,
    };
    Command(Command const &); /* compiler_generated() */
    Command(SaveGameData *);
    Command(Squadron *, Command::CommandOrigin);
    virtual ~Command() = 0;
    virtual void cleanUpCommand();
    virtual void emergencyCleanUp();
    virtual ComResult update(float) = 0;
    _inline Squadron *getSquadron() const;
    virtual bool canBeInterrupted(CommandType, Command *) = 0;
    virtual _inline bool allowPassiveActions() const;
    virtual CommandType getCommandType() const = 0;
    virtual _inline void resetCommand();
    virtual _inline Sob *getSobToNotCollideWith() const;
    virtual _inline Sob *getSobToNotAvoid() const;
    virtual _inline bool useAvoidance() const;
    virtual vector3 const &getDestinationDtrm() const;
    virtual vector3 const &getDestinationVis() const;
    unsigned __int32 getPlayerIndex() const;
    _inline Command::CommandOrigin const getCommandOrigin() const;
    bool handleMoveRequest(vector3 const &);
    bool canHandleMoveRequests() const;
    virtual WeaponActivate getWeaponActivation() const;
    virtual char const *getName() const = 0;
protected:
    BaseCommandStaticInfo *getStaticInfo() const;
    Command::CommandOrigin m_commandOrigin; // 0xC
private:
    Squadron *m_pSquadron; // 0x10
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Command &operator=(Command const &); /* compiler_generated() */
};
static_assert(sizeof(Command) == 20, "Invalid Command size");

class Command :
    public SaveObject
{
public:
    enum CommandOrigin
    {
        playerOrdered = 0,
        gameLogic,
        scripting,
    };
    Command(Command const &); /* compiler_generated() */
    Command(SaveGameData *);
    Command(Squadron *, Command::CommandOrigin);
    virtual ~Command() = 0;
    virtual void cleanUpCommand();
    virtual void emergencyCleanUp();
    virtual ComResult update(float) = 0;
    _inline Squadron *getSquadron() const;
    virtual bool canBeInterrupted(CommandType, Command *) = 0;
    virtual _inline bool allowPassiveActions() const;
    virtual CommandType getCommandType() const = 0;
    virtual _inline void resetCommand();
    virtual _inline Sob *getSobToNotCollideWith() const;
    virtual _inline Sob *getSobToNotAvoid() const;
    virtual _inline bool useAvoidance() const;
    virtual vector3 const &getDestinationDtrm() const;
    virtual vector3 const &getDestinationVis() const;
    unsigned __int32 getPlayerIndex() const;
    _inline Command::CommandOrigin const getCommandOrigin() const;
    bool handleMoveRequest(vector3 const &);
    bool canHandleMoveRequests() const;
    virtual WeaponActivate getWeaponActivation() const;
    virtual char const *getName() const = 0;
protected:
    BaseCommandStaticInfo *getStaticInfo() const;
    Command::CommandOrigin m_commandOrigin; // 0xC
private:
    Squadron *m_pSquadron; // 0x10
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Command &operator=(Command const &); /* compiler_generated() */
};
static_assert(sizeof(Command) == 20, "Invalid Command size");

class Command :
    public SaveObject
{
public:
    enum CommandOrigin
    {
        playerOrdered = 0,
        gameLogic,
        scripting,
    };
    Command(Command const &); /* compiler_generated() */
    Command(SaveGameData *);
    Command(Squadron *, Command::CommandOrigin);
    virtual ~Command() = 0;
    virtual void cleanUpCommand();
    virtual void emergencyCleanUp();
    virtual ComResult update(float) = 0;
    _inline Squadron *getSquadron() const;
    virtual bool canBeInterrupted(CommandType, Command *) = 0;
    virtual _inline bool allowPassiveActions() const;
    virtual CommandType getCommandType() const = 0;
    virtual _inline void resetCommand();
    virtual _inline Sob *getSobToNotCollideWith() const;
    virtual _inline Sob *getSobToNotAvoid() const;
    virtual _inline bool useAvoidance() const;
    virtual vector3 const &getDestinationDtrm() const;
    virtual vector3 const &getDestinationVis() const;
    unsigned __int32 getPlayerIndex() const;
    _inline Command::CommandOrigin const getCommandOrigin() const;
    bool handleMoveRequest(vector3 const &);
    bool canHandleMoveRequests() const;
    virtual WeaponActivate getWeaponActivation() const;
    virtual char const *getName() const = 0;
protected:
    BaseCommandStaticInfo *getStaticInfo() const;
    Command::CommandOrigin m_commandOrigin; // 0xC
private:
    Squadron *m_pSquadron; // 0x10
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Command &operator=(Command const &); /* compiler_generated() */
};
static_assert(sizeof(Command) == 20, "Invalid Command size");

class Command :
    public SaveObject
{
public:
    enum CommandOrigin
    {
        playerOrdered = 0,
        gameLogic,
        scripting,
    };
    Command(Command const &); /* compiler_generated() */
    Command(SaveGameData *);
    Command(Squadron *, Command::CommandOrigin);
    virtual ~Command() = 0;
    virtual void cleanUpCommand();
    virtual void emergencyCleanUp();
    virtual ComResult update(float) = 0;
    _inline Squadron *getSquadron() const;
    virtual bool canBeInterrupted(CommandType, Command *) = 0;
    virtual _inline bool allowPassiveActions() const;
    virtual CommandType getCommandType() const = 0;
    virtual _inline void resetCommand();
    virtual _inline Sob *getSobToNotCollideWith() const;
    virtual _inline Sob *getSobToNotAvoid() const;
    virtual _inline bool useAvoidance() const;
    virtual vector3 const &getDestinationDtrm() const;
    virtual vector3 const &getDestinationVis() const;
    unsigned __int32 getPlayerIndex() const;
    _inline Command::CommandOrigin const getCommandOrigin() const;
    bool handleMoveRequest(vector3 const &);
    bool canHandleMoveRequests() const;
    virtual WeaponActivate getWeaponActivation() const;
    virtual char const *getName() const = 0;
protected:
    BaseCommandStaticInfo *getStaticInfo() const;
    Command::CommandOrigin m_commandOrigin; // 0xC
private:
    Squadron *m_pSquadron; // 0x10
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    Command &operator=(Command const &); /* compiler_generated() */
};
static_assert(sizeof(Command) == 20, "Invalid Command size");

class BaseCommandStaticInfo
{
public:
    BaseCommandStaticInfo(BaseCommandStaticInfo const &); /* compiler_generated() */
    _inline BaseCommandStaticInfo(CommandType);
    virtual _inline ~BaseCommandStaticInfo();
protected:
    CommandType m_commandType; // 0x4
public:
    BaseCommandStaticInfo &operator=(BaseCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(BaseCommandStaticInfo) == 8, "Invalid BaseCommandStaticInfo size");

class BaseCommandStaticInfo
{
public:
    BaseCommandStaticInfo(BaseCommandStaticInfo const &); /* compiler_generated() */
    _inline BaseCommandStaticInfo(CommandType);
    virtual _inline ~BaseCommandStaticInfo();
protected:
    CommandType m_commandType; // 0x4
public:
    BaseCommandStaticInfo &operator=(BaseCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(BaseCommandStaticInfo) == 8, "Invalid BaseCommandStaticInfo size");

class BaseCommandStaticInfo
{
public:
    BaseCommandStaticInfo(BaseCommandStaticInfo const &); /* compiler_generated() */
    _inline BaseCommandStaticInfo(CommandType);
    virtual _inline ~BaseCommandStaticInfo();
protected:
    CommandType m_commandType; // 0x4
public:
    BaseCommandStaticInfo &operator=(BaseCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(BaseCommandStaticInfo) == 8, "Invalid BaseCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Squadron *_sub_61267B(Command const *const);
_inline Squadron *Command::getSquadron() const // 0x61267B
{
    mangled_assert("?getSquadron@Command@@QBEPAVSquadron@@XZ");
    todo("implement");
    Squadron * __result = _sub_61267B(this);
    return __result;
}

_extern bool _sub_69790B(Command const *const);
_inline bool Command::allowPassiveActions() const // 0x69790B
{
    mangled_assert("?allowPassiveActions@Command@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_69790B(this);
    return __result;
}

_extern void _sub_697E70(Command *const);
_inline void Command::resetCommand() // 0x697E70
{
    mangled_assert("?resetCommand@Command@@UAEXXZ");
    todo("implement");
    _sub_697E70(this);
}

_extern Sob *_sub_697B73(Command const *const);
_inline Sob *Command::getSobToNotCollideWith() const // 0x697B73
{
    mangled_assert("?getSobToNotCollideWith@Command@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_697B73(this);
    return __result;
}

_extern Sob *_sub_697B70(Command const *const);
_inline Sob *Command::getSobToNotAvoid() const // 0x697B70
{
    mangled_assert("?getSobToNotAvoid@Command@@UBEPAVSob@@XZ");
    todo("implement");
    Sob * __result = _sub_697B70(this);
    return __result;
}

_extern bool _sub_697EEA(Command const *const);
_inline bool Command::useAvoidance() const // 0x697EEA
{
    mangled_assert("?useAvoidance@Command@@UBE_NXZ");
    todo("implement");
    bool __result = _sub_697EEA(this);
    return __result;
}

_extern Command::CommandOrigin const _sub_4B93C3(Command const *const);
_inline Command::CommandOrigin const Command::getCommandOrigin() const // 0x4B93C3
{
    mangled_assert("?getCommandOrigin@Command@@QBE?BW4CommandOrigin@1@XZ");
    todo("implement");
    Command::CommandOrigin const __result = _sub_4B93C3(this);
    return __result;
}

_extern bool _sub_697BE8(Command *const);
_inline bool Command::isDeterministic() // 0x697BE8
{
    mangled_assert("?isDeterministic@Command@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_697BE8(this);
    return __result;
}

_extern char const *_sub_697EE4(Command *const);
_inline char const *Command::saveToken() // 0x697EE4
{
    mangled_assert("?saveToken@Command@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_697EE4(this);
    return __result;
}

_extern _sub_69807E(BaseCommandStaticInfo *const, CommandType);
_inline BaseCommandStaticInfo::BaseCommandStaticInfo(CommandType) // 0x69807E
{
    mangled_assert("??0BaseCommandStaticInfo@@QAE@W4CommandType@@@Z");
    todo("implement");
    _sub_69807E(this, arg);
}

_extern void _sub_6981B2(BaseCommandStaticInfo *const);
_inline BaseCommandStaticInfo::~BaseCommandStaticInfo() // 0x6981B2
{
    mangled_assert("??1BaseCommandStaticInfo@@UAE@XZ");
    todo("implement");
    _sub_6981B2(this);
}

/* ---------- private code */

#endif // __COMMAND_H__
#endif
