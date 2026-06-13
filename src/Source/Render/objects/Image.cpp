#if 0
/* ---------- headers */

#include "decomp.h"
#include <hash_map>
#include <assist\fixedstring.h>
#include <objidl.h>
#include <msxml.h>
#include <xhash>
#include <assist\stlexstring.h>
#include <namespaceapi.h>
#include <xstring>
#include <ktmtypes.h>
#include <xmemory0>
#include <Objects\pch.h>
#include <memory\memorylib.h>
#include <winsmcrd.h>
#include <crtdefs.h>
#include <winbase.h>
#include <wincon.h>
#include <mmiscapi.h>
#include <apisetcconv.h>
#include <mmeapi.h>
#include <minwinbase.h>
#include <errhandlingapi.h>
#include <ime_cmodes.h>
#include <processenv.h>
#include <guiddef.h>
#include <jobapi.h>
#include <debug\ctmessage.h>
#include <profile\profile.h>
#include <apiset.h>
#include <new>
#include <iostream>
#include <ole2.h>
#include <xstddef>
#include <systemtopologyapi.h>
#include <pshpack1.h>
#include <objbase.h>
#include <wow64apiset.h>
#include <combaseapi.h>
#include <type_traits>
#include <winnls.h>
#include <shellapi.h>
#include <Mathlib\matrix4.h>
#include <datetimeapi.h>
#include <winnt.h>
#include <processtopologyapi.h>
#include <Mathlib\vector3.h>
#include <xutility>
#include <kernelspecs.h>
#include <basetsd.h>
#include <pshpack2.h>
#include <utility>
#include <libloaderapi.h>
#include <iosfwd>
#include <vector>
#include <sysinfoapi.h>
#include <xmemory>
#include <objidlbase.h>
#include <winreg.h>
#include <ncrypt.h>
#include <unknwnbase.h>
#include <Mathlib\matrix3.h>
#include <winsock.h>
#include <oaidl.h>
#include <assist\typemagic.h>
#include <nb30.h>
#include <commdlg.h>
#include <math.h>
#include <timeapi.h>
#include <dpapi.h>
#include <propidl.h>
#include <string.h>
#include <list>
#include <unknwn.h>
#include <securityappcontainer.h>
#include <fibersapi.h>
#include <imm.h>
#include <fileio\filestream.h>
#include <platform\namedinterface.h>
#include <winver.h>
#include <winscard.h>
#include <Objects\Texture.h>
#include <platform\platformexports.h>
#include <verrsrc.h>
#include <wtypes.h>
#include <Objects\Core.h>
#include <rpcndr.h>
#include <gl\types.h>
#include <realtimeapiset.h>
#include <tvout.h>
#include <rpcnsip.h>
#include <map>
#include <gl\lotypes.h>
#include <Objects\hw2ddraw.h>
#include <mciapi.h>
#include <stralign.h>
#include <xtree>
#include <winuser.h>
#include <consoleapi.h>
#include <namedpipeapi.h>
#include <ioapiset.h>
#include <winsvc.h>
#include <Objects\TextureRegistry.h>
#include <memoryapi.h>
#include <dlgs.h>
#include <winperf.h>
#include <wingdi.h>
#include <rpc.h>
#include <urlmon.h>
#include <pshpack4.h>
#include <joystickapi.h>
#include <rpcdce.h>
#include <winerror.h>
#include <bcrypt.h>
#include <ddeml.h>
#include <lzexpand.h>
#include <algorithm>
#include <wincrypt.h>
#include <util\types.h>
#include <interlockedapi.h>
#include <timezoneapi.h>
#include <stringapiset.h>
#include <reason.h>
#include <securitybaseapi.h>
#include <rpcsal.h>
#include <oleauto.h>
#include <platform\osdef.h>
#include <winioctl.h>
#include <servprov.h>
#include <debugapi.h>
#include <fileapi.h>
#include <fileio\iff.h>
#include <cguid.h>
#include <cderr.h>
#include <dde.h>
#include <Mathlib\matvec.h>
#include <Mathlib\vector2.h>
#include <windows.h>
#include <winapifamily.h>
#include <threadpoollegacyapiset.h>
#include <rpcnterr.h>
#include <wtypesbase.h>
#include <winspool.h>
#include <sdkddkver.h>
#include <rpcnsi.h>
#include <rpcasync.h>
#include <prsht.h>
#include <excpt.h>
#include <poppack.h>
#include <Objects\Image.h>
#include <Objects\Objects.h>
#include <gl\r_defines.h>
#include <gl\r_types.h>
#include <gl\glext.h>
#include <debug\db.h>
#include <util\colour.h>
#include <Mathlib\vector4.h>
#include <mmiscapi2.h>
#include <Mathlib\mathlibdll.h>
#include <profileapi.h>
#include <winefs.h>
#include <Mathlib\fastmath.h>
#include <synchapi.h>
#include <inaddr.h>
#include <mmsystem.h>
#include <mmsyscom.h>
#include <utilapiset.h>
#include <heapapi.h>
#include <processthreadsapi.h>
#include <fileio\bytestream.h>
#include <fileio\fileioexports.h>
#include <pshpack8.h>
#include <winnetwk.h>
#include <debug\ctassert.h>
#include <wnnc.h>
#include <stdarg.h>
#include <oleidl.h>
#include <mcx.h>
#include <windef.h>
#include <bemapiset.h>
#include <rpcdcep.h>
#include <wchar.h>
#include <string>
#include <minwindef.h>
#include <playsoundapi.h>
#include <specstrings.h>
#include <specstrings_strict.h>
#include <handleapi.h>
#include <memory\memorypool.h>
#include <specstrings_undef.h>
#include <driverspecs.h>
#include <sdv_driverspecs.h>
#include <threadpoolapiset.h>

