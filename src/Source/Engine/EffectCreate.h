#if 0
#ifndef __EFFECTCREATE_H__
#define __EFFECTCREATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class EffectCreate
{
public:
    static unsigned __int32 bulletEffect(WeaponFire *wf);
    static unsigned __int32 beamEffect(WeaponFire *wf, Sob *pShip);
    static void hitEffect(WeaponFireStatic const *pStatic, Sob *hitSob, float damage, vector3 const &hitPosition, vector3 const &hitNormal);
    static void blowthroughEffect(WeaponFire const *wf, Sob *hitSob, float damage, vector3 const &hitPosition, vector3 const &hitNormal);
    static void fireEffect(WeaponFire *wf, float strength, Sob *pOwner, char const *fireEvent);
    static void fireEffect(WeaponFireStatic const *wfStatic, Sob *pOwner, vector3 const &position, vector3 const &normal);
    static void deathEffect(Sob *pSob, char const *deathName);
    static unsigned __int32 hyperspaceEffect(Sob *pShip, vector3 const &position, matrix3 const &orientation, float const width, float const height, float const length, char const *name);
    static void lightningEffect(vector3 const &fromPosition, vector3 const &toPosition, char const *lightningName);
    static void defenseFieldHitEffect(char const *fxname, vector3 const &hitPosition, vector3 const &hitNormal);
    static void radiationEffect(Sob *pSob, char const *effectName, bool start);
    static void chargedDustCloudEffect(Sob *pSob, char const *effectName, bool start);
    static void missileTrailEffect(Sob *pSob, char const *effectName);
    static void clusterMissileEffect(Sob *pSob, char const *effectName);
    static void latchStartEffect(Sob *pSob, char const *effectName);
    static void latchEndEffect(Sob *pSob, char const *effectName);
    static void fullResourcesEffect(Sob *pSob, char const *effectName, bool start);
    static void repairingEffect(Sob *pSob, char const *effectName, bool start);
    static void boardingEffect(Sob *pSob, char const *effectName, bool start);
    static void cloakGenEffect(Sob *pSob, char const *effectName, bool start);
    static void setWeaponFireLength(WeaponFire *wf, float length);
    static void setWeaponFireScale(WeaponFire *wf, float scale);
    static void setWeaponFireFadeT(WeaponFire *wf, float fadeT);
private:
    static void hitEffectInternal(char const *fxname, char const *soundname, float scale, Sob *hitSob, vector3 const &hitPosition, vector3 const &hitNormal, float nlips, bool bFarMode);
};
static_assert(sizeof(EffectCreate) == 1, "Invalid EffectCreate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __EFFECTCREATE_H__
#endif
