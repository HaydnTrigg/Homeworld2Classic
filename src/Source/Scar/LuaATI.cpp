#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\matrix4.h>
#include <platform\osdef.h>
#include <new>
#include <exception>
#include <xstddef>
#include <type_traits>
#include <Render\objects\debugrender.h>
#include <Render\objects\core.h>
#include <Render\objects\objects.h>
#include <Mathlib\matrix3.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <xutility>
#include <utility>
#include <boost\config.hpp>
#include <iosfwd>
#include <map>
#include <xtree>
#include <Engine\LuaRender.h>
#include <xmemory>
#include <Render\gl\lotypes.h>
#include <Scar\Scar.h>
#include <Scar\ScarEventSys.h>
#include <Scar\LuaATI.h>
#include <Engine\ATI.h>
#include <Engine\UIGraphic.h>
#include <Render\gl\r_types.h>
#include <vector>
#include <boost\detail\workaround.hpp>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Scar\LuaRuleSystem.h>
#include <boost\utility.hpp>
#include <boost\utility\addressof.hpp>
#include <util\colour.h>
#include <cstdarg>
#include <boost\utility\base_from_member.hpp>
#include <stdarg.h>
#include <boost\utility_fwd.hpp>
#include <Render\gl\r_defines.h>
#include <Render\gl\glext.h>
#include <Mathlib\vector2.h>
#include <util\types.h>
#include <boost\next_prior.hpp>
#include <Engine\prim.h>
#include <Engine\savegamedef.h>
#include <boost\noncopyable.hpp>
#include <assist\typemagic.h>
#include <localizer\localizer.h>
#include <Mathlib\mathlibdll.h>
#include <boost\scoped_ptr.hpp>
#include <Mathlib\fastmath.h>
#include <Mathlib\luamathbinding.h>
#include <Scar\wcharbinding.h>
#include <wchar.h>
#include <string>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaATILib :
    public LuaLibrary
{
public:
    LuaATILib(`anonymous-namespace'::LuaATILib const &); /* compiler_generated() */
    LuaATILib();
    virtual ~LuaATILib() override;
    void Cleanup();
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaATILib &operator=(`anonymous-namespace'::LuaATILib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaATILib) == 16, "Invalid `anonymous-namespace'::LuaATILib size");

typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > > TemplateList;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > > Graphic2DList;
typedef std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > > Graphic3DList;
typedef `anonymous-namespace'::LuaATILib ?A0x560b2bfd::LuaATILib;

/* ---------- prototypes */

extern void ATI_LoadTemplates(char const *filename);
extern void ATI_CreateParameters(__int32 size);
extern void ATI_AddFloat(unsigned __int32 index, float param);
extern void ATI_AddColour(unsigned __int32 index, vector4 param);
extern void ATI_AddString(unsigned __int32 index, char const *param);
extern void ATI_AddWString(unsigned __int32 index, wchar_t const *param);
extern void ATI_AddPosition(unsigned __int32 index, vector3 param);
extern void ATI_AddScale(unsigned __int32 index, vector3 param);
extern void ATI_AddGraphic2D(unsigned __int32 index, char const *param);
extern void ATI_AddGraphic3D(unsigned __int32 index, char const *param);
extern void ATI_Display2D(char const *templateName, vector4 rect, unsigned __int32 visibility);
extern void ATI_Display3D(char const *templateName, vector3 position, vector3 scale, float screenSize, unsigned __int32 visibility);
extern void ATI_Clear();

/* ---------- globals */

extern char const *LUALIB_ATI; // 0x8434B4

/* ---------- private variables */

_static
{
    extern std::vector<vector4,std::allocator<vector4> > s_vector4Params; // 0x8613C8
    extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > > s_graphics2D; // 0x861394
    extern std::vector<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> >,std::allocator<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > > > s_stringParams; // 0x8613B0
    extern std::vector<vector3,std::allocator<vector3> > s_vector3Params; // 0x8613BC
    extern std::vector<ATIParameter,std::allocator<ATIParameter> > s_parameters; // 0x8613A4
    extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > > s_graphics3D; // 0x86139C
    extern std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > > s_templates; // 0x86138C
}

/* ---------- public code */

_extern void _sub_72B176(char const *);
void ATI_LoadTemplates(char const *filename) // 0x72B176
{
    mangled_assert("?ATI_LoadTemplates@@YGXPBD@Z");
    todo("implement");
    _sub_72B176(filename);
}

_extern void _sub_72B06D(__int32);
void ATI_CreateParameters(__int32 size) // 0x72B06D
{
    mangled_assert("?ATI_CreateParameters@@YGXH@Z");
    todo("implement");
    _sub_72B06D(size);
}

_extern void _sub_72ADB1(unsigned __int32, float);
void ATI_AddFloat(unsigned __int32 index, float param) // 0x72ADB1
{
    mangled_assert("?ATI_AddFloat@@YGXIM@Z");
    todo("implement");
    _sub_72ADB1(index, param);
}

_extern void _sub_72AD7D(unsigned __int32, vector4);
void ATI_AddColour(unsigned __int32 index, vector4 param) // 0x72AD7D
{
    mangled_assert("?ATI_AddColour@@YGXIVvector4@@@Z");
    todo("implement");
    _sub_72AD7D(index, param);
}

_extern void _sub_72AF37(unsigned __int32, char const *);
void ATI_AddString(unsigned __int32 index, char const *param) // 0x72AF37
{
    mangled_assert("?ATI_AddString@@YGXIPBD@Z");
    todo("implement");
    _sub_72AF37(index, param);
}

_extern void _sub_72AFE8(unsigned __int32, wchar_t const *);
void ATI_AddWString(unsigned __int32 index, wchar_t const *param) // 0x72AFE8
{
    mangled_assert("?ATI_AddWString@@YGXIPB_W@Z");
    todo("implement");
    _sub_72AFE8(index, param);
}

_extern void _sub_72AECF(unsigned __int32, vector3);
void ATI_AddPosition(unsigned __int32 index, vector3 param) // 0x72AECF
{
    mangled_assert("?ATI_AddPosition@@YGXIVvector3@@@Z");
    todo("implement");
    _sub_72AECF(index, param);
}

_extern void _sub_72AF03(unsigned __int32, vector3);
void ATI_AddScale(unsigned __int32 index, vector3 param) // 0x72AF03
{
    mangled_assert("?ATI_AddScale@@YGXIVvector3@@@Z");
    todo("implement");
    _sub_72AF03(index, param);
}

_extern void _sub_72ADD5(unsigned __int32, char const *);
void ATI_AddGraphic2D(unsigned __int32 index, char const *param) // 0x72ADD5
{
    mangled_assert("?ATI_AddGraphic2D@@YGXIPBD@Z");
    todo("implement");
    _sub_72ADD5(index, param);
}

_extern void _sub_72AE52(unsigned __int32, char const *);
void ATI_AddGraphic3D(unsigned __int32 index, char const *param) // 0x72AE52
{
    mangled_assert("?ATI_AddGraphic3D@@YGXIPBD@Z");
    todo("implement");
    _sub_72AE52(index, param);
}

_extern void _sub_72B0C8(char const *, vector4, unsigned __int32);
void ATI_Display2D(char const *templateName, vector4 rect, unsigned __int32 visibility) // 0x72B0C8
{
    mangled_assert("?ATI_Display2D@@YGXPBDVvector4@@I@Z");
    todo("implement");
    _sub_72B0C8(templateName, rect, visibility);
}

_extern void _sub_72B173(char const *, vector3, vector3, float, unsigned __int32);
void ATI_Display3D(char const *templateName, vector3 position, vector3 scale, float screenSize, unsigned __int32 visibility) // 0x72B173
{
    mangled_assert("?ATI_Display3D@@YGXPBDVvector3@@1MI@Z");
    todo("implement");
    _sub_72B173(templateName, position, scale, screenSize, visibility);
}

_extern void _sub_72B055();
void ATI_Clear() // 0x72B055
{
    mangled_assert("?ATI_Clear@@YGXXZ");
    todo("implement");
    _sub_72B055();
}

_extern void _sub_72A5CE(LuaBinding::ObjInternal2<unsigned int,wchar_t const *,void,LuaBinding::Functor2Free<unsigned int,wchar_t const *,void> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,wchar_t const *,void,LuaBinding::Functor2Free<unsigned int,wchar_t const *,void> >::~ObjInternal2<unsigned int,wchar_t const *,void,LuaBinding::Functor2Free<unsigned int,wchar_t const *,void> >() // 0x72A5CE
{
    mangled_assert("??1?$ObjInternal2@IPB_WXV?$Functor2Free@IPB_WX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A5CE(this);
}

_extern void _sub_72A5D4(LuaBinding::ObjInternal2<unsigned int,vector3,void,LuaBinding::Functor2Free<unsigned int,vector3,void> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,vector3,void,LuaBinding::Functor2Free<unsigned int,vector3,void> >::~ObjInternal2<unsigned int,vector3,void,LuaBinding::Functor2Free<unsigned int,vector3,void> >() // 0x72A5D4
{
    mangled_assert("??1?$ObjInternal2@IVvector3@@XV?$Functor2Free@IVvector3@@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A5D4(this);
}

_extern void _sub_72A5DA(LuaBinding::ObjInternal2<unsigned int,vector4,void,LuaBinding::Functor2Free<unsigned int,vector4,void> > *const);
_inline LuaBinding::ObjInternal2<unsigned int,vector4,void,LuaBinding::Functor2Free<unsigned int,vector4,void> >::~ObjInternal2<unsigned int,vector4,void,LuaBinding::Functor2Free<unsigned int,vector4,void> >() // 0x72A5DA
{
    mangled_assert("??1?$ObjInternal2@IVvector4@@XV?$Functor2Free@IVvector4@@X@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A5DA(this);
}

_extern void _sub_72A5E0(LuaBinding::ObjInternal3<char const *,vector4,unsigned int,void,LuaBinding::Functor3Free<char const *,vector4,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal3<char const *,vector4,unsigned int,void,LuaBinding::Functor3Free<char const *,vector4,unsigned int,void> >::~ObjInternal3<char const *,vector4,unsigned int,void,LuaBinding::Functor3Free<char const *,vector4,unsigned int,void> >() // 0x72A5E0
{
    mangled_assert("??1?$ObjInternal3@PBDVvector4@@IXV?$Functor3Free@PBDVvector4@@IX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A5E0(this);
}

_extern void _sub_72A5E6(LuaBinding::ObjInternal5<char const *,vector3,vector3,float,unsigned int,void,LuaBinding::Functor5Free<char const *,vector3,vector3,float,unsigned int,void> > *const);
_inline LuaBinding::ObjInternal5<char const *,vector3,vector3,float,unsigned int,void,LuaBinding::Functor5Free<char const *,vector3,vector3,float,unsigned int,void> >::~ObjInternal5<char const *,vector3,vector3,float,unsigned int,void,LuaBinding::Functor5Free<char const *,vector3,vector3,float,unsigned int,void> >() // 0x72A5E6
{
    mangled_assert("??1?$ObjInternal5@PBDVvector3@@V1@MIXV?$Functor5Free@PBDVvector3@@V1@MIX@LuaBinding@@@LuaBinding@@UAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A5E6(this);
}

_extern void _sub_72A661(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > >() // 0x72A661
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A661(this);
}

_extern void _sub_72A66A(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > >() // 0x72A66A
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A66A(this);
}

_extern void _sub_72A673(std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > > *const);
_inline std::_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > >::~_Tree_buy<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > >() // 0x72A673
{
    mangled_assert("??1?$_Tree_buy@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A673(this);
}

_extern void _sub_72A67C(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> >,0> >() // 0x72A67C
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A67C(this);
}

_extern void _sub_72A685(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> >,0> >() // 0x72A685
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A685(this);
}

_extern void _sub_72A68E(std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> >,0> > *const);
_inline std::_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> >,0> >::~_Tree_comp<0,std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> >,0> >() // 0x72A68E
{
    mangled_assert("??1?$_Tree_comp@$0A@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@@2@$0A@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A68E(this);
}

_extern void _sub_72A697(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> > >() // 0x72A697
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A697(this);
}

_extern void _sub_72A69C(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> > >() // 0x72A69C
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A69C(this);
}

_extern void _sub_72A6A1(std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > > *const);
_inline std::map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > >::~map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> > >() // 0x72A6A1
{
    mangled_assert("??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6A1(this);
}

_extern void _sub_72A6A6(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,ATITemplate *>() // 0x72A6A6
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6A6(this);
}

_extern void _sub_72A6AB(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic2D *>() // 0x72A6AB
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6AB(this);
}

_extern void _sub_72A6B0(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,UIGraphic3D *>() // 0x72A6B0
{
    mangled_assert("??1?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6B0(this);
}

_extern void _sub_72A6B5(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,ATITemplate *>() // 0x72A6B5
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVATITemplate@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6B5(this);
}

_extern void _sub_72A6BA(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic2D *>() // 0x72A6BA
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic2D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6BA(this);
}

_extern void _sub_72A6BF(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *> *const);
_inline std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *>::~pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,UIGraphic3D *>() // 0x72A6BF
{
    mangled_assert("??1?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVUIGraphic3D@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_72A6BF(this);
}

/* ---------- private code */
#endif
