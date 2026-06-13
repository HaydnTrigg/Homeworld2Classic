#if 0
#ifndef __RENDERMODELSCARS_H__
#define __RENDERMODELSCARS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class RenderModelScars
{
public:
    RenderModelScars(RenderModelScars const &); /* compiler_generated() */
    RenderModelScars(Sob const *, SaveGameData *);
    RenderModelScars(Sob const *);
    ~RenderModelScars();
    void postRestore();
    void setHierarchy(HierarchyDynamic const *);
    void onWeaponHit(char const *, BattleScarManager::DamageInfo const &, float, long, BattleScarManager::DamageResult &);
    void onHealthChange();
    void updateBattleScars(Camera const &, float);
    void removeBattleScarFX();
    void directRender(Camera const &);
    void fillScar(char const *, unsigned __int32);
    void removeAllScars();
    bool save(SaveGameData *) const;
    bool restore(SaveGameData *);
private:
    void setupInternal();
    Sob const *getSob() const;
    __int32 getMaxScarTri() const;
    bool isVisible(Camera const &) const;
    void updateTransformAndVis(SobWithMesh const *);
    void genDamageEvent(BattleScarManager::DamageInfo &);
    class Data;
    boost::scoped_ptr<RenderModelScars::Data> m_pimpl; // 0x0
public:
    RenderModelScars &operator=(RenderModelScars const &); /* compiler_generated() */
};
static_assert(sizeof(RenderModelScars) == 4, "Invalid RenderModelScars size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RENDERMODELSCARS_H__
#endif
