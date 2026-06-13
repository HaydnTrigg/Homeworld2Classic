#if 0
/* ---------- headers */

#include "decomp.h"
#include <Memory\Memorylib.h>
#include <.h>
#include <Memory\mmPeek.h>
#include <Memory\AdvWindows\VMQuery.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::MPeekFile
{
private:
    void *m_hFile; // 0x0
    MPeekFile(`anonymous-namespace'::MPeekFile const &);
public:
    MPeekFile(char const *);
    ~MPeekFile();
    void *get();
    void Write(char const *);
    void Writef(char const *, ...);
private:
    `anonymous-namespace'::MPeekFile &operator=(`anonymous-namespace'::MPeekFile const &);
};
static_assert(sizeof(`anonymous-namespace'::MPeekFile) == 4, "Invalid `anonymous-namespace'::MPeekFile size");

class `anonymous-namespace'::MPeekArray<unsigned long>
{
private:
    unsigned long *m_memory; // 0x0
    unsigned __int32 m_count; // 0x4
    MPeekArray<unsigned long>(`anonymous-namespace'::MPeekArray<unsigned long> const &);
public:
    MPeekArray<unsigned long>();
    ~MPeekArray<unsigned long>();
    bool Resize(unsigned __int32);
    unsigned long const &operator[](unsigned __int32) const;
    unsigned long &operator[](unsigned __int32);
    unsigned __int32 Size() const;
private:
    `anonymous-namespace'::MPeekArray<unsigned long> &operator=(`anonymous-namespace'::MPeekArray<unsigned long> const &);
};
static_assert(sizeof(`anonymous-namespace'::MPeekArray<unsigned long>) == 8, "Invalid `anonymous-namespace'::MPeekArray<unsigned long> size");

typedef __int32 (*EMPTYWORKINGSET)(void *);
typedef unsigned long (*GETMODULEFILENAMEEX)(void *, HINSTANCE__ *, char *, unsigned long);
typedef unsigned long (*GETMAPPEDFILENAME)(void *, void *, char *, unsigned long);
typedef __int32 (*QUERYWORKINGSET)(void *, void *, unsigned long);
typedef `anonymous-namespace'::MPeekFile ?A0x85ca0ab9::MPeekFile;
typedef `anonymous-namespace'::MPeekArray<unsigned long> ?A0x85ca0ab9::MPeekArray<unsigned long>;

/* ---------- prototypes */

extern void MPeekVMMapShrink();
extern __int32 MPeekVMMapDump(char const *folder);
extern __int32 MPeekVMMapHeaps(char const *folder, MPeekPool const *pools, unsigned __int32 count);
extern __int32 MPeekVMMapSmalls(char const *folder, MPeekSmallChunk const *pools, unsigned __int32 count);
extern void MPeekVMMapPool(char const *file, unsigned long heapHandle);

_static bool ShrinkWS(void *hProcess, bool b);
_static void BuildFName(char *full, char const *folder, char const *fname);
_static bool MPeekInitialize();
_static bool DumpWorkingSet(void *hProcess, char const *fname);
_static bool DumpMemRegions(void *hProcess, char const *fnameRegions, char const *fnameBlocks);
_static bool DumpHeaps(void *hProcess, char const *fnameHeaps, char const *fnameEntries, char const *fnameRegions);
_static bool IsCharPrint(char const c);
_static void DumpHeapEntryToFile(void *hFile, void const *address, unsigned __int32 const size);
_static void DumpHeapToFile(void *hFile, void *hHeap);

/* ---------- globals */

extern char const *MPeekRegion::REPORT; // 0x1000B000
extern char const *MPeekBlock::REPORT; // 0x1000B004
extern char const *MPeekWSPage::REPORT; // 0x1000B008
extern char const *MPeekHeap::REPORT; // 0x1000B00C
extern char const *MPeekPool::REPORT; // 0x1000B010
extern char const *MPeekHeapEntry::REPORT; // 0x1000B014
extern char const *MPeekHeapRegion::REPORT; // 0x1000B018
extern char const *MPeekSmallChunk::REPORT; // 0x1000B01C

/* ---------- private variables */

_static
{
    extern bool s_MPeek; // 0x1000B274
    extern unsigned long (*s_GetModuleFileNameEx)(void *, HINSTANCE__ *, char *, unsigned long); // 0x1000B278
    extern unsigned long (*s_GetMappedFileName)(void *, void *, char *, unsigned long); // 0x1000B27C
    extern __int32 (*s_EmptyWorkingSet)(void *); // 0x1000B280
    extern __int32 (*s_QueryWorkingSet)(void *, void *, unsigned long); // 0x1000B284
}

/* ---------- public code */

_extern void _sub_10004300();
void MPeekVMMapShrink() // 0x10004300
{
    mangled_assert("?MPeekVMMapShrink@@YGXXZ");
    todo("implement");
    _sub_10004300();
}

_extern __int32 _sub_10003ED0(char const *);
__int32 MPeekVMMapDump(char const *folder) // 0x10003ED0
{
    mangled_assert("?MPeekVMMapDump@@YGHPBD@Z");
    todo("implement");
    __int32 __result = _sub_10003ED0(folder);
    return __result;
}

_extern __int32 _sub_10004190(char const *, MPeekPool const *, unsigned __int32);
__int32 MPeekVMMapHeaps(char const *folder, MPeekPool const *pools, unsigned __int32 count) // 0x10004190
{
    mangled_assert("?MPeekVMMapHeaps@@YGHPBDPBUMPeekPool@@I@Z");
    todo("implement");
    __int32 __result = _sub_10004190(folder, pools, count);
    return __result;
}

_extern __int32 _sub_10004320(char const *, MPeekSmallChunk const *, unsigned __int32);
__int32 MPeekVMMapSmalls(char const *folder, MPeekSmallChunk const *pools, unsigned __int32 count) // 0x10004320
{
    mangled_assert("?MPeekVMMapSmalls@@YGHPBDPBUMPeekSmallChunk@@I@Z");
    todo("implement");
    __int32 __result = _sub_10004320(folder, pools, count);
    return __result;
}

_extern void _sub_10004290(char const *, unsigned long);
void MPeekVMMapPool(char const *file, unsigned long heapHandle) // 0x10004290
{
    mangled_assert("?MPeekVMMapPool@@YGXPBDK@Z");
    todo("implement");
    _sub_10004290(file, heapHandle);
}

/* ---------- private code */

_extern bool _sub_10004480(void *, bool);
_static bool ShrinkWS(void *hProcess, bool b) // 0x10004480
{
    mangled_assert("ShrinkWS");
    todo("implement");
    bool __result = _sub_10004480(hProcess, b);
    return __result;
}

_extern void _sub_100032C0(char *, char const *, char const *);
_static void BuildFName(char *full, char const *folder, char const *fname) // 0x100032C0
{
    mangled_assert("BuildFName");
    todo("implement");
    _sub_100032C0(full, folder, fname);
}

_extern bool _sub_10003DF0();
_static bool MPeekInitialize() // 0x10003DF0
{
    mangled_assert("MPeekInitialize");
    todo("implement");
    bool __result = _sub_10003DF0();
    return __result;
}

_extern bool _sub_10003C20(void *, char const *);
_static bool DumpWorkingSet(void *hProcess, char const *fname) // 0x10003C20
{
    mangled_assert("DumpWorkingSet");
    todo("implement");
    bool __result = _sub_10003C20(hProcess, fname);
    return __result;
}

_extern bool _sub_10003A10(void *, char const *, char const *);
_static bool DumpMemRegions(void *hProcess, char const *fnameRegions, char const *fnameBlocks) // 0x10003A10
{
    mangled_assert("DumpMemRegions");
    todo("implement");
    bool __result = _sub_10003A10(hProcess, fnameRegions, fnameBlocks);
    return __result;
}

_extern bool _sub_10003600(void *, char const *, char const *, char const *);
_static bool DumpHeaps(void *hProcess, char const *fnameHeaps, char const *fnameEntries, char const *fnameRegions) // 0x10003600
{
    mangled_assert("DumpHeaps");
    todo("implement");
    bool __result = _sub_10003600(hProcess, fnameHeaps, fnameEntries, fnameRegions);
    return __result;
}

_extern bool _sub_10003D60(char const);
_static bool IsCharPrint(char const c) // 0x10003D60
{
    mangled_assert("IsCharPrint");
    todo("implement");
    bool __result = _sub_10003D60(c);
    return __result;
}

_extern void _sub_10003310(void *, void const *, unsigned __int32 const);
_static void DumpHeapEntryToFile(void *hFile, void const *address, unsigned __int32 const size) // 0x10003310
{
    mangled_assert("DumpHeapEntryToFile");
    todo("implement");
    _sub_10003310(hFile, address, size);
}

_extern void _sub_10003450(void *, void *);
_static void DumpHeapToFile(void *hFile, void *hHeap) // 0x10003450
{
    mangled_assert("DumpHeapToFile");
    todo("implement");
    _sub_10003450(hFile, hHeap);
}
#endif
