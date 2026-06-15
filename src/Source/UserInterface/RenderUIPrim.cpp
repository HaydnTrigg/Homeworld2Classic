#if 0
/* ---------- headers */

#include "decomp.h"
#include <localizer\localizer.h>
#include <UserInterface\NewText.h>
#include <xstring>
#include <Render\objects\fontsystem.h>
#include <xmemory0>
#include <UserInterface\pch.h>
#include <Mathlib\mathutil.h>
#include <Render\objects\objects.h>
#include <Render\objects\bitmapfont.h>
#include <hash_map>
#include <Render\gl\r_defines.h>
#include <xhash>
#include <Render\gl\glext.h>
#include <Render\objects\texture.h>
#include <Render\objects\textureregistry.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <Mathlib\matrix4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>
#include <Mathlib\vector3.h>
#include <xutility>
#include <utility>
#include <iosfwd>
#include <vector>
#include <Mathlib\matrix3.h>
#include <math.h>
#include <Render\objects\compiledtext.h>
#include <UserInterface\RenderUIPrim.h>
#include <UserInterface\uiprimitives.h>
#include <UserInterface\uitypes.h>
#include <platform\inputinterface.h>
#include <platform\platformexports.h>
#include <UserInterface\UIFont.h>
#include <platform\keydefines.h>
#include <map>
#include <xtree>
#include <Engine\renderer.h>
#include <util\types.h>
#include <platform\osdef.h>
#include <UserInterface\UICoord.h>
#include <Render\objects\core.h>
#include <Render\gl\types.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <assist\typemagic.h>
#include <boost\cstdint.hpp>
#include <debug\db.h>
#include <Render\gl\lotypes.h>
#include <Render\gl\r_types.h>
#include <Render\objects\cliprect.h>
#include <wchar.h>
#include <UserInterface\uirenderproxy.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

extern void RenderUIPrim::SetRenderProxy(UIRenderProxy *renderer);
extern float RenderUIPrim::GetDropShadowOffsetX();
extern float RenderUIPrim::GetDropShadowOffsetY();
extern void RenderUIPrim::RenderQuad(UISolidColoredQuad &quad);
extern void RenderUIPrim::RenderQuad(UIVertexColoredQuad &quad);
extern void RenderUIPrim::RenderQuad(UITexturedQuad &quad, bool pixelSnap);
extern void RenderUIPrim::RenderLine(UISolidColoredLine &line, Rect_i const &clipRect);
extern void RenderUIPrim::RenderBorderRect(UISolidColoredBorderRect &rect, Rect_i const &clipRect);
extern void RenderUIPrim::CompileWText(unsigned __int32 handle, Rect_i const &rect, Rect_i const &clipRect, UI::NewText const &t);
extern void RenderUIPrim::CompileWTextFancy(unsigned __int32 handle, Rect_i const &rect, Rect_i const &clipRect, UI::NewText const &t);
extern void RenderUIPrim::RenderWText(UI::NewText const &t, unsigned __int32 handle);
extern void RenderUIPrim::WrapWTextFancy(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &str, long width, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, UI::NewText const &t);
extern void RenderUIPrim::RenderText(long x, long y, float z, char const *text, UIText &textStyle);
extern void RenderUIPrim::RenderLine(UILine const &line);
extern void RenderUIPrim::RenderCustom(UICustom const &custom);
extern void RenderUIPrim::GetTextSize(UI::NewText const &t, long &outWidth, long &outHeight);
extern void RenderUIPrim::GetTextSizeFancy(UI::NewText const &t, long &outWidth, long &outHeight);
extern void RenderUIPrim::GetTextCharOffset(UI::NewText const &t, Rect_i const &r, long index, long &outX, long &outY);
extern void RenderUIPrim::GetTextCharOffsetFancy(UI::NewText const &t, Rect_i const &r, long index, long &outX, long &outY);

_static void RenderUIPrim::GetAlignmentOffset(UI::NewText const &t, bool fancy, long w, long h, long &dx, long &dy);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern UIRenderProxy *s_renderer; // 0x84B9EC
    extern float s_dropShadowXOffset; // 0x83E408
    extern float s_dropShadowYOffset; // 0x83E40C
}

/* ---------- public code */

void RenderUIPrim::SetRenderProxy(UIRenderProxy *renderer) // 0x68EF7A
{
    mangled_assert("?SetRenderProxy@RenderUIPrim@@YGXPAVUIRenderProxy@@@Z");
    todo("implement");
}

float RenderUIPrim::GetDropShadowOffsetX() // 0x68CD01
{
    mangled_assert("?GetDropShadowOffsetX@RenderUIPrim@@YGMXZ");
    todo("implement");
}

