#if 0
#ifndef __UIGRAPHIC_H__
#define __UIGRAPHIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class UIGraphic
{
public:
    struct LOD
    {
        void *toRender; // 0x0
        vector3 size; // 0x4
        vector3 centre; // 0x10
        float metric; // 0x1C
        _inline LOD(); /* compiler_generated() */
    };
    static_assert(sizeof(LOD) == 32, "Invalid LOD size");
protected:
    std::vector<UIGraphic::LOD,std::allocator<UIGraphic::LOD> > m_LODs; // 0x4
    __int32 m_currentLOD; // 0x10
    float m_param; // 0x14
    static float s_LODtolerance;
    static char const *s_DebugRenderFrame;
public:
    UIGraphic(UIGraphic const &); /* compiler_generated() */
    UIGraphic();
    virtual _inline ~UIGraphic();
    float getParam();
    void addLOD(void *, float);
    void setLOD(float);
    static bool LODGreater(UIGraphic::LOD const &a, UIGraphic::LOD const &b);
    static void setDebugRenderFrame(char const *frame);
    void parseLODSimpleMeshes(LuaConfig &);
    void parseLODFonts(LuaConfig &);
    void parseLODTextures(LuaConfig &);
    _inline void setParam(float);
    UIGraphic &operator=(UIGraphic const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphic) == 24, "Invalid UIGraphic size");

class UIGraphic3D :
    public UIGraphic
{
public:
    UIGraphic3D(UIGraphic3D const &); /* compiler_generated() */
    UIGraphic3D();
    vector4 const *getColour();
    virtual void render(float, float) = 0;
    void parseRenderFlags(LuaConfig &);
    _inline void setColour(vector4 const *);
protected:
    vector4 m_colour; // 0x18
    float m_lineWeight; // 0x28
    unsigned char m_bColoured : 1; // 0x2C
    unsigned char m_bTextured : 1; // 0x2C
public:
    virtual _inline ~UIGraphic3D() override; /* compiler_generated() */
    UIGraphic3D &operator=(UIGraphic3D const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphic3D) == 48, "Invalid UIGraphic3D size");

class UIGraphicMesh :
    public UIGraphic3D
{
public:
    UIGraphicMesh(UIGraphicMesh const &); /* compiler_generated() */
    UIGraphicMesh(LuaConfig &, bool);
    virtual ~UIGraphicMesh() override;
    virtual void render(float, float) override;
    UIGraphicMesh &operator=(UIGraphicMesh const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphicMesh) == 48, "Invalid UIGraphicMesh size");

class UIGraphic2D :
    public UIGraphic
{
public:
    UIGraphic2D(UIGraphic2D const &); /* compiler_generated() */
    UIGraphic2D();
    vector4 const *getColour() const;
    virtual void getScale(vector2 &) const = 0;
    virtual void render(PrimRectangle const *, float, float) = 0;
    _inline void setColour(vector4 const *);
    void parseRenderFlags(LuaConfig &);
protected:
    vector4 m_colour; // 0x18
    float m_lineWeight; // 0x28
    bool m_bScaleX : 1; // 0x2C
    bool m_bScaleY : 1; // 0x2C
    bool m_bStretchX : 1; // 0x2C
    bool m_bStretchY : 1; // 0x2C
    bool m_bFromLeft : 1; // 0x2C
    bool m_bFromRight : 1; // 0x2C
    bool m_bFromTop : 1; // 0x2C
    bool m_bFromBottom : 1; // 0x2C
    bool m_bColoured : 1; // 0x2D
    bool m_bJustifyRight : 1; // 0x2D
    bool m_bJustifyTop : 1; // 0x2D
    bool m_bJustifyHorizCentre : 1; // 0x2D
    bool m_bJustifyVertCentre : 1; // 0x2D
    bool m_bClipTop : 1; // 0x2D
    bool m_bClipBottom : 1; // 0x2D
    bool m_bClipLeft : 1; // 0x2D
    bool m_bClipRight : 1; // 0x2E
    bool m_bTextured : 1; // 0x2E
public:
    virtual _inline ~UIGraphic2D() override; /* compiler_generated() */
    UIGraphic2D &operator=(UIGraphic2D const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphic2D) == 48, "Invalid UIGraphic2D size");

class UIGraphicMesh2D :
    public UIGraphic2D
{
public:
    UIGraphicMesh2D(UIGraphicMesh2D const &); /* compiler_generated() */
    UIGraphicMesh2D(LuaConfig &);
    virtual ~UIGraphicMesh2D() override;
    virtual void getScale(vector2 &) const override;
    virtual void render(PrimRectangle const *, float, float) override;
    UIGraphicMesh2D &operator=(UIGraphicMesh2D const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphicMesh2D) == 48, "Invalid UIGraphicMesh2D size");

class UIGraphicText2D :
    public UIGraphic2D
{
public:
    UIGraphicText2D(UIGraphicText2D const &); /* compiler_generated() */
    UIGraphicText2D(LuaConfig &);
    virtual ~UIGraphicText2D() override;
    virtual void getScale(vector2 &) const override;
    _inline void setText(wchar_t const *);
    virtual void render(PrimRectangle const *, float, float) override;
private:
    wchar_t const *m_text; // 0x30
    bool m_dropShadow; // 0x34
public:
    UIGraphicText2D &operator=(UIGraphicText2D const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphicText2D) == 56, "Invalid UIGraphicText2D size");

class UIGraphicTexture2D :
    public UIGraphic2D
{
public:
    UIGraphicTexture2D(UIGraphicTexture2D const &); /* compiler_generated() */
    UIGraphicTexture2D(LuaConfig &);
    virtual ~UIGraphicTexture2D() override;
    virtual void getScale(vector2 &) const override;
    virtual void render(PrimRectangle const *, float, float) override;
    UIGraphicTexture2D &operator=(UIGraphicTexture2D const &); /* compiler_generated() */
};
static_assert(sizeof(UIGraphicTexture2D) == 48, "Invalid UIGraphicTexture2D size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_649375(UIGraphic *const);
_inline UIGraphic::~UIGraphic() // 0x649375
{
    mangled_assert("??1UIGraphic@@UAE@XZ");
    todo("implement");
    _sub_649375(this);
}

_extern void _sub_5E1EC3(UIGraphic *const, float);
_inline void UIGraphic::setParam(float) // 0x5E1EC3
{
    mangled_assert("?setParam@UIGraphic@@QAEXM@Z");
    todo("implement");
    _sub_5E1EC3(this, arg);
}

_extern void _sub_5E1EB1(UIGraphic3D *const, vector4 const *);
_inline void UIGraphic3D::setColour(vector4 const *) // 0x5E1EB1
{
    mangled_assert("?setColour@UIGraphic3D@@QAEXPBVvector4@@@Z");
    todo("implement");
    _sub_5E1EB1(this, arg);
}

_extern void _sub_5E1E9F(UIGraphic2D *const, vector4 const *);
_inline void UIGraphic2D::setColour(vector4 const *) // 0x5E1E9F
{
    mangled_assert("?setColour@UIGraphic2D@@QAEXPBVvector4@@@Z");
    todo("implement");
    _sub_5E1E9F(this, arg);
}

_extern void _sub_5E1ED1(UIGraphicText2D *const, wchar_t const *);
_inline void UIGraphicText2D::setText(wchar_t const *) // 0x5E1ED1
{
    mangled_assert("?setText@UIGraphicText2D@@QAEXPB_W@Z");
    todo("implement");
    _sub_5E1ED1(this, arg);
}

/* ---------- private code */

#endif // __UIGRAPHIC_H__
#endif
