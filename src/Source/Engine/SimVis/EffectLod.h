#if 0
#ifndef __EFFECTLOD_H__
#define __EFFECTLOD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectLod
{
public:
    struct Entry
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fx; // 0x0
        float m_distance; // 0x18
        _inline bool operator<(float const &) const;
        bool operator<(EffectLod::Entry const &) const;
        bool operator==(float const &) const;
        _inline Entry(EffectLod::Entry const &); /* compiler_generated() */
        _inline Entry(); /* compiler_generated() */
        _inline ~Entry(); /* compiler_generated() */
        _inline EffectLod::Entry &operator=(EffectLod::Entry const &); /* compiler_generated() */
    };
    static_assert(sizeof(Entry) == 28, "Invalid Entry size");
    EffectLod(EffectLod const &); /* compiler_generated() */
    EffectLod();
    ~EffectLod();
    void PrecacheFX() const;
    void SetName(char const *);
    void Add(char const *, float);
    EffectLod::Entry const *Find(float) const;
    typedef std::vector<EffectLod::Entry,std::allocator<EffectLod::Entry> > EntryCont;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    std::vector<EffectLod::Entry,std::allocator<EffectLod::Entry> > m_entries; // 0x18
public:
    EffectLod &operator=(EffectLod const &); /* compiler_generated() */
};
static_assert(sizeof(EffectLod) == 36, "Invalid EffectLod size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool EffectLod::Entry::operator<(float const &) const // 0x51B96D
{
    mangled_assert("??MEntry@EffectLod@@QBE_NABM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __EFFECTLOD_H__
#endif
