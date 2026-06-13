#if 0
#ifndef __STLEXMAP_H__
#define __STLEXMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >
{
public:
    typedef std::basic_string<char,std::char_traits<char>,std::allocator<char> > key_type;
    typedef `anonymous-namespace'::FPAlias referent_type;
    typedef std::basicstring_less<char> key_compare;
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,`anonymous namespace'::FPAlias> value_type;
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> &reference;
    typedef std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> const &const_reference;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > iterator;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > const_iterator;
    mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAl(std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > const &);
    mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAl(std::basicstring_less<char> const &, std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > const &);
    std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > &operator=(std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > const &);
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > begin() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > begin();
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > end() const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > end();
    unsigned __int32 size() const;
    unsigned __int32 max_size() const;
    bool empty() const;
    std::pair<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >,bool> insert(std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,`anonymous namespace'::FPAlias> const &);
    unsigned __int32 erase(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >, std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >);
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > erase(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >);
    void clear();
    void reserve(unsigned __int32);
    void swap(std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > &);
    unsigned __int32 count(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > lower_bound(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > lower_bound(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > upper_bound(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) const;
    std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > upper_bound(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
private:
    std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > m_vector; // 0x0
    std::basicstring_less<char> m_pred; // 0xC
    bool m_dirty; // 0xD
    void makesorted();
public:
    ~mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPA(); /* compiler_generated() */
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > >) == 16, "Invalid std::mapVector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias,std::basicstring_less<char>,std::vector<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,`anonymous namespace'::FPAlias> > > > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXMAP_H__
/* combined */
#ifndef __STLEXMAP_H__
#define __STLEXMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXMAP_H__
/* combined */
#ifndef __STLEXMAP_H__
#define __STLEXMAP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __STLEXMAP_H__
#endif
