#if 0
/* ---------- headers */

#include "decomp.h"
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <Objects\MeshBatcherPool.h>
#include <memory\memorypool.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void *MeshBatcherMemAlloc(unsigned __int32 size);
extern void MeshBatcherMemFree(void *pointer);
extern _HMEMPOOL *MeshBatcherMemHandle();

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern MemoryPoolObj s_meshBatcherPool; // 0x10132B68
}

/* ---------- public code */

void *MeshBatcherMemAlloc(unsigned __int32 size) // 0x100807F0
{
    mangled_assert("?MeshBatcherMemAlloc@@YGPAXI@Z");
    todo("implement");
}

void MeshBatcherMemFree(void *pointer) // 0x10080810
{
    mangled_assert("?MeshBatcherMemFree@@YGXPAX@Z");
    todo("implement");
}

_HMEMPOOL *MeshBatcherMemHandle() // 0x10080830
{
    mangled_assert("?MeshBatcherMemHandle@@YGPAU_HMEMPOOL@@XZ");
    todo("implement");
}

/* ---------- private code */
#endif
