#if 0
#ifndef __DUSTCLOUDGROUP_H__
#define __DUSTCLOUDGROUP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class DustCloudGroup :
    public NebulaGroupBase
{
public:
    typedef NebulaGroupBase SuperClass;
    char const *getName() const;
    DustCloudGroup(DustCloudGroup const &); /* compiler_generated() */
private:
    DustCloudGroup(char const *);
public:
    DustCloudGroup(SaveGameData *);
    _inline vector3 const &getPosition() const;
    _inline float getRadius() const;
    _inline Selection const &getDustClouds() const;
    void recomputePositionRadius();
private:
    void addDustCloud(DustCloud *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x14
    Selection m_DustClouds; // 0x2C
    vector3 m_position; // 0x60
    float m_radius; // 0x6C
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    void defaultSettings();
    virtual _inline char const *saveToken() override;
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    virtual _inline ~DustCloudGroup() override; /* compiler_generated() */
    DustCloudGroup &operator=(DustCloudGroup const &); /* compiler_generated() */
};
static_assert(sizeof(DustCloudGroup) == 112, "Invalid DustCloudGroup size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &DustCloudGroup::getPosition() const // 0x618DB7
{
    mangled_assert("?getPosition@DustCloudGroup@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline float DustCloudGroup::getRadius() const // 0x618DBE
{
    mangled_assert("?getRadius@DustCloudGroup@@QBEMXZ");
    todo("implement");
}

_inline Selection const &DustCloudGroup::getDustClouds() const // 0x618D79
{
    mangled_assert("?getDustClouds@DustCloudGroup@@QBEABVSelection@@XZ");
    todo("implement");
}

_inline bool DustCloudGroup::isDeterministic() // 0x4C5A88
{
    mangled_assert("?isDeterministic@DustCloudGroup@@UAE_NXZ");
    todo("implement");
}

_inline char const *DustCloudGroup::saveToken() // 0x4C5B97
{
    mangled_assert("?saveToken@DustCloudGroup@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __DUSTCLOUDGROUP_H__
#endif
