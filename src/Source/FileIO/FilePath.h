#if 0
#ifndef __FILEPATH_H__
#define __FILEPATH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePath
{
public:
    class Source
    {
    public:
        virtual ~Source();
        virtual bool ConvertFromAlias(char *, char const *, StreamMode const) = 0;
        virtual bool ConvertToAlias(char *, char const *) = 0;
        virtual ByteStream *FileOpen(char const *, StreamMode) = 0;
        virtual bool FileDel(char const *) = 0;
        virtual FilePath::FILE_Type FileType(char const *, StreamMode) = 0;
        virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) = 0;
        _inline Source(FilePath::Source const &); /* compiler_generated() */
        _inline Source(); /* compiler_generated() */
        _inline FilePath::Source &operator=(FilePath::Source const &); /* compiler_generated() */
    };
    static_assert(sizeof(Source) == 4, "Invalid Source size");
    class FileListObj
    {
    public:
        virtual void AddFile(char const *) = 0;
        _inline FileListObj(FilePath::FileListObj const &); /* compiler_generated() */
        _inline FileListObj(); /* compiler_generated() */
        _inline FilePath::FileListObj &operator=(FilePath::FileListObj const &); /* compiler_generated() */
    };
    static_assert(sizeof(FileListObj) == 4, "Invalid FileListObj size");
    enum FILE_Type
    {
        FILE_Invalid = 0,
        FILE_File,
        FILE_Directory,
    };
    enum
    {
        MAXPATH = 260, // 0x0104
    };
    typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
    struct FindState
    {
        std::vector<fstring<260>,std::allocator<fstring<260> > > ffResult; // 0x0
        unsigned __int32 ffIndex; // 0xC
        FindState(FilePath::FindState const &); /* compiler_generated() */
        _inline FindState(); /* compiler_generated() */
        _inline ~FindState(); /* compiler_generated() */
        FilePath::FindState &operator=(FilePath::FindState const &); /* compiler_generated() */
    };
    static_assert(sizeof(FindState) == 16, "Invalid FindState size");
    static bool AddAlias(char const *alias, char const *id, long const priority, FilePath::Source *source);
    static bool RemoveAlias(char const *alias, char const *id);
    static void RemoveAllAliases();
    static ByteStreamProxy OpenStream(char const *streamName, StreamMode mode);
    static bool FindFirst(char const *filespec, char *filename, FilePath::FindState *findState);
    static bool FindNext(char *filename, FilePath::FindState *findState);
    static bool FileExists(char const *filename);
    static FilePath::FILE_Type GetFileType(char const *streamName, StreamMode mode);
    static bool RemoveFile(char const *filename);
    static bool ConvertFromAlias(char *streamName, StreamMode mode);
    static bool ConvertToAlias(char *fname);
    static bool ContainsAlias(char const *fname);
    static bool SplitPath(char const *fullpath, char *outalias, char *outpath, char *outfname, char *outext);
    static bool MakePath(char *fullpath, char const *alias, char const *path, char const *fname, char const *extension);
    static void FullPath(char *fullpath, char const *relpath, unsigned __int32 maxLength);
