#if 0
#ifndef __MODIFIERINFLUENCETYPE_H__
#define __MODIFIERINFLUENCETYPE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum InfluenceType
{
    Influence_Unknown = 0,
    Influence_ThisShipOnly,
    Influence_AllShipsWithinRadius,
    Influence_OwnShipsWithinRadius,
    Influence_EnemyShipsWithinRadius,
    Influence_AllShipsWithinRadiusExcludingThisShip,
    Influence_OwnShipsWithinRadiusExcludingThisShip,
    Influence_EnemyShipsWithinRadiusIncludingSleeping,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MODIFIERINFLUENCETYPE_H__
#endif
