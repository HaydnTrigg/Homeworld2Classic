#ifndef __MKVREADER_H__
#define __MKVREADER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class mkvparser::MkvReader :
    public mkvparser::IMkvReader
{
public:
    MkvReader();
private:
    MkvReader(mkvparser::MkvReader const &);
    mkvparser::MkvReader &operator=(mkvparser::MkvReader const &);
public:
    virtual ~MkvReader() override;
    __int32 Open(char const *);
    void Close();
    virtual __int32 Read(long long, long, unsigned char *) override;
    virtual __int32 Length(long long *, long long *) override;
private:
    long long m_length; // 0x8
    _iobuf *m_file; // 0x10
};
static_assert(sizeof(mkvparser::MkvReader) == 24, "Invalid mkvparser::MkvReader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MKVREADER_H__
