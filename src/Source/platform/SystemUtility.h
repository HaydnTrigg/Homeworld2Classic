#if 0
#ifndef __SYSTEMUTILITY_H__
#define __SYSTEMUTILITY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysUtilImpl :
    public SysUtilInterface
{
public:
    static bool startup();
    static bool shutdown();
    static SysUtilImpl *i();
    virtual void shutdownMessagePost(__int32) override;
    virtual unsigned __int32 getFileTimeStamp(char const *) const override;
    virtual bool internetCrackURL(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &) const override;
    virtual bool getExeFilename(char *, unsigned __int32) const override;
protected:
    static SysUtilImpl *s_instance;
public:
    SysUtilImpl(SysUtilImpl const &); /* compiler_generated() */
    _inline SysUtilImpl(); /* compiler_generated() */
    virtual _inline ~SysUtilImpl() override; /* compiler_generated() */
    SysUtilImpl &operator=(SysUtilImpl const &); /* compiler_generated() */
};
static_assert(sizeof(SysUtilImpl) == 4, "Invalid SysUtilImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SYSTEMUTILITY_H__
#endif
