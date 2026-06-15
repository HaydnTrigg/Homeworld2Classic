#if 0
#ifndef __UITYPES_H__
#define __UITYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum UI::VAlign
{
    VA_Top = 0,
    VA_Center,
    VA_Bottom,
};

enum UI::HAlign
{
    HA_Left = 0,
    HA_Center,
    HA_Right,
};

enum UI::EventType
{
    ET_MouseMoved = 0,
    ET_MouseReleased,
    ET_MousePressed,
    ET_MouseDoubleReleased,
    ET_MouseDoublePressed,
    ET_MouseClicked,
    ET_MouseDoubleClicked,
    ET_MouseDoubleClickReleased,
    ET_MouseEnter,
    ET_MouseExit,
    ET_MouseWheelDown,
    ET_MouseWheelUp,
    ET_KeyPressed,
    ET_KeyReleased,
    ET_KeyRepeat,
    ET_Update,
    ET_FocusIn,
    ET_FocusOut,
    ET_NoEvent,
};

enum UI::ScrollBarOrientation
{
    SBO_Vertical = 0,
    SBO_Horizontal,
};

enum UI::ScreenTransitionType
{
    ePopup = 0,
    eTransition,
};

/* ---------- definitions */

struct Color_struct
{
    unsigned char r; // 0x0
    unsigned char g; // 0x1
    unsigned char b; // 0x2
    unsigned char a; // 0x3
};
static_assert(sizeof(Color_struct) == 4, "Invalid Color_struct size");

struct Color_4b
{
    _inline Color_4b(vector4 const &);
    _inline Color_4b(unsigned char, unsigned char, unsigned char, unsigned char);
    _inline Color_4b();
    _inline bool operator==(Color_4b const &);
    union
    {
        unsigned char e[4]; // 0x0
        Color_struct c; // 0x0
    };
};
static_assert(sizeof(Color_4b) == 4, "Invalid Color_4b size");

struct Vector_struct
{
    long x; // 0x0
    long y; // 0x4
};
static_assert(sizeof(Vector_struct) == 8, "Invalid Vector_struct size");

struct Vector_2i
{
    _inline Vector_2i(long, long);
    _inline Vector_2i();
    _inline Vector_2i &operator+=(Vector_2i const &);
    _inline Vector_2i &operator-=(Vector_2i const &);
    _inline bool operator==(Vector_2i const &) const;
    union
    {
        long e[2]; // 0x0
        struct
        {
            long x; // 0x0
            long y; // 0x4
        };
        Vector_struct p; // 0x0
    };
};
static_assert(sizeof(Vector_2i) == 8, "Invalid Vector_2i size");

struct Rect_i
{
    _inline Rect_i(long, long, long, long);
    _inline Rect_i();
    _inline long left() const;
    _inline long top() const;
    _inline long width() const;
    _inline long height() const;
    _inline long bottom() const;
    _inline long right() const;
    _inline bool PointWithin(Vector_2i const &) const;
    _inline Rect_i Intersection(Rect_i const &) const;
    _inline bool operator==(Rect_i const &) const;
    _inline bool Collides(Rect_i const &) const;
    Vector_2i mPos; // 0x0
    Vector_2i mSize; // 0x8
};
static_assert(sizeof(Rect_i) == 16, "Invalid Rect_i size");

class UI::Size
{
public:
    _inline Size(UI::Size const &);
    _inline Size(Vector_2i const &);
    _inline Size(__int32, __int32);
    _inline Size();
    _inline __int32 GetWidth() const;
    _inline __int32 GetHeight() const;
    void SetWidth(__int32);
    void SetHeight(__int32);
    _inline Vector_2i GetVector_2i() const;
    _inline void Set(__int32, __int32);
    _inline bool operator==(UI::Size const &) const;
private:
    __int32 m_w; // 0x0
    __int32 m_h; // 0x4
};
static_assert(sizeof(UI::Size) == 8, "Invalid UI::Size size");

class UI::MouseButton
{
public:
    long m_flags; // 0x0
    long m_wheelFlags; // 0x4
    _inline MouseButton();
    _inline bool Left() const;
    bool Middle() const;
    bool Right() const;
    bool WheelUp() const;
    bool WheelDown() const;
};
static_assert(sizeof(UI::MouseButton) == 8, "Invalid UI::MouseButton size");

