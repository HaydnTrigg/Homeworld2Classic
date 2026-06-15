#if 0
#ifndef __GAMESTRUCTIMPL_H__
#define __GAMESTRUCTIMPL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum PlayerSlotType
{
    PT_HUMAN = 0,
    PT_AI,
    PT_MISSING,
    PT_CLOSED,
};

/* ---------- definitions */

class GamePlayerInfo
{
public:
    PlayerSlotType m_playerSlotType; // 0x0
    unsigned __int32 m_raceID; // 0x4
    __int32 m_team; // 0x8
    __int32 m_difficulty; // 0xC
    long m_networkID; // 0x10
    wchar_t m_playerName[32]; // 0x14
    unsigned char m_baseColor[3]; // 0x54
    unsigned char m_stripeColor[3]; // 0x57
    Badge m_badge; // 0x5A
    char m_padding[1]; // 0x7B
    _inline GamePlayerInfo();
    _inline unsigned __int32 getRaceID() const;
    _inline void setRaceID(unsigned __int32);
    _inline __int32 getTeam() const;
    _inline void setTeam(__int32);
    _inline PlayerSlotType getPlayerType() const;
    _inline void setPlayerType(PlayerSlotType);
    _inline void setPlayerName(wchar_t const *);
    _inline __int32 getDifficultyLevel() const;
};
static_assert(sizeof(GamePlayerInfo) == 124, "Invalid GamePlayerInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline GamePlayerInfo::GamePlayerInfo() // 0x469EC0
{
    mangled_assert("??0GamePlayerInfo@@QAE@XZ");
    todo("implement");
}

_inline unsigned __int32 GamePlayerInfo::getRaceID() const // 0x4FAF74
{
    mangled_assert("?getRaceID@GamePlayerInfo@@QBEIXZ");
    todo("implement");
}

_inline void GamePlayerInfo::setRaceID(unsigned __int32) // 0x46CB52
{
    mangled_assert("?setRaceID@GamePlayerInfo@@QAEXI@Z");
    todo("implement");
}

_inline __int32 GamePlayerInfo::getTeam() const // 0x463A16
{
    mangled_assert("?getTeam@GamePlayerInfo@@QBEHXZ");
    todo("implement");
}

_inline void GamePlayerInfo::setTeam(__int32) // 0x45E540
{
    mangled_assert("?setTeam@GamePlayerInfo@@QAEXH@Z");
    todo("implement");
}

_inline PlayerSlotType GamePlayerInfo::getPlayerType() const // 0x4FAF71
{
    mangled_assert("?getPlayerType@GamePlayerInfo@@QBE?AW4PlayerSlotType@@XZ");
    todo("implement");
}

_inline void GamePlayerInfo::setPlayerType(PlayerSlotType) // 0x45E537
{
    mangled_assert("?setPlayerType@GamePlayerInfo@@QAEXW4PlayerSlotType@@@Z");
    todo("implement");
}

_inline __int32 GamePlayerInfo::getDifficultyLevel() const // 0x542F5D
{
    mangled_assert("?getDifficultyLevel@GamePlayerInfo@@QBEHXZ");
    todo("implement");
}

_inline void GamePlayerInfo::setPlayerName(wchar_t const *) // 0x46CB3F
{
    mangled_assert("?setPlayerName@GamePlayerInfo@@QAEXPB_W@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __GAMESTRUCTIMPL_H__
#endif
