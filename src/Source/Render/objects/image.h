#if 0
#ifndef __IMAGE_H__
#define __IMAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Image
{
public:
    enum Type
    {
        TypeTGA = 0,
        TypeDDS,
        TypeROT,
        TYPE_COUNT,
        TypeUnknown,
    };
    virtual Image::Type type() const = 0;
    _inline __int32 width() const;
    _inline __int32 height() const;
    Image(Image const &); /* compiler_generated() */
protected:
    Image();
    virtual ~Image();
    __int32 m_width; // 0x4
    __int32 m_height; // 0x8
public:
    Image &operator=(Image const &); /* compiler_generated() */
};
static_assert(sizeof(Image) == 12, "Invalid Image size");

class ImageTGA :
    public Image
{
public:
    virtual Image::Type type() const override;
    _inline unsigned __int32 const *data() const;
    _inline unsigned __int32 *data();
    ImageTGA(ImageTGA const &); /* compiler_generated() */
private:
    ImageTGA();
    virtual ~ImageTGA() override;
    unsigned char *m_data; // 0xC
public:
    ImageTGA &operator=(ImageTGA const &); /* compiler_generated() */
};
static_assert(sizeof(ImageTGA) == 16, "Invalid ImageTGA size");

class ImageDDS :
    public Image
{
public:
    virtual Image::Type type() const override;
    unsigned __int32 numMipLevels() const;
    unsigned char const *data(__int32) const;
    unsigned char *data(__int32);
    TextureFormat format() const;
    ImageDDS(ImageDDS const &); /* compiler_generated() */
private:
    ImageDDS();
    virtual ~ImageDDS() override;
    std::vector<unsigned char *,std::allocator<unsigned char *> > m_data; // 0xC
    TextureFormat m_format; // 0x18
public:
    ImageDDS &operator=(ImageDDS const &); /* compiler_generated() */
};
static_assert(sizeof(ImageDDS) == 28, "Invalid ImageDDS size");

class ImageROT :
    public Image
{
public:
    virtual Image::Type type() const override;
    bool load(ByteStream &);
    unsigned __int32 numMipLevels() const;
    unsigned char const *data(__int32) const;
    unsigned char *data(__int32);
    TextureFormat format() const;
    static __int32 handleHEAD(IFF *, IFFChunk *, void *, void *);
    static __int32 handleMIPS(IFF *, IFFChunk *, void *, void *);
    static __int32 handleMLVL(IFF *, IFFChunk *, void *, void *);
    ImageROT(ImageROT const &); /* compiler_generated() */
private:
    ImageROT();
    virtual ~ImageROT() override;
    std::vector<unsigned char *,std::allocator<unsigned char *> > m_data; // 0xC
    TextureFormat m_format; // 0x18
public:
    ImageROT &operator=(ImageROT const &); /* compiler_generated() */
};
static_assert(sizeof(ImageROT) == 28, "Invalid ImageROT size");

