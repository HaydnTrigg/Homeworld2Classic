#if 0
#ifndef __NISLOAD_H__
#define __NISLOAD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NISLoad
{
public:
    static __int32 handle_CMRA_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_ANIM_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_NURB_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_PATH_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_LEAD_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_FOLW_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_VERS_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_INFO_Chunk(IFF *iff, IFFChunk *chunk, void *nisVoid, void *dataVoid);
    static __int32 handle_nis(IFF *iff, IFFChunk *chunk, void *pNIS, void *pData);
    static bool loadMotion(NIS *pNIS, char const *filename);
    static bool loadScript(NIS *pNIS, char const *filename);
private:
    static bool parseAt(NIS *pNIS, char const *filename, Parser &parser);
    static bool parseWith(NIS *pNIS, char const *filename, Parser &parser);
    static bool parseEvent(NIS *pNIS, char const *filename, Parser &parser);
};
static_assert(sizeof(NISLoad) == 1, "Invalid NISLoad size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NISLOAD_H__
#endif
