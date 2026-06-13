#if 0
#ifndef __NAVLIGHTMANAGER_H__
#define __NAVLIGHTMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class NavLightManager
{
public:
    static NavLightManager *i();
    static bool release();
    bool enable(bool);
    NavLightStyleManager *getStyleManager();
    void setSpeedMultiplier(float);
    float getSpeedMultiplier() const;
    void batchPoint(vector4 const &, vector4 const &, float const);
    void flushPointBatch();
    void drawAll(Camera const *, float const, Selection const &);
    void updateNavLights(float const);
    Sob *getSobWithMesh(unsigned __int32 const) const;
    void addSobWithMesh(SobWithMesh *);
    NavLightManager(NavLightManager const &); /* compiler_generated() */
private:
    NavLightManager();
    ~NavLightManager();
    static NavLightManager *create();
    void startup();
    void shutdown();
    bool scriptLoad();
    void renderNavLights(Camera const *, NavLights const *, float);
    void batchLight(vector4 const &, vector4 const &, float);
    void flushBitmapBatch();
    class Data;
    NavLightManager::Data *m_pimpl; // 0x0
    Selection m_alwaysUpdate; // 0x4
    static NavLightManager *s_instance;
public:
    NavLightManager &operator=(NavLightManager const &); /* compiler_generated() */
};
static_assert(sizeof(NavLightManager) == 56, "Invalid NavLightManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __NAVLIGHTMANAGER_H__
#endif
