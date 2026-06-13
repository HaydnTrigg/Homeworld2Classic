#if 0
#ifndef __VERTEX_PROGRAM_H__
#define __VERTEX_PROGRAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum eVertexPrograms
{
    eInvalidVertexProgram = 0, // 0x0000
    eAsteroidVertexProgram0 = 1, // 0x0001
    eAsteroidVertexProgram1 = 2, // 0x0002
    eShipLightVertexProgram = 3, // 0x0003
    eNumVertexPrograms = 4, // 0x0004
    forceVertexProgramEnumTo32bit = -1, // 0xFF
};

/* ---------- definitions */

class VertexProgramManager
{
public:
    enum eVertexProgramsInternal
    {
        eInvalidVertexProgramInternal = 0, // 0x0000
        eAsteroidVertexProgramInternal0 = 1, // 0x0001
        eAsteroidVertexProgramInternal1 = 2, // 0x0002
        eShipLightVertexProgramInternal0 = 3, // 0x0003
        eShipLightVertexProgramInternal1 = 4, // 0x0004
        eShipLightVertexProgramInternal2 = 5, // 0x0005
        eShipLightVertexProgramInternal3 = 6, // 0x0006
        eShipLightVertexProgramInternal4 = 7, // 0x0007
        eShipLightVertexProgramInternal5 = 8, // 0x0008
        eShipLightVertexProgramInternal6 = 9, // 0x0009
        eNumVertexProrgamsInternal = 10, // 0x000A
        forceVertexProgramEnumTo32bit = 2147483647, // 0x7FFFFFFF
    };
private:
    static VertexProgramManager *m_instance;
    rndTable *m_gl; // 0x0
    static std::map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > > m_programs;
    bool release();
    bool initializeAllVertexPrograms();
    VertexProgramManager();
    ~VertexProgramManager();
public:
    static VertexProgramManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    rndTable *getGL();
    static void setVertexProgram(eVertexPrograms);
};
static_assert(sizeof(VertexProgramManager) == 4, "Invalid VertexProgramManager size");

class VertexProgram
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    unsigned __int32 glID; // 0x18
    VertexProgramManager::eVertexProgramsInternal hw2ID; // 0x1C
    unsigned __int32 vertexAttributes; // 0x20
    bool loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
public:
    void setVertexAttributes(unsigned __int32);
    void bind();
    VertexProgram(VertexProgram const &); /* compiler_generated() */
    VertexProgram(VertexProgramManager::eVertexProgramsInternal const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    ~VertexProgram(); /* compiler_generated() */
    VertexProgram &operator=(VertexProgram const &); /* compiler_generated() */
};
static_assert(sizeof(VertexProgram) == 36, "Invalid VertexProgram size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VERTEX_PROGRAM_H__
/* combined */
#ifndef __VERTEX_PROGRAM_H__
#define __VERTEX_PROGRAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum eVertexPrograms
{
    eInvalidVertexProgram = 0, // 0x0000
    eAsteroidVertexProgram0 = 1, // 0x0001
    eAsteroidVertexProgram1 = 2, // 0x0002
    eShipLightVertexProgram = 3, // 0x0003
    eNumVertexPrograms = 4, // 0x0004
    forceVertexProgramEnumTo32bit = -1, // 0xFF
};

enum eVP_VertexAttributeBits
{
    eVP_TangentBit = 1, // 0x0001
    eVP_BinormalBit = 2, // 0x0002
    eVP_forceVertexAttributeBitsTo32Bit = -1, // 0xFF
};

/* ---------- definitions */

class VertexProgramManager
{
public:
    enum eVertexProgramsInternal
    {
        eInvalidVertexProgramInternal = 0, // 0x0000
        eAsteroidVertexProgramInternal0 = 1, // 0x0001
        eAsteroidVertexProgramInternal1 = 2, // 0x0002
        eShipLightVertexProgramInternal0 = 3, // 0x0003
        eShipLightVertexProgramInternal1 = 4, // 0x0004
        eShipLightVertexProgramInternal2 = 5, // 0x0005
        eShipLightVertexProgramInternal3 = 6, // 0x0006
        eShipLightVertexProgramInternal4 = 7, // 0x0007
        eShipLightVertexProgramInternal5 = 8, // 0x0008
        eShipLightVertexProgramInternal6 = 9, // 0x0009
        eNumVertexProrgamsInternal = 10, // 0x000A
        forceVertexProgramEnumTo32bit = 2147483647, // 0x7FFFFFFF
    };
private:
    static VertexProgramManager *m_instance;
    rndTable *m_gl; // 0x0
    static std::map<enum VertexProgramManager::eVertexProgramsInternal,VertexProgram *,std::less<enum VertexProgramManager::eVertexProgramsInternal>,std::allocator<std::pair<enum VertexProgramManager::eVertexProgramsInternal const ,VertexProgram *> > > m_programs;
    bool release();
    bool initializeAllVertexPrograms();
    VertexProgramManager();
    ~VertexProgramManager();
public:
    static _inline VertexProgramManager *i();
    static bool startup();
    static bool shutdown();
    void initialize(rndTable *);
    _inline rndTable *getGL();
    static void setVertexProgram(eVertexPrograms newProgram);
};
static_assert(sizeof(VertexProgramManager) == 4, "Invalid VertexProgramManager size");

class VertexProgram
{
private:
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x0
    unsigned __int32 glID; // 0x18
    VertexProgramManager::eVertexProgramsInternal hw2ID; // 0x1C
    unsigned __int32 vertexAttributes; // 0x20
    bool loadProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool createProgram(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
public:
    void setVertexAttributes(unsigned __int32);
    void bind();
    _inline VertexProgram(VertexProgram const &); /* compiler_generated() */
    VertexProgram(VertexProgramManager::eVertexProgramsInternal const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline ~VertexProgram(); /* compiler_generated() */
    _inline VertexProgram &operator=(VertexProgram const &); /* compiler_generated() */
};
static_assert(sizeof(VertexProgram) == 36, "Invalid VertexProgram size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern VertexProgramManager *_sub_100AC7E0();
_inline VertexProgramManager *VertexProgramManager::i() // 0x100AC7E0
{
    mangled_assert("?i@VertexProgramManager@@SGPAV1@XZ");
    todo("implement");
    VertexProgramManager * __result = _sub_100AC7E0();
    return __result;
}

_extern rndTable *_sub_100AC7D0(VertexProgramManager *const);
_inline rndTable *VertexProgramManager::getGL() // 0x100AC7D0
{
    mangled_assert("?getGL@VertexProgramManager@@QAEPAUrndTable@@XZ");
    todo("implement");
    rndTable * __result = _sub_100AC7D0(this);
    return __result;
}

/* ---------- private code */

#endif // __VERTEX_PROGRAM_H__
#endif