private:
    FilePath(FilePath const &);
    FilePath();
    ~FilePath();
};
static_assert(sizeof(FilePath) == 1, "Invalid FilePath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATH_H__
/* combined */
#ifndef __FILEPATH_H__
#define __FILEPATH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePath
{
public:
    class Source
    {
    public:
        virtual ~Source();
        virtual bool ConvertFromAlias(char *, char const *, StreamMode const) = 0;
        virtual bool ConvertToAlias(char *, char const *) = 0;
        virtual ByteStream *FileOpen(char const *, StreamMode) = 0;
        virtual bool FileDel(char const *) = 0;
        virtual FilePath::FILE_Type FileType(char const *, StreamMode) = 0;
        virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) = 0;
        Source(FilePath::Source const &); /* compiler_generated() */
        Source(); /* compiler_generated() */
        FilePath::Source &operator=(FilePath::Source const &); /* compiler_generated() */
    };
    static_assert(sizeof(Source) == 4, "Invalid Source size");
    class FileListObj
    {
    public:
        virtual void AddFile(char const *) = 0;
        FileListObj(FilePath::FileListObj const &); /* compiler_generated() */
        FileListObj(); /* compiler_generated() */
        FilePath::FileListObj &operator=(FilePath::FileListObj const &); /* compiler_generated() */
    };
    static_assert(sizeof(FileListObj) == 4, "Invalid FileListObj size");
    enum FILE_Type
    {
        FILE_Invalid = 0,
        FILE_File,
        FILE_Directory,
    };
    enum
    {
        MAXPATH = 260, // 0x0104
    };
    typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
    struct FindState
    {
        std::vector<fstring<260>,std::allocator<fstring<260> > > ffResult; // 0x0
        unsigned __int32 ffIndex; // 0xC
        FindState(FilePath::FindState const &); /* compiler_generated() */
        FindState(); /* compiler_generated() */
        ~FindState(); /* compiler_generated() */
        FilePath::FindState &operator=(FilePath::FindState const &); /* compiler_generated() */
    };
    static_assert(sizeof(FindState) == 16, "Invalid FindState size");
    static bool AddAlias(char const *, char const *, long const, FilePath::Source *);
    static bool RemoveAlias(char const *, char const *);
    static void RemoveAllAliases();
    static ByteStreamProxy OpenStream(char const *, StreamMode);
    static bool FindFirst(char const *, char *, FilePath::FindState *);
    static bool FindNext(char *, FilePath::FindState *);
    static bool FileExists(char const *);
    static FilePath::FILE_Type GetFileType(char const *, StreamMode);
    static bool RemoveFile(char const *);
    static bool ConvertFromAlias(char *, StreamMode);
    static bool ConvertToAlias(char *);
    static bool ContainsAlias(char const *);
    static bool SplitPath(char const *, char *, char *, char *, char *);
    static bool MakePath(char *, char const *, char const *, char const *, char const *);
    static void FullPath(char *, char const *, unsigned __int32);
private:
    FilePath(FilePath const &);
    FilePath();
    ~FilePath();
};
static_assert(sizeof(FilePath) == 1, "Invalid FilePath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATH_H__
/* combined */
#ifndef __FILEPATH_H__
#define __FILEPATH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePath
{
public:
    class Source
    {
    public:
        virtual ~Source();
        virtual bool ConvertFromAlias(char *, char const *, StreamMode const) = 0;
        virtual bool ConvertToAlias(char *, char const *) = 0;
        virtual ByteStream *FileOpen(char const *, StreamMode) = 0;
        virtual bool FileDel(char const *) = 0;
        virtual FilePath::FILE_Type FileType(char const *, StreamMode) = 0;
        virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) = 0;
        Source(FilePath::Source const &); /* compiler_generated() */
        Source(); /* compiler_generated() */
        FilePath::Source &operator=(FilePath::Source const &); /* compiler_generated() */
    };
    static_assert(sizeof(Source) == 4, "Invalid Source size");
    class FileListObj
    {
    public:
        virtual void AddFile(char const *) = 0;
        FileListObj(FilePath::FileListObj const &); /* compiler_generated() */
        FileListObj(); /* compiler_generated() */
        FilePath::FileListObj &operator=(FilePath::FileListObj const &); /* compiler_generated() */
    };
    static_assert(sizeof(FileListObj) == 4, "Invalid FileListObj size");
    enum FILE_Type
    {
        FILE_Invalid = 0,
        FILE_File,
        FILE_Directory,
    };
    enum
    {
        MAXPATH = 260, // 0x0104
    };
    typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
    struct FindState
    {
        std::vector<fstring<260>,std::allocator<fstring<260> > > ffResult; // 0x0
        unsigned __int32 ffIndex; // 0xC
        FindState(FilePath::FindState const &); /* compiler_generated() */
        FindState(); /* compiler_generated() */
        ~FindState(); /* compiler_generated() */
        FilePath::FindState &operator=(FilePath::FindState const &); /* compiler_generated() */
    };
    static_assert(sizeof(FindState) == 16, "Invalid FindState size");
    static bool AddAlias(char const *, char const *, long const, FilePath::Source *);
    static bool RemoveAlias(char const *, char const *);
    static void RemoveAllAliases();
    static ByteStreamProxy OpenStream(char const *, StreamMode);
    static bool FindFirst(char const *, char *, FilePath::FindState *);
    static bool FindNext(char *, FilePath::FindState *);
    static bool FileExists(char const *);
    static FilePath::FILE_Type GetFileType(char const *, StreamMode);
    static bool RemoveFile(char const *);
    static bool ConvertFromAlias(char *, StreamMode);
    static bool ConvertToAlias(char *);
    static bool ContainsAlias(char const *);
    static bool SplitPath(char const *, char *, char *, char *, char *);
    static bool MakePath(char *, char const *, char const *, char const *, char const *);
    static void FullPath(char *, char const *, unsigned __int32);
private:
    FilePath(FilePath const &);
    FilePath();
    ~FilePath();
};
static_assert(sizeof(FilePath) == 1, "Invalid FilePath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATH_H__
/* combined */
#ifndef __FILEPATH_H__
#define __FILEPATH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePath
{
public:
    class Source
    {
    public:
        virtual ~Source();
        virtual bool ConvertFromAlias(char *, char const *, StreamMode const) = 0;
        virtual bool ConvertToAlias(char *, char const *) = 0;
        virtual ByteStream *FileOpen(char const *, StreamMode) = 0;
        virtual bool FileDel(char const *) = 0;
        virtual FilePath::FILE_Type FileType(char const *, StreamMode) = 0;
        virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) = 0;
        Source(FilePath::Source const &); /* compiler_generated() */
        Source(); /* compiler_generated() */
        FilePath::Source &operator=(FilePath::Source const &); /* compiler_generated() */
    };
    static_assert(sizeof(Source) == 4, "Invalid Source size");
    class FileListObj
    {
    public:
        virtual void AddFile(char const *) = 0;
        FileListObj(FilePath::FileListObj const &); /* compiler_generated() */
        FileListObj(); /* compiler_generated() */
        FilePath::FileListObj &operator=(FilePath::FileListObj const &); /* compiler_generated() */
    };
    static_assert(sizeof(FileListObj) == 4, "Invalid FileListObj size");
    enum FILE_Type
    {
        FILE_Invalid = 0,
        FILE_File,
        FILE_Directory,
    };
    enum
    {
        MAXPATH = 260, // 0x0104
    };
    typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
    struct FindState
    {
        std::vector<fstring<260>,std::allocator<fstring<260> > > ffResult; // 0x0
        unsigned __int32 ffIndex; // 0xC
        FindState(FilePath::FindState const &); /* compiler_generated() */
        FindState(); /* compiler_generated() */
        ~FindState(); /* compiler_generated() */
        FilePath::FindState &operator=(FilePath::FindState const &); /* compiler_generated() */
    };
    static_assert(sizeof(FindState) == 16, "Invalid FindState size");
    static bool AddAlias(char const *, char const *, long const, FilePath::Source *);
    static bool RemoveAlias(char const *, char const *);
    static void RemoveAllAliases();
    static ByteStreamProxy OpenStream(char const *, StreamMode);
    static bool FindFirst(char const *, char *, FilePath::FindState *);
    static bool FindNext(char *, FilePath::FindState *);
    static bool FileExists(char const *);
    static FilePath::FILE_Type GetFileType(char const *, StreamMode);
    static bool RemoveFile(char const *);
    static bool ConvertFromAlias(char *, StreamMode);
    static bool ConvertToAlias(char *);
    static bool ContainsAlias(char const *);
    static bool SplitPath(char const *, char *, char *, char *, char *);
    static bool MakePath(char *, char const *, char const *, char const *, char const *);
    static void FullPath(char *, char const *, unsigned __int32);
private:
    FilePath(FilePath const &);
    FilePath();
    ~FilePath();
};
static_assert(sizeof(FilePath) == 1, "Invalid FilePath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATH_H__
/* combined */
#ifndef __FILEPATH_H__
#define __FILEPATH_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FilePath
{
public:
    class Source
    {
    public:
        virtual ~Source();
        virtual bool ConvertFromAlias(char *, char const *, StreamMode const) = 0;
        virtual bool ConvertToAlias(char *, char const *) = 0;
        virtual ByteStream *FileOpen(char const *, StreamMode) = 0;
        virtual bool FileDel(char const *) = 0;
        virtual FilePath::FILE_Type FileType(char const *, StreamMode) = 0;
        virtual void FileList(char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &) = 0;
        Source(FilePath::Source const &); /* compiler_generated() */
        Source(); /* compiler_generated() */
        FilePath::Source &operator=(FilePath::Source const &); /* compiler_generated() */
    };
    static_assert(sizeof(Source) == 4, "Invalid Source size");
    class FileListObj
    {
    public:
        virtual void AddFile(char const *) = 0;
        FileListObj(FilePath::FileListObj const &); /* compiler_generated() */
        FileListObj(); /* compiler_generated() */
        FilePath::FileListObj &operator=(FilePath::FileListObj const &); /* compiler_generated() */
    };
    static_assert(sizeof(FileListObj) == 4, "Invalid FileListObj size");
    enum FILE_Type
    {
        FILE_Invalid = 0,
        FILE_File,
        FILE_Directory,
    };
    enum
    {
        MAXPATH = 260, // 0x0104
    };
    typedef std::vector<fstring<260>,std::allocator<fstring<260> > > FoundFiles;
    struct FindState
    {
        std::vector<fstring<260>,std::allocator<fstring<260> > > ffResult; // 0x0
        unsigned __int32 ffIndex; // 0xC
        FindState(FilePath::FindState const &); /* compiler_generated() */
        FindState(); /* compiler_generated() */
        ~FindState(); /* compiler_generated() */
        FilePath::FindState &operator=(FilePath::FindState const &); /* compiler_generated() */
    };
    static_assert(sizeof(FindState) == 16, "Invalid FindState size");
    static bool AddAlias(char const *, char const *, long const, FilePath::Source *);
    static bool RemoveAlias(char const *, char const *);
    static void RemoveAllAliases();
    static ByteStreamProxy OpenStream(char const *, StreamMode);
    static bool FindFirst(char const *, char *, FilePath::FindState *);
    static bool FindNext(char *, FilePath::FindState *);
    static bool FileExists(char const *);
    static FilePath::FILE_Type GetFileType(char const *, StreamMode);
    static bool RemoveFile(char const *);
    static bool ConvertFromAlias(char *, StreamMode);
    static bool ConvertToAlias(char *);
    static bool ContainsAlias(char const *);
    static bool SplitPath(char const *, char *, char *, char *, char *);
    static bool MakePath(char *, char const *, char const *, char const *, char const *);
    static void FullPath(char *, char const *, unsigned __int32);
private:
    FilePath(FilePath const &);
    FilePath();
    ~FilePath();
};
static_assert(sizeof(FilePath) == 1, "Invalid FilePath size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FILEPATH_H__
#endif
