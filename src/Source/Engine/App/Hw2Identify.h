#if 0
#ifndef __HW2IDENTIFY_H__
#define __HW2IDENTIFY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Hw2Identify
{
public:
    enum
    {
        InvalidId = 0,
    };
    static bool Initialize();
    static bool Shutdown();
    static _inline Hw2Identify *Instance();
    unsigned __int32 CreateSobEntry(char const *, SobStatic *);
    void CreateResearchEntry(char const *);
    static unsigned __int32 GetResearchId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
    static unsigned __int32 GetSobStaticId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &GetResearchName(unsigned __int32 id);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &GetSobStaticName(unsigned __int32 id);
    static bool ResearchIdExists(unsigned __int32 id);
    static bool SobStaticIdExists(unsigned __int32 id);
    static SobStatic *GetStatic(unsigned __int32 id);
    void GetSobStaticIds(std::vector<unsigned int,std::allocator<unsigned int> > &) const;
    void GetResearchIds(std::vector<unsigned int,std::allocator<unsigned int> > &) const;
private:
    static unsigned __int32 GetHash(char const *string);
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> SobEntry;
    typedef std::map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > > SobMap;
    typedef std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > ResearchMap;
    std::map<unsigned int,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,SobStatic *> > > > m_sobs; // 0x0
    std::map<unsigned int,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > m_researchs; // 0x8
    static Hw2Identify *s_instance;
public:
    Hw2Identify(Hw2Identify const &); /* compiler_generated() */
    _inline Hw2Identify(); /* compiler_generated() */
    _inline ~Hw2Identify(); /* compiler_generated() */
    Hw2Identify &operator=(Hw2Identify const &); /* compiler_generated() */
};
static_assert(sizeof(Hw2Identify) == 16, "Invalid Hw2Identify size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Hw2Identify *_sub_47D079();
_inline Hw2Identify *Hw2Identify::Instance() // 0x47D079
{
    mangled_assert("?Instance@Hw2Identify@@SGPAV1@XZ");
    todo("implement");
    Hw2Identify * __result = _sub_47D079();
    return __result;
}

/* ---------- private code */

#endif // __HW2IDENTIFY_H__
#endif
