#if 0
#ifndef __ARCHIVESTREAM_H__
#define __ARCHIVESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ArchiveStoreStream :
    public ByteStream
{
private:
    ArchiveStoreStream(ArchiveStoreStream const &);
    ArchiveStoreStream(Archive::FileProxy const &);
public:
    virtual ~ArchiveStoreStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
private:
    Archive::FileProxy m_FileProxy; // 0x110
    _iobuf *m_fHandle; // 0x118
    unsigned long m_currentPos; // 0x11C
    ArchiveStoreStream &operator=(ArchiveStoreStream const &);
};
static_assert(sizeof(ArchiveStoreStream) == 288, "Invalid ArchiveStoreStream size");

class ArchiveCompressStream :
    public ByteStream
{
private:
    ArchiveCompressStream(ArchiveCompressStream const &);
    ArchiveCompressStream(Archive::FileProxy const &);
public:
    virtual ~ArchiveCompressStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
private:
    Archive::FileProxy m_FileProxy; // 0x110
    _iobuf *m_fHandle; // 0x118
    unsigned long m_currentPos; // 0x11C
    CompressionStream *m_Compressor; // 0x120
    unsigned char *m_pRawBuffer; // 0x124
    unsigned long m_RawDataSize; // 0x128
    unsigned long m_RawPos; // 0x12C
    void InitStream();
    void ShutStream();
    ArchiveCompressStream &operator=(ArchiveCompressStream const &);
};
static_assert(sizeof(ArchiveCompressStream) == 304, "Invalid ArchiveCompressStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ARCHIVESTREAM_H__
#endif
