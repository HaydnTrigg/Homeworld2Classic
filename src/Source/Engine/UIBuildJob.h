#if 0
#ifndef __UIBUILDJOB_H__
#define __UIBUILDJOB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UIBuildJob
{
public:
    UIBuildJob(BuildJobType *, unsigned __int32);
    UIBuildJob(BuildJob *);
    ~UIBuildJob();
    void initialiseJob();
    __int32 getCostLeft() const;
    _inline unsigned __int32 GetBuildJobID() const;
    _inline BuildJob *getBuildJob() const;
    _inline BuildJobType *getBuildJobType() const;
private:
    unsigned __int32 m_jobID; // 0x0
    BuildJob *m_job; // 0x4
    BuildJobType *m_type; // 0x8
};
static_assert(sizeof(UIBuildJob) == 12, "Invalid UIBuildJob size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_56FDD4(UIBuildJob const *const);
_inline unsigned __int32 UIBuildJob::GetBuildJobID() const // 0x56FDD4
{
    mangled_assert("?GetBuildJobID@UIBuildJob@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_56FDD4(this);
    return __result;
}

_extern BuildJob *_sub_5D0033(UIBuildJob const *const);
_inline BuildJob *UIBuildJob::getBuildJob() const // 0x5D0033
{
    mangled_assert("?getBuildJob@UIBuildJob@@QBEPAVBuildJob@@XZ");
    todo("implement");
    BuildJob * __result = _sub_5D0033(this);
    return __result;
}

_extern BuildJobType *_sub_570A42(UIBuildJob const *const);
_inline BuildJobType *UIBuildJob::getBuildJobType() const // 0x570A42
{
    mangled_assert("?getBuildJobType@UIBuildJob@@QBEPAVBuildJobType@@XZ");
    todo("implement");
    BuildJobType * __result = _sub_570A42(this);
    return __result;
}

/* ---------- private code */

#endif // __UIBUILDJOB_H__
#endif
