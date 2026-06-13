#if 0
#ifndef __RAMSTREAM_H__
#define __RAMSTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RamStream :
    public ByteStream
{
public:
    _inline RamStream(RamStream const &); /* compiler_generated() */
    RamStream();
    virtual ~RamStream() override;
    virtual _inline char const *GetStreamName() const;
    virtual void SetStreamMode(StreamMode) override;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Open(unsigned __int32);
    bool Attach(void *, unsigned __int32, bool, StreamMode);
    void *Detach();
    void *GetBuffer();
private:
    unsigned char *m_buffer; // 0x110
    unsigned __int32 m_bufsize; // 0x114
    bool m_bufOwn; // 0x118
    bool m_bufExtend; // 0x119
    unsigned __int32 m_pos; // 0x11C
    unsigned __int32 m_maxPos; // 0x120
public:
    _inline RamStream &operator=(RamStream const &); /* compiler_generated() */
};
static_assert(sizeof(RamStream) == 292, "Invalid RamStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_10003264(RamStream const *const);
_inline char const *RamStream::GetStreamName() const // 0x10003264
{
    mangled_assert("?GetStreamName@RamStream@@UBEPBDXZ");
    todo("implement");
    char const * __result = _sub_10003264(this);
    return __result;
}

/* ---------- private code */

#endif // __RAMSTREAM_H__
/* combined */
#ifndef __RAMSTREAM_H__
#define __RAMSTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RamStream :
    public ByteStream
{
public:
    RamStream(RamStream const &); /* compiler_generated() */
    RamStream();
    virtual ~RamStream() override;
    virtual char const *GetStreamName() const;
    virtual void SetStreamMode(StreamMode) override;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Open(unsigned __int32);
    bool Attach(void *, unsigned __int32, bool, StreamMode);
    void *Detach();
    void *GetBuffer();
private:
    unsigned char *m_buffer; // 0x110
    unsigned __int32 m_bufsize; // 0x114
    bool m_bufOwn; // 0x118
    bool m_bufExtend; // 0x119
    unsigned __int32 m_pos; // 0x11C
    unsigned __int32 m_maxPos; // 0x120
public:
    RamStream &operator=(RamStream const &); /* compiler_generated() */
};
static_assert(sizeof(RamStream) == 292, "Invalid RamStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RAMSTREAM_H__
/* combined */
#ifndef __RAMSTREAM_H__
#define __RAMSTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RamStream :
    public ByteStream
{
public:
    RamStream(RamStream const &); /* compiler_generated() */
    RamStream();
    virtual ~RamStream() override;
    virtual char const *GetStreamName() const;
    virtual void SetStreamMode(StreamMode) override;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Open(unsigned __int32);
    bool Attach(void *, unsigned __int32, bool, StreamMode);
    void *Detach();
    void *GetBuffer();
private:
    unsigned char *m_buffer; // 0x110
    unsigned __int32 m_bufsize; // 0x114
    bool m_bufOwn; // 0x118
    bool m_bufExtend; // 0x119
    unsigned __int32 m_pos; // 0x11C
    unsigned __int32 m_maxPos; // 0x120
public:
    RamStream &operator=(RamStream const &); /* compiler_generated() */
};
static_assert(sizeof(RamStream) == 292, "Invalid RamStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RAMSTREAM_H__
#endif
