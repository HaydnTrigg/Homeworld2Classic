#if 0
#ifndef __BUILDJOB_H__
#define __BUILDJOB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BuildJob :
    public SaveObject
{
public:
    BuildJob(BuildJob const &); /* compiler_generated() */
    BuildJob(SaveGameData *);
    BuildJob(BuildJobType *, unsigned __int32);
    virtual ~BuildJob() override;
    _inline Fixed<10> const &getCostLeft() const;
    _inline BuildJobType *getBuildJobType() const;
    _inline void reduceCostLeftBy(Fixed<10> const &);
    _inline unsigned __int32 GetBuildJobID() const;
    _inline bool getUnitCapsReached() const;
    _inline void setUnitCapsReached(bool);
private:
    Fixed<10> m_costLeft; // 0xC
    BuildJobType *m_jobTypeOwner; // 0x10
    unsigned __int32 m_id; // 0x14
    bool m_unitCapsReached; // 0x18
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    BuildJob &operator=(BuildJob const &); /* compiler_generated() */
};
static_assert(sizeof(BuildJob) == 28, "Invalid BuildJob size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Fixed<10> const &_sub_52C13F(BuildJob const *const);
_inline Fixed<10> const &BuildJob::getCostLeft() const // 0x52C13F
{
    mangled_assert("?getCostLeft@BuildJob@@QBEABV?$Fixed@$09@@XZ");
    todo("implement");
    Fixed<10> const & __result = _sub_52C13F(this);
    return __result;
}

_extern BuildJobType *_sub_52C12C(BuildJob const *const);
_inline BuildJobType *BuildJob::getBuildJobType() const // 0x52C12C
{
    mangled_assert("?getBuildJobType@BuildJob@@QBEPAVBuildJobType@@XZ");
    todo("implement");
    BuildJobType * __result = _sub_52C12C(this);
    return __result;
}

_extern void _sub_5D05B9(BuildJob *const, Fixed<10> const &);
_inline void BuildJob::reduceCostLeftBy(Fixed<10> const &) // 0x5D05B9
{
    mangled_assert("?reduceCostLeftBy@BuildJob@@QAEXABV?$Fixed@$09@@@Z");
    todo("implement");
    _sub_5D05B9(this, arg);
}

_extern unsigned __int32 _sub_52B835(BuildJob const *const);
_inline unsigned __int32 BuildJob::GetBuildJobID() const // 0x52B835
{
    mangled_assert("?GetBuildJobID@BuildJob@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_52B835(this);
    return __result;
}

_extern bool _sub_642EBB(BuildJob const *const);
_inline bool BuildJob::getUnitCapsReached() const // 0x642EBB
{
    mangled_assert("?getUnitCapsReached@BuildJob@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_642EBB(this);
    return __result;
}

_extern void _sub_5D0779(BuildJob *const, bool);
_inline void BuildJob::setUnitCapsReached(bool) // 0x5D0779
{
    mangled_assert("?setUnitCapsReached@BuildJob@@QAEX_N@Z");
    todo("implement");
    _sub_5D0779(this, arg);
}

_extern bool _sub_5CC814(BuildJob *const);
_inline bool BuildJob::isDeterministic() // 0x5CC814
{
    mangled_assert("?isDeterministic@BuildJob@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_5CC814(this);
    return __result;
}

_extern char const *_sub_5CC88B(BuildJob *const);
_inline char const *BuildJob::saveToken() // 0x5CC88B
{
    mangled_assert("?saveToken@BuildJob@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_5CC88B(this);
    return __result;
}

/* ---------- private code */

#endif // __BUILDJOB_H__
#endif
