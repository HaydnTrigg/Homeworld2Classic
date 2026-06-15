#if 0
#ifndef __SENSORSBLOBS_H__
#define __SENSORSBLOBS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct BlobData
{
    unsigned __int32 m_flags; // 0x0
    __int32 m_nShips; // 0x4
    __int32 m_RUs; // 0x8
    __int32 m_nRockRUs; // 0xC
    __int32 m_nDustRUs; // 0x10
    __int32 m_nDustClouds; // 0x14
    __int32 m_nRocks; // 0x18
    __int32 m_nHiddenShips; // 0x1C
    __int32 m_nFriendlyShips; // 0x20
    __int32 m_nAlliedShips; // 0x24
    __int32 m_nEnemyShips; // 0x28
    Ship const *m_blobNameShip; // 0x2C
    VisibilityLevel m_visMax; // 0x30
};
static_assert(sizeof(BlobData) == 52, "Invalid BlobData size");

class SensorsBlobArray
{
public:
    struct CreationParams
    {
        float protrude; // 0x0
        float borderPadding; // 0x4
        unsigned __int32 metaSelFlags; // 0x8
        float metaSelPriority; // 0xC
    };
    static_assert(sizeof(CreationParams) == 16, "Invalid CreationParams size");
    typedef float (*sensorsblobcallback)(Sob *);
    SensorsBlobArray(SensorsBlobArray const &); /* compiler_generated() */
    SensorsBlobArray();
    ~SensorsBlobArray();
    void Clear();
    void AddObjects(CameraHW const *, Player const *, float (*)(Sob *), __int32, Selection const **, SensorsBlobArray::CreationParams *);
    void addBattlePings(CameraHW const *, SensorsBlob const *);
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > const_iterator;
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > begin() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > begin();
    _inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > end() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > end();
    void renderPrepare(float, float, CameraHW const *);
    void renderBackground(float, CameraHW const *);
    void addMetaSelTargs(Camera const *);
    void render(ATITemplate *, CameraHW const *, unsigned __int32);
    void render(float, CameraHW const *);
    void sort();
    _inline void analCheck() const;
private:
    static float enemySubBlob(Sob *sob);
    static float battleSubBlob(Sob *sob);
    std::vector<SensorsBlob *,std::allocator<SensorsBlob *> > m_blobs; // 0x0
    SensorsBlob *m_mouseOverBlob; // 0xC
    SensorsBlob *m_mouseOverFootBlob; // 0x10
    float m_nearest; // 0x14
    float m_farthest; // 0x18
    float m_range; // 0x1C
    static SensorsBlobArray::CreationParams *s_subBlobProperties;
public:
    _inline SensorsBlobArray &operator=(SensorsBlobArray const &); /* compiler_generated() */
};
static_assert(sizeof(SensorsBlobArray) == 32, "Invalid SensorsBlobArray size");

class SensorsBlob
{
public:
    SensorsBlob(SensorsBlob const &);
    SensorsBlob(Sob *, float, vector3 const &);
    ~SensorsBlob();
    _inline Selection const &getObjects() const;
    _inline vector3 const &getPosition() const;
    _inline float getRadius() const;
    _inline BlobData const &getItemizedData() const;
private:
    void combine(SensorsBlob *);
    void itemize(Player const *);
    void finalizeSelection();
    static _inline bool sortCB(SensorsBlob const *a, SensorsBlob const *b);
    _inline void analCheck() const;
    vector3 m_position; // 0x0
    float m_radius; // 0xC
    vector3 m_selectPosition; // 0x10
    float m_selectRadius; // 0x1C
    float m_sortDistance; // 0x20
    float m_distanceFromOrigin; // 0x24
    SelTarg m_selTarg; // 0x28
    Selection m_objects; // 0x40
    BlobData m_itemizedData; // 0x74
    ATITemplateBlob *m_template; // 0xA8
    SensorsBlobArray m_subBlobEnemies; // 0xAC
public:
    static void *operator new(unsigned __int32 size);
    static void operator delete(void *p, unsigned __int32 size);
    SensorsBlob &operator=(SensorsBlob const &); /* compiler_generated() */
};
static_assert(sizeof(SensorsBlob) == 204, "Invalid SensorsBlob size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > SensorsBlobArray::begin() const // 0x616812
{
    mangled_assert("?begin@SensorsBlobArray@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSensorsBlob@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<SensorsBlob *> > > SensorsBlobArray::end() const // 0x618B66
{
    mangled_assert("?end@SensorsBlobArray@@QBE?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PAVSensorsBlob@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline void SensorsBlobArray::analCheck() const // 0x63511E
{
    mangled_assert("?analCheck@SensorsBlobArray@@QBEXXZ");
    todo("implement");
}

_inline Selection const &SensorsBlob::getObjects() const // 0x618DAD
{
    mangled_assert("?getObjects@SensorsBlob@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline vector3 const &SensorsBlob::getPosition() const // 0x618DBB
{
    mangled_assert("?getPosition@SensorsBlob@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float SensorsBlob::getRadius() const // 0x618DC2
{
    mangled_assert("?getRadius@SensorsBlob@@QBEMXZ");
    todo("implement");
}

_inline BlobData const &SensorsBlob::getItemizedData() const // 0x618D86
{
    mangled_assert("?getItemizedData@SensorsBlob@@QBEABUBlobData@@XZ");
    todo("implement");
}

_inline bool SensorsBlob::sortCB(SensorsBlob const *a, SensorsBlob const *b) // 0x6363AD
{
    mangled_assert("?sortCB@SensorsBlob@@CG_NPBV1@0@Z");
    todo("implement");
}

_inline void SensorsBlob::analCheck() const // 0x63511D
{
    mangled_assert("?analCheck@SensorsBlob@@ABEXXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SENSORSBLOBS_H__
#endif
