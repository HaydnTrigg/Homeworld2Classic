#if 0
#ifndef __SIGNALS_H__
#define __SIGNALS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::UISignal
{
public:
    _inline void Connect(void (*)(UI::InterfaceElement *));
    _inline void DisconnectAll();
    _inline void Signal(UI::InterfaceElement *);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *),std::allocator<void (__stdcall*)(UI::InterfaceElement *)> > m_slots; // 0x0
public:
    _inline UISignal(UI::UISignal const &); /* compiler_generated() */
    _inline UISignal(); /* compiler_generated() */
    _inline ~UISignal(); /* compiler_generated() */
    _inline UI::UISignal &operator=(UI::UISignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UISignal) == 12, "Invalid UI::UISignal size");

class UI::UIFloatSignal
{
public:
    void Connect(void (*)(UI::InterfaceElement *, float));
    void Signal(UI::InterfaceElement *, float);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *,float),std::allocator<void (__stdcall*)(UI::InterfaceElement *,float)> > m_slots; // 0x0
public:
    UIFloatSignal(UI::UIFloatSignal const &); /* compiler_generated() */
    UIFloatSignal(); /* compiler_generated() */
    ~UIFloatSignal(); /* compiler_generated() */
    UI::UIFloatSignal &operator=(UI::UIFloatSignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIFloatSignal) == 12, "Invalid UI::UIFloatSignal size");

class UI::UIIntSignal
{
public:
    _inline void Connect(void (*)(UI::InterfaceElement *, __int32));
    _inline void Signal(UI::InterfaceElement *, unsigned __int32);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *,int),std::allocator<void (__stdcall*)(UI::InterfaceElement *,int)> > m_slots; // 0x0
public:
    _inline UIIntSignal(UI::UIIntSignal const &); /* compiler_generated() */
    _inline UIIntSignal(); /* compiler_generated() */
    _inline ~UIIntSignal(); /* compiler_generated() */
    UI::UIIntSignal &operator=(UI::UIIntSignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIIntSignal) == 12, "Invalid UI::UIIntSignal size");

class UI::UIStringSignal
{
public:
    void Connect(void (*)(UI::InterfaceElement *, char const *));
    void Signal(UI::InterfaceElement *, char const *);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *,char const *),std::allocator<void (__stdcall*)(UI::InterfaceElement *,char const *)> > m_slots; // 0x0
public:
    UIStringSignal(UI::UIStringSignal const &); /* compiler_generated() */
    UIStringSignal(); /* compiler_generated() */
    ~UIStringSignal(); /* compiler_generated() */
    UI::UIStringSignal &operator=(UI::UIStringSignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIStringSignal) == 12, "Invalid UI::UIStringSignal size");

