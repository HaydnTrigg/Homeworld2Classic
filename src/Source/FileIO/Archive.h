#if 0
#ifndef __ARCHIVE_H__
#define __ARCHIVE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Archive
{
public:
    class TOCProxy
    {
public:
        typedef ArchiveInternals::TOCEntry PTR;
        _inline TOCProxy(Archive const *, ArchiveInternals::TOCEntry const *);
        _inline TOCProxy();
        _inline Archive::TOCProxy &operator=(Archive::TOCProxy const &);
        char const *GetTOCName() const;
        char const *GetTOCAlias() const;
        ArchiveIterator<Archive::FolderProxy> Folder_begin() const;
        ArchiveIterator<Archive::FolderProxy> Folder_end() const;
        ArchiveIterator<Archive::FileProxy> File_begin() const;
        ArchiveIterator<Archive::FileProxy> File_end() const;
    private:
        Archive const *m_pArchive; // 0x0
        ArchiveInternals::TOCEntry const *m_pTOCEntry; // 0x4
    };
    static_assert(sizeof(TOCProxy) == 8, "Invalid TOCProxy size");
    class FolderProxy
    {
public:
        typedef ArchiveInternals::FolderEntry PTR;
        _inline FolderProxy(Archive const *, ArchiveInternals::FolderEntry const *);
        FolderProxy();
        _inline Archive::FolderProxy &operator=(Archive::FolderProxy const &);
        ArchiveIterator<Archive::FolderProxy> Folder_begin() const;
        ArchiveIterator<Archive::FolderProxy> Folder_end() const;
        ArchiveIterator<Archive::FileProxy> File_begin() const;
        ArchiveIterator<Archive::FileProxy> File_end() const;
        char const *GetFolderName() const;
    private:
        Archive const *m_pArchive; // 0x0
        ArchiveInternals::FolderEntry const *m_pFolderEntry; // 0x4
    };
    static_assert(sizeof(FolderProxy) == 8, "Invalid FolderProxy size");
    class FileProxy
    {
public:
        typedef ArchiveInternals::FileEntry PTR;
        _inline FileProxy(Archive *, ArchiveInternals::FileEntry const *);
        _inline FileProxy();
        _inline Archive::FileProxy &operator=(Archive::FileProxy const &);
        char const *GetFileName() const;
        unsigned long GetFileSize() const;
        char const *GetStorageType() const;
        ArchiveInternals::FileStorageType GetStorageTypeEnum() const;
        unsigned long GetRawFileSize() const;
    private:
        _iobuf *OpenHandle();
        void CloseHandle(_iobuf *);
        unsigned long CalcArchiveSeekPos(unsigned long) const;
        Archive *m_pArchive; // 0x0
        ArchiveInternals::FileEntry const *m_pFileEntry; // 0x4
    };
    static_assert(sizeof(FileProxy) == 8, "Invalid FileProxy size");
    typedef ArchiveIterator<Archive::TOCProxy> tociterator;
    typedef ArchiveIterator<Archive::FolderProxy> folderiterator;
    typedef ArchiveIterator<Archive::FileProxy> fileiterator;
    enum FileType
    {
        FT_Invalid = 0,
        FT_File,
        FT_Folder,
    };
    static Archive *NewArchive(char const *);
    ~Archive();
    static bool GetArchiveInfo(char const *, wchar_t *, unsigned __int32, unsigned char *);
    char const *GetFilename() const;
    wchar_t const *GetUIName() const;
    void GetMD5Hash(unsigned char *) const;
    void GetMD5RootHash(unsigned char *) const;
    ArchiveIterator<Archive::TOCProxy> TOC_begin() const;
    ArchiveIterator<Archive::TOCProxy> TOC_end() const;
    unsigned __int32 TOC_size() const;
    ArchiveIterator<Archive::FolderProxy> Folder_begin() const;
    ArchiveIterator<Archive::FolderProxy> Folder_end() const;
    ArchiveIterator<Archive::FileProxy> File_begin() const;
    ArchiveIterator<Archive::FileProxy> File_end() const;
    unsigned __int32 File_size() const;
    ArchiveIterator<Archive::TOCProxy> FindTOCEntry(char const *) const;
    ArchiveIterator<Archive::TOCProxy> FindTOCForAlias(char const *) const;
    ByteStream *FileOpen(ArchiveIterator<Archive::FileProxy>);
    ByteStream *FileOpen(ArchiveIterator<Archive::TOCProxy>, char const *);
    Archive::FileType GetFileType(ArchiveIterator<Archive::TOCProxy>, char const *);
    void FileList(ArchiveIterator<Archive::TOCProxy>, char const *, std::vector<fstring<260>,std::allocator<fstring<260> > > &);
    bool TestArchive();
    class Data;
private:
    Archive::Data *m_pimpl; // 0x0
    char const *GetStringAtOffset(unsigned long) const;
    ArchiveIterator<Archive::FolderProxy> GetFolderIterator(unsigned __int32) const;
    ArchiveIterator<Archive::FileProxy> GetFileIterator(unsigned __int32) const;
    _iobuf *NewHandle();
    void FreeHandle(_iobuf *);
    Archive();
    bool LoadPrivate(char const *);
};
static_assert(sizeof(Archive) == 4, "Invalid Archive size");

