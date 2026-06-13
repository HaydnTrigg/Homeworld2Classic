#if 0
#ifndef __LOCALIZERTXT_H__
#define __LOCALIZERTXT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LocalizerResourceTxt :
    public LocalizerImp::Resource
{
public:
    static char const *FileExtension;
    struct Line
    {
        wchar_t *strUnicode; // 0x0
        char *strAnsi; // 0x4
        char *comment; // 0x8
    };
    static_assert(sizeof(Line) == 12, "Invalid Line size");
    struct Range
    {
        __int32 min; // 0x0
        __int32 max; // 0x4
        char *comment; // 0x8
    };
    static_assert(sizeof(Range) == 12, "Invalid Range size");
    typedef std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > LineArray;
    typedef std::vector<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > RangeArray;
private:
    LocalizerResourceTxt(LocalizerResourceTxt const &);
    LocalizerResourceTxt(char const *);
public:
    static LocalizerImp::Resource *Load(char const *filename);
    virtual ~LocalizerResourceTxt() override;
    bool Save(char const *);
    bool ResetRange(__int32, __int32);
    bool AddRange(__int32 &, __int32 &, unsigned __int32 const, char const *);
    __int32 AddText(wchar_t const *, __int32 const, __int32 const, __int32 const);
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > Begin() const;
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,LocalizerResourceTxt::Line> > > > End() const;
    virtual char const *GetName() const override;
    virtual __int32 RangeMin() const override;
    virtual __int32 RangeMax() const override;
    virtual bool GetString(wchar_t *, unsigned __int32, __int32) const override;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const m_fileName; // 0x4
    LocalizerResourceTxt::Range m_filerange; // 0x1C
    std::vector<LocalizerResourceTxt::Range,mempool_alloc<LocalizerResourceTxt::Range> > m_ranges; // 0x28
    std::vector<std::pair<int,LocalizerResourceTxt::Line>,mempool_alloc<std::pair<int,LocalizerResourceTxt::Line> > > m_lines; // 0x38
    LocalizerResourceTxt &operator=(LocalizerResourceTxt const &);
};
static_assert(sizeof(LocalizerResourceTxt) == 72, "Invalid LocalizerResourceTxt size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZERTXT_H__
#endif
