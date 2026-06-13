#if 0
#ifndef __SYSTEMINPUT_H__
#define __SYSTEMINPUT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysInputImpl :
    public SysInputInterface
{
public:
    static bool startup();
    static bool shutdown();
    static SysInputImpl *i();
    virtual unsigned __int32 LoadACursor(char const *) override;
    virtual __int32 DenormX(float) override;
    virtual __int32 DenormY(float) override;
    virtual float NormX(__int32) override;
    virtual float NormY(__int32) override;
    virtual float NormDeltaY(__int32) override;
    virtual bool Initialize() override;
    virtual void GetCursorPos(float &, float &) override;
    virtual void SetCursorPos(float, float) override;
    virtual void SetCursorClip(float, float, float, float) override;
    virtual void ActivateClip(bool) override;
    virtual void WindowClip(bool) override;
    virtual void SetKeyDownCB(void (*)(unsigned __int32)) override;
    virtual void (*GetKeyDownCB())(unsigned __int32) override;
    virtual void SetSystemKeyCB(__int32, void (*)(unsigned __int32)) override;
    virtual void SetCursor(unsigned __int32) override;
    virtual float GetDragThreshold() override;
    SysInputImpl(SysInputImpl const &); /* compiler_generated() */
protected:
    SysInputImpl();
    virtual ~SysInputImpl() override;
    typedef std::pair<int,void (__stdcall*)(unsigned int)> SystemKeyPair;
    typedef std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > SystemKeyPairs;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<int,void (__stdcall*)(unsigned int)> > > > SystemKeyPairsI;
public:
    long winProc(HWND__ *, unsigned __int32, unsigned __int32, long, bool &);
    std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > &getSystemKeyCallbacks();
    bool isWindowClipping() const;
    void setWindowClipping(bool);
private:
    static SysInputImpl *s_instance;
    std::vector<std::pair<int,void (__stdcall*)(unsigned int)>,std::allocator<std::pair<int,void (__stdcall*)(unsigned int)> > > m_systemKeys; // 0x4
    void (*m_keyDownCB)(unsigned __int32); // 0x10
    unsigned __int32 m_uMSH_MOUSEWHEEL; // 0x14
    float m_oldClipLeft; // 0x18
    float m_oldClipRight; // 0x1C
    float m_oldClipTop; // 0x20
    float m_oldClipBottom; // 0x24
    bool m_bWindowClipping; // 0x28
public:
    SysInputImpl &operator=(SysInputImpl const &); /* compiler_generated() */
};
static_assert(sizeof(SysInputImpl) == 44, "Invalid SysInputImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SYSTEMINPUT_H__
#endif
