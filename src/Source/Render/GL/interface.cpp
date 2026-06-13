#if 0
/* ---------- headers */

#include "decomp.h"
#include <lua\lua.h>
#include <list>
#include <Render\GL\pch.h>
#include <xmemory>
#include <xmemory0>
#include <crtdefs.h>
#include <Render\GL\glpointers.inc>
#include <platform\os.h>
#include <new>
#include <exception>
#include <xstddef>
#include <Render\GL\types.h>
#include <util\types.h>
#include <platform\sharedlibraryinterface.h>
#include <vector>
#include <Render\GL\config.h>
#include <assist\stlexstring.h>
#include <debug\db.h>
#include <algorithm>
#include <hash_map>
#include <xhash>
#include <Render\GL\gltables.inc>
#include <Mathlib\vector4.h>
#include <type_traits>
#include <xstring>
#include <string>
#include <xatomic0.h>
#include <platform\osdef.h>
#include <luaconfig\luaconfig.h>
#include <boost\scoped_ptr.hpp>
#include <boost\assert.hpp>
#include <assert.h>
#include <boost\checked_delete.hpp>
#include <memory>
#include <stdint.h>
#include <luaconfig\luabinding.h>
#include <Mathlib\mathutil.h>
#include <xutility>
#include <iosfwd>
#include <platform\cmdline.h>
#include <platform\platformexports.h>
#include <xtgmath.h>

/* ---------- constants */

/* ---------- definitions */

struct getDLLVersion::__l5::LANGANDCODEPAGE
{
    unsigned short wLanguage; // 0x0
    unsigned short wCodePage; // 0x2
};
static_assert(sizeof(getDLLVersion::__l5::LANGANDCODEPAGE) == 4, "Invalid getDLLVersion::__l5::LANGANDCODEPAGE size");

class NameReference
{
public:
    _inline NameReference(NameReference const &); /* compiler_generated() */
    _inline NameReference(char const *, long);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
    long address; // 0x18
    _inline ~NameReference(); /* compiler_generated() */
    NameReference &operator=(NameReference const &); /* compiler_generated() */
};
static_assert(sizeof(NameReference) == 28, "Invalid NameReference size");

typedef std::map<unsigned int,VertexBuffer,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > > VertexBufferMap;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > > > VertexBufferMapI;
typedef std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> *_Nodeptr;
typedef std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> _Node;
typedef std::pair<unsigned int const ,VertexBuffer> value_type;
typedef unsigned __int32 size_type;
typedef __int32 difference_type;
typedef std::pair<unsigned int const ,VertexBuffer> *pointer;
typedef std::pair<unsigned int const ,VertexBuffer> const *const_pointer;
typedef std::pair<unsigned int const ,VertexBuffer> &reference;
typedef std::pair<unsigned int const ,VertexBuffer> const &const_reference;
typedef std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> *&_Nodepref;
typedef std::allocator<std::pair<unsigned int const ,VertexBuffer> > _Alloc;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> > > other;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> > > _Alnod_type;
typedef std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> > > _Alty;
typedef std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned int const ,VertexBuffer>,std::allocator<std::pair<unsigned int const ,VertexBuffer> > > > _Myt;
typedef std::allocator<std::pair<unsigned int const ,VertexBuffer> > allocator_type;
typedef std::less<unsigned int> key_compare;
typedef unsigned __int32 key_type;
typedef std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > > > const_iterator;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > > > type;
typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > > > iterator;
typedef std::pair<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > > >,bool> _Pairib;
typedef VertexBuffer mapped_type;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > >,std::_Iterator_base0> _Myiter;
typedef std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,VertexBuffer> > >,std::_Iterator_base0> _Unchecked_type;
typedef void *VoidP;
typedef void *void_pointer;
typedef void const *const_void_pointer;
typedef std::integral_constant<bool,0> propagate_on_container_copy_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_move_assignment;
typedef std::integral_constant<bool,0> propagate_on_container_swap;
typedef std::allocator<std::_Tree_node<std::pair<unsigned int const ,VertexBuffer>,void *> > _Mybase;
typedef std::pair<unsigned int const ,VertexBuffer> &_Reftype;
typedef unsigned long long uint64_t;
typedef unsigned __int32 uint32_t;
typedef std::map<Profile::FunctionInfo const *,Profile::Stats,std::less<Profile::FunctionInfo const *>,std::allocator<std::pair<Profile::FunctionInfo const * const,Profile::Stats> > > ChildrenMap;
typedef std::list<Profile::FunctionInfo *,std::allocator<Profile::FunctionInfo *> > FunctionList;
typedef std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<Profile::FunctionInfo *> >,std::_Iterator_base0> _Unchecked_const_iterator;
typedef std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<Profile::FunctionInfo *> > > _Unchecked_iterator;
typedef stdext::hash_map<unsigned int,TextureParams,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,TextureParams> > > TextureState;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > > TextureStateI;
typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > > const_local_iterator;
typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > > local_iterator;
typedef std::list<std::pair<unsigned int const ,TextureParams>,std::allocator<std::pair<unsigned int const ,TextureParams> > > _Mylist;
typedef std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > >,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > > > > > _Myvec;
typedef std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const ,TextureParams> > > > *_Tptr;
typedef char _Elem;
typedef unsigned __int32 result_type;
typedef char char_type;
typedef std::pointer_safety::pointer_safety _Pointer_safety;
typedef __int32 (*TagMethod)(lua_State *);
typedef __int32 (*LuaFunc)(lua_State *);
typedef void (*CBRegister)(char const *);
typedef void (*CBClear)(char const *);
typedef void (*CBAlert)(char const *);
typedef LuaConfig::Data **unspecified_bool_type() const;

/* ---------- prototypes */

extern unsigned __int32 getLibraryID();
extern void rglSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_errorString);
extern void rglSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &err0, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &err1);
extern void rglSetError(char const *_errorString);
extern void rglSetError(char const *err0, char const *err1);
extern void rglGetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &_errorString);
extern char const *rglGetString(IdentifierString s);
extern bool GL_workedAroundBadDriver();
extern void GL_suppressDriverError();
extern bool GL_disabledEmulatedFeatures();
extern unsigned __int32 makeUniqueDeviceIdentifier();
extern bool rglEnumerateDevicesHelper();
extern std::list<rndloDevice,std::allocator<rndloDevice> > const &rglEnumerateDevices();
extern bool GL_osNT();
extern void *loadDevice(unsigned __int32 uniqueID);
extern bool rglFreeDevice();
extern bool glDynaload(glDynaloadTable *glTable);
extern void glsDynaload(glDynaloadTable *glTable);
extern bool rglSelectDevice(unsigned __int32 uniqueID);
extern bool setupPixelFormat(unsigned __int32 planes);
extern bool rglSetupPalette();
extern void rglGetPixelFormat(PixelFormatDescriptor *pfd);
extern void rglSetVSync(bool sync);
extern bool haveExtension(char const *extName);
extern float rglGetVersion(unsigned __int32 &mainVersion, unsigned __int32 &subVersion, unsigned __int32 &revision);
extern char const *GL_getSystemDir();
extern bool GL_dllIsOlder(char const *name, unsigned __int32 version);
extern void GL_setAssumedDriverVersion(unsigned __int32 ver);
extern void GL_setAssumedDriverDLL(char const *dll);
extern char const *GL_getAssumedDriverDLL();
extern bool rglNeedNewerDriver();
extern void printRenderingInfo();
extern bool rglAttachToWindow(unsigned __int32 const &win, unsigned __int32 const &instance, unsigned __int32 planes);
extern bool rglDetachFromWindow();
extern void rglSetGamma(float gamma);
extern float rglGetGamma();
extern char const *rglGetFunctionName(long address);
extern bool rglWorkedAroundBadDrivers();
extern bool rglDisabledEmulatedFeatures();
extern bool rglCardIsPCI();
extern bool rglMeetsMinSpec(eMinSpec requirement);
extern bool setupFunctionTable(void *fnTable);
extern __int32 DllMain(void *hInstance, unsigned long reason, void *reserved);

_static void ntFixup();
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getDLLVersion(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name);
_static bool dllIsOlder(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, unsigned __int32 minVersion);
_static unsigned __int32 getAssumedLatestDllVersion();
_static bool driverConfig();

/* ---------- globals */