class UI::KeyModifier
{
public:
    __int32 m_flags; // 0x0
    _inline KeyModifier(__int32);
    _inline bool Shift() const;
    bool Contrl() const;
    bool Alt() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(UI::KeyModifier) == 4, "Invalid UI::KeyModifier size");

struct UI::EventInfo
{
    Vector_2i m_mousePos; // 0x0
    UI::MouseButton m_mouseButton; // 0x8
    UI::KeyModifier m_keyModifier; // 0x10
    unsigned char m_key; // 0x14
    unsigned __int32 m_timeElapsed; // 0x18
    _inline EventInfo(); /* compiler_generated() */
};
static_assert(sizeof(UI::EventInfo) == 28, "Invalid UI::EventInfo size");

struct UI::UIScreenInfo
{
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > filename; // 0x0
    bool activated; // 0x18
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > type; // 0x1C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x34
    _inline UIScreenInfo(UI::UIScreenInfo const &); /* compiler_generated() */
    _inline UIScreenInfo(); /* compiler_generated() */
    _inline ~UIScreenInfo(); /* compiler_generated() */
    UI::UIScreenInfo &operator=(UI::UIScreenInfo const &); /* compiler_generated() */
};
static_assert(sizeof(UI::UIScreenInfo) == 76, "Invalid UI::UIScreenInfo size");

/* ---------- prototypes */

extern _inline Vector_2i operator+(Vector_2i const &a, Vector_2i const b);
extern _inline Vector_2i operator-(Vector_2i const &a, Vector_2i const b);

_static unsigned __int32 UI::Color_4bToRGBUInt(Color_4b const &c);
_static unsigned __int32 UI::Color_4bToRGBUInt(Color_4b const &c);

/* ---------- globals */

/* ---------- public code */

_inline Color_4b::Color_4b() // 0x57D75C
{
    mangled_assert("??0Color_4b@@QAE@XZ");
    todo("implement");
}

_inline Color_4b::Color_4b(unsigned char, unsigned char, unsigned char, unsigned char) // 0x501042
{
    mangled_assert("??0Color_4b@@QAE@EEEE@Z");
    todo("implement");
}

_inline Color_4b::Color_4b(vector4 const &) // 0x5AA287
{
    mangled_assert("??0Color_4b@@QAE@ABVvector4@@@Z");
    todo("implement");
}

_inline bool Color_4b::operator==(Color_4b const &) // 0x5AD4A8
{
    mangled_assert("??8Color_4b@@QAE_NABU0@@Z");
    todo("implement");
}

_inline Vector_2i::Vector_2i() // 0x586D48
{
    mangled_assert("??0Vector_2i@@QAE@XZ");
    todo("implement");
}

_inline Vector_2i::Vector_2i(long, long) // 0x57726F
{
    mangled_assert("??0Vector_2i@@QAE@JJ@Z");
    todo("implement");
}

_inline Vector_2i &Vector_2i::operator+=(Vector_2i const &) // 0x66A72A
{
    mangled_assert("??YVector_2i@@QAEAAU0@ABU0@@Z");
    todo("implement");
}

_inline Vector_2i &Vector_2i::operator-=(Vector_2i const &) // 0x671B72
{
    mangled_assert("??ZVector_2i@@QAEAAU0@ABU0@@Z");
    todo("implement");
}

_inline bool Vector_2i::operator==(Vector_2i const &) const // 0x5AD4D4
{
    mangled_assert("??8Vector_2i@@QBE_NABU0@@Z");
    todo("implement");
}

_inline Vector_2i operator+(Vector_2i const &a, Vector_2i const b) // 0x57EA1B
{
    mangled_assert("??H@YG?AUVector_2i@@ABU0@U0@@Z");
    todo("implement");
}

_inline Vector_2i operator-(Vector_2i const &a, Vector_2i const b) // 0x66A6FC
{
    mangled_assert("??G@YG?AUVector_2i@@ABU0@U0@@Z");
    todo("implement");
}

_inline Rect_i::Rect_i() // 0x5A450A
{
    mangled_assert("??0Rect_i@@QAE@XZ");
    todo("implement");
}

_inline Rect_i::Rect_i(long, long, long, long) // 0x66DE6F
{
    mangled_assert("??0Rect_i@@QAE@JJJJ@Z");
    todo("implement");
}

