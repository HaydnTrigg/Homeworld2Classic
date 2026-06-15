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
#include <xmemory0>
#include <xstddef>
#include <seInterface2\sePatchInfoList.h>
#include <type_traits>
#include <xstring>
#include <seInterface2\sedefinesshared.h>
#include <xutility>
#include <iosfwd>
#include "\HICKORY-PCSHIP\Homeworld2Classic\src\Src\Shared\PC\seInterface2\pch.h"
#include <seInterface2\SEInterface.h>
#include <seInterface2\seinterfacefunc.h>
#include <seInterface2\seinclude.h>
#include <seInterface2\Channel.h>
#include <fileio\platform.h>
#include <fileio\fileioexports.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern short RBMShort(seInterfaceFunc *functions, unsigned long handle);
extern long RBMLong(seInterfaceFunc *functions, unsigned long handle);
extern double ConvertFromIeeeExtended(char *bytes);
extern double ReadIeeeExtended(seInterfaceFunc *functions, unsigned long handle);
extern bool iffIsWav(seInterfaceFunc *functions, unsigned long handle);
extern long iffGetWavHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate);
extern long iffGetMpgHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate);
extern long iffGetAiffHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate, long *nLoopStart, long *nLoopEnd, long *nStartOffset);
extern seInterface::SampleType iffGetPCMType(seInterfaceFunc *functions, unsigned long handle, long *nDataStart, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate, long *nLoopStart, long *nLoopEnd, long *nStartOffset);
extern long iffReadPCMData(seInterfaceFunc *functions, unsigned long handle, long start, short nVer, long nSize, short *pMem);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern short const nMpgVer[2][8]; // 0x7BAC30
    extern short const nMpgBits[2][16]; // 0x7BAC50
    extern long const nMpgRate[2][4]; // 0x7BAC90
    extern short const nMpgChan[4]; // 0x7BACB0
}

/* ---------- public code */

short RBMShort(seInterfaceFunc *functions, unsigned long handle) // 0x6C257F
{
    mangled_assert("?RBMShort@@YGFPAVseInterfaceFunc@@K@Z");
    todo("implement");
}

long RBMLong(seInterfaceFunc *functions, unsigned long handle) // 0x6C2512
{
    mangled_assert("?RBMLong@@YGJPAVseInterfaceFunc@@K@Z");
    todo("implement");
}

double ConvertFromIeeeExtended(char *bytes) // 0x6C23D0
{
    mangled_assert("?ConvertFromIeeeExtended@@YGNPAD@Z");
    todo("implement");
}

double ReadIeeeExtended(seInterfaceFunc *functions, unsigned long handle) // 0x6C25BD
{
    mangled_assert("?ReadIeeeExtended@@YGNPAVseInterfaceFunc@@K@Z");
    todo("implement");
}

bool iffIsWav(seInterfaceFunc *functions, unsigned long handle) // 0x6C302B
{
    mangled_assert("?iffIsWav@@YG_NPAVseInterfaceFunc@@K@Z");
    todo("implement");
}

long iffGetWavHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate) // 0x6C2CFF
{
    mangled_assert("?iffGetWavHead@@YGJPAVseInterfaceFunc@@KPAF1PAJ2122@Z");
    todo("implement");
}

long iffGetMpgHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate) // 0x6C2ACD
{
    mangled_assert("?iffGetMpgHead@@YGJPAVseInterfaceFunc@@KPAF1PAJ2122@Z");
    todo("implement");
}

long iffGetAiffHead(seInterfaceFunc *functions, unsigned long handle, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate, long *nLoopStart, long *nLoopEnd, long *nStartOffset) // 0x6C25E1
{
    mangled_assert("?iffGetAiffHead@@YGJPAVseInterfaceFunc@@KPAF1PAJ2122222@Z");
    todo("implement");
}

seInterface::SampleType iffGetPCMType(seInterfaceFunc *functions, unsigned long handle, long *nDataStart, short *nVer, short *nChan, long *nSize, long *nSamples, short *nBits, long *nSampleRate, long *nCompressionRate, long *nLoopStart, long *nLoopEnd, long *nStartOffset) // 0x6C2BDB
{
    mangled_assert("?iffGetPCMType@@YG?AW4SampleType@seInterface@@PAVseInterfaceFunc@@KPAJPAF211211111@Z");
    todo("implement");
}

long iffReadPCMData(seInterfaceFunc *functions, unsigned long handle, long start, short nVer, long nSize, short *pMem) // 0x6C3090
{
    mangled_assert("?iffReadPCMData@@YGJPAVseInterfaceFunc@@KJFJPAF@Z");
    todo("implement");
}

/* ---------- private code */
#endif
