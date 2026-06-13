#if 0
#ifndef __MOLECULE_H__
#define __MOLECULE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Molecule
{
public:
    Molecule(float, float, float, float);
    Molecule(vector3 const &, float);
    Molecule();
    ~Molecule();
    vector3 position; // 0x0
    vector4 col; // 0xC
    float strength; // 0x1C
};
static_assert(sizeof(Molecule) == 32, "Invalid Molecule size");

class MoleculeList
{
public:
    _inline MoleculeList(MoleculeList const &); /* compiler_generated() */
    MoleculeList();
    ~MoleculeList();
    void add(Molecule *);
    unsigned __int32 size() const;
    void clear();
    void findMinMax(vector3 &, vector3 &);
    Molecule *operator[](__int32);
private:
    std::vector<Molecule *,std::allocator<Molecule *> > elements; // 0x0
public:
    _inline MoleculeList &operator=(MoleculeList const &); /* compiler_generated() */
};
static_assert(sizeof(MoleculeList) == 12, "Invalid MoleculeList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MOLECULE_H__
#endif
