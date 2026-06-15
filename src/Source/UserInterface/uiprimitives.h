#if 0
#ifndef __UIPRIMITIVES_H__
#define __UIPRIMITIVES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum LineStyle
{
    LINE_Above = 0,
    LINE_Below,
};

enum TextStyle
{
    TEXTSTYLE_Normal = 0,
    TEXTSTYLE_Bold,
    TEXTSTYLE_Italic,
    TEXTSTYLE_Underline,
};

enum TextJustification
{
    JUST_Left = 0,
    JUST_Right,
    JUST_Center,
};

/* ---------- definitions */

struct UISolidColoredQuad
{
    Color_4b color; // 0x0
    float x0; // 0x4
    float y0; // 0x8
    float x1; // 0xC
    float y1; // 0x10
    float x2; // 0x14
    float y2; // 0x18
    float x3; // 0x1C
    float y3; // 0x20
    float z; // 0x24
    UISolidColoredQuad(); /* compiler_generated() */
};
static_assert(sizeof(UISolidColoredQuad) == 40, "Invalid UISolidColoredQuad size");

struct UIVertexColoredQuad
{
    Color_4b color0; // 0x0
    Color_4b color1; // 0x4
    Color_4b color2; // 0x8
    Color_4b color3; // 0xC
    float x0; // 0x10
    float y0; // 0x14
    float x1; // 0x18
    float y1; // 0x1C
    float x2; // 0x20
    float y2; // 0x24
    float x3; // 0x28
    float y3; // 0x2C
    float z; // 0x30
    _inline UIVertexColoredQuad(); /* compiler_generated() */
};
static_assert(sizeof(UIVertexColoredQuad) == 52, "Invalid UIVertexColoredQuad size");

struct UITexturedQuad
{
    _inline UITexturedQuad();
    Color_4b color; // 0x0
    Texture *texture; // 0x4
    float s0; // 0x8
    float t0; // 0xC
    float s1; // 0x10
    float t1; // 0x14
    float s2; // 0x18
    float t2; // 0x1C
    float s3; // 0x20
    float t3; // 0x24
    float x0; // 0x28
    float y0; // 0x2C
    float x1; // 0x30
    float y1; // 0x34
    float x2; // 0x38
    float y2; // 0x3C
    float x3; // 0x40
    float y3; // 0x44
    float z; // 0x48
    bool bBlackAndWhite; // 0x4C
};
static_assert(sizeof(UITexturedQuad) == 80, "Invalid UITexturedQuad size");

struct UISolidColoredBorderRect
{
    Color_4b color; // 0x0
    Color_4b borderColor; // 0x4
    float x0; // 0x8
    float y0; // 0xC
    float x1; // 0x10
    float y1; // 0x14
    float borderWidth; // 0x18
    float outerBorderWidth; // 0x1C
    float z; // 0x20
    _inline UISolidColoredBorderRect(); /* compiler_generated() */
};
static_assert(sizeof(UISolidColoredBorderRect) == 36, "Invalid UISolidColoredBorderRect size");

struct UISolidColoredLine
{
    Color_4b color; // 0x0
    float x0; // 0x4
    float y0; // 0x8
    float x1; // 0xC
    float y1; // 0x10
    float lineWidth; // 0x14
    LineStyle style; // 0x18
    float z; // 0x1C
    _inline UISolidColoredLine(); /* compiler_generated() */
};
static_assert(sizeof(UISolidColoredLine) == 32, "Invalid UISolidColoredLine size");

union Colour
{
    struct <unnamed-type-colour_s>
    {
        float r; // 0x0
        float g; // 0x4
        float b; // 0x8
        float a; // 0xC
    };
    static_assert(sizeof(<unnamed-type-colour_s>) == 16, "Invalid <unnamed-type-colour_s> size");
    struct
    {
        float r; // 0x0
        float g; // 0x4
        float b; // 0x8
        float a; // 0xC
    } colour_s; // 0x0
    float colour_a[4]; // 0x0
};
static_assert(sizeof(Colour) == 16, "Invalid Colour size");

struct UIText
{
    UIText();
    unsigned long mMask; // 0x0
    TextStyle style; // 0x4
    TextJustification justification; // 0x8
    unsigned long width; // 0xC
    unsigned long height; // 0x10
    Colour text_colour; // 0x14
    bool dropshadow; // 0x24
    Colour drop_colour; // 0x28
    float dropshadow_offset_x; // 0x38
    float dropshadow_offset_y; // 0x3C
    char font[64]; // 0x40
};
static_assert(sizeof(UIText) == 128, "Invalid UIText size");

struct UILine
{
    Color_4b color; // 0x0
    float x0; // 0x4
    float y0; // 0x8
    float x1; // 0xC
    float y1; // 0x10
    float z; // 0x14
    UILine(); /* compiler_generated() */
};
static_assert(sizeof(UILine) == 24, "Invalid UILine size");

struct UICustom
{
    void (*function)(void *); // 0x0
    void *data; // 0x4
    float z; // 0x8
};
static_assert(sizeof(UICustom) == 12, "Invalid UICustom size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline UITexturedQuad::UITexturedQuad() // 0x67FBAC
{
    mangled_assert("??0UITexturedQuad@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __UIPRIMITIVES_H__
#endif
