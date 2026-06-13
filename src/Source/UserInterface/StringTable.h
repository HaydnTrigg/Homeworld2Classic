#if 0
#ifndef __STRINGTABLE_H__
#define __STRINGTABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::StringTable
{
public:
    static UI::StringTable *i();
    static bool Create();
    static bool Destroy();
    bool GetString(char const *, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &) const;
    bool AddString(char const *, wchar_t const *);
    StringTable(UI::StringTable const &); /* compiler_generated() */
private:
    StringTable();
    ~StringTable();
    static UI::StringTable *ms_stringTable;
    boost::scoped_ptr<`anonymous namespace'::Data> m_pimpl; // 0x0
    void Load(char const *, char const *);
public:
    UI::StringTable &operator=(UI::StringTable const &); /* compiler_generated() */
};
static_assert(sizeof(UI::StringTable) == 4, "Invalid UI::StringTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STRINGTABLE_H__
#endif
