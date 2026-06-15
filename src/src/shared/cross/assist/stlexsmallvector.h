#if 0
#ifndef __STLEXSMALLVECTOR_H__
#define __STLEXSMALLVECTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class std::smallvectorIterBase
{
public:
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::random_access_iterator_tag iterator_category;
};
static_assert(sizeof(std::smallvectorIterBase) == 1, "Invalid std::smallvectorIterBase size");

class std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >
{
public:
    enum
    {
        MAXLOCAL = 10, // 0x000A
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef _iobuf *value_type;
    typedef _iobuf **iterator;
    typedef _iobuf *const *const_iterator;
    typedef _iobuf *&reference;
    typedef _iobuf *const &const_reference;
    typedef std::allocator<_iobuf *> allocator_type;
    typedef std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > reverse_iterator;
    typedef std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > const const_reverse_iterator;
    smallvector<_iobuf *,10,std::allocator<_iobuf *> >(std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > const &);
    smallvector<_iobuf *,10,std::allocator<_iobuf *> >(std::allocator<_iobuf *> const &);
    ~smallvector<_iobuf *,10,std::allocator<_iobuf *> >();
    std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > &operator=(std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > const &);
    _iobuf *&operator[](unsigned __int32);
    _iobuf *const &operator[](unsigned __int32) const;
    _iobuf *const *begin() const;
    _inline _iobuf **begin();
    _iobuf *const *end() const;
    _inline _iobuf **end();
    std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > const rbegin() const;
    std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > rbegin();
    std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > const rend() const;
    std::smallvectorRevIter<_iobuf *,10,std::allocator<_iobuf *> > rend();
    _iobuf *const &front() const;
    _iobuf *&front();
    _iobuf *const &back() const;
    _inline _iobuf *&back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(_iobuf *const &);
    _inline void pop_back();
    void assign(unsigned __int32, _iobuf *const &);
    void assign(_iobuf *const *, _iobuf *const *);
    void insert(_iobuf **, _iobuf *const *, _iobuf *const *);
    void insert(_iobuf **, unsigned __int32, _iobuf *const &);
    _iobuf **insert(_iobuf **, _iobuf *const &);
    void resize(unsigned __int32, _iobuf *const &);
    void resize(unsigned __int32);
    _iobuf **erase(_iobuf **, _iobuf **);
    _iobuf **erase(_iobuf **);
    void destroy_range(_iobuf **, _iobuf **);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > &);
private:
    _iobuf **m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[40]; // 0xC
    std::allocator<_iobuf *> m_allocator; // 0x34
    void extend(unsigned __int32);
    _inline _iobuf **internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >) == 56, "Invalid std::smallvector<_iobuf *,10,std::allocator<_iobuf *> > size");