class ArchiveIteratorBase
{
};
static_assert(sizeof(ArchiveIteratorBase) == 1, "Invalid ArchiveIteratorBase size");

class ArchiveIterator<Archive::TOCProxy> :
    public ArchiveIteratorBase
{
public:
    ArchiveIterator<Archive::TOCProxy>(ArchiveIterator<Archive::TOCProxy> const &);
    ArchiveIterator<Archive::TOCProxy>();
    ArchiveIterator<Archive::TOCProxy> &operator=(ArchiveIterator<Archive::TOCProxy> const &);
    _inline Archive::TOCProxy const &operator*() const;
    Archive::TOCProxy const *operator->() const;
    bool operator!=(ArchiveIterator<Archive::TOCProxy> const &) const;
    bool operator==(ArchiveIterator<Archive::TOCProxy> const &) const;
    ArchiveIterator<Archive::TOCProxy> &operator++();
    ArchiveIterator<Archive::TOCProxy> &operator+=(unsigned __int32);
    ArchiveIterator<Archive::TOCProxy> &operator--();
    ArchiveIterator<Archive::TOCProxy> &operator-=(unsigned __int32);
private:
    ArchiveInternals::TOCEntry const *m_ptr; // 0x0
    Archive *m_pArchive; // 0x4
    Archive::TOCProxy m_proxy; // 0x8
};
static_assert(sizeof(ArchiveIterator<Archive::TOCProxy>) == 16, "Invalid ArchiveIterator<Archive::TOCProxy> size");

class ArchiveIterator<Archive::FolderProxy> :
    public ArchiveIteratorBase
{
public:
    ArchiveIterator<Archive::FolderProxy>(ArchiveIterator<Archive::FolderProxy> const &);
    ArchiveIterator<Archive::FolderProxy>();
    ArchiveIterator<Archive::FolderProxy> &operator=(ArchiveIterator<Archive::FolderProxy> const &);
    _inline Archive::FolderProxy const &operator*() const;
    Archive::FolderProxy const *operator->() const;
    bool operator!=(ArchiveIterator<Archive::FolderProxy> const &) const;
    bool operator==(ArchiveIterator<Archive::FolderProxy> const &) const;
    ArchiveIterator<Archive::FolderProxy> &operator++();
    ArchiveIterator<Archive::FolderProxy> &operator+=(unsigned __int32);
    ArchiveIterator<Archive::FolderProxy> &operator--();
    ArchiveIterator<Archive::FolderProxy> &operator-=(unsigned __int32);
private:
    ArchiveInternals::FolderEntry const *m_ptr; // 0x0
    Archive *m_pArchive; // 0x4
    Archive::FolderProxy m_proxy; // 0x8
};
static_assert(sizeof(ArchiveIterator<Archive::FolderProxy>) == 16, "Invalid ArchiveIterator<Archive::FolderProxy> size");

