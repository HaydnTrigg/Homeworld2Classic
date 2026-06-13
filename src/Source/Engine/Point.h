#if 0
#ifndef __POINT_H__
#define __POINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Point :
    public Volume
{
public:
    Point(Point &); /* compiler_generated() */
    Point(SaveGameData *);
    Point(char const *, vector3 &, bool);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    static char const m_saveToken[0];
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    void staticInit();
private:
    float m_radius; // 0x230
    static SaveData const m_saveData[0];
public:
    virtual _inline ~Point() override; /* compiler_generated() */
    Point &operator=(Point &); /* compiler_generated() */
};
static_assert(sizeof(Point) == 564, "Invalid Point size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_4B1F68(Point *const);
_inline bool Point::isDeterministic() // 0x4B1F68
{
    mangled_assert("?isDeterministic@Point@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_4B1F68(this);
    return __result;
}

_extern char const *_sub_4B2004(Point *const);
_inline char const *Point::saveToken() // 0x4B2004
{
    mangled_assert("?saveToken@Point@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_4B2004(this);
    return __result;
}

/* ---------- private code */

#endif // __POINT_H__
#endif
