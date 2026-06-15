#if 0
#ifndef __WINDOWINTERFACE_H__
#define __WINDOWINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WindowInterface
{
public:
    static WindowInterface *i();
    virtual bool registerInstance(unsigned __int32 const &, char const *) = 0;
    virtual bool unregisterInstance(unsigned __int32 &, char const *) = 0;
    virtual bool createWindow(unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool) = 0;
    virtual bool attachWindow(unsigned __int32 const &, long *) = 0;
    virtual void restoreWindow(unsigned __int32 const &, long) = 0;
    virtual bool showWindow(unsigned __int32 const &, bool) = 0;
    virtual bool deleteWindow(unsigned __int32 const &, unsigned __int32 const &) = 0;
    virtual bool showMouse(bool) = 0;
    virtual void getWindowPos(__int32 &, __int32 &) const = 0;
    virtual __int32 getWindowWidth() const = 0;
    virtual __int32 getWindowHeight() const = 0;
    virtual __int32 getWindowDepth() const = 0;
    virtual float getWindowAspect() const = 0;
    virtual __int32 getWidth() const = 0;
    virtual __int32 getHeight() const = 0;
    virtual __int32 getDepth() const = 0;
    virtual float getAspect() const = 0;
    virtual __int32 getOSWindowHandle() const = 0;
protected:
    virtual ~WindowInterface();
public:
    WindowInterface(WindowInterface const &); /* compiler_generated() */
    WindowInterface(); /* compiler_generated() */
    WindowInterface &operator=(WindowInterface const &); /* compiler_generated() */
};
static_assert(sizeof(WindowInterface) == 4, "Invalid WindowInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WINDOWINTERFACE_H__
/* combined */
#ifndef __WINDOWINTERFACE_H__
#define __WINDOWINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WindowInterface
{
public:
    static WindowInterface *i();
    virtual bool registerInstance(unsigned __int32 const &, char const *) = 0;
    virtual bool unregisterInstance(unsigned __int32 &, char const *) = 0;
    virtual bool createWindow(unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool) = 0;
    virtual bool attachWindow(unsigned __int32 const &, long *) = 0;
    virtual void restoreWindow(unsigned __int32 const &, long) = 0;
    virtual bool showWindow(unsigned __int32 const &, bool) = 0;
    virtual bool deleteWindow(unsigned __int32 const &, unsigned __int32 const &) = 0;
    virtual bool showMouse(bool) = 0;
    virtual void getWindowPos(__int32 &, __int32 &) const = 0;
    virtual __int32 getWindowWidth() const = 0;
    virtual __int32 getWindowHeight() const = 0;
    virtual __int32 getWindowDepth() const = 0;
    virtual float getWindowAspect() const = 0;
    virtual __int32 getWidth() const = 0;
    virtual __int32 getHeight() const = 0;
    virtual __int32 getDepth() const = 0;
    virtual float getAspect() const = 0;
    virtual __int32 getOSWindowHandle() const = 0;
protected:
    virtual _inline ~WindowInterface();
public:
    _inline WindowInterface(WindowInterface const &); /* compiler_generated() */
    _inline WindowInterface(); /* compiler_generated() */
    _inline WindowInterface &operator=(WindowInterface const &); /* compiler_generated() */
};
static_assert(sizeof(WindowInterface) == 4, "Invalid WindowInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline WindowInterface::~WindowInterface() // 0x1000318A
{
    mangled_assert("??1WindowInterface@@MAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __WINDOWINTERFACE_H__
#endif
