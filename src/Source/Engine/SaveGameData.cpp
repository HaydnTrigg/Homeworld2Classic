#if 0
/* ---------- headers */

#include "decomp.h"
#include <sobelem.h>
#include <assist\stlexsmallvector.h>
#include <xstring>
#include <sob.h>
#include <xmemory0>
#include <sobid.h>
#include <pch.h>
#include <Collision\Primitives\obb.h>
#include <Mathlib\matrix3.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <SelTarg.h>
#include <prim.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <gamemsg.h>
#include <vector>
#include <fileio\bytestream.h>
#include <xmemory>
#include <Collision\Primitives\capsule.h>
#include <Collision\Primitives\segment.h>
#include <Collision\BVH\profiling.h>
#include <list>
#include <Mathlib\vector3.h>
#include <fixedpoint.h>
#include <util\fixed.h>
#include <seInterface2\PatchID.h>
#include <seInterface2\PatchBase.h>
#include <xtree>
#include <seInterface2\SoundParams.h>
#include <random.h>
#include <boost\scoped_ptr.hpp>
#include <dbdefines.h>
#include <UnitCaps\UnitCaps.h>
#include <MultiplierContainer.h>
#include <visibility.h>
#include <SOBGroupManager.h>
#include <Mathlib\vector2.h>
#include <MultiplierTypes.h>
#include <hash_map>
#include <Collision\BVH\bvh.h>
#include <xhash>
#include <util\types.h>
#include <boost\cstdint.hpp>
#include <Mathlib\quat.h>
#include <SaveGameObjectRegistry.h>
#include <savegameimpl.h>
#include <savegamedatainfo.h>
#include <pathpoints.h>
#include <debug\db.h>
#include <HyperspaceManager.h>
#include <SquadronList.h>
#include <deque>
#include <Physics\PhysicsEngine.h>
#include <Physics\PhysicsObject.h>
#include <boost\shared_ptr.hpp>
#include <util\colour.h>
#include <sobstatic.h>
#include <sobtypes.h>
#include <boost\throw_exception.hpp>
#include <selection.h>
#include <Collision\Primitives\sphere.h>
#include <savegamedef.h>
#include <boost\detail\shared_count.hpp>
#include <bitset>
#include <boost\detail\lwm_win32.hpp>
#include <Universe.h>
#include <Collision\BVH\octree.h>
#include <Waypoint.h>
#include <platform\timer.h>
#include <Collision\BVH\span.h>
#include <SobUnmoveable.h>
#include <platform\platformexports.h>
#include <Collision\BVH\Internal\span_i.h>
#include <Collision\BVH\proxy.h>
#include <Collision\intersect.h>
#include <Collision\primitivesfwd.h>
#include <savestream.h>
#include <wchar.h>
#include <Interpolation.h>
#include <Collision\Primitives\aabb.h>

/* ---------- constants */

/* ---------- definitions */

struct SaveGameData::writeRandomStream::__l2::<unnamed-type-parameters>
{
    unsigned __int32 x; // 0x0
    unsigned __int32 y; // 0x4
    unsigned __int32 z; // 0x8
    unsigned __int32 c; // 0xC
    unsigned __int32 n; // 0x10
};
static_assert(sizeof(SaveGameData::writeRandomStream::__l2::<unnamed-type-parameters>) == 20, "Invalid SaveGameData::writeRandomStream::__l2::<unnamed-type-parameters> size");

struct SaveGameData::readRandomStream::__l2::<unnamed-type-parameters>
{
    unsigned __int32 x; // 0x0
    unsigned __int32 y; // 0x4
    unsigned __int32 z; // 0x8
    unsigned __int32 c; // 0xC
    unsigned __int32 n; // 0x10
};
static_assert(sizeof(SaveGameData::readRandomStream::__l2::<unnamed-type-parameters>) == 20, "Invalid SaveGameData::readRandomStream::__l2::<unnamed-type-parameters> size");

/* ---------- prototypes */

/* ---------- globals */

extern std::list<Saveable *,std::allocator<Saveable *> > SaveGameData::m_saveables; // 0x84AEC0

/* ---------- private variables */

