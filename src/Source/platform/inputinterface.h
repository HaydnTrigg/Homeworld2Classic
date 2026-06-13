#if 0
#ifndef __INPUTINTERFACE_H__
#define __INPUTINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class InputInterface
{
public:
    static InputInterface *i();
    virtual bool initialize() = 0;
    virtual bool denitialize() = 0;
    virtual void getCursorDelta(float &, float &) const = 0;
    virtual void getCursorPosition(float &, float &) const = 0;
    virtual void setCursorPosition(float, float) = 0;
    virtual void resetCursor() = 0;
    virtual void pollMouse() = 0;
    virtual void setMouseLocked(bool) = 0;
    virtual bool isMouseLocked() const = 0;
    virtual void setKeyFunc(__int32, void (*)(__int32, KeyEvent, __int32), __int32) = 0;
    virtual void removeKeyFunc(__int32) = 0;
    virtual void setGenericKeyFunc(void (*)(__int32, KeyEvent, __int32), __int32) = 0;
    virtual void removeGenericKeyFunc(void (*)(__int32, KeyEvent, __int32)) = 0;
    virtual bool keyIsDown(__int32) const = 0;
    virtual void keyDownMousePos(__int32, float &, float &) const = 0;
    virtual void clearKeyHistory() = 0;
    virtual void clearKeyHistory(__int32) = 0;
    virtual void acquireInput(bool) = 0;
    virtual bool setActive(bool) = 0;
    virtual bool getActive() const = 0;
    virtual bool GetKeyLocalizedName(__int32, wchar_t *, unsigned __int32) const = 0;
protected:
    virtual ~InputInterface();
public:
    InputInterface(InputInterface const &); /* compiler_generated() */
    InputInterface(); /* compiler_generated() */
    InputInterface &operator=(InputInterface const &); /* compiler_generated() */
};
static_assert(sizeof(InputInterface) == 4, "Invalid InputInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __INPUTINTERFACE_H__
/* combined */
#ifndef __INPUTINTERFACE_H__
#define __INPUTINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class InputInterface
{
public:
    static InputInterface *i();
    virtual bool initialize() = 0;
    virtual bool denitialize() = 0;
    virtual void getCursorDelta(float &, float &) const = 0;
    virtual void getCursorPosition(float &, float &) const = 0;
    virtual void setCursorPosition(float, float) = 0;
    virtual void resetCursor() = 0;
    virtual void pollMouse() = 0;
    virtual void setMouseLocked(bool) = 0;
    virtual bool isMouseLocked() const = 0;
    virtual void setKeyFunc(__int32, void (*)(__int32, KeyEvent, __int32), __int32) = 0;
    virtual void removeKeyFunc(__int32) = 0;
    virtual void setGenericKeyFunc(void (*)(__int32, KeyEvent, __int32), __int32) = 0;
    virtual void removeGenericKeyFunc(void (*)(__int32, KeyEvent, __int32)) = 0;
    virtual bool keyIsDown(__int32) const = 0;
    virtual void keyDownMousePos(__int32, float &, float &) const = 0;
    virtual void clearKeyHistory() = 0;
    virtual void clearKeyHistory(__int32) = 0;
    virtual void acquireInput(bool) = 0;
    virtual bool setActive(bool) = 0;
    virtual bool getActive() const = 0;
    virtual bool GetKeyLocalizedName(__int32, wchar_t *, unsigned __int32) const = 0;
protected:
    virtual _inline ~InputInterface();
public:
    _inline InputInterface(InputInterface const &); /* compiler_generated() */
    _inline InputInterface(); /* compiler_generated() */
    _inline InputInterface &operator=(InputInterface const &); /* compiler_generated() */
};
static_assert(sizeof(InputInterface) == 4, "Invalid InputInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_1000317B(InputInterface *const);
_inline InputInterface::~InputInterface() // 0x1000317B
{
    mangled_assert("??1InputInterface@@MAE@XZ");
    todo("implement");
    _sub_1000317B(this);
}

/* ---------- private code */

#endif // __INPUTINTERFACE_H__
#endif
