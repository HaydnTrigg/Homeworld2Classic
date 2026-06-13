#if 0
#ifndef __SEENVELOPES_H__
#define __SEENVELOPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class seEnvelopeElement
{
public:
    long handle; // 0x0
    unsigned short refcount; // 0x4
    seEnvelope envelope; // 0x8
};
static_assert(sizeof(seEnvelopeElement) == 28, "Invalid seEnvelopeElement size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SEENVELOPES_H__
#endif
