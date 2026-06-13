#if 0
#ifndef __CONFIGFILE_H__
#define __CONFIGFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ConfigFile
{
private:
    ConfigFile(ConfigFile const &);
public:
    ConfigFile(char const *);
    ~ConfigFile();
    bool Load(ByteStream *);
    bool Load(char const *);
    bool Save(char const *) const;
    bool GetString(char const *, char *, unsigned __int32) const;
    bool SetString(char const *, char const *);
    bool GetInt(char const *, __int32 &) const;
    bool SetInt(char const *, __int32);
    bool Remove(char const *);
    bool SetSection(char const *, char *, unsigned __int32) const;
    char const *GetSection() const;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > ValueMap;
    typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > SectionMap;
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x0
    bool m_loaded; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_section; // 0x1C
    std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > > > > m_values; // 0x34
    ConfigFile &operator=(ConfigFile const &);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ConfigFile) == 60, "Invalid ConfigFile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONFIGFILE_H__
#endif