/* ---------- constants */

/* ---------- definitions */

union <unnamed-type-c32>
{
    unsigned __int32 c; // 0x0
    unsigned char b[4]; // 0x0
};
static_assert(sizeof(<unnamed-type-c32>) == 4, "Invalid <unnamed-type-c32> size");

typedef _DDSCAPS2 DDSCAPS2;
typedef _DDPIXELFORMAT DDPIXELFORMAT;
typedef _DDCOLORKEY DDCOLORKEY;
typedef _DDSURFACEDESC2 DDSURFACEDESC2;

class ImageFactory
{
public:
    static void Startup();
    static void Shutdown();
    static ImageFactory *Instance();
    ImageTGA *CreateTGA(__int32, __int32);
    ImageDDS *CreateDDS(__int32, __int32, __int32, TextureFormat);
    ImageROT *CreateROT();
    void Destroy(Image *);
    void SetDDSMipLevel(ImageDDS &, __int32, unsigned char *);
private:
    _inline ImageFactory();
    _inline ~ImageFactory();
};
static_assert(sizeof(ImageFactory) == 1, "Invalid ImageFactory size");

struct TGAFileHeader
{
    unsigned char idLength; // 0x0
    unsigned char colourMapType; // 0x1
    unsigned char imageType; // 0x2
    unsigned short colourMapStartIndex; // 0x4
    unsigned short colourMapNumEntries; // 0x6
    unsigned char colourMapBitsPerEntry; // 0x8
    short imageOffsetX; // 0xA
    short imageOffsetY; // 0xC
    unsigned short imageWidth; // 0xE
    unsigned short imageHeight; // 0x10
    unsigned char pixelDepth; // 0x12
    unsigned char imageDescriptor; // 0x13
};
static_assert(sizeof(TGAFileHeader) == 20, "Invalid TGAFileHeader size");

/* ---------- prototypes */

