#if 0
#ifndef __IMPLICITSURFACESAMPLER_H__
#define __IMPLICITSURFACESAMPLER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ImplicitSurfaceSampler
{
public:
    ImplicitSurfaceSampler();
    void setMoleculeList(MoleculeList *);
    void getValues(vector3 const &, float &);
private:
    MoleculeList *m_pMoleculeList; // 0x0
};
static_assert(sizeof(ImplicitSurfaceSampler) == 4, "Invalid ImplicitSurfaceSampler size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __IMPLICITSURFACESAMPLER_H__
#endif
