#if 0
#ifndef __MAININTERFACE_H__
#define __MAININTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MainInterface
{
public:
    static MainInterface *i();
    virtual void setActivateCallback(void (*)(unsigned __int32)) = 0;
    virtual void setDeactivateCallback(void (*)(unsigned __int32)) = 0;
    virtual unsigned __int32 getInstanceHandle() const = 0;
    virtual bool processMessages() = 0;
    virtual unsigned __int32 getProcessID() const = 0;
    virtual bool shellExecute(char const *, char const *, char const *, char *, unsigned __int32) const = 0;
protected:
    virtual ~MainInterface();
public:
    MainInterface(MainInterface const &); /* compiler_generated() */
    MainInterface(); /* compiler_generated() */
    MainInterface &operator=(MainInterface const &); /* compiler_generated() */
};
static_assert(sizeof(MainInterface) == 4, "Invalid MainInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MAININTERFACE_H__
/* combined */
#ifndef __MAININTERFACE_H__
#define __MAININTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MainInterface
{
public:
    static MainInterface *i();
    virtual void setActivateCallback(void (*)(unsigned __int32)) = 0;
    virtual void setDeactivateCallback(void (*)(unsigned __int32)) = 0;
    virtual unsigned __int32 getInstanceHandle() const = 0;
    virtual bool processMessages() = 0;
    virtual unsigned __int32 getProcessID() const = 0;
    virtual bool shellExecute(char const *, char const *, char const *, char *, unsigned __int32) const = 0;
protected:
    virtual _inline ~MainInterface();
public:
    _inline MainInterface(MainInterface const &); /* compiler_generated() */
    _inline MainInterface(); /* compiler_generated() */
    _inline MainInterface &operator=(MainInterface const &); /* compiler_generated() */
};
static_assert(sizeof(MainInterface) == 4, "Invalid MainInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline MainInterface::~MainInterface() // 0x10003D4E
{
    mangled_assert("??1MainInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MAININTERFACE_H__
#endif