class ArchiveIterator<Archive::FileProxy> :
    public ArchiveIteratorBase
{
public:
    ArchiveIterator<Archive::FileProxy>(ArchiveIterator<Archive::FileProxy> const &);
    ArchiveIterator<Archive::FileProxy>();
    ArchiveIterator<Archive::FileProxy> &operator=(ArchiveIterator<Archive::FileProxy> const &);
    _inline Archive::FileProxy const &operator*() const;
    Archive::FileProxy const *operator->() const;
    bool operator!=(ArchiveIterator<Archive::FileProxy> const &) const;
    bool operator==(ArchiveIterator<Archive::FileProxy> const &) const;
    ArchiveIterator<Archive::FileProxy> &operator++();
    ArchiveIterator<Archive::FileProxy> &operator+=(unsigned __int32);
    ArchiveIterator<Archive::FileProxy> &operator--();
    ArchiveIterator<Archive::FileProxy> &operator-=(unsigned __int32);
private:
    ArchiveInternals::FileEntry const *m_ptr; // 0x0
    Archive *m_pArchive; // 0x4
    Archive::FileProxy m_proxy; // 0x8
};
static_assert(sizeof(ArchiveIterator<Archive::FileProxy>) == 16, "Invalid ArchiveIterator<Archive::FileProxy> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Archive::TOCProxy::TOCProxy() // 0x604783
{
    mangled_assert("??0TOCProxy@Archive@@QAE@XZ");
    todo("implement");
}

_inline Archive::TOCProxy::TOCProxy(Archive const *, ArchiveInternals::TOCEntry const *) // 0x5B8B7E
{
    mangled_assert("??0TOCProxy@Archive@@QAE@PBV1@PBUTOCEntry@ArchiveInternals@@@Z");
    todo("implement");
}

_inline Archive::TOCProxy &Archive::TOCProxy::operator=(Archive::TOCProxy const &) // 0x5B8CBA
{
    mangled_assert("??4TOCProxy@Archive@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

_inline Archive::FolderProxy::FolderProxy(Archive const *, ArchiveInternals::FolderEntry const *) // 0x5F63BE
{
    mangled_assert("??0FolderProxy@Archive@@QAE@PBV1@PBUFolderEntry@ArchiveInternals@@@Z");
    todo("implement");
}

_inline Archive::FolderProxy &Archive::FolderProxy::operator=(Archive::FolderProxy const &) // 0x5F6537
{
    mangled_assert("??4FolderProxy@Archive@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

_inline Archive::FileProxy::FileProxy() // 0x5F63B4
{
    mangled_assert("??0FileProxy@Archive@@QAE@XZ");
    todo("implement");
}

_inline Archive::FileProxy::FileProxy(Archive *, ArchiveInternals::FileEntry const *) // 0x5F63A2
{
    mangled_assert("??0FileProxy@Archive@@QAE@PAV1@PBUFileEntry@ArchiveInternals@@@Z");
    todo("implement");
}

_inline Archive::FileProxy &Archive::FileProxy::operator=(Archive::FileProxy const &) // 0x5F6524
{
    mangled_assert("??4FileProxy@Archive@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

ArchiveIterator<Archive::TOCProxy>::ArchiveIterator<Archive::TOCProxy>() // 0x60476B
{
    mangled_assert("??0?$ArchiveIterator@VTOCProxy@Archive@@@@QAE@XZ");
    todo("implement");
}

ArchiveIterator<Archive::TOCProxy>::ArchiveIterator<Archive::TOCProxy>(ArchiveIterator<Archive::TOCProxy> const &) // 0x604750
{
    mangled_assert("??0?$ArchiveIterator@VTOCProxy@Archive@@@@QAE@ABV0@@Z");
    todo("implement");
}

ArchiveIterator<Archive::FileProxy>::ArchiveIterator<Archive::FileProxy>(ArchiveIterator<Archive::FileProxy> const &) // 0x5F62CB
{
    mangled_assert("??0?$ArchiveIterator@VFileProxy@Archive@@@@QAE@ABV0@@Z");
    todo("implement");
}

ArchiveIterator<Archive::TOCProxy> &ArchiveIterator<Archive::TOCProxy>::operator=(ArchiveIterator<Archive::TOCProxy> const &) // 0x6047D0
{
    mangled_assert("??4?$ArchiveIterator@VTOCProxy@Archive@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline Archive::FileProxy const &ArchiveIterator<Archive::FileProxy>::operator*() const // 0x5F6687
{
    mangled_assert("??D?$ArchiveIterator@VFileProxy@Archive@@@@QBEABVFileProxy@Archive@@XZ");
    todo("implement");
}

_inline Archive::FolderProxy const &ArchiveIterator<Archive::FolderProxy>::operator*() const // 0x5F6697
{
    mangled_assert("??D?$ArchiveIterator@VFolderProxy@Archive@@@@QBEABVFolderProxy@Archive@@XZ");
    todo("implement");
}

_inline Archive::TOCProxy const &ArchiveIterator<Archive::TOCProxy>::operator*() const // 0x5B8CE9
{
    mangled_assert("??D?$ArchiveIterator@VTOCProxy@Archive@@@@QBEABVTOCProxy@Archive@@XZ");
    todo("implement");
}

bool ArchiveIterator<Archive::FileProxy>::operator!=(ArchiveIterator<Archive::FileProxy> const &) const // 0x5F659F
{
    mangled_assert("??9?$ArchiveIterator@VFileProxy@Archive@@@@QBE_NABV0@@Z");
    todo("implement");
}

bool ArchiveIterator<Archive::FolderProxy>::operator!=(ArchiveIterator<Archive::FolderProxy> const &) const // 0x5F65AF
{
    mangled_assert("??9?$ArchiveIterator@VFolderProxy@Archive@@@@QBE_NABV0@@Z");
    todo("implement");
}

bool ArchiveIterator<Archive::TOCProxy>::operator!=(ArchiveIterator<Archive::TOCProxy> const &) const // 0x5B8CCD
{
    mangled_assert("??9?$ArchiveIterator@VTOCProxy@Archive@@@@QBE_NABV0@@Z");
    todo("implement");
}

bool ArchiveIterator<Archive::TOCProxy>::operator==(ArchiveIterator<Archive::TOCProxy> const &) const // 0x6047E3
{
    mangled_assert("??8?$ArchiveIterator@VTOCProxy@Archive@@@@QBE_NABV0@@Z");
    todo("implement");
}

ArchiveIterator<Archive::FileProxy> &ArchiveIterator<Archive::FileProxy>::operator++() // 0x5F66B3
{
    mangled_assert("??E?$ArchiveIterator@VFileProxy@Archive@@@@QAEAAV0@XZ");
    todo("implement");
}

ArchiveIterator<Archive::FolderProxy> &ArchiveIterator<Archive::FolderProxy>::operator++() // 0x5F66B9
{
    mangled_assert("??E?$ArchiveIterator@VFolderProxy@Archive@@@@QAEAAV0@XZ");
    todo("implement");
}

ArchiveIterator<Archive::TOCProxy> &ArchiveIterator<Archive::TOCProxy>::operator++() // 0x5B8CF9
{
    mangled_assert("??E?$ArchiveIterator@VTOCProxy@Archive@@@@QAEAAV0@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ARCHIVE_H__
#endif
