#if 0
/* ---------- headers */

#include "decomp.h"
#include <xmemory0>
#include <Objects\pch.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <xutility>
#include <vector>
#include <xmemory>
#include <math.h>
#include <util\types.h>
#include <util\colour.h>
#include <Objects\ImplicitSurface\Molecule.h>
#include <Objects\Objects.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Mathlib\mathlibdll.h>
#include <Mathlib\fastmath.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- private variables */

/* ---------- public code */

Molecule::Molecule() // 0x100AFFD0
{
    mangled_assert("??0Molecule@@QAE@XZ");
    todo("implement");
}

Molecule::Molecule(vector3 const &, float) // 0x100AFF70
{
    mangled_assert("??0Molecule@@QAE@ABVvector3@@M@Z");
    todo("implement");
}

Molecule::Molecule(float, float, float, float) // 0x100AFFA0
{
    mangled_assert("??0Molecule@@QAE@MMMM@Z");
    todo("implement");
}

Molecule::~Molecule() // 0x100B0010
{
    mangled_assert("??1Molecule@@QAE@XZ");
    todo("implement");
}

MoleculeList::MoleculeList() // 0x100AFFF0
{
    mangled_assert("??0MoleculeList@@QAE@XZ");
    todo("implement");
}

MoleculeList::~MoleculeList() // 0x100B0020
{
    mangled_assert("??1MoleculeList@@QAE@XZ");
    todo("implement");
}

Molecule *MoleculeList::operator[](__int32) // 0x100B00D0
{
    mangled_assert("??AMoleculeList@@QAEPAVMolecule@@H@Z");
    todo("implement");
}

void MoleculeList::add(Molecule *) // 0x100B02A0
{
    mangled_assert("?add@MoleculeList@@QAEXPAVMolecule@@@Z");
    todo("implement");
}

unsigned __int32 MoleculeList::size() const // 0x100B0490
{
    mangled_assert("?size@MoleculeList@@QBEIXZ");
    todo("implement");
}

void MoleculeList::clear() // 0x100B02C0
{
    mangled_assert("?clear@MoleculeList@@QAEXXZ");
    todo("implement");
}

void MoleculeList::findMinMax(vector3 &, vector3 &) // 0x100B0310
{
    mangled_assert("?findMinMax@MoleculeList@@QAEXAAVvector3@@0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