extern void imageEnableLowTex();
extern bool isImageLowTexEnabled();
extern bool imageStartup();
extern bool imageShutdown();
extern unsigned long readTargaHeader(ByteStream &file, TGAFileHeader &header);
extern ImageTGA *imageReadTarga(ByteStream &file);
extern void imageWriteTarga(ByteStream &file, __int32 width, __int32 height, unsigned __int32 *data);
extern void imageDestroy(Image *image);
extern bool verifyNumMipMaps(_DDSURFACEDESC2 const &description);
extern bool imageValidateDDSHeader(ByteStream &file, _DDSURFACEDESC2 &description, bool &hasMipMaps, TextureFormat &format);
extern unsigned char *imageReadDDSMipLevel(ByteStream &file, _DDSURFACEDESC2 const &description, TextureFormat const format, unsigned __int32 const mipLevel);
extern ImageDDS *imageReadDDS(ByteStream &file);
extern ImageROT *imageReadROT(ByteStream &file);
extern void imageWriteDDS(ByteStream &file, __int32 width, __int32 height, unsigned __int32 *data);
extern bool imageGetTargaSize(ByteStream &file, __int32 &width, __int32 &height);
extern bool imageGetTargaInfo(ByteStream &file, __int32 &width, __int32 &height, bool &bReadable);
extern bool imageGetDDSSize(ByteStream &file, __int32 &width, __int32 &height);
extern bool imageGetROTSize(ByteStream &file, __int32 &width, __int32 &height);
extern bool imageBitsToFormat(__int32 const *bits, TextureFormat &format);
extern bool imageBitsToFormat(unsigned char const *bits, TextureFormat &format);
extern bool imageFormatToBits(TextureFormat format, __int32 *bits);
extern bool imageFormatToBits(TextureFormat format, unsigned char *bits);
extern bool imageHasAlpha(__int32 width, __int32 height, unsigned __int32 const *data);
extern __int32 imageBytesFromBits(__int32 const *bits);
extern __int32 imageBytesFromBits(unsigned char const *bits);
extern bool imageMakeMipmaps(TextureFormat const format, __int32 const width, __int32 const height, unsigned char const *data, std::vector<MipStruct,std::allocator<MipStruct> > &mipList, bool bMipMap);
extern void imageFreeMipmaps(std::vector<MipStruct,std::allocator<MipStruct> > &mipList);
extern bool imageWriteTexture(IFFChunk *chunk, __int32 width, __int32 height, void const *_data, __int32 const *bits);
extern bool imageWriteTexture(IFFChunk *chunk, __int32 width, __int32 height, void const *_data, unsigned char const *bits);
extern unsigned __int32 doubleBytesPerPixel(TextureFormat const format);
extern __int32 imageSizeofTexture(TextureFormat format, __int32 width, __int32 height);
extern bool imageReadTexture(IFFChunk *chunk, __int32 width, __int32 height, TextureFormat format, void *data);
extern Texture *imageGetTexture(IFFChunk *chunk, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &texName);
extern void colRGBToHSV(float *H, float *S, float *V, float R, float G, float B);
extern void colHSVToRGB(float *R, float *G, float *B, float H, float S, float V);

_static void getTexRegName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inName, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outName);
_static bool flipRawSurface(unsigned char *const surface, unsigned __int32 const width, unsigned __int32 const height, TextureFormat const format);
_static bool flipCompressedSurface(unsigned char *const surface, unsigned __int32 const w, unsigned __int32 const h, TextureFormat const format);
_static __int32 handleRHEA(IFF *iff, IFFChunk *chunk, void *user0, void *);

/* ---------- globals */

extern <unnamed-type-c32> c32; // 0x10132AC4
extern IFFChunk *_chunk; // 0x10132AC8
extern void *handle; // 0x10132ACC

/* ---------- private variables */

_static
{
    extern ImageFactory *s_imageFactoryInstance; // 0x10132ABC
    extern std::_Nil _Nil_obj; // 0x10132ADC
    extern bool s_lowResTex; // 0x10132AC0
    extern ImageInterface imageInterface; // 0x1010D548
    extern MemoryPoolObj s_memPool; // 0x10132AD0
}

/* ---------- public code */

_extern void _sub_100608C0();
void imageEnableLowTex() // 0x100608C0
{
    mangled_assert("?imageEnableLowTex@@YGXXZ");
    todo("implement");
    _sub_100608C0();
}

