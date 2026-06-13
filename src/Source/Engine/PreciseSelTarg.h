#if 0
#ifndef __PRECISESELTARG_H__
#define __PRECISESELTARG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class OBBSelTarg :
    public SelTarg
{
public:
    OBBSelTarg(OBBSelTarg const &); /* compiler_generated() */
    OBBSelTarg(float, HierarchyDynamic *);
    ~OBBSelTarg();
    virtual bool intersectPoint(float, float) const override;
    virtual float intersectRect(PrimRectangle const &, bool) override;
    virtual void getRectangle(PrimRectangle *, bool, float) const override;
    virtual void getRectangleCentred(PrimRectangle *, bool, float) const override;
    virtual bool isOnScreen() const override;
    virtual void compute(vector3 const &, float, matrix3 const &, float, Camera const *) override;
protected:
    void symmetricCentreRectOnPoint(PrimRectangle *) const;
    float m_preciseSelectionOBBLimit; // 0x18
    HierarchyDynamic *m_hierarchy; // 0x1C
    PrimRectangle m_screenBounds; // 0x20
    vector3 m_position; // 0x30
    matrix3 const *m_coordsys; // 0x3C
    Camera const *m_camera; // 0x40
    float m_NLIPS; // 0x44
    unsigned __int32 m_projectedFrameCounter; // 0x48
public:
    OBBSelTarg &operator=(OBBSelTarg const &); /* compiler_generated() */
};
static_assert(sizeof(OBBSelTarg) == 76, "Invalid OBBSelTarg size");

class PreciseSelTarg :
    public OBBSelTarg
{
public:
    PreciseSelTarg(PreciseSelTarg const &); /* compiler_generated() */
    PreciseSelTarg(float, float, HierarchyDynamic *);
    ~PreciseSelTarg();
    virtual bool intersectPoint(float, float) const override;
    virtual float intersectRect(PrimRectangle const &, bool) override;
    virtual void getRectangle(PrimRectangle *, bool, float) const override;
    virtual void getRectangleCentred(PrimRectangle *, bool, float) const override;
    virtual bool isOnScreen() const override;
    virtual void compute(vector3 const &, float, matrix3 const &, float, Camera const *) override;
    static bool suitableHierarchy(HierarchyDynamic *hierarchy);
private:
    float m_preciseSelectionLimit; // 0x4C
public:
    PreciseSelTarg &operator=(PreciseSelTarg const &); /* compiler_generated() */
};
static_assert(sizeof(PreciseSelTarg) == 80, "Invalid PreciseSelTarg size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PRECISESELTARG_H__
#endif
