#if 0
#ifndef __FILEPATHHDRAW_H__
#define __FILEPATHHDRAW_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePathHDRaw :
    public FilePath::Source
{
private:
    FilePathHDRaw(FilePathHDRaw const &);
public:
    FilePathHDRaw();
    virtual ~FilePathHDRaw() override;
    static ByteStream *UnaliasedFileOpen(char const *filename, StreamMode mode);
    static bool UnaliasedFileDel(char const *filename);
    static FilePath::FILE_Type UnaliasedFileType(char const *filename);
    static bool UnaliasedFileExists(char const *fname);
    static void UnaliasedFileList(char const *filespec, std::vector<fstring<260>,std::allocator<fstring<260> > > &out);
    static void UnaliasedFileList(char const *filespec, FilePath::FileListObj *out);
    static bool UnaliasedDirCreate(char const *filename);
    static long long UnaliasedFileTime(char const *filename);
    virtual bool ConvertFromAlias(char *, char const *, StreamMode const) override;
    virtual bool ConvertToAlias(char *, char const *) override;
    virtual ByteStream *FileOpen(char const *, StreamMode) override;
    virtual bool FileDel(char const *) override;
    virtual FilePath::FILE_Type FileType(char const *, StreamMode) override;
    virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) override;
private:
    FilePathHDRaw &operator=(FilePathHDRaw const &);
};
static_assert(sizeof(FilePathHDRaw) == 4, "Invalid FilePathHDRaw size");

class FileListRaw :
    public FilePath::FileListObj
{
public:
    _inline FileListRaw(FileListRaw const &); /* compiler_generated() */
    FileListRaw(char const *);
    virtual ~FileListRaw();
    unsigned __int32 GetCount();
    char const *GetFullPathAt(unsigned __int32);
private:
    virtual void AddFile(char const *) override;
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > FileList;
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_files; // 0x4
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_rootpath; // 0x10
public:
    _inline FileListRaw &operator=(FileListRaw const &); /* compiler_generated() */
};
static_assert(sizeof(FileListRaw) == 40, "Invalid FileListRaw size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATHHDRAW_H__
#endif
