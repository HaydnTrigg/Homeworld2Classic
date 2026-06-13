#if 0
#ifndef __GRAPHIC_H__
#define __GRAPHIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UI::Graphic
{
public:
    Graphic(UI::Graphic const &);
    Graphic(LuaConfig &);
    Graphic(Texture *, char const *);
    Graphic(char const *);
    Graphic();
    virtual ~Graphic();
    void DrawRepeat(Vector_2i const &, Rect_i const &, Rect_i const &);
    void Draw(Vector_2i const &, Rect_i const &);
    void Draw(Rect_i const &, Rect_i const &, unsigned __int32, unsigned __int32);
    void Load(char const *);
    void Load(LuaConfig &);
    bool TryLoad(char const *);
    _inline Rect_i GetSize() const;
    _inline void SetSize(Rect_i const &);
    void FlipUV();
    void ClipUV(Rect_i const &, Rect_i const &);
    void GetUV(float &, float &, float &, float &) const;
    void SetUV(float, float, float, float);
    Texture *GetTexture();
    _inline char const *GetFilename() const;
    TextureProxy &GetTextureProxy();
    void ResetAnim();
    _inline void Move(__int32, __int32);
    _inline void Resize(__int32, __int32);
    _inline Color_4b GetColour() const;
    _inline void SetColour(Color_4b const &);
    bool IsBlackAndWhite() const;
    _inline void EnableBlackAndWhite(bool);
    static bool SetUsePixelUVCoords(bool use);
    static _inline bool GetUsePixelUVCoords();
protected:
    virtual void OnUpdate(unsigned __int32);
private:
    Rect_i m_rect; // 0x4
    float m_u1; // 0x14
    float m_v1; // 0x18
    float m_u2; // 0x1C
    float m_v2; // 0x20
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x24
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_filename; // 0x3C
    TextureProxy m_texture; // 0x54
    Color_4b m_colour; // 0x64
    bool m_stretchOnDraw; // 0x68
    bool m_bBlackAndWhite; // 0x69
    static bool m_usePixelUVCoords;
    void Init();
public:
    UI::Graphic &operator=(UI::Graphic const &); /* compiler_generated() */
};
static_assert(sizeof(UI::Graphic) == 108, "Invalid UI::Graphic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern Rect_i _sub_575277(UI::Graphic const *const);
_inline Rect_i UI::Graphic::GetSize() const // 0x575277
{
    mangled_assert("?GetSize@Graphic@UI@@QBE?AURect_i@@XZ");
    todo("implement");
    Rect_i __result = _sub_575277(this);
    return __result;
}

_extern void _sub_575A2B(UI::Graphic *const, Rect_i const &);
_inline void UI::Graphic::SetSize(Rect_i const &) // 0x575A2B
{
    mangled_assert("?SetSize@Graphic@UI@@QAEXABURect_i@@@Z");
    todo("implement");
    _sub_575A2B(this, arg);
}

_extern char const *_sub_57F9A2(UI::Graphic const *const);
_inline char const *UI::Graphic::GetFilename() const // 0x57F9A2
{
    mangled_assert("?GetFilename@Graphic@UI@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_57F9A2(this);
    return __result;
}

_extern void _sub_680770(UI::Graphic *const, __int32, __int32);
_inline void UI::Graphic::Move(__int32, __int32) // 0x680770
{
    mangled_assert("?Move@Graphic@UI@@QAEXHH@Z");
    todo("implement");
    _sub_680770(this, arg, arg);
}

_extern void _sub_6807C6(UI::Graphic *const, __int32, __int32);
_inline void UI::Graphic::Resize(__int32, __int32) // 0x6807C6
{
    mangled_assert("?Resize@Graphic@UI@@QAEXHH@Z");
    todo("implement");
    _sub_6807C6(this, arg, arg);
}

_extern Color_4b _sub_5994DD(UI::Graphic const *const);
_inline Color_4b UI::Graphic::GetColour() const // 0x5994DD
{
    mangled_assert("?GetColour@Graphic@UI@@QBE?AUColor_4b@@XZ");
    todo("implement");
    Color_4b __result = _sub_5994DD(this);
    return __result;
}

_extern void _sub_574AF5(UI::Graphic *const, Color_4b const &);
_inline void UI::Graphic::SetColour(Color_4b const &) // 0x574AF5
{
    mangled_assert("?SetColour@Graphic@UI@@QAEXABUColor_4b@@@Z");
    todo("implement");
    _sub_574AF5(this, arg);
}

_extern void _sub_66B3C0(UI::Graphic *const, bool);
_inline void UI::Graphic::EnableBlackAndWhite(bool) // 0x66B3C0
{
    mangled_assert("?EnableBlackAndWhite@Graphic@UI@@QAEX_N@Z");
    todo("implement");
    _sub_66B3C0(this, arg);
}

_extern bool _sub_66E31E();
_inline bool UI::Graphic::GetUsePixelUVCoords() // 0x66E31E
{
    mangled_assert("?GetUsePixelUVCoords@Graphic@UI@@SG_NXZ");
    todo("implement");
    bool __result = _sub_66E31E();
    return __result;
}

/* ---------- private code */

#endif // __GRAPHIC_H__
#endif
