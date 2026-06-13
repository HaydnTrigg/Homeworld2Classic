#if 0
#ifndef __LOCALIZERUCS_H__
#define __LOCALIZERUCS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LocalizerResourceUCS :
    public LocalizerImp::Resource
{
public:
    static char const *FileExtension;
    struct Line
    {
        __int32 key; // 0x0
        wchar_t const *unicode; // 0x4
    };
    static_assert(sizeof(Line) == 8, "Invalid Line size");
private:
    LocalizerResourceUCS(LocalizerResourceUCS const &);
    LocalizerResourceUCS(char const *, unsigned __int32, unsigned __int32);
public:
    static LocalizerImp::Resource *Load(char const *filename);
    virtual ~LocalizerResourceUCS() override;
    virtual char const *GetName() const override;
    virtual __int32 RangeMin() const override;
    virtual __int32 RangeMax() const override;
    virtual bool GetString(wchar_t *, unsigned __int32, __int32) const override;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const m_fileName; // 0x4
    unsigned __int32 m_linesCount; // 0x1C
    LocalizerResourceUCS::Line *m_lines; // 0x20
    wchar_t *m_strings; // 0x24
    LocalizerResourceUCS &operator=(LocalizerResourceUCS const &);
};
static_assert(sizeof(LocalizerResourceUCS) == 40, "Invalid LocalizerResourceUCS size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZERUCS_H__
#endif
