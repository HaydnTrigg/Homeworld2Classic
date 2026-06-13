#if 0
#ifndef __RESOURCEGROUPMANAGER_H__
#define __RESOURCEGROUPMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ResourceGroupManager
{
public:
    ResourceGroupManager(ResourceGroupManager const &); /* compiler_generated() */
    ResourceGroupManager();
    ~ResourceGroupManager();
    static ResourceGroupManager *i();
    static void release();
    Selection const *addToGroup(Resource *, char const *);
    Selection const *getGroup(char const *);
    Selection const *iteratorBegin();
    Selection const *iteratorNext();
private:
    void makeNiceName(char const *, std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    Selection *findGroup(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > ResourceGroupMap;
    typedef std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > > ResourceGroupMapI;
    stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Selection *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > m_resourceGroupMap; // 0x0
    std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Selection *> > > > m_iterator; // 0x20
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_tempString; // 0x24
    static ResourceGroupManager *s_instance;
public:
    ResourceGroupManager &operator=(ResourceGroupManager const &); /* compiler_generated() */
};
static_assert(sizeof(ResourceGroupManager) == 60, "Invalid ResourceGroupManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __RESOURCEGROUPMANAGER_H__
#endif
