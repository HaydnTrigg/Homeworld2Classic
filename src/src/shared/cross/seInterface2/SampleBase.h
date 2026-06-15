#if 0
#ifndef __SAMPLEBASE_H__
#define __SAMPLEBASE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SampleBase
{
public:
    SampleBase(SampleBase const &); /* compiler_generated() */
    SampleBase();
    virtual ~SampleBase();
    virtual bool Save(char const *) const = 0;
    virtual bool Open(char const *) = 0;
    bool Register();
    static void Reset();
    void SetFilename(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void SetLooping(bool);
    _inline bool GetLooping();
    _inline void SetSize(long);
    _inline long GetSize();
    _inline void SetData(void *);
    _inline void *SampleData();
    void SetLoopCount(long);
    _inline long GetLoopCount();
    void SetLoopRandom(long);
    _inline long GetLoopRandom();
    void SetLoopStart(long);
    _inline long GetLoopStart();
    void SetLoopEnd(long);
    _inline long GetLoopEnd();
    _inline void SetFileOffset(long);
    _inline long GetFileOffset();
    void SetStartPoint(long);
    _inline long GetStartPoint();
protected:
    bool m_looping; // 0x4
    long m_loop_count; // 0x8
    long m_loop_random; // 0xC
    long m_loop_start; // 0x10
    long m_loop_end; // 0x14
    long m_file_offset; // 0x18
    long m_size; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x20
    long m_sample_startpos; // 0x38
    void *m_data; // 0x3C
public:
    SampleBase &operator=(SampleBase const &); /* compiler_generated() */
};
static_assert(sizeof(SampleBase) == 64, "Invalid SampleBase size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool SampleBase::GetLooping() // 0x6C6A90
{
    mangled_assert("?GetLooping@SampleBase@@QAE_NXZ");
    todo("implement");
}

_inline void SampleBase::SetSize(long) // 0x6BEC6A
{
    mangled_assert("?SetSize@SampleBase@@QAEXJ@Z");
    todo("implement");
}

_inline long SampleBase::GetSize() // 0x6C6B55
{
    mangled_assert("?GetSize@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline void SampleBase::SetData(void *) // 0x6BEC4C
{
    mangled_assert("?SetData@SampleBase@@QAEXPAX@Z");
    todo("implement");
}

_inline void *SampleBase::SampleData() // 0x6BEB39
{
    mangled_assert("?SampleData@SampleBase@@QAEPAXXZ");
    todo("implement");
}

_inline long SampleBase::GetLoopCount() // 0x6C6A88
{
    mangled_assert("?GetLoopCount@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline long SampleBase::GetLoopRandom() // 0x6C6A8C
{
    mangled_assert("?GetLoopRandom@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline long SampleBase::GetLoopStart() // 0x6BE48F
{
    mangled_assert("?GetLoopStart@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline long SampleBase::GetLoopEnd() // 0x6BE48B
{
    mangled_assert("?GetLoopEnd@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline void SampleBase::SetFileOffset(long) // 0x6BEC56
{
    mangled_assert("?SetFileOffset@SampleBase@@QAEXJ@Z");
    todo("implement");
}

_inline long SampleBase::GetFileOffset() // 0x6C6A78
{
    mangled_assert("?GetFileOffset@SampleBase@@QAEJXZ");
    todo("implement");
}

_inline long SampleBase::GetStartPoint() // 0x6C6B59
{
    mangled_assert("?GetStartPoint@SampleBase@@QAEJXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SAMPLEBASE_H__
#endif
