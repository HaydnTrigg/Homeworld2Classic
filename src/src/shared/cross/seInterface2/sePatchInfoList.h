#if 0
#ifndef __SEPATCHINFOLIST_H__
#define __SEPATCHINFOLIST_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class sePatchInfoList
{
public:
    typedef std::vector<PatchID::Info *,std::allocator<PatchID::Info *> > PatchInfos;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > const_iterator;
    sePatchInfoList(sePatchInfoList const &); /* compiler_generated() */
    sePatchInfoList();
    ~sePatchInfoList();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > begin() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > begin();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > end() const;
    _inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > end();
    bool empty() const;
    void push_back(PatchID::Info *);
    void erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > >);
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > find(char const *) const;
private:
    void sort();
    std::vector<PatchID::Info *,std::allocator<PatchID::Info *> > m_patchInfos; // 0x0
public:
    sePatchInfoList &operator=(sePatchInfoList const &); /* compiler_generated() */
};
static_assert(sizeof(sePatchInfoList) == 12, "Invalid sePatchInfoList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > sePatchInfoList::begin() // 0x6BEF8F
{
    mangled_assert("?begin@sePatchInfoList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_Vector_iterator<std::_Vector_val<std::_Simple_types<PatchID::Info *> > > sePatchInfoList::end() // 0x6BF056
{
    mangled_assert("?end@sePatchInfoList@@QAE?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PAUInfo@PatchID@@@std@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SEPATCHINFOLIST_H__
#endif