_static
{
    extern char const HEADER_Token[15]; // 0x7AEF18
    extern char const OBJECT_DatabaseToken[10]; // 0x7AEF28
    extern char const OBJECT_DatabaseEndToken[11]; // 0x7AEF34
    extern char const SAVEOBJECT_Token[10]; // 0x7AEF40
    extern char const SAVEOBJECT_EndToken[11]; // 0x7AEF4C
}

/* ---------- public code */

SaveGameData::SaveGameData(char const *, StreamMode, SaveStreamType, SaveStreamWriteMode) // 0x628048
{
    mangled_assert("??0SaveGameData@@QAE@PBDW4StreamMode@@W4SaveStreamType@@W4SaveStreamWriteMode@@@Z");
    todo("implement");
}

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >::~_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >() // 0x6280EA
{
    mangled_assert("??1?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAX@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >::~_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >() // 0x6280EB
{
    mangled_assert("??1?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAX@std@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

_inline std::_List_buy<Saveable *,std::allocator<Saveable *> >::~_List_buy<Saveable *,std::allocator<Saveable *> >() // 0x6280F5
{
    mangled_assert("??1?$_List_buy@PAVSaveable@@V?$allocator@PAVSaveable@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

SaveGameData::~SaveGameData() // 0x628110
{
    mangled_assert("??1SaveGameData@@QAE@XZ");
    todo("implement");
}

bool SaveGameData::isChunkDeterministic(SaveData const *) // 0x628D12
{
    mangled_assert("?isChunkDeterministic@SaveGameData@@AAE_NPBUSaveData@@@Z");
    todo("implement");
}

SaveGameDataInfo *SaveGameData::getInfo() // 0x628D03
{
    mangled_assert("?getInfo@SaveGameData@@QAEPAVSaveGameDataInfo@@XZ");
    todo("implement");
}

bool SaveGameData::isDeterministic() // 0x628D1F
{
    mangled_assert("?isDeterministic@SaveGameData@@QAE_NXZ");
    todo("implement");
}

bool SaveGameData::saveIDToPtrConvert(unsigned __int32, void **) // 0x62A08C
{
    mangled_assert("?saveIDToPtrConvert@SaveGameData@@QAE_NIPAPAX@Z");
    todo("implement");
}

void SaveGameData::writeHeaderInfo(SaveGameDataInfo *) // 0x62A4A9
{
    mangled_assert("?writeHeaderInfo@SaveGameData@@QAEXPAVSaveGameDataInfo@@@Z");
    todo("implement");
}

void SaveGameData::beginSaving(unsigned __int32) // 0x62897A
{
    mangled_assert("?beginSaving@SaveGameData@@QAEXI@Z");
    todo("implement");
}

void SaveGameData::endSaving() // 0x628C91
{
    mangled_assert("?endSaving@SaveGameData@@QAEXXZ");
    todo("implement");
}

void SaveGameData::createIDMap(SaveType) // 0x628AD2
{
    mangled_assert("?createIDMap@SaveGameData@@QAEXW4SaveType@@@Z");
    todo("implement");
}

void SaveGameData::restoreIDMap() // 0x629C14
{
    mangled_assert("?restoreIDMap@SaveGameData@@QAEXXZ");
    todo("implement");
}

void SaveGameData::saveObjectDatabase(SaveType) // 0x62A0BF
{
    mangled_assert("?saveObjectDatabase@SaveGameData@@QAEXW4SaveType@@@Z");
    todo("implement");
}

SaveObject *SaveGameData::constructObject(char const *) // 0x628A6A
{
    mangled_assert("?constructObject@SaveGameData@@AAEPAVSaveObject@@PBD@Z");
    todo("implement");
}

void SaveGameData::loadObjectDatabase() // 0x628D30
{
    mangled_assert("?loadObjectDatabase@SaveGameData@@QAEXXZ");
    todo("implement");
}

void SaveGameData::saveablesPostRestore() // 0x62A143
{
    mangled_assert("?saveablesPostRestore@SaveGameData@@QAEXXZ");
    todo("implement");
}

unsigned __int32 SaveGameData::seekToSaveObject(char *) // 0x62A1B2
{
    mangled_assert("?seekToSaveObject@SaveGameData@@AAEIPAD@Z");
    todo("implement");
}

unsigned __int32 SaveGameData::seekToObjectDatabase() // 0x62A169
{
    mangled_assert("?seekToObjectDatabase@SaveGameData@@AAEIXZ");
    todo("implement");
}

bool SaveGameData::seekToToken(char const *) // 0x62A1E4
{
    mangled_assert("?seekToToken@SaveGameData@@QAE_NPBD@Z");
    todo("implement");
}

void SaveGameData::updateHeaderInfo(bool) // 0x62A316
{
    mangled_assert("?updateHeaderInfo@SaveGameData@@QAEX_N@Z");
    todo("implement");
}

void SaveGameData::readHeaderInfo() // 0x629615
{
    mangled_assert("?readHeaderInfo@SaveGameData@@AAEXXZ");
    todo("implement");
}

void SaveGameData::writeToStream(char const *, unsigned __int32) // 0x62A831
{
    mangled_assert("?writeToStream@SaveGameData@@QAEXPBDI@Z");
    todo("implement");
}

unsigned __int32 SaveGameData::getStreamCursorPos() // 0x628D0A
{
    mangled_assert("?getStreamCursorPos@SaveGameData@@QAEIXZ");
    todo("implement");
}

void SaveGameData::writeStartOfObjectDataBase(unsigned __int32) // 0x62A7F9
{
    mangled_assert("?writeStartOfObjectDataBase@SaveGameData@@AAEXI@Z");
    todo("implement");
}

void SaveGameData::writeObjectToken(unsigned __int32, char const *) // 0x62A61A
{
    mangled_assert("?writeObjectToken@SaveGameData@@AAEXIPBD@Z");
    todo("implement");
}

void SaveGameData::writeEndObjectToken() // 0x62A477
{
    mangled_assert("?writeEndObjectToken@SaveGameData@@AAEXXZ");
    todo("implement");
}

void SaveGameData::writeEndOfObjectDataBase() // 0x62A490
{
    mangled_assert("?writeEndOfObjectDataBase@SaveGameData@@AAEXXZ");
    todo("implement");
}

bool SaveGameData::saveChunks(char const *, void *, SaveData const *, unsigned __int32, SaveType) // 0x629C6C
{
    mangled_assert("?saveChunks@SaveGameData@@QAE_NPBDPAXPBUSaveData@@IW4SaveType@@@Z");
    todo("implement");
}

void SaveGameData::writeChunkName(char const *) // 0x62A39E
{
    mangled_assert("?writeChunkName@SaveGameData@@QAEXPBD@Z");
    todo("implement");
}

bool SaveGameData::readSaveObjPtr(char const *, void *) // 0x629861
{
    mangled_assert("?readSaveObjPtr@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

bool SaveGameData::writeSaveObjPtr(char const *, void *) // 0x62A6E7
{
    mangled_assert("?writeSaveObjPtr@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

bool SaveGameData::writeSobStaticInfo(char const *, void *) // 0x62A7C3
{
    mangled_assert("?writeSobStaticInfo@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

bool SaveGameData::readSobStaticInfo(char const *, void *) // 0x629947
{
    mangled_assert("?readSobStaticInfo@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

void SaveGameData::writeVectorSaveObjectPtrs(char const *, std::vector<void *,std::allocator<void *> > *) // 0x62AA1D
{
    mangled_assert("?writeVectorSaveObjectPtrs@SaveGameData@@QAEXPBDPAV?$vector@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::readVectorSaveObjectPtrs(char const *, std::vector<void *,std::allocator<void *> > *) // 0x629B6D
{
    mangled_assert("?readVectorSaveObjectPtrs@SaveGameData@@QAEXPBDPAV?$vector@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::writeListSaveObjPtrs(char const *, std::list<void *,std::allocator<void *> > *) // 0x62A597
{
    mangled_assert("?writeListSaveObjPtrs@SaveGameData@@QAEXPBDPAV?$list@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::readListSaveObjPtrs(char const *, std::list<void *,std::allocator<void *> > *) // 0x62974D
{
    mangled_assert("?readListSaveObjPtrs@SaveGameData@@QAEXPBDPAV?$list@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeVectorOfVector3(char const *, std::vector<vector3,std::allocator<vector3> > *) // 0x62A99B
{
    mangled_assert("?writeVectorOfVector3@SaveGameData@@QAE_NPBDPAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readVectorOfVector3(char const *, std::vector<vector3,std::allocator<vector3> > *) // 0x629AF4
{
    mangled_assert("?readVectorOfVector3@SaveGameData@@QAE_NPBDPAV?$vector@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeListOfVector3(char const *, std::list<vector3,std::allocator<vector3> > *) // 0x62A521
{
    mangled_assert("?writeListOfVector3@SaveGameData@@QAE_NPBDPAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readListOfVector3(char const *, std::list<vector3,std::allocator<vector3> > *) // 0x6296CE
{
    mangled_assert("?readListOfVector3@SaveGameData@@QAE_NPBDPAV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeVectorOfReal32(char const *, std::vector<float,std::allocator<float> > *) // 0x62A949
{
    mangled_assert("?writeVectorOfReal32@SaveGameData@@QAE_NPBDPAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readVectorOfReal32(char const *, std::vector<float,std::allocator<float> > *) // 0x629AA7
{
    mangled_assert("?readVectorOfReal32@SaveGameData@@QAE_NPBDPAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeVectorOfMatrix3(char const *, std::vector<matrix3,std::allocator<matrix3> > *) // 0x62A8D0
{
    mangled_assert("?writeVectorOfMatrix3@SaveGameData@@QAE_NPBDPAV?$vector@Vmatrix3@@V?$allocator@Vmatrix3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readVectorOfMatrix3(char const *, std::vector<matrix3,std::allocator<matrix3> > *) // 0x629A4F
{
    mangled_assert("?readVectorOfMatrix3@SaveGameData@@QAE_NPBDPAV?$vector@Vmatrix3@@V?$allocator@Vmatrix3@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeVectorOfFlightPathPoint(char const *, std::vector<FlightPathPoint,std::allocator<FlightPathPoint> > *) // 0x62A846
{
    mangled_assert("?writeVectorOfFlightPathPoint@SaveGameData@@QAE_NPBDPAV?$vector@UFlightPathPoint@@V?$allocator@UFlightPathPoint@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readVectorOfFlightPathPoint(char const *, std::vector<FlightPathPoint,std::allocator<FlightPathPoint> > *) // 0x6299C4
{
    mangled_assert("?readVectorOfFlightPathPoint@SaveGameData@@QAE_NPBDPAV?$vector@UFlightPathPoint@@V?$allocator@UFlightPathPoint@@@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeListOfSTLStrings(char const *, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *) // 0x62A4DB
{
    mangled_assert("?writeListOfSTLStrings@SaveGameData@@QAE_NPBDPAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

bool SaveGameData::readListOfSTLStrings(char const *, std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > *) // 0x629655
{
    mangled_assert("?readListOfSTLStrings@SaveGameData@@QAE_NPBDPAV?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z");
    todo("implement");
}

void SaveGameData::writeDequeSaveObjPtrs(char const *, std::deque<void *,std::allocator<void *> > *) // 0x62A3F7
{
    mangled_assert("?writeDequeSaveObjPtrs@SaveGameData@@QAEXPBDPAV?$deque@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::readDequeSaveObjPtrs(char const *, std::deque<void *,std::allocator<void *> > *) // 0x629581
{
    mangled_assert("?readDequeSaveObjPtrs@SaveGameData@@QAEXPBDPAV?$deque@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::writeDequeGameMsgPtrs(char const *, std::deque<void *,std::allocator<void *> > *) // 0x62A3F4
{
    mangled_assert("?writeDequeGameMsgPtrs@SaveGameData@@QAEXPBDPAV?$deque@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

void SaveGameData::readDequeGameMsgPtrs(char const *, std::deque<void *,std::allocator<void *> > *) // 0x62957E
{
    mangled_assert("?readDequeGameMsgPtrs@SaveGameData@@QAEXPBDPAV?$deque@PAXV?$allocator@PAX@std@@@std@@@Z");
    todo("implement");
}

bool SaveGameData::writeBinDataWithPtrAndSize(unsigned __int32, unsigned char *) // 0x62A34E
{
    mangled_assert("?writeBinDataWithPtrAndSize@SaveGameData@@QAE_NIPAE@Z");
    todo("implement");
}

bool SaveGameData::readBinDataWithPtrAndSize(unsigned __int32 &, unsigned char *) // 0x629062
{
    mangled_assert("?readBinDataWithPtrAndSize@SaveGameData@@QAE_NAAIPAE@Z");
    todo("implement");
}

bool SaveGameData::writeSaveable(char const *, Saveable *, SaveType) // 0x62A74D
{
    mangled_assert("?writeSaveable@SaveGameData@@QAE_NPBDPAVSaveable@@W4SaveType@@@Z");
    todo("implement");
}

bool SaveGameData::readSaveable(char const *, Saveable *) // 0x6298CF
{
    mangled_assert("?readSaveable@SaveGameData@@QAE_NPBDPAVSaveable@@@Z");
    todo("implement");
}

void SaveGameData::writeChunkletKey(char const *) // 0x62A3C9
{
    mangled_assert("?writeChunkletKey@SaveGameData@@QAEXPBD@Z");
    todo("implement");
}

bool SaveGameData::writeRandomStream(char const *, void *) // 0x62A65E
{
    mangled_assert("?writeRandomStream@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

bool SaveGameData::readRandomStream(char const *, void *) // 0x6297E6
{
    mangled_assert("?readRandomStream@SaveGameData@@QAE_NPBDPAX@Z");
    todo("implement");
}

_inline std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > > const &) // 0x627EE7
{
    mangled_assert("??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAX@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > >(std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<void *> > > const &) // 0x627F29
{
    mangled_assert("??0?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PAX@std@@@std@@@std@@QAE@ABV01@@Z");
    compiler_generated();
    todo("implement");
}

_inline FlightPathPoint::FlightPathPoint() // 0x628045
{
    mangled_assert("??0FlightPathPoint@@QAE@XZ");
    compiler_generated();
    todo("implement");
}

bool SaveGameData::writeSTLBitSet(char const *, void *, unsigned __int32) // 0x62A698
{
    mangled_assert("?writeSTLBitSet@SaveGameData@@QAE_NPBDPAXI@Z");
    todo("implement");
}

bool SaveGameData::readSTLBitSet(char const *, void *, unsigned __int32) // 0x629817
{
    mangled_assert("?readSTLBitSet@SaveGameData@@QAE_NPBDPAXI@Z");
    todo("implement");
}

bool SaveGameData::writeSelection(Selection *, SaveType) // 0x62A760
{
    mangled_assert("?writeSelection@SaveGameData@@QAE_NPAVSelection@@W4SaveType@@@Z");
    todo("implement");
}

bool SaveGameData::writeSelectionPtrs(char const *, Selection *, void *) // 0x62A773
{
    mangled_assert("?writeSelectionPtrs@SaveGameData@@QAE_NPBDPAVSelection@@PAX@Z");
    todo("implement");
}

bool SaveGameData::readSelection(Selection *) // 0x6298F7
{
    mangled_assert("?readSelection@SaveGameData@@QAE_NPAVSelection@@@Z");
    todo("implement");
}

bool SaveGameData::readSelectionPtrs(char const *, Selection *) // 0x629904
{
    mangled_assert("?readSelectionPtrs@SaveGameData@@QAE_NPBDPAVSelection@@@Z");
    todo("implement");
}

bool SaveGameData::readBinPtr(char const *, void *, unsigned __int32) // 0x62909F
{
    mangled_assert("?readBinPtr@SaveGameData@@QAE_NPBDPAXI@Z");
    todo("implement");
}

bool SaveGameData::writeBinPtr(char const *, void *, unsigned __int32) // 0x62A387
{
    mangled_assert("?writeBinPtr@SaveGameData@@QAE_NPBDPAXI@Z");
    todo("implement");
}

__int32 SaveGameData::getChunkletNumber(char const *, SaveData const *, unsigned __int32) // 0x628CCE
{
    mangled_assert("?getChunkletNumber@SaveGameData@@AAEHPBDPBUSaveData@@I@Z");
    todo("implement");
}

bool SaveGameData::readChunks(char const *, void *, SaveData const *, unsigned __int32) // 0x629106
{
    mangled_assert("?readChunks@SaveGameData@@QAE_NPBDPAXPBUSaveData@@I@Z");
    todo("implement");
}

void SaveGameData::writeToDisk(char const *) // 0x62A829
{
    mangled_assert("?writeToDisk@SaveGameData@@QAEXPBD@Z");
    todo("implement");
}

void SaveGameData::AddMissingSaveObjects() // 0x628302
{
    mangled_assert("?AddMissingSaveObjects@SaveGameData@@QAEXXZ");
    todo("implement");
}

/* ---------- private code */
#endif
