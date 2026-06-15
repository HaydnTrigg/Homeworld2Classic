#if 0
#ifndef __MESSAGE_H__
#define __MESSAGE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::Message
{
public:
    enum Type
    {
        TYPE_INVALID = 0,
        TYPE_GAME,
        TYPE_PLAYER_CREATED,
        TYPE_PLAYER_DESTROYED,
        TYPE_HOST_MIGRATED,
        TYPE_SESSION_DESC_CHANGED,
        TYPE_PLAYER_DESC_CHANGED,
    };
    _inline Message(Net::Message const &); /* compiler_generated() */
    _inline Message(Net::Message::Type, unsigned long, std::vector<unsigned char,std::allocator<unsigned char> > &);
    _inline Message(Net::Message::Type, unsigned long);
    _inline Message(Net::Message::Type);
    _inline Net::Message::Type GetType() const;
    _inline unsigned long GetPlayerID() const;
    unsigned __int32 GetTimestamp() const;
    _inline std::vector<unsigned char,std::allocator<unsigned char> > const &GetData() const;
    _inline void swap(Net::Message &);
private:
    Net::Message::Type m_type; // 0x0
    unsigned long m_playerID; // 0x4
    unsigned __int32 m_timestamp; // 0x8
    std::vector<unsigned char,std::allocator<unsigned char> > m_data; // 0xC
public:
    _inline ~Message(); /* compiler_generated() */
    _inline Net::Message &operator=(Net::Message const &); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(Net::Message) == 24, "Invalid Net::Message size");

/* ---------- prototypes */

extern _inline void std::swap(Net::Message &A, Net::Message &B);

/* ---------- globals */

/* ---------- public code */

_inline Net::Message::Type Net::Message::GetType() const // 0x461825
{
    mangled_assert("?GetType@Message@Net@@QBE?AW4Type@12@XZ");
    todo("implement");
}

_inline unsigned long Net::Message::GetPlayerID() const // 0x4617E2
{
    mangled_assert("?GetPlayerID@Message@Net@@QBEKXZ");
    todo("implement");
}

_inline std::vector<unsigned char,std::allocator<unsigned char> > const &Net::Message::GetData() const // 0x461770
{
    mangled_assert("?GetData@Message@Net@@QBEABV?$vector@EV?$allocator@E@std@@@std@@XZ");
    todo("implement");
}

_inline Net::Message::Message(Net::Message::Type) // 0x460627
{
    mangled_assert("??0Message@Net@@QAE@W4Type@01@@Z");
    todo("implement");
}

_inline Net::Message::Message(Net::Message::Type, unsigned long) // 0x6D1D87
{
    mangled_assert("??0Message@Net@@QAE@W4Type@01@K@Z");
    todo("implement");
}

_inline Net::Message::Message(Net::Message::Type, unsigned long, std::vector<unsigned char,std::allocator<unsigned char> > &) // 0x6D1DB3
{
    mangled_assert("??0Message@Net@@QAE@W4Type@01@KAAV?$vector@EV?$allocator@E@std@@@std@@@Z");
    todo("implement");
}

_inline void Net::Message::swap(Net::Message &) // 0x6D4D8A
{
    mangled_assert("?swap@Message@Net@@QAEXAAV12@@Z");
    todo("implement");
}

_inline void std::swap(Net::Message &A, Net::Message &B) // 0x6D4DB6
{
    mangled_assert("?swap@std@@YGXAAVMessage@Net@@0@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __MESSAGE_H__
#endif
