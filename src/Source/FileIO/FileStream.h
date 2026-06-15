#if 0
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    _inline bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool FileStream::Eof() // 0x1000FA9D
{
    mangled_assert("?Eof@FileStream@@QAE_NXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
/* combined */
#ifndef __FILESTREAM_H__
#define __FILESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileStream :
    public ByteStream
{
private:
    FileStream(FileStream const &);
public:
    FileStream();
    virtual ~FileStream() override;
    virtual unsigned long Read(void *, unsigned long) override;
    void Write(char const *);
    virtual unsigned long Write(void const *, unsigned long) override;
    virtual void Flush() override;
    virtual unsigned long SetPos(unsigned long) override;
    virtual unsigned long GetPos() override;
    virtual unsigned long GetLen() override;
    bool Eof();
    long Open(char const *, StreamMode);
    long Close();
    unsigned long ReadLine(char *, unsigned long);
private:
    ByteStreamProxy m_stream; // 0x110
    FileStream &operator=(FileStream const &);
};
static_assert(sizeof(FileStream) == 276, "Invalid FileStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILESTREAM_H__
#endif
