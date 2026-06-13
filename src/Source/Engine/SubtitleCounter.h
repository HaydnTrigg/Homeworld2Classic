#if 0
#ifndef __SUBTITLECOUNTER_H__
#define __SUBTITLECOUNTER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SubtitleCounter :
    public SaveObject,
    public Subtitle_Region::Updater
{
public:
    SubtitleCounter(SubtitleCounter const &); /* compiler_generated() */
    SubtitleCounter(SaveGameData *);
    SubtitleCounter(__int32, __int32);
    void setTimerID(__int32);
    void setFormatID(__int32);
    virtual void update(Subtitle_Region *) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
private:
    __int32 m_timerID; // 0x10
    __int32 m_formatID; // 0x14
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_timeText; // 0x18
public:
    virtual _inline ~SubtitleCounter() override; /* compiler_generated() */
    SubtitleCounter &operator=(SubtitleCounter const &); /* compiler_generated() */
};
static_assert(sizeof(SubtitleCounter) == 48, "Invalid SubtitleCounter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_641A37(SubtitleCounter *const);
_inline bool SubtitleCounter::isDeterministic() // 0x641A37
{
    mangled_assert("?isDeterministic@SubtitleCounter@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_641A37(this);
    return __result;
}

_extern char const *_sub_641AC6(SubtitleCounter *const);
_inline char const *SubtitleCounter::saveToken() // 0x641AC6
{
    mangled_assert("?saveToken@SubtitleCounter@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_641AC6(this);
    return __result;
}

/* ---------- private code */

#endif // __SUBTITLECOUNTER_H__
#endif
