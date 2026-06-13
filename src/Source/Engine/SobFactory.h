#if 0
#ifndef __SOBFACTORY_H__
#define __SOBFACTORY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SobFactory
{
public:
    static SobFactory *instance();
    static bool shutdown();
private:
    SobFactory();
    _inline ~SobFactory();
public:
    SubSystem *createSubSystem(char const *, Player *);
    Squadron *createSquadron(char const *, char const *, __int32, unsigned __int32);
    Ship *createShip(char const *, __int32);
    Missile *createMissile(char const *, vector3 const &, matrix3 const &, SobWithMesh *, WeaponStatic const *, WeaponTargetInfo const &, Player *);
    Missile *createMissile(char const *, vector3 const &, matrix3 const &, __int32);
    Waypoint *createWayPoint(vector3 const &);
    Bullet *createBullet(char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &);
    InstantHit *createInstantHit(char const *, Sob *, WeaponTargetInfo const &, vector3 const &, matrix3 const &);
    SphereBurst *createSphereBurst(char const *, Sob *, vector3 const &, matrix3 const &);
    DefenseField *createDefenseField(vector3 const &, float, SobID const &);
    SobVis *createSobVis(Sob *, SaveGameData *);
    SobVis *createSobVis(Sob *);
};
static_assert(sizeof(SobFactory) == 1, "Invalid SobFactory size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern void _sub_638981(SobFactory *const);
_inline SobFactory::~SobFactory() // 0x638981
{
    mangled_assert("??1SobFactory@@AAE@XZ");
    todo("implement");
    _sub_638981(this);
}

/* ---------- private code */

#endif // __SOBFACTORY_H__
#endif
