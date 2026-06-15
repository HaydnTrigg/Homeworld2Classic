#if 0
#ifndef __SYSUTILINTERFACE_H__
#define __SYSUTILINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysUtilInterface
{
public:
    static SysUtilInterface *i();
    virtual void shutdownMessagePost(__int32) = 0;
    virtual unsigned __int32 getFileTimeStamp(char const *) const = 0;
    virtual bool internetCrackURL(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const = 0;
    virtual bool getExeFilename(char *, unsigned __int32) const = 0;
protected:
    virtual ~SysUtilInterface();
public:
    SysUtilInterface(SysUtilInterface const &); /* compiler_generated() */
    SysUtilInterface(); /* compiler_generated() */
    SysUtilInterface &operator=(SysUtilInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysUtilInterface) == 4, "Invalid SysUtilInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SYSUTILINTERFACE_H__
/* combined */
#ifndef __SYSUTILINTERFACE_H__
#define __SYSUTILINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysUtilInterface
{
public:
    static SysUtilInterface *i();
    virtual void shutdownMessagePost(__int32) = 0;
    virtual unsigned __int32 getFileTimeStamp(char const *) const = 0;
    virtual bool internetCrackURL(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const = 0;
    virtual bool getExeFilename(char *, unsigned __int32) const = 0;
protected:
    virtual _inline ~SysUtilInterface();
public:
    _inline SysUtilInterface(SysUtilInterface const &); /* compiler_generated() */
    _inline SysUtilInterface(); /* compiler_generated() */
    _inline SysUtilInterface &operator=(SysUtilInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysUtilInterface) == 4, "Invalid SysUtilInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SysUtilInterface::~SysUtilInterface() // 0x10006C0B
{
    mangled_assert("??1SysUtilInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SYSUTILINTERFACE_H__
#endif
