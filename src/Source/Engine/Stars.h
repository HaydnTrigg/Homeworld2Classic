#if 0
#ifndef __STARS_H__
#define __STARS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StarList
{
public:
    enum StarType
    {
        ST_Point = 0,
        ST_Textured,
        ST_Unknown,
    };
    StarList(StarList const &); /* compiler_generated() */
    StarList(StarList::StarType);
    ~StarList();
    struct Star
    {
        vector3 m_pos; // 0x0
        vector4 m_colour; // 0xC
        float m_size; // 0x1C
        _inline Star(); /* compiler_generated() */
    };
    static_assert(sizeof(Star) == 32, "Invalid Star size");
    bool setTexture(char const *);
    void addStars(std::vector<StarList::Star,std::allocator<StarList::Star> > const &);
    void build();
    void createDisplayList();
    __int32 draw(vector3 const &, vector3 const &, vector3 const &, float) const;
    bool hasBoundingSphere() const;
    void getBoundingSphere(vector3 &, float &);
    void setVisible(bool);
    bool isVisible() const;
    static void SetDisplaySettings(float fovDeg, float nearClipDist);
    void buildPointStars();
    void buildTexturedStars();
    __int32 drawPointStars(vector3 const &, float) const;
    __int32 drawTexturedStars(vector3 const &, vector3 const &, vector3 const &, float) const;
    void addStarVertices(StarList::Star const &, std::vector<FatVertex,std::allocator<FatVertex> > &);
    class Data;
private:
    boost::scoped_ptr<StarList::Data> m_pimpl; // 0x0
public:
    StarList &operator=(StarList const &); /* compiler_generated() */
};
static_assert(sizeof(StarList) == 4, "Invalid StarList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STARS_H__
#endif
