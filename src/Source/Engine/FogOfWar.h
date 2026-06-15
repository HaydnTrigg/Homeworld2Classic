#if 0
#ifndef __FOGOFWAR_H__
#define __FOGOFWAR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FogOfWar
{
public:
    static void calculateFog(bool pause);
    static _inline void forceUpdate();
private:
    static void calculateFogForPlayer(__int32 playerIndex);
    static void calculateCloakingForPlayer(__int32 playerIndex);
    static void doSpottingForPlayer(__int32 playerIndex);
    static void clearVisibilityForPlayer(__int32 playerIndex);
    static void doAutoSpottingForPlayer(__int32 playerIndex);
    static void doShipVisibility(__int32 playerIndex, Ship *ship, std::list<Sob *,std::allocator<Sob *> > &sobList);
    static bool checkVisualRange(__int32 playerIndex, Ship *detector, Sob *detectee);
    static void checkSensorsRange(__int32 playerIndex, Ship *detector, Sob *detectee);
    static bool m_forceUpdate;
};
static_assert(sizeof(FogOfWar) == 1, "Invalid FogOfWar size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void FogOfWar::forceUpdate() // 0x7165D8
{
    mangled_assert("?forceUpdate@FogOfWar@@SGXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FOGOFWAR_H__
#endif
