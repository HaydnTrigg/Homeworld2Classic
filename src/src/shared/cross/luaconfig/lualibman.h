#if 0
#ifndef __LUALIBMAN_H__
#define __LUALIBMAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaLibrary
{
public:
    virtual ~LuaLibrary();
    virtual bool Register(LuaConfig &) = 0;
    virtual bool DeRegister(LuaConfig &) = 0;
    void StoreLuaBindingObj(LuaConfig &, LuaBinding::Obj const &);
    void ClearLuaBindingObj(LuaConfig &);
    typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
    struct BindInfo
    {
        LuaConfig const *state; // 0x0
        std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > bindings; // 0x4
        BindInfo(LuaLibrary::BindInfo const &); /* compiler_generated() */
        BindInfo(); /* compiler_generated() */
        _inline ~BindInfo(); /* compiler_generated() */
        LuaLibrary::BindInfo &operator=(LuaLibrary::BindInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(BindInfo) == 16, "Invalid BindInfo size");
    typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
private:
    std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > m_LCBindMap; // 0x4
public:
    LuaLibrary(LuaLibrary const &); /* compiler_generated() */
    _inline LuaLibrary(); /* compiler_generated() */
    LuaLibrary &operator=(LuaLibrary const &); /* compiler_generated() */
};
static_assert(sizeof(LuaLibrary) == 16, "Invalid LuaLibrary size");

class LuaLibMan
{
public:
    static void AddLibrary(char const *, LuaLibrary *);
    static void RemLibrary(char const *, LuaLibrary *);
private:
    static LuaLibrary *GetLibrary(char const *);
    static bool RegisterLib(LuaLibrary *, LuaConfig &);
    static bool DeRegisterLib(LuaLibrary *, LuaConfig &);
};
static_assert(sizeof(LuaLibMan) == 1, "Invalid LuaLibMan size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUALIBMAN_H__
/* combined */
#ifndef __LUALIBMAN_H__
#define __LUALIBMAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaLibrary
{
public:
    virtual ~LuaLibrary();
    virtual bool Register(LuaConfig &) = 0;
    virtual bool DeRegister(LuaConfig &) = 0;
    void StoreLuaBindingObj(LuaConfig &, LuaBinding::Obj const &);
    void ClearLuaBindingObj(LuaConfig &);
    typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
    struct BindInfo
    {
        LuaConfig const *state; // 0x0
        std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > bindings; // 0x4
        BindInfo(LuaLibrary::BindInfo const &); /* compiler_generated() */
        BindInfo(); /* compiler_generated() */
        _inline ~BindInfo(); /* compiler_generated() */
        LuaLibrary::BindInfo &operator=(LuaLibrary::BindInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(BindInfo) == 16, "Invalid BindInfo size");
    typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
private:
    std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > m_LCBindMap; // 0x4
public:
    LuaLibrary(LuaLibrary const &); /* compiler_generated() */
    LuaLibrary(); /* compiler_generated() */
    LuaLibrary &operator=(LuaLibrary const &); /* compiler_generated() */
};
static_assert(sizeof(LuaLibrary) == 16, "Invalid LuaLibrary size");

class LuaLibMan
{
public:
    static void AddLibrary(char const *name, LuaLibrary *pLib);
    static void RemLibrary(char const *name, LuaLibrary *);
private:
    static LuaLibrary *GetLibrary(char const *name);
    static bool RegisterLib(LuaLibrary *pLibrary, LuaConfig &lc);
    static bool DeRegisterLib(LuaLibrary *pLibrary, LuaConfig &lc);
};
static_assert(sizeof(LuaLibMan) == 1, "Invalid LuaLibMan size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUALIBMAN_H__
/* combined */
#ifndef __LUALIBMAN_H__
#define __LUALIBMAN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaLibrary
{
public:
    virtual ~LuaLibrary();
    virtual bool Register(LuaConfig &) = 0;
    virtual bool DeRegister(LuaConfig &) = 0;
    void StoreLuaBindingObj(LuaConfig &, LuaBinding::Obj const &);
    void ClearLuaBindingObj(LuaConfig &);
    typedef std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > BindObjList;
    struct BindInfo
    {
        LuaConfig const *state; // 0x0
        std::vector<LuaBinding::Obj,std::allocator<LuaBinding::Obj> > bindings; // 0x4
        BindInfo(LuaLibrary::BindInfo const &); /* compiler_generated() */
        BindInfo(); /* compiler_generated() */
        _inline ~BindInfo(); /* compiler_generated() */
        LuaLibrary::BindInfo &operator=(LuaLibrary::BindInfo const &); /* compiler_generated() */
    };
    static_assert(sizeof(BindInfo) == 16, "Invalid BindInfo size");
    typedef std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > BindInfoList;
private:
    std::vector<LuaLibrary::BindInfo,std::allocator<LuaLibrary::BindInfo> > m_LCBindMap; // 0x4
public:
    LuaLibrary(LuaLibrary const &); /* compiler_generated() */
    _inline LuaLibrary(); /* compiler_generated() */
    LuaLibrary &operator=(LuaLibrary const &); /* compiler_generated() */
};
static_assert(sizeof(LuaLibrary) == 16, "Invalid LuaLibrary size");

class LuaLibMan
{
public:
    static void AddLibrary(char const *, LuaLibrary *);
    static void RemLibrary(char const *, LuaLibrary *);
private:
    static LuaLibrary *GetLibrary(char const *);
    static bool RegisterLib(LuaLibrary *, LuaConfig &);
    static bool DeRegisterLib(LuaLibrary *, LuaConfig &);
};
static_assert(sizeof(LuaLibMan) == 1, "Invalid LuaLibMan size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUALIBMAN_H__
#endif
