#if 0
#ifndef __SYSDIALOGINTERFACE_H__
#define __SYSDIALOGINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysDialogInterface
{
public:
    SysDialogInterface *i();
    virtual void Simple(char const *, char const *) = 0;
    virtual __int32 Complex(__int32, char const *, __int32) = 0;
    virtual void FatalErrorWait(__int32, char const *, bool) = 0;
protected:
    virtual ~SysDialogInterface();
public:
    SysDialogInterface(SysDialogInterface const &); /* compiler_generated() */
    SysDialogInterface(); /* compiler_generated() */
    SysDialogInterface &operator=(SysDialogInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysDialogInterface) == 4, "Invalid SysDialogInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SYSDIALOGINTERFACE_H__
/* combined */
#ifndef __SYSDIALOGINTERFACE_H__
#define __SYSDIALOGINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysDialogInterface
{
public:
    SysDialogInterface *i();
    virtual void Simple(char const *, char const *) = 0;
    virtual __int32 Complex(__int32, char const *, __int32) = 0;
    virtual void FatalErrorWait(__int32, char const *, bool) = 0;
protected:
    virtual _inline ~SysDialogInterface();
public:
    SysDialogInterface(SysDialogInterface const &); /* compiler_generated() */
    _inline SysDialogInterface(); /* compiler_generated() */
    SysDialogInterface &operator=(SysDialogInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysDialogInterface) == 4, "Invalid SysDialogInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline SysDialogInterface::~SysDialogInterface() // 0x10007857
{
    mangled_assert("??1SysDialogInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SYSDIALOGINTERFACE_H__
#endif
