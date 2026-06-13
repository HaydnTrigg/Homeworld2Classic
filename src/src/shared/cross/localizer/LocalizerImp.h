#if 0
#ifndef __LOCALIZERIMP_H__
#define __LOCALIZERIMP_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LocalizerImp
{
public:
    static _HMEMPOOL *Allocator();
private:
    LocalizerImp(LocalizerImp const &);
    LocalizerImp();
    ~LocalizerImp();
public:
    static LocalizerImp *Instance();
    static void Initialize();
    static void Shutdown();
    bool GetString(wchar_t *, unsigned __int32, __int32) const;
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > ResLoadFolder(char const *);
    void ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    bool ResUnload(char const *);
    bool UCSLoad(char const *);
    bool UCSUnload(char const *);
    bool TxtLoad(char const *);
    bool TxtUnload(char const *);
    bool TxtSave(char const *);
    bool TxtGetRange(char const *, __int32 &, __int32 &);
    bool TxtResetRange(char const *, __int32 const, __int32 const);
    bool TxtAddRange(char const *, unsigned __int32 const, char const *, __int32 &, __int32 &);
    __int32 TxtAdd(char const *, __int32 const, __int32 const, wchar_t const *, __int32 const);
    class Resource
    {
    public:
        virtual ~Resource();
        virtual char const *GetName() const = 0;
        virtual __int32 RangeMin() const = 0;
        virtual __int32 RangeMax() const = 0;
        virtual bool GetString(wchar_t *, unsigned __int32, __int32) const = 0;
        _inline Resource(LocalizerImp::Resource const &); /* compiler_generated() */
        _inline Resource(); /* compiler_generated() */
        _inline LocalizerImp::Resource &operator=(LocalizerImp::Resource const &); /* compiler_generated() */
    };
    static_assert(sizeof(Resource) == 4, "Invalid Resource size");
    class ResEntry
    {
    public:
        boost::shared_ptr<LocalizerImp::Resource> res; // 0x0
        _inline ResEntry(LocalizerImp::ResEntry const &); /* compiler_generated() */
        _inline ResEntry(); /* compiler_generated() */
        _inline ~ResEntry(); /* compiler_generated() */
        _inline LocalizerImp::ResEntry &operator=(LocalizerImp::ResEntry const &); /* compiler_generated() */
    };
    static_assert(sizeof(ResEntry) == 8, "Invalid ResEntry size");
    typedef std::vector<LocalizerImp::ResEntry,std::allocator<LocalizerImp::ResEntry> > ResourceList;
private:
    std::vector<LocalizerImp::ResEntry,std::allocator<LocalizerImp::ResEntry> > m_res; // 0x0
    bool InternalResLoad(char const *, LocalizerImp::Resource *(*)(char const *));
    bool InternalResUnload(char const *);
    LocalizerImp::Resource *GetTxtResourceByFileName(char const *);
    LocalizerImp &operator=(LocalizerImp const &);
};
static_assert(sizeof(LocalizerImp) == 12, "Invalid LocalizerImp size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZERIMP_H__
#endif
