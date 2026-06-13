#if 0
#ifndef __FILETRANSFER_H__
#define __FILETRANSFER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileDownload
{
public:
    FileDownload(FileDownload const &); /* compiler_generated() */
    FileDownload(unsigned __int32, MessageFileHeader const *);
    bool Update(MessageFileChunk const *);
    _inline unsigned __int32 GetID() const;
    _inline MD5Hash const &GetGuid() const;
    _inline char const *GetName() const;
    _inline unsigned __int32 GetSender() const;
    _inline unsigned __int32 GetTotalSize() const;
    _inline unsigned __int32 GetSize() const;
    _inline std::vector<unsigned char,std::allocator<unsigned char> > const &GetData() const;
private:
    unsigned __int32 m_from; // 0x0
    unsigned __int32 m_id; // 0x4
    unsigned __int32 m_size; // 0x8
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0xC
    MD5Hash m_guid; // 0x24
    std::vector<unsigned char,std::allocator<unsigned char> > m_data; // 0x90
public:
    _inline ~FileDownload(); /* compiler_generated() */
    FileDownload &operator=(FileDownload const &); /* compiler_generated() */
};
static_assert(sizeof(FileDownload) == 156, "Invalid FileDownload size");

class FileUpload
{
public:
    FileUpload(FileUpload const &); /* compiler_generated() */
    FileUpload(unsigned __int32, unsigned __int32, std::vector<unsigned char,std::allocator<unsigned char> > &);
    bool Update(Net::Session *);
    _inline unsigned __int32 GetTarget() const;
    unsigned __int32 GetTotalSize() const;
    unsigned __int32 GetSize() const;
private:
    unsigned __int32 m_target; // 0x0
    unsigned __int32 m_id; // 0x4
    unsigned __int32 m_size; // 0x8
    unsigned __int32 m_sent; // 0xC
    std::vector<unsigned char,std::allocator<unsigned char> > m_data; // 0x10
public:
    _inline ~FileUpload(); /* compiler_generated() */
    FileUpload &operator=(FileUpload const &); /* compiler_generated() */
};
static_assert(sizeof(FileUpload) == 28, "Invalid FileUpload size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern unsigned __int32 _sub_5BAF04(FileDownload const *const);
_inline unsigned __int32 FileDownload::GetID() const // 0x5BAF04
{
    mangled_assert("?GetID@FileDownload@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5BAF04(this);
    return __result;
}

_extern MD5Hash const &_sub_5BAF00(FileDownload const *const);
_inline MD5Hash const &FileDownload::GetGuid() const // 0x5BAF00
{
    mangled_assert("?GetGuid@FileDownload@@QBEABVMD5Hash@@XZ");
    todo("implement");
    MD5Hash const & __result = _sub_5BAF00(this);
    return __result;
}

_extern char const *_sub_5BAF08(FileDownload const *const);
_inline char const *FileDownload::GetName() const // 0x5BAF08
{
    mangled_assert("?GetName@FileDownload@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_5BAF08(this);
    return __result;
}

_extern unsigned __int32 _sub_5BAF14(FileDownload const *const);
_inline unsigned __int32 FileDownload::GetSender() const // 0x5BAF14
{
    mangled_assert("?GetSender@FileDownload@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5BAF14(this);
    return __result;
}

_extern unsigned __int32 _sub_5BAF27(FileDownload const *const);
_inline unsigned __int32 FileDownload::GetTotalSize() const // 0x5BAF27
{
    mangled_assert("?GetTotalSize@FileDownload@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5BAF27(this);
    return __result;
}

_extern unsigned __int32 _sub_5BAF17(FileDownload const *const);
_inline unsigned __int32 FileDownload::GetSize() const // 0x5BAF17
{
    mangled_assert("?GetSize@FileDownload@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5BAF17(this);
    return __result;
}

_extern std::vector<unsigned char,std::allocator<unsigned char> > const &_sub_5BAEF9(FileDownload const *const);
_inline std::vector<unsigned char,std::allocator<unsigned char> > const &FileDownload::GetData() const // 0x5BAEF9
{
    mangled_assert("?GetData@FileDownload@@QBEABV?$vector@EV?$allocator@E@std@@@std@@XZ");
    todo("implement");
    std::vector<unsigned char,std::allocator<unsigned char> > const & __result = _sub_5BAEF9(this);
    return __result;
}

_extern unsigned __int32 _sub_5BAF24(FileUpload const *const);
_inline unsigned __int32 FileUpload::GetTarget() const // 0x5BAF24
{
    mangled_assert("?GetTarget@FileUpload@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_5BAF24(this);
    return __result;
}

/* ---------- private code */

#endif // __FILETRANSFER_H__
#endif
