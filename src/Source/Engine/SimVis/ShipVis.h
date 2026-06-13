#if 0
#ifndef __SHIPVIS_H__
#define __SHIPVIS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShipVis :
    public RenderModelVis
{
public:
    typedef RenderModelVis SuperClass;
    ShipVis(ShipVis const &); /* compiler_generated() */
    ShipVis(Sob const *, SaveGameData *);
    ShipVis(Sob const *);
    virtual ~ShipVis() override;
    bool startHyperspaceFX(vector3 const &, matrix3 const &, float const, float const, float const, char const *, char const *);
    bool isHyperspaceFXDead() const;
    void setHyperspaceFXVisible(bool);
    void setHyperspaceFXSize(float, float, float);
    void setHyperspaceFXTransform(matrix4 const &);
    void stopHyperspaceFX();
    bool getHyperspaceFXTransform(matrix4 &) const;
    bool getHyperspaceFXOffset(vector3 &) const;
    virtual void update(Camera const &, float, float, __int32) override;
private:
    void updateHyperspaceFX(float, bool);
    class Data;
    ShipVis::Data *m_pimpl; // 0xB4
public:
    ShipVis &operator=(ShipVis const &); /* compiler_generated() */
};
static_assert(sizeof(ShipVis) == 184, "Invalid ShipVis size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHIPVIS_H__
#endif
