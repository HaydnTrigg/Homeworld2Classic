#if 0
#ifndef __SYSINPUTINTERFACE_H__
#define __SYSINPUTINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysInputInterface
{
public:
    static SysInputInterface *i();
    virtual unsigned __int32 LoadACursor(char const *) = 0;
    virtual __int32 DenormX(float) = 0;
    virtual __int32 DenormY(float) = 0;
    virtual float NormX(__int32) = 0;
    virtual float NormY(__int32) = 0;
    virtual float NormDeltaY(__int32) = 0;
    virtual bool Initialize() = 0;
    virtual void GetCursorPos(float &, float &) = 0;
    virtual void SetCursorPos(float, float) = 0;
    virtual void SetCursorClip(float, float, float, float) = 0;
    virtual void ActivateClip(bool) = 0;
    virtual void WindowClip(bool) = 0;
    virtual void SetKeyDownCB(void (*)(unsigned __int32)) = 0;
    virtual void (*GetKeyDownCB())(unsigned __int32) = 0;
    virtual float GetDragThreshold() = 0;
    virtual void SetSystemKeyCB(__int32, void (*)(unsigned __int32)) = 0;
    virtual void SetCursor(unsigned __int32) = 0;
protected:
    virtual ~SysInputInterface();
public:
    SysInputInterface(SysInputInterface const &); /* compiler_generated() */
    SysInputInterface(); /* compiler_generated() */
    SysInputInterface &operator=(SysInputInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysInputInterface) == 4, "Invalid SysInputInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SYSINPUTINTERFACE_H__
/* combined */
#ifndef __SYSINPUTINTERFACE_H__
#define __SYSINPUTINTERFACE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ButtonType
{
    SIBT_LeftButton = 0,
    SIBT_MiddleButton,
    SIBT_RightButton,
    SIBT_LeftButtonDouble,
    SIBT_MiddleButtonDouble,
    SIBT_RightButtonDouble,
    SIBT_KeyButton,
    SIBT_EndOfButton,
};

enum SysButtonState
{
    SIBS_ButtonUp = 0,
    SIBS_ButtonDown,
    SIBS_ButtonGet,
    SIBS_ButtonReset,
};

/* ---------- definitions */

class SysInputInterface
{
public:
    static SysInputInterface *i();
    virtual unsigned __int32 LoadACursor(char const *) = 0;
    virtual __int32 DenormX(float) = 0;
    virtual __int32 DenormY(float) = 0;
    virtual float NormX(__int32) = 0;
    virtual float NormY(__int32) = 0;
    virtual float NormDeltaY(__int32) = 0;
    virtual bool Initialize() = 0;
    virtual void GetCursorPos(float &, float &) = 0;
    virtual void SetCursorPos(float, float) = 0;
    virtual void SetCursorClip(float, float, float, float) = 0;
    virtual void ActivateClip(bool) = 0;
    virtual void WindowClip(bool) = 0;
    virtual void SetKeyDownCB(void (*)(unsigned __int32)) = 0;
    virtual void (*GetKeyDownCB())(unsigned __int32) = 0;
    virtual float GetDragThreshold() = 0;
    virtual void SetSystemKeyCB(__int32, void (*)(unsigned __int32)) = 0;
    virtual void SetCursor(unsigned __int32) = 0;
protected:
    virtual _inline ~SysInputInterface();
public:
    SysInputInterface(SysInputInterface const &); /* compiler_generated() */
    _inline SysInputInterface(); /* compiler_generated() */
    SysInputInterface &operator=(SysInputInterface const &); /* compiler_generated() */
};
static_assert(sizeof(SysInputInterface) == 4, "Invalid SysInputInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10007C7B(SysInputInterface *const);
_inline SysInputInterface::~SysInputInterface() // 0x10007C7B
{
    mangled_assert("??1SysInputInterface@@MAE@XZ");
    todo("implement");
    _sub_10007C7B(this);
}

/* ---------- private code */

#endif // __SYSINPUTINTERFACE_H__
#endif
