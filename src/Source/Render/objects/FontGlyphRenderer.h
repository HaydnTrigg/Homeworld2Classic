#if 0
#ifndef __FONTGLYPHRENDERER_H__
#define __FONTGLYPHRENDERER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FontGlyphRenderer
{
public:
    FontGlyphRenderer();
    ~FontGlyphRenderer();
    static FontGlyphRenderer *i();
    static FontGlyphRenderer *instance();
    __int32 NewFont(char const *, unsigned __int32, bool, bool, unsigned __int32, unsigned __int32 &, unsigned __int32 &);
    void DeleteFont(__int32);
    static unsigned __int32 const CHARSET_ERROR;
    static char const *CHARSET_DEFAULT;
    static unsigned __int32 const SIZE_DEFAULT;
    unsigned __int32 QueryCharSet(char const *);
    bool QueryGlyphSize(__int32, wchar_t, unsigned __int32 &, unsigned __int32 &);
    bool BuildGlyphImage(__int32, wchar_t, unsigned char *);
private:
    FontGlyphRendererData *m_data; // 0x0
    static FontGlyphRenderer *s_instance;
};
static_assert(sizeof(FontGlyphRenderer) == 4, "Invalid FontGlyphRenderer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FONTGLYPHRENDERER_H__
#endif