_extern bool _sub_10063FC0();
bool isImageLowTexEnabled() // 0x10063FC0
{
    mangled_assert("?isImageLowTexEnabled@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10063FC0();
    return __result;
}

_extern _sub_10060FD0(ImageTGA *const);
ImageTGA::ImageTGA() // 0x10060FD0
{
    mangled_assert("??0ImageTGA@@AAE@XZ");
    todo("implement");
    _sub_10060FD0(this);
}

_extern void _sub_10061120(ImageTGA *const);
ImageTGA::~ImageTGA() // 0x10061120
{
    mangled_assert("??1ImageTGA@@EAE@XZ");
    todo("implement");
    _sub_10061120(this);
}

_extern _sub_10060F60(ImageDDS *const);
ImageDDS::ImageDDS() // 0x10060F60
{
    mangled_assert("??0ImageDDS@@AAE@XZ");
    todo("implement");
    _sub_10060F60(this);
}

_extern void _sub_10061030(ImageDDS *const);
ImageDDS::~ImageDDS() // 0x10061030
{
    mangled_assert("??1ImageDDS@@EAE@XZ");
    todo("implement");
    _sub_10061030(this);
}

_extern unsigned __int32 _sub_10064110(ImageDDS const *const);
unsigned __int32 ImageDDS::numMipLevels() const // 0x10064110
{
    mangled_assert("?numMipLevels@ImageDDS@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10064110(this);
    return __result;
}

_extern unsigned char *_sub_10061CB0(ImageDDS *const, __int32);
unsigned char *ImageDDS::data(__int32) // 0x10061CB0
{
    mangled_assert("?data@ImageDDS@@QAEPAEH@Z");
    todo("implement");
    unsigned char * __result = _sub_10061CB0(this, arg);
    return __result;
}

_extern _sub_10060FA0(ImageROT *const);
ImageROT::ImageROT() // 0x10060FA0
{
    mangled_assert("??0ImageROT@@AAE@XZ");
    todo("implement");
    _sub_10060FA0(this);
}

_extern void _sub_100610B0(ImageROT *const);
ImageROT::~ImageROT() // 0x100610B0
{
    mangled_assert("??1ImageROT@@EAE@XZ");
    todo("implement");
    _sub_100610B0(this);
}

_extern unsigned __int32 _sub_10064120(ImageROT const *const);
unsigned __int32 ImageROT::numMipLevels() const // 0x10064120
{
    mangled_assert("?numMipLevels@ImageROT@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_10064120(this);
    return __result;
}

_extern bool _sub_10063FD0(ImageROT *const, ByteStream &);
bool ImageROT::load(ByteStream &) // 0x10063FD0
{
    mangled_assert("?load@ImageROT@@QAE_NAAVByteStream@@@Z");
    todo("implement");
    bool __result = _sub_10063FD0(this, arg);
    return __result;
}

_extern __int32 _sub_10062780(IFF *, IFFChunk *, void *, void *);
__int32 ImageROT::handleHEAD(IFF *iff, IFFChunk *chunk, void *user0, void *width) // 0x10062780
{
    mangled_assert("?handleHEAD@ImageROT@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10062780(iff, chunk, user0, width);
    return __result;
}

_extern __int32 _sub_10062800(IFF *, IFFChunk *, void *, void *);
__int32 ImageROT::handleMIPS(IFF *iff, IFFChunk *chunk, void *user0, void *) // 0x10062800
{
    mangled_assert("?handleMIPS@ImageROT@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10062800(iff, chunk, user0, arg);
    return __result;
}

_extern __int32 _sub_10062830(IFF *, IFFChunk *, void *, void *);
__int32 ImageROT::handleMLVL(IFF *iff, IFFChunk *chunk, void *user0, void *width) // 0x10062830
{
    mangled_assert("?handleMLVL@ImageROT@@SGHPAVIFF@@PAVIFFChunk@@PAX2@Z");
    todo("implement");
    __int32 __result = _sub_10062830(iff, chunk, user0, width);
    return __result;
}

_extern _sub_10060F90(ImageFactory *const);
_inline ImageFactory::ImageFactory() // 0x10060F90
{
    mangled_assert("??0ImageFactory@@AAE@XZ");
    todo("implement");
    _sub_10060F90(this);
}

_extern void _sub_100610A0(ImageFactory *const);
_inline ImageFactory::~ImageFactory() // 0x100610A0
{
    mangled_assert("??1ImageFactory@@AAE@XZ");
    todo("implement");
    _sub_100610A0(this);
}

_extern void _sub_100614B0();
void ImageFactory::Startup() // 0x100614B0
{
    mangled_assert("?Startup@ImageFactory@@SGXXZ");
    todo("implement");
    _sub_100614B0();
}

_extern void _sub_10061490();
void ImageFactory::Shutdown() // 0x10061490
{
    mangled_assert("?Shutdown@ImageFactory@@SGXXZ");
    todo("implement");
    _sub_10061490();
}

_extern ImageFactory *_sub_10061460();
ImageFactory *ImageFactory::Instance() // 0x10061460
{
    mangled_assert("?Instance@ImageFactory@@SGPAV1@XZ");
    todo("implement");
    ImageFactory * __result = _sub_10061460();
    return __result;
}

_extern ImageTGA *_sub_100613E0(ImageFactory *const, __int32, __int32);
ImageTGA *ImageFactory::CreateTGA(__int32, __int32) // 0x100613E0
{
    mangled_assert("?CreateTGA@ImageFactory@@QAEPAVImageTGA@@HH@Z");
    todo("implement");
    ImageTGA * __result = _sub_100613E0(this, arg, arg);
    return __result;
}

_extern ImageDDS *_sub_10061330(ImageFactory *const, __int32, __int32, __int32, TextureFormat);
ImageDDS *ImageFactory::CreateDDS(__int32, __int32, __int32, TextureFormat) // 0x10061330
{
    mangled_assert("?CreateDDS@ImageFactory@@QAEPAVImageDDS@@HHHW4TextureFormat@@@Z");
    todo("implement");
    ImageDDS * __result = _sub_10061330(this, arg, arg, arg, arg);
    return __result;
}

_extern ImageROT *_sub_100613A0(ImageFactory *const);
ImageROT *ImageFactory::CreateROT() // 0x100613A0
{
    mangled_assert("?CreateROT@ImageFactory@@QAEPAVImageROT@@XZ");
    todo("implement");
    ImageROT * __result = _sub_100613A0(this);
    return __result;
}

_extern void _sub_10061440(ImageFactory *const, Image *);
void ImageFactory::Destroy(Image *) // 0x10061440
{
    mangled_assert("?Destroy@ImageFactory@@QAEXPAVImage@@@Z");
    todo("implement");
    _sub_10061440(this, arg);
}

_extern void _sub_10061470(ImageFactory *const, ImageDDS &, __int32, unsigned char *);
void ImageFactory::SetDDSMipLevel(ImageDDS &, __int32, unsigned char *) // 0x10061470
{
    mangled_assert("?SetDDSMipLevel@ImageFactory@@QAEXAAVImageDDS@@HPAE@Z");
    todo("implement");
    _sub_10061470(this, arg, arg, arg);
}

_extern bool _sub_10063850();
bool imageStartup() // 0x10063850
{
    mangled_assert("?imageStartup@@YG_NXZ");
    todo("implement");
    bool __result = _sub_10063850();
    return __result;
}

_extern bool _sub_100637D0();
bool imageShutdown() // 0x100637D0
{
    mangled_assert("?imageShutdown@@YG_NXZ");
    todo("implement");
    bool __result = _sub_100637D0();
    return __result;
}

_extern unsigned long _sub_100641A0(ByteStream &, TGAFileHeader &);
unsigned long readTargaHeader(ByteStream &file, TGAFileHeader &header) // 0x100641A0
{
    mangled_assert("?readTargaHeader@@YGKAAVByteStream@@AAUTGAFileHeader@@@Z");
    todo("implement");
    unsigned long __result = _sub_100641A0(file, header);
    return __result;
}

_extern ImageTGA *_sub_10060520(ByteStream &);
ImageTGA *imageReadTarga(ByteStream &file) // 0x10060520
{
    mangled_assert("?imageReadTarga@@YGPAVImageTGA@@AAVByteStream@@@Z");
    todo("implement");
    ImageTGA * __result = _sub_10060520(file);
    return __result;
}

_extern void _sub_10060740(ByteStream &, __int32, __int32, unsigned __int32 *);
void imageWriteTarga(ByteStream &file, __int32 width, __int32 height, unsigned __int32 *data) // 0x10060740
{
    mangled_assert("?imageWriteTarga@@YGXAAVByteStream@@HHPAI@Z");
    todo("implement");
    _sub_10060740(file, width, height, data);
}

_extern void _sub_100608A0(Image *);
void imageDestroy(Image *image) // 0x100608A0
{
    mangled_assert("?imageDestroy@@YGXPAVImage@@@Z");
    todo("implement");
    _sub_100608A0(image);
}

_extern bool _sub_10064320(_DDSURFACEDESC2 const &);
bool verifyNumMipMaps(_DDSURFACEDESC2 const &description) // 0x10064320
{
    mangled_assert("?verifyNumMipMaps@@YG_NABU_DDSURFACEDESC2@@@Z");
    todo("implement");
    bool __result = _sub_10064320(description);
    return __result;
}

_extern bool _sub_10063880(ByteStream &, _DDSURFACEDESC2 &, bool &, TextureFormat &);
bool imageValidateDDSHeader(ByteStream &file, _DDSURFACEDESC2 &description, bool &hasMipMaps, TextureFormat &format) // 0x10063880
{
    mangled_assert("?imageValidateDDSHeader@@YG_NAAVByteStream@@AAU_DDSURFACEDESC2@@AA_NAAW4TextureFormat@@@Z");
    todo("implement");
    bool __result = _sub_10063880(file, description, hasMipMaps, format);
    return __result;
}

_extern unsigned char *_sub_10063500(ByteStream &, _DDSURFACEDESC2 const &, TextureFormat const, unsigned __int32 const);
unsigned char *imageReadDDSMipLevel(ByteStream &file, _DDSURFACEDESC2 const &description, TextureFormat const format, unsigned __int32 const mipLevel) // 0x10063500
{
    mangled_assert("?imageReadDDSMipLevel@@YGPAEAAVByteStream@@ABU_DDSURFACEDESC2@@W4TextureFormat@@I@Z");
    todo("implement");
    unsigned char * __result = _sub_10063500(file, description, format, mipLevel);
    return __result;
}

_extern ImageDDS *_sub_10060690(ByteStream &);
ImageDDS *imageReadDDS(ByteStream &file) // 0x10060690
{
    mangled_assert("?imageReadDDS@@YGPAVImageDDS@@AAVByteStream@@@Z");
    todo("implement");
    ImageDDS * __result = _sub_10060690(file);
    return __result;
}

_extern ImageROT *_sub_10063660(ByteStream &);
ImageROT *imageReadROT(ByteStream &file) // 0x10063660
{
    mangled_assert("?imageReadROT@@YGPAVImageROT@@AAVByteStream@@@Z");
    todo("implement");
    ImageROT * __result = _sub_10063660(file);
    return __result;
}

_extern void _sub_10063AA0(ByteStream &, __int32, __int32, unsigned __int32 *);
void imageWriteDDS(ByteStream &file, __int32 width, __int32 height, unsigned __int32 *data) // 0x10063AA0
{
    mangled_assert("?imageWriteDDS@@YGXAAVByteStream@@HHPAI@Z");
    todo("implement");
    _sub_10063AA0(file, width, height, data);
}

_extern bool _sub_10062FF0(ByteStream &, __int32 &, __int32 &);
bool imageGetTargaSize(ByteStream &file, __int32 &width, __int32 &height) // 0x10062FF0
{
    mangled_assert("?imageGetTargaSize@@YG_NAAVByteStream@@AAH1@Z");
    todo("implement");
    bool __result = _sub_10062FF0(file, width, height);
    return __result;
}

_extern bool _sub_10062F90(ByteStream &, __int32 &, __int32 &, bool &);
bool imageGetTargaInfo(ByteStream &file, __int32 &width, __int32 &height, bool &bReadable) // 0x10062F90
{
    mangled_assert("?imageGetTargaInfo@@YG_NAAVByteStream@@AAH1AA_N@Z");
    todo("implement");
    bool __result = _sub_10062F90(file, width, height, bReadable);
    return __result;
}

_extern bool _sub_10062E70(ByteStream &, __int32 &, __int32 &);
bool imageGetDDSSize(ByteStream &file, __int32 &width, __int32 &height) // 0x10062E70
{
    mangled_assert("?imageGetDDSSize@@YG_NAAVByteStream@@AAH1@Z");
    todo("implement");
    bool __result = _sub_10062E70(file, width, height);
    return __result;
}

_extern bool _sub_10062ED0(ByteStream &, __int32 &, __int32 &);
bool imageGetROTSize(ByteStream &file, __int32 &width, __int32 &height) // 0x10062ED0
{
    mangled_assert("?imageGetROTSize@@YG_NAAVByteStream@@AAH1@Z");
    todo("implement");
    bool __result = _sub_10062ED0(file, width, height);
    return __result;
}

_extern bool _sub_10062A10(__int32 const *, TextureFormat &);
bool imageBitsToFormat(__int32 const *bits, TextureFormat &format) // 0x10062A10
{
    mangled_assert("?imageBitsToFormat@@YG_NQBHAAW4TextureFormat@@@Z");
    todo("implement");
    bool __result = _sub_10062A10(bits, format);
    return __result;
}

_extern bool _sub_100628E0(unsigned char const *, TextureFormat &);
bool imageBitsToFormat(unsigned char const *bits, TextureFormat &format) // 0x100628E0
{
    mangled_assert("?imageBitsToFormat@@YG_NQBEAAW4TextureFormat@@@Z");
    todo("implement");
    bool __result = _sub_100628E0(bits, format);
    return __result;
}

_extern bool _sub_10062C80(TextureFormat, __int32 *);
bool imageFormatToBits(TextureFormat format, __int32 *bits) // 0x10062C80
{
    mangled_assert("?imageFormatToBits@@YG_NW4TextureFormat@@QAH@Z");
    todo("implement");
    bool __result = _sub_10062C80(format, bits);
    return __result;
}

_extern bool _sub_10062C40(TextureFormat, unsigned char *);
bool imageFormatToBits(TextureFormat format, unsigned char *bits) // 0x10062C40
{
    mangled_assert("?imageFormatToBits@@YG_NW4TextureFormat@@QAE@Z");
    todo("implement");
    bool __result = _sub_10062C40(format, bits);
    return __result;
}

_extern bool _sub_10063310(__int32, __int32, unsigned __int32 const *);
bool imageHasAlpha(__int32 width, __int32 height, unsigned __int32 const *data) // 0x10063310
{
    mangled_assert("?imageHasAlpha@@YG_NHHPBI@Z");
    todo("implement");
    bool __result = _sub_10063310(width, height, data);
    return __result;
}

_extern __int32 _sub_10062BC0(__int32 const *);
__int32 imageBytesFromBits(__int32 const *bits) // 0x10062BC0
{
    mangled_assert("?imageBytesFromBits@@YGHQBH@Z");
    todo("implement");
    __int32 __result = _sub_10062BC0(bits);
    return __result;
}

_extern __int32 _sub_10062B20(unsigned char const *);
__int32 imageBytesFromBits(unsigned char const *bits) // 0x10062B20
{
    mangled_assert("?imageBytesFromBits@@YGHQBE@Z");
    todo("implement");
    __int32 __result = _sub_10062B20(bits);
    return __result;
}

_extern bool _sub_10063360(TextureFormat const, __int32 const, __int32 const, unsigned char const *, std::vector<MipStruct,std::allocator<MipStruct> > &, bool);
bool imageMakeMipmaps(TextureFormat const format, __int32 const width, __int32 const height, unsigned char const *data, std::vector<MipStruct,std::allocator<MipStruct> > &mipList, bool bMipMap) // 0x10063360
{
    mangled_assert("?imageMakeMipmaps@@YG_NW4TextureFormat@@HHPBEAAV?$vector@UMipStruct@@V?$allocator@UMipStruct@@@std@@@std@@_N@Z");
    todo("implement");
    bool __result = _sub_10063360(format, width, height, data, mipList, bMipMap);
    return __result;
}

_extern void _sub_10062E30(std::vector<MipStruct,std::allocator<MipStruct> > &);
void imageFreeMipmaps(std::vector<MipStruct,std::allocator<MipStruct> > &mipList) // 0x10062E30
{
    mangled_assert("?imageFreeMipmaps@@YGXAAV?$vector@UMipStruct@@V?$allocator@UMipStruct@@@std@@@std@@@Z");
    todo("implement");
    _sub_10062E30(mipList);
}

_extern bool _sub_10063D50(IFFChunk *, __int32, __int32, void const *, __int32 const *);
bool imageWriteTexture(IFFChunk *chunk, __int32 width, __int32 height, void const *_data, __int32 const *bits) // 0x10063D50
{
    mangled_assert("?imageWriteTexture@@YG_NPAVIFFChunk@@HHPBXQBH@Z");
    todo("implement");
    bool __result = _sub_10063D50(chunk, width, height, _data, bits);
    return __result;
}

_extern bool _sub_10063AB0(IFFChunk *, __int32, __int32, void const *, unsigned char const *);
bool imageWriteTexture(IFFChunk *chunk, __int32 width, __int32 height, void const *_data, unsigned char const *bits) // 0x10063AB0
{
    mangled_assert("?imageWriteTexture@@YG_NPAVIFFChunk@@HHPBXQBE@Z");
    todo("implement");
    bool __result = _sub_10063AB0(chunk, width, height, _data, bits);
    return __result;
}

_extern unsigned __int32 _sub_10061D00(TextureFormat const);
unsigned __int32 doubleBytesPerPixel(TextureFormat const format) // 0x10061D00
{
    mangled_assert("?doubleBytesPerPixel@@YGIW4TextureFormat@@@Z");
    todo("implement");
    unsigned __int32 __result = _sub_10061D00(format);
    return __result;
}

_extern __int32 _sub_10063810(TextureFormat, __int32, __int32);
__int32 imageSizeofTexture(TextureFormat format, __int32 width, __int32 height) // 0x10063810
{
    mangled_assert("?imageSizeofTexture@@YGHW4TextureFormat@@HH@Z");
    todo("implement");
    __int32 __result = _sub_10063810(format, width, height);
    return __result;
}

_extern bool _sub_100636C0(IFFChunk *, __int32, __int32, TextureFormat, void *);
bool imageReadTexture(IFFChunk *chunk, __int32 width, __int32 height, TextureFormat format, void *data) // 0x100636C0
{
    mangled_assert("?imageReadTexture@@YG_NPAVIFFChunk@@HHW4TextureFormat@@PAX@Z");
    todo("implement");
    bool __result = _sub_100636C0(chunk, width, height, format, data);
    return __result;
}

_extern Texture *_sub_10063020(IFFChunk *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
Texture *imageGetTexture(IFFChunk *chunk, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &texName) // 0x10063020
{
    mangled_assert("?imageGetTexture@@YGPAVTexture@@PAVIFFChunk@@AAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
    Texture * __result = _sub_10063020(chunk, texName);
    return __result;
}

_extern void _sub_10061B60(float *, float *, float *, float, float, float);
void colRGBToHSV(float *H, float *S, float *V, float R, float G, float B) // 0x10061B60
{
    mangled_assert("?colRGBToHSV@@YGXPAM00MMM@Z");
    todo("implement");
    _sub_10061B60(H, S, V, R, G, B);
}

_extern void _sub_100619C0(float *, float *, float *, float, float, float);
void colHSVToRGB(float *R, float *G, float *B, float H, float S, float V) // 0x100619C0
{
    mangled_assert("?colHSVToRGB@@YGXPAM00MMM@Z");
    todo("implement");
    _sub_100619C0(R, G, B, H, S, V);
}

/* ---------- private code */

_extern void _sub_100626B0(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
_static void getTexRegName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &inName, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &outName) // 0x100626B0
{
    mangled_assert("getTexRegName");
    todo("implement");
    _sub_100626B0(inName, outName);
}

_extern bool _sub_100625C0(unsigned char *const, unsigned __int32 const, unsigned __int32 const, TextureFormat const);
_static bool flipRawSurface(unsigned char *const surface, unsigned __int32 const width, unsigned __int32 const height, TextureFormat const format) // 0x100625C0
{
    mangled_assert("flipRawSurface");
    todo("implement");
    bool __result = _sub_100625C0(surface, width, height, format);
    return __result;
}

_extern bool _sub_10061E30(unsigned char *const, unsigned __int32 const, unsigned __int32 const, TextureFormat const);
_static bool flipCompressedSurface(unsigned char *const surface, unsigned __int32 const w, unsigned __int32 const h, TextureFormat const format) // 0x10061E30
{
    mangled_assert("flipCompressedSurface");
    todo("implement");
    bool __result = _sub_10061E30(surface, w, h, format);
    return __result;
}

_extern __int32 _sub_100628B0(IFF *, IFFChunk *, void *, void *);
_static __int32 handleRHEA(IFF *iff, IFFChunk *chunk, void *user0, void *) // 0x100628B0
{
    mangled_assert("handleRHEA");
    todo("implement");
    __int32 __result = _sub_100628B0(iff, chunk, user0, arg);
    return __result;
}
#endif
