#if 0
/* ---------- headers */

#include "decomp.h"
#include <Render\GL\pch.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern unsigned __int32 mapProgramType(eProgramType type);
extern bool rglProgamString(eProgramType type, char const *programString);
extern void rglGenPrograms(unsigned __int32 const numPrograms, unsigned __int32 *programs);
extern void rglBindProgram(eProgramType type, unsigned __int32 const program);
extern void rglDeletePrograms(unsigned __int32 const numPrograms, unsigned __int32 const *programs);
extern bool rglIsProgram(unsigned __int32 const program);
extern void rglSetProgramEnvironmentVar(eProgramType const type, unsigned __int32 const index, vector4 const &data);
extern void rglSetProgramLocalVar(eProgramType const type, unsigned __int32 const index, vector4 const &data);
extern void rglGetProgramEnvironmentVar(eProgramType const type, unsigned __int32 const index, vector4 &data);
extern void rglGetProgramLocalVar(eProgramType const type, unsigned __int32 const index, vector4 &data);
extern void rglGetProgramInformation(eProgramType const type, eProgramQuerey const index, __int32 *data);
extern bool rglProgramStringIsNative(eProgramType type, char const *string);

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

unsigned __int32 mapProgramType(eProgramType type) // 0x100111C2
{
    mangled_assert("?mapProgramType@@YGIW4eProgramType@@@Z");
    todo("implement");
}

bool rglProgamString(eProgramType type, char const *programString) // 0x10011352
{
    mangled_assert("?rglProgamString@@YG_NW4eProgramType@@PBD@Z");
    todo("implement");
}

void rglGenPrograms(unsigned __int32 const numPrograms, unsigned __int32 *programs) // 0x10011279
{
    mangled_assert("?rglGenPrograms@@YGXIPAI@Z");
    todo("implement");
}

void rglBindProgram(eProgramType type, unsigned __int32 const program) // 0x10011206
{
    mangled_assert("?rglBindProgram@@YGXW4eProgramType@@I@Z");
    todo("implement");
}

void rglDeletePrograms(unsigned __int32 const numPrograms, unsigned __int32 const *programs) // 0x10011259
{
    mangled_assert("?rglDeletePrograms@@YGXIPBI@Z");
    todo("implement");
}

bool rglIsProgram(unsigned __int32 const program) // 0x10011323
{
    mangled_assert("?rglIsProgram@@YG_NI@Z");
    todo("implement");
}

void rglSetProgramEnvironmentVar(eProgramType const type, unsigned __int32 const index, vector4 const &data) // 0x10011435
{
    mangled_assert("?rglSetProgramEnvironmentVar@@YGXW4eProgramType@@IABVvector4@@@Z");
    todo("implement");
}

void rglSetProgramLocalVar(eProgramType const type, unsigned __int32 const index, vector4 const &data) // 0x10011463
{
    mangled_assert("?rglSetProgramLocalVar@@YGXW4eProgramType@@IABVvector4@@@Z");
    todo("implement");
}

void rglGetProgramEnvironmentVar(eProgramType const type, unsigned __int32 const index, vector4 &data) // 0x10011299
{
    mangled_assert("?rglGetProgramEnvironmentVar@@YGXW4eProgramType@@IAAVvector4@@@Z");
    todo("implement");
}

void rglGetProgramLocalVar(eProgramType const type, unsigned __int32 const index, vector4 &data) // 0x100112F5
{
    mangled_assert("?rglGetProgramLocalVar@@YGXW4eProgramType@@IAAVvector4@@@Z");
    todo("implement");
}

void rglGetProgramInformation(eProgramType const type, eProgramQuerey const index, __int32 *data) // 0x100112C7
{
    mangled_assert("?rglGetProgramInformation@@YGXW4eProgramType@@W4eProgramQuerey@@PAH@Z");
    todo("implement");
}

bool rglProgramStringIsNative(eProgramType type, char const *string) // 0x100113D7
{
    mangled_assert("?rglProgramStringIsNative@@YG_NW4eProgramType@@PBD@Z");
    todo("implement");
}

/* ---------- private code */
#endif
