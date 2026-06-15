#if 0
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void DELETEITEM::operator()<FocusPoint>(FocusPoint *&) const // 0x64ACEB
{
    mangled_assert("??$?RVFocusPoint@@@DELETEITEM@@QBEXAAPAVFocusPoint@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Player>(Player *&) const // 0x64AD0D
{
    mangled_assert("??$?RVPlayer@@@DELETEITEM@@QBEXAAPAVPlayer@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<SubtitleCounter>(SubtitleCounter *&) const // 0x64AD25
{
    mangled_assert("??$?RVSubtitleCounter@@@DELETEITEM@@QBEXAAPAVSubtitleCounter@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Race::Info>(Race::Info *&) const // 0x620956
{
    mangled_assert("??$?RVInfo@Race@@@DELETEITEM@@QBEXAAPAVInfo@Race@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<KeyBinding>(KeyBinding *&) const // 0x5FE7FD
{
    mangled_assert("??$?RVKeyBinding@@@DELETEITEM@@QBEXAAPAVKeyBinding@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<UIBuildJob>(UIBuildJob *&) const // 0x5CD3D5
{
    mangled_assert("??$?RVUIBuildJob@@@DELETEITEM@@QBEXAAPAVUIBuildJob@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<FileDownload>(FileDownload *&) const // 0x5B99B6
{
    mangled_assert("??$?RVFileDownload@@@DELETEITEM@@QBEXAAPAVFileDownload@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<FileUpload>(FileUpload *&) const // 0x5B99D8
{
    mangled_assert("??$?RVFileUpload@@@DELETEITEM@@QBEXAAPAVFileUpload@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<UI::ListBoxItem>(UI::ListBoxItem *&) const // 0x579F22
{
    mangled_assert("??$?RVListBoxItem@UI@@@DELETEITEM@@QBEXAAPAVListBoxItem@UI@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<NISCard>(NISCard *&) const // 0x550FE7
{
    mangled_assert("??$?RVNISCard@@@DELETEITEM@@QBEXAAPAVNISCard@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<NISEvent>(NISEvent *&) const // 0x54582C
{
    mangled_assert("??$?RVNISEvent@@@DELETEITEM@@QBEXAAPAVNISEvent@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<CullFX::CullPred const >(CullFX::CullPred const *&) const // 0x51907D
{
    mangled_assert("??$?R$$CBVCullPred@CullFX@@@DELETEITEM@@QBEXAAPBVCullPred@CullFX@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<RenderModelInstance::ExtUpdate>(RenderModelInstance::ExtUpdate *&) const // 0x51801A
{
    mangled_assert("??$?RVExtUpdate@RenderModelInstance@@@DELETEITEM@@QBEXAAPAVExtUpdate@RenderModelInstance@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<EffectAnimation const >(EffectAnimation const *&) const // 0x517035
{
    mangled_assert("??$?R$$CBVEffectAnimation@@@DELETEITEM@@QBEXAAPBVEffectAnimation@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Marker>(Marker *&) const // 0x517057
{
    mangled_assert("??$?RVMarker@@@DELETEITEM@@QBEXAAPAVMarker@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<HW2CpuPlayer>(HW2CpuPlayer *&) const // 0x4F7ABE
{
    mangled_assert("??$?RVHW2CpuPlayer@@@DELETEITEM@@QBEXAAPAVHW2CpuPlayer@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<ResearchData>(ResearchData *&) const // 0x4EDB71
{
    mangled_assert("??$?RVResearchData@@@DELETEITEM@@QBEXAAPAVResearchData@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Formation>(Formation *&) const // 0x4B7065
{
    mangled_assert("??$?RVFormation@@@DELETEITEM@@QBEXAAPAVFormation@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<WeaponClassSpecificInfo>(WeaponClassSpecificInfo *&) const // 0x4961F3
{
    mangled_assert("??$?RVWeaponClassSpecificInfo@@@DELETEITEM@@QBEXAAPAVWeaponClassSpecificInfo@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<EngineTrailStatic::Tweaks>(EngineTrailStatic::Tweaks *&) const // 0x447D30
{
    mangled_assert("??$?RVTweaks@EngineTrailStatic@@@DELETEITEM@@QBEXAAPAVTweaks@EngineTrailStatic@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<EngineGlowBinding>(EngineGlowBinding *&) const // 0x442670
{
    mangled_assert("??$?RVEngineGlowBinding@@@DELETEITEM@@QBEXAAPAVEngineGlowBinding@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<EngineBurnInfo>(EngineBurnInfo *&) const // 0x43ECD8
{
    mangled_assert("??$?RVEngineBurnInfo@@@DELETEITEM@@QBEXAAPAVEngineBurnInfo@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<EngineBurnPath>(EngineBurnPath *&) const // 0x43ECFA
{
    mangled_assert("??$?RVEngineBurnPath@@@DELETEITEM@@QBEXAAPAVEngineBurnPath@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<UI::Table::Sorting>(UI::Table::Sorting *&) const // 0x683739
{
    mangled_assert("??$?RVSorting@Table@UI@@@DELETEITEM@@QBEXAAPAVSorting@Table@UI@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<UI::TableCell>(UI::TableCell *&) const // 0x683752
{
    mangled_assert("??$?RVTableCell@UI@@@DELETEITEM@@QBEXAAPAVTableCell@UI@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Order>(Order *&) const // 0x69CE31
{
    mangled_assert("??$?RVOrder@@@DELETEITEM@@QBEXAAPAVOrder@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<SoundEntityList::Entry>(SoundEntityList::Entry *&) const // 0x6CED29
{
    mangled_assert("??$?RUEntry@SoundEntityList@@@DELETEITEM@@QBEXAAPAUEntry@SoundEntityList@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Mesh>(Mesh *&) const // 0x6F9272
{
    mangled_assert("??$?RVMesh@@@DELETEITEM@@QBEXAAPAVMesh@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<FXProp>(FXProp *&) const // 0x6E357F
{
    mangled_assert("??$?RVFXProp@@@DELETEITEM@@QBEXAAPAVFXProp@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void DELETEITEM::operator()<StateCommand>(StateCommand *&) const // 0x100B0D30
{
    mangled_assert("??$?RUStateCommand@@@DELETEITEM@@QBEXAAPAUStateCommand@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<StateVariable>(StateVariable *&) const // 0x100B0D50
{
    mangled_assert("??$?RVStateVariable@@@DELETEITEM@@QBEXAAPAVStateVariable@@@Z");
    todo("implement");
}

_inline void DELETEITEM::operator()<Light>(Light *&) const // 0x10069FB0
{
    mangled_assert("??$?RVLight@@@DELETEITEM@@QBEXAAPAVLight@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MEMBLOCKTYPE
{
    MMBT_NEW = 0,
    MMBT_NEW_ARRAY,
    MMBT_MALLOC,
    MMBT_CALLOC,
    MMBT_STRDUP,
    MMBT_STL,
    MMBT_POOLALLOC,
    MMBT_STRING,
};

enum MEMFREETYPE
{
    MMFT_DELETE = 10, // 0x000A
    MMFT_DELETE_ARRAY = 11, // 0x000B
    MMFT_FREE = 12, // 0x000C
    MMBT_STLFREE = 13, // 0x000D
    MMFT_POOLFREE = 14, // 0x000E
    MMFT_STRINGFREE = 15, // 0x000F
};

enum MEMCONVERTADDRESSRESULT
{
    MCAR_OK = 0,
    MCAR_FAILED,
    MCAR_FILTERED,
};

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

struct _HMEMPOOLSHOT
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLSHOT) == 4, "Invalid _HMEMPOOLSHOT size");

struct _HMEMPOOLWALK
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOLWALK) == 4, "Invalid _HMEMPOOLWALK size");

struct MEMBLOCKINFO
{
    void const *address; // 0x0
    unsigned long size; // 0x4
    unsigned long unique; // 0x8
    MEMBLOCKTYPE type; // 0xC
    long callstack[32]; // 0x10
};
static_assert(sizeof(MEMBLOCKINFO) == 144, "Invalid MEMBLOCKINFO size");

class DELETEITEM
{
};
static_assert(sizeof(DELETEITEM) == 1, "Invalid DELETEITEM size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void DELETEITEM::operator()<StatMonitorChannel>(StatMonitorChannel *&) const // 0x10002AC9
{
    mangled_assert("??$?RVStatMonitorChannel@@@DELETEITEM@@QBEXAAPAVStatMonitorChannel@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MEMORYLIB_H__
/* combined */
#ifndef __MEMORYLIB_H__
#define __MEMORYLIB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _HMEMPOOL
{
    __int32 reserved; // 0x0
};
static_assert(sizeof(_HMEMPOOL) == 4, "Invalid _HMEMPOOL size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MEMORYLIB_H__
#endif
