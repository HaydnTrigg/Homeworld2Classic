#if 0
/* ---------- headers */

#include "decomp.h"
#include <pch.h>
#include <EngineTrailFrameList.h>
#include <EngineTrailFrame.h>
#include <EngineTrailManager.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern __int32 EngineTrailFrameList::s_totalNumber; // 0x843904

/* ---------- private variables */

/* ---------- public code */

_extern _sub_447088(EngineTrailFrameBlock *const);
_inline EngineTrailFrameBlock::EngineTrailFrameBlock() // 0x447088
{
    mangled_assert("??0EngineTrailFrameBlock@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_447088(this);
}

_extern _sub_4470A6(EngineTrailFrameList *const);
EngineTrailFrameList::EngineTrailFrameList() // 0x4470A6
{
    mangled_assert("??0EngineTrailFrameList@@QAE@XZ");
    todo("implement");
    _sub_4470A6(this);
}

_extern void _sub_4470B3(EngineTrailFrameBlock *const);
_inline EngineTrailFrameBlock::~EngineTrailFrameBlock() // 0x4470B3
{
    mangled_assert("??1EngineTrailFrameBlock@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_4470B3(this);
}

_extern void _sub_4470C6(EngineTrailFrameList *const);
EngineTrailFrameList::~EngineTrailFrameList() // 0x4470C6
{
    mangled_assert("??1EngineTrailFrameList@@QAE@XZ");
    todo("implement");
    _sub_4470C6(this);
}

_extern __int32 _sub_44723A();
__int32 EngineTrailFrameList::getTotalNumber() // 0x44723A
{
    mangled_assert("?getTotalNumber@EngineTrailFrameList@@SGHXZ");
    todo("implement");
    __int32 __result = _sub_44723A();
    return __result;
}

_extern EngineTrailFrame *_sub_44729F(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::newHead() // 0x44729F
{
    mangled_assert("?newHead@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_44729F(this);
    return __result;
}

_extern void _sub_4471D1(EngineTrailFrameList *const);
void EngineTrailFrameList::clear() // 0x4471D1
{
    mangled_assert("?clear@EngineTrailFrameList@@QAEXXZ");
    todo("implement");
    _sub_4471D1(this);
}

_extern void _sub_4470F8(EngineTrailFrameList *const, EngineTrailFrameBlock *);
void EngineTrailFrameList::addHeadBlock(EngineTrailFrameBlock *) // 0x4470F8
{
    mangled_assert("?addHeadBlock@EngineTrailFrameList@@QAEXPAVEngineTrailFrameBlock@@@Z");
    todo("implement");
    _sub_4470F8(this, arg);
}

_extern void _sub_447128(EngineTrailFrameList *const, EngineTrailFrameBlock *);
void EngineTrailFrameList::addTailBlock(EngineTrailFrameBlock *) // 0x447128
{
    mangled_assert("?addTailBlock@EngineTrailFrameList@@QAEXPAVEngineTrailFrameBlock@@@Z");
    todo("implement");
    _sub_447128(this, arg);
}

_extern EngineTrailFrame *_sub_447206(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::getHead() // 0x447206
{
    mangled_assert("?getHead@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_447206(this);
    return __result;
}

_extern EngineTrailFrame const *_sub_447220(EngineTrailFrameList const *const);
EngineTrailFrame const *EngineTrailFrameList::getHead() const // 0x447220
{
    mangled_assert("?getHead@EngineTrailFrameList@@QBEPBVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame const * __result = _sub_447220(this);
    return __result;
}

_extern EngineTrailFrameBlock *_sub_44719E(EngineTrailFrameList *const);
EngineTrailFrameBlock *EngineTrailFrameList::chopTailBlock() // 0x44719E
{
    mangled_assert("?chopTailBlock@EngineTrailFrameList@@AAEPAVEngineTrailFrameBlock@@XZ");
    todo("implement");
    EngineTrailFrameBlock * __result = _sub_44719E(this);
    return __result;
}

_extern EngineTrailFrameBlock *_sub_447160(EngineTrailFrameList *const);
EngineTrailFrameBlock *EngineTrailFrameList::chopHeadBlock() // 0x447160
{
    mangled_assert("?chopHeadBlock@EngineTrailFrameList@@AAEPAVEngineTrailFrameBlock@@XZ");
    todo("implement");
    EngineTrailFrameBlock * __result = _sub_447160(this);
    return __result;
}

_extern void _sub_44732F(EngineTrailFrameList *const);
void EngineTrailFrameList::popTail() // 0x44732F
{
    mangled_assert("?popTail@EngineTrailFrameList@@QAEXXZ");
    todo("implement");
    _sub_44732F(this);
}

_extern EngineTrailFrame *_sub_447240(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::iteratorBegin() // 0x447240
{
    mangled_assert("?iteratorBegin@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_447240(this);
    return __result;
}

_extern EngineTrailFrame *_sub_447262(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::iteratorNext() // 0x447262
{
    mangled_assert("?iteratorNext@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_447262(this);
    return __result;
}

_extern EngineTrailFrame *_sub_447364(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::riteratorBegin() // 0x447364
{
    mangled_assert("?riteratorBegin@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_447364(this);
    return __result;
}

_extern EngineTrailFrame *_sub_447386(EngineTrailFrameList *const);
EngineTrailFrame *EngineTrailFrameList::riteratorNext() // 0x447386
{
    mangled_assert("?riteratorNext@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@XZ");
    todo("implement");
    EngineTrailFrame * __result = _sub_447386(this);
    return __result;
}

_extern EngineTrailFrame *_sub_4473C2(EngineTrailFrameList *const, unsigned __int32);
EngineTrailFrame *EngineTrailFrameList::riteratorNextStep(unsigned __int32) // 0x4473C2
{
    mangled_assert("?riteratorNextStep@EngineTrailFrameList@@QAEPAVEngineTrailFrame@@I@Z");
    todo("implement");
    EngineTrailFrame * __result = _sub_4473C2(this, arg);
    return __result;
}

/* ---------- private code */
#endif
