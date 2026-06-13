#if 0
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    _inline ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    _inline StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    _inline ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    _inline ByteStreamProxy(ByteStreamProxy const &);
    _inline ByteStreamProxy(ByteStream *);
    _inline ~ByteStreamProxy();
    _inline ByteStreamProxy &operator=(ByteStreamProxy const &);
    _inline ByteStream const *operator->() const;
    _inline ByteStream *operator->();
    _inline ByteStream &operator*();
    _inline ByteStream *get();
    _inline ByteStream const *get() const;
    _inline void reset();
    _inline ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

extern _inline bool BSWriteArray<char>(ByteStream &s, char const *p, unsigned long c);
extern _inline bool BSWriteArray<unsigned long>(ByteStream &s, unsigned long const *p, unsigned long c);
extern _inline bool BSWriteArray<wchar_t>(ByteStream &s, wchar_t const *p, unsigned long c);
extern _inline bool BSReadArray<char>(ByteStream &s, char *p, unsigned long c);
extern _inline bool BSReadArray<unsigned long>(ByteStream &s, unsigned long *p, unsigned long c);
extern _inline bool BSReadArray<wchar_t>(ByteStream &s, wchar_t *p, unsigned long c);
extern _inline bool BSWrite<unsigned long>(ByteStream &s, unsigned long const &o);
extern _inline bool BSRead<unsigned long>(ByteStream &s, unsigned long &o);

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_1000653B(ByteStream &, char const *, unsigned long);
_inline bool BSWriteArray<char>(ByteStream &s, char const *p, unsigned long c) // 0x1000653B
{
    mangled_assert("??$BSWriteArray@D@@YG_NAAVByteStream@@PBDK@Z");
    todo("implement");
    bool __result = _sub_1000653B(s, p, c);
    return __result;
}

_extern bool _sub_10006558(ByteStream &, unsigned long const *, unsigned long);
_inline bool BSWriteArray<unsigned long>(ByteStream &s, unsigned long const *p, unsigned long c) // 0x10006558
{
    mangled_assert("??$BSWriteArray@K@@YG_NAAVByteStream@@PBKK@Z");
    todo("implement");
    bool __result = _sub_10006558(s, p, c);
    return __result;
}

_extern bool _sub_10006579(ByteStream &, wchar_t const *, unsigned long);
_inline bool BSWriteArray<wchar_t>(ByteStream &s, wchar_t const *p, unsigned long c) // 0x10006579
{
    mangled_assert("??$BSWriteArray@_W@@YG_NAAVByteStream@@PB_WK@Z");
    todo("implement");
    bool __result = _sub_10006579(s, p, c);
    return __result;
}

_extern bool _sub_100064C2(ByteStream &, char *, unsigned long);
_inline bool BSReadArray<char>(ByteStream &s, char *p, unsigned long c) // 0x100064C2
{
    mangled_assert("??$BSReadArray@D@@YG_NAAVByteStream@@PADK@Z");
    todo("implement");
    bool __result = _sub_100064C2(s, p, c);
    return __result;
}

_extern bool _sub_100064DF(ByteStream &, unsigned long *, unsigned long);
_inline bool BSReadArray<unsigned long>(ByteStream &s, unsigned long *p, unsigned long c) // 0x100064DF
{
    mangled_assert("??$BSReadArray@K@@YG_NAAVByteStream@@PAKK@Z");
    todo("implement");
    bool __result = _sub_100064DF(s, p, c);
    return __result;
}

_extern bool _sub_10006500(ByteStream &, wchar_t *, unsigned long);
_inline bool BSReadArray<wchar_t>(ByteStream &s, wchar_t *p, unsigned long c) // 0x10006500
{
    mangled_assert("??$BSReadArray@_W@@YG_NAAVByteStream@@PA_WK@Z");
    todo("implement");
    bool __result = _sub_10006500(s, p, c);
    return __result;
}

_extern bool _sub_10006521(ByteStream &, unsigned long const &);
_inline bool BSWrite<unsigned long>(ByteStream &s, unsigned long const &o) // 0x10006521
{
    mangled_assert("??$BSWrite@K@@YG_NAAVByteStream@@ABK@Z");
    todo("implement");
    bool __result = _sub_10006521(s, o);
    return __result;
}

_extern bool _sub_100064A8(ByteStream &, unsigned long &);
_inline bool BSRead<unsigned long>(ByteStream &s, unsigned long &o) // 0x100064A8
{
    mangled_assert("??$BSRead@K@@YG_NAAVByteStream@@AAK@Z");
    todo("implement");
    bool __result = _sub_100064A8(s, o);
    return __result;
}

_extern StreamMode _sub_1000325A(ByteStream const *const);
_inline StreamMode ByteStream::GetStreamMode() const // 0x1000325A
{
    mangled_assert("?GetStreamMode@ByteStream@@QBE?AW4StreamMode@@XZ");
    todo("implement");
    StreamMode __result = _sub_1000325A(this);
    return __result;
}

_extern void _sub_10004581(ByteStreamProxy *const);
_inline void ByteStreamProxy::reset() // 0x10004581
{
    mangled_assert("?reset@ByteStreamProxy@@QAEXXZ");
    todo("implement");
    _sub_10004581(this);
}

_extern ByteStream *_sub_100044F8(ByteStreamProxy *const);
_inline ByteStream *ByteStreamProxy::release() // 0x100044F8
{
    mangled_assert("?release@ByteStreamProxy@@QAEPAVByteStream@@XZ");
    todo("implement");
    ByteStream * __result = _sub_100044F8(this);
    return __result;
}