struct ImageInterface
{
    ImageTGA *(*ReadTarga)(ByteStream &); // 0x0
    void (*WriteTarga)(ByteStream &, __int32, __int32, unsigned __int32 *); // 0x4
    ImageDDS *(*ReadDDS)(ByteStream &); // 0x8
    void (*DestroyImage)(Image *); // 0xC
    void (*EnableLowTex)(); // 0x10
};
static_assert(sizeof(ImageInterface) == 20, "Invalid ImageInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_56DB93(Image const *const);
_inline __int32 Image::width() const // 0x56DB93
{
    mangled_assert("?width@Image@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_56DB93(this);
    return __result;
}

_extern __int32 _sub_56D876(Image const *const);
_inline __int32 Image::height() const // 0x56D876
{
    mangled_assert("?height@Image@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_56D876(this);
    return __result;
}

_extern unsigned __int32 *_sub_56D6A1(ImageTGA *const);
_inline unsigned __int32 *ImageTGA::data() // 0x56D6A1
{
    mangled_assert("?data@ImageTGA@@QAEPAIXZ");
    todo("implement");
    unsigned __int32 * __result = _sub_56D6A1(this);
    return __result;
}

_extern unsigned __int32 const *_sub_56D6A5(ImageTGA const *const);
_inline unsigned __int32 const *ImageTGA::data() const // 0x56D6A5
{
    mangled_assert("?data@ImageTGA@@QBEPBIXZ");
    todo("implement");
    unsigned __int32 const * __result = _sub_56D6A5(this);
    return __result;
}

/* ---------- private code */

#endif // __IMAGE_H__
/* combined */
#ifndef __IMAGE_H__
#define __IMAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct MipStruct
{
    __int32 width; // 0x0
    __int32 height; // 0x4
    unsigned __int32 *data; // 0x8
    __int32 pad; // 0xC
};
static_assert(sizeof(MipStruct) == 16, "Invalid MipStruct size");

class Image
{
public:
    enum Type
    {
        TypeTGA = 0,
        TypeDDS,
        TypeROT,
        TYPE_COUNT,
        TypeUnknown,
    };
    virtual Image::Type type() const = 0;
    _inline __int32 width() const;
    _inline __int32 height() const;
    Image(Image const &); /* compiler_generated() */
protected:
    _inline Image();
    virtual _inline ~Image();
    __int32 m_width; // 0x4
    __int32 m_height; // 0x8
public:
    Image &operator=(Image const &); /* compiler_generated() */
};
static_assert(sizeof(Image) == 12, "Invalid Image size");

class ImageTGA :
    public Image
{
public:
    virtual _inline Image::Type type() const override;
    unsigned __int32 const *data() const;
    _inline unsigned __int32 *data();
    ImageTGA(ImageTGA const &); /* compiler_generated() */
private:
    ImageTGA();
    virtual ~ImageTGA() override;
    unsigned char *m_data; // 0xC
public:
    ImageTGA &operator=(ImageTGA const &); /* compiler_generated() */
};
static_assert(sizeof(ImageTGA) == 16, "Invalid ImageTGA size");

class ImageDDS :
    public Image
{
public:
    virtual _inline Image::Type type() const override;
    unsigned __int32 numMipLevels() const;
    unsigned char const *data(__int32) const;
    unsigned char *data(__int32);
    _inline TextureFormat format() const;
    ImageDDS(ImageDDS const &); /* compiler_generated() */
private:
    ImageDDS();
    virtual ~ImageDDS() override;
    std::vector<unsigned char *,std::allocator<unsigned char *> > m_data; // 0xC
    TextureFormat m_format; // 0x18
public:
    ImageDDS &operator=(ImageDDS const &); /* compiler_generated() */
};
static_assert(sizeof(ImageDDS) == 28, "Invalid ImageDDS size");

class ImageROT :
    public Image
{
public:
    virtual _inline Image::Type type() const override;
    bool load(ByteStream &);
    unsigned __int32 numMipLevels() const;
    unsigned char const *data(__int32) const;
    _inline unsigned char *data(__int32);
    _inline TextureFormat format() const;
    static __int32 handleHEAD(IFF *iff, IFFChunk *chunk, void *user0, void *width);
    static __int32 handleMIPS(IFF *iff, IFFChunk *chunk, void *user0, void *);
    static __int32 handleMLVL(IFF *iff, IFFChunk *chunk, void *user0, void *width);
    ImageROT(ImageROT const &); /* compiler_generated() */
private:
    ImageROT();
    virtual ~ImageROT() override;
    std::vector<unsigned char *,std::allocator<unsigned char *> > m_data; // 0xC
    TextureFormat m_format; // 0x18
public:
    ImageROT &operator=(ImageROT const &); /* compiler_generated() */
};
static_assert(sizeof(ImageROT) == 28, "Invalid ImageROT size");

struct ImageInterface
{
    ImageTGA *(*ReadTarga)(ByteStream &); // 0x0
    void (*WriteTarga)(ByteStream &, __int32, __int32, unsigned __int32 *); // 0x4
    ImageDDS *(*ReadDDS)(ByteStream &); // 0x8
    void (*DestroyImage)(Image *); // 0xC
    void (*EnableLowTex)(); // 0x10
};
static_assert(sizeof(ImageInterface) == 20, "Invalid ImageInterface size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern __int32 _sub_10033BA0(Image const *const);
_inline __int32 Image::width() const // 0x10033BA0
{
    mangled_assert("?width@Image@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10033BA0(this);
    return __result;
}

_extern __int32 _sub_10033B90(Image const *const);
_inline __int32 Image::height() const // 0x10033B90
{
    mangled_assert("?height@Image@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10033B90(this);
    return __result;
}

_extern _sub_10060F40(Image *const);
_inline Image::Image() // 0x10060F40
{
    mangled_assert("??0Image@@IAE@XZ");
    todo("implement");
    _sub_10060F40(this);
}

_extern void _sub_10061020(Image *const);
_inline Image::~Image() // 0x10061020
{
    mangled_assert("??1Image@@MAE@XZ");
    todo("implement");
    _sub_10061020(this);
}

_extern Image::Type _sub_10064310(ImageTGA const *const);
_inline Image::Type ImageTGA::type() const // 0x10064310
{
    mangled_assert("?type@ImageTGA@@UBE?AW4Type@Image@@XZ");
    todo("implement");
    Image::Type __result = _sub_10064310(this);
    return __result;
}

_extern unsigned __int32 *_sub_10033B30(ImageTGA *const);
_inline unsigned __int32 *ImageTGA::data() // 0x10033B30
{
    mangled_assert("?data@ImageTGA@@QAEPAIXZ");
    todo("implement");
    unsigned __int32 * __result = _sub_10033B30(this);
    return __result;
}

_extern Image::Type _sub_100642F0(ImageDDS const *const);
_inline Image::Type ImageDDS::type() const // 0x100642F0
{
    mangled_assert("?type@ImageDDS@@UBE?AW4Type@Image@@XZ");
    todo("implement");
    Image::Type __result = _sub_100642F0(this);
    return __result;
}

_extern TextureFormat _sub_100A1C10(ImageDDS const *const);
_inline TextureFormat ImageDDS::format() const // 0x100A1C10
{
    mangled_assert("?format@ImageDDS@@QBE?AW4TextureFormat@@XZ");
    todo("implement");
    TextureFormat __result = _sub_100A1C10(this);
    return __result;
}

_extern Image::Type _sub_10064300(ImageROT const *const);
_inline Image::Type ImageROT::type() const // 0x10064300
{
    mangled_assert("?type@ImageROT@@UBE?AW4Type@Image@@XZ");
    todo("implement");
    Image::Type __result = _sub_10064300(this);
    return __result;
}

_extern unsigned char *_sub_100A18C0(ImageROT *const, __int32);
_inline unsigned char *ImageROT::data(__int32) // 0x100A18C0
{
    mangled_assert("?data@ImageROT@@QAEPAEH@Z");
    todo("implement");
    unsigned char * __result = _sub_100A18C0(this, arg);
    return __result;
}

_extern TextureFormat _sub_100A1C20(ImageROT const *const);
_inline TextureFormat ImageROT::format() const // 0x100A1C20
{
    mangled_assert("?format@ImageROT@@QBE?AW4TextureFormat@@XZ");
    todo("implement");
    TextureFormat __result = _sub_100A1C20(this);
    return __result;
}

/* ---------- private code */

#endif // __IMAGE_H__
#endif
