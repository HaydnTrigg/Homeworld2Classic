#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <fileio\ramstream.h>
#include <xmemory0>
#include <pch.h>
#include <zlib\src\zlib.h>
#include <zlib\src\zconf.h>
#include <fileio\filepath.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <iosfwd>
#include <fileio\bytestream.h>
#include <xmemory>
#include <fileio\fileioexports.h>
#include <debug\ctassert.h>
#include <fileio\crc.h>
#include <fileio\filestream.h>
#include <zlib\compression.h>
#include <zlib\zlibexports.h>
#include <savestream.h>
#include <wchar.h>

/* ---------- constants */

/* ---------- definitions */

typedef void *voidp;
typedef void *gzFile;

/* ---------- prototypes */

extern unsigned char getNibbleHex(char nibble);
extern unsigned char byteValue(char highNibble, char lowNibble);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const g_textIgnoreChars[5]; // 0x7AF140
    extern char const g_tokenDelimiter; // 0x7AF145
}

/* ---------- public code */

_extern _sub_62C063(SaveStream *const, char const *, StreamMode, SaveStreamType, SaveStreamWriteMode);
SaveStream::SaveStream(char const *, StreamMode, SaveStreamType, SaveStreamWriteMode) // 0x62C063
{
    mangled_assert("??0SaveStream@@QAE@PBDW4StreamMode@@W4SaveStreamType@@W4SaveStreamWriteMode@@@Z");
    todo("implement");
    _sub_62C063(this, arg, arg, arg, arg);
}

_extern void _sub_62C310(SaveStream *const);
SaveStream::~SaveStream() // 0x62C310
{
    mangled_assert("??1SaveStream@@QAE@XZ");
    todo("implement");
    _sub_62C310(this);
}

_extern void _sub_62CB14(SaveStream *const, unsigned __int32);
void SaveStream::setCursorPos(unsigned __int32) // 0x62CB14
{
    mangled_assert("?setCursorPos@SaveStream@@QAEXI@Z");
    todo("implement");
    _sub_62CB14(this, arg);
}

