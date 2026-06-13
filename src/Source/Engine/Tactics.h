#if 0
#ifndef __TACTICS_H__
#define __TACTICS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SquadronTactics
{
    AggressiveTactics = 0,
    DefensiveTactics,
    PassiveTactics,
    NUMBER_OF_TACTICS,
};

enum RetaliationSetting
{
    Enemies = 0,
    AttackersOfFriends,
    AttackersOfUs,
    None,
    NUMBER_OF_RETALIATION_OPTIONS,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TACTICS_H__
#endif