float RenderUIPrim::GetDropShadowOffsetY() // 0x68CD08
{
    mangled_assert("?GetDropShadowOffsetY@RenderUIPrim@@YGMXZ");
    todo("implement");
}

void RenderUIPrim::RenderQuad(UISolidColoredQuad &quad) // 0x68E345
{
    mangled_assert("?RenderQuad@RenderUIPrim@@YGXAAUUISolidColoredQuad@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderQuad(UIVertexColoredQuad &quad) // 0x68EBDB
{
    mangled_assert("?RenderQuad@RenderUIPrim@@YGXAAUUIVertexColoredQuad@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderQuad(UITexturedQuad &quad, bool pixelSnap) // 0x68E593
{
    mangled_assert("?RenderQuad@RenderUIPrim@@YGXAAUUITexturedQuad@@_N@Z");
    todo("implement");
}

void RenderUIPrim::RenderLine(UISolidColoredLine &line, Rect_i const &clipRect) // 0x68DE24
{
    mangled_assert("?RenderLine@RenderUIPrim@@YGXAAUUISolidColoredLine@@ABURect_i@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderBorderRect(UISolidColoredBorderRect &rect, Rect_i const &clipRect) // 0x68D1CF
{
    mangled_assert("?RenderBorderRect@RenderUIPrim@@YGXAAUUISolidColoredBorderRect@@ABURect_i@@@Z");
    todo("implement");
}

void RenderUIPrim::CompileWText(unsigned __int32 handle, Rect_i const &rect, Rect_i const &clipRect, UI::NewText const &t) // 0x68C724
{
    mangled_assert("?CompileWText@RenderUIPrim@@YGXIABURect_i@@0ABVNewText@UI@@@Z");
    todo("implement");
}

void RenderUIPrim::CompileWTextFancy(unsigned __int32 handle, Rect_i const &rect, Rect_i const &clipRect, UI::NewText const &t) // 0x68C970
{
    mangled_assert("?CompileWTextFancy@RenderUIPrim@@YGXIABURect_i@@0ABVNewText@UI@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderWText(UI::NewText const &t, unsigned __int32 handle) // 0x68EF6F
{
    mangled_assert("?RenderWText@RenderUIPrim@@YGXABVNewText@UI@@I@Z");
    todo("implement");
}

void RenderUIPrim::WrapWTextFancy(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &str, long width, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, UI::NewText const &t) // 0x68EF86
{
    mangled_assert("?WrapWTextFancy@RenderUIPrim@@YGXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@JAAV23@ABVNewText@UI@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderText(long x, long y, float z, char const *text, UIText &textStyle) // 0x68EE9F
{
    mangled_assert("?RenderText@RenderUIPrim@@YGXJJMPBDAAUUIText@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderLine(UILine const &line) // 0x68E20F
{
    mangled_assert("?RenderLine@RenderUIPrim@@YGXABUUILine@@@Z");
    todo("implement");
}

void RenderUIPrim::RenderCustom(UICustom const &custom) // 0x68DE19
{
    mangled_assert("?RenderCustom@RenderUIPrim@@YGXABUUICustom@@@Z");
    todo("implement");
}

void RenderUIPrim::GetTextSize(UI::NewText const &t, long &outWidth, long &outHeight) // 0x68CF73
{
    mangled_assert("?GetTextSize@RenderUIPrim@@YGXABVNewText@UI@@AAJ1@Z");
    todo("implement");
}

void RenderUIPrim::GetTextSizeFancy(UI::NewText const &t, long &outWidth, long &outHeight) // 0x68D06F
{
    mangled_assert("?GetTextSizeFancy@RenderUIPrim@@YGXABVNewText@UI@@AAJ1@Z");
    todo("implement");
}

void RenderUIPrim::GetTextCharOffset(UI::NewText const &t, Rect_i const &r, long index, long &outX, long &outY) // 0x68CD13
{
    mangled_assert("?GetTextCharOffset@RenderUIPrim@@YGXABVNewText@UI@@ABURect_i@@JAAJ2@Z");
    todo("implement");
}

void RenderUIPrim::GetTextCharOffsetFancy(UI::NewText const &t, Rect_i const &r, long index, long &outX, long &outY) // 0x68CE2B
{
    mangled_assert("?GetTextCharOffsetFancy@RenderUIPrim@@YGXABVNewText@UI@@ABURect_i@@JAAJ2@Z");
    todo("implement");
}

/* ---------- private code */

_static void RenderUIPrim::GetAlignmentOffset(UI::NewText const &t, bool fancy, long w, long h, long &dx, long &dy) // 0x68CB99
{
    mangled_assert("RenderUIPrim::GetAlignmentOffset");
    todo("implement");
}
#endif
