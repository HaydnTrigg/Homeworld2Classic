#if 0
#ifndef __FAMILYLIST_H__
#define __FAMILYLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FamilyList
{
public:
    typedef std::vector<Family,std::allocator<Family> > FamilyList_;
    typedef unsigned __int32 size_type;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Family> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Family> > > const_iterator;
    Family *GetFamily(unsigned __int32);
    Family *GetFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    __int32 GetFamilyIndex(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    Family *AddFamily(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    bool DoesExist(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Family> > > begin() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Family> > > begin();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Family> > > end() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Family> > > end();
    _inline unsigned __int32 size() const;
private:
    std::vector<Family,std::allocator<Family> > m_families; // 0x0
public:
    FamilyList(FamilyList const &); /* compiler_generated() */
    _inline FamilyList(); /* compiler_generated() */
    _inline ~FamilyList(); /* compiler_generated() */
    FamilyList &operator=(FamilyList const &); /* compiler_generated() */
};
static_assert(sizeof(FamilyList) == 12, "Invalid FamilyList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Family> > > FamilyList::begin() // 0x583E7C
{
    mangled_assert("?begin@FamilyList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VFamily@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Family> > > FamilyList::end() // 0x5841D6
{
    mangled_assert("?end@FamilyList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VFamily@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline unsigned __int32 FamilyList::size() const // 0x4A47C9
{
    mangled_assert("?size@FamilyList@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FAMILYLIST_H__
#endif
