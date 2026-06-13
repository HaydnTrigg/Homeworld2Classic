#if 0
#ifndef __DEBUGRENDER_H__
#define __DEBUGRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugRender
{
public:
    static void Register(DebugRenderProxy *);
    static void Unregister(DebugRenderProxy *);
    static void Display();
    static void List(std::vector<char const *,std::allocator<char const *> > &);
    static void SetDisplay(char const *, bool);
    static bool GetDisplay(char const *);
    static void SetAutoClear(char const *, bool);
    static bool GetAutoClear(char const *);
    static void Clear(char const *);
    enum Justification
    {
        JUST_Left = 0,
        JUST_Right,
        JUST_Center,
    };
    static unsigned __int32 const CIRCLE_SEGMENTS;
    struct Point2D
    {
        Point2D(vector2 const &, vector4 &);
        Point2D();
        vector2 p; // 0x0
        vector4 c; // 0x8
    };
    static_assert(sizeof(Point2D) == 24, "Invalid Point2D size");
    struct Line2D
    {
        Line2D(vector2 const &, vector2 const &, vector4 const &, float);
        _inline Line2D();
        vector2 p[2]; // 0x0
        vector4 c; // 0x10
        float lineWidth; // 0x20
    };
    static_assert(sizeof(Line2D) == 36, "Invalid Line2D size");
    struct Lines2DDupeVerts
    {
        Lines2DDupeVerts(__int32, FatVertex const *);
        Lines2DDupeVerts();
        ~Lines2DDupeVerts();
        __int32 m_nVertices; // 0x0
        FatVertex *m_vertex; // 0x4
    };
    static_assert(sizeof(Lines2DDupeVerts) == 8, "Invalid Lines2DDupeVerts size");
    struct Tri2D
    {
        Tri2D(vector2 const &, vector2 const &, vector2 const &, vector4 &);
        _inline Tri2D();
        vector2 p[3]; // 0x0
        vector4 c; // 0x18
    };
    static_assert(sizeof(Tri2D) == 40, "Invalid Tri2D size");
    struct Tris2DDupeVerts
    {
        Tris2DDupeVerts(__int32, FatVertex const *, __int32, __int32 const *);
        Tris2DDupeVerts();
        ~Tris2DDupeVerts();
        __int32 m_nVertices; // 0x0
        FatVertex *m_vertex; // 0x4
        __int32 m_nIndices; // 0x8
        __int32 const *m_indices; // 0xC
    };
    static_assert(sizeof(Tris2DDupeVerts) == 16, "Invalid Tris2DDupeVerts size");
    struct RectOutline
    {
        RectOutline(vector2 const &, vector2 const &, vector4 &);
        RectOutline();
        vector2 p[2]; // 0x0
        vector4 c; // 0x10
    };
    static_assert(sizeof(RectOutline) == 32, "Invalid RectOutline size");
    struct OvalOutline
    {
        OvalOutline(vector2 const &, float, float, vector4 const &, float);
        OvalOutline();
        vector2 p; // 0x0
        float rx; // 0x8
        float ry; // 0xC
        vector4 c; // 0x10
        float lw; // 0x20
    };
    static_assert(sizeof(OvalOutline) == 36, "Invalid OvalOutline size");
    struct Point
    {
        Point(vector3 const &, vector4 &);
        Point();
        vector3 p; // 0x0
        vector4 c; // 0xC
    };
    static_assert(sizeof(Point) == 28, "Invalid Point size");
    struct Line
    {
        _inline Line(vector3 const &, vector3 const &, vector4 &);
        Line();
        vector3 p[2]; // 0x0
        vector4 c; // 0x18
    };
    static_assert(sizeof(Line) == 40, "Invalid Line size");
    struct Tri
    {
        _inline Tri(vector3 const &, vector3 const &, vector3 const &, vector4 const &);
        Tri();
        vector3 p[3]; // 0x0
        vector4 c; // 0x24
    };
    static_assert(sizeof(Tri) == 52, "Invalid Tri size");
    struct Cube
    {
        _inline Cube(vector3 *, vector4 const &);
        Cube();
        vector3 p[8]; // 0x0
        vector4 c; // 0x60
    };
    static_assert(sizeof(Cube) == 112, "Invalid Cube size");
    struct Sphere
    {
        Sphere(vector3 const &, float, vector4 &);
        Sphere();
        vector3 p; // 0x0
        float r; // 0xC
        vector4 c; // 0x10
    };
    static_assert(sizeof(Sphere) == 32, "Invalid Sphere size");
    struct Text2D
    {
        _inline Text2D(vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        Text2D();
        vector2 p; // 0x0
        char str[128]; // 0x8
        vector4 c; // 0x88
        DebugRender::Justification just; // 0x98
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x9C
    };
    static_assert(sizeof(Text2D) == 160, "Invalid Text2D size");
    struct WText2D
    {
        _inline WText2D(vector2 const &, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        WText2D();
        vector2 p; // 0x0
        wchar_t str[128]; // 0x8
        vector4 c; // 0x108
        DebugRender::Justification just; // 0x118
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x11C
        bool dropShadow; // 0x120
        float shadowOffsetX; // 0x124
        float shadowOffsetY; // 0x128
    };
    static_assert(sizeof(WText2D) == 300, "Invalid WText2D size");
    struct Texture2D
    {
        _inline Texture2D(vector2 const &, vector2 const &, Texture *, vector4);
        Texture2D();
        vector2 p[2]; // 0x0
        Texture *t; // 0x10
        vector4 c; // 0x14
    };
    static_assert(sizeof(Texture2D) == 36, "Invalid Texture2D size");
    struct Text3D
    {
        Text3D(vector3 const &, float, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        Text3D();
        vector3 p; // 0x0
        char str[128]; // 0xC
        vector4 c; // 0x8C
        float nHeight; // 0x9C
        DebugRender::Justification just; // 0xA0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0xA4
    };
    static_assert(sizeof(Text3D) == 168, "Invalid Text3D size");
    struct WText3D
    {
        WText3D(vector3 const &, float, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        WText3D();
        vector3 p; // 0x0
        wchar_t str[128]; // 0xC
        vector4 c; // 0x10C
        float nHeight; // 0x11C
        DebugRender::Justification just; // 0x120
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x124
    };
    static_assert(sizeof(WText3D) == 296, "Invalid WText3D size");
    struct Cylinder
    {
        Cylinder(vector3 const &, float, float, float, vector4 &, unsigned __int32);
        Cylinder(vector3 const &, float, float, vector4 &, unsigned __int32);
        Cylinder();
        vector3 p; // 0x0
        float rx; // 0xC
        float rz; // 0x10
        float h; // 0x14
        vector4 c; // 0x18
        unsigned __int32 nSegments; // 0x28
    };
    static_assert(sizeof(Cylinder) == 44, "Invalid Cylinder size");
    static void Draw(DebugRender::Cylinder const &, char const *);
    static void Draw(DebugRender::WText3D const &, char const *);
    static void Draw(DebugRender::Text3D const &, char const *);
    static void Draw(DebugRender::Texture2D const &, char const *);
    static void Draw(DebugRender::WText2D const &, char const *);
    static void Draw(DebugRender::Text2D const &, char const *);
    static void Draw(DebugRender::Sphere const &, char const *);
    static void Draw(DebugRender::Cube const &, char const *);
    static void Draw(DebugRender::Tri const &, char const *);
    static void Draw(DebugRender::Line const &, char const *);
    static void Draw(DebugRender::Point const &, char const *);
    static void Draw(DebugRender::OvalOutline const &, char const *);
    static void Draw(DebugRender::RectOutline const &, char const *);
    static void Draw(DebugRender::Tris2DDupeVerts const &, char const *);
    static void Draw(DebugRender::Tri2D const &, char const *);
    static void Draw(DebugRender::Lines2DDupeVerts const &, char const *);
    static void Draw(DebugRender::Line2D const &, char const *);
    static void Draw(DebugRender::Point2D const &, char const *);
private:
    static DebugRenderProxy *s_pProxy;
};
static_assert(sizeof(DebugRender) == 1, "Invalid DebugRender size");

class DebugRenderProxy :
    public Core
{
public:
    virtual ~DebugRenderProxy() override;
    virtual void Display() = 0;
    virtual void List(std::vector<char const *,std::allocator<char const *> > &) = 0;
    virtual void SetDisplay(char const *, bool) = 0;
    virtual bool GetDisplay(char const *) = 0;
    virtual void SetAutoClear(char const *, bool) = 0;
    virtual bool GetAutoClear(char const *) = 0;
    virtual void Clear(char const *) = 0;
    virtual void Draw(DebugRender::Cylinder const &, char const *) = 0;
    virtual void Draw(DebugRender::WText3D const &, char const *) = 0;
    virtual void Draw(DebugRender::Text3D const &, char const *) = 0;
    virtual void Draw(DebugRender::Texture2D const &, char const *) = 0;
    virtual void Draw(DebugRender::WText2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Text2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Sphere const &, char const *) = 0;
    virtual void Draw(DebugRender::Cube const &, char const *) = 0;
    virtual void Draw(DebugRender::Tri const &, char const *) = 0;
    virtual void Draw(DebugRender::Line const &, char const *) = 0;
    virtual void Draw(DebugRender::Point const &, char const *) = 0;
    virtual void Draw(DebugRender::OvalOutline const &, char const *) = 0;
    virtual void Draw(DebugRender::RectOutline const &, char const *) = 0;
    virtual void Draw(DebugRender::Tris2DDupeVerts const &, char const *) = 0;
    virtual void Draw(DebugRender::Tri2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Lines2DDupeVerts const &, char const *) = 0;
    virtual void Draw(DebugRender::Line2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Point2D const &, char const *) = 0;
    DebugRenderProxy(DebugRenderProxy const &); /* compiler_generated() */
    DebugRenderProxy(); /* compiler_generated() */
    DebugRenderProxy &operator=(DebugRenderProxy const &); /* compiler_generated() */
};
static_assert(sizeof(DebugRenderProxy) == 4, "Invalid DebugRenderProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_648CF6(DebugRender::Line2D *const);
_inline DebugRender::Line2D::Line2D() // 0x648CF6
{
    mangled_assert("??0Line2D@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_648CF6(this);
}

_extern _sub_648D31(DebugRender::Tri2D *const);
_inline DebugRender::Tri2D::Tri2D() // 0x648D31
{
    mangled_assert("??0Tri2D@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_648D31(this);
}

_extern _sub_52DAFE(DebugRender::Line *const, vector3 const &, vector3 const &, vector4 &);
_inline DebugRender::Line::Line(vector3 const &, vector3 const &, vector4 &) // 0x52DAFE
{
    mangled_assert("??0Line@DebugRender@@QAE@ABVvector3@@0AAVvector4@@@Z");
    todo("implement");
    _sub_52DAFE(this, arg, arg, arg);
}

_extern _sub_4BE1CD(DebugRender::Tri *const, vector3 const &, vector3 const &, vector3 const &, vector4 const &);
_inline DebugRender::Tri::Tri(vector3 const &, vector3 const &, vector3 const &, vector4 const &) // 0x4BE1CD
{
    mangled_assert("??0Tri@DebugRender@@QAE@ABVvector3@@00ABVvector4@@@Z");
    todo("implement");
    _sub_4BE1CD(this, arg, arg, arg, arg);
}

_extern _sub_4BDFA6(DebugRender::Cube *const, vector3 *, vector4 const &);
_inline DebugRender::Cube::Cube(vector3 *, vector4 const &) // 0x4BDFA6
{
    mangled_assert("??0Cube@DebugRender@@QAE@PAVvector3@@ABVvector4@@@Z");
    todo("implement");
    _sub_4BDFA6(this, arg, arg);
}

_extern _sub_528FB5(DebugRender::Text2D *const, vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
_inline DebugRender::Text2D::Text2D(vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *) // 0x528FB5
{
    mangled_assert("??0Text2D@DebugRender@@QAE@ABVvector2@@PBDAAVvector4@@W4Justification@1@PBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_528FB5(this, arg, arg, arg, arg, arg);
}

_extern _sub_6492FC(DebugRender::WText2D *const, vector2 const &, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
_inline DebugRender::WText2D::WText2D(vector2 const &, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *) // 0x6492FC
{
    mangled_assert("??0WText2D@DebugRender@@QAE@ABVvector2@@PB_WAAVvector4@@W4Justification@1@PBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_6492FC(this, arg, arg, arg, arg, arg);
}

_extern _sub_648CF9(DebugRender::Texture2D *const, vector2 const &, vector2 const &, Texture *, vector4);
_inline DebugRender::Texture2D::Texture2D(vector2 const &, vector2 const &, Texture *, vector4) // 0x648CF9
{
    mangled_assert("??0Texture2D@DebugRender@@QAE@ABVvector2@@0PAVTexture@@Vvector4@@@Z");
    todo("implement");
    _sub_648CF9(this, arg, arg, arg, arg);
}

/* ---------- private code */

#endif // __DEBUGRENDER_H__
/* combined */
#ifndef __DEBUGRENDER_H__
#define __DEBUGRENDER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DebugRender
{
public:
    static void Register(DebugRenderProxy *pProxy);
    static void Unregister(DebugRenderProxy *pProxy);
    static void Display();
    static void List(std::vector<char const *,std::allocator<char const *> > &l);
    static void SetDisplay(char const *frame, bool bDisplay);
    static bool GetDisplay(char const *frame);
    static void SetAutoClear(char const *frame, bool bClear);
    static bool GetAutoClear(char const *frame);
    static void Clear(char const *frame);
    enum Justification
    {
        JUST_Left = 0,
        JUST_Right,
        JUST_Center,
    };
    static unsigned __int32 const CIRCLE_SEGMENTS;
    struct Point2D
    {
        Point2D(vector2 const &, vector4 &);
        Point2D();
        vector2 p; // 0x0
        vector4 c; // 0x8
    };
    static_assert(sizeof(Point2D) == 24, "Invalid Point2D size");
    struct Line2D
    {
        Line2D(vector2 const &, vector2 const &, vector4 const &, float);
        _inline Line2D();
        vector2 p[2]; // 0x0
        vector4 c; // 0x10
        float lineWidth; // 0x20
    };
    static_assert(sizeof(Line2D) == 36, "Invalid Line2D size");
    struct Lines2DDupeVerts
    {
        Lines2DDupeVerts(__int32, FatVertex const *);
        _inline Lines2DDupeVerts();
        ~Lines2DDupeVerts();
        __int32 m_nVertices; // 0x0
        FatVertex *m_vertex; // 0x4
    };
    static_assert(sizeof(Lines2DDupeVerts) == 8, "Invalid Lines2DDupeVerts size");
    struct Tri2D
    {
        Tri2D(vector2 const &, vector2 const &, vector2 const &, vector4 &);
        Tri2D();
        vector2 p[3]; // 0x0
        vector4 c; // 0x18
    };
    static_assert(sizeof(Tri2D) == 40, "Invalid Tri2D size");
    struct Tris2DDupeVerts
    {
        Tris2DDupeVerts(__int32, FatVertex const *, __int32, __int32 const *);
        _inline Tris2DDupeVerts();
        ~Tris2DDupeVerts();
        __int32 m_nVertices; // 0x0
        FatVertex *m_vertex; // 0x4
        __int32 m_nIndices; // 0x8
        __int32 const *m_indices; // 0xC
    };
    static_assert(sizeof(Tris2DDupeVerts) == 16, "Invalid Tris2DDupeVerts size");
    struct RectOutline
    {
        RectOutline(vector2 const &, vector2 const &, vector4 &);
        RectOutline();
        vector2 p[2]; // 0x0
        vector4 c; // 0x10
    };
    static_assert(sizeof(RectOutline) == 32, "Invalid RectOutline size");
    struct OvalOutline
    {
        OvalOutline(vector2 const &, float, float, vector4 const &, float);
        OvalOutline();
        vector2 p; // 0x0
        float rx; // 0x8
        float ry; // 0xC
        vector4 c; // 0x10
        float lw; // 0x20
    };
    static_assert(sizeof(OvalOutline) == 36, "Invalid OvalOutline size");
    struct Point
    {
        Point(vector3 const &, vector4 &);
        Point();
        vector3 p; // 0x0
        vector4 c; // 0xC
    };
    static_assert(sizeof(Point) == 28, "Invalid Point size");
    struct Line
    {
        Line(vector3 const &, vector3 const &, vector4 &);
        _inline Line();
        vector3 p[2]; // 0x0
        vector4 c; // 0x18
    };
    static_assert(sizeof(Line) == 40, "Invalid Line size");
    struct Tri
    {
        Tri(vector3 const &, vector3 const &, vector3 const &, vector4 const &);
        Tri();
        vector3 p[3]; // 0x0
        vector4 c; // 0x24
    };
    static_assert(sizeof(Tri) == 52, "Invalid Tri size");
    struct Cube
    {
        Cube(vector3 *, vector4 const &);
        Cube();
        vector3 p[8]; // 0x0
        vector4 c; // 0x60
    };
    static_assert(sizeof(Cube) == 112, "Invalid Cube size");
    struct Sphere
    {
        Sphere(vector3 const &, float, vector4 &);
        Sphere();
        vector3 p; // 0x0
        float r; // 0xC
        vector4 c; // 0x10
    };
    static_assert(sizeof(Sphere) == 32, "Invalid Sphere size");
    struct Text2D
    {
        _inline Text2D(vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        Text2D();
        vector2 p; // 0x0
        char str[128]; // 0x8
        vector4 c; // 0x88
        DebugRender::Justification just; // 0x98
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x9C
    };
    static_assert(sizeof(Text2D) == 160, "Invalid Text2D size");
    struct WText2D
    {
        WText2D(vector2 const &, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        WText2D();
        vector2 p; // 0x0
        wchar_t str[128]; // 0x8
        vector4 c; // 0x108
        DebugRender::Justification just; // 0x118
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x11C
        bool dropShadow; // 0x120
        float shadowOffsetX; // 0x124
        float shadowOffsetY; // 0x128
    };
    static_assert(sizeof(WText2D) == 300, "Invalid WText2D size");
    struct Texture2D
    {
        Texture2D(vector2 const &, vector2 const &, Texture *, vector4);
        Texture2D();
        vector2 p[2]; // 0x0
        Texture *t; // 0x10
        vector4 c; // 0x14
    };
    static_assert(sizeof(Texture2D) == 36, "Invalid Texture2D size");
    struct Text3D
    {
        Text3D(vector3 const &, float, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        Text3D();
        vector3 p; // 0x0
        char str[128]; // 0xC
        vector4 c; // 0x8C
        float nHeight; // 0x9C
        DebugRender::Justification just; // 0xA0
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0xA4
    };
    static_assert(sizeof(Text3D) == 168, "Invalid Text3D size");
    struct WText3D
    {
        WText3D(vector3 const &, float, wchar_t const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
        WText3D();
        vector3 p; // 0x0
        wchar_t str[128]; // 0xC
        vector4 c; // 0x10C
        float nHeight; // 0x11C
        DebugRender::Justification just; // 0x120
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *fontName; // 0x124
    };
    static_assert(sizeof(WText3D) == 296, "Invalid WText3D size");
    struct Cylinder
    {
        Cylinder(vector3 const &, float, float, float, vector4 &, unsigned __int32);
        Cylinder(vector3 const &, float, float, vector4 &, unsigned __int32);
        Cylinder();
        vector3 p; // 0x0
        float rx; // 0xC
        float rz; // 0x10
        float h; // 0x14
        vector4 c; // 0x18
        unsigned __int32 nSegments; // 0x28
    };
    static_assert(sizeof(Cylinder) == 44, "Invalid Cylinder size");
    static void Draw(DebugRender::Cylinder const &c, char const *frame);
    static void Draw(DebugRender::WText3D const &t, char const *frame);
    static void Draw(DebugRender::Text3D const &t, char const *frame);
    static void Draw(DebugRender::Texture2D const &t, char const *frame);
    static void Draw(DebugRender::WText2D const &t, char const *frame);
    static void Draw(DebugRender::Text2D const &t, char const *frame);
    static void Draw(DebugRender::Sphere const &s, char const *frame);
    static void Draw(DebugRender::Cube const &c, char const *frame);
    static void Draw(DebugRender::Tri const &t, char const *frame);
    static void Draw(DebugRender::Line const &l, char const *frame);
    static void Draw(DebugRender::Point const &p, char const *frame);
    static void Draw(DebugRender::OvalOutline const &s, char const *frame);
    static void Draw(DebugRender::RectOutline const &c, char const *frame);
    static void Draw(DebugRender::Tris2DDupeVerts const &t, char const *frame);
    static void Draw(DebugRender::Tri2D const &t, char const *frame);
    static void Draw(DebugRender::Lines2DDupeVerts const &l, char const *frame);
    static void Draw(DebugRender::Line2D const &l, char const *frame);
    static void Draw(DebugRender::Point2D const &p, char const *frame);
private:
    static DebugRenderProxy *s_pProxy;
};
static_assert(sizeof(DebugRender) == 1, "Invalid DebugRender size");

class DebugRenderProxy :
    public Core
{
public:
    virtual ~DebugRenderProxy() override;
    virtual void Display() = 0;
    virtual void List(std::vector<char const *,std::allocator<char const *> > &) = 0;
    virtual void SetDisplay(char const *, bool) = 0;
    virtual bool GetDisplay(char const *) = 0;
    virtual void SetAutoClear(char const *, bool) = 0;
    virtual bool GetAutoClear(char const *) = 0;
    virtual void Clear(char const *) = 0;
    virtual void Draw(DebugRender::Cylinder const &, char const *) = 0;
    virtual void Draw(DebugRender::WText3D const &, char const *) = 0;
    virtual void Draw(DebugRender::Text3D const &, char const *) = 0;
    virtual void Draw(DebugRender::Texture2D const &, char const *) = 0;
    virtual void Draw(DebugRender::WText2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Text2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Sphere const &, char const *) = 0;
    virtual void Draw(DebugRender::Cube const &, char const *) = 0;
    virtual void Draw(DebugRender::Tri const &, char const *) = 0;
    virtual void Draw(DebugRender::Line const &, char const *) = 0;
    virtual void Draw(DebugRender::Point const &, char const *) = 0;
    virtual void Draw(DebugRender::OvalOutline const &, char const *) = 0;
    virtual void Draw(DebugRender::RectOutline const &, char const *) = 0;
    virtual void Draw(DebugRender::Tris2DDupeVerts const &, char const *) = 0;
    virtual void Draw(DebugRender::Tri2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Lines2DDupeVerts const &, char const *) = 0;
    virtual void Draw(DebugRender::Line2D const &, char const *) = 0;
    virtual void Draw(DebugRender::Point2D const &, char const *) = 0;
    _inline DebugRenderProxy(DebugRenderProxy const &); /* compiler_generated() */
    _inline DebugRenderProxy(); /* compiler_generated() */
    _inline DebugRenderProxy &operator=(DebugRenderProxy const &); /* compiler_generated() */
};
static_assert(sizeof(DebugRenderProxy) == 4, "Invalid DebugRenderProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1003E070(DebugRender::Line2D *const);
_inline DebugRender::Line2D::Line2D() // 0x1003E070
{
    mangled_assert("??0Line2D@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_1003E070(this);
}

_extern _sub_10033CD0(DebugRender::Lines2DDupeVerts *const);
_inline DebugRender::Lines2DDupeVerts::Lines2DDupeVerts() // 0x10033CD0
{
    mangled_assert("??0Lines2DDupeVerts@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_10033CD0(this);
}

_extern _sub_10033D30(DebugRender::Tris2DDupeVerts *const);
_inline DebugRender::Tris2DDupeVerts::Tris2DDupeVerts() // 0x10033D30
{
    mangled_assert("??0Tris2DDupeVerts@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_10033D30(this);
}

_extern _sub_1003E080(DebugRender::Line *const);
_inline DebugRender::Line::Line() // 0x1003E080
{
    mangled_assert("??0Line@DebugRender@@QAE@XZ");
    todo("implement");
    _sub_1003E080(this);
}

_extern _sub_1006F430(DebugRender::Text2D *const, vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *);
_inline DebugRender::Text2D::Text2D(vector2 const &, char const *, vector4 &, DebugRender::Justification, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *) // 0x1006F430
{
    mangled_assert("??0Text2D@DebugRender@@QAE@ABVvector2@@PBDAAVvector4@@W4Justification@1@PBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_1006F430(this, arg, arg, arg, arg, arg);
}

/* ---------- private code */

#endif // __DEBUGRENDER_H__
#endif