_extern unsigned __int32 _sub_62C900(SaveStream *const);
unsigned __int32 SaveStream::getCursorPos() // 0x62C900
{
    mangled_assert("?getCursorPos@SaveStream@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_62C900(this);
    return __result;
}

_extern unsigned __int32 _sub_62C908(SaveStream *const);
unsigned __int32 SaveStream::getLength() // 0x62C908
{
    mangled_assert("?getLength@SaveStream@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_62C908(this);
    return __result;
}

_extern unsigned __int32 _sub_62C8B4(SaveStream *const);
unsigned __int32 SaveStream::getCRC() // 0x62C8B4
{
    mangled_assert("?getCRC@SaveStream@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_62C8B4(this);
    return __result;
}

_extern bool _sub_62CB1C(SaveStream *const, void const *, unsigned __int32, bool);
bool SaveStream::write(void const *, unsigned __int32, bool) // 0x62CB1C
{
    mangled_assert("?write@SaveStream@@QAE_NPBXI_N@Z");
    todo("implement");
    bool __result = _sub_62CB1C(this, arg, arg, arg);
    return __result;
}

_extern bool _sub_62CA5E(SaveStream *const, void *, unsigned __int32);
bool SaveStream::read(void *, unsigned __int32) // 0x62CA5E
{
    mangled_assert("?read@SaveStream@@AAE_NPAXI@Z");
    todo("implement");
    bool __result = _sub_62CA5E(this, arg, arg);
    return __result;
}

_extern bool _sub_62C897(SaveStream *const);
bool SaveStream::endOfStream() // 0x62C897
{
    mangled_assert("?endOfStream@SaveStream@@AAE_NXZ");
    todo("implement");
    bool __result = _sub_62C897(this);
    return __result;
}

_extern bool _sub_62CBD8(SaveStream *const, char const *);
bool SaveStream::writeToDisk(char const *) // 0x62CBD8
{
    mangled_assert("?writeToDisk@SaveStream@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_62CBD8(this, arg);
    return __result;
}

_extern bool _sub_62CC5C(SaveStream *const, char const *);
bool SaveStream::writeToken(char const *) // 0x62CC5C
{
    mangled_assert("?writeToken@SaveStream@@QAE_NPBD@Z");
    todo("implement");
    bool __result = _sub_62CC5C(this, arg);
    return __result;
}

_extern bool _sub_62C910(SaveStream *const, char *, unsigned __int32);
bool SaveStream::getNextToken(char *, unsigned __int32) // 0x62C910
{
    mangled_assert("?getNextToken@SaveStream@@QAE_NPADI@Z");
    todo("implement");
    bool __result = _sub_62C910(this, arg, arg);
    return __result;
}

_extern bool _sub_62CAAD(SaveStream *const, char *, unsigned __int32);
bool SaveStream::readFilteredBytes(char *, unsigned __int32) // 0x62CAAD
{
    mangled_assert("?readFilteredBytes@SaveStream@@QAE_NPADI@Z");
    todo("implement");
    bool __result = _sub_62CAAD(this, arg, arg);
    return __result;
}

_extern void _sub_62C703(SaveStream *const, unsigned char const);
void SaveStream::Write(unsigned char const) // 0x62C703
{
    mangled_assert("?Write@SaveStream@@QAEXE@Z");
    todo("implement");
    _sub_62C703(this, arg);
}

_extern void _sub_62C38A(SaveStream *const, unsigned char &);
void SaveStream::Read(unsigned char &) // 0x62C38A
{
    mangled_assert("?Read@SaveStream@@QAEXAAE@Z");
    todo("implement");
    _sub_62C38A(this, arg);
}

_extern void _sub_62C745(SaveStream *const, unsigned __int32 const);
void SaveStream::Write(unsigned __int32 const) // 0x62C745
{
    mangled_assert("?Write@SaveStream@@QAEXI@Z");
    todo("implement");
    _sub_62C745(this, arg);
}

_extern void _sub_62C3C2(SaveStream *const, unsigned __int32 &);
void SaveStream::Read(unsigned __int32 &) // 0x62C3C2
{
    mangled_assert("?Read@SaveStream@@QAEXAAI@Z");
    todo("implement");
    _sub_62C3C2(this, arg);
}

_extern void _sub_62C785(SaveStream *const, float const);
void SaveStream::Write(float const) // 0x62C785
{
    mangled_assert("?Write@SaveStream@@QAEXM@Z");
    todo("implement");
    _sub_62C785(this, arg);
}

_extern void _sub_62C43B(SaveStream *const, float &);
void SaveStream::Read(float &) // 0x62C43B
{
    mangled_assert("?Read@SaveStream@@QAEXAAM@Z");
    todo("implement");
    _sub_62C43B(this, arg);
}

_extern void _sub_62C65D(SaveStream *const, vector3 const &);
void SaveStream::Write(vector3 const &) // 0x62C65D
{
    mangled_assert("?Write@SaveStream@@QAEXABVvector3@@@Z");
    todo("implement");
    _sub_62C65D(this, arg);
}

_extern void _sub_62C458(SaveStream *const, vector3 &);
void SaveStream::Read(vector3 &) // 0x62C458
{
    mangled_assert("?Read@SaveStream@@QAEXAAVvector3@@@Z");
    todo("implement");
    _sub_62C458(this, arg);
}

_extern void _sub_62C6A6(SaveStream *const, vector4 const &);
void SaveStream::Write(vector4 const &) // 0x62C6A6
{
    mangled_assert("?Write@SaveStream@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_62C6A6(this, arg);
}

_extern void _sub_62C4A5(SaveStream *const, vector4 &);
void SaveStream::Read(vector4 &) // 0x62C4A5
{
    mangled_assert("?Read@SaveStream@@QAEXAAVvector4@@@Z");
    todo("implement");
    _sub_62C4A5(this, arg);
}

_extern void _sub_62CBA0(SaveStream *const);
void SaveStream::writeNewLine() // 0x62CBA0
{
    mangled_assert("?writeNewLine@SaveStream@@QAEXXZ");
    todo("implement");
    _sub_62CBA0(this);
}

_extern void _sub_62CB4F(SaveStream *const);
void SaveStream::writeComma() // 0x62CB4F
{
    mangled_assert("?writeComma@SaveStream@@QAEXXZ");
    todo("implement");
    _sub_62CB4F(this);
}

_extern void _sub_62CBC4(SaveStream *const);
void SaveStream::writeSpace() // 0x62CBC4
{
    mangled_assert("?writeSpace@SaveStream@@QAEXXZ");
    todo("implement");
    _sub_62CBC4(this);
}

_extern void _sub_62C78A(SaveStream *const, char const *);
void SaveStream::Write(char const *) // 0x62C78A
{
    mangled_assert("?Write@SaveStream@@QAEXPBD@Z");
    todo("implement");
    _sub_62C78A(this, arg);
}

_extern void _sub_62C7FA(SaveStream *const, wchar_t const *);
void SaveStream::Write(wchar_t const *) // 0x62C7FA
{
    mangled_assert("?Write@SaveStream@@QAEXPB_W@Z");
    todo("implement");
    _sub_62C7FA(this, arg);
}

_extern bool _sub_62C507(SaveStream *const, char *);
bool SaveStream::Read(char *) // 0x62C507
{
    mangled_assert("?Read@SaveStream@@QAE_NPAD@Z");
    todo("implement");
    bool __result = _sub_62C507(this, arg);
    return __result;
}

_extern bool _sub_62C53F(SaveStream *const, std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
bool SaveStream::Read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *) // 0x62C53F
{
    mangled_assert("?Read@SaveStream@@QAE_NPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_62C53F(this, arg);
    return __result;
}

_extern bool _sub_62C622(SaveStream *const, wchar_t *);
bool SaveStream::Read(wchar_t *) // 0x62C622
{
    mangled_assert("?Read@SaveStream@@QAE_NPA_W@Z");
    todo("implement");
    bool __result = _sub_62C622(this, arg);
    return __result;
}

_extern bool _sub_62C5AE(SaveStream *const, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *);
bool SaveStream::Read(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *) // 0x62C5AE
{
    mangled_assert("?Read@SaveStream@@QAE_NPAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z");
    todo("implement");
    bool __result = _sub_62C5AE(this, arg);
    return __result;
}

_extern bool _sub_62CA73(SaveStream *const, void *, unsigned __int32);
bool SaveStream::readEntry(void *, unsigned __int32) // 0x62CA73
{
    mangled_assert("?readEntry@SaveStream@@QAE_NPAXI@Z");
    todo("implement");
    bool __result = _sub_62CA73(this, arg, arg);
    return __result;
}

_extern bool _sub_62CB63(SaveStream *const, void const *, unsigned __int32);
bool SaveStream::writeEntry(void const *, unsigned __int32) // 0x62CB63
{
    mangled_assert("?writeEntry@SaveStream@@QAE_NPBXI@Z");
    todo("implement");
    bool __result = _sub_62CB63(this, arg, arg);
    return __result;
}

_extern unsigned char _sub_62C9A2(char);
unsigned char getNibbleHex(char nibble) // 0x62C9A2
{
    mangled_assert("?getNibbleHex@@YGED@Z");
    todo("implement");
    unsigned char __result = _sub_62C9A2(nibble);
    return __result;
}

_extern unsigned char _sub_62C878(char, char);
unsigned char byteValue(char highNibble, char lowNibble) // 0x62C878
{
    mangled_assert("?byteValue@@YGEDD@Z");
    todo("implement");
    unsigned char __result = _sub_62C878(highNibble, lowNibble);
    return __result;
}

/* ---------- private code */
#endif
