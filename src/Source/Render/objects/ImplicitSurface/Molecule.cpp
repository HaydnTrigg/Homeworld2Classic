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

_extern _sub_100AFFD0(Molecule *const);
Molecule::Molecule() // 0x100AFFD0
{
    mangled_assert("??0Molecule@@QAE@XZ");
    todo("implement");
    _sub_100AFFD0(this);
}

_extern _sub_100AFF70(Molecule *const, vector3 const &, float);
Molecule::Molecule(vector3 const &, float) // 0x100AFF70
{
    mangled_assert("??0Molecule@@QAE@ABVvector3@@M@Z");
    todo("implement");
    _sub_100AFF70(this, arg, arg);
}

_extern _sub_100AFFA0(Molecule *const, float, float, float, float);
Molecule::Molecule(float, float, float, float) // 0x100AFFA0
{
    mangled_assert("??0Molecule@@QAE@MMMM@Z");
    todo("implement");
    _sub_100AFFA0(this, arg, arg, arg, arg);
}

_extern void _sub_100B0010(Molecule *const);
Molecule::~Molecule() // 0x100B0010
{
    mangled_assert("??1Molecule@@QAE@XZ");
    todo("implement");
    _sub_100B0010(this);
}

_extern _sub_100AFFF0(MoleculeList *const);
MoleculeList::MoleculeList() // 0x100AFFF0
{
    mangled_assert("??0MoleculeList@@QAE@XZ");
    todo("implement");
    _sub_100AFFF0(this);
}

_extern void _sub_100B0020(MoleculeList *const);
MoleculeList::~MoleculeList() // 0x100B0020
{
    mangled_assert("??1MoleculeList@@QAE@XZ");
    todo("implement");
    _sub_100B0020(this);
}

_extern Molecule *_sub_100B00D0(MoleculeList *const, __int32);
Molecule *MoleculeList::operator[](__int32) // 0x100B00D0
{
    mangled_assert("??AMoleculeList@@QAEPAVMolecule@@H@Z");
    todo("implement");
    Molecule * __result = _sub_100B00D0(this, arg);
    return __result;
}

_extern void _sub_100B02A0(MoleculeList *const, Molecule *);
void MoleculeList::add(Molecule *) // 0x100B02A0
{
    mangled_assert("?add@MoleculeList@@QAEXPAVMolecule@@@Z");
    todo("implement");
    _sub_100B02A0(this, arg);
}

_extern unsigned __int32 _sub_100B0490(MoleculeList const *const);
unsigned __int32 MoleculeList::size() const // 0x100B0490
{
    mangled_assert("?size@MoleculeList@@QBEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_100B0490(this);
    return __result;
}

_extern void _sub_100B02C0(MoleculeList *const);
void MoleculeList::clear() // 0x100B02C0
{
    mangled_assert("?clear@MoleculeList@@QAEXXZ");
    todo("implement");
    _sub_100B02C0(this);
}

_extern void _sub_100B0310(MoleculeList *const, vector3 &, vector3 &);
void MoleculeList::findMinMax(vector3 &, vector3 &) // 0x100B0310
{
    mangled_assert("?findMinMax@MoleculeList@@QAEXAAVvector3@@0@Z");
    todo("implement");
    _sub_100B0310(this, arg, arg);
}

/* ---------- private code */
#endif
