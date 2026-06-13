#if 0
#ifndef __SAVESTREAM_H__
#define __SAVESTREAM_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SaveStreamType
{
    SaveStream_File = 0,
    SaveStream_Memory,
    SaveStream_CRC,
    SaveStream_MemoryCRC,
};

enum SaveStreamWriteMode
{
    SaveStream_Binary = 0,
    SaveStream_Text,
    SaveStream_ReadableBinary,
};

/* ---------- definitions */

class SaveStream
{
public:
    SaveStream(char const *, StreamMode, SaveStreamType, SaveStreamWriteMode);
    ~SaveStream();
    SaveStreamType getType();
    bool write(void const *, unsigned __int32, bool);
    bool writeToDisk(char const *);
    bool writeToken(char const *);
    bool getNextToken(char *, unsigned __int32);
    void writeNewLine();
    void writeComma();
    void writeSpace();
    void Write(vector4 const &);
    void Write(vector3 const &);
    void Write(wchar_t const *);
    void Write(char const *);
    void Write(float const);
    void Write(unsigned char const);
    void Write(unsigned __int32 const);
    void Read(vector4 &);
    void Read(vector3 &);
    bool Read(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > *);
    bool Read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    bool Read(wchar_t *);
    bool Read(char *);
    void Read(float &);
    void Read(unsigned char &);
    void Read(unsigned __int32 &);
    bool readFilteredBytes(char *, unsigned __int32);
    bool readEntry(void *, unsigned __int32);
    bool writeEntry(void const *, unsigned __int32);
    unsigned __int32 getCRC();
    void setCursorPos(unsigned __int32);
    unsigned __int32 getCursorPos();
    unsigned __int32 getLength();
private:
    bool endOfStream();
    bool read(void *, unsigned __int32);
    SaveStreamWriteMode m_writeMode; // 0x0
    SaveStreamType m_saveStreamType; // 0x4
    ByteStream *m_stream; // 0x8
    CRCStream *m_crcstream; // 0xC
    CRC *m_crc; // 0x10
};
static_assert(sizeof(SaveStream) == 20, "Invalid SaveStream size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SAVESTREAM_H__
#endif
