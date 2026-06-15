#if 0
#ifndef __FILEPATHHD_H__
#define __FILEPATHHD_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePathHD :
    public FilePath::Source
{
private:
    FilePathHD(FilePathHD const &);
    FilePathHD();
public:
    virtual ~FilePathHD() override;
    static FilePathHD *Create(char const *pathprepend, StreamMode mode);
    virtual bool ConvertFromAlias(char *, char const *, StreamMode const) override;
    virtual bool ConvertToAlias(char *, char const *) override;
    virtual ByteStream *FileOpen(char const *, StreamMode) override;
    virtual bool FileDel(char const *) override;
    virtual FilePath::FILE_Type FileType(char const *, StreamMode) override;
    virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) override;
private:
    StreamMode m_mode; // 0x4
    char m_path[260]; // 0x8
    FilePathHD &operator=(FilePathHD const &);
};
static_assert(sizeof(FilePathHD) == 268, "Invalid FilePathHD size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATHHD_H__
#endif