class UI::UIMouseSignal
{
public:
    _inline void Connect(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline bool Disconnect(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
    _inline void Signal(UI::InterfaceElement *, __int32, __int32, unsigned __int32);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *,int,int,unsigned int),std::allocator<void (__stdcall*)(UI::InterfaceElement *,int,int,unsigned int)> > m_slots; // 0x0
public:
    UIMouseSignal(UI::UIMouseSignal const &); /* compiler_generated() */
    _inline UIMouseSignal(); /* compiler_generated() */
    _inline ~UIMouseSignal(); /* compiler_generated() */
    UI::UIMouseSignal &operator=(UI::UIMouseSignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIMouseSignal) == 12, "Invalid UI::UIMouseSignal size");

class UI::UIKeySignal
{
public:
    _inline void Connect(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    _inline bool Disconnect(void (*)(UI::InterfaceElement *, unsigned short, __int32));
    _inline void Signal(UI::InterfaceElement *, unsigned short, __int32);
private:
    std::vector<void (__stdcall*)(UI::InterfaceElement *,unsigned short,int),std::allocator<void (__stdcall*)(UI::InterfaceElement *,unsigned short,int)> > m_slots; // 0x0
public:
    UIKeySignal(UI::UIKeySignal const &); /* compiler_generated() */
    _inline UIKeySignal(); /* compiler_generated() */
    _inline ~UIKeySignal(); /* compiler_generated() */
    UI::UIKeySignal &operator=(UI::UIKeySignal const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIKeySignal) == 12, "Invalid UI::UIKeySignal size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_44FD6E(UI::UISignal *const, void (*)(UI::InterfaceElement *));
_inline void UI::UISignal::Connect(void (*)(UI::InterfaceElement *)) // 0x44FD6E
{
    mangled_assert("?Connect@UISignal@UI@@QAEXP6GXPAVInterfaceElement@2@@Z@Z");
    todo("implement");
    _sub_44FD6E(this, arg);
}

_extern void _sub_5761E5(UI::UISignal *const);
_inline void UI::UISignal::DisconnectAll() // 0x5761E5
{
    mangled_assert("?DisconnectAll@UISignal@UI@@QAEXXZ");
    todo("implement");
    _sub_5761E5(this);
}

_extern void _sub_576C77(UI::UISignal *const, UI::InterfaceElement *);
_inline void UI::UISignal::Signal(UI::InterfaceElement *) // 0x576C77
{
    mangled_assert("?Signal@UISignal@UI@@QAEXPAVInterfaceElement@2@@Z");
    todo("implement");
    _sub_576C77(this, arg);
}

_extern void _sub_572565(UI::UIIntSignal *const, void (*)(UI::InterfaceElement *, __int32));
_inline void UI::UIIntSignal::Connect(void (*)(UI::InterfaceElement *, __int32)) // 0x572565
{
    mangled_assert("?Connect@UIIntSignal@UI@@QAEXP6GXPAVInterfaceElement@2@H@Z@Z");
    todo("implement");
    _sub_572565(this, arg);
}

_extern void _sub_67C0E7(UI::UIIntSignal *const, UI::InterfaceElement *, unsigned __int32);
_inline void UI::UIIntSignal::Signal(UI::InterfaceElement *, unsigned __int32) // 0x67C0E7
{
    mangled_assert("?Signal@UIIntSignal@UI@@QAEXPAVInterfaceElement@2@I@Z");
    todo("implement");
    _sub_67C0E7(this, arg, arg);
}

_extern void _sub_56FDAB(UI::UIMouseSignal *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline void UI::UIMouseSignal::Connect(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x56FDAB
{
    mangled_assert("?Connect@UIMouseSignal@UI@@QAEXP6GXPAVInterfaceElement@2@HHI@Z@Z");
    todo("implement");
    _sub_56FDAB(this, arg);
}

_extern bool _sub_5A1E9A(UI::UIMouseSignal *const, void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32));
_inline bool UI::UIMouseSignal::Disconnect(void (*)(UI::InterfaceElement *, __int32, __int32, unsigned __int32)) // 0x5A1E9A
{
    mangled_assert("?Disconnect@UIMouseSignal@UI@@QAE_NP6GXPAVInterfaceElement@2@HHI@Z@Z");
    todo("implement");
    bool __result = _sub_5A1E9A(this, arg);
    return __result;
}

_extern void _sub_66D51A(UI::UIMouseSignal *const, UI::InterfaceElement *, __int32, __int32, unsigned __int32);
_inline void UI::UIMouseSignal::Signal(UI::InterfaceElement *, __int32, __int32, unsigned __int32) // 0x66D51A
{
    mangled_assert("?Signal@UIMouseSignal@UI@@QAEXPAVInterfaceElement@2@HHI@Z");
    todo("implement");
    _sub_66D51A(this, arg, arg, arg, arg);
}

_extern void _sub_572572(UI::UIKeySignal *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline void UI::UIKeySignal::Connect(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x572572
{
    mangled_assert("?Connect@UIKeySignal@UI@@QAEXP6GXPAVInterfaceElement@2@GH@Z@Z");
    todo("implement");
    _sub_572572(this, arg);
}

_extern bool _sub_5726DF(UI::UIKeySignal *const, void (*)(UI::InterfaceElement *, unsigned short, __int32));
_inline bool UI::UIKeySignal::Disconnect(void (*)(UI::InterfaceElement *, unsigned short, __int32)) // 0x5726DF
{
    mangled_assert("?Disconnect@UIKeySignal@UI@@QAE_NP6GXPAVInterfaceElement@2@GH@Z@Z");
    todo("implement");
    bool __result = _sub_5726DF(this, arg);
    return __result;
}

_extern void _sub_66D4E5(UI::UIKeySignal *const, UI::InterfaceElement *, unsigned short, __int32);
_inline void UI::UIKeySignal::Signal(UI::InterfaceElement *, unsigned short, __int32) // 0x66D4E5
{
    mangled_assert("?Signal@UIKeySignal@UI@@QAEXPAVInterfaceElement@2@GH@Z");
    todo("implement");
    _sub_66D4E5(this, arg, arg, arg);
}

/* ---------- private code */

#endif // __SIGNALS_H__
#endif