_inline long Rect_i::left() const // 0x58561C
{
    mangled_assert("?left@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline long Rect_i::top() const // 0x585A4A
{
    mangled_assert("?top@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline long Rect_i::width() const // 0x66DAA0
{
    mangled_assert("?width@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline long Rect_i::height() const // 0x5855DA
{
    mangled_assert("?height@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline long Rect_i::bottom() const // 0x5A4EEE
{
    mangled_assert("?bottom@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline long Rect_i::right() const // 0x5A4F2F
{
    mangled_assert("?right@Rect_i@@QBEJXZ");
    todo("implement");
}

_inline bool Rect_i::PointWithin(Vector_2i const &) const // 0x66EDED
{
    mangled_assert("?PointWithin@Rect_i@@QBE_NABUVector_2i@@@Z");
    todo("implement");
}

_inline bool Rect_i::Collides(Rect_i const &) const // 0x66A9AF
{
    mangled_assert("?Collides@Rect_i@@QBE_NABU1@@Z");
    todo("implement");
}

_inline Rect_i Rect_i::Intersection(Rect_i const &) const // 0x5A4B84
{
    mangled_assert("?Intersection@Rect_i@@QBE?AU1@ABU1@@Z");
    todo("implement");
}

_inline bool Rect_i::operator==(Rect_i const &) const // 0x67E6E5
{
    mangled_assert("??8Rect_i@@QBE_NABU0@@Z");
    todo("implement");
}

_inline UI::Size::Size() // 0x586D3E
{
    mangled_assert("??0Size@UI@@QAE@XZ");
    todo("implement");
}

_inline UI::Size::Size(__int32, __int32) // 0x57D96F
{
    mangled_assert("??0Size@UI@@QAE@HH@Z");
    todo("implement");
}

_inline UI::Size::Size(Vector_2i const &) // 0x66DE8F
{
    mangled_assert("??0Size@UI@@QAE@ABUVector_2i@@@Z");
    todo("implement");
}

_inline UI::Size::Size(UI::Size const &) // 0x575F02
{
    mangled_assert("??0Size@UI@@QAE@ABV01@@Z");
    todo("implement");
}

_inline __int32 UI::Size::GetWidth() const // 0x576280
{
    mangled_assert("?GetWidth@Size@UI@@QBEHXZ");
    todo("implement");
}

_inline __int32 UI::Size::GetHeight() const // 0x57620D
{
    mangled_assert("?GetHeight@Size@UI@@QBEHXZ");
    todo("implement");
}

_inline Vector_2i UI::Size::GetVector_2i() const // 0x5A4916
{
    mangled_assert("?GetVector_2i@Size@UI@@QBE?AUVector_2i@@XZ");
    todo("implement");
}

_inline void UI::Size::Set(__int32, __int32) // 0x58A080
{
    mangled_assert("?Set@Size@UI@@QAEXHH@Z");
    todo("implement");
}

_inline bool UI::Size::operator==(UI::Size const &) const // 0x66E01C
{
    mangled_assert("??8Size@UI@@QBE_NABV01@@Z");
    todo("implement");
}

_inline UI::MouseButton::MouseButton() // 0x57D965
{
    mangled_assert("??0MouseButton@UI@@QAE@XZ");
    todo("implement");
}

_inline bool UI::MouseButton::Left() const // 0x67DCE1
{
    mangled_assert("?Left@MouseButton@UI@@QBE_NXZ");
    todo("implement");
}

_inline UI::KeyModifier::KeyModifier(__int32) // 0x66A2A6
{
    mangled_assert("??0KeyModifier@UI@@QAE@H@Z");
    todo("implement");
}

_inline bool UI::KeyModifier::Shift() const // 0x689B6C
{
    mangled_assert("?Shift@KeyModifier@UI@@QBE_NXZ");
    todo("implement");
}

/* ---------- private code */

_static unsigned __int32 UI::Color_4bToRGBUInt(Color_4b const &c) // 0x5AEB5B
{
    mangled_assert("UI::Color_4bToRGBUInt");
    todo("implement");
}

_static unsigned __int32 UI::Color_4bToRGBUInt(Color_4b const &c) // 0x57ED41
{
    mangled_assert("UI::Color_4bToRGBUInt");
    todo("implement");
}

#endif // __UITYPES_H__
#endif
