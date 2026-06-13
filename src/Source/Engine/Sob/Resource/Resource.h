#if 0
#ifndef __RESOURCE_H__
#define __RESOURCE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Resource :
    public SobWithMesh,
    private Selection::Observer
{
public:
    typedef SobWithMesh SuperClass;
    Resource(Resource &); /* compiler_generated() */
    Resource(SobType, SaveGameData *);
    Resource(SobType, char const *, bool);
    virtual ~Resource() override;
    void setGroup(Selection *);
    Selection const *getGroup() const;
    virtual void setResourceValue(Fixed<10> const &);
    virtual Fixed<10> const &getResourceValue() const;
    virtual Fixed<10> const &adjustResourceValue(Fixed<10> const &);
    virtual bool isEmpty() const;
    _inline bool canBeChangedByReactiveFleet();
    float getBlobRadius();
    _inline Selection *getShipsResourcingMe();
    unsigned __int32 getNumberOfFreeResourcingSpaces() const;
    unsigned __int32 getTotalNumberOfResourcingSpaces() const;
    virtual bool update(float) override;
    virtual void render(Camera const *, MeshRenderProxy &) override;
    bool registerShip(Ship *);
    void unRegisterShip(Ship *);
    virtual bool latchShip(Ship *) = 0;
    std::pair<vector3,matrix3> const *getResourcingSpaceFor(Ship *) const;
    void registerInterest(Ship *);
    void unRegisterInterest(Ship *);
    _inline unsigned __int32 getNumberOfShipsInterested() const;
    _inline Selection const &getShipsIntertestedInMe() const;
    _inline ResourceStatic const *getStatic() const;
    float getFadeValue() const;
protected:
    virtual void RemoveFromSimulation() override;
    void RemoveAllSimData();
    void adjustShader(Camera const *);
    std::vector<Ship *,std::allocator<Ship *> > m_shipSlots; // 0x250
    Selection m_shipsResourcingMe; // 0x25C
    Selection m_shipsInterestedInMe; // 0x290
    Fixed<10> m_resourceValue; // 0x2C4
    ResourceController *m_resourceController; // 0x2C8
    Selection *m_group; // 0x2CC
private:
    bool m_canBeToppedUpByReactiveFleet; // 0x2D0
protected:
    void UpdateController();
    static SaveData const m_saveData[0];
public:
    virtual bool isLatchingResource() const = 0;
    virtual bool isHaulingResource() const = 0;
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    Resource &operator=(Resource &); /* compiler_generated() */
};
static_assert(sizeof(Resource) == 724, "Invalid Resource size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6227B5(Resource *const);
_inline bool Resource::canBeChangedByReactiveFleet() // 0x6227B5
{
    mangled_assert("?canBeChangedByReactiveFleet@Resource@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_6227B5(this);
    return __result;
}

_extern Selection *_sub_5F2384(Resource *const);
_inline Selection *Resource::getShipsResourcingMe() // 0x5F2384
{
    mangled_assert("?getShipsResourcingMe@Resource@@QAEPAVSelection@@XZ");
    todo("implement");
    Selection * __result = _sub_5F2384(this);
    return __result;
}

_extern unsigned __int32 _sub_539FE4(Resource const *const);
_inline unsigned __int32 Resource::getNumberOfShipsInterested() const // 0x539FE4
{
    mangled_assert("?getNumberOfShipsInterested@Resource@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_539FE4(this);
    return __result;
}

_extern Selection const &_sub_539FEF(Resource const *const);
_inline Selection const &Resource::getShipsIntertestedInMe() const // 0x539FEF
{
    mangled_assert("?getShipsIntertestedInMe@Resource@@QBEABVSelection@@XZ");
    todo("implement");
    Selection const & __result = _sub_539FEF(this);
    return __result;
}

_extern ResourceStatic const *_sub_4B0BC3(Resource const *const);
_inline ResourceStatic const *Resource::getStatic() const // 0x4B0BC3
{
    mangled_assert("?getStatic@Resource@@QBEPBVResourceStatic@@XZ");
    todo("implement");
    ResourceStatic const * __result = _sub_4B0BC3(this);
    return __result;
}

_extern bool _sub_4B0BDA(Resource *const);
_inline bool Resource::isDeterministic() // 0x4B0BDA
{
    mangled_assert("?isDeterministic@Resource@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B0BDA(this);
    return __result;
}

_extern char const *_sub_4B0E3F(Resource *const);
_inline char const *Resource::saveToken() // 0x4B0E3F
{
    mangled_assert("?saveToken@Resource@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B0E3F(this);
    return __result;
}

/* ---------- private code */

#endif // __RESOURCE_H__
#endif
