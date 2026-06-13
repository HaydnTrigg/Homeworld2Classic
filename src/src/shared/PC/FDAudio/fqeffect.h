#if 0
#ifndef __FQEFFECT_H__
#define __FQEFFECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct EFFECT
{
    unsigned long nClockCount; // 0x0
    unsigned long nFiltMinFreq; // 0x4
    unsigned long nFiltMaxFreq; // 0x8
    unsigned long nToneMinFreq; // 0xC
    unsigned long nToneMaxFreq; // 0x10
    unsigned long nToneDur; // 0x14
    unsigned long nToneMute; // 0x18
    unsigned long nToneCount; // 0x1C
    unsigned long nBreakMaxRate; // 0x20
    unsigned long nBreakMaxDur; // 0x24
    unsigned long nQNoiseMaxRate; // 0x28
    unsigned long nQNoiseMaxDur; // 0x2C
    float fScaleLev; // 0x30
    float fNoiseLev; // 0x34
    float fToneLev; // 0x38
    float fLimitLev; // 0x3C
    float fPitchShift; // 0x40
    float *pEQLev; // 0x44
};
static_assert(sizeof(EFFECT) == 72, "Invalid EFFECT size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FQEFFECT_H__
#endif
