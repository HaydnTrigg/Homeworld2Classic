#if 0
#ifndef __SAVEGAME_H__
#define __SAVEGAME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SaveGameResult
{
    SAVE_Worked = 0,
    SAVE_Failed,
};

enum LoadGameResult
{
    LOAD_Worked = 0,
    LOAD_Failed,
};

/* ---------- definitions */

class GameIO
{
public:
    enum IO_Type
    {
        IO_Deterministic = 0,
        IO_FullSaveLoad,
    };
private:
    _inline GameIO();
    _inline ~GameIO();
public:
    static GameIO *i();
    static bool startup();
    static bool shutdown();
    static bool pregame();
    static bool postgame();
    SaveGameResult saveGame(char const *, SaveType);
    LoadGameResult loadGame(char const *);
    bool saveGameIsSaving();
    bool loadGameIsLoadingInGame();
    bool loadGameIsLoading();
    void setLoadingInGame(bool);
    void setLoadingGame(bool);
    bool generateSaveGame(SaveGameData *, SaveType);
    static bool createIDMap(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreIDMap(SaveGameData *saveGameData);
    static bool saveObjectDatabase(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreObjectDatabase(SaveGameData *saveGameData);
private:
    bool m_bSavingGame; // 0x0
    bool m_bLoadingGame; // 0x1
    bool m_bLoadingInGame; // 0x2
};
static_assert(sizeof(GameIO) == 3, "Invalid GameIO size");

class GameIO
{
public:
    enum IO_Type
    {
        IO_Deterministic = 0,
        IO_FullSaveLoad,
    };
private:
    _inline GameIO();
    _inline ~GameIO();
public:
    static GameIO *i();
    static bool startup();
    static bool shutdown();
    static bool pregame();
    static bool postgame();
    SaveGameResult saveGame(char const *, SaveType);
    LoadGameResult loadGame(char const *);
    bool saveGameIsSaving();
    bool loadGameIsLoadingInGame();
    bool loadGameIsLoading();
    void setLoadingInGame(bool);
    void setLoadingGame(bool);
    bool generateSaveGame(SaveGameData *, SaveType);
    static bool createIDMap(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreIDMap(SaveGameData *saveGameData);
    static bool saveObjectDatabase(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreObjectDatabase(SaveGameData *saveGameData);
private:
    bool m_bSavingGame; // 0x0
    bool m_bLoadingGame; // 0x1
    bool m_bLoadingInGame; // 0x2
};
static_assert(sizeof(GameIO) == 3, "Invalid GameIO size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6271AF(GameIO *const);
_inline GameIO::GameIO() // 0x6271AF
{
    mangled_assert("??0GameIO@@AAE@XZ");
    todo("implement");
    _sub_6271AF(this);
}

_extern void _sub_62723A(GameIO *const);
_inline GameIO::~GameIO() // 0x62723A
{
    mangled_assert("??1GameIO@@AAE@XZ");
    todo("implement");
    _sub_62723A(this);
}

/* ---------- private code */

#endif // __SAVEGAME_H__
#endif
