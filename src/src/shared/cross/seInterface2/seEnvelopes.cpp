#if 0
/* ---------- headers */

#include "decomp.h"
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <seInterface2\SampleID.h>
#include <seInterface2\SoundParams.h>
#include <seInterface2\SampleBase.h>
#include <vector>
#include <new>
#include <xmemory>
#include <xmemory0>
#include <xstddef>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <xutility>
#include <iosfwd>
#include <algorithm>
#include <math.h>
#include <xfunctional>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\sedefines.h>
#include <seInterface2\seEnvelopes.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::FindEnvelopeElement :
    public std::binary_function<seEnvelopeElement,long,bool>
{
public:
    bool operator()(seEnvelopeElement const &, long const &) const;
};
static_assert(sizeof(`anonymous-namespace'::FindEnvelopeElement) == 1, "Invalid `anonymous-namespace'::FindEnvelopeElement size");

typedef std::vector<seEnvelopeElement,std::allocator<seEnvelopeElement> > EnvelopeElementList;
typedef `anonymous-namespace'::FindEnvelopeElement ?A0x4a886732::FindEnvelopeElement;

/* ---------- prototypes */

extern _inline void SetTickCount(float TimesPerSecond);
extern _inline float ConvertTicks2Time(float TimeInTicks);
extern seEnvelopeElement *GetEnvelopeElementPtr(long handle);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern unsigned long EnvelopeHandleCounter; // 0x83FCCC
    extern float NumberOfTicksCalledPerSecond; // 0x83FCD0
    extern std::vector<seEnvelopeElement,std::allocator<seEnvelopeElement> > EnvelopeList; // 0x84CABC
    extern long NullEnvelopeHandle; // 0x84CAB8
}

/* ---------- public code */

_inline void SetTickCount(float TimesPerSecond) // 0x6C94C8
{
    mangled_assert("?SetTickCount@@YGXM@Z");
    todo("implement");
}

_inline float ConvertTicks2Time(float TimeInTicks) // 0x6C918B
{
    mangled_assert("?ConvertTicks2Time@@YGMM@Z");
    todo("implement");
}

seEnvelope *seInterface::GetEnvelopePtr(long) // 0x6C9347
{
    mangled_assert("?GetEnvelopePtr@seInterface@@QAEPAVseEnvelope@@J@Z");
    todo("implement");
}

seEnvelopeElement *GetEnvelopeElementPtr(long handle) // 0x6C930A
{
    mangled_assert("?GetEnvelopeElementPtr@@YGPAVseEnvelopeElement@@J@Z");
    todo("implement");
}

void seInterface::CreateGlobalEnvelopeList(void *) // 0x6C91A7
{
    mangled_assert("?CreateGlobalEnvelopeList@seInterface@@AAEXPAX@Z");
    todo("implement");
}

void seInterface::DestroyGlobalEnvelopeList() // 0x6C929B
{
    mangled_assert("?DestroyGlobalEnvelopeList@seInterface@@AAEXXZ");
    todo("implement");
}

long seInterface::FindEnvelope(char *) // 0x6C92AD
{
    mangled_assert("?FindEnvelope@seInterface@@QAEJPAD@Z");
    todo("implement");
}

long seInterface::AddEnvelope(seEnvelope *) // 0x6C90DB
{
    mangled_assert("?AddEnvelope@seInterface@@QAEJPAVseEnvelope@@@Z");
    todo("implement");
}

void seInterface::RemoveEnvelope(long) // 0x6C9448
{
    mangled_assert("?RemoveEnvelope@seInterface@@QAEXJ@Z");
    todo("implement");
}

long seInterface::ProcessEnvelope(long, float *, float *, __int32 *, short *, short *) // 0x6C9385
{
    mangled_assert("?ProcessEnvelope@seInterface@@AAEJJPAM0PAHPAF2@Z");
    todo("implement");
}

/* ---------- private code */
#endif
