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

_inline Squadron *Command::getSquadron() const // 0x61267B
{
    mangled_assert("?getSquadron@Command@@QBEPAVSquadron@@XZ");
    todo("implement");
}

_inline bool Command::allowPassiveActions() const // 0x69790B
{
    mangled_assert("?allowPassiveActions@Command@@UBE_NXZ");
    todo("implement");
}

_inline void Command::resetCommand() // 0x697E70
{
    mangled_assert("?resetCommand@Command@@UAEXXZ");
    todo("implement");
}

_inline Sob *Command::getSobToNotCollideWith() const // 0x697B73
{
    mangled_assert("?getSobToNotCollideWith@Command@@UBEPAVSob@@XZ");
    todo("implement");
}

_inline Sob *Command::getSobToNotAvoid() const // 0x697B70
{
    mangled_assert("?getSobToNotAvoid@Command@@UBEPAVSob@@XZ");
    todo("implement");
}

_inline bool Command::useAvoidance() const // 0x697EEA
{
    mangled_assert("?useAvoidance@Command@@UBE_NXZ");
    todo("implement");
}

_inline Command::CommandOrigin const Command::getCommandOrigin() const // 0x4B93C3
{
    mangled_assert("?getCommandOrigin@Command@@QBE?BW4CommandOrigin@1@XZ");
    todo("implement");
}

_inline bool Command::isDeterministic() // 0x697BE8
{
    mangled_assert("?isDeterministic@Command@@UAE_NXZ");
    todo("implement");
}

_inline char const *Command::saveToken() // 0x697EE4
{
    mangled_assert("?saveToken@Command@@UAEPBDXZ");
    todo("implement");
}

_inline BaseCommandStaticInfo::BaseCommandStaticInfo(CommandType) // 0x69807E
{
    mangled_assert("??0BaseCommandStaticInfo@@QAE@W4CommandType@@@Z");
    todo("implement");
}

_inline BaseCommandStaticInfo::~BaseCommandStaticInfo() // 0x6981B2
{
    mangled_assert("??1BaseCommandStaticInfo@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __COMMAND_H__
#endif
