#if 0
#ifndef __CUBEMAP_H__
#define __CUBEMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Cubemap
{
public:
    enum CubeSide
    {
        CS_PosX = 0,
        CS_NegX,
        CS_PosY,
        CS_NegY,
        CS_PosZ,
        CS_NegZ,
    };
    static Texture *createTexture(rndTable &, char const **);
    static void eyespaceRenderSetup(rndTable &, unsigned __int32, Texture *, bool);
    static void worldspaceRenderSetup(rndTable &, unsigned __int32, matrix4 const &, Texture *, bool);
};
static_assert(sizeof(Cubemap) == 1, "Invalid Cubemap size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CUBEMAP_H__
/* combined */
#ifndef __CUBEMAP_H__
#define __CUBEMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Cubemap
{
public:
    enum CubeSide
    {
        CS_PosX = 0,
        CS_NegX,
        CS_PosY,
        CS_NegY,
        CS_PosZ,
        CS_NegZ,
    };
    static Texture *createTexture(rndTable &gl, char const **filenames);
    static void eyespaceRenderSetup(rndTable &gl, unsigned __int32 tmu, Texture *pCubemap, bool bOn);
    static void worldspaceRenderSetup(rndTable &gl, unsigned __int32 tmu, matrix4 const &worldview, Texture *pCubemap, bool bOn);
};
static_assert(sizeof(Cubemap) == 1, "Invalid Cubemap size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CUBEMAP_H__
#endif
