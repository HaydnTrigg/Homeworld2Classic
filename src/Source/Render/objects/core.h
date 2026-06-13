#if 0
#ifndef __CORE_H__
#define __CORE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Core
{
public:
    Core(Core const &); /* compiler_generated() */
    Core();
    virtual ~Core();
    virtual bool release();
    static void setTable(rndTable *);
    rndTable *getTable() const;
    static void setDefaultTextureFilter(TextureFilter, TextureFilter);
    static void setDefaultMinFilter(TextureFilter);
    static void setDefaultMagFilter(TextureFilter);
    static void setDefaultAnisotropy(unsigned __int32);
    static TextureFilter getMinFilter();
    static TextureFilter getMagFilter();
    static unsigned __int32 getAnisotropy();
    static bool startTextureRegistry();
    static bool shutdownTextureRegistry();
    static void startup();
    static void shutdown();
protected:
    static rndTable *m_gl;
    static TextureFilter m_minFilter;
    static TextureFilter m_magFilter;
    static unsigned __int32 m_anisotropy;
    static __int32 m_numTextureUnits;
public:
    Core &operator=(Core const &); /* compiler_generated() */
};
static_assert(sizeof(Core) == 4, "Invalid Core size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CORE_H__
/* combined */
#ifndef __CORE_H__
#define __CORE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Core
{
public:
    _inline Core(Core const &); /* compiler_generated() */
    Core();
    virtual ~Core();
    virtual bool release();
    static void setTable(rndTable *_gl);
    rndTable *getTable() const;
    static void setDefaultTextureFilter(TextureFilter min, TextureFilter mag);
    static void setDefaultMinFilter(TextureFilter min);
    static void setDefaultMagFilter(TextureFilter mag);
    static void setDefaultAnisotropy(unsigned __int32 level);
    static TextureFilter getMinFilter();
    static TextureFilter getMagFilter();
    static unsigned __int32 getAnisotropy();
    static bool startTextureRegistry();
    static bool shutdownTextureRegistry();
    static void startup();
    static void shutdown();
protected:
    static rndTable *m_gl;
    static TextureFilter m_minFilter;
    static TextureFilter m_magFilter;
    static unsigned __int32 m_anisotropy;
    static __int32 m_numTextureUnits;
public:
    _inline Core &operator=(Core const &); /* compiler_generated() */
};
static_assert(sizeof(Core) == 4, "Invalid Core size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CORE_H__
#endif