extern void (*glVertexAttribPointerARB)(unsigned __int32, __int32, unsigned __int32, unsigned char, __int32, void const *); // 0x10020D94
extern void (*glEnableVertexAttribArrayARB)(unsigned __int32); // 0x10020D98
extern void (*glDisableVertexAttribArrayARB)(unsigned __int32); // 0x10020D9C
extern bool rglCan[48]; // 0x10020E8C
extern void (*glBindBufferARB)(unsigned __int32, unsigned __int32); // 0x10020E60
extern void (*glDeleteBuffersARB)(__int32, unsigned __int32 const *); // 0x10020E64
extern void (*glGenBuffersARB)(__int32, unsigned __int32 *); // 0x10020E68
extern unsigned char (*glIsBufferARB)(unsigned __int32); // 0x10020E6C
extern void (*glBufferDataARB)(unsigned __int32, __int32, void const *, unsigned __int32); // 0x10020E70
extern void (*glBufferSubDataARB)(unsigned __int32, __int32, __int32, void const *); // 0x10020E74
extern void (*glGetBufferSubDataARB)(unsigned __int32, __int32, __int32, void *); // 0x10020E78
extern void *(*glMapBufferARB)(unsigned __int32, unsigned __int32); // 0x10020E7C
extern unsigned char (*glUnmapBufferARB)(unsigned __int32); // 0x10020E80
extern void (*glGetBufferParameterivARB)(unsigned __int32, unsigned __int32, __int32 *); // 0x10020E84
extern void (*glGetBufferPointervARB)(unsigned __int32, unsigned __int32, void **); // 0x10020E88
extern void (*glNormalPointer)(unsigned __int32, __int32, void const *); // 0x100207FC
extern void (*glTexCoordPointer)(__int32, unsigned __int32, __int32, void const *); // 0x10020990
extern void (*glVertexPointer)(__int32, unsigned __int32, __int32, void const *); // 0x10020A4C
extern void (*glLockArraysEXT)(__int32, __int32); // 0x10020A58
extern void (*glUnlockArraysEXT)(); // 0x10020A5C
extern void (*glVertexArrayRangeNV)(__int32, void *); // 0x10020A80
extern void *(*glsAllocateMemoryNV)(__int32, float, float, float); // 0x10020A88
extern void (*glsFreeMemoryNV)(void *); // 0x10020A8C
extern void (*glColorPointer)(__int32, unsigned __int32, __int32, void const *); // 0x10021000
extern void (*glDisableClientState)(unsigned __int32); // 0x10021038
extern void (*glEnableClientState)(unsigned __int32); // 0x1002105C
extern void (*glPrioritizeTextures)(__int32, unsigned __int32 const *, float const *); // 0x10020848
extern void (*glTexEnvf)(unsigned __int32, unsigned __int32, float); // 0x10020994
extern void (*glTexEnvfv)(unsigned __int32, unsigned __int32, float const *); // 0x10020998
extern void (*glTexEnvi)(unsigned __int32, unsigned __int32, __int32); // 0x1002099C
extern void (*glTexGenfv)(unsigned __int32, unsigned __int32, float const *); // 0x100209B0
extern void (*glTexGeni)(unsigned __int32, unsigned __int32, __int32); // 0x100209B4
extern void (*glTexImage1D)(unsigned __int32, __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209BC
extern void (*glTexImage2D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209C0
extern void (*glTexImage3D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209C4
extern void (*glTexParameterf)(unsigned __int32, unsigned __int32, float); // 0x100209C8
extern void (*glTexParameteri)(unsigned __int32, unsigned __int32, __int32); // 0x100209D0
extern void (*glTexSubImage2D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209DC
extern void (*glActiveTextureARB)(unsigned __int32); // 0x10020A60
extern void (*glClientActiveTextureARB)(unsigned __int32); // 0x10020A64
extern void (*glCompressedTexImage1DARB)(unsigned __int32, __int32, unsigned __int32, __int32, __int32, __int32, void const *); // 0x10020CE0
extern void (*glCompressedTexImage2DARB)(unsigned __int32, __int32, unsigned __int32, __int32, __int32, __int32, __int32, void const *); // 0x10020CE4
extern void (*glCompressedTexImage3DARB)(unsigned __int32, __int32, unsigned __int32, __int32, __int32, __int32, __int32, __int32, void const *); // 0x10020CE8
extern glState rglState; // 0x10021190
extern void (*glBindTexture)(unsigned __int32, unsigned __int32); // 0x10020F44
extern void (*glCopyTexImage2D)(unsigned __int32, __int32, unsigned __int32, __int32, __int32, __int32, __int32, __int32); // 0x1002100C
extern void (*glCopyTexSubImage2D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32); // 0x10021014
extern void (*glDeleteTextures)(__int32, unsigned __int32 const *); // 0x10021024
extern void (*glGenTextures)(__int32, unsigned __int32 *); // 0x100210C0
extern void (*glGetFloatv)(unsigned __int32, float *); // 0x100210D4
extern void (*glProgramStringARB)(unsigned __int32, unsigned __int32, __int32, void const *); // 0x10020DA0
extern void (*glBindProgramARB)(unsigned __int32, unsigned __int32); // 0x10020DA4
extern void (*glDeleteProgramsARB)(__int32, unsigned __int32 const *); // 0x10020DA8
extern void (*glGenProgramsARB)(__int32, unsigned __int32 *); // 0x10020DAC
extern void (*glProgramEnvParameter4fvARB)(unsigned __int32, unsigned __int32, float const *); // 0x10020DBC
extern void (*glProgramLocalParameter4fvARB)(unsigned __int32, unsigned __int32, float const *); // 0x10020DCC
extern void (*glGetProgramEnvParameterfvARB)(unsigned __int32, unsigned __int32, float *); // 0x10020DD4
extern void (*glGetProgramLocalParameterfvARB)(unsigned __int32, unsigned __int32, float *); // 0x10020DDC
extern void (*glGetProgramivARB)(unsigned __int32, unsigned __int32, __int32 *); // 0x10020DE0
extern unsigned char (*glIsProgramARB)(unsigned __int32); // 0x10020DF8
extern void (*glGetIntegerv)(unsigned __int32, __int32 *); // 0x100210D8
extern unsigned char const *(*glGetString)(unsigned __int32); // 0x1002110C
extern void (*glListBase)(unsigned __int32); // 0x1002077C
extern void (*glNewList)(unsigned __int32, unsigned __int32); // 0x100207D0
extern void (*glNormal3fv)(float const *); // 0x100207E8
extern void (*glShadeModel)(unsigned __int32); // 0x10020900
extern void (*glTexCoord2fv)(float const *); // 0x1002093C
extern void (*glVertex2f)(float, float); // 0x100209F4
extern void (*glVertex2fv)(float const *); // 0x100209F8
extern void (*glVertex3fv)(float const *); // 0x10020A18
extern void (*glVertex4fv)(float const *); // 0x10020A38
extern void (*glMultiTexCoord2fvARB)(unsigned __int32, float const *); // 0x10020A70
extern void (*glArrayElement)(__int32); // 0x10020F3C
extern void (*glBegin)(unsigned __int32); // 0x10020F40
extern void (*glCallList)(unsigned __int32); // 0x10020F50
extern void (*glCallLists)(__int32, unsigned __int32, void const *); // 0x10020F54
extern void (*glColor4fv)(float const *); // 0x10020FCC
extern void (*glDeleteLists)(unsigned __int32, __int32); // 0x10021020
extern void (*glDrawArrays)(unsigned __int32, __int32, __int32); // 0x1002103C
extern void (*glDrawElements)(unsigned __int32, __int32, unsigned __int32, void const *); // 0x10021044
extern void (*glEnd)(); // 0x10021060
extern void (*glEndList)(); // 0x10021064
extern unsigned __int32 (*glGenLists)(__int32); // 0x100210BC
extern void (*glViewport)(__int32, __int32, __int32, __int32); // 0x10020A50
extern HPBUFFERARB__ *(*glsCreatePbufferARB)(HDC__ *, __int32, __int32, __int32, __int32 const *); // 0x10020DFC
extern HDC__ *(*glsGetPbufferDCARB)(HPBUFFERARB__ *); // 0x10020E00
extern __int32 (*glsReleasePbufferDCARB)(HPBUFFERARB__ *, HDC__ *); // 0x10020E04
extern __int32 (*glsDestroyPbufferARB)(HPBUFFERARB__ *); // 0x10020E08
extern __int32 (*glsQueryPbufferARB)(HPBUFFERARB__ *, __int32, __int32 *); // 0x10020E0C
extern __int32 (*glsGetPixelFormatAttribivARB)(HDC__ *, __int32, __int32, unsigned __int32, __int32 const *, __int32 *); // 0x10020E10
extern __int32 (*glsChoosePixelFormatARB)(HDC__ *, __int32 const *, float const *, unsigned __int32, __int32 *, unsigned __int32 *); // 0x10020E18
extern __int32 (*glsBindTexImageARB)(HPBUFFERARB__ *, __int32); // 0x10020E1C
extern __int32 (*glsReleaseTexImageARB)(HPBUFFERARB__ *, __int32); // 0x10020E20
extern HDC__ *(*glsGetCurrentDC)(); // 0x10020F00
extern HGLRC__ *(*glsGetCurrentContext)(); // 0x10020F04
extern HGLRC__ *(*glsCreateContext)(HDC__ *); // 0x10020F08
extern __int32 (*glsDeleteContext)(HGLRC__ *); // 0x10020F0C
extern unsigned __int32 (*glsMakeCurrent)(HDC__ *, HGLRC__ *); // 0x10020F14
extern bool (*glsShareLists)(HGLRC__ *, HGLRC__ *); // 0x10020F58
extern void (*glHint)(unsigned __int32, unsigned __int32); // 0x10021138
extern void (*glLightModelfv)(unsigned __int32, float const *); // 0x10020758
extern void (*glLightModeli)(unsigned __int32, __int32); // 0x1002075C
extern void (*glLineWidth)(float); // 0x10020778
extern void (*glMaterialfv)(unsigned __int32, unsigned __int32, float const *); // 0x100207B8
extern void (*glMatrixMode)(unsigned __int32); // 0x100207C4
extern void (*glPixelStorei)(unsigned __int32, __int32); // 0x10020818
extern void (*glPointSize)(float); // 0x10020828
extern void (*glPolygonMode)(unsigned __int32, unsigned __int32); // 0x1002082C
extern void (*glScissor)(__int32, __int32, __int32, __int32); // 0x100208F8
extern void (*glStencilFunc)(unsigned __int32, __int32, unsigned __int32); // 0x10020904
extern void (*glStencilMask)(unsigned __int32); // 0x10020908
extern void (*glStencilOp)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x1002090C
extern HDC__ *rglDeviceContext; // 0x10020EFC
extern __int32 (*glsSwapBuffers)(HDC__ *); // 0x10020F28
extern void (*glAlphaFunc)(unsigned __int32, float); // 0x10020F34
extern void (*glBlendFunc)(unsigned __int32, unsigned __int32); // 0x10020F4C
extern void (*glClear)(unsigned __int32); // 0x10020F5C
extern void (*glClearColor)(float, float, float, float); // 0x10020F64
extern void (*glClearDepth)(double); // 0x10020F68
extern void (*glClearStencil)(__int32); // 0x10020F70
extern void (*glClipPlane)(unsigned __int32, double const *); // 0x10020F74
extern void (*glColorMask)(unsigned char, unsigned char, unsigned char, unsigned char); // 0x10020FF8
extern void (*glCullFace)(unsigned __int32); // 0x1002101C
extern void (*glDepthFunc)(unsigned __int32); // 0x10021028
extern void (*glDepthMask)(unsigned char); // 0x1002102C
extern void (*glDisable)(unsigned __int32); // 0x10021034
extern void (*glEnable)(unsigned __int32); // 0x10021058
extern void (*glFlush)(); // 0x100210A0
extern unsigned __int32 (*glGetError)(); // 0x100210D0
extern void (*glLoadIdentity)(); // 0x10020780
extern void (*glLoadMatrixf)(float const *); // 0x10020788
extern void (*glMultMatrixf)(float const *); // 0x100207CC
extern void (*glOrtho)(double, double, double, double, double, double); // 0x10020800
extern void (*glPopMatrix)(); // 0x10020840
extern void (*glPushMatrix)(); // 0x10020854
extern void (*glRotatef)(float, float, float, float); // 0x100208EC
extern void (*glScalef)(float, float, float); // 0x100208F4
extern void (*glTranslatef)(float, float, float); // 0x100209E8
extern void (*glFrustum)(double, double, double, double, double, double); // 0x100210B8
extern void (*glLightf)(unsigned __int32, unsigned __int32, float); // 0x10020764
extern void (*glLightfv)(unsigned __int32, unsigned __int32, float const *); // 0x10020768
extern void (*glMaterialf)(unsigned __int32, unsigned __int32, float); // 0x100207B4
extern void (*glGetLightfv)(unsigned __int32, unsigned __int32, float *); // 0x100210DC
extern void (*glTexCoord2f)(float, float); // 0x10020938
extern void (*glTexCoord2i)(__int32, __int32); // 0x10020940
extern void (*glVertex3f)(float, float, float); // 0x10020A14
extern void (*glMultiTexCoord2fARB)(unsigned __int32, float, float); // 0x10020A6C
extern void (*glCombinerParameteriNV)(unsigned __int32, __int32); // 0x10020BB0
extern void (*glCombinerInputNV)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020BB4
extern void (*glCombinerOutputNV)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned char, unsigned char, unsigned char); // 0x10020CC0
extern void (*glFinalCombinerInputNV)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020CC4
extern void (*glColor3f)(float, float, float); // 0x10020F88
extern void (*glGetTexEnviv)(unsigned __int32, unsigned __int32, __int32 *); // 0x10021114
extern void (*glCombinerParameterfvNV)(unsigned __int32, float const *); // 0x10020A98
extern void (*glCombinerParameterfNV)(unsigned __int32, float); // 0x10020A9C
extern void (*glCombinerParameterivNV)(unsigned __int32, __int32 const *); // 0x10020AA4
extern void (*glGetCombinerInputParameterfvNV)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, float *); // 0x10020CC8
extern void (*glGetCombinerInputParameterivNV)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, __int32 *); // 0x10020CCC
extern void (*glGetCombinerOutputParameterfvNV)(unsigned __int32, unsigned __int32, unsigned __int32, float *); // 0x10020CD0
extern void (*glGetCombinerOutputParameterivNV)(unsigned __int32, unsigned __int32, unsigned __int32, __int32 *); // 0x10020CD4
extern void (*glGetFinalCombinerInputParameterfvNV)(unsigned __int32, unsigned __int32, float *); // 0x10020CD8
extern void (*glGetFinalCombinerInputParameterivNV)(unsigned __int32, unsigned __int32, __int32 *); // 0x10020CDC
extern void (*glCombinerStageParameterfvNV)(unsigned __int32, unsigned __int32, float const *); // 0x10020CFC
extern void (*glGetCombinerStageParameterfvNV)(unsigned __int32, unsigned __int32, float *); // 0x10020D00
extern void (*glReadPixels)(__int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void *); // 0x100208C0
extern void (*glFogf)(unsigned __int32, float); // 0x100210A4
extern void (*glFogfv)(unsigned __int32, float const *); // 0x100210A8
extern void (*glFogi)(unsigned __int32, __int32); // 0x100210AC
extern void (*glPolygonOffset)(float, float); // 0x10020830
extern void (*glPopAttrib)(); // 0x10020838
extern void (*glPopClientAttrib)(); // 0x1002083C
extern void (*glPushAttrib)(unsigned __int32); // 0x1002084C
extern void (*glPushClientAttrib)(unsigned __int32); // 0x10020850
extern stdext::hash_map<unsigned int,CapMapTable *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,CapMapTable *> > > rglCapMap; // 0x10021408
extern bool rglNotEmulated[48]; // 0x10020EBC
extern void (*glColorMaterial)(unsigned __int32, unsigned __int32); // 0x10020FFC
extern std::vector<CapMapTable,std::allocator<CapMapTable> > rglCapTable; // 0x10021184
extern unsigned char (*glIsTexture)(unsigned __int32); // 0x10020750
extern void (*glLightModelf)(unsigned __int32, float); // 0x10020754
extern void (*glLightModeliv)(unsigned __int32, __int32 const *); // 0x10020760
extern void (*glLighti)(unsigned __int32, unsigned __int32, __int32); // 0x1002076C
extern void (*glLightiv)(unsigned __int32, unsigned __int32, __int32 const *); // 0x10020770
extern void (*glLineStipple)(__int32, unsigned short); // 0x10020774
extern void (*glLoadMatrixd)(double const *); // 0x10020784
extern void (*glLoadName)(unsigned __int32); // 0x1002078C
extern void (*glLogicOp)(unsigned __int32); // 0x10020790
extern void (*glMap1d)(unsigned __int32, double, double, __int32, __int32, double const *); // 0x10020794
extern void (*glMap1f)(unsigned __int32, float, float, __int32, __int32, float const *); // 0x10020798
extern void (*glMap2d)(unsigned __int32, double, double, __int32, __int32, double, double, __int32, __int32, double const *); // 0x1002079C
extern void (*glMap2f)(unsigned __int32, float, float, __int32, __int32, float, float, __int32, __int32, float const *); // 0x100207A0
extern void (*glMapGrid1d)(__int32, double, double); // 0x100207A4
extern void (*glMapGrid1f)(__int32, float, float); // 0x100207A8
extern void (*glMapGrid2d)(__int32, double, double, __int32, double, double); // 0x100207AC
extern void (*glMapGrid2f)(__int32, float, float, __int32, float, float); // 0x100207B0
extern void (*glMateriali)(unsigned __int32, unsigned __int32, __int32); // 0x100207BC
extern void (*glMaterialiv)(unsigned __int32, unsigned __int32, __int32 const *); // 0x100207C0
extern void (*glMultMatrixd)(double const *); // 0x100207C8
extern void (*glNormal3b)(char, char, char); // 0x100207D4
extern void (*glNormal3bv)(char const *); // 0x100207D8
extern void (*glNormal3d)(double, double, double); // 0x100207DC
extern void (*glNormal3dv)(double const *); // 0x100207E0
extern void (*glNormal3f)(float, float, float); // 0x100207E4
extern void (*glNormal3i)(__int32, __int32, __int32); // 0x100207EC
extern void (*glNormal3iv)(__int32 const *); // 0x100207F0
extern void (*glNormal3s)(short, short, short); // 0x100207F4
extern void (*glNormal3sv)(short const *); // 0x100207F8
extern void (*glPassThrough)(float); // 0x10020804
extern void (*glPixelMapfv)(unsigned __int32, __int32, float const *); // 0x10020808
extern void (*glPixelMapuiv)(unsigned __int32, __int32, unsigned __int32 const *); // 0x1002080C
extern void (*glPixelMapusv)(unsigned __int32, __int32, unsigned short const *); // 0x10020810
extern void (*glPixelStoref)(unsigned __int32, float); // 0x10020814
extern void (*glPixelTransferf)(unsigned __int32, float); // 0x1002081C
extern void (*glPixelTransferi)(unsigned __int32, __int32); // 0x10020820
extern void (*glPixelZoom)(float, float); // 0x10020824
extern void (*glPolygonStipple)(unsigned char const *); // 0x10020834
extern void (*glPopName)(); // 0x10020844
extern void (*glPushName)(unsigned __int32); // 0x10020858
extern void (*glRasterPos2d)(double, double); // 0x1002085C
extern void (*glRasterPos2dv)(double const *); // 0x10020860
extern void (*glRasterPos2f)(float, float); // 0x10020864
extern void (*glRasterPos2fv)(float const *); // 0x10020868
extern void (*glRasterPos2i)(__int32, __int32); // 0x1002086C
extern void (*glRasterPos2iv)(__int32 const *); // 0x10020870
extern void (*glRasterPos2s)(short, short); // 0x10020874
extern void (*glRasterPos2sv)(short const *); // 0x10020878
extern void (*glRasterPos3d)(double, double, double); // 0x1002087C
extern void (*glRasterPos3dv)(double const *); // 0x10020880
extern void (*glRasterPos3f)(float, float, float); // 0x10020884
extern void (*glRasterPos3fv)(float const *); // 0x10020888
extern void (*glRasterPos3i)(__int32, __int32, __int32); // 0x1002088C
extern void (*glRasterPos3iv)(__int32 const *); // 0x10020890
extern void (*glRasterPos3s)(short, short, short); // 0x10020894
extern void (*glRasterPos3sv)(short const *); // 0x10020898
extern void (*glRasterPos4d)(double, double, double, double); // 0x1002089C
extern void (*glRasterPos4dv)(double const *); // 0x100208A0
extern void (*glRasterPos4f)(float, float, float, float); // 0x100208A4
extern void (*glRasterPos4fv)(float const *); // 0x100208A8
extern void (*glRasterPos4i)(__int32, __int32, __int32, __int32); // 0x100208AC
extern void (*glRasterPos4iv)(__int32 const *); // 0x100208B0
extern void (*glRasterPos4s)(short, short, short, short); // 0x100208B4
extern void (*glRasterPos4sv)(short const *); // 0x100208B8
extern void (*glReadBuffer)(unsigned __int32); // 0x100208BC
extern void (*glRectd)(double, double, double, double); // 0x100208C4
extern void (*glRectdv)(double const *, double const *); // 0x100208C8
extern void (*glRectf)(float, float, float, float); // 0x100208CC
extern void (*glRectfv)(float const *, float const *); // 0x100208D0
extern void (*glRecti)(__int32, __int32, __int32, __int32); // 0x100208D4
extern void (*glRectiv)(__int32 const *, __int32 const *); // 0x100208D8
extern void (*glRects)(short, short, short, short); // 0x100208DC
extern void (*glRectsv)(short const *, short const *); // 0x100208E0
extern __int32 (*glRenderMode)(unsigned __int32); // 0x100208E4
extern void (*glRotated)(double, double, double, double); // 0x100208E8
extern void (*glScaled)(double, double, double); // 0x100208F0
extern void (*glSelectBuffer)(__int32, unsigned __int32 *); // 0x100208FC
extern void (*glTexCoord1d)(double); // 0x10020910
extern void (*glTexCoord1dv)(double const *); // 0x10020914
extern void (*glTexCoord1f)(float); // 0x10020918
extern void (*glTexCoord1fv)(float const *); // 0x1002091C
extern void (*glTexCoord1i)(__int32); // 0x10020920
extern void (*glTexCoord1iv)(__int32 const *); // 0x10020924
extern void (*glTexCoord1s)(short); // 0x10020928
extern void (*glTexCoord1sv)(short const *); // 0x1002092C
extern void (*glTexCoord2d)(double, double); // 0x10020930
extern void (*glTexCoord2dv)(double const *); // 0x10020934
extern void (*glTexCoord2iv)(__int32 const *); // 0x10020944
extern void (*glTexCoord2s)(short, short); // 0x10020948
extern void (*glTexCoord2sv)(short const *); // 0x1002094C
extern void (*glTexCoord3d)(double, double, double); // 0x10020950
extern void (*glTexCoord3dv)(double const *); // 0x10020954
extern void (*glTexCoord3f)(float, float, float); // 0x10020958
extern void (*glTexCoord3fv)(float const *); // 0x1002095C
extern void (*glTexCoord3i)(__int32, __int32, __int32); // 0x10020960
extern void (*glTexCoord3iv)(__int32 const *); // 0x10020964
extern void (*glTexCoord3s)(short, short, short); // 0x10020968
extern void (*glTexCoord3sv)(short const *); // 0x1002096C
extern void (*glTexCoord4d)(double, double, double, double); // 0x10020970
extern void (*glTexCoord4dv)(double const *); // 0x10020974
extern void (*glTexCoord4f)(float, float, float, float); // 0x10020978
extern void (*glTexCoord4fv)(float const *); // 0x1002097C
extern void (*glTexCoord4i)(__int32, __int32, __int32, __int32); // 0x10020980
extern void (*glTexCoord4iv)(__int32 const *); // 0x10020984
extern void (*glTexCoord4s)(short, short, short, short); // 0x10020988
extern void (*glTexCoord4sv)(short const *); // 0x1002098C
extern void (*glTexEnviv)(unsigned __int32, unsigned __int32, __int32 const *); // 0x100209A0
extern void (*glTexGend)(unsigned __int32, unsigned __int32, double); // 0x100209A4
extern void (*glTexGendv)(unsigned __int32, unsigned __int32, double const *); // 0x100209A8
extern void (*glTexGenf)(unsigned __int32, unsigned __int32, float); // 0x100209AC
extern void (*glTexGeniv)(unsigned __int32, unsigned __int32, __int32 const *); // 0x100209B8
extern void (*glTexParameterfv)(unsigned __int32, unsigned __int32, float const *); // 0x100209CC
extern void (*glTexParameteriv)(unsigned __int32, unsigned __int32, __int32 const *); // 0x100209D4
extern void (*glTexSubImage1D)(unsigned __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209D8
extern void (*glTexSubImage3D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x100209E0
extern void (*glTranslated)(double, double, double); // 0x100209E4
extern void (*glVertex2d)(double, double); // 0x100209EC
extern void (*glVertex2dv)(double const *); // 0x100209F0
extern void (*glVertex2i)(__int32, __int32); // 0x100209FC
extern void (*glVertex2iv)(__int32 const *); // 0x10020A00
extern void (*glVertex2s)(short, short); // 0x10020A04
extern void (*glVertex2sv)(short const *); // 0x10020A08
extern void (*glVertex3d)(double, double, double); // 0x10020A0C
extern void (*glVertex3dv)(double const *); // 0x10020A10
extern void (*glVertex3i)(__int32, __int32, __int32); // 0x10020A1C
extern void (*glVertex3iv)(__int32 const *); // 0x10020A20
extern void (*glVertex3s)(short, short, short); // 0x10020A24
extern void (*glVertex3sv)(short const *); // 0x10020A28
extern void (*glVertex4d)(double, double, double, double); // 0x10020A2C
extern void (*glVertex4dv)(double const *); // 0x10020A30
extern void (*glVertex4f)(float, float, float, float); // 0x10020A34
extern void (*glVertex4i)(__int32, __int32, __int32, __int32); // 0x10020A3C
extern void (*glVertex4iv)(__int32 const *); // 0x10020A40
extern void (*glVertex4s)(short, short, short, short); // 0x10020A44
extern void (*glVertex4sv)(short const *); // 0x10020A48
extern void (*glColorTableEXT)(unsigned __int32, unsigned __int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x10020A54
extern void (*glMultiTexCoord2iARB)(unsigned __int32, __int32, __int32); // 0x10020A78
extern void (*glMultiTexCoord2ivARB)(unsigned __int32, __int32 const *); // 0x10020A7C
extern void (*glFlushVertexArrayRangeNV)(); // 0x10020A84
extern __int32 (*glsSwapIntervalEXT)(__int32); // 0x10020A90
extern __int32 (*glsGetSwapIntervalEXT)(); // 0x10020A94
extern char const *rglStrExtensionsSystem; // 0x10020AA0
extern char rglSystemDir[261]; // 0x10020AA8
extern char rglDriverDLL[261]; // 0x10020BB8
extern void (*glCompressedTexSubImage1DARB)(unsigned __int32, __int32, __int32, __int32, unsigned __int32, __int32, void const *); // 0x10020CEC
extern void (*glCompressedTexSubImage2DARB)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, __int32, void const *); // 0x10020CF0
extern void (*glCompressedTexSubImage3DARB)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32, unsigned __int32, __int32, void const *); // 0x10020CF4
extern void (*glGetCompressedTexImageARB)(unsigned __int32, __int32, void *); // 0x10020CF8
extern void (*glVertexAttrib1sARB)(unsigned __int32, short); // 0x10020D04
extern void (*glVertexAttrib1fARB)(unsigned __int32, float); // 0x10020D08
extern void (*glVertexAttrib1dARB)(unsigned __int32, double); // 0x10020D0C
extern void (*glVertexAttrib2sARB)(unsigned __int32, short, short); // 0x10020D10
extern void (*glVertexAttrib2fARB)(unsigned __int32, float, float); // 0x10020D14
extern void (*glVertexAttrib2dARB)(unsigned __int32, double, double); // 0x10020D18
extern void (*glVertexAttrib3sARB)(unsigned __int32, short, short, short); // 0x10020D1C
extern void (*glVertexAttrib3fARB)(unsigned __int32, float, float, float); // 0x10020D20
extern void (*glVertexAttrib3dARB)(unsigned __int32, double, double, double); // 0x10020D24
extern void (*glVertexAttrib4sARB)(unsigned __int32, short, short, short, short); // 0x10020D28
extern void (*glVertexAttrib4fARB)(unsigned __int32, float, float, float, float); // 0x10020D2C
extern void (*glVertexAttrib4dARB)(unsigned __int32, double, double, double, double); // 0x10020D30
extern glDynaloadTable glRequiredFunctionTable[349]; // 0x1001F3C8
extern void (*glVertexAttrib4NubARB)(unsigned __int32, unsigned char, unsigned char, unsigned char, unsigned char); // 0x10020D34
extern void (*glVertexAttrib1svARB)(unsigned __int32, short const *); // 0x10020D38
extern void (*glVertexAttrib1fvARB)(unsigned __int32, float const *); // 0x10020D3C
extern void (*glVertexAttrib1dvARB)(unsigned __int32, double const *); // 0x10020D40
extern void (*glVertexAttrib2svARB)(unsigned __int32, short const *); // 0x10020D44
extern void (*glVertexAttrib2fvARB)(unsigned __int32, float const *); // 0x10020D48
extern void (*glVertexAttrib2dvARB)(unsigned __int32, double const *); // 0x10020D4C
extern void (*glVertexAttrib3svARB)(unsigned __int32, short const *); // 0x10020D50
extern void (*glVertexAttrib3fvARB)(unsigned __int32, float const *); // 0x10020D54
extern void (*glVertexAttrib3dvARB)(unsigned __int32, double const *); // 0x10020D58
extern void (*glVertexAttrib4bvARB)(unsigned __int32, char const *); // 0x10020D5C
extern void (*glVertexAttrib4svARB)(unsigned __int32, short const *); // 0x10020D60
extern void (*glVertexAttrib4ivARB)(unsigned __int32, __int32 const *); // 0x10020D64
extern void (*glVertexAttrib4ubvARB)(unsigned __int32, unsigned char const *); // 0x10020D68
extern void (*glVertexAttrib4usvARB)(unsigned __int32, unsigned short const *); // 0x10020D6C
extern void (*glVertexAttrib4uivARB)(unsigned __int32, unsigned __int32 const *); // 0x10020D70
extern void (*glVertexAttrib4fvARB)(unsigned __int32, float const *); // 0x10020D74
extern void (*glVertexAttrib4dvARB)(unsigned __int32, double const *); // 0x10020D78
extern void (*glVertexAttrib4NbvARB)(unsigned __int32, char const *); // 0x10020D7C
extern void (*glVertexAttrib4NsvARB)(unsigned __int32, short const *); // 0x10020D80
extern void (*glVertexAttrib4NivARB)(unsigned __int32, __int32 const *); // 0x10020D84
extern void (*glVertexAttrib4NubvARB)(unsigned __int32, unsigned char const *); // 0x10020D88
extern void (*glVertexAttrib4NusvARB)(unsigned __int32, unsigned short const *); // 0x10020D8C
extern void (*glVertexAttrib4NuivARB)(unsigned __int32, unsigned __int32 const *); // 0x10020D90
extern void (*glProgramEnvParameter4dARB)(unsigned __int32, unsigned __int32, double, double, double, double); // 0x10020DB0
extern void (*glProgramEnvParameter4dvARB)(unsigned __int32, unsigned __int32, double const *); // 0x10020DB4
extern void (*glProgramEnvParameter4fARB)(unsigned __int32, unsigned __int32, float, float, float, float); // 0x10020DB8
extern void (*glProgramLocalParameter4dARB)(unsigned __int32, unsigned __int32, double, double, double, double); // 0x10020DC0
extern void (*glProgramLocalParameter4dvARB)(unsigned __int32, unsigned __int32, double const *); // 0x10020DC4
extern void (*glProgramLocalParameter4fARB)(unsigned __int32, unsigned __int32, float, float, float, float); // 0x10020DC8
extern void (*glGetProgramEnvParameterdvARB)(unsigned __int32, unsigned __int32, double *); // 0x10020DD0
extern void (*glGetProgramLocalParameterdvARB)(unsigned __int32, unsigned __int32, double *); // 0x10020DD8
extern void (*glGetProgramStringARB)(unsigned __int32, unsigned __int32, void *); // 0x10020DE4
extern void (*glGetVertexAttribdvARB)(unsigned __int32, unsigned __int32, double *); // 0x10020DE8
extern void (*glGetVertexAttribfvARB)(unsigned __int32, unsigned __int32, float *); // 0x10020DEC
extern void (*glGetVertexAttribivARB)(unsigned __int32, unsigned __int32, __int32 *); // 0x10020DF0
extern void (*glGetVertexAttribPointervARB)(unsigned __int32, unsigned __int32, void **); // 0x10020DF4
extern __int32 (*glsGetPixelFormatAttribfvARB)(HDC__ *, __int32, __int32, unsigned __int32, __int32 const *, float *); // 0x10020E14
extern __int32 (*glsSetPbufferAttribARB)(HPBUFFERARB__ *, __int32 const *); // 0x10020E24
extern __int32 (*glSampleCoverageARB)(float, unsigned char); // 0x10020E28
extern unsigned __int32 (*glGenFragmentShadersATI)(unsigned __int32); // 0x10020E2C
extern void (*glDeleteFragmentShaderATI)(unsigned __int32); // 0x10020E30
extern void (*glBeginFragmentShaderATI)(); // 0x10020E34
extern void (*glEndFragmentShaderATI)(); // 0x10020E38
extern void (*glPassTexCoordATI)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E3C
extern void (*glSampleMapATI)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E40
extern void (*glColorFragmentOp1ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E44
extern void (*glColorFragmentOp2ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E48
extern void (*glColorFragmentOp3ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E4C
extern void (*glAlphaFragmentOp1ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E50
extern void (*glAlphaFragmentOp2ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E54
extern void (*glAlphaFragmentOp3ATI)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020E58
extern void (*glSetFragmentShaderConstantATI)(unsigned __int32, float const *); // 0x10020E5C
extern char const *rglStrVendor; // 0x10020EEC
extern char const *rglStrVersion; // 0x10020EF0
extern char const *rglStrRenderer; // 0x10020EF4
extern char const *rglStrExtensions; // 0x10020EF8
extern std::vector<NameReference,std::allocator<NameReference> > g_nameReference; // 0x10021428
extern void (*(*glsGetProcAddress)(char *))(); // 0x10020F10
extern __int32 (*glsChoosePixelFormat)(HDC__ *, tagPIXELFORMATDESCRIPTOR const *); // 0x10020F18
extern __int32 (*glsSetPixelFormat)(HDC__ *, __int32, tagPIXELFORMATDESCRIPTOR const *); // 0x10020F1C
extern __int32 (*glsGetPixelFormat)(HDC__ *); // 0x10020F20
extern __int32 (*glsDescribePixelFormat)(HDC__ *, __int32, unsigned __int32, tagPIXELFORMATDESCRIPTOR *); // 0x10020F24
extern char const *(*glsGetExtensionsStringARB)(HDC__ *); // 0x10020F2C
extern void (*glAccum)(unsigned __int32, float); // 0x10020F30
extern unsigned char (*glAreTexturesResident)(__int32, unsigned __int32 const *, unsigned char *); // 0x10020F38
extern void (*glBitmap)(__int32, __int32, float, float, float, float, unsigned char const *); // 0x10020F48
extern void (*glClearAccum)(float, float, float, float); // 0x10020F60
extern void (*glClearIndex)(float); // 0x10020F6C
extern void (*glColor3b)(char, char, char); // 0x10020F78
extern void (*glColor3bv)(char const *); // 0x10020F7C
extern void (*glColor3d)(double, double, double); // 0x10020F80
extern void (*glColor3dv)(double const *); // 0x10020F84
extern void (*glColor3fv)(float const *); // 0x10020F8C
extern void (*glColor3i)(__int32, __int32, __int32); // 0x10020F90
extern void (*glColor3iv)(__int32 const *); // 0x10020F94
extern void (*glColor3s)(short, short, short); // 0x10020F98
extern void (*glColor3sv)(short const *); // 0x10020F9C
extern void (*glColor3ub)(unsigned char, unsigned char, unsigned char); // 0x10020FA0
extern void (*glColor3ubv)(unsigned char const *); // 0x10020FA4
extern void (*glColor3ui)(unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020FA8
extern void (*glColor3uiv)(unsigned __int32 const *); // 0x10020FAC
extern void (*glColor3us)(unsigned short, unsigned short, unsigned short); // 0x10020FB0
extern void (*glColor3usv)(unsigned short const *); // 0x10020FB4
extern void (*glColor4b)(char, char, char, char); // 0x10020FB8
extern void (*glColor4bv)(char const *); // 0x10020FBC
extern void (*glColor4d)(double, double, double, double); // 0x10020FC0
extern void (*glColor4dv)(double const *); // 0x10020FC4
extern void (*glColor4f)(float, float, float, float); // 0x10020FC8
extern void (*glColor4i)(__int32, __int32, __int32, __int32); // 0x10020FD0
extern void (*glColor4iv)(__int32 const *); // 0x10020FD4
extern void (*glColor4s)(short, short, short, short); // 0x10020FD8
extern void (*glColor4sv)(short const *); // 0x10020FDC
extern void (*glColor4ub)(unsigned char, unsigned char, unsigned char, unsigned char); // 0x10020FE0
extern void (*glColor4ubv)(unsigned char const *); // 0x10020FE4
extern void (*glColor4ui)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x10020FE8
extern void (*glColor4uiv)(unsigned __int32 const *); // 0x10020FEC
extern void (*glColor4us)(unsigned short, unsigned short, unsigned short, unsigned short); // 0x10020FF0
extern void (*glColor4usv)(unsigned short const *); // 0x10020FF4
extern void (*glCopyPixels)(__int32, __int32, __int32, __int32, unsigned __int32); // 0x10021004
extern void (*glCopyTexImage1D)(unsigned __int32, __int32, unsigned __int32, __int32, __int32, __int32, __int32); // 0x10021008
extern void (*glCopyTexSubImage1D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32); // 0x10021010
extern void (*glCopyTexSubImage3D)(unsigned __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32, __int32); // 0x10021018
extern glDynaloadTable glNonRequiredFunctionTable[141]; // 0x1001FEB8
extern void (*glDepthRange)(double, double); // 0x10021030
extern void (*glDrawBuffer)(unsigned __int32); // 0x10021040
extern void (*glDrawPixels)(__int32, __int32, unsigned __int32, unsigned __int32, void const *); // 0x10021048
extern void (*glEdgeFlag)(unsigned char); // 0x1002104C
extern void (*glEdgeFlagPointer)(__int32, void const *); // 0x10021050
extern void (*glEdgeFlagv)(unsigned char const *); // 0x10021054
extern void (*glEvalCoord1d)(double); // 0x10021068
extern void (*glEvalCoord1dv)(double const *); // 0x1002106C
extern void (*glEvalCoord1f)(float); // 0x10021070
extern void (*glEvalCoord1fv)(float const *); // 0x10021074
extern void (*glEvalCoord2d)(double, double); // 0x10021078
extern void (*glEvalCoord2dv)(double const *); // 0x1002107C
extern void (*glEvalCoord2f)(float, float); // 0x10021080
extern void (*glEvalCoord2fv)(float const *); // 0x10021084
extern void (*glEvalMesh1)(unsigned __int32, __int32, __int32); // 0x10021088
extern void (*glEvalMesh2)(unsigned __int32, __int32, __int32, __int32, __int32); // 0x1002108C
extern void (*glEvalPoint1)(__int32); // 0x10021090
extern void (*glEvalPoint2)(__int32, __int32); // 0x10021094
extern void (*glFeedbackBuffer)(__int32, unsigned __int32, float *); // 0x10021098
extern void (*glFinish)(); // 0x1002109C
extern void (*glFogiv)(unsigned __int32, __int32 const *); // 0x100210B0
extern void (*glFrontFace)(unsigned __int32); // 0x100210B4
extern void (*glGetBooleanv)(unsigned __int32, unsigned char *); // 0x100210C4
extern void (*glGetClipPlane)(unsigned __int32, double *); // 0x100210C8
extern void (*glGetDoublev)(unsigned __int32, double *); // 0x100210CC
extern void (*glGetLightiv)(unsigned __int32, unsigned __int32, __int32 *); // 0x100210E0
extern void (*glGetMapdv)(unsigned __int32, unsigned __int32, double *); // 0x100210E4
extern void (*glGetMapfv)(unsigned __int32, unsigned __int32, float *); // 0x100210E8
extern void (*glGetMapiv)(unsigned __int32, unsigned __int32, __int32 *); // 0x100210EC
extern void (*glGetMaterialfv)(unsigned __int32, unsigned __int32, float *); // 0x100210F0
extern void (*glGetMaterialiv)(unsigned __int32, unsigned __int32, __int32 *); // 0x100210F4
extern void (*glGetPixelMapfv)(unsigned __int32, float *); // 0x100210F8
extern void (*glGetPixelMapuiv)(unsigned __int32, unsigned __int32 *); // 0x100210FC
extern void (*glGetPixelMapusv)(unsigned __int32, unsigned short *); // 0x10021100
extern void (*glGetPointerv)(unsigned __int32, void **); // 0x10021104
extern void (*glGetPolygonStipple)(unsigned char *); // 0x10021108
extern void (*glGetTexEnvfv)(unsigned __int32, unsigned __int32, float *); // 0x10021110
extern void (*glGetTexGendv)(unsigned __int32, unsigned __int32, double *); // 0x10021118
extern void (*glGetTexGenfv)(unsigned __int32, unsigned __int32, float *); // 0x1002111C
extern void (*glGetTexGeniv)(unsigned __int32, unsigned __int32, __int32 *); // 0x10021120
extern void (*glGetTexImage)(unsigned __int32, __int32, unsigned __int32, unsigned __int32, void *); // 0x10021124
extern void (*glGetTexLevelParameterfv)(unsigned __int32, __int32, unsigned __int32, float *); // 0x10021128
extern void (*glGetTexLevelParameteriv)(unsigned __int32, __int32, unsigned __int32, __int32 *); // 0x1002112C
extern void (*glGetTexParameterfv)(unsigned __int32, unsigned __int32, float *); // 0x10021130
extern void (*glGetTexParameteriv)(unsigned __int32, unsigned __int32, __int32 *); // 0x10021134
extern void (*glIndexMask)(unsigned __int32); // 0x1002113C
extern void (*glIndexPointer)(unsigned __int32, __int32, void const *); // 0x10021140
extern void (*glIndexd)(double); // 0x10021144
extern void (*glIndexdv)(double const *); // 0x10021148
extern void (*glIndexf)(float); // 0x1002114C
extern void (*glIndexfv)(float const *); // 0x10021150
extern void (*glIndexi)(__int32); // 0x10021154
extern void (*glIndexiv)(__int32 const *); // 0x10021158
extern void (*glIndexs)(short); // 0x1002115C
extern void (*glIndexsv)(short const *); // 0x10021160
extern void (*glIndexub)(unsigned char); // 0x10021164
extern void (*glIndexubv)(unsigned char const *); // 0x10021168
extern void (*glInitNames)(); // 0x1002116C
extern void (*glInterleavedArrays)(unsigned __int32, __int32, void const *); // 0x10021170
extern unsigned char (*glIsEnabled)(unsigned __int32); // 0x10021174
extern unsigned char (*glIsList)(unsigned __int32); // 0x10021178

/* ---------- private variables */

_static
{
    extern bool s_badDriversWorkedAround; // 0x10020A68
    extern bool s_disabledEmulatedFeatures; // 0x10020A69
    extern unsigned __int32 s_assumedDriverVersion; // 0x10020A74
    extern bool suppressDriverMessage; // 0x10020A6A
    extern PixelFormatDescriptor dd; // 0x10021434
    extern unsigned __int32 attachedWindow; // 0x1002144C
    extern unsigned __int32 attachedInstance; // 0x10021450
    extern HGLRC__ *renderContext; // 0x10021454
    extern bool attachedToWindow; // 0x10021458
    extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > errorString; // 0x10020320
    extern unsigned __int32 uniqueDeviceID; // 0x1002145C
    extern void *glHandle; // 0x10021460
    extern std::list<rndloDevice,std::allocator<rndloDevice> > deviceList; // 0x1002117C
    extern float s_gamma; // 0x1001FEB0
    extern unsigned short s_origGammaRamp[768]; // 0x10021468
}

/* ---------- public code */

_extern unsigned __int32 _sub_1000664D();
unsigned __int32 getLibraryID() // 0x1000664D
{
    mangled_assert("_getLibraryID");
    todo("implement");
    unsigned __int32 __result = _sub_1000664D();
    return __result;
}

_extern void _sub_10006326(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void rglSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &_errorString) // 0x10006326
{
    mangled_assert("?rglSetError@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_10006326(_errorString);
}

_extern void _sub_100062CE(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
void rglSetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &err0, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &err1) // 0x100062CE
{
    mangled_assert("?rglSetError@@YGXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z");
    todo("implement");
    _sub_100062CE(err0, err1);
}

_extern void _sub_10006390(char const *);
void rglSetError(char const *_errorString) // 0x10006390
{
    mangled_assert("?rglSetError@@YGXPBD@Z");
    todo("implement");
    _sub_10006390(_errorString);
}

_extern void _sub_10006343(char const *, char const *);
void rglSetError(char const *err0, char const *err1) // 0x10006343
{
    mangled_assert("?rglSetError@@YGXPBD0@Z");
    todo("implement");
    _sub_10006343(err0, err1);
}

_extern void _sub_10005F58(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
void rglGetError(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &_errorString) // 0x10005F58
{
    mangled_assert("?rglGetError@@YGXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    _sub_10005F58(_errorString);
}

_extern char const *_sub_10005FD9(IdentifierString);
char const *rglGetString(IdentifierString s) // 0x10005FD9
{
    mangled_assert("?rglGetString@@YGPBDW4IdentifierString@@@Z");
    todo("implement");
    char const * __result = _sub_10005FD9(s);
    return __result;
}

_extern bool _sub_10003E98();
bool GL_workedAroundBadDriver() // 0x10003E98
{
    mangled_assert("?GL_workedAroundBadDriver@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10003E98();
    return __result;
}

_extern void _sub_10003E90();
void GL_suppressDriverError() // 0x10003E90
{
    mangled_assert("?GL_suppressDriverError@@YGXXZ");
    todo("implement");
    _sub_10003E90();
}

_extern bool _sub_10003DBD();
bool GL_disabledEmulatedFeatures() // 0x10003DBD
{
    mangled_assert("?GL_disabledEmulatedFeatures@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10003DBD();
    return __result;
}

_extern unsigned __int32 _sub_10004F36();
unsigned __int32 makeUniqueDeviceIdentifier() // 0x10004F36
{
    mangled_assert("?makeUniqueDeviceIdentifier@@YGIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10004F36();
    return __result;
}

_extern bool _sub_10005E0D();
bool rglEnumerateDevicesHelper() // 0x10005E0D
{
    mangled_assert("?rglEnumerateDevicesHelper@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005E0D();
    return __result;
}

_extern std::list<rndloDevice,std::allocator<rndloDevice> > const &_sub_10005DE4();
std::list<rndloDevice,std::allocator<rndloDevice> > const &rglEnumerateDevices() // 0x10005DE4
{
    mangled_assert("?rglEnumerateDevices@@YGABV?$list@UrndloDevice@@V?$allocator@UrndloDevice@@@std@@@std@@XZ");
    todo("implement");
    std::list<rndloDevice,std::allocator<rndloDevice> > const & __result = _sub_10005DE4();
    return __result;
}

_extern bool _sub_10003E37();
bool GL_osNT() // 0x10003E37
{
    mangled_assert("?GL_osNT@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10003E37();
    return __result;
}

_extern void *_sub_10004ED0(unsigned __int32);
void *loadDevice(unsigned __int32 uniqueID) // 0x10004ED0
{
    mangled_assert("?loadDevice@@YGPAXI@Z");
    todo("implement");
    void * __result = _sub_10004ED0(uniqueID);
    return __result;
}

_extern bool _sub_10005F2C();
bool rglFreeDevice() // 0x10005F2C
{
    mangled_assert("?rglFreeDevice@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005F2C();
    return __result;
}

_extern bool _sub_10004CD8(glDynaloadTable *);
bool glDynaload(glDynaloadTable *glTable) // 0x10004CD8
{
    mangled_assert("?glDynaload@@YG_NPAUglDynaloadTable@@@Z");
    todo("implement");
    bool __result = _sub_10004CD8(glTable);
    return __result;
}

_extern void _sub_10004D49(glDynaloadTable *);
void glsDynaload(glDynaloadTable *glTable) // 0x10004D49
{
    mangled_assert("?glsDynaload@@YGXPAUglDynaloadTable@@@Z");
    todo("implement");
    _sub_10004D49(glTable);
}

_extern bool _sub_1000626A(unsigned __int32);
bool rglSelectDevice(unsigned __int32 uniqueID) // 0x1000626A
{
    mangled_assert("?rglSelectDevice@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_1000626A(uniqueID);
    return __result;
}

_extern bool _sub_10006571(unsigned __int32);
bool setupPixelFormat(unsigned __int32 planes) // 0x10006571
{
    mangled_assert("?setupPixelFormat@@YG_NI@Z");
    todo("implement");
    bool __result = _sub_10006571(planes);
    return __result;
}

_extern bool _sub_100064B3();
bool rglSetupPalette() // 0x100064B3
{
    mangled_assert("?rglSetupPalette@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100064B3();
    return __result;
}

_extern void _sub_10005FBD(PixelFormatDescriptor *);
void rglGetPixelFormat(PixelFormatDescriptor *pfd) // 0x10005FBD
{
    mangled_assert("?rglGetPixelFormat@@YGXPAUPixelFormatDescriptor@@@Z");
    todo("implement");
    _sub_10005FBD(pfd);
}

_extern void _sub_1000649B(bool);
void rglSetVSync(bool sync) // 0x1000649B
{
    mangled_assert("?rglSetVSync@@YGX_N@Z");
    todo("implement");
    _sub_1000649B(sync);
}

_extern bool _sub_10004D9D(char const *);
bool haveExtension(char const *extName) // 0x10004D9D
{
    mangled_assert("?haveExtension@@YG_NPBD@Z");
    todo("implement");
    bool __result = _sub_10004D9D(extName);
    return __result;
}

_extern float _sub_10006029(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &);
float rglGetVersion(unsigned __int32 &mainVersion, unsigned __int32 &subVersion, unsigned __int32 &revision) // 0x10006029
{
    mangled_assert("?rglGetVersion@@YGMAAI00@Z");
    todo("implement");
    float __result = _sub_10006029(mainVersion, subVersion, revision);
    return __result;
}

_extern char const *_sub_10003E31();
char const *GL_getSystemDir() // 0x10003E31
{
    mangled_assert("?GL_getSystemDir@@YGPBDXZ");
    todo("implement");
    char const * __result = _sub_10003E31();
    return __result;
}

_extern bool _sub_10003DCA(char const *, unsigned __int32);
bool GL_dllIsOlder(char const *name, unsigned __int32 version) // 0x10003DCA
{
    mangled_assert("?GL_dllIsOlder@@YG_NPBDI@Z");
    todo("implement");
    bool __result = _sub_10003DCA(name, version);
    return __result;
}

_extern void _sub_10003E81(unsigned __int32);
void GL_setAssumedDriverVersion(unsigned __int32 ver) // 0x10003E81
{
    mangled_assert("?GL_setAssumedDriverVersion@@YGXI@Z");
    todo("implement");
    _sub_10003E81(ver);
}

_extern void _sub_10003E6B(char const *);
void GL_setAssumedDriverDLL(char const *dll) // 0x10003E6B
{
    mangled_assert("?GL_setAssumedDriverDLL@@YGXPBD@Z");
    todo("implement");
    _sub_10003E6B(dll);
}

_extern char const *_sub_10003E2B();
char const *GL_getAssumedDriverDLL() // 0x10003E2B
{
    mangled_assert("?GL_getAssumedDriverDLL@@YGPBDXZ");
    todo("implement");
    char const * __result = _sub_10003E2B();
    return __result;
}

_extern bool _sub_100061D3();
bool rglNeedNewerDriver() // 0x100061D3
{
    mangled_assert("?rglNeedNewerDriver@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100061D3();
    return __result;
}

_extern void _sub_10004FD1();
void printRenderingInfo() // 0x10004FD1
{
    mangled_assert("?printRenderingInfo@@YGXXZ");
    todo("implement");
    _sub_10004FD1();
}

_extern bool _sub_10005618(unsigned __int32 const &, unsigned __int32 const &, unsigned __int32);
bool rglAttachToWindow(unsigned __int32 const &win, unsigned __int32 const &instance, unsigned __int32 planes) // 0x10005618
{
    mangled_assert("?rglAttachToWindow@@YG_NABI0I@Z");
    todo("implement");
    bool __result = _sub_10005618(win, instance, planes);
    return __result;
}

_extern bool _sub_10005D86();
bool rglDetachFromWindow() // 0x10005D86
{
    mangled_assert("?rglDetachFromWindow@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005D86();
    return __result;
}

_extern void _sub_100063AE(float);
void rglSetGamma(float gamma) // 0x100063AE
{
    mangled_assert("?rglSetGamma@@YGXM@Z");
    todo("implement");
    _sub_100063AE(gamma);
}

_extern float _sub_10005FB6();
float rglGetGamma() // 0x10005FB6
{
    mangled_assert("?rglGetGamma@@YGMXZ");
    todo("implement");
    float __result = _sub_10005FB6();
    return __result;
}

_extern _sub_10003A48(NameReference *const, char const *, long);
_inline NameReference::NameReference(char const *, long) // 0x10003A48
{
    mangled_assert("??0NameReference@@QAE@PBDJ@Z");
    todo("implement");
    _sub_10003A48(this, arg, arg);
}

_extern _sub_10003A63(glState *const);
_inline glState::glState() // 0x10003A63
{
    mangled_assert("??0glState@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003A63(this);
}

_extern _sub_10003A66(rndloDevice *const, rndloDevice const &);
_inline rndloDevice::rndloDevice(rndloDevice const &) // 0x10003A66
{
    mangled_assert("??0rndloDevice@@QAE@ABU0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003A66(this, arg);
}

_extern _sub_10003AA9(rndloDevice *const);
_inline rndloDevice::rndloDevice() // 0x10003AA9
{
    mangled_assert("??0rndloDevice@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003AA9(this);
}

_extern void _sub_10003AF4(std::_List_buy<std::pair<unsigned int const ,CapMapTable *>,std::allocator<std::pair<unsigned int const ,CapMapTable *> > > *const);
_inline std::_List_buy<std::pair<unsigned int const ,CapMapTable *>,std::allocator<std::pair<unsigned int const ,CapMapTable *> > >::~_List_buy<std::pair<unsigned int const ,CapMapTable *>,std::allocator<std::pair<unsigned int const ,CapMapTable *> > >() // 0x10003AF4
{
    mangled_assert("??1?$_List_buy@U?$pair@$$CBIPAUCapMapTable@@@std@@V?$allocator@U?$pair@$$CBIPAUCapMapTable@@@std@@@2@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003AF4(this);
}

_extern void _sub_10003AFD(std::_List_buy<rndloDevice,std::allocator<rndloDevice> > *const);
_inline std::_List_buy<rndloDevice,std::allocator<rndloDevice> >::~_List_buy<rndloDevice,std::allocator<rndloDevice> >() // 0x10003AFD
{
    mangled_assert("??1?$_List_buy@UrndloDevice@@V?$allocator@UrndloDevice@@@std@@@std@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003AFD(this);
}

_extern void _sub_10003B06(stdext::hash_map<unsigned int,CapMapTable *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,CapMapTable *> > > *const);
_inline stdext::hash_map<unsigned int,CapMapTable *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,CapMapTable *> > >::~hash_map<unsigned int,CapMapTable *,stdext::hash_compare<unsigned int,std::less<unsigned int> >,std::allocator<std::pair<unsigned int const ,CapMapTable *> > >() // 0x10003B06
{
    mangled_assert("??1?$hash_map@IPAUCapMapTable@@V?$hash_compare@IU?$less@I@std@@@stdext@@V?$allocator@U?$pair@$$CBIPAUCapMapTable@@@std@@@std@@@stdext@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003B06(this);
}

_extern void _sub_10003B3E(NameReference *const);
_inline NameReference::~NameReference() // 0x10003B3E
{
    mangled_assert("??1NameReference@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003B3E(this);
}

_extern void _sub_10003B43(rndloDevice *const);
_inline rndloDevice::~rndloDevice() // 0x10003B43
{
    mangled_assert("??1rndloDevice@@QAE@XZ");
    compiler_generated();
    todo("implement");
    _sub_10003B43(this);
}

_extern char const *_sub_10005F85(long);
char const *rglGetFunctionName(long address) // 0x10005F85
{
    mangled_assert("?rglGetFunctionName@@YGPBDJ@Z");
    todo("implement");
    char const * __result = _sub_10005F85(address);
    return __result;
}

_extern bool _sub_1000653A();
bool rglWorkedAroundBadDrivers() // 0x1000653A
{
    mangled_assert("?rglWorkedAroundBadDrivers@@YG_NXZ");
    todo("implement");
    bool __result = _sub_1000653A();
    return __result;
}

_extern bool _sub_10005DDE();
bool rglDisabledEmulatedFeatures() // 0x10005DDE
{
    mangled_assert("?rglDisabledEmulatedFeatures@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005DDE();
    return __result;
}

_extern bool _sub_10005C94();
bool rglCardIsPCI() // 0x10005C94
{
    mangled_assert("?rglCardIsPCI@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10005C94();
    return __result;
}

_extern bool _sub_10006157(eMinSpec);
bool rglMeetsMinSpec(eMinSpec requirement) // 0x10006157
{
    mangled_assert("?rglMeetsMinSpec@@YG_NW4eMinSpec@@@Z");
    todo("implement");
    bool __result = _sub_10006157(requirement);
    return __result;
}

_extern bool _sub_10006651(void *);
bool setupFunctionTable(void *fnTable) // 0x10006651
{
    mangled_assert("_setupFunctionTable");
    todo("implement");
    bool __result = _sub_10006651(fnTable);
    return __result;
}

_extern __int32 _sub_10006624(void *, unsigned long, void *);
__int32 DllMain(void *hInstance, unsigned long reason, void *reserved) // 0x10006624
{
    mangled_assert("_DllMain@12");
    todo("implement");
    __int32 __result = _sub_10006624(hInstance, reason, reserved);
    return __result;
}

_extern _sub_10003A2A(NameReference *const, NameReference const &);
_inline NameReference::NameReference(NameReference const &) // 0x10003A2A
{
    mangled_assert("??0NameReference@@QAE@ABV0@@Z");
    compiler_generated();
    todo("implement");
    _sub_10003A2A(this, arg);
}

/* ---------- private code */

_extern void _sub_10004F9E();
_static void ntFixup() // 0x10004F9E
{
    mangled_assert("ntFixup");
    todo("implement");
    _sub_10004F9E();
}

_extern std::basic_string<char,std::char_traits<char>,std::allocator<char> > _sub_10004B7D(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
_static std::basic_string<char,std::char_traits<char>,std::allocator<char> > getDLLVersion(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name) // 0x10004B7D
{
    mangled_assert("getDLLVersion");
    todo("implement");
    std::string __result = _sub_10004B7D(path, name);
    return __result;
}

_extern bool _sub_10004966(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, unsigned __int32);
_static bool dllIsOlder(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &path, std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &name, unsigned __int32 minVersion) // 0x10004966
{
    mangled_assert("dllIsOlder");
    todo("implement");
    bool __result = _sub_10004966(path, name, minVersion);
    return __result;
}

_extern unsigned __int32 _sub_10004B77();
_static unsigned __int32 getAssumedLatestDllVersion() // 0x10004B77
{
    mangled_assert("getAssumedLatestDllVersion");
    todo("implement");
    unsigned __int32 __result = _sub_10004B77();
    return __result;
}

_extern bool _sub_100049D8();
_static bool driverConfig() // 0x100049D8
{
    mangled_assert("driverConfig");
    todo("implement");
    bool __result = _sub_100049D8();
    return __result;
}
#endif