_extern ByteStreamProxy &_sub_1000202D(ByteStreamProxy *const, ByteStreamProxy const &);
_inline ByteStreamProxy &ByteStreamProxy::operator=(ByteStreamProxy const &) // 0x1000202D
{
    mangled_assert("??4ByteStreamProxy@@QAEAAV0@ABV0@@Z");
    todo("implement");
    ByteStreamProxy & __result = _sub_1000202D(this, arg);
    return __result;
}

_extern _sub_10001A84(ByteStreamProxy *const, ByteStream *);
_inline ByteStreamProxy::ByteStreamProxy(ByteStream *) // 0x10001A84
{
    mangled_assert("??0ByteStreamProxy@@QAE@PAVByteStream@@@Z");
    todo("implement");
    _sub_10001A84(this, arg);
}

_extern _sub_10001A6F(ByteStreamProxy *const, ByteStreamProxy const &);
_inline ByteStreamProxy::ByteStreamProxy(ByteStreamProxy const &) // 0x10001A6F
{
    mangled_assert("??0ByteStreamProxy@@QAE@ABV0@@Z");
    todo("implement");
    _sub_10001A6F(this, arg);
}

_extern void _sub_10001DE9(ByteStreamProxy *const);
_inline ByteStreamProxy::~ByteStreamProxy() // 0x10001DE9
{
    mangled_assert("??1ByteStreamProxy@@QAE@XZ");
    todo("implement");
    _sub_10001DE9(this);
}

_extern ByteStream *_sub_100021EE(ByteStreamProxy *const);
_inline ByteStream *ByteStreamProxy::operator->() // 0x100021EE
{
    mangled_assert("??CByteStreamProxy@@QAEPAVByteStream@@XZ");
    todo("implement");
    ByteStream * __result = _sub_100021EE(this);
    return __result;
}

_extern ByteStream const *_sub_100021F1(ByteStreamProxy const *const);
_inline ByteStream const *ByteStreamProxy::operator->() const // 0x100021F1
{
    mangled_assert("??CByteStreamProxy@@QBEPBVByteStream@@XZ");
    todo("implement");
    ByteStream const * __result = _sub_100021F1(this);
    return __result;
}

_extern ByteStream &_sub_10002207(ByteStreamProxy *const);
_inline ByteStream &ByteStreamProxy::operator*() // 0x10002207
{
    mangled_assert("??DByteStreamProxy@@QAEAAVByteStream@@XZ");
    todo("implement");
    ByteStream & __result = _sub_10002207(this);
    return __result;
}

_extern ByteStream const *_sub_100042F0(ByteStreamProxy const *const);
_inline ByteStream const *ByteStreamProxy::get() const // 0x100042F0
{
    mangled_assert("?get@ByteStreamProxy@@QBEPBVByteStream@@XZ");
    todo("implement");
    ByteStream const * __result = _sub_100042F0(this);
    return __result;
}

_extern ByteStream *_sub_100042ED(ByteStreamProxy *const);
_inline ByteStream *ByteStreamProxy::get() // 0x100042ED
{
    mangled_assert("?get@ByteStreamProxy@@QAEPAVByteStream@@XZ");
    todo("implement");
    ByteStream * __result = _sub_100042ED(this);
    return __result;
}

_extern void const *_sub_100021B8(ByteStreamProxy const *const);
_inline void const *ByteStreamProxy::operator void const *() const // 0x100021B8
{
    mangled_assert("??BByteStreamProxy@@QBEPBXXZ");
    todo("implement");
    void const * __result = _sub_100021B8(this);
    return __result;
}

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
/* combined */
#ifndef __BYTESTREAM_H__
#define __BYTESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum
{
    BS_ReadBit = 1, // 0x0001
    BS_WriteBit = 2, // 0x0002
};

enum StreamMode
{
    Mode_None = 0,
    Mode_Read,
    Mode_Write,
    Mode_Both,
};

/* ---------- definitions */

class ByteStream
{
private:
    StreamMode m_mode; // 0x4
    fstring<260> m_name; // 0x8
public:
    ByteStream(ByteStream const &); /* compiler_generated() */
    ByteStream();
    virtual ~ByteStream();
    virtual void SetStreamName(char const *);
    virtual unsigned long Read(void *, unsigned long) = 0;
    virtual unsigned long Write(void const *, unsigned long) = 0;
    virtual void Flush() = 0;
    virtual unsigned long SetPos(unsigned long) = 0;
    virtual unsigned long GetPos() = 0;
    virtual unsigned long GetLen() = 0;
    char const *GetStreamName() const;
    StreamMode GetStreamMode() const;
protected:
    virtual void SetStreamMode(StreamMode);
public:
    ByteStream &operator=(ByteStream const &); /* compiler_generated() */
};
static_assert(sizeof(ByteStream) == 272, "Invalid ByteStream size");

class ByteStreamProxy
{
private:
    ByteStream *m_ptr; // 0x0
public:
    ByteStreamProxy(ByteStreamProxy const &);
    ByteStreamProxy(ByteStream *);
    ~ByteStreamProxy();
    ByteStreamProxy &operator=(ByteStreamProxy const &);
    ByteStream const *operator->() const;
    ByteStream *operator->();
    ByteStream &operator*();
    ByteStream *get();
    ByteStream const *get() const;
    void reset();
    ByteStream *release();
    void const *operator const void *() const;
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(ByteStreamProxy) == 4, "Invalid ByteStreamProxy size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BYTESTREAM_H__
#endif
