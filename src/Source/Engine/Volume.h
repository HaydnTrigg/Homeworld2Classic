#if 0
#ifndef __VOLUME_H__
#define __VOLUME_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Volume :
    public SobUnmoveable,
    private boost::noncopyable
{
public:
    typedef SobUnmoveable SuperClass;
    Volume(Volume &); /* compiler_generated() */
    Volume(SaveGameData *);
    Volume(char const *, VolumeType, bool);
    bool Intersect(vector3 const &, vector3 const &, __int32 &, vector3 *);
    bool Intersect(Volume *) const;
    bool Inside(vector3 const &) const;
    bool isHyperspaceable() const;
    void setHyperspaceable(bool);
    VolumeType m_volumeType; // 0x210
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_volName; // 0x214
    bool m_hyperspaceable; // 0x22C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    _inline char const *getVolumeName() const;
    VolumeStatic const *getStatic() const;
private:
    static SaveData const m_saveData[0];
public:
    virtual _inline ~Volume() override; /* compiler_generated() */
    Volume &operator=(Volume &); /* compiler_generated() */
};
static_assert(sizeof(Volume) == 560, "Invalid Volume size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4B267E(Volume *const);
_inline bool Volume::isDeterministic() // 0x4B267E
{
    mangled_assert("?isDeterministic@Volume@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B267E(this);
    return __result;
}

_extern char const *_sub_4B271A(Volume *const);
_inline char const *Volume::saveToken() // 0x4B271A
{
    mangled_assert("?saveToken@Volume@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B271A(this);
    return __result;
}

_extern char const *_sub_5447CA(Volume const *const);
_inline char const *Volume::getVolumeName() const // 0x5447CA
{
    mangled_assert("?getVolumeName@Volume@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5447CA(this);
    return __result;
}

/* ---------- private code */

#endif // __VOLUME_H__
#endif
