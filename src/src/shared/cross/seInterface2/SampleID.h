#if 0
#ifndef __SAMPLEID_H__
#define __SAMPLEID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SampleID
{
public:
    struct Info
    {
        SampleBase *m_pSample; // 0x0
        long m_refcount; // 0x4
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fname; // 0x8
        Info(SampleID::Info const &); /* compiler_generated() */
        _inline Info(); /* compiler_generated() */
        _inline ~Info(); /* compiler_generated() */
        SampleID::Info &operator=(SampleID::Info const &); /* compiler_generated() */
    };
    static_assert(sizeof(Info) == 32, "Invalid Info size");
    SampleID(char const *, SampleBase *);
    SampleID(SampleID const &);
    SampleID();
    ~SampleID();
    SampleID &operator=(SampleID const &);
    static SampleID const ID_Invalid;
    char const *GetFileName() const;
    SampleBase const *operator->() const;
    SampleBase *operator->();
    SampleBase const *get() const;
    SampleBase *get();
    void Save(char const *);
    void Load(char const *, long, bool, long *, short *, short *, long *);
    void New();
    bool operator==(SampleID const &) const;
    bool operator!=(SampleID const &) const;
    _inline void SetIndex(__int32);
    _inline __int32 GetIndex();
    _inline void SetWeight(long);
    _inline long GetWeight();
    _inline void SetGroup(__int32);
    _inline long GetGroup();
protected:
    void operator++(__int32);
private:
    void Reset();
    SampleID::Info *m_pSampleIDInfo; // 0x0
    __int32 m_index; // 0x4
    long m_weight; // 0x8
    long m_group; // 0xC
};
static_assert(sizeof(SampleID) == 16, "Invalid SampleID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void SampleID::SetIndex(__int32) // 0x6C149C
{
    mangled_assert("?SetIndex@SampleID@@QAEXH@Z");
    todo("implement");
}

_inline __int32 SampleID::GetIndex() // 0x6BE483
{
    mangled_assert("?GetIndex@SampleID@@QAEHXZ");
    todo("implement");
}

_inline void SampleID::SetWeight(long) // 0x6C14E3
{
    mangled_assert("?SetWeight@SampleID@@QAEXJ@Z");
    todo("implement");
}

_inline long SampleID::GetWeight() // 0x6BE493
{
    mangled_assert("?GetWeight@SampleID@@QAEJXZ");
    todo("implement");
}

_inline void SampleID::SetGroup(__int32) // 0x6C1492
{
    mangled_assert("?SetGroup@SampleID@@QAEXH@Z");
    todo("implement");
}

_inline long SampleID::GetGroup() // 0x6BE42C
{
    mangled_assert("?GetGroup@SampleID@@QAEJXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SAMPLEID_H__
#endif
