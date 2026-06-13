#if 0
#ifndef __SAVEGAMEDATA_H__
#define __SAVEGAMEDATA_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SaveGameData
{
public:
    SaveGameData(SaveGameData const &); /* compiler_generated() */
    SaveGameData(char const *, StreamMode, SaveStreamType, SaveStreamWriteMode);
    ~SaveGameData();
    void updateHeaderInfo(bool);
    void writeToStream(char const *, unsigned __int32);
    unsigned __int32 getStreamCursorPos();
    bool saveChunks(char const *, void *, SaveData const *, unsigned __int32, SaveType);
    bool readChunks(char const *, void *, SaveData const *, unsigned __int32);
    void writeHeaderInfo(SaveGameDataInfo *);
    void createIDMap(SaveType);
    void restoreIDMap();
    void saveObjectDatabase(SaveType);
    void loadObjectDatabase();
    void writeToDisk(char const *);
    void beginSaving(unsigned __int32);
    void endSaving();
    SaveGameDataInfo *getInfo();
    bool isDeterministic();
    _inline bool savePtrToIDConvert(void *, unsigned __int32 *);
    bool saveIDToPtrConvert(unsigned __int32, void **);
    _inline SaveStream *getSaveStream();
    bool seekToToken(char const *);
    void writeChunkName(char const *);
    void writeChunkletKey(char const *);
private:
    SaveGameDataInfo m_saveGameDataInfo; // 0x0
    Address2UdwordMapper m_saveBaseIDMap; // 0xC
    SaveStream *m_saveStream; // 0x1C
    void readHeaderInfo();
    void writeStartOfObjectDataBase(unsigned __int32);
    void writeObjectToken(unsigned __int32, char const *);
    unsigned __int32 seekToObjectDatabase();
    void writeEndObjectToken();
    void writeEndOfObjectDataBase();
public:
    void saveablesPostRestore();
    void AddMissingSaveObjects();
private:
    static std::list<Saveable *,std::allocator<Saveable *> > m_saveables;
    SaveObject *constructObject(char const *);
    unsigned __int32 seekToSaveObject(char *);
    bool isChunkDeterministic(SaveData const *);
    __int32 getChunkletNumber(char const *, SaveData const *, unsigned __int32);
public:
    void writeVectorSaveObjectPtrs(char const *, std::vector<void *,std::allocator<void *> > *);
    void readVectorSaveObjectPtrs(char const *, std::vector<void *,std::allocator<void *> > *);
    void writeListSaveObjPtrs(char const *, std::list<void *,std::allocator<void *> > *);
    void readListSaveObjPtrs(char const *, std::list<void *,std::allocator<void *> > *);
    void writeDequeSaveObjPtrs(char const *, std::deque<void *,std::allocator<void *> > *);
    void readDequeSaveObjPtrs(char const *, std::deque<void *,std::allocator<void *> > *);
    bool readBinPtr(char const *, void *, unsigned __int32);
    bool writeBinPtr(char const *, void *, unsigned __int32);
    bool writeSaveable(char const *, Saveable *, SaveType);
    bool readSaveable(char const *, Saveable *);
    bool writeRandomStream(char const *, void *);
    bool readRandomStream(char const *, void *);
    bool readSaveObjPtr(char const *, void *);
    bool writeSaveObjPtr(char const *, void *);
    bool writeSelection(Selection *, SaveType);
    bool readSelection(Selection *);
    bool writeSelectionPtrs(char const *, Selection *, void *);
    bool readSelectionPtrs(char const *, Selection *);
    bool writeSobStaticInfo(char const *, void *);
    bool readSobStaticInfo(char const *, void *);
    bool writeSTLBitSet(char const *, void *, unsigned __int32);
    bool readSTLBitSet(char const *, void *, unsigned __int32);
    void writeDequeGameMsgPtrs(char const *, std::deque<void *,std::allocator<void *> > *);
    void readDequeGameMsgPtrs(char const *, std::deque<void *,std::allocator<void *> > *);
    bool writeBinDataWithPtrAndSize(unsigned __int32, unsigned char *);
    bool readBinDataWithPtrAndSize(unsigned __int32 &, unsigned char *);
    bool writeVectorOfVector3(char const *, std::vector<vector3,std::allocator<vector3> > *);
    bool readVectorOfVector3(char const *, std::vector<vector3,std::allocator<vector3> > *);
    bool writeListOfVector3(char const *, std::list<vector3,std::allocator<vector3> > *);
    bool readListOfVector3(char const *, std::list<vector3,std::allocator<vector3> > *);
    bool writeVectorOfReal32(char const *, std::vector<float,std::allocator<float> > *);
    bool readVectorOfReal32(char const *, std::vector<float,std::allocator<float> > *);
    bool writeVectorOfMatrix3(char const *, std::vector<matrix3,std::allocator<matrix3> > *);
    bool readVectorOfMatrix3(char const *, std::vector<matrix3,std::allocator<matrix3> > *);
    bool writeVectorOfFlightPathPoint(char const *, std::vector<FlightPathPoint,std::allocator<FlightPathPoint> > *);
    bool readVectorOfFlightPathPoint(char const *, std::vector<FlightPathPoint,std::allocator<FlightPathPoint> > *);
    bool writeListOfSTLStrings(char const *, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
    bool readListOfSTLStrings(char const *, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *);
    SaveGameData &operator=(SaveGameData const &); /* compiler_generated() */
};
static_assert(sizeof(SaveGameData) == 32, "Invalid SaveGameData size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4C7D21(SaveGameData *const, void *, unsigned __int32 *);
_inline bool SaveGameData::savePtrToIDConvert(void *, unsigned __int32 *) // 0x4C7D21
{
    mangled_assert("?savePtrToIDConvert@SaveGameData@@QAE_NPAXPAI@Z");
    todo("implement");
    bool __result = _sub_4C7D21(this, arg, arg);
    return __result;
}

_extern SaveStream *_sub_46A4A5(SaveGameData *const);
_inline SaveStream *SaveGameData::getSaveStream() // 0x46A4A5
{
    mangled_assert("?getSaveStream@SaveGameData@@QAEPAVSaveStream@@XZ");
    todo("implement");
    SaveStream * __result = _sub_46A4A5(this);
    return __result;
}

/* ---------- private code */

#endif // __SAVEGAMEDATA_H__
#endif
