#if 0
#ifndef __SOUNDPARAMMANAGER_H__
#define __SOUNDPARAMMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SoundParamManager
{
public:
    static void Initialize();
    static void Shutdown();
    static SoundParamManager *Instance();
    typedef TypedBitSet<enum SoundParams::ParamType,30> ParamMask;
    class SoundInfo
    {
    public:
        _inline SoundInfo(SoundParamManager::SoundInfo const &); /* compiler_generated() */
        _inline SoundInfo();
        _inline bool NeedFile() const;
        SoundParams m_params; // 0x0
        TypedBitSet<enum SoundParams::ParamType,30> m_overrides; // 0x1D0
        bool m_bRandSampContainer; // 0x1D4
        bool m_bHasFile; // 0x1D5
        bool m_bInvalid; // 0x1D6
        _inline SoundParamManager::SoundInfo &operator=(SoundParamManager::SoundInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(SoundInfo) == 472, "Invalid SoundInfo size");
    bool SetRootPath(char const *);
    char const *GetRootPath() const;
    bool HasSoundFileExt(char const *);
    bool HasParamFileExt(char const *);
    char const *GetParamsFilename(char const *, bool);
    bool IsValidForDest(char const *, unsigned long);
    bool GetInfo(char const *, bool, SoundParamManager::SoundInfo &);
    bool GetParentInfo(char const *, SoundParamManager::SoundInfo &);
    bool GetParams(char const *, bool, SoundParams &);
    bool GetParentParams(char const *, SoundParams &);
    bool SetParams(char const *, bool, SoundParams const &, TypedBitSet<enum SoundParams::ParamType,30> const &, bool);
    bool SetRandSampContainer(char const *, bool, bool);
    bool HasChildParamFiles(char const *);
    bool Propagate(char const *, TypedBitSet<enum SoundParams::ParamType,30> const &, bool);
    void Refresh();
    static SoundParams::ParamType const *GetSampleParams();
    static unsigned __int32 GetNumSampleParams();
    SoundParamManager(SoundParamManager const &); /* compiler_generated() */
private:
    SoundParamManager();
    ~SoundParamManager();
    bool isRoot(char const *) const;
    void luaSetup(LuaConfig &) const;
    bool loadParams(char const *, SoundParamManager::SoundInfo &, bool *) const;
    bool saveParams(char const *, SoundParamManager::SoundInfo const &, bool) const;
    bool propagateToFile(char const *, bool, TypedBitSet<enum SoundParams::ParamType,30> const &);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getParamsFilename(char const *, bool);
    class Data;
    boost::scoped_ptr<SoundParamManager::Data> m_pimpl; // 0x0
public:
    SoundParamManager &operator=(SoundParamManager const &); /* compiler_generated() */
};
static_assert(sizeof(SoundParamManager) == 4, "Invalid SoundParamManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SoundParamManager::SoundInfo::SoundInfo() // 0x6C38D5
{
    mangled_assert("??0SoundInfo@SoundParamManager@@QAE@XZ");
    todo("implement");
}

_inline bool SoundParamManager::SoundInfo::NeedFile() const // 0x6C43B5
{
    mangled_assert("?NeedFile@SoundInfo@SoundParamManager@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SOUNDPARAMMANAGER_H__
#endif
