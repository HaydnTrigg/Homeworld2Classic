#if 0
#ifndef __GSLOBBYDEFINES_H__
#define __GSLOBBYDEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GSLobbyChatType
{
    GSCHAT_Broadcast = 0,
    GSCHAT_Whisper,
};

enum GSLobbyRoomType
{
    GSROOM_Title = 0,
    GSROOM_Group,
    GSROOM_Staging,
};

enum GSLobbyGameTypeOption
{
    GSOPT_MaxOptions = 32, // 0x0020 ' '
};

enum GSLobbyChatConnectResult
{
    GSCR_NameInUse = 1, // 0x0001
    GSCR_NameBadChars = 2, // 0x0002
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSLOBBYDEFINES_H__
/* combined */
#ifndef __GSLOBBYDEFINES_H__
#define __GSLOBBYDEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum GSLobbyChatType
{
    GSCHAT_Broadcast = 0,
    GSCHAT_Whisper,
};

enum GSLobbyRoomType
{
    GSROOM_Title = 0,
    GSROOM_Group,
    GSROOM_Staging,
};

enum GSLobbyChatConnectResult
{
    GSCR_NameInUse = 1, // 0x0001
    GSCR_NameBadChars = 2, // 0x0002
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __GSLOBBYDEFINES_H__
#endif
