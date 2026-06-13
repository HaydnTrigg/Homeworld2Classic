#if 0
#ifndef __HW2DDRAW_H__
#define __HW2DDRAW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2DDRAW_H__
/* combined */
#ifndef __HW2DDRAW_H__
#define __HW2DDRAW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _DDSCAPS2
{
    unsigned __int32 dwCaps; // 0x0
    unsigned __int32 dwCaps2; // 0x4
    unsigned __int32 dwCaps3; // 0x8
    union
    {
        unsigned __int32 dwCaps4; // 0xC
        unsigned __int32 dwVolumeDepth; // 0xC
    };
};
static_assert(sizeof(_DDSCAPS2) == 16, "Invalid _DDSCAPS2 size");

struct _DDPIXELFORMAT
{
    unsigned __int32 dwSize; // 0x0
    unsigned __int32 dwFlags; // 0x4
    unsigned __int32 dwFourCC; // 0x8
    union
    {
        unsigned __int32 dwRGBBitCount; // 0xC
        unsigned __int32 dwYUVBitCount; // 0xC
        unsigned __int32 dwZBufferBitDepth; // 0xC
        unsigned __int32 dwAlphaBitDepth; // 0xC
        unsigned __int32 dwLuminanceBitCount; // 0xC
        unsigned __int32 dwBumpBitCount; // 0xC
        unsigned __int32 dwPrivateFormatBitCount; // 0xC
    };
    union
    {
        unsigned __int32 dwRBitMask; // 0x10
        unsigned __int32 dwYBitMask; // 0x10
        unsigned __int32 dwStencilBitDepth; // 0x10
        unsigned __int32 dwLuminanceBitMask; // 0x10
        unsigned __int32 dwBumpDuBitMask; // 0x10
        unsigned __int32 dwOperations; // 0x10
    };
    union
    {
        unsigned __int32 dwGBitMask; // 0x14
        unsigned __int32 dwUBitMask; // 0x14
        unsigned __int32 dwZBitMask; // 0x14
        unsigned __int32 dwBumpDvBitMask; // 0x14
        struct
        {
            unsigned short wFlipMSTypes; // 0x0
            unsigned short wBltMSTypes; // 0x2
        } MultiSampleCaps; // 0x14
    };
    union
    {
        unsigned __int32 dwBBitMask; // 0x18
        unsigned __int32 dwVBitMask; // 0x18
        unsigned __int32 dwStencilBitMask; // 0x18
        unsigned __int32 dwBumpLuminanceBitMask; // 0x18
    };
    union
    {
        unsigned __int32 dwRGBAlphaBitMask; // 0x1C
        unsigned __int32 dwYUVAlphaBitMask; // 0x1C
        unsigned __int32 dwLuminanceAlphaBitMask; // 0x1C
        unsigned __int32 dwRGBZBitMask; // 0x1C
        unsigned __int32 dwYUVZBitMask; // 0x1C
    };
};
static_assert(sizeof(_DDPIXELFORMAT) == 32, "Invalid _DDPIXELFORMAT size");

struct _DDCOLORKEY
{
    unsigned __int32 dwColorSpaceLowValue; // 0x0
    unsigned __int32 dwColorSpaceHighValue; // 0x4
};
static_assert(sizeof(_DDCOLORKEY) == 8, "Invalid _DDCOLORKEY size");

struct _DDSURFACEDESC2
{
    unsigned __int32 dwSize; // 0x0
    unsigned __int32 dwFlags; // 0x4
    unsigned __int32 dwHeight; // 0x8
    unsigned __int32 dwWidth; // 0xC
    union
    {
        long lPitch; // 0x10
        unsigned __int32 dwLinearSize; // 0x10
    };
    union
    {
        unsigned __int32 dwBackBufferCount; // 0x14
        unsigned __int32 dwDepth; // 0x14
    };
    union
    {
        unsigned __int32 dwMipMapCount; // 0x18
        unsigned __int32 dwRefreshRate; // 0x18
        unsigned __int32 dwSrcVBHandle; // 0x18
    };
    unsigned __int32 dwAlphaBitDepth; // 0x1C
    unsigned __int32 dwReserved; // 0x20
    void *lpSurface; // 0x24
    union
    {
        _DDCOLORKEY ddckCKDestOverlay; // 0x28
        unsigned __int32 dwEmptyFaceColor; // 0x28
    };
    _DDCOLORKEY ddckCKDestBlt; // 0x30
    _DDCOLORKEY ddckCKSrcOverlay; // 0x38
    _DDCOLORKEY ddckCKSrcBlt; // 0x40
    union
    {
        _DDPIXELFORMAT ddpfPixelFormat; // 0x48
        unsigned __int32 dwFVF; // 0x48
    };
    _DDSCAPS2 ddsCaps; // 0x68
    unsigned __int32 dwTextureStage; // 0x78
};
static_assert(sizeof(_DDSURFACEDESC2) == 124, "Invalid _DDSURFACEDESC2 size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __HW2DDRAW_H__
#endif
