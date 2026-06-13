#if 0
#ifndef __INPUT_H__
#define __INPUT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct KeyFuncData
{
    __int32 funcData; // 0x0
    void (*func)(__int32, KeyEvent, __int32); // 0x4
};
static_assert(sizeof(KeyFuncData) == 8, "Invalid KeyFuncData size");

class Key
{
public:
    Key();
    _inline ~Key();
    void setDown(bool, bool);
    _inline bool getDown() const;
    _inline void clearHistory();
    __int32 getId() const;
    void setFunc(void (*)(__int32, KeyEvent, __int32), __int32);
    void removeFunc();
    void fireFuncs(KeyEvent);
    void mousePosOnKeyDown(float &, float &) const;
private:
    __int32 m_id; // 0x0
    bool m_isDown; // 0x4
    unsigned __int32 m_numHits; // 0x8
    float m_mouseX; // 0xC
    float m_mouseY; // 0x10
    KeyFuncData m_funcData; // 0x14
    static __int32 ms_idCounter;
};
static_assert(sizeof(Key) == 28, "Invalid Key size");

class InputImpl :
    public InputInterface
{
public:
    static bool startup();
    static bool shutdown();
    static InputImpl *i();
    virtual bool initialize() override;
    virtual bool denitialize() override;
    virtual void getCursorDelta(float &, float &) const override;
    virtual void getCursorPosition(float &, float &) const override;
    virtual void setCursorPosition(float, float) override;
    virtual void resetCursor() override;
    virtual void pollMouse() override;
    virtual void setMouseLocked(bool) override;
    virtual bool isMouseLocked() const override;
    virtual void setKeyFunc(__int32, void (*)(__int32, KeyEvent, __int32), __int32) override;
    virtual void removeKeyFunc(__int32) override;
    virtual void setGenericKeyFunc(void (*)(__int32, KeyEvent, __int32), __int32) override;
    virtual void removeGenericKeyFunc(void (*)(__int32, KeyEvent, __int32)) override;
    virtual bool keyIsDown(__int32) const override;
    virtual void keyDownMousePos(__int32, float &, float &) const override;
    virtual void clearKeyHistory() override;
    virtual void clearKeyHistory(__int32) override;
    virtual void acquireInput(bool) override;
    virtual bool setActive(bool) override;
    virtual bool getActive() const override;
    void fireGenericCallbacks(__int32, KeyEvent);
    virtual bool GetKeyLocalizedName(__int32, wchar_t *, unsigned __int32) const override;
    InputImpl(InputImpl const &); /* compiler_generated() */
protected:
    InputImpl();
    virtual ~InputImpl() override;
private:
    static InputImpl *s_instance;
    float m_mouseX; // 0x4
    float m_mouseY; // 0x8
    float m_mouseLockedX; // 0xC
    float m_mouseLockedY; // 0x10
    __int32 m_numMouseLocks; // 0x14
    bool m_systemActive; // 0x18
    std::vector<KeyFuncData,std::allocator<KeyFuncData> > m_genericCallbacks; // 0x1C
public:
    InputImpl &operator=(InputImpl const &); /* compiler_generated() */
};
static_assert(sizeof(InputImpl) == 40, "Invalid InputImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_10003182(Key *const);
_inline Key::~Key() // 0x10003182
{
    mangled_assert("??1Key@@QAE@XZ");
    todo("implement");
    _sub_10003182(this);
}

_extern bool _sub_100038F2(Key const *const);
_inline bool Key::getDown() const // 0x100038F2
{
    mangled_assert("?getDown@Key@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_100038F2(this);
    return __result;
}

_extern void _sub_10003629(Key *const);
_inline void Key::clearHistory() // 0x10003629
{
    mangled_assert("?clearHistory@Key@@QAEXXZ");
    todo("implement");
    _sub_10003629(this);
}

/* ---------- private code */

#endif // __INPUT_H__
#endif
