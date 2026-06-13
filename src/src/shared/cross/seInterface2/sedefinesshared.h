#if 0
#ifndef __SEDEFINESSHARED_H__
#define __SEDEFINESSHARED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct seDeviceInfo
{
    char name[32]; // 0x0
    char description[256]; // 0x20
    char library[256]; // 0x120
    long max3DhwChans; // 0x220
    long max3DswChans; // 0x224
    long maxStreamChans; // 0x228
    long max2DChans; // 0x22C
    bool supported; // 0x230
    seDevice *device; // 0x234
    void *hLibrary; // 0x238
};
static_assert(sizeof(seDeviceInfo) == 572, "Invalid seDeviceInfo size");

struct seProvInfo
{
    char ProvName[128]; // 0x0
    unsigned __int32 numChans; // 0x80
    unsigned __int32 maxPlayableChans; // 0x84
};
static_assert(sizeof(seProvInfo) == 136, "Invalid seProvInfo size");

struct seModeInfo
{
    bool enabled; // 0x0
    long device; // 0x4
    long driverHandle; // 0x8
    long bits; // 0xC
    long outputChans; // 0x10
    long rate; // 0x14
    long roomType; // 0x18
    seProvInfo prov2D; // 0x1C
    seProvInfo provSTRM; // 0xA4
    unsigned __int32 maxPlayable2DChans; // 0x12C
    unsigned __int32 maxPlayable3DhwChans; // 0x130
    unsigned __int32 maxPlayable3DswChans; // 0x134
    unsigned __int32 maxPlayableStreamChans; // 0x138
    unsigned __int32 num2DChans; // 0x13C
    unsigned __int32 num3DhwChans; // 0x140
    unsigned __int32 num3DswChans; // 0x144
    unsigned __int32 numStreamChans; // 0x148
    char HWProvName[128]; // 0x14C
    char SWProvName[128]; // 0x1CC
    char FLTProvName[128]; // 0x24C
};
static_assert(sizeof(seModeInfo) == 716, "Invalid seModeInfo size");

struct seDestModeInfo
{
    long bits; // 0x0
    long channels; // 0x4
    long rate; // 0x8
    long compression; // 0xC
    long flags; // 0x10
    long pipeIndex; // 0x14
    long roomType; // 0x18
};
static_assert(sizeof(seDestModeInfo) == 28, "Invalid seDestModeInfo size");

class seFaderPoint
{
public:
    float fadeTarget; // 0x0
    float timeCount; // 0x4
};
static_assert(sizeof(seFaderPoint) == 8, "Invalid seFaderPoint size");

class seEnvelope
{
public:
    char *filename; // 0x0
    unsigned short type; // 0x4
    unsigned short flag; // 0x6
    short resolution; // 0x8
    short loopstart; // 0xA
    short loopend; // 0xC
    short loopcount; // 0xE
    seFaderPoint *pdata; // 0x10
};
static_assert(sizeof(seEnvelope) == 20, "Invalid seEnvelope size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEDEFINESSHARED_H__
/* combined */
#ifndef __SEDEFINESSHARED_H__
#define __SEDEFINESSHARED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct seDeviceInfo
{
    char name[32]; // 0x0
    char description[256]; // 0x20
    char library[256]; // 0x120
    long max3DhwChans; // 0x220
    long max3DswChans; // 0x224
    long maxStreamChans; // 0x228
    long max2DChans; // 0x22C
    bool supported; // 0x230
    seDevice *device; // 0x234
    void *hLibrary; // 0x238
};
static_assert(sizeof(seDeviceInfo) == 572, "Invalid seDeviceInfo size");

struct seProvInfo
{
    char ProvName[128]; // 0x0
    unsigned __int32 numChans; // 0x80
    unsigned __int32 maxPlayableChans; // 0x84
};
static_assert(sizeof(seProvInfo) == 136, "Invalid seProvInfo size");

struct seModeInfo
{
    bool enabled; // 0x0
    long device; // 0x4
    long driverHandle; // 0x8
    long bits; // 0xC
    long outputChans; // 0x10
    long rate; // 0x14
    long roomType; // 0x18
    seProvInfo prov2D; // 0x1C
    seProvInfo provSTRM; // 0xA4
    unsigned __int32 maxPlayable2DChans; // 0x12C
    unsigned __int32 maxPlayable3DhwChans; // 0x130
    unsigned __int32 maxPlayable3DswChans; // 0x134
    unsigned __int32 maxPlayableStreamChans; // 0x138
    unsigned __int32 num2DChans; // 0x13C
    unsigned __int32 num3DhwChans; // 0x140
    unsigned __int32 num3DswChans; // 0x144
    unsigned __int32 numStreamChans; // 0x148
    char HWProvName[128]; // 0x14C
    char SWProvName[128]; // 0x1CC
    char FLTProvName[128]; // 0x24C
};
static_assert(sizeof(seModeInfo) == 716, "Invalid seModeInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEDEFINESSHARED_H__
/* combined */
#ifndef __SEDEFINESSHARED_H__
#define __SEDEFINESSHARED_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct seDeviceInfo
{
    char name[32]; // 0x0
    char description[256]; // 0x20
    char library[256]; // 0x120
    long max3DhwChans; // 0x220
    long max3DswChans; // 0x224
    long maxStreamChans; // 0x228
    long max2DChans; // 0x22C
    bool supported; // 0x230
    seDevice *device; // 0x234
    void *hLibrary; // 0x238
};
static_assert(sizeof(seDeviceInfo) == 572, "Invalid seDeviceInfo size");

struct seProvInfo
{
    char ProvName[128]; // 0x0
    unsigned __int32 numChans; // 0x80
    unsigned __int32 maxPlayableChans; // 0x84
};
static_assert(sizeof(seProvInfo) == 136, "Invalid seProvInfo size");

struct seModeInfo
{
    bool enabled; // 0x0
    long device; // 0x4
    long driverHandle; // 0x8
    long bits; // 0xC
    long outputChans; // 0x10
    long rate; // 0x14
    long roomType; // 0x18
    seProvInfo prov2D; // 0x1C
    seProvInfo provSTRM; // 0xA4
    unsigned __int32 maxPlayable2DChans; // 0x12C
    unsigned __int32 maxPlayable3DhwChans; // 0x130
    unsigned __int32 maxPlayable3DswChans; // 0x134
    unsigned __int32 maxPlayableStreamChans; // 0x138
    unsigned __int32 num2DChans; // 0x13C
    unsigned __int32 num3DhwChans; // 0x140
    unsigned __int32 num3DswChans; // 0x144
    unsigned __int32 numStreamChans; // 0x148
    char HWProvName[128]; // 0x14C
    char SWProvName[128]; // 0x1CC
    char FLTProvName[128]; // 0x24C
};
static_assert(sizeof(seModeInfo) == 716, "Invalid seModeInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEDEFINESSHARED_H__
#endif
