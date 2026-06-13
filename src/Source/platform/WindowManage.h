#if 0
#ifndef __WINDOWMANAGE_H__
#define __WINDOWMANAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class WindowManageImpl :
    public WindowInterface
{
public:
    static bool startup();
    static bool shutdown();
    static WindowManageImpl *i();
    virtual bool registerInstance(unsigned __int32 const &, char const *) override;
    virtual bool unregisterInstance(unsigned __int32 &, char const *) override;
    virtual bool createWindow(unsigned __int32 &, unsigned __int32 const &, char const *, char const *, __int32, __int32, __int32, bool) override;
    virtual void restoreWindow(unsigned __int32 const &, long) override;
    virtual bool attachWindow(unsigned __int32 const &, long *) override;
    virtual bool showWindow(unsigned __int32 const &, bool) override;
    virtual bool deleteWindow(unsigned __int32 const &, unsigned __int32 const &) override;
    virtual bool showMouse(bool) override;
    virtual void getWindowPos(__int32 &, __int32 &) const override;
    virtual __int32 getWindowWidth() const override;
    virtual __int32 getWindowHeight() const override;
    virtual __int32 getWindowDepth() const override;
    virtual float getWindowAspect() const override;
    virtual __int32 getWidth() const override;
    virtual __int32 getHeight() const override;
    virtual __int32 getDepth() const override;
    virtual float getAspect() const override;
    virtual __int32 getOSWindowHandle() const override;
    virtual bool getFullscreen() const;
    WindowManageImpl(WindowManageImpl const &); /* compiler_generated() */
protected:
    WindowManageImpl();
    virtual ~WindowManageImpl() override;
private:
    void goFullscreen(__int32, __int32, __int32);
    static long WindowProc(HWND__ *hWnd, unsigned __int32 message, unsigned __int32 wParam, long lParam);
    static WindowManageImpl *s_instance;
    HWND__ *m_window; // 0x4
    HWND__ *m_windowParent; // 0x8
    bool m_bFullscreen; // 0xC
    char const *m_instanceName; // 0x10
    __int32 m_winPos[2]; // 0x14
    __int32 m_winDims[3]; // 0x1C
    long (*m_wndHook)(HWND__ *, unsigned __int32, unsigned __int32, long); // 0x28
    unsigned __int32 m_fullScreenSize[3]; // 0x2C
public:
    WindowManageImpl &operator=(WindowManageImpl const &); /* compiler_generated() */
};
static_assert(sizeof(WindowManageImpl) == 56, "Invalid WindowManageImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __WINDOWMANAGE_H__
#endif
