#if 0
#ifndef __LOADSYNCERRORRECOVERY_H__
#define __LOADSYNCERRORRECOVERY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LoadSyncErrorRecovery :
    public Task
{
public:
    LoadSyncErrorRecovery(LoadSyncErrorRecovery const &); /* compiler_generated() */
    LoadSyncErrorRecovery();
    virtual ~LoadSyncErrorRecovery() override;
    static LoadSyncErrorRecovery *instance();
    static void release();
    virtual __int32 taskFunction(float) override;
    SaveGameData *createSaveGameData();
    bool isFinished();
protected:
    static LoadSyncErrorRecovery *ms_instance;
    SaveGameData *m_saveGameData; // 0x30
    bool m_isFinished; // 0x34
public:
    LoadSyncErrorRecovery &operator=(LoadSyncErrorRecovery const &); /* compiler_generated() */
};
static_assert(sizeof(LoadSyncErrorRecovery) == 56, "Invalid LoadSyncErrorRecovery size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOADSYNCERRORRECOVERY_H__
#endif
