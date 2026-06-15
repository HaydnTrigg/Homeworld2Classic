#if 0
#ifndef __CPUCOMMON_H__
#define __CPUCOMMON_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CpuCommon :
    public Saveable
{
public:
    Player *m_player; // 0x4
    SimProxy *m_proxy; // 0x8
    LuaConfig *m_state; // 0xC
    CpuClassifier *m_classifier; // 0x10
    CpuResourceManager *m_resourceMgr; // 0x14
    CpuResearchManager *m_researchMgr; // 0x18
    CpuBuildManager *m_buildMgr; // 0x1C
    CpuFleetCommand *m_fleet; // 0x20
    CpuPlayerQuery *m_playerQuery; // 0x24
    CpuBlobManager *m_blobMgr; // 0x28
    ResourceBlobManager *m_resourceBlobMgr; // 0x2C
    __int32 m_levelOfDifficulty; // 0x30
    LogFile m_logfile; // 0x34
    bool m_printToConsole; // 0x838
    void aitrace(char const *);
    void aiprintf(char const *format, ...);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
private:
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveFleet(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreFleet(void *objectPtr, SaveGameData *saveGameData);
public:
    CpuCommon(CpuCommon const &); /* compiler_generated() */
    _inline CpuCommon(); /* compiler_generated() */
    virtual _inline ~CpuCommon() override; /* compiler_generated() */
    CpuCommon &operator=(CpuCommon const &); /* compiler_generated() */
};
static_assert(sizeof(CpuCommon) == 2108, "Invalid CpuCommon size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool CpuCommon::isDeterministic() // 0x542F95
{
    mangled_assert("?isDeterministic@CpuCommon@@UAE_NXZ");
    todo("implement");
}

_inline char const *CpuCommon::saveToken() // 0x543015
{
    mangled_assert("?saveToken@CpuCommon@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CPUCOMMON_H__
#endif