class std::smallvector<bool,4,std::allocator<bool> >
{
public:
    enum
    {
        MAXLOCAL = 4, // 0x0004
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef bool value_type;
    typedef bool *iterator;
    typedef bool const *const_iterator;
    typedef bool &reference;
    typedef bool const &const_reference;
    typedef std::allocator<bool> allocator_type;
    typedef std::smallvectorRevIter<bool,4,std::allocator<bool> > reverse_iterator;
    typedef std::smallvectorRevIter<bool,4,std::allocator<bool> > const const_reverse_iterator;
    smallvector<bool,4,std::allocator<bool> >(std::smallvector<bool,4,std::allocator<bool> > const &);
    smallvector<bool,4,std::allocator<bool> >(std::allocator<bool> const &);
    ~smallvector<bool,4,std::allocator<bool> >();
    std::smallvector<bool,4,std::allocator<bool> > &operator=(std::smallvector<bool,4,std::allocator<bool> > const &);
    _inline bool &operator[](unsigned __int32);
    bool const &operator[](unsigned __int32) const;
    _inline bool const *begin() const;
    _inline bool *begin();
    _inline bool const *end() const;
    _inline bool *end();
    std::smallvectorRevIter<bool,4,std::allocator<bool> > const rbegin() const;
    std::smallvectorRevIter<bool,4,std::allocator<bool> > rbegin();
    std::smallvectorRevIter<bool,4,std::allocator<bool> > const rend() const;
    std::smallvectorRevIter<bool,4,std::allocator<bool> > rend();
    bool const &front() const;
    bool &front();
    bool const &back() const;
    bool &back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(bool const &);
    void pop_back();
    void assign(unsigned __int32, bool const &);
    void assign(bool const *, bool const *);
    void insert(bool *, bool const *, bool const *);
    void insert(bool *, unsigned __int32, bool const &);
    bool *insert(bool *, bool const &);
    void resize(unsigned __int32, bool const &);
    _inline void resize(unsigned __int32);
    bool *erase(bool *, bool *);
    bool *erase(bool *);
    void destroy_range(bool *, bool *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<bool,4,std::allocator<bool> > &);
private:
    bool *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[4]; // 0xC
    std::allocator<bool> m_allocator; // 0x10
    void extend(unsigned __int32);
    _inline bool *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<bool,4,std::allocator<bool> >) == 20, "Invalid std::smallvector<bool,4,std::allocator<bool> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool *std::smallvector<bool,4,std::allocator<bool> >::internal_addr() // 0x10005BE0
{
    mangled_assert("?internal_addr@?$smallvector@_N$03V?$allocator@_N@std@@@std@@AAEPA_NXZ");
    todo("implement");
}

_inline _iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::internal_addr() // 0x10004359
{
    mangled_assert("?internal_addr@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@AAEPAPAU_iobuf@@XZ");
    todo("implement");
}

std::smallvector<bool,4,std::allocator<bool> >::smallvector<bool,4,std::allocator<bool> >(std::allocator<bool> const &) // 0x10004E27
{
    mangled_assert("??0?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAE@ABV?$allocator@_N@1@@Z");
    todo("implement");
}

std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::smallvector<_iobuf *,10,std::allocator<_iobuf *> >(std::allocator<_iobuf *> const &) // 0x1000197B
{
    mangled_assert("??0?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAE@ABV?$allocator@PAU_iobuf@@@1@@Z");
    todo("implement");
}

std::smallvector<bool,4,std::allocator<bool> >::smallvector<bool,4,std::allocator<bool> >(std::smallvector<bool,4,std::allocator<bool> > const &) // 0x10004E05
{
    mangled_assert("??0?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAE@ABV01@@Z");
    todo("implement");
}

std::smallvector<bool,4,std::allocator<bool> >::~smallvector<bool,4,std::allocator<bool> >() // 0x10004FB5
{
    mangled_assert("??1?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::~smallvector<_iobuf *,10,std::allocator<_iobuf *> >() // 0x10001D2F
{
    mangled_assert("??1?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAE@XZ");
    todo("implement");
}

void std::smallvector<bool,4,std::allocator<bool> >::assign(bool const *, bool const *) // 0x10005A00
{
    mangled_assert("?assign@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXPB_N0@Z");
    todo("implement");
}

std::smallvector<bool,4,std::allocator<bool> > &std::smallvector<bool,4,std::allocator<bool> >::operator=(std::smallvector<bool,4,std::allocator<bool> > const &) // 0x1000507F
{
    mangled_assert("??4?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::push_back(_iobuf *const &) // 0x10004469
{
    mangled_assert("?push_back@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEXABQAU_iobuf@@@Z");
    todo("implement");
}

_inline bool &std::smallvector<bool,4,std::allocator<bool> >::operator[](unsigned __int32) // 0x1000513B
{
    mangled_assert("??A?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEAA_NI@Z");
    todo("implement");
}

_inline bool *std::smallvector<bool,4,std::allocator<bool> >::begin() // 0x10005A6B
{
    mangled_assert("?begin@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEPA_NXZ");
    todo("implement");
}

_inline _iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::begin() // 0x10003FE3
{
    mangled_assert("?begin@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEPAPAU_iobuf@@XZ");
    todo("implement");
}

_inline bool const *std::smallvector<bool,4,std::allocator<bool> >::begin() const // 0x10005A6E
{
    mangled_assert("?begin@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QBEPB_NXZ");
    todo("implement");
}

_inline bool *std::smallvector<bool,4,std::allocator<bool> >::end() // 0x10005B26
{
    mangled_assert("?end@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEPA_NXZ");
    todo("implement");
}

_inline _iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::end() // 0x10004151
{
    mangled_assert("?end@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEPAPAU_iobuf@@XZ");
    todo("implement");
}

_inline bool const *std::smallvector<bool,4,std::allocator<bool> >::end() const // 0x10005B2C
{
    mangled_assert("?end@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QBEPB_NXZ");
    todo("implement");
}

_inline _iobuf *&std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::back() // 0x10003FD7
{
    mangled_assert("?back@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEAAPAU_iobuf@@XZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<bool,4,std::allocator<bool> >::size() const // 0x10005DF6
{
    mangled_assert("?size@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::size() const // 0x100045C3
{
    mangled_assert("?size@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::insert(_iobuf **, _iobuf *const &) // 0x100042F3
{
    mangled_assert("?insert@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEPAPAU_iobuf@@PAPAU3@ABQAU3@@Z");
    todo("implement");
}

_iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::erase(_iobuf **) // 0x10004298
{
    mangled_assert("?erase@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEPAPAU_iobuf@@PAPAU3@@Z");
    todo("implement");
}

void std::smallvector<bool,4,std::allocator<bool> >::destroy_range(bool *, bool *) // 0x10005B0F
{
    mangled_assert("?destroy_range@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXPA_N0@Z");
    todo("implement");
}

void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::destroy_range(_iobuf **, _iobuf **) // 0x10004143
{
    mangled_assert("?destroy_range@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEXPAPAU_iobuf@@0@Z");
    todo("implement");
}

bool *std::smallvector<bool,4,std::allocator<bool> >::erase(bool *, bool *) // 0x10005B3E
{
    mangled_assert("?erase@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEPA_NPA_N0@Z");
    todo("implement");
}

_iobuf **std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::erase(_iobuf **, _iobuf **) // 0x1000424D
{
    mangled_assert("?erase@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEPAPAU_iobuf@@PAPAU3@0@Z");
    todo("implement");
}

_inline void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::pop_back() // 0x10004465
{
    mangled_assert("?pop_back@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEXXZ");
    todo("implement");
}

void std::smallvector<bool,4,std::allocator<bool> >::resize(unsigned __int32, bool const &) // 0x10005DB2
{
    mangled_assert("?resize@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXIAB_N@Z");
    todo("implement");
}

_inline void std::smallvector<bool,4,std::allocator<bool> >::resize(unsigned __int32) // 0x10005D9A
{
    mangled_assert("?resize@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXI@Z");
    todo("implement");
}

_inline void std::smallvector<bool,4,std::allocator<bool> >::clear() // 0x10005A91
{
    mangled_assert("?clear@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::clear() // 0x10004016
{
    mangled_assert("?clear@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEXXZ");
    todo("implement");
}

void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::extend(unsigned __int32) // 0x100042C5
{
    mangled_assert("?extend@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<bool,4,std::allocator<bool> >::reserve(unsigned __int32) // 0x10005D44
{
    mangled_assert("?reserve@?$smallvector@_N$03V?$allocator@_N@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<_iobuf *,10,std::allocator<_iobuf *> >::reserve(unsigned __int32) // 0x100044FE
{
    mangled_assert("?reserve@?$smallvector@PAU_iobuf@@$09V?$allocator@PAU_iobuf@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STLEXSMALLVECTOR_H__
/* combined */
#ifndef __STLEXSMALLVECTOR_H__
#define __STLEXSMALLVECTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class std::smallvectorIterBase
{
public:
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::random_access_iterator_tag iterator_category;
};
static_assert(sizeof(std::smallvectorIterBase) == 1, "Invalid std::smallvectorIterBase size");

class std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > :
    public std::smallvectorIterBase
{
public:
    typedef Sob *value_type;
    typedef Sob **pointer;
    typedef Sob *&reference;
private:
    smallvectorRevIter<Sob *,4,std::allocator<Sob *> >(Sob **);
public:
    smallvectorRevIter<Sob *,4,std::allocator<Sob *> >(std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &);
    smallvectorRevIter<Sob *,4,std::allocator<Sob *> >();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > &operator=(std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &);
    Sob *const &operator*() const;
    Sob *&operator*();
    Sob *const *operator->() const;
    Sob **operator->();
    bool operator!=(std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &) const;
    bool operator==(std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &) const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &operator++() const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > &operator++();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const &operator+=(unsigned __int32) const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > &operator+=(unsigned __int32);
    Sob *const *base() const;
    Sob **base();
private:
    Sob **m_ptr; // 0x0
};
static_assert(sizeof(std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> >) == 4, "Invalid std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > size");

class std::smallvector<Sob *,4,std::allocator<Sob *> >
{
public:
    enum
    {
        MAXLOCAL = 4, // 0x0004
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef Sob *value_type;
    typedef Sob **iterator;
    typedef Sob *const *const_iterator;
    typedef Sob *&reference;
    typedef Sob *const &const_reference;
    typedef std::allocator<Sob *> allocator_type;
    typedef std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > reverse_iterator;
    typedef std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const const_reverse_iterator;
    smallvector<Sob *,4,std::allocator<Sob *> >(std::smallvector<Sob *,4,std::allocator<Sob *> > const &);
    smallvector<Sob *,4,std::allocator<Sob *> >(std::allocator<Sob *> const &);
    ~smallvector<Sob *,4,std::allocator<Sob *> >();
    std::smallvector<Sob *,4,std::allocator<Sob *> > &operator=(std::smallvector<Sob *,4,std::allocator<Sob *> > const &);
    _inline Sob *&operator[](unsigned __int32);
    _inline Sob *const &operator[](unsigned __int32) const;
    _inline Sob *const *begin() const;
    _inline Sob **begin();
    _inline Sob *const *end() const;
    _inline Sob **end();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const rbegin() const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > rbegin();
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > const rend() const;
    std::smallvectorRevIter<Sob *,4,std::allocator<Sob *> > rend();
    Sob *const &front() const;
    Sob *&front();
    Sob *const &back() const;
    _inline Sob *&back();
    _inline unsigned __int32 size() const;
    _inline bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(Sob *const &);
    _inline void pop_back();
    void assign(unsigned __int32, Sob *const &);
    void assign(Sob *const *, Sob *const *);
    void insert(Sob **, Sob *const *, Sob *const *);
    void insert(Sob **, unsigned __int32, Sob *const &);
    Sob **insert(Sob **, Sob *const &);
    void resize(unsigned __int32, Sob *const &);
    void resize(unsigned __int32);
    Sob **erase(Sob **, Sob **);
    Sob **erase(Sob **);
    void destroy_range(Sob **, Sob **);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<Sob *,4,std::allocator<Sob *> > &);
private:
    Sob **m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[16]; // 0xC
    std::allocator<Sob *> m_allocator; // 0x1C
    void extend(unsigned __int32);
    _inline Sob **internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<Sob *,4,std::allocator<Sob *> >) == 32, "Invalid std::smallvector<Sob *,4,std::allocator<Sob *> > size");

class std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >
{
public:
    enum
    {
        MAXLOCAL = 4, // 0x0004
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef FocusPoint *value_type;
    typedef FocusPoint **iterator;
    typedef FocusPoint *const *const_iterator;
    typedef FocusPoint *&reference;
    typedef FocusPoint *const &const_reference;
    typedef std::allocator<FocusPoint *> allocator_type;
    typedef std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > reverse_iterator;
    typedef std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > const const_reverse_iterator;
    smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >(std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > const &);
    smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >(std::allocator<FocusPoint *> const &);
    ~smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >();
    std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &operator=(std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > const &);
    FocusPoint *&operator[](unsigned __int32);
    FocusPoint *const &operator[](unsigned __int32) const;
    _inline FocusPoint *const *begin() const;
    _inline FocusPoint **begin();
    _inline FocusPoint *const *end() const;
    _inline FocusPoint **end();
    std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > const rbegin() const;
    std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > rbegin();
    std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > const rend() const;
    std::smallvectorRevIter<FocusPoint *,4,std::allocator<FocusPoint *> > rend();
    FocusPoint *const &front() const;
    FocusPoint *&front();
    FocusPoint *const &back() const;
    _inline FocusPoint *&back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(FocusPoint *const &);
    void pop_back();
    void assign(unsigned __int32, FocusPoint *const &);
    void assign(FocusPoint *const *, FocusPoint *const *);
    void insert(FocusPoint **, FocusPoint *const *, FocusPoint *const *);
    void insert(FocusPoint **, unsigned __int32, FocusPoint *const &);
    FocusPoint **insert(FocusPoint **, FocusPoint *const &);
    void resize(unsigned __int32, FocusPoint *const &);
    void resize(unsigned __int32);
    FocusPoint **erase(FocusPoint **, FocusPoint **);
    FocusPoint **erase(FocusPoint **);
    void destroy_range(FocusPoint **, FocusPoint **);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > &);
private:
    FocusPoint **m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[16]; // 0xC
    std::allocator<FocusPoint *> m_allocator; // 0x1C
    void extend(unsigned __int32);
    _inline FocusPoint **internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >) == 32, "Invalid std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> > size");

class std::smallvector<int,5,std::allocator<int> >
{
public:
    enum
    {
        MAXLOCAL = 5, // 0x0005
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef __int32 value_type;
    typedef __int32 *iterator;
    typedef __int32 const *const_iterator;
    typedef __int32 &reference;
    typedef __int32 const &const_reference;
    typedef std::allocator<int> allocator_type;
    typedef std::smallvectorRevIter<int,5,std::allocator<int> > reverse_iterator;
    typedef std::smallvectorRevIter<int,5,std::allocator<int> > const const_reverse_iterator;
    smallvector<int,5,std::allocator<int> >(std::smallvector<int,5,std::allocator<int> > const &);
    smallvector<int,5,std::allocator<int> >(std::allocator<int> const &);
    ~smallvector<int,5,std::allocator<int> >();
    std::smallvector<int,5,std::allocator<int> > &operator=(std::smallvector<int,5,std::allocator<int> > const &);
    _inline __int32 &operator[](unsigned __int32);
    _inline __int32 const &operator[](unsigned __int32) const;
    _inline __int32 const *begin() const;
    _inline __int32 *begin();
    _inline __int32 const *end() const;
    _inline __int32 *end();
    std::smallvectorRevIter<int,5,std::allocator<int> > const rbegin() const;
    std::smallvectorRevIter<int,5,std::allocator<int> > rbegin();
    std::smallvectorRevIter<int,5,std::allocator<int> > const rend() const;
    std::smallvectorRevIter<int,5,std::allocator<int> > rend();
    __int32 const &front() const;
    __int32 &front();
    __int32 const &back() const;
    _inline __int32 &back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(__int32 const &);
    void pop_back();
    void assign(unsigned __int32, __int32 const &);
    void assign(__int32 const *, __int32 const *);
    void insert(__int32 *, __int32 const *, __int32 const *);
    void insert(__int32 *, unsigned __int32, __int32 const &);
    __int32 *insert(__int32 *, __int32 const &);
    void resize(unsigned __int32, __int32 const &);
    _inline void resize(unsigned __int32);
    __int32 *erase(__int32 *, __int32 *);
    __int32 *erase(__int32 *);
    void destroy_range(__int32 *, __int32 *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<int,5,std::allocator<int> > &);
private:
    __int32 *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[20]; // 0xC
    std::allocator<int> m_allocator; // 0x20
    void extend(unsigned __int32);
    _inline __int32 *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<int,5,std::allocator<int> >) == 36, "Invalid std::smallvector<int,5,std::allocator<int> > size");

class std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >
{
public:
    enum
    {
        MAXLOCAL = 10, // 0x000A
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef fstring<64> value_type;
    typedef fstring<64> *iterator;
    typedef fstring<64> const *const_iterator;
    typedef fstring<64> &reference;
    typedef fstring<64> const &const_reference;
    typedef std::allocator<fstring<64> > allocator_type;
    typedef std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > reverse_iterator;
    typedef std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > const const_reverse_iterator;
    smallvector<fstring<64>,10,std::allocator<fstring<64> > >(std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > const &);
    smallvector<fstring<64>,10,std::allocator<fstring<64> > >(std::allocator<fstring<64> > const &);
    ~smallvector<fstring<64>,10,std::allocator<fstring<64> > >();
    std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &operator=(std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > const &);
    fstring<64> &operator[](unsigned __int32);
    fstring<64> const &operator[](unsigned __int32) const;
    fstring<64> const *begin() const;
    _inline fstring<64> *begin();
    fstring<64> const *end() const;
    _inline fstring<64> *end();
    std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > const rbegin() const;
    std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > rbegin();
    std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > const rend() const;
    std::smallvectorRevIter<fstring<64>,10,std::allocator<fstring<64> > > rend();
    fstring<64> const &front() const;
    fstring<64> &front();
    fstring<64> const &back() const;
    _inline fstring<64> &back();
    unsigned __int32 size() const;
    _inline bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(fstring<64> const &);
    _inline void pop_back();
    void assign(unsigned __int32, fstring<64> const &);
    void assign(fstring<64> const *, fstring<64> const *);
    void insert(fstring<64> *, fstring<64> const *, fstring<64> const *);
    void insert(fstring<64> *, unsigned __int32, fstring<64> const &);
    fstring<64> *insert(fstring<64> *, fstring<64> const &);
    void resize(unsigned __int32, fstring<64> const &);
    void resize(unsigned __int32);
    fstring<64> *erase(fstring<64> *, fstring<64> *);
    fstring<64> *erase(fstring<64> *);
    void destroy_range(fstring<64> *, fstring<64> *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > &);
private:
    fstring<64> *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[650]; // 0xC
    std::allocator<fstring<64> > m_allocator; // 0x296
    void extend(unsigned __int32);
    _inline fstring<64> *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >) == 664, "Invalid std::smallvector<fstring<64>,10,std::allocator<fstring<64> > > size");

class std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >
{
public:
    enum
    {
        MAXLOCAL = 4, // 0x0004
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    struct value_type;
    typedef ArcArray::Arc *iterator;
    typedef ArcArray::Arc const *const_iterator;
    typedef ArcArray::Arc &reference;
    typedef ArcArray::Arc const &const_reference;
    typedef std::allocator<ArcArray::Arc> allocator_type;
    typedef std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > reverse_iterator;
    typedef std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > const const_reverse_iterator;
    smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >(std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > const &);
    smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >(std::allocator<ArcArray::Arc> const &);
    ~smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >();
    std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > &operator=(std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > const &);
    ArcArray::Arc &operator[](unsigned __int32);
    ArcArray::Arc const &operator[](unsigned __int32) const;
    _inline ArcArray::Arc const *begin() const;
    _inline ArcArray::Arc *begin();
    _inline ArcArray::Arc const *end() const;
    _inline ArcArray::Arc *end();
    std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > const rbegin() const;
    std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > rbegin();
    std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > const rend() const;
    std::smallvectorRevIter<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > rend();
    ArcArray::Arc const &front() const;
    ArcArray::Arc &front();
    ArcArray::Arc const &back() const;
    _inline ArcArray::Arc &back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(ArcArray::Arc const &);
    void pop_back();
    void assign(unsigned __int32, ArcArray::Arc const &);
    void assign(ArcArray::Arc const *, ArcArray::Arc const *);
    void insert(ArcArray::Arc *, ArcArray::Arc const *, ArcArray::Arc const *);
    void insert(ArcArray::Arc *, unsigned __int32, ArcArray::Arc const &);
    ArcArray::Arc *insert(ArcArray::Arc *, ArcArray::Arc const &);
    void resize(unsigned __int32, ArcArray::Arc const &);
    _inline void resize(unsigned __int32);
    ArcArray::Arc *erase(ArcArray::Arc *, ArcArray::Arc *);
    ArcArray::Arc *erase(ArcArray::Arc *);
    void destroy_range(ArcArray::Arc *, ArcArray::Arc *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > &);
private:
    ArcArray::Arc *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[384]; // 0xC
    std::allocator<ArcArray::Arc> m_allocator; // 0x18C
    void extend(unsigned __int32);
    _inline ArcArray::Arc *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >) == 400, "Invalid std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> > size");

class std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >
{
public:
    enum
    {
        MAXLOCAL = 4, // 0x0004
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    struct value_type;
    typedef ArcArray::ArcSegment *iterator;
    typedef ArcArray::ArcSegment const *const_iterator;
    typedef ArcArray::ArcSegment &reference;
    typedef ArcArray::ArcSegment const &const_reference;
    typedef std::allocator<ArcArray::ArcSegment> allocator_type;
    typedef std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > reverse_iterator;
    typedef std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const const_reverse_iterator;
    smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >(std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const &);
    smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >(std::allocator<ArcArray::ArcSegment> const &);
    ~smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >();
    std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > &operator=(std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const &);
    ArcArray::ArcSegment &operator[](unsigned __int32);
    ArcArray::ArcSegment const &operator[](unsigned __int32) const;
    _inline ArcArray::ArcSegment const *begin() const;
    _inline ArcArray::ArcSegment *begin();
    _inline ArcArray::ArcSegment const *end() const;
    _inline ArcArray::ArcSegment *end();
    std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const rbegin() const;
    std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > rbegin();
    std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const rend() const;
    std::smallvectorRevIter<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > rend();
    ArcArray::ArcSegment const &front() const;
    ArcArray::ArcSegment &front();
    ArcArray::ArcSegment const &back() const;
    _inline ArcArray::ArcSegment &back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(ArcArray::ArcSegment const &);
    void pop_back();
    void assign(unsigned __int32, ArcArray::ArcSegment const &);
    void assign(ArcArray::ArcSegment const *, ArcArray::ArcSegment const *);
    void insert(ArcArray::ArcSegment *, ArcArray::ArcSegment const *, ArcArray::ArcSegment const *);
    void insert(ArcArray::ArcSegment *, unsigned __int32, ArcArray::ArcSegment const &);
    ArcArray::ArcSegment *insert(ArcArray::ArcSegment *, ArcArray::ArcSegment const &);
    void resize(unsigned __int32, ArcArray::ArcSegment const &);
    _inline void resize(unsigned __int32);
    ArcArray::ArcSegment *erase(ArcArray::ArcSegment *, ArcArray::ArcSegment *);
    ArcArray::ArcSegment *erase(ArcArray::ArcSegment *);
    void destroy_range(ArcArray::ArcSegment *, ArcArray::ArcSegment *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > &);
private:
    ArcArray::ArcSegment *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[48]; // 0xC
    std::allocator<ArcArray::ArcSegment> m_allocator; // 0x3C
    void extend(unsigned __int32);
    _inline ArcArray::ArcSegment *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >) == 64, "Invalid std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > size");

class std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >
{
public:
    enum
    {
        MAXLOCAL = 5, // 0x0005
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    enum value_type
    {
        MADS_Normal = 0,
        MADS_Open,
        MADS_Closed,
        MADS_CodeRed,
        MADS_CodeGreen,
        MADS_ResourceStart,
        MADS_ResourceDo,
        MADS_ResourceEnd,
        MADS_RepairStart,
        MADS_RepairDo,
        MADS_RepairEnd,
        MADS_DockPathOpen,
        MADS_DockPathClosed,
        MADS_Launched,
        MADS_Docked,
        MADS_DefenseFieldActivate,
        MADS_DefenseFieldDeActivate,
        MADS_CloakFieldActivate,
        MADS_CloakFieldDeactivate,
        MADS_HyperspaceGateActivate,
        MADS_HyperspaceGateDeActivate,
        MADS_DoingFlightManeuver,
        MADS_CaptureActive,
        MADS_CaptureInActive,
        MADS_NIS00,
        MADS_NIS01,
        MADS_NIS02,
        MADS_NumberStates,
        MADS_NoState,
    };
    typedef MADSTATE *iterator;
    typedef MADSTATE const *const_iterator;
    typedef MADSTATE &reference;
    typedef MADSTATE const &const_reference;
    typedef std::allocator<enum MADSTATE> allocator_type;
    typedef std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > reverse_iterator;
    typedef std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > const const_reverse_iterator;
    smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >(std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > const &);
    smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >(std::allocator<enum MADSTATE> const &);
    ~smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >();
    std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > &operator=(std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > const &);
    _inline MADSTATE &operator[](unsigned __int32);
    MADSTATE const &operator[](unsigned __int32) const;
    MADSTATE const *begin() const;
    _inline MADSTATE *begin();
    MADSTATE const *end() const;
    _inline MADSTATE *end();
    std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > const rbegin() const;
    std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > rbegin();
    std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > const rend() const;
    std::smallvectorRevIter<enum MADSTATE,5,std::allocator<enum MADSTATE> > rend();
    MADSTATE const &front() const;
    MADSTATE &front();
    MADSTATE const &back() const;
    _inline MADSTATE &back();
    _inline unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(MADSTATE const &);
    void pop_back();
    void assign(unsigned __int32, MADSTATE const &);
    void assign(MADSTATE const *, MADSTATE const *);
    void insert(MADSTATE *, MADSTATE const *, MADSTATE const *);
    void insert(MADSTATE *, unsigned __int32, MADSTATE const &);
    MADSTATE *insert(MADSTATE *, MADSTATE const &);
    void resize(unsigned __int32, MADSTATE const &);
    void resize(unsigned __int32);
    MADSTATE *erase(MADSTATE *, MADSTATE *);
    MADSTATE *erase(MADSTATE *);
    void destroy_range(MADSTATE *, MADSTATE *);
    _inline void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > &);
private:
    MADSTATE *m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[20]; // 0xC
    std::allocator<enum MADSTATE> m_allocator; // 0x20
    void extend(unsigned __int32);
    _inline MADSTATE *internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >) == 36, "Invalid std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::internal_addr() // 0x62F6B7
{
    mangled_assert("?internal_addr@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@AAEPAPAVSob@@XZ");
    todo("implement");
}

_inline MADSTATE *std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::internal_addr() // 0x606D52
{
    mangled_assert("?internal_addr@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@AAEPAW4MADSTATE@@XZ");
    todo("implement");
}

_inline FocusPoint **std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::internal_addr() // 0x5CA01C
{
    mangled_assert("?internal_addr@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@AAEPAPAVFocusPoint@@XZ");
    todo("implement");
}

_inline __int32 *std::smallvector<int,5,std::allocator<int> >::internal_addr() // 0x573D5D
{
    mangled_assert("?internal_addr@?$smallvector@H$04V?$allocator@H@std@@@std@@AAEPAHXZ");
    todo("implement");
}

_inline ArcArray::Arc *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::internal_addr() // 0x569F4E
{
    mangled_assert("?internal_addr@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@AAEPAUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::internal_addr() // 0x569F52
{
    mangled_assert("?internal_addr@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@AAEPAUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline fstring<64> *std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::internal_addr() // 0x5064E4
{
    mangled_assert("?internal_addr@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@AAEPAV?$fstring@$0EA@@@XZ");
    todo("implement");
}

std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >(std::allocator<FocusPoint *> const &) // 0x64C44B
{
    mangled_assert("??0?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAE@ABV?$allocator@PAVFocusPoint@@@1@@Z");
    todo("implement");
}

std::smallvector<Sob *,4,std::allocator<Sob *> >::smallvector<Sob *,4,std::allocator<Sob *> >(std::allocator<Sob *> const &) // 0x62E604
{
    mangled_assert("??0?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAE@ABV?$allocator@PAVSob@@@1@@Z");
    todo("implement");
}

std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >(std::allocator<enum MADSTATE> const &) // 0x6056FD
{
    mangled_assert("??0?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAE@ABV?$allocator@W4MADSTATE@@@1@@Z");
    todo("implement");
}

std::smallvector<int,5,std::allocator<int> >::smallvector<int,5,std::allocator<int> >(std::allocator<int> const &) // 0x57208C
{
    mangled_assert("??0?$smallvector@H$04V?$allocator@H@std@@@std@@QAE@ABV?$allocator@H@1@@Z");
    todo("implement");
}

std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >(std::allocator<ArcArray::Arc> const &) // 0x5698F2
{
    mangled_assert("??0?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAE@ABV?$allocator@UArc@ArcArray@@@1@@Z");
    todo("implement");
}

std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >(std::allocator<ArcArray::ArcSegment> const &) // 0x569907
{
    mangled_assert("??0?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAE@ABV?$allocator@UArcSegment@ArcArray@@@1@@Z");
    todo("implement");
}

std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::smallvector<fstring<64>,10,std::allocator<fstring<64> > >(std::allocator<fstring<64> > const &) // 0x504573
{
    mangled_assert("??0?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAE@ABV?$allocator@V?$fstring@$0EA@@@@1@@Z");
    todo("implement");
}

std::smallvector<int,5,std::allocator<int> >::smallvector<int,5,std::allocator<int> >(std::smallvector<int,5,std::allocator<int> > const &) // 0x57206A
{
    mangled_assert("??0?$smallvector@H$04V?$allocator@H@std@@@std@@QAE@ABV01@@Z");
    todo("implement");
}

std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::~smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >() // 0x64C829
{
    mangled_assert("??1?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<Sob *,4,std::allocator<Sob *> >::~smallvector<Sob *,4,std::allocator<Sob *> >() // 0x62E76A
{
    mangled_assert("??1?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::~smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >() // 0x6059D0
{
    mangled_assert("??1?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<int,5,std::allocator<int> >::~smallvector<int,5,std::allocator<int> >() // 0x572259
{
    mangled_assert("??1?$smallvector@H$04V?$allocator@H@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::~smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >() // 0x5699A3
{
    mangled_assert("??1?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::~smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >() // 0x5699C7
{
    mangled_assert("??1?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAE@XZ");
    todo("implement");
}

std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::~smallvector<fstring<64>,10,std::allocator<fstring<64> > >() // 0x504653
{
    mangled_assert("??1?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAE@XZ");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::assign(__int32 const *, __int32 const *) // 0x573AD4
{
    mangled_assert("?assign@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXPBH0@Z");
    todo("implement");
}

void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::assign(ArcArray::ArcSegment const *, ArcArray::ArcSegment const *) // 0x569C7C
{
    mangled_assert("?assign@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXPBUArcSegment@ArcArray@@0@Z");
    todo("implement");
}

std::smallvector<int,5,std::allocator<int> > &std::smallvector<int,5,std::allocator<int> >::operator=(std::smallvector<int,5,std::allocator<int> > const &) // 0x5722FC
{
    mangled_assert("??4?$smallvector@H$04V?$allocator@H@std@@@std@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > &std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::operator=(std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> > const &) // 0x5699F8
{
    mangled_assert("??4?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEAAV01@ABV01@@Z");
    todo("implement");
}

void std::smallvector<Sob *,4,std::allocator<Sob *> >::push_back(Sob *const &) // 0x62F843
{
    mangled_assert("?push_back@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEXABQAVSob@@@Z");
    todo("implement");
}

void std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::push_back(MADSTATE const &) // 0x60714D
{
    mangled_assert("?push_back@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEXABW4MADSTATE@@@Z");
    todo("implement");
}

void std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::push_back(FocusPoint *const &) // 0x5CA099
{
    mangled_assert("?push_back@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEXABQAVFocusPoint@@@Z");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::push_back(__int32 const &) // 0x573D95
{
    mangled_assert("?push_back@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXABH@Z");
    todo("implement");
}

void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::push_back(fstring<64> const &) // 0x506582
{
    mangled_assert("?push_back@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEXABV?$fstring@$0EA@@@@Z");
    todo("implement");
}

_inline __int32 const &std::smallvector<int,5,std::allocator<int> >::operator[](unsigned __int32) const // 0x5FEFED
{
    mangled_assert("??A?$smallvector@H$04V?$allocator@H@std@@@std@@QBEABHI@Z");
    todo("implement");
}

_inline Sob *const &std::smallvector<Sob *,4,std::allocator<Sob *> >::operator[](unsigned __int32) const // 0x448594
{
    mangled_assert("??A?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QBEABQAVSob@@I@Z");
    todo("implement");
}

_inline MADSTATE &std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::operator[](unsigned __int32) // 0x605AFA
{
    mangled_assert("??A?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEAAW4MADSTATE@@I@Z");
    todo("implement");
}

_inline __int32 &std::smallvector<int,5,std::allocator<int> >::operator[](unsigned __int32) // 0x5FEFE1
{
    mangled_assert("??A?$smallvector@H$04V?$allocator@H@std@@@std@@QAEAAHI@Z");
    todo("implement");
}

_inline Sob *&std::smallvector<Sob *,4,std::allocator<Sob *> >::operator[](unsigned __int32) // 0x451C2A
{
    mangled_assert("??A?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEAAPAVSob@@I@Z");
    todo("implement");
}

_inline MADSTATE *std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::begin() // 0x606A8D
{
    mangled_assert("?begin@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEPAW4MADSTATE@@XZ");
    todo("implement");
}

_inline FocusPoint **std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::begin() // 0x5C9EBC
{
    mangled_assert("?begin@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEPAPAVFocusPoint@@XZ");
    todo("implement");
}

_inline __int32 *std::smallvector<int,5,std::allocator<int> >::begin() // 0x573B52
{
    mangled_assert("?begin@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEPAHXZ");
    todo("implement");
}

_inline ArcArray::Arc *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::begin() // 0x569D24
{
    mangled_assert("?begin@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEPAUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::begin() // 0x569D2A
{
    mangled_assert("?begin@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEPAUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline fstring<64> *std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::begin() // 0x505E2F
{
    mangled_assert("?begin@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEPAV?$fstring@$0EA@@@XZ");
    todo("implement");
}

_inline Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::begin() // 0x45106D
{
    mangled_assert("?begin@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEPAPAVSob@@XZ");
    todo("implement");
}

_inline __int32 const *std::smallvector<int,5,std::allocator<int> >::begin() const // 0x573B55
{
    mangled_assert("?begin@?$smallvector@H$04V?$allocator@H@std@@@std@@QBEPBHXZ");
    todo("implement");
}

_inline ArcArray::Arc const *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::begin() const // 0x569D27
{
    mangled_assert("?begin@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QBEPBUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment const *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::begin() const // 0x569D2D
{
    mangled_assert("?begin@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QBEPBUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline FocusPoint *const *std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::begin() const // 0x4DD1EA
{
    mangled_assert("?begin@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QBEPBQAVFocusPoint@@XZ");
    todo("implement");
}

_inline Sob *const *std::smallvector<Sob *,4,std::allocator<Sob *> >::begin() const // 0x440CAB
{
    mangled_assert("?begin@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QBEPBQAVSob@@XZ");
    todo("implement");
}

_inline MADSTATE *std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::end() // 0x606B9A
{
    mangled_assert("?end@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEPAW4MADSTATE@@XZ");
    todo("implement");
}

_inline FocusPoint **std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::end() // 0x5C9EE0
{
    mangled_assert("?end@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEPAPAVFocusPoint@@XZ");
    todo("implement");
}

_inline __int32 *std::smallvector<int,5,std::allocator<int> >::end() // 0x573C45
{
    mangled_assert("?end@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEPAHXZ");
    todo("implement");
}

_inline ArcArray::Arc *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::end() // 0x569E36
{
    mangled_assert("?end@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEPAUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::end() // 0x569E48
{
    mangled_assert("?end@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEPAUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline fstring<64> *std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::end() // 0x506042
{
    mangled_assert("?end@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEPAV?$fstring@$0EA@@@XZ");
    todo("implement");
}

_inline Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::end() // 0x453F7E
{
    mangled_assert("?end@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEPAPAVSob@@XZ");
    todo("implement");
}

_inline __int32 const *std::smallvector<int,5,std::allocator<int> >::end() const // 0x573C4E
{
    mangled_assert("?end@?$smallvector@H$04V?$allocator@H@std@@@std@@QBEPBHXZ");
    todo("implement");
}

_inline ArcArray::Arc const *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::end() const // 0x569E3F
{
    mangled_assert("?end@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QBEPBUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment const *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::end() const // 0x569E51
{
    mangled_assert("?end@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QBEPBUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline FocusPoint *const *std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::end() const // 0x4DE59A
{
    mangled_assert("?end@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QBEPBQAVFocusPoint@@XZ");
    todo("implement");
}

_inline Sob *const *std::smallvector<Sob *,4,std::allocator<Sob *> >::end() const // 0x441A6E
{
    mangled_assert("?end@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QBEPBQAVSob@@XZ");
    todo("implement");
}

_inline Sob *&std::smallvector<Sob *,4,std::allocator<Sob *> >::back() // 0x62ED59
{
    mangled_assert("?back@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEAAPAVSob@@XZ");
    todo("implement");
}

_inline MADSTATE &std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::back() // 0x606A81
{
    mangled_assert("?back@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEAAW4MADSTATE@@XZ");
    todo("implement");
}

_inline FocusPoint *&std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::back() // 0x5C9EB0
{
    mangled_assert("?back@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEAAPAVFocusPoint@@XZ");
    todo("implement");
}

_inline __int32 &std::smallvector<int,5,std::allocator<int> >::back() // 0x573B46
{
    mangled_assert("?back@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEAAHXZ");
    todo("implement");
}

_inline ArcArray::Arc &std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::back() // 0x569D08
{
    mangled_assert("?back@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEAAUArc@ArcArray@@XZ");
    todo("implement");
}

_inline ArcArray::ArcSegment &std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::back() // 0x569D16
{
    mangled_assert("?back@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEAAUArcSegment@ArcArray@@XZ");
    todo("implement");
}

_inline fstring<64> &std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::back() // 0x505E07
{
    mangled_assert("?back@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEAAV?$fstring@$0EA@@@XZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::size() const // 0x650F0E
{
    mangled_assert("?size@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::size() const // 0x60737C
{
    mangled_assert("?size@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<int,5,std::allocator<int> >::size() const // 0x573F07
{
    mangled_assert("?size@?$smallvector@H$04V?$allocator@H@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::size() const // 0x56A962
{
    mangled_assert("?size@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::size() const // 0x56A966
{
    mangled_assert("?size@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 std::smallvector<Sob *,4,std::allocator<Sob *> >::size() const // 0x449FB7
{
    mangled_assert("?size@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QBEIXZ");
    todo("implement");
}

_inline bool std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::empty() const // 0x506023
{
    mangled_assert("?empty@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QBE_NXZ");
    todo("implement");
}

_inline bool std::smallvector<Sob *,4,std::allocator<Sob *> >::empty() const // 0x441A37
{
    mangled_assert("?empty@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QBE_NXZ");
    todo("implement");
}

Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::insert(Sob **, Sob *const &) // 0x62F5F3
{
    mangled_assert("?insert@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEPAPAVSob@@PAPAV3@ABQAV3@@Z");
    todo("implement");
}

MADSTATE *std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::insert(MADSTATE *, MADSTATE const &) // 0x606CEC
{
    mangled_assert("?insert@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEPAW4MADSTATE@@PAW43@ABW43@@Z");
    todo("implement");
}

FocusPoint **std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::insert(FocusPoint **, FocusPoint *const &) // 0x5C9FB6
{
    mangled_assert("?insert@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEPAPAVFocusPoint@@PAPAV3@ABQAV3@@Z");
    todo("implement");
}

__int32 *std::smallvector<int,5,std::allocator<int> >::insert(__int32 *, __int32 const &) // 0x573CF7
{
    mangled_assert("?insert@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEPAHPAHABH@Z");
    todo("implement");
}

fstring<64> *std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::insert(fstring<64> *, fstring<64> const &) // 0x506455
{
    mangled_assert("?insert@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEPAV?$fstring@$0EA@@@PAV3@ABV3@@Z");
    todo("implement");
}

Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::erase(Sob **) // 0x62EF84
{
    mangled_assert("?erase@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEPAPAVSob@@PAPAV3@@Z");
    todo("implement");
}

void std::smallvector<Sob *,4,std::allocator<Sob *> >::destroy_range(Sob **, Sob **) // 0x62EF0B
{
    mangled_assert("?destroy_range@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEXPAPAVSob@@0@Z");
    todo("implement");
}

void std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::destroy_range(MADSTATE *, MADSTATE *) // 0x606B97
{
    mangled_assert("?destroy_range@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEXPAW4MADSTATE@@0@Z");
    todo("implement");
}

void std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::destroy_range(FocusPoint **, FocusPoint **) // 0x5C9EDD
{
    mangled_assert("?destroy_range@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEXPAPAVFocusPoint@@0@Z");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::destroy_range(__int32 *, __int32 *) // 0x573C42
{
    mangled_assert("?destroy_range@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXPAH0@Z");
    todo("implement");
}

void std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::destroy_range(ArcArray::Arc *, ArcArray::Arc *) // 0x569E30
{
    mangled_assert("?destroy_range@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEXPAUArc@ArcArray@@0@Z");
    todo("implement");
}

void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::destroy_range(ArcArray::ArcSegment *, ArcArray::ArcSegment *) // 0x569E33
{
    mangled_assert("?destroy_range@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXPAUArcSegment@ArcArray@@0@Z");
    todo("implement");
}

void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::destroy_range(fstring<64> *, fstring<64> *) // 0x506017
{
    mangled_assert("?destroy_range@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEXPAV?$fstring@$0EA@@@0@Z");
    todo("implement");
}

FocusPoint **std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::erase(FocusPoint **, FocusPoint **) // 0x64F731
{
    mangled_assert("?erase@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEPAPAVFocusPoint@@PAPAV3@0@Z");
    todo("implement");
}

Sob **std::smallvector<Sob *,4,std::allocator<Sob *> >::erase(Sob **, Sob **) // 0x62EF39
{
    mangled_assert("?erase@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEPAPAVSob@@PAPAV3@0@Z");
    todo("implement");
}

MADSTATE *std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::erase(MADSTATE *, MADSTATE *) // 0x606BAF
{
    mangled_assert("?erase@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEPAW4MADSTATE@@PAW43@0@Z");
    todo("implement");
}

__int32 *std::smallvector<int,5,std::allocator<int> >::erase(__int32 *, __int32 *) // 0x573C63
{
    mangled_assert("?erase@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEPAHPAH0@Z");
    todo("implement");
}

ArcArray::Arc *std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::erase(ArcArray::Arc *, ArcArray::Arc *) // 0x569E5A
{
    mangled_assert("?erase@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEPAUArc@ArcArray@@PAU34@0@Z");
    todo("implement");
}

ArcArray::ArcSegment *std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::erase(ArcArray::ArcSegment *, ArcArray::ArcSegment *) // 0x569EAC
{
    mangled_assert("?erase@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEPAUArcSegment@ArcArray@@PAU34@0@Z");
    todo("implement");
}

fstring<64> *std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::erase(fstring<64> *, fstring<64> *) // 0x506325
{
    mangled_assert("?erase@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEPAV?$fstring@$0EA@@@PAV3@0@Z");
    todo("implement");
}

_inline void std::smallvector<Sob *,4,std::allocator<Sob *> >::pop_back() // 0x62F83E
{
    mangled_assert("?pop_back@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::pop_back() // 0x50655F
{
    mangled_assert("?pop_back@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEXXZ");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::resize(unsigned __int32, __int32 const &) // 0x573EC0
{
    mangled_assert("?resize@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXIABH@Z");
    todo("implement");
}

void std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::resize(unsigned __int32, ArcArray::Arc const &) // 0x56A8A6
{
    mangled_assert("?resize@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEXIABUArc@ArcArray@@@Z");
    todo("implement");
}

void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::resize(unsigned __int32, ArcArray::ArcSegment const &) // 0x56A914
{
    mangled_assert("?resize@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXIABUArcSegment@ArcArray@@@Z");
    todo("implement");
}

_inline void std::smallvector<int,5,std::allocator<int> >::resize(unsigned __int32) // 0x573EA8
{
    mangled_assert("?resize@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXI@Z");
    todo("implement");
}

_inline void std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::resize(unsigned __int32) // 0x56A85E
{
    mangled_assert("?resize@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

_inline void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::resize(unsigned __int32) // 0x56A8F4
{
    mangled_assert("?resize@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

_inline void std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::clear() // 0x64E836
{
    mangled_assert("?clear@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<Sob *,4,std::allocator<Sob *> >::clear() // 0x62ED79
{
    mangled_assert("?clear@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::clear() // 0x606B4D
{
    mangled_assert("?clear@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<int,5,std::allocator<int> >::clear() // 0x573B75
{
    mangled_assert("?clear@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::clear() // 0x569D30
{
    mangled_assert("?clear@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::clear() // 0x569D41
{
    mangled_assert("?clear@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXXZ");
    todo("implement");
}

_inline void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::clear() // 0x505EA2
{
    mangled_assert("?clear@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEXXZ");
    todo("implement");
}

void std::smallvector<Sob *,4,std::allocator<Sob *> >::extend(unsigned __int32) // 0x62F069
{
    mangled_assert("?extend@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::extend(unsigned __int32) // 0x606C24
{
    mangled_assert("?extend@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::extend(unsigned __int32) // 0x5C9EE9
{
    mangled_assert("?extend@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::extend(unsigned __int32) // 0x573CD8
{
    mangled_assert("?extend@?$smallvector@H$04V?$allocator@H@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::extend(unsigned __int32) // 0x5063A6
{
    mangled_assert("?extend@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<Sob *,4,std::allocator<Sob *> >::reserve(unsigned __int32) // 0x62F975
{
    mangled_assert("?reserve@?$smallvector@PAVSob@@$03V?$allocator@PAVSob@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<enum MADSTATE,5,std::allocator<enum MADSTATE> >::reserve(unsigned __int32) // 0x6071E9
{
    mangled_assert("?reserve@?$smallvector@W4MADSTATE@@$04V?$allocator@W4MADSTATE@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<FocusPoint *,4,std::allocator<FocusPoint *> >::reserve(unsigned __int32) // 0x5CA0AE
{
    mangled_assert("?reserve@?$smallvector@PAVFocusPoint@@$03V?$allocator@PAVFocusPoint@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<int,5,std::allocator<int> >::reserve(unsigned __int32) // 0x573E4E
{
    mangled_assert("?reserve@?$smallvector@H$04V?$allocator@H@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<ArcArray::Arc,4,std::allocator<ArcArray::Arc> >::reserve(unsigned __int32) // 0x56A7A6
{
    mangled_assert("?reserve@?$smallvector@UArc@ArcArray@@$03V?$allocator@UArc@ArcArray@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<ArcArray::ArcSegment,4,std::allocator<ArcArray::ArcSegment> >::reserve(unsigned __int32) // 0x56A802
{
    mangled_assert("?reserve@?$smallvector@UArcSegment@ArcArray@@$03V?$allocator@UArcSegment@ArcArray@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

void std::smallvector<fstring<64>,10,std::allocator<fstring<64> > >::reserve(unsigned __int32) // 0x506609
{
    mangled_assert("?reserve@?$smallvector@V?$fstring@$0EA@@@$09V?$allocator@V?$fstring@$0EA@@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STLEXSMALLVECTOR_H__
/* combined */
#ifndef __STLEXSMALLVECTOR_H__
#define __STLEXSMALLVECTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class std::smallvectorIterBase
{
public:
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::random_access_iterator_tag iterator_category;
};
static_assert(sizeof(std::smallvectorIterBase) == 1, "Invalid std::smallvectorIterBase size");

class std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >
{
public:
    enum
    {
        MAXLOCAL = 10, // 0x000A
    };
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef LuaLibrary *value_type;
    typedef LuaLibrary **iterator;
    typedef LuaLibrary *const *const_iterator;
    typedef LuaLibrary *&reference;
    typedef LuaLibrary *const &const_reference;
    typedef std::allocator<LuaLibrary *> allocator_type;
    typedef std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > reverse_iterator;
    typedef std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > const const_reverse_iterator;
    smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >(std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> > const &);
    smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >(std::allocator<LuaLibrary *> const &);
    ~smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >();
    std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> > &operator=(std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> > const &);
    LuaLibrary *&operator[](unsigned __int32);
    LuaLibrary *const &operator[](unsigned __int32) const;
    LuaLibrary *const *begin() const;
    LuaLibrary **begin();
    LuaLibrary *const *end() const;
    LuaLibrary **end();
    std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > const rbegin() const;
    std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > rbegin();
    std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > const rend() const;
    std::smallvectorRevIter<LuaLibrary *,10,std::allocator<LuaLibrary *> > rend();
    LuaLibrary *const &front() const;
    LuaLibrary *&front();
    LuaLibrary *const &back() const;
    LuaLibrary *&back();
    unsigned __int32 size() const;
    bool empty() const;
    unsigned __int32 capacity() const;
    void push_back(LuaLibrary *const &);
    void pop_back();
    void assign(unsigned __int32, LuaLibrary *const &);
    void assign(LuaLibrary *const *, LuaLibrary *const *);
    void insert(LuaLibrary **, LuaLibrary *const *, LuaLibrary *const *);
    void insert(LuaLibrary **, unsigned __int32, LuaLibrary *const &);
    LuaLibrary **insert(LuaLibrary **, LuaLibrary *const &);
    void resize(unsigned __int32, LuaLibrary *const &);
    void resize(unsigned __int32);
    LuaLibrary **erase(LuaLibrary **, LuaLibrary **);
    LuaLibrary **erase(LuaLibrary **);
    void destroy_range(LuaLibrary **, LuaLibrary **);
    void clear();
    void reserve(unsigned __int32);
    void swap(std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> > &);
private:
    LuaLibrary **m_pData; // 0x0
    unsigned __int32 m_count; // 0x4
    unsigned __int32 m_capacity; // 0x8
    unsigned char m_fixedData[40]; // 0xC
    std::allocator<LuaLibrary *> m_allocator; // 0x34
    void extend(unsigned __int32);
    LuaLibrary **internal_addr();
public:
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >) == 56, "Invalid std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::~smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >() // 0x10001A85
{
    mangled_assert("??1?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAE@XZ");
    todo("implement");
}

void std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::push_back(LuaLibrary *const &) // 0x100042C6
{
    mangled_assert("?push_back@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEXABQAVLuaLibrary@@@Z");
    todo("implement");
}

LuaLibrary **std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::insert(LuaLibrary **, LuaLibrary *const &) // 0x10004201
{
    mangled_assert("?insert@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEPAPAVLuaLibrary@@PAPAV3@ABQAV3@@Z");
    todo("implement");
}

LuaLibrary **std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::erase(LuaLibrary **) // 0x10004010
{
    mangled_assert("?erase@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEPAPAVLuaLibrary@@PAPAV3@@Z");
    todo("implement");
}

void std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::destroy_range(LuaLibrary **, LuaLibrary **) // 0x10003E5E
{
    mangled_assert("?destroy_range@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEXPAPAVLuaLibrary@@0@Z");
    todo("implement");
}

LuaLibrary **std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::erase(LuaLibrary **, LuaLibrary **) // 0x10003FC5
{
    mangled_assert("?erase@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEPAPAVLuaLibrary@@PAPAV3@0@Z");
    todo("implement");
}

void std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::extend(unsigned __int32) // 0x1000407F
{
    mangled_assert("?extend@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@AAEXI@Z");
    todo("implement");
}

void std::smallvector<LuaLibrary *,10,std::allocator<LuaLibrary *> >::reserve(unsigned __int32) // 0x10004345
{
    mangled_assert("?reserve@?$smallvector@PAVLuaLibrary@@$09V?$allocator@PAVLuaLibrary@@@std@@@std@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __STLEXSMALLVECTOR_H__
#endif
