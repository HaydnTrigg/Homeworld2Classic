#if 0
#ifndef __LUACONFIG_H__
#define __LUACONFIG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaConfig
{
public:
    enum LuaType
    {
        LT_USERDATA = 0,
        LT_NIL,
        LT_NUMBER,
        LT_STRING,
        LT_TABLE,
        LT_FUNCTION,
    };
    enum LuaTag
    {
        LT_NOTAG = 0,
    };
    enum
    {
        DL_BASELIB = (1 << 0),
        DL_IOLIB = (1 << 1),
        DL_STRLIB = (1 << 2),
        DL_MATHLIB = (1 << 3),
        DL_DEBUGLIB = (1 << 4),
    };
    typedef __int32 (*TagMethod)(lua_State *);
    typedef __int32 (*LuaFunc)(lua_State *);
    typedef void (*CBAlert)(char const *);
    typedef void (*CBRegister)(char const *);
    typedef void (*CBClear)(char const *);
private:
    LuaConfig(LuaConfig const &);
public:
    LuaConfig(char const *);
    ~LuaConfig();
    char const *GetName() const;
    bool IsGarbageCollect() const;
    void EnableGarbageCollect(bool);
    void GarbageCollect();
    LuaConfig::LuaType GetType(char const *);
    bool GetFloat(char const *, float &);
    bool GetInt(char const *, __int32 &);
    bool GetBool(char const *, bool &);
    bool GetDouble(char const *, double &);
    bool GetString(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool GetString(char const *, char *, unsigned __int32);
    unsigned long GetStringArray(char const *, char **, unsigned __int32, unsigned __int32);
    bool GetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    bool GetWString(char const *, wchar_t *, unsigned __int32);
    unsigned long GetIntArray(char const *, __int32 *, unsigned __int32);
    bool GetIntArray(char const *, std::vector<int,std::allocator<int> > &);
    unsigned long GetByteArray(char const *, unsigned char *, unsigned __int32);
    unsigned long GetFloatArray(char const *, float *, unsigned __int32);
    bool GetFloatArray(char const *, std::vector<float,std::allocator<float> > &);
    void SetIntArray(char const *, __int32 const *, unsigned __int32);
    void SetByteArray(char const *, unsigned char const *, unsigned __int32);
    void SetNumber(char const *, double const);
    void SetNumberArray(char const *, double const *, unsigned __int32);
    void SetString(char const *, char const *);
    void SetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    void SetWString(char const *, wchar_t const *);
    void ClearVariable(char const *);
    void ClearTag(char const *);
    void AddTable(char const *);
    bool DoesExist(char const *);
    void AddBool(bool *, char const *);
    void AddInt(__int32 *, char const *);
    void AddULong(unsigned __int32 *, char const *);
    void AddFloat(float *, char const *);
    __int32 AddTag(char const *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
    static __int32 GetTag(lua_State *, char const *);
    __int32 GetTag(char const *);
    void SetTagPtr(char const *, void *, char const *);
    static void *GetTagPtr(lua_State *, char const *, char const *);
    void *GetTagPtr(char const *, char const *);
    __int32 CreateRef(char const *);
    void RemoveRef(__int32);
    bool CallRef(__int32);
    bool RegisterLibrary(char const *);
    bool DeRegisterLibrary(char const *);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *), unsigned __int32, void **);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *));
    void ClearFunction(char const *);
    void SetOnRegister(void (*const &)(char const *));
    void SetOnClear(void (*const &)(char const *));
    void SetOnAlert(void (*const &)(char const *));
    void FunctionOverwriteProtection(bool);
    class Iterator
    {
    public:
        Iterator(LuaConfig::Iterator const &); /* compiler_generated() */
        Iterator(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        Iterator();
        void reset();
        void set(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &get() const;
        char const *c_str() const;
        LuaConfig::LuaType getType() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_buf; // 0x0
        LuaConfig::LuaType m_type; // 0x18
    public:
        ~Iterator(); /* compiler_generated() */
        LuaConfig::Iterator &operator=(LuaConfig::Iterator const &); /* compiler_generated() */
    };
    static_assert(sizeof(Iterator) == 28, "Invalid Iterator size");
    unsigned __int32 CountEntry();
    bool NextEntry(LuaConfig::Iterator &);
    bool NextEntry(char *, unsigned __int32, LuaConfig::LuaType *);
    void PushGlobalTable();
    void PushTable(char const *);
    void PushTableEx(char const *);
    void PopTable();
    bool RunString(char const *, bool);
    bool RunBuffer(char const *, unsigned __int32);
    bool LoadFile(char const *);
    bool Load(ByteStream *, long);
    void SaveAll(bool, bool);
    bool SaveVar(char const *, unsigned __int32, bool, bool);
    bool StartSave(ByteStream *);
    bool StartSave(char const *);
    bool EndSave();
    void RegisterDefaultTypes();
    void RegisterDefaultLibs(__int32);
    lua_State *GetState();
    class Data;
private:
    boost::scoped_ptr<LuaConfig::Data> m_pimpl; // 0x0
    char const *GetStringInternal(char const *);
    LuaConfig &operator=(LuaConfig const &);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(LuaConfig) == 4, "Invalid LuaConfig size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUACONFIG_H__
/* combined */
#ifndef __LUACONFIG_H__
#define __LUACONFIG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaConfig
{
public:
    enum LuaType
    {
        LT_USERDATA = 0,
        LT_NIL,
        LT_NUMBER,
        LT_STRING,
        LT_TABLE,
        LT_FUNCTION,
    };
    enum LuaTag
    {
        LT_NOTAG = 0,
    };
    enum
    {
        DL_BASELIB = (1 << 0),
        DL_IOLIB = (1 << 1),
        DL_STRLIB = (1 << 2),
        DL_MATHLIB = (1 << 3),
        DL_DEBUGLIB = (1 << 4),
    };
    typedef __int32 (*TagMethod)(lua_State *);
    typedef __int32 (*LuaFunc)(lua_State *);
    typedef void (*CBAlert)(char const *);
    typedef void (*CBRegister)(char const *);
    typedef void (*CBClear)(char const *);
private:
    LuaConfig(LuaConfig const &);
public:
    LuaConfig(char const *);
    ~LuaConfig();
    char const *GetName() const;
    bool IsGarbageCollect() const;
    void EnableGarbageCollect(bool);
    void GarbageCollect();
    LuaConfig::LuaType GetType(char const *);
    bool GetFloat(char const *, float &);
    bool GetInt(char const *, __int32 &);
    bool GetBool(char const *, bool &);
    bool GetDouble(char const *, double &);
    bool GetString(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool GetString(char const *, char *, unsigned __int32);
    unsigned long GetStringArray(char const *, char **, unsigned __int32, unsigned __int32);
    bool GetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    bool GetWString(char const *, wchar_t *, unsigned __int32);
    unsigned long GetIntArray(char const *, __int32 *, unsigned __int32);
    bool GetIntArray(char const *, std::vector<int,std::allocator<int> > &);
    unsigned long GetByteArray(char const *, unsigned char *, unsigned __int32);
    unsigned long GetFloatArray(char const *, float *, unsigned __int32);
    bool GetFloatArray(char const *, std::vector<float,std::allocator<float> > &);
    void SetIntArray(char const *, __int32 const *, unsigned __int32);
    void SetByteArray(char const *, unsigned char const *, unsigned __int32);
    void SetNumber(char const *, double const);
    void SetNumberArray(char const *, double const *, unsigned __int32);
    void SetString(char const *, char const *);
    void SetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    void SetWString(char const *, wchar_t const *);
    void ClearVariable(char const *);
    void ClearTag(char const *);
    void AddTable(char const *);
    bool DoesExist(char const *);
    void AddBool(bool *, char const *);
    void AddInt(__int32 *, char const *);
    void AddULong(unsigned __int32 *, char const *);
    void AddFloat(float *, char const *);
    __int32 AddTag(char const *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
    static __int32 GetTag(lua_State *, char const *);
    __int32 GetTag(char const *);
    void SetTagPtr(char const *, void *, char const *);
    static void *GetTagPtr(lua_State *, char const *, char const *);
    void *GetTagPtr(char const *, char const *);
    __int32 CreateRef(char const *);
    void RemoveRef(__int32);
    bool CallRef(__int32);
    bool RegisterLibrary(char const *);
    bool DeRegisterLibrary(char const *);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *), unsigned __int32, void **);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *));
    void ClearFunction(char const *);
    void SetOnRegister(void (*const &)(char const *));
    void SetOnClear(void (*const &)(char const *));
    void SetOnAlert(void (*const &)(char const *));
    void FunctionOverwriteProtection(bool);
    class Iterator
    {
    public:
        Iterator(LuaConfig::Iterator const &); /* compiler_generated() */
        Iterator(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        _inline Iterator();
        void reset();
        void set(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &get() const;
        _inline char const *c_str() const;
        _inline LuaConfig::LuaType getType() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_buf; // 0x0
        LuaConfig::LuaType m_type; // 0x18
    public:
        _inline ~Iterator(); /* compiler_generated() */
        LuaConfig::Iterator &operator=(LuaConfig::Iterator const &); /* compiler_generated() */
    };
    static_assert(sizeof(Iterator) == 28, "Invalid Iterator size");
    unsigned __int32 CountEntry();
    bool NextEntry(LuaConfig::Iterator &);
    bool NextEntry(char *, unsigned __int32, LuaConfig::LuaType *);
    void PushGlobalTable();
    void PushTable(char const *);
    void PushTableEx(char const *);
    void PopTable();
    bool RunString(char const *, bool);
    bool RunBuffer(char const *, unsigned __int32);
    bool LoadFile(char const *);
    bool Load(ByteStream *, long);
    void SaveAll(bool, bool);
    bool SaveVar(char const *, unsigned __int32, bool, bool);
    bool StartSave(ByteStream *);
    bool StartSave(char const *);
    bool EndSave();
    void RegisterDefaultTypes();
    void RegisterDefaultLibs(__int32);
    lua_State *GetState();
    class Data;
private:
    boost::scoped_ptr<LuaConfig::Data> m_pimpl; // 0x0
    char const *GetStringInternal(char const *);
    LuaConfig &operator=(LuaConfig const &);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(LuaConfig) == 4, "Invalid LuaConfig size");

/* ---------- prototypes */

extern _inline bool LCGetULong(LuaConfig &lc, char const *name, unsigned long &out);
extern _inline void LCSetULong(LuaConfig &lc, char const *name, unsigned long const in);

/* ---------- globals */

/* ---------- public code */

_extern _sub_4EDD26(LuaConfig::Iterator *const);
_inline LuaConfig::Iterator::Iterator() // 0x4EDD26
{
    mangled_assert("??0Iterator@LuaConfig@@QAE@XZ");
    todo("implement");
    _sub_4EDD26(this);
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_sub_5AD07E(LuaConfig::Iterator const *const);
_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &LuaConfig::Iterator::get() const // 0x5AD07E
{
    mangled_assert("?get@Iterator@LuaConfig@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > const & __result = _sub_5AD07E(this);
    return __result;
}

_extern char const *_sub_4EE973(LuaConfig::Iterator const *const);
_inline char const *LuaConfig::Iterator::c_str() const // 0x4EE973
{
    mangled_assert("?c_str@Iterator@LuaConfig@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4EE973(this);
    return __result;
}

_extern LuaConfig::LuaType _sub_56F68B(LuaConfig::Iterator const *const);
_inline LuaConfig::LuaType LuaConfig::Iterator::getType() const // 0x56F68B
{
    mangled_assert("?getType@Iterator@LuaConfig@@QBE?AW4LuaType@2@XZ");
    todo("implement");
    LuaConfig::LuaType __result = _sub_56F68B(this);
    return __result;
}

_extern bool _sub_5E8651(LuaConfig &, char const *, unsigned long &);
_inline bool LCGetULong(LuaConfig &lc, char const *name, unsigned long &out) // 0x5E8651
{
    mangled_assert("?LCGetULong@@YG_NAAVLuaConfig@@PBDAAK@Z");
    todo("implement");
    bool __result = _sub_5E8651(lc, name, out);
    return __result;
}

_extern void _sub_5E867D(LuaConfig &, char const *, unsigned long const);
_inline void LCSetULong(LuaConfig &lc, char const *name, unsigned long const in) // 0x5E867D
{
    mangled_assert("?LCSetULong@@YGXAAVLuaConfig@@PBDK@Z");
    todo("implement");
    _sub_5E867D(lc, name, in);
}

/* ---------- private code */

#endif // __LUACONFIG_H__
/* combined */
#ifndef __LUACONFIG_H__
#define __LUACONFIG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaConfig
{
public:
    enum LuaType
    {
        LT_USERDATA = 0,
        LT_NIL,
        LT_NUMBER,
        LT_STRING,
        LT_TABLE,
        LT_FUNCTION,
    };
    enum LuaTag
    {
        LT_NOTAG = 0,
    };
    enum
    {
        DL_BASELIB = (1 << 0),
        DL_IOLIB = (1 << 1),
        DL_STRLIB = (1 << 2),
        DL_MATHLIB = (1 << 3),
        DL_DEBUGLIB = (1 << 4),
    };
    typedef __int32 (*TagMethod)(lua_State *);
    typedef __int32 (*LuaFunc)(lua_State *);
    typedef void (*CBAlert)(char const *);
    typedef void (*CBRegister)(char const *);
    typedef void (*CBClear)(char const *);
private:
    LuaConfig(LuaConfig const &);
public:
    LuaConfig(char const *);
    ~LuaConfig();
    char const *GetName() const;
    bool IsGarbageCollect() const;
    void EnableGarbageCollect(bool);
    void GarbageCollect();
    LuaConfig::LuaType GetType(char const *);
    bool GetFloat(char const *, float &);
    bool GetInt(char const *, __int32 &);
    bool GetBool(char const *, bool &);
    bool GetDouble(char const *, double &);
    bool GetString(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool GetString(char const *, char *, unsigned __int32);
    unsigned long GetStringArray(char const *, char **, unsigned __int32, unsigned __int32);
    bool GetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    bool GetWString(char const *, wchar_t *, unsigned __int32);
    unsigned long GetIntArray(char const *, __int32 *, unsigned __int32);
    bool GetIntArray(char const *, std::vector<int,std::allocator<int> > &);
    unsigned long GetByteArray(char const *, unsigned char *, unsigned __int32);
    unsigned long GetFloatArray(char const *, float *, unsigned __int32);
    bool GetFloatArray(char const *, std::vector<float,std::allocator<float> > &);
    void SetIntArray(char const *, __int32 const *, unsigned __int32);
    void SetByteArray(char const *, unsigned char const *, unsigned __int32);
    void SetNumber(char const *, double const);
    void SetNumberArray(char const *, double const *, unsigned __int32);
    void SetString(char const *, char const *);
    void SetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    void SetWString(char const *, wchar_t const *);
    void ClearVariable(char const *);
    void ClearTag(char const *);
    void AddTable(char const *);
    bool DoesExist(char const *);
    void AddBool(bool *, char const *);
    void AddInt(__int32 *, char const *);
    void AddULong(unsigned __int32 *, char const *);
    void AddFloat(float *, char const *);
    __int32 AddTag(char const *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
    static __int32 GetTag(lua_State *state, char const *name);
    __int32 GetTag(char const *);
    void SetTagPtr(char const *, void *, char const *);
    static void *GetTagPtr(lua_State *state, char const *name, char const *tagName);
    void *GetTagPtr(char const *, char const *);
    __int32 CreateRef(char const *);
    void RemoveRef(__int32);
    bool CallRef(__int32);
    bool RegisterLibrary(char const *);
    bool DeRegisterLibrary(char const *);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *), unsigned __int32, void **);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *));
    void ClearFunction(char const *);
    void SetOnRegister(void (*const &)(char const *));
    void SetOnClear(void (*const &)(char const *));
    void SetOnAlert(void (*const &)(char const *));
    void FunctionOverwriteProtection(bool);
    class Iterator
    {
    public:
        Iterator(LuaConfig::Iterator const &); /* compiler_generated() */
        Iterator(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        Iterator();
        void reset();
        void set(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &get() const;
        char const *c_str() const;
        LuaConfig::LuaType getType() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_buf; // 0x0
        LuaConfig::LuaType m_type; // 0x18
    public:
        ~Iterator(); /* compiler_generated() */
        LuaConfig::Iterator &operator=(LuaConfig::Iterator const &); /* compiler_generated() */
    };
    static_assert(sizeof(Iterator) == 28, "Invalid Iterator size");
    unsigned __int32 CountEntry();
    bool NextEntry(LuaConfig::Iterator &);
    bool NextEntry(char *, unsigned __int32, LuaConfig::LuaType *);
    void PushGlobalTable();
    void PushTable(char const *);
    void PushTableEx(char const *);
    void PopTable();
    bool RunString(char const *, bool);
    bool RunBuffer(char const *, unsigned __int32);
    bool LoadFile(char const *);
    bool Load(ByteStream *, long);
    void SaveAll(bool, bool);
    bool SaveVar(char const *, unsigned __int32, bool, bool);
    bool StartSave(ByteStream *);
    bool StartSave(char const *);
    bool EndSave();
    void RegisterDefaultTypes();
    void RegisterDefaultLibs(__int32);
    lua_State *GetState();
    class Data;
private:
    boost::scoped_ptr<LuaConfig::Data> m_pimpl; // 0x0
    char const *GetStringInternal(char const *);
    LuaConfig &operator=(LuaConfig const &);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(LuaConfig) == 4, "Invalid LuaConfig size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LUACONFIG_H__
/* combined */
#ifndef __LUACONFIG_H__
#define __LUACONFIG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LuaConfig
{
public:
    enum LuaType
    {
        LT_USERDATA = 0,
        LT_NIL,
        LT_NUMBER,
        LT_STRING,
        LT_TABLE,
        LT_FUNCTION,
    };
    enum LuaTag
    {
        LT_NOTAG = 0,
    };
    enum
    {
        DL_BASELIB = (1 << 0),
        DL_IOLIB = (1 << 1),
        DL_STRLIB = (1 << 2),
        DL_MATHLIB = (1 << 3),
        DL_DEBUGLIB = (1 << 4),
    };
    typedef __int32 (*TagMethod)(lua_State *);
    typedef __int32 (*LuaFunc)(lua_State *);
    typedef void (*CBAlert)(char const *);
    typedef void (*CBRegister)(char const *);
    typedef void (*CBClear)(char const *);
private:
    LuaConfig(LuaConfig const &);
public:
    LuaConfig(char const *);
    ~LuaConfig();
    char const *GetName() const;
    bool IsGarbageCollect() const;
    void EnableGarbageCollect(bool);
    void GarbageCollect();
    LuaConfig::LuaType GetType(char const *);
    bool GetFloat(char const *, float &);
    bool GetInt(char const *, __int32 &);
    bool GetBool(char const *, bool &);
    bool GetDouble(char const *, double &);
    bool GetString(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool GetString(char const *, char *, unsigned __int32);
    unsigned long GetStringArray(char const *, char **, unsigned __int32, unsigned __int32);
    bool GetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
    bool GetWString(char const *, wchar_t *, unsigned __int32);
    unsigned long GetIntArray(char const *, __int32 *, unsigned __int32);
    bool GetIntArray(char const *, std::vector<int,std::allocator<int> > &);
    unsigned long GetByteArray(char const *, unsigned char *, unsigned __int32);
    unsigned long GetFloatArray(char const *, float *, unsigned __int32);
    bool GetFloatArray(char const *, std::vector<float,std::allocator<float> > &);
    void SetIntArray(char const *, __int32 const *, unsigned __int32);
    void SetByteArray(char const *, unsigned char const *, unsigned __int32);
    void SetNumber(char const *, double const);
    void SetNumberArray(char const *, double const *, unsigned __int32);
    void SetString(char const *, char const *);
    void SetStringArray(char const *, std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    void SetWString(char const *, wchar_t const *);
    void ClearVariable(char const *);
    void ClearTag(char const *);
    void AddTable(char const *);
    bool DoesExist(char const *);
    void AddBool(bool *, char const *);
    void AddInt(__int32 *, char const *);
    void AddULong(unsigned __int32 *, char const *);
    void AddFloat(float *, char const *);
    __int32 AddTag(char const *, __int32 (*)(lua_State *), __int32 (*)(lua_State *));
    static __int32 GetTag(lua_State *, char const *);
    __int32 GetTag(char const *);
    void SetTagPtr(char const *, void *, char const *);
    static void *GetTagPtr(lua_State *, char const *, char const *);
    void *GetTagPtr(char const *, char const *);
    __int32 CreateRef(char const *);
    void RemoveRef(__int32);
    bool CallRef(__int32);
    bool RegisterLibrary(char const *);
    bool DeRegisterLibrary(char const *);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *), unsigned __int32, void **);
    void RegisterCFunc(char const *, __int32 (*)(lua_State *));
    void ClearFunction(char const *);
    void SetOnRegister(void (*const &)(char const *));
    void SetOnClear(void (*const &)(char const *));
    void SetOnAlert(void (*const &)(char const *));
    void FunctionOverwriteProtection(bool);
    class Iterator
    {
    public:
        Iterator(LuaConfig::Iterator const &); /* compiler_generated() */
        Iterator(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        _inline Iterator();
        void reset();
        void set(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &get() const;
        _inline char const *c_str() const;
        _inline LuaConfig::LuaType getType() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_buf; // 0x0
        LuaConfig::LuaType m_type; // 0x18
    public:
        _inline ~Iterator(); /* compiler_generated() */
        LuaConfig::Iterator &operator=(LuaConfig::Iterator const &); /* compiler_generated() */
    };
    static_assert(sizeof(Iterator) == 28, "Invalid Iterator size");
    unsigned __int32 CountEntry();
    bool NextEntry(LuaConfig::Iterator &);
    bool NextEntry(char *, unsigned __int32, LuaConfig::LuaType *);
    void PushGlobalTable();
    void PushTable(char const *);
    void PushTableEx(char const *);
    void PopTable();
    bool RunString(char const *, bool);
    bool RunBuffer(char const *, unsigned __int32);
    bool LoadFile(char const *);
    bool Load(ByteStream *, long);
    void SaveAll(bool, bool);
    bool SaveVar(char const *, unsigned __int32, bool, bool);
    bool StartSave(ByteStream *);
    bool StartSave(char const *);
    bool EndSave();
    void RegisterDefaultTypes();
    void RegisterDefaultLibs(__int32);
    lua_State *GetState();
    class Data;
private:
    boost::scoped_ptr<LuaConfig::Data> m_pimpl; // 0x0
    char const *GetStringInternal(char const *);
    LuaConfig &operator=(LuaConfig const &);
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(LuaConfig) == 4, "Invalid LuaConfig size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1009F230(LuaConfig::Iterator *const);
_inline LuaConfig::Iterator::Iterator() // 0x1009F230
{
    mangled_assert("??0Iterator@LuaConfig@@QAE@XZ");
    todo("implement");
    _sub_1009F230(this);
}

_extern char const *_sub_1009FB50(LuaConfig::Iterator const *const);
_inline char const *LuaConfig::Iterator::c_str() const // 0x1009FB50
{
    mangled_assert("?c_str@Iterator@LuaConfig@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_1009FB50(this);
    return __result;
}

_extern LuaConfig::LuaType _sub_1009FE10(LuaConfig::Iterator const *const);
_inline LuaConfig::LuaType LuaConfig::Iterator::getType() const // 0x1009FE10
{
    mangled_assert("?getType@Iterator@LuaConfig@@QBE?AW4LuaType@2@XZ");
    todo("implement");
    LuaConfig::LuaType __result = _sub_1009FE10(this);
    return __result;
}

/* ---------- private code */

#endif // __LUACONFIG_H__
#endif
