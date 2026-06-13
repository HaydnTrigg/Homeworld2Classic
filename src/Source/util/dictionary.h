#if 0
#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Dictionary
{
public:
    typedef unsigned long Key;
private:
    Dictionary(Dictionary const &);
public:
    Dictionary(bool);
    unsigned long GetKey(char const *);
    char const *GetString(unsigned long) const;
    bool FindKey(char const *, unsigned long &) const;
    typedef std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DataCont;
private:
    std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_cData; // 0x0
    bool m_bCaseSensitive; // 0x8
    bool m_bCollision; // 0x9
    Dictionary &operator=(Dictionary const &);
public:
    _inline ~Dictionary(); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Dictionary) == 12, "Invalid Dictionary size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DICTIONARY_H__
/* combined */
#ifndef __DICTIONARY_H__
#define __DICTIONARY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Dictionary
{
public:
    typedef unsigned long Key;
private:
    Dictionary(Dictionary const &);
public:
    Dictionary(bool);
    unsigned long GetKey(char const *);
    char const *GetString(unsigned long) const;
    bool FindKey(char const *, unsigned long &) const;
    typedef std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > DataCont;
private:
    std::map<unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_cData; // 0x0
    bool m_bCaseSensitive; // 0x8
    bool m_bCollision; // 0x9
    Dictionary &operator=(Dictionary const &);
public:
    ~Dictionary(); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Dictionary) == 12, "Invalid Dictionary size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DICTIONARY_H__
#endif
