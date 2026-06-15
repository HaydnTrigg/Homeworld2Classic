#if 0
#ifndef __CHATMSG_H__
#define __CHATMSG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ChatMsg
{
public:
    static ChatMsg *instance();
    static bool shutdown();
    ChatMsg(ChatMsg const &); /* compiler_generated() */
private:
    ChatMsg();
    _inline ~ChatMsg();
    static ChatMsg *s_instance;
public:
    void initMessage(char);
    void initMessage(ChatMsgType);
    void onAccept(wchar_t const *);
    void receiveMessage(GameMsg_Chat const *);
    bool getReceivedMessage(wchar_t const **, char *, ChatMsgType *, char *);
private:
    char m_destination; // 0x0
    ChatMsgType m_type; // 0x4
    wchar_t const *m_name; // 0x8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgText[100]; // 0xC
    char m_msgFrom[100]; // 0x96C
    char m_msgTo[100]; // 0x9D0
    ChatMsgType m_msgType[100]; // 0xA34
    __int32 m_oldestMsgID; // 0xBC4
    __int32 m_nextMsgID; // 0xBC8
    __int32 m_lastUnretrievedMsgID; // 0xBCC
public:
    ChatMsg &operator=(ChatMsg const &); /* compiler_generated() */
};
static_assert(sizeof(ChatMsg) == 3024, "Invalid ChatMsg size");

class ChatMsg
{
public:
    static ChatMsg *instance();
    static bool shutdown();
    ChatMsg(ChatMsg const &); /* compiler_generated() */
private:
    ChatMsg();
    _inline ~ChatMsg();
    static ChatMsg *s_instance;
public:
    void initMessage(char);
    void initMessage(ChatMsgType);
    void onAccept(wchar_t const *);
    void receiveMessage(GameMsg_Chat const *);
    bool getReceivedMessage(wchar_t const **, char *, ChatMsgType *, char *);
private:
    char m_destination; // 0x0
    ChatMsgType m_type; // 0x4
    wchar_t const *m_name; // 0x8
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_msgText[100]; // 0xC
    char m_msgFrom[100]; // 0x96C
    char m_msgTo[100]; // 0x9D0
    ChatMsgType m_msgType[100]; // 0xA34
    __int32 m_oldestMsgID; // 0xBC4
    __int32 m_nextMsgID; // 0xBC8
    __int32 m_lastUnretrievedMsgID; // 0xBCC
public:
    ChatMsg &operator=(ChatMsg const &); /* compiler_generated() */
};
static_assert(sizeof(ChatMsg) == 3024, "Invalid ChatMsg size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ChatMsg::~ChatMsg() // 0x5E9BC5
{
    mangled_assert("??1ChatMsg@@AAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __CHATMSG_H__
#endif
