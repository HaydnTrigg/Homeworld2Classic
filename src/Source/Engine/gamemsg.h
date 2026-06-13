#if 0
#ifndef __GAMEMSG_H__
#define __GAMEMSG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ChatMsgType
{
    MSGCT_Unknown = 0,
    MSGCT_Private,
    MSGCT_Allies,
    MSGCT_Public,
    MSGCT_PrivateCopy,
};

/* ---------- definitions */

struct GameMsg_Chat
{
    char m_senderID; // 0x0
    char m_destination; // 0x1
    ChatMsgType m_type; // 0x2
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_message; // 0x6
    _inline GameMsg_Chat(GameMsg_Chat const &); /* compiler_generated() */
    _inline GameMsg_Chat(); /* compiler_generated() */
    _inline ~GameMsg_Chat(); /* compiler_generated() */
    GameMsg_Chat &operator=(GameMsg_Chat const &); /* compiler_generated() */
};
static_assert(sizeof(GameMsg_Chat) == 30, "Invalid GameMsg_Chat size");

struct GameMsg_Chat
{
    char m_senderID; // 0x0
    char m_destination; // 0x1
    ChatMsgType m_type; // 0x2
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_message; // 0x6
    _inline GameMsg_Chat(GameMsg_Chat const &); /* compiler_generated() */
    _inline GameMsg_Chat(); /* compiler_generated() */
    _inline ~GameMsg_Chat(); /* compiler_generated() */
    GameMsg_Chat &operator=(GameMsg_Chat const &); /* compiler_generated() */
};
static_assert(sizeof(GameMsg_Chat) == 30, "Invalid GameMsg_Chat size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GAMEMSG_H__
#endif
