#if 0
#ifndef __CONTENTMESSAGE_H__
#define __CONTENTMESSAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum EMessageType
{
    MSG_ReadyToGo = 0,
    MSG_FileRequest,
    MSG_FileHeader,
    MSG_FileChunk,
    MSG_DownloadStatus,
};

/* ---------- definitions */

struct Message
{
    unsigned char m_magic; // 0x0
    unsigned char m_type; // 0x1
    _inline Message(unsigned char);
};
static_assert(sizeof(Message) == 2, "Invalid Message size");

struct MessageFileRequest :
    public Message
{
    enum FileType
    {
        LEVEL = 0,
        BADGE,
    };
    unsigned __int32 m_id; // 0x4
    unsigned __int32 m_type; // 0x8
    _inline MessageFileRequest(unsigned __int32, MessageFileRequest::FileType);
};
static_assert(sizeof(MessageFileRequest) == 12, "Invalid MessageFileRequest size");

struct MessageFileHeader :
    public Message
{
    unsigned __int32 m_size; // 0x4
    unsigned __int32 m_id; // 0x8
    char m_name[64]; // 0xC
    MD5Hash m_guid; // 0x4C
    _inline MessageFileHeader(unsigned __int32, MD5Hash const &, unsigned __int32, char const *);
    _inline ~MessageFileHeader(); /* compiler_generated() */
};
static_assert(sizeof(MessageFileHeader) == 184, "Invalid MessageFileHeader size");

struct MessageFileChunk :
    public Message
{
    enum
    {
        CHUNK_SIZE = 256, // 0x0100
    };
    unsigned __int32 m_id; // 0x4
    unsigned char m_data[256]; // 0x8
    _inline MessageFileChunk(unsigned __int32);
};
static_assert(sizeof(MessageFileChunk) == 264, "Invalid MessageFileChunk size");

struct MessageDownloadStatus :
    public Message
{
    unsigned __int32 m_progress; // 0x4
    unsigned __int32 m_maxProgress; // 0x8
    _inline MessageDownloadStatus(unsigned __int32, unsigned __int32);
};
static_assert(sizeof(MessageDownloadStatus) == 12, "Invalid MessageDownloadStatus size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_4F85AC(Message *const, unsigned char);
_inline Message::Message(unsigned char) // 0x4F85AC
{
    mangled_assert("??0Message@@QAE@E@Z");
    todo("implement");
    _sub_4F85AC(this, arg);
}

_extern _sub_5BA6F9(MessageFileRequest *const, unsigned __int32, MessageFileRequest::FileType);
_inline MessageFileRequest::MessageFileRequest(unsigned __int32, MessageFileRequest::FileType) // 0x5BA6F9
{
    mangled_assert("??0MessageFileRequest@@QAE@IW4FileType@0@@Z");
    todo("implement");
    _sub_5BA6F9(this, arg, arg);
}

_extern _sub_5BA6BA(MessageFileHeader *const, unsigned __int32, MD5Hash const &, unsigned __int32, char const *);
_inline MessageFileHeader::MessageFileHeader(unsigned __int32, MD5Hash const &, unsigned __int32, char const *) // 0x5BA6BA
{
    mangled_assert("??0MessageFileHeader@@QAE@IABVMD5Hash@@IPBD@Z");
    todo("implement");
    _sub_5BA6BA(this, arg, arg, arg, arg);
}

_extern _sub_5BC941(MessageFileChunk *const, unsigned __int32);
_inline MessageFileChunk::MessageFileChunk(unsigned __int32) // 0x5BC941
{
    mangled_assert("??0MessageFileChunk@@QAE@I@Z");
    todo("implement");
    _sub_5BC941(this, arg);
}

_extern _sub_5BA6A2(MessageDownloadStatus *const, unsigned __int32, unsigned __int32);
_inline MessageDownloadStatus::MessageDownloadStatus(unsigned __int32, unsigned __int32) // 0x5BA6A2
{
    mangled_assert("??0MessageDownloadStatus@@QAE@II@Z");
    todo("implement");
    _sub_5BA6A2(this, arg, arg);
}

/* ---------- private code */

#endif // __CONTENTMESSAGE_H__
#endif
