#if 0
#ifndef __SAVEGAMEIMPL_H__
#define __SAVEGAMEIMPL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ChunkType
{
    CHUNKTYPE_Bin = 0,
    CHUNKTYPE_BinPtr,
    CHUNKTYPE_String,
    CHUNKTYPE_StlString,
    CHUNKTYPE_StlWString,
    CHUNKTYPE_Selection,
    CHUNKTYPE_PtrToSelection,
    CHUNKTYPE_VectorSaveObjPtrs,
    CHUNKTYPE_ListSaveObjPtrs,
    CHUNKTYPE_SetSaveObjPtrs,
    CHUNKTYPE_DequeSaveObjPtrs,
    CHUNKTYPE_SaveObjPtr,
    CHUNKTYPE_Saveable,
    CHUNKTYPE_SobElemPtrArray,
    CHUNKTYPE_DequeGameMsgPtrs,
    CHUNKTYPE_Nothing,
    CHUNKTYPE_RandomStream,
    CHUNKTYPE_VectorOfVector3,
    CHUNKTYPE_VectorOfFlightPathPoint,
    CHUNKTYPE_VectorOfMatrix3,
    CHUNKTYPE_ListOfSTLStrings,
    CHUNKTYPE_VectorOfReal32,
    CHUNKTYPE_ListOfVector3,
    CHUNKTYPE_SobID,
    CHUNKTYPE_Custom,
};

enum SaveType
{
    SAVETYPE_Full = 0,
    SAVETYPE_DeterministicOnly,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SAVEGAMEIMPL_H__
#endif
