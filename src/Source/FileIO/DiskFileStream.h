#if 0
#ifndef __DISKFILESTREAM_H__
#define __DISKFILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DiskFileStream :
    public ByteStream
{
private:
    DiskFileStream(DiskFileStream const &);
public:
    DiskFileStream();
    virtual ~DiskFileStream() override;
    static DiskFileStream *TryOpen(char const *fname, StreamMode openMode);
    static long long GetFileDate(char const *fname);
    long Open(char const *, StreamMode);
    long Attach(unsigned long, StreamMode, bool);
    long Close();
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
private:
    unsigned long m_file; // 0x110
    unsigned long m_currentPos; // 0x114
    bool m_closeOnDestroy; // 0x118
    void CloseIfOpen();
    void Reset();
    DiskFileStream &operator=(DiskFileStream const &);
};
static_assert(sizeof(DiskFileStream) == 284, "Invalid DiskFileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DISKFILESTREAM_H__
#endif
