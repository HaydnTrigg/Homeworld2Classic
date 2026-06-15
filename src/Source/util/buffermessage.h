#if 0
#ifndef __BUFFERMESSAGE_H__
#define __BUFFERMESSAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BufferMessage
{
public:
    enum Type
    {
        TYPE_Invalid = 0,
    };
    _inline BufferMessage(BufferMessage const &); /* compiler_generated() */
    _inline BufferMessage(unsigned __int32, unsigned char const *, unsigned __int32);
    _inline BufferMessage(unsigned __int32);
    void SetType(unsigned __int32);
    void SetData(unsigned char const *, unsigned __int32);
    _inline unsigned __int32 GetType() const;
    _inline unsigned char const *GetData() const;
    _inline unsigned __int32 GetSize() const;
    void swap(BufferMessage &);
private:
    unsigned __int32 m_type; // 0x0
    std::vector<unsigned char,std::allocator<unsigned char> > m_data; // 0x4
public:
    _inline ~BufferMessage(); /* compiler_generated() */
    _inline BufferMessage &operator=(BufferMessage const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(BufferMessage) == 16, "Invalid BufferMessage size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline unsigned __int32 BufferMessage::GetType() const // 0x46D627
{
    mangled_assert("?GetType@BufferMessage@@QBEIXZ");
    todo("implement");
}

_inline unsigned char const *BufferMessage::GetData() const // 0x46D5FE
{
    mangled_assert("?GetData@BufferMessage@@QBEPBEXZ");
    todo("implement");
}

_inline unsigned __int32 BufferMessage::GetSize() const // 0x46D620
{
    mangled_assert("?GetSize@BufferMessage@@QBEIXZ");
    todo("implement");
}

_inline BufferMessage::BufferMessage(unsigned __int32) // 0x46D07F
{
    mangled_assert("??0BufferMessage@@QAE@I@Z");
    todo("implement");
}

_inline BufferMessage::BufferMessage(unsigned __int32, unsigned char const *, unsigned __int32) // 0x46F0D7
{
    mangled_assert("??0BufferMessage@@QAE@IPBEI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __BUFFERMESSAGE_H__
#endif
