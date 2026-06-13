#if 0
#ifndef __FILEPATHARCHIVE_H__
#define __FILEPATHARCHIVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePathArchive :
    public FilePath::Source
{
private:
    FilePathArchive(FilePathArchive const &);
    FilePathArchive();
public:
    virtual ~FilePathArchive() override;
    static FilePathArchive *Create(char const *TOCName, Archive *pArchive);
    virtual bool ConvertFromAlias(char *, char const *, StreamMode const) override;
    virtual bool ConvertToAlias(char *, char const *) override;
    virtual ByteStream *FileOpen(char const *, StreamMode) override;
    virtual bool FileDel(char const *) override;
    virtual FilePath::FILE_Type FileType(char const *, StreamMode) override;
    virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) override;
    class Data;
private:
    FilePathArchive::Data *m_pimpl; // 0x4
    FilePathArchive &operator=(FilePathArchive const &);
};
static_assert(sizeof(FilePathArchive) == 8, "Invalid FilePathArchive size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATHARCHIVE_H__
#endif
