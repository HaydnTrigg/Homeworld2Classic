#if 0
#ifndef __PROFILE_H__
#define __PROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Profile::MemHook
{
public:
    virtual unsigned __int32 getNumberOfAllocations() const = 0;
    virtual unsigned __int32 getNumberOfBytesAllocated() const = 0;
    MemHook(Profile::MemHook const &); /* compiler_generated() */
    MemHook(); /* compiler_generated() */
    Profile::MemHook &operator=(Profile::MemHook const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::MemHook) == 4, "Invalid Profile::MemHook size");

class Profile::Stats
{
public:
    Stats();
    void EnterFunction();
    void LeaveFunction();
    Profile::Stats &operator+=(Profile::Stats const &);
    Profile::Stats &operator-=(Profile::Stats const &);
    void Dump(bool, bool, std::basic_ostream<char,std::char_traits<char> > &) const;
    static void SetEnable(bool);
    static void SetMemHook(Profile::MemHook const *);
private:
    unsigned __int32 m_nbCall; // 0x0
    unsigned long long m_cycles; // 0x8
    unsigned __int32 m_nbAllocations; // 0x10
    unsigned __int32 m_nbBytes; // 0x14
    unsigned long long m_startTime; // 0x18
    unsigned __int32 m_startAllocations; // 0x20
    unsigned __int32 m_startBytes; // 0x24
    static bool s_enabled;
    static Profile::MemHook const *s_memhook;
};
static_assert(sizeof(Profile::Stats) == 40, "Invalid Profile::Stats size");

class Profile::FunctionInfo
{
public:
    FunctionInfo(Profile::FunctionInfo const &); /* compiler_generated() */
    FunctionInfo(char const *, char const *, unsigned __int32);
    void MakeRoot();
    Profile::Stats *GetStats(Profile::FunctionInfo const *);
    Profile::Stats *GetOwnStats();
    static void DumpAll(bool, std::basic_ostream<char,std::char_traits<char> > &);
    static void ClearAll();
    typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
    typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
private:
    bool m_bRoot; // 0x0
    std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > m_childrenStats; // 0x4
    Profile::Stats m_ownStats; // 0x10
    char const *m_name; // 0x38
    char const *m_source; // 0x3C
    unsigned __int32 m_line; // 0x40
    bool m_dumping; // 0x44
    static std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > s_functions;
    struct FunctionNameCompare :
        public std::binary_function<Profile::FunctionInfo *,Profile::FunctionInfo *,bool>
    {
        bool operator()(Profile::FunctionInfo const *, Profile::FunctionInfo const *) const;
    };
    static_assert(sizeof(FunctionNameCompare) == 1, "Invalid FunctionNameCompare size");
    void Dump(bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &) const;
public:
    ~FunctionInfo(); /* compiler_generated() */
    Profile::FunctionInfo &operator=(Profile::FunctionInfo const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::FunctionInfo) == 72, "Invalid Profile::FunctionInfo size");

