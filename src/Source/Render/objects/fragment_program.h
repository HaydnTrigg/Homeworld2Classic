#if 0
#ifndef __FRAGMENT_PROGRAM_H__
#define __FRAGMENT_PROGRAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum eFragmentPrograms
{
    eInvalidFragmentProgram = 0, // 0x0000
    eShipFragmentProgram = 1, // 0x0001
    eShipLightPassAdditiveFragmentProgram = 2, // 0x0002
    eShipBasePassFragmentProgram = 3, // 0x0003
    eShipGlowPassFragmentProgram = 4, // 0x0004
    eBadgeFragmentProgram = 5, // 0x0005
    eAdditivePassFragmentProgram = 6, // 0x0006
    eShipBaseWithBadgePassFragmentProgram = 7, // 0x0007
    eThrusterFragmentProgram = 8, // 0x0008
    eThrusterLightPassAdditiveFragmentProgram = 9, // 0x0009
    eThrusterBasePassFragmentProgram = 10, // 0x000A
    eThrusterGlowPassFragmentProgram = 11, // 0x000B
    eMegalithFragmentProgram = 12, // 0x000C
    eMegalithGlowPassFragmentProgram = 13, // 0x000D
    eShadowAndLightFragmentProgram = 14, // 0x000E
    eNumFragmentPrograms = 15, // 0x000F
    forceFragmentProgramEnumTo32bit = -1, // 0xFF
};

/* ---------- definitions */

class FragmentProgramManager
{
private:
    static FragmentProgramManager *m_instance;
    rndTable *m_gl; // 0x0
    static std::map<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > > m_programs;
    bool release();
    bool initializeAllFragmentPrograms();
    FragmentProgramManager();
    ~FragmentProgramManager();
public:
    static FragmentProgramManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    rndTable *getGL();
    static void setFragmentProgram(eFragmentPrograms);
};
static_assert(sizeof(FragmentProgramManager) == 4, "Invalid FragmentProgramManager size");

class FragmentProgram
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    unsigned __int32 glID; // 0x18
    bool loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
public:
    void setVertexAttributes(unsigned __int32);
    void bind();
    bool Initialize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
    FragmentProgram(FragmentProgram const &); /* compiler_generated() */
    FragmentProgram();
    ~FragmentProgram(); /* compiler_generated() */
    FragmentProgram &operator=(FragmentProgram const &); /* compiler_generated() */
};
static_assert(sizeof(FragmentProgram) == 28, "Invalid FragmentProgram size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FRAGMENT_PROGRAM_H__
/* combined */
#ifndef __FRAGMENT_PROGRAM_H__
#define __FRAGMENT_PROGRAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum eFragmentPrograms
{
    eInvalidFragmentProgram = 0, // 0x0000
    eShipFragmentProgram = 1, // 0x0001
    eShipLightPassAdditiveFragmentProgram = 2, // 0x0002
    eShipBasePassFragmentProgram = 3, // 0x0003
    eShipGlowPassFragmentProgram = 4, // 0x0004
    eBadgeFragmentProgram = 5, // 0x0005
    eAdditivePassFragmentProgram = 6, // 0x0006
    eShipBaseWithBadgePassFragmentProgram = 7, // 0x0007
    eThrusterFragmentProgram = 8, // 0x0008
    eThrusterLightPassAdditiveFragmentProgram = 9, // 0x0009
    eThrusterBasePassFragmentProgram = 10, // 0x000A
    eThrusterGlowPassFragmentProgram = 11, // 0x000B
    eMegalithFragmentProgram = 12, // 0x000C
    eMegalithGlowPassFragmentProgram = 13, // 0x000D
    eShadowAndLightFragmentProgram = 14, // 0x000E
    eNumFragmentPrograms = 15, // 0x000F
    forceFragmentProgramEnumTo32bit = -1, // 0xFF
};

/* ---------- definitions */

class FragmentProgramManager
{
private:
    static FragmentProgramManager *m_instance;
    rndTable *m_gl; // 0x0
    static std::map<enum eFragmentPrograms,FragmentProgram *,std::less<enum eFragmentPrograms>,std::allocator<std::pair<enum eFragmentPrograms const ,FragmentProgram *> > > m_programs;
    bool release();
    bool initializeAllFragmentPrograms();
    FragmentProgramManager();
    ~FragmentProgramManager();
public:
    static _inline FragmentProgramManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    _inline rndTable *getGL();
    static void setFragmentProgram(eFragmentPrograms newProgram);
};
static_assert(sizeof(FragmentProgramManager) == 4, "Invalid FragmentProgramManager size");

class FragmentProgram
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    unsigned __int32 glID; // 0x18
    bool loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
public:
    void setVertexAttributes(unsigned __int32);
    void bind();
    bool Initialize(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, bool);
    _inline FragmentProgram(FragmentProgram const &); /* compiler_generated() */
    _inline FragmentProgram();
    _inline ~FragmentProgram(); /* compiler_generated() */
    _inline FragmentProgram &operator=(FragmentProgram const &); /* compiler_generated() */
};
static_assert(sizeof(FragmentProgram) == 28, "Invalid FragmentProgram size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FragmentProgramManager *FragmentProgramManager::i() // 0x10051D70
{
    mangled_assert("?i@FragmentProgramManager@@SGPAV1@XZ");
    todo("implement");
}

_inline rndTable *FragmentProgramManager::getGL() // 0x10051CF0
{
    mangled_assert("?getGL@FragmentProgramManager@@QAEPAUrndTable@@XZ");
    todo("implement");
}

_inline FragmentProgram::FragmentProgram() // 0x100508D0
{
    mangled_assert("??0FragmentProgram@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FRAGMENT_PROGRAM_H__
#endif
