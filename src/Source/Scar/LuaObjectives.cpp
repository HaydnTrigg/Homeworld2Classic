#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <Render\objects\textureregistry.h>
#include <xmemory0>
#include <Scar\pch.h>
#include <memory\memorylib.h>
#include <crtdefs.h>
#include <luaconfig\lualibman.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <Engine\GameEventSys.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <Mathlib\matrix3.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <xmemory>
#include <platform\platformexports.h>
#include <Engine\Menus\ObjectivesList.h>
#include <UserInterface\NewUIScreen.h>
#include <compiler\compilerconfig.h>
#include <Scar\LuaObjectives.h>
#include <Engine\task.h>
#include <stack>
#include <Engine\Objectives.h>
#include <localizer\localizer.h>
#include <platform\osdef.h>
#include <boost\cstdint.hpp>
#include <Mathlib\mathutil.h>
#include <luaconfig\luaconfig.h>
#include <vector>
#include <UserInterface\SharedGraphicFactory.h>
#include <UserInterface\Graphic.h>
#include <Render\objects\texture.h>
#include <Render\objects\objects.h>
#include <Render\objects\core.h>
#include <UserInterface\signals.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <util\colour.h>
#include <Render\gl\lotypes.h>
#include <UserInterface\StyleSheet.h>
#include <cassert>
#include <UserInterface\pch.h>
#include <assert.h>
#include <Mathlib\vector2.h>
#include <Render\gl\r_types.h>
#include <util\types.h>
#include <Render\objects\textureproxy.h>
#include <Engine\KeyBindings.h>
#include <Engine\config.h>
#include <Engine\prim.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <assist\typemagic.h>
#include <boost\throw_exception.hpp>
#include <Engine\region.h>
#include <platform\keydefines.h>
#include <boost\detail\shared_count.hpp>
#include <boost\detail\lwm_win32.hpp>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <UserInterface\NewFrame.h>
#include <Mathlib\fastmath.h>
#include <Render\gl\r_defines.h>
#include <UserInterface\InterfaceElement.h>
#include <Render\gl\glext.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <assist\stlexsmallvector.h>
#include <list>
#include <wchar.h>
#include <debug\db.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaObjectivesLib :
    public LuaLibrary
{
public:
    LuaObjectivesLib(`anonymous-namespace'::LuaObjectivesLib const &); /* compiler_generated() */
    LuaObjectivesLib();
    virtual ~LuaObjectivesLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaObjectivesLib &operator=(`anonymous-namespace'::LuaObjectivesLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaObjectivesLib) == 16, "Invalid `anonymous-namespace'::LuaObjectivesLib size");

typedef `anonymous-namespace'::LuaObjectivesLib ?A0xdec2e750::LuaObjectivesLib;

/* ---------- prototypes */

extern unsigned __int32 Objective_Add(char const *name, unsigned __int32 type);
extern unsigned __int32 Objective_GetState(unsigned __int32 id);
extern void Objective_SetState(unsigned __int32 id, unsigned __int32 state);
extern void Objective_Select(unsigned __int32 id);
extern void Objective_AddDescription(unsigned __int32 id, char const *descriptionid);

/* ---------- globals */

extern char const *LUALIB_OBJECTIVES; // 0x842248

/* ---------- private variables */

/* ---------- public code */

_extern unsigned __int32 _sub_713AE9(char const *, unsigned __int32);
unsigned __int32 Objective_Add(char const *name, unsigned __int32 type) // 0x713AE9
{
    mangled_assert("?Objective_Add@@YGIPBDI@Z");
    todo("implement");
    unsigned __int32 __result = _sub_713AE9(name, type);
    return __result;
}

_extern unsigned __int32 _sub_713B6B(unsigned __int32);
unsigned __int32 Objective_GetState(unsigned __int32 id) // 0x713B6B
{
    mangled_assert("?Objective_GetState@@YGII@Z");
    todo("implement");
    unsigned __int32 __result = _sub_713B6B(id);
    return __result;
}

_extern void _sub_713B96(unsigned __int32, unsigned __int32);
void Objective_SetState(unsigned __int32 id, unsigned __int32 state) // 0x713B96
{
    mangled_assert("?Objective_SetState@@YGXII@Z");
    todo("implement");
    _sub_713B96(id, state);
}

_extern void _sub_713B85(unsigned __int32);
void Objective_Select(unsigned __int32 id) // 0x713B85
{
    mangled_assert("?Objective_Select@@YGXI@Z");
    todo("implement");
    _sub_713B85(id);
}

_extern void _sub_713B24(unsigned __int32, char const *);
void Objective_AddDescription(unsigned __int32 id, char const *descriptionid) // 0x713B24
{
    mangled_assert("?Objective_AddDescription@@YGXIPBD@Z");
    todo("implement");
    _sub_713B24(id, descriptionid);
}

_extern void _sub_7139D7(LuaBinding::ObjInternal2<char const *,unsigned int,unsigned int,LuaBinding::Functor2Free<char const *,unsigned int,unsigned int> > *const);
_inline LuaBinding::ObjInternal2<char const *,unsigned int,unsigned int,LuaBinding::Functor2Free<char const *,unsigned int,unsigned int> >::~ObjInternal2<char const *,unsigned int,unsigned int,LuaBinding::Functor2Free<char const *,unsigned int,unsigned int> >() // 0x7139D7
{
    mangled_assert("??1?$ObjInternal2@PBDIIV?$Functor2Free@PBDII@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_7139D7(this);
}

/* ---------- private code */
#endif