struct Profile::Proxy
{
    Proxy(Profile::FunctionInfo *);
    ~Proxy();
private:
    Profile::FunctionInfo *m_function; // 0x0
    Profile::Proxy *m_parent; // 0x4
    Profile::Stats m_delta; // 0x8
    static Profile::Proxy *s_active;
};
static_assert(sizeof(Profile::Proxy) == 48, "Invalid Profile::Proxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PROFILE_H__
/* combined */
#ifndef __PROFILE_H__
#define __PROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Profile::MemHook
{
public:
    virtual unsigned __int32 getNumberOfAllocations() const = 0;
    virtual unsigned __int32 getNumberOfBytesAllocated() const = 0;
    MemHook(Profile::MemHook const &); /* compiler_generated() */
    _inline MemHook(); /* compiler_generated() */
    Profile::MemHook &operator=(Profile::MemHook const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::MemHook) == 4, "Invalid Profile::MemHook size");

class Profile::Stats
{
public:
    Stats();
    void EnterFunction();
    void LeaveFunction();
    Profile::Stats &operator+=(Profile::Stats const &);
    Profile::Stats &operator-=(Profile::Stats const &);
    void Dump(bool, bool, std::basic_ostream<char,std::char_traits<char> > &) const;
    static void SetEnable(bool);
    static void SetMemHook(Profile::MemHook const *);
private:
    unsigned __int32 m_nbCall; // 0x0
    unsigned long long m_cycles; // 0x8
    unsigned __int32 m_nbAllocations; // 0x10
    unsigned __int32 m_nbBytes; // 0x14
    unsigned long long m_startTime; // 0x18
    unsigned __int32 m_startAllocations; // 0x20
    unsigned __int32 m_startBytes; // 0x24
    static bool s_enabled;
    static Profile::MemHook const *s_memhook;
};
static_assert(sizeof(Profile::Stats) == 40, "Invalid Profile::Stats size");

class Profile::FunctionInfo
{
public:
    FunctionInfo(Profile::FunctionInfo const &); /* compiler_generated() */
    FunctionInfo(char const *, char const *, unsigned __int32);
    void MakeRoot();
    Profile::Stats *GetStats(Profile::FunctionInfo const *);
    Profile::Stats *GetOwnStats();
    static void DumpAll(bool, std::basic_ostream<char,std::char_traits<char> > &);
    static void ClearAll();
    typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
    typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
private:
    bool m_bRoot; // 0x0
    std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > m_childrenStats; // 0x4
    Profile::Stats m_ownStats; // 0x10
    char const *m_name; // 0x38
    char const *m_source; // 0x3C
    unsigned __int32 m_line; // 0x40
    bool m_dumping; // 0x44
    static std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > s_functions;
    struct FunctionNameCompare :
        public std::binary_function<Profile::FunctionInfo *,Profile::FunctionInfo *,bool>
    {
        bool operator()(Profile::FunctionInfo const *, Profile::FunctionInfo const *) const;
    };
    static_assert(sizeof(FunctionNameCompare) == 1, "Invalid FunctionNameCompare size");
    void Dump(bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &) const;
public:
    ~FunctionInfo(); /* compiler_generated() */
    Profile::FunctionInfo &operator=(Profile::FunctionInfo const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::FunctionInfo) == 72, "Invalid Profile::FunctionInfo size");

struct Profile::Proxy
{
    Proxy(Profile::FunctionInfo *);
    ~Proxy();
private:
    Profile::FunctionInfo *m_function; // 0x0
    Profile::Proxy *m_parent; // 0x4
    Profile::Stats m_delta; // 0x8
    static Profile::Proxy *s_active;
};
static_assert(sizeof(Profile::Proxy) == 48, "Invalid Profile::Proxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PROFILE_H__
/* combined */
#ifndef __PROFILE_H__
#define __PROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Profile::MemHook
{
public:
    virtual unsigned __int32 getNumberOfAllocations() const = 0;
    virtual unsigned __int32 getNumberOfBytesAllocated() const = 0;
    MemHook(Profile::MemHook const &); /* compiler_generated() */
    MemHook(); /* compiler_generated() */
    Profile::MemHook &operator=(Profile::MemHook const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::MemHook) == 4, "Invalid Profile::MemHook size");

class Profile::Stats
{
public:
    Stats();
    void EnterFunction();
    void LeaveFunction();
    Profile::Stats &operator+=(Profile::Stats const &);
    Profile::Stats &operator-=(Profile::Stats const &);
    void Dump(bool, bool, std::basic_ostream<char,std::char_traits<char> > &) const;
    static void SetEnable(bool);
    static void SetMemHook(Profile::MemHook const *);
private:
    unsigned __int32 m_nbCall; // 0x0
    unsigned long long m_cycles; // 0x8
    unsigned __int32 m_nbAllocations; // 0x10
    unsigned __int32 m_nbBytes; // 0x14
    unsigned long long m_startTime; // 0x18
    unsigned __int32 m_startAllocations; // 0x20
    unsigned __int32 m_startBytes; // 0x24
    static bool s_enabled;
    static Profile::MemHook const *s_memhook;
};
static_assert(sizeof(Profile::Stats) == 40, "Invalid Profile::Stats size");

class Profile::FunctionInfo
{
public:
    FunctionInfo(Profile::FunctionInfo const &); /* compiler_generated() */
    FunctionInfo(char const *, char const *, unsigned __int32);
    void MakeRoot();
    Profile::Stats *GetStats(Profile::FunctionInfo const *);
    Profile::Stats *GetOwnStats();
    static void DumpAll(bool, std::basic_ostream<char,std::char_traits<char> > &);
    static void ClearAll();
    typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
    typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
private:
    bool m_bRoot; // 0x0
    std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > m_childrenStats; // 0x4
    Profile::Stats m_ownStats; // 0x10
    char const *m_name; // 0x38
    char const *m_source; // 0x3C
    unsigned __int32 m_line; // 0x40
    bool m_dumping; // 0x44
    static std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > s_functions;
    struct FunctionNameCompare :
        public std::binary_function<Profile::FunctionInfo *,Profile::FunctionInfo *,bool>
    {
        bool operator()(Profile::FunctionInfo const *, Profile::FunctionInfo const *) const;
    };
    static_assert(sizeof(FunctionNameCompare) == 1, "Invalid FunctionNameCompare size");
    void Dump(bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &) const;
public:
    ~FunctionInfo(); /* compiler_generated() */
    Profile::FunctionInfo &operator=(Profile::FunctionInfo const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::FunctionInfo) == 72, "Invalid Profile::FunctionInfo size");

struct Profile::Proxy
{
    Proxy(Profile::FunctionInfo *);
    ~Proxy();
private:
    Profile::FunctionInfo *m_function; // 0x0
    Profile::Proxy *m_parent; // 0x4
    Profile::Stats m_delta; // 0x8
    static Profile::Proxy *s_active;
};
static_assert(sizeof(Profile::Proxy) == 48, "Invalid Profile::Proxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PROFILE_H__
/* combined */
#ifndef __PROFILE_H__
#define __PROFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Profile::MemHook
{
public:
    virtual unsigned __int32 getNumberOfAllocations() const = 0;
    virtual unsigned __int32 getNumberOfBytesAllocated() const = 0;
    MemHook(Profile::MemHook const &); /* compiler_generated() */
    MemHook(); /* compiler_generated() */
    Profile::MemHook &operator=(Profile::MemHook const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::MemHook) == 4, "Invalid Profile::MemHook size");

class Profile::Stats
{
public:
    _inline Stats();
    void EnterFunction();
    void LeaveFunction();
    _inline Profile::Stats &operator+=(Profile::Stats const &);
    _inline Profile::Stats &operator-=(Profile::Stats const &);
    void Dump(bool, bool, std::basic_ostream<char,std::char_traits<char> > &) const;
    static void SetEnable(bool);
    static void SetMemHook(Profile::MemHook const *);
private:
    unsigned __int32 m_nbCall; // 0x0
    unsigned long long m_cycles; // 0x8
    unsigned __int32 m_nbAllocations; // 0x10
    unsigned __int32 m_nbBytes; // 0x14
    unsigned long long m_startTime; // 0x18
    unsigned __int32 m_startAllocations; // 0x20
    unsigned __int32 m_startBytes; // 0x24
    static bool s_enabled;
    static Profile::MemHook const *s_memhook;
};
static_assert(sizeof(Profile::Stats) == 40, "Invalid Profile::Stats size");

class Profile::FunctionInfo
{
public:
    FunctionInfo(Profile::FunctionInfo const &); /* compiler_generated() */
    FunctionInfo(char const *, char const *, unsigned __int32);
    void MakeRoot();
    Profile::Stats *GetStats(Profile::FunctionInfo const *);
    Profile::Stats *GetOwnStats();
    static void DumpAll(bool bNewFormat, std::basic_ostream<char,std::char_traits<char> > &stream);
    static void ClearAll();
    typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
    typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
private:
    bool m_bRoot; // 0x0
    std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > m_childrenStats; // 0x4
    Profile::Stats m_ownStats; // 0x10
    char const *m_name; // 0x38
    char const *m_source; // 0x3C
    unsigned __int32 m_line; // 0x40
    bool m_dumping; // 0x44
    static std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > s_functions;
    struct FunctionNameCompare :
        public std::binary_function<Profile::FunctionInfo *,Profile::FunctionInfo *,bool>
    {
        bool operator()(Profile::FunctionInfo const *, Profile::FunctionInfo const *) const;
    };
    static_assert(sizeof(FunctionNameCompare) == 1, "Invalid FunctionNameCompare size");
    void Dump(bool, std::basic_ostream<char,std::char_traits<char> > &, Profile::Stats const &) const;
public:
    ~FunctionInfo(); /* compiler_generated() */
    Profile::FunctionInfo &operator=(Profile::FunctionInfo const &); /* compiler_generated() */
};
static_assert(sizeof(Profile::FunctionInfo) == 72, "Invalid Profile::FunctionInfo size");

struct Profile::Proxy
{
    Proxy(Profile::FunctionInfo *);
    ~Proxy();
private:
    Profile::FunctionInfo *m_function; // 0x0
    Profile::Proxy *m_parent; // 0x4
    Profile::Stats m_delta; // 0x8
    static Profile::Proxy *s_active;
};
static_assert(sizeof(Profile::Proxy) == 48, "Invalid Profile::Proxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Profile::Stats::Stats() // 0x10001B30
{
    mangled_assert("??0Stats@Profile@@QAE@XZ");
    todo("implement");
}

_inline Profile::Stats &Profile::Stats::operator+=(Profile::Stats const &) // 0x10001F30
{
    mangled_assert("??YStats@Profile@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

_inline Profile::Stats &Profile::Stats::operator-=(Profile::Stats const &) // 0x10001F60
{
    mangled_assert("??ZStats@Profile@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

_inline bool Profile::FunctionInfo::FunctionNameCompare::operator()(Profile::FunctionInfo const *, Profile::FunctionInfo const *) const // 0x10001F10
{
    mangled_assert("??RFunctionNameCompare@FunctionInfo@Profile@@QBE_NPBV12@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PROFILE_H__
#endif
