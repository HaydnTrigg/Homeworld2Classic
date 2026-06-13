#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Mathlib\matrix4.h>
#include <pch.h>
#include <Mathlib\matrix3.h>
#include <Render\objects\compiledtext.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <xmemory>
#include <ECG.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <map>
#include <xtree>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <Interface.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <platform\windowinterface.h>
#include <platform\platformexports.h>
#include <Render\gl\lotypes.h>
#include <Mathlib\mathlibdll.h>
#include <Render\gl\r_types.h>
#include <Mathlib\fastmath.h>
#include <Render\objects\cliprect.h>
#include <util\colour.h>
#include <renderer.h>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Render\objects\fontsystem.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <xhash>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

_extern _sub_5EC568(ECGHeartbeat *const, char const *, __int32);
ECGHeartbeat::ECGHeartbeat(char const *, __int32) // 0x5EC568
{
    mangled_assert("??0ECGHeartbeat@@QAE@PBDH@Z");
    todo("implement");
    _sub_5EC568(this, arg, arg);
}

_extern void _sub_5EC685(ECGHeartbeat *const);
ECGHeartbeat::~ECGHeartbeat() // 0x5EC685
{
    mangled_assert("??1ECGHeartbeat@@QAE@XZ");
    todo("implement");
    _sub_5EC685(this);
}

_extern void _sub_5ECC65(ECGHeartbeat *const, vector4 const &);
void ECGHeartbeat::setColor(vector4 const &) // 0x5ECC65
{
    mangled_assert("?setColor@ECGHeartbeat@@QAEXABVvector4@@@Z");
    todo("implement");
    _sub_5ECC65(this, arg);
}

_extern void _sub_5ECC7E(ECGHeartbeat *const, __int32);
void ECGHeartbeat::setNSamples(__int32) // 0x5ECC7E
{
    mangled_assert("?setNSamples@ECGHeartbeat@@QAEXH@Z");
    todo("implement");
    _sub_5ECC7E(this, arg);
}

_extern void _sub_5ECC77(ECGHeartbeat *const, float);
void ECGHeartbeat::setCurrentTime(float) // 0x5ECC77
{
    mangled_assert("?setCurrentTime@ECGHeartbeat@@QAEXM@Z");
    todo("implement");
    _sub_5ECC77(this, arg);
}

_extern float _sub_5EC70E(ECGHeartbeat *const, float);
float ECGHeartbeat::logBeat(float) // 0x5EC70E
{
    mangled_assert("?logBeat@ECGHeartbeat@@QAEMM@Z");
    todo("implement");
    float __result = _sub_5EC70E(this, arg);
    return __result;
}

_extern _sub_5EC5E7(ElectroCardioGraph *const, __int32);
ElectroCardioGraph::ElectroCardioGraph(__int32) // 0x5EC5E7
{
    mangled_assert("??0ElectroCardioGraph@@QAE@H@Z");
    todo("implement");
    _sub_5EC5E7(this, arg);
}

_extern void _sub_5EC6A9(ElectroCardioGraph *const);
ElectroCardioGraph::~ElectroCardioGraph() // 0x5EC6A9
{
    mangled_assert("??1ElectroCardioGraph@@QAE@XZ");
    todo("implement");
    _sub_5EC6A9(this);
}

_extern void _sub_5ECCCE(ElectroCardioGraph *const, float);
void ElectroCardioGraph::setResolution(float) // 0x5ECCCE
{
    mangled_assert("?setResolution@ElectroCardioGraph@@QAEXM@Z");
    todo("implement");
    _sub_5ECCCE(this, arg);
}

_extern void _sub_5ECCE0(ElectroCardioGraph *const, float, float, float);
void ElectroCardioGraph::setScreenLayout(float, float, float) // 0x5ECCE0
{
    mangled_assert("?setScreenLayout@ElectroCardioGraph@@QAEXMMM@Z");
    todo("implement");
    _sub_5ECCE0(this, arg, arg, arg);
}

_extern void _sub_5ECC09(ElectroCardioGraph *const);
void ElectroCardioGraph::reset() // 0x5ECC09
{
    mangled_assert("?reset@ElectroCardioGraph@@QAEXXZ");
    todo("implement");
    _sub_5ECC09(this);
}

_extern float _sub_5EC73D(ElectroCardioGraph *const, __int32, float);
float ElectroCardioGraph::logBeat(__int32, float) // 0x5EC73D
{
    mangled_assert("?logBeat@ElectroCardioGraph@@QAEMHM@Z");
    todo("implement");
    float __result = _sub_5EC73D(this, arg, arg);
    return __result;
}

_extern void _sub_5ECD04(ElectroCardioGraph *const, __int32, char const *, vector4 const &);
void ElectroCardioGraph::specChannel(__int32, char const *, vector4 const &) // 0x5ECD04
{
    mangled_assert("?specChannel@ElectroCardioGraph@@QAEXHPBDABVvector4@@@Z");
    todo("implement");
    _sub_5ECD04(this, arg, arg, arg);
}

_extern void _sub_5EC785(ElectroCardioGraph *const);
void ElectroCardioGraph::render() // 0x5EC785
{
    mangled_assert("?render@ElectroCardioGraph@@QAEXXZ");
    todo("implement");
    _sub_5EC785(this);
}

/* ---------- private code */
#endif
