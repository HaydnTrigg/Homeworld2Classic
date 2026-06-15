#if 0
#ifndef __HW2CPUPLAYER_H__
#define __HW2CPUPLAYER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class HW2CpuPlayer :
    public CpuPlayer,
    public GameEventSys::Listener,
    public Saveable
{
public:
    HW2CpuPlayer(HW2CpuPlayer const &); /* compiler_generated() */
    HW2CpuPlayer();
    virtual ~HW2CpuPlayer() override;
    virtual bool Init(__int32, char const *) override;
    virtual bool Shutdown() override;
    virtual void Enable(bool) override;
    virtual bool IsEnabled() const override;
    virtual void Think(float) override;
    virtual __int32 GetPlayerID() const override;
    virtual bool Save(SaveGameData *, SaveType) override;
    virtual bool Restore(SaveGameData *) override;
    enum DebugMode
    {
        DM_None = 0,
        DM_Overview,
        DM_Classifier,
        DM_Resource,
        DM_BlobStats,
        DM_Fleet,
        DM_Build,
        DM_Research,
        DM_Max,
    };
    enum DebugSwitches
    {
        DS_Blobs = 0,
        DS_ResourceBlobs,
        DS_Fleet,
        DS_ResourceMgr,
        DS_Targets,
        DS_Max,
    };
    virtual void OnEvent(GameEventSys::Event const &) override;
    void setDebug(bool);
    void setDebugMode(__int32);
    __int32 getDebugFlag() const;
    void setDebugFlag(__int32);
    bool isDebugFlagSet(__int32) const;
    void setDebugPlayer(__int32);
    void AddSquadron(Squadron *);
    void RemoveSquadron(Squadron *);
    void HyperspaceSquadron(Squadron *, bool);
    LuaConfig *getLuaConfig() const;
    SimProxy *getSimProxy();
    CpuFleetCommand *getFleetCommand();
    __int32 getRace() const;
    float gameTime() const;
    unsigned __int32 getLevelOfDifficulty() const;
    void setLevelOfDifficulty(__int32);
    float RandomRange(float, float);
    unsigned __int32 Rand(unsigned __int32);
    void RemoveLeastNeededItem();
    bool RetireSubSystems();
    _inline CpuCommon &getCpuCommon();
private:
    void Init_LuaLibs();
    void Init_LuaSystem(char const *);
    void Init_Squadrons();
    void Debug();
    void DebugOverview(float);
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
private:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    static void saveLuaState(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreLuaState(void *objectPtr, SaveGameData *saveGameData);
    class Data;
    boost::scoped_ptr<HW2CpuPlayer::Data> m_pimpl; // 0xC
    CpuCommon m_common; // 0x10
    float m_timeAccumulation; // 0x84C
    float m_debugTimeAccumulation; // 0x850
    bool m_enabled; // 0x854
    bool cp_processResource; // 0x855
    bool cp_processMilitary; // 0x856
    bool cp_processPassiveAbilities; // 0x857
public:
    HW2CpuPlayer &operator=(HW2CpuPlayer const &); /* compiler_generated() */
};
static_assert(sizeof(HW2CpuPlayer) == 2136, "Invalid HW2CpuPlayer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline CpuCommon &HW2CpuPlayer::getCpuCommon() // 0x5447BB
{
    mangled_assert("?getCpuCommon@HW2CpuPlayer@@QAEAAVCpuCommon@@XZ");
    todo("implement");
}

_inline char const *HW2CpuPlayer::saveToken() // 0x54301B
{
    mangled_assert("?saveToken@HW2CpuPlayer@@UAEPBDXZ");
    // __shifted(HW2CpuPlayer, 8);
    todo("implement");
}

_inline bool HW2CpuPlayer::isDeterministic() // 0x542F98
{
    mangled_assert("?isDeterministic@HW2CpuPlayer@@UAE_NXZ");
    // __shifted(HW2CpuPlayer, 8);
    todo("implement");
}

/* ---------- private code */

#endif // __HW2CPUPLAYER_H__
#endif
