#if 0
#ifndef __COMPRESSION_H__
#define __COMPRESSION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CompressionStream
{
public:
    enum Mode
    {
        Mode_Compress = 0,
        Mode_Expand,
    };
private:
    CompressionStream(CompressionStream const &);
public:
    CompressionStream(CompressionStream::Mode);
    ~CompressionStream();
    void SetCompressInput(void const *, unsigned __int32, bool);
    unsigned long ReadCompressed(void *, unsigned long);
    void SetExpandInput(void const *, unsigned __int32);
    unsigned long ReadExpanded(void *, unsigned long);
    class Data;
private:
    CompressionStream::Data *m_pimpl; // 0x0
    CompressionStream &operator=(CompressionStream const &);
};
static_assert(sizeof(CompressionStream) == 4, "Invalid CompressionStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COMPRESSION_H__
#endif
