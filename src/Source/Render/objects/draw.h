#if 0
#ifndef __DRAW_H__
#define __DRAW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Draw :
    public Core
{
public:
    static Draw *getInstance();
    static Draw *create();
    virtual bool release() override;
    bool begin2D(vector4 *);
    bool end2D();
    bool is2D() const;
    void applyDefaultMaterial();
    void rectSolid(PrimRectangle const &, vector4 const &);
    void rectAlpha(PrimRectangle const &, vector4 const &, bool);
    void rectTexture(PrimRectangle const &, vector4 const &, Texture *, bool);
    void rectOutline(PrimRectangle const &, vector4 const &, float);
    void lineSolid(float, float, float, float, vector4 const &, float);
    void lineAlpha(float, float, float, float, vector4 const &, float, bool);
    void polygonSolid(vector2 *, __int32, vector4 const &);
    void polygonAlpha(vector2 *, __int32, vector4 const &, bool);
    void polygonOutline(vector2 *, __int32, vector4 const &, float);
    void circleOutline(float, float, float, vector4 const &, __int32, float);
    void lineStrip(vector2 *, __int32, vector4 const &, float);
    void pointSolid(float, float, vector4 const &, float);
    vector4 const *getWindow() const;
    Draw(Draw const &); /* compiler_generated() */
protected:
    Draw();
    virtual ~Draw() override;
    void rectSetup(PrimRectangle const &, FatVertex *);
private:
    static Draw *s_instance;
    Material *m_mat2D; // 0x4
    bool m_b2D; // 0x8
    matrix4 m_projection; // 0xC
    bool m_depthbuffer; // 0x4C
    bool m_cull; // 0x4D
    bool m_lighting; // 0x4E
    vector4 *m_window; // 0x50
public:
    Draw &operator=(Draw const &); /* compiler_generated() */
};
static_assert(sizeof(Draw) == 84, "Invalid Draw size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DRAW_H__
/* combined */
#ifndef __DRAW_H__
#define __DRAW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Draw :
    public Core
{
public:
    static Draw *getInstance();
    static _inline Draw *create();
    virtual bool release() override;
    bool begin2D(vector4 *);
    bool end2D();
    _inline bool is2D() const;
    void applyDefaultMaterial();
    void rectSolid(PrimRectangle const &, vector4 const &);
    void rectAlpha(PrimRectangle const &, vector4 const &, bool);
    void rectTexture(PrimRectangle const &, vector4 const &, Texture *, bool);
    void rectOutline(PrimRectangle const &, vector4 const &, float);
    void lineSolid(float, float, float, float, vector4 const &, float);
    void lineAlpha(float, float, float, float, vector4 const &, float, bool);
    void polygonSolid(vector2 *, __int32, vector4 const &);
    void polygonAlpha(vector2 *, __int32, vector4 const &, bool);
    void polygonOutline(vector2 *, __int32, vector4 const &, float);
    void circleOutline(float, float, float, vector4 const &, __int32, float);
    void lineStrip(vector2 *, __int32, vector4 const &, float);
    void pointSolid(float, float, vector4 const &, float);
    _inline vector4 const *getWindow() const;
    _inline Draw(Draw const &); /* compiler_generated() */
protected:
    Draw();
    virtual ~Draw() override;
    void rectSetup(PrimRectangle const &, FatVertex *);
private:
    static Draw *s_instance;
    Material *m_mat2D; // 0x4
    bool m_b2D; // 0x8
    matrix4 m_projection; // 0xC
    bool m_depthbuffer; // 0x4C
    bool m_cull; // 0x4D
    bool m_lighting; // 0x4E
    vector4 *m_window; // 0x50
public:
    _inline Draw &operator=(Draw const &); /* compiler_generated() */
};
static_assert(sizeof(Draw) == 84, "Invalid Draw size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Draw *Draw::create() // 0x10048930
{
    mangled_assert("?create@Draw@@SGPAV1@XZ");
    todo("implement");
}

_inline bool Draw::is2D() const // 0x10048AD0
{
    mangled_assert("?is2D@Draw@@QBE_NXZ");
    todo("implement");
}

_inline vector4 const *Draw::getWindow() const // 0x10048AC0
{
    mangled_assert("?getWindow@Draw@@QBEPBVvector4@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DRAW_H__
#endif
