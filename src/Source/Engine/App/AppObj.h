#if 0
#ifndef __APPOBJ_H__
#define __APPOBJ_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildInfo
{
public:
    BuildInfo();
    char *m_buildName; // 0x0
    char *m_builder; // 0x4
    char m_dataPath[260]; // 0x8
};
static_assert(sizeof(BuildInfo) == 268, "Invalid BuildInfo size");

class AppObj :
    public AppInterface
{
public:
    AppObj(AppObj const &); /* compiler_generated() */
private:
    AppObj();
    virtual ~AppObj() override;
    enum RequestType
    {
        RT_None = 0,
        RT_AppStart,
        RT_StartGame,
        RT_StartReplay,
        RT_LoadGame,
        RT_ExitGame,
        RT_AppRestart,
    };
public:
    static AppObj *Instance();
    static bool Initialize();
    static bool Shutdown();
    virtual char const *Run() override;
    void SetupSystems();
    void CleanupSystems();
    void Setup();
    void Cleanup();
    void Quit();
    void SaveGame(char const *);
    void Request(AppObj::RequestType, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void Request(AppObj::RequestType);
    Campaign *GetCampaign();
    BuildInfo *GetBuildInfo();
    LuaConfig &GetGlobalLuaState();
    ConfigFile *GetConfigFileSystem();
    ConfigFile *GetConfigFileLocal();
    StatMonitor *GetStatMonRender();
    GameResult *GetGameResult();
    Lobby *GetLobby();
    GameSpyID const &GetGameSpyID() const;
    bool StartGameUsingCmdLineOptions();
    void SetLocale(char const *);
    char const *GetLocale() const;
    KeyBindingList *GetKeyBindingList();
    KeyBindingList *GetDefaultKeyBindingList();
    void RestoreDefaultKeyBindings();
    bool IsRestarting() const;
    static void KeyBinderCallBack(unsigned __int32 hotKeyID, wchar_t const *in_wstring, wchar_t *out_wstring, unsigned __int32 out_length);
private:
    void Update();
    void DoTransition();
    void Transition_AppStart();
    void Transition_AppRestart();
    void Transition_StartGame();
    void Transition_StartReplay();
    void Transition_LoadGame();
    void Transition_ExitGame();
    void MakeSureProfileExists();
    class Data;
    boost::scoped_ptr<AppObj::Data> m_pimpl; // 0x4
public:
    AppObj &operator=(AppObj const &); /* compiler_generated() */
};
static_assert(sizeof(AppObj) == 8, "Invalid AppObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __APPOBJ_H__
#endif
