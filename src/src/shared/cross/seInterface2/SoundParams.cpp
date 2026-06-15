#if 0
/* ---------- headers */

#include "decomp.h"
#include <assist\typemagic.h>
#include <debug\ctassert.h>
#include "src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SoundParams.h>

/* ---------- constants */

/* ---------- definitions */

struct Range
{
    float min; // 0x0
    float max; // 0x4
};
static_assert(sizeof(Range) == 8, "Invalid Range size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern Range s_rangeTable[19]; // 0x83FC18
    extern float s_specialValTable[7]; // 0x83FCB0
}

/* ---------- public code */

SoundParams::EnvelopePoint::EnvelopePoint() // 0x6C849F
{
    mangled_assert("??0EnvelopePoint@SoundParams@@QAE@XZ");
    todo("implement");
}

bool SoundParams::EnvelopePoint::operator==(SoundParams::EnvelopePoint const &) const // 0x6C87B5
{
    mangled_assert("??8EnvelopePoint@SoundParams@@QBE_NABV01@@Z");
    todo("implement");
}

SoundParams::EnvelopePoint &SoundParams::EnvelopePoint::operator=(SoundParams::EnvelopePoint const &) // 0x6C8659
{
    mangled_assert("??4EnvelopePoint@SoundParams@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

SoundParams::EffectContainer::EffectContainer() // 0x6C842F
{
    mangled_assert("??0EffectContainer@SoundParams@@QAE@XZ");
    todo("implement");
}

bool SoundParams::EffectContainer::operator==(SoundParams::EffectContainer const &) const // 0x6C8693
{
    mangled_assert("??8EffectContainer@SoundParams@@QBE_NABV01@@Z");
    todo("implement");
}

SoundParams::EffectContainer &SoundParams::EffectContainer::operator=(SoundParams::EffectContainer const &) // 0x6C85C1
{
    mangled_assert("??4EffectContainer@SoundParams@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

bool SoundParams::EffectContainer::EffectsAreValid() const // 0x6C89D6
{
    mangled_assert("?EffectsAreValid@EffectContainer@SoundParams@@QBE_NXZ");
    todo("implement");
}

SoundParams::SoundParams() // 0x6C84C5
{
    mangled_assert("??0SoundParams@@QAE@XZ");
    todo("implement");
}

bool SoundParams::operator==(SoundParams const &) const // 0x6C881D
{
    mangled_assert("??8SoundParams@@QBE_NABV0@@Z");
    todo("implement");
}

void SoundParams::getRange(SoundParams::RangeType type, float &min, float &max) // 0x6C8D79
{
    mangled_assert("?getRange@SoundParams@@SGXW4RangeType@1@AAM1@Z");
    todo("implement");
}

void SoundParams::getRange(SoundParams::RangeType type, long &min, long &max) // 0x6C8D4C
{
    mangled_assert("?getRange@SoundParams@@SGXW4RangeType@1@AAJ1@Z");
    todo("implement");
}

void SoundParams::getSpecialVal(SoundParams::SpecialValues type, float &val) // 0x6C8DC9
{
    mangled_assert("?getSpecialVal@SoundParams@@SGXW4SpecialValues@1@AAM@Z");
    todo("implement");
}

void SoundParams::getSpecialVal(SoundParams::SpecialValues type, long &val) // 0x6C8DAB
{
    mangled_assert("?getSpecialVal@SoundParams@@SGXW4SpecialValues@1@AAJ@Z");
    todo("implement");
}

void SoundParams::copy(SoundParams::EnvelopePoint const *from, SoundParams::EnvelopePoint *to) // 0x6C8D25
{
    mangled_assert("?copy@SoundParams@@SGXPBVEnvelopePoint@1@PAV21@@Z");
    todo("implement");
}

void SoundParams::copy(SoundParams const &from, SoundParams &to, SoundParams::ParamType type) // 0x6C8AB9
{
    mangled_assert("?copy@SoundParams@@SGXABV1@AAV1@W4ParamType@1@@Z");
    todo("implement");
}

/* ---------- private code */
#endif
