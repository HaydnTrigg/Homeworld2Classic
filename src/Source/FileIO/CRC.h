#if 0
#ifndef __CRC_H__
#define __CRC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CRC
{
public:
    _inline CRC();
    _inline ~CRC();
    _inline void ResetStream();
    _inline unsigned long GetCRC() const;
    unsigned __int32 GetValueQty() const;
    void AddValues(void const *, unsigned __int32);
    void AddFile(ByteStream *);
    void AddFile(_iobuf *);
    bool operator==(CRC const &) const;
    bool operator!=(CRC const &) const;
private:
    unsigned long m_crc; // 0x0
    unsigned __int32 m_qty; // 0x4
};
static_assert(sizeof(CRC) == 8, "Invalid CRC size");

class CRCStream :
    public ByteStream
{
private:
    CRC *const m_crc; // 0x110
    unsigned long m_size; // 0x114
    CRCStream(CRCStream const &);
public:
    CRCStream(CRC *);
    virtual _inline char const *GetStreamName() const;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
protected:
    virtual void SetStreamMode(StreamMode) override;
private:
    CRCStream &operator=(CRCStream const &);
public:
    virtual _inline ~CRCStream() override; /* compiler_generated() */
};
static_assert(sizeof(CRCStream) == 280, "Invalid CRCStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_1000325E(CRCStream const *const);
_inline char const *CRCStream::GetStreamName() const // 0x1000325E
{
    mangled_assert("?GetStreamName@CRCStream@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_1000325E(this);
    return __result;
}

_extern void _sub_10003767(CRC *const);
_inline void CRC::ResetStream() // 0x10003767
{
    mangled_assert("?ResetStream@CRC@@QAEXXZ");
    todo("implement");
    _sub_10003767(this);
}

_extern _sub_10001A8F(CRC *const);
_inline CRC::CRC() // 0x10001A8F
{
    mangled_assert("??0CRC@@QAE@XZ");
    todo("implement");
    _sub_10001A8F(this);
}

_extern void _sub_10001DFD(CRC *const);
_inline CRC::~CRC() // 0x10001DFD
{
    mangled_assert("??1CRC@@QAE@XZ");
    todo("implement");
    _sub_10001DFD(this);
}

_extern unsigned long _sub_10003095(CRC const *const);
_inline unsigned long CRC::GetCRC() const // 0x10003095
{
    mangled_assert("?GetCRC@CRC@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_10003095(this);
    return __result;
}

/* ---------- private code */

#endif // __CRC_H__
/* combined */
#ifndef __CRC_H__
#define __CRC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CRC
{
public:
    _inline CRC();
    _inline ~CRC();
    _inline void ResetStream();
    _inline unsigned long GetCRC() const;
    unsigned __int32 GetValueQty() const;
    void AddValues(void const *, unsigned __int32);
    void AddFile(ByteStream *);
    void AddFile(_iobuf *);
    bool operator==(CRC const &) const;
    bool operator!=(CRC const &) const;
private:
    unsigned long m_crc; // 0x0
    unsigned __int32 m_qty; // 0x4
};
static_assert(sizeof(CRC) == 8, "Invalid CRC size");

class CRCStream :
    public ByteStream
{
private:
    CRC *const m_crc; // 0x110
    unsigned long m_size; // 0x114
    CRCStream(CRCStream const &);
public:
    CRCStream(CRC *);
    virtual char const *GetStreamName() const;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
protected:
    virtual void SetStreamMode(StreamMode) override;
private:
    CRCStream &operator=(CRCStream const &);
public:
    virtual ~CRCStream() override; /* compiler_generated() */
};
static_assert(sizeof(CRCStream) == 280, "Invalid CRCStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_56C9BB(CRC *const);
_inline void CRC::ResetStream() // 0x56C9BB
{
    mangled_assert("?ResetStream@CRC@@QAEXXZ");
    todo("implement");
    _sub_56C9BB(this);
}

_extern _sub_56BF56(CRC *const);
_inline CRC::CRC() // 0x56BF56
{
    mangled_assert("??0CRC@@QAE@XZ");
    todo("implement");
    _sub_56BF56(this);
}

_extern void _sub_56C27E(CRC *const);
_inline CRC::~CRC() // 0x56C27E
{
    mangled_assert("??1CRC@@QAE@XZ");
    todo("implement");
    _sub_56C27E(this);
}

_extern unsigned long _sub_56C694(CRC const *const);
_inline unsigned long CRC::GetCRC() const // 0x56C694
{
    mangled_assert("?GetCRC@CRC@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_56C694(this);
    return __result;
}

/* ---------- private code */

#endif // __CRC_H__
/* combined */
#ifndef __CRC_H__
#define __CRC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CRC
{
public:
    _inline CRC();
    _inline ~CRC();
    _inline void ResetStream();
    _inline unsigned long GetCRC() const;
    unsigned __int32 GetValueQty() const;
    void AddValues(void const *, unsigned __int32);
    void AddFile(ByteStream *);
    void AddFile(_iobuf *);
    bool operator==(CRC const &) const;
    bool operator!=(CRC const &) const;
private:
    unsigned long m_crc; // 0x0
    unsigned __int32 m_qty; // 0x4
};
static_assert(sizeof(CRC) == 8, "Invalid CRC size");

class CRCStream :
    public ByteStream
{
private:
    CRC *const m_crc; // 0x110
    unsigned long m_size; // 0x114
    CRCStream(CRCStream const &);
public:
    CRCStream(CRC *);
    virtual char const *GetStreamName() const;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
protected:
    virtual void SetStreamMode(StreamMode) override;
private:
    CRCStream &operator=(CRCStream const &);
public:
    virtual ~CRCStream() override; /* compiler_generated() */
};
static_assert(sizeof(CRCStream) == 280, "Invalid CRCStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_100BD9E0(CRC *const);
_inline void CRC::ResetStream() // 0x100BD9E0
{
    mangled_assert("?ResetStream@CRC@@QAEXXZ");
    todo("implement");
    _sub_100BD9E0(this);
}

_extern _sub_100BD600(CRC *const);
_inline CRC::CRC() // 0x100BD600
{
    mangled_assert("??0CRC@@QAE@XZ");
    todo("implement");
    _sub_100BD600(this);
}

_extern void _sub_100BD7A0(CRC *const);
_inline CRC::~CRC() // 0x100BD7A0
{
    mangled_assert("??1CRC@@QAE@XZ");
    todo("implement");
    _sub_100BD7A0(this);
}

_extern unsigned long _sub_100BD9D0(CRC const *const);
_inline unsigned long CRC::GetCRC() const // 0x100BD9D0
{
    mangled_assert("?GetCRC@CRC@@QBEKXZ");
    todo("implement");
    unsigned long __result = _sub_100BD9D0(this);
    return __result;
}

/* ---------- private code */

#endif // __CRC_H__
#endif
