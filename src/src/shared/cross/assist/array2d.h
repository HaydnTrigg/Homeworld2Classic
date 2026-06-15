#if 0
#ifndef __ARRAY2D_H__
#define __ARRAY2D_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Array2DIteratorBase
{
public:
    typedef unsigned __int32 size_type;
    typedef __int32 difference_type;
    typedef std::forward_iterator_tag iterator_category;
};
static_assert(sizeof(Array2DIteratorBase) == 1, "Invalid Array2DIteratorBase size");

class Array2DIterator<float,Array2DNewAllocator<float> > :
    public Array2DIteratorBase
{
public:
    typedef float value_type;
    typedef float *pointer;
    typedef float &reference;
    Array2DIterator<float,Array2DNewAllocator<float> >(Array2DIterator<float,Array2DNewAllocator<float> > const &);
    Array2DIterator<float,Array2DNewAllocator<float> >();
    Array2DIterator<float,Array2DNewAllocator<float> > &operator=(Array2DIterator<float,Array2DNewAllocator<float> > const &);
    float const &operator*() const;
    float &operator*();
    float const *operator->() const;
    float *operator->();
    bool operator!=(Array2DIterator<float,Array2DNewAllocator<float> > const &) const;
    bool operator==(Array2DIterator<float,Array2DNewAllocator<float> > const &) const;
    Array2DIterator<float,Array2DNewAllocator<float> > const &operator++() const;
    Array2DIterator<float,Array2DNewAllocator<float> > &operator++();
    Array2DIterator<float,Array2DNewAllocator<float> > const &operator+=(unsigned __int32) const;
    Array2DIterator<float,Array2DNewAllocator<float> > &operator+=(unsigned __int32);
    void SetXY(unsigned __int32, unsigned __int32);
private:
    float *m_ptr; // 0x0
    Array2D<float,Array2DNewAllocator<float> > *m_array; // 0x4
};
static_assert(sizeof(Array2DIterator<float,Array2DNewAllocator<float> >) == 8, "Invalid Array2DIterator<float,Array2DNewAllocator<float> > size");

class Array2DNewAllocator<float>
{
public:
    _inline void Free(float *, unsigned long, unsigned long);
    _inline float *Alloc(unsigned long, unsigned long);
};
static_assert(sizeof(Array2DNewAllocator<float>) == 1, "Invalid Array2DNewAllocator<float> size");

class Array2D<float,Array2DNewAllocator<float> > :
    private Array2DNewAllocator<float>
{
public:
    typedef Array2DIterator<float,Array2DNewAllocator<float> > iterator;
    typedef Array2DIterator<float,Array2DNewAllocator<float> > const const_iterator;
    Array2D<float,Array2DNewAllocator<float> >(Array2D<float,Array2DNewAllocator<float> > const &);
    Array2D<float,Array2DNewAllocator<float> >();
    ~Array2D<float,Array2DNewAllocator<float> >();
    void SetSize(unsigned long, unsigned long);
    unsigned long GetWidth() const;
    unsigned long GetHeight() const;
    unsigned long GetSize() const;
    float *GetData();
    float const *GetData() const;
    float &GetValue(unsigned long, unsigned long);
    float const &GetValue(unsigned long, unsigned long) const;
    void SetValue(unsigned long, unsigned long, float const &);
    void FillValue(float const &);
    Array2D<float,Array2DNewAllocator<float> > &operator=(Array2D<float,Array2DNewAllocator<float> > const &);
    Array2DIterator<float,Array2DNewAllocator<float> > const begin() const;
    Array2DIterator<float,Array2DNewAllocator<float> > begin();
    Array2DIterator<float,Array2DNewAllocator<float> > const end() const;
    Array2DIterator<float,Array2DNewAllocator<float> > end();
private:
    float *m_array; // 0x0
    unsigned long m_width; // 0x4
    unsigned long m_height; // 0x8
    Array2DIterator<float,Array2DNewAllocator<float> > m_begin; // 0xC
    Array2DIterator<float,Array2DNewAllocator<float> > m_end; // 0x14
};
static_assert(sizeof(Array2D<float,Array2DNewAllocator<float> >) == 28, "Invalid Array2D<float,Array2DNewAllocator<float> > size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Array2DNewAllocator<float>::Free(float *, unsigned long, unsigned long) // 0x60E05C
{
    mangled_assert("?Free@?$Array2DNewAllocator@M@@QAEXPAMKK@Z");
    todo("implement");
}

_inline float *Array2DNewAllocator<float>::Alloc(unsigned long, unsigned long) // 0x60DEAD
{
    mangled_assert("?Alloc@?$Array2DNewAllocator@M@@QAEPAMKK@Z");
    todo("implement");
}

Array2D<float,Array2DNewAllocator<float> >::Array2D<float,Array2DNewAllocator<float> >() // 0x60DC89
{
    mangled_assert("??0?$Array2D@MV?$Array2DNewAllocator@M@@@@QAE@XZ");
    todo("implement");
}

Array2D<float,Array2DNewAllocator<float> >::~Array2D<float,Array2DNewAllocator<float> >() // 0x60DD64
{
    mangled_assert("??1?$Array2D@MV?$Array2DNewAllocator@M@@@@QAE@XZ");
    todo("implement");
}

void Array2D<float,Array2DNewAllocator<float> >::SetSize(unsigned long, unsigned long) // 0x60E117
{
    mangled_assert("?SetSize@?$Array2D@MV?$Array2DNewAllocator@M@@@@QAEXKK@Z");
    todo("implement");
}

unsigned long Array2D<float,Array2DNewAllocator<float> >::GetWidth() const // 0x60E089
{
    mangled_assert("?GetWidth@?$Array2D@MV?$Array2DNewAllocator@M@@@@QBEKXZ");
    todo("implement");
}

unsigned long Array2D<float,Array2DNewAllocator<float> >::GetHeight() const // 0x60E069
{
    mangled_assert("?GetHeight@?$Array2D@MV?$Array2DNewAllocator@M@@@@QBEKXZ");
    todo("implement");
}

unsigned long Array2D<float,Array2DNewAllocator<float> >::GetSize() const // 0x60E06D
{
    mangled_assert("?GetSize@?$Array2D@MV?$Array2DNewAllocator@M@@@@QBEKXZ");
    todo("implement");
}

float &Array2D<float,Array2DNewAllocator<float> >::GetValue(unsigned long, unsigned long) // 0x60E075
{
    mangled_assert("?GetValue@?$Array2D@MV?$Array2DNewAllocator@M@@@@QAEAAMKK@Z");
    todo("implement");
}

void Array2D<float,Array2DNewAllocator<float> >::SetValue(unsigned long, unsigned long, float const &) // 0x60E177
{
    mangled_assert("?SetValue@?$Array2D@MV?$Array2DNewAllocator@M@@@@QAEXKKABM@Z");
    todo("implement");
}

void Array2D<float,Array2DNewAllocator<float> >::FillValue(float const &) // 0x60E042
{
    mangled_assert("?FillValue@?$Array2D@MV?$Array2DNewAllocator@M@@@@QAEXABM@Z");
    todo("implement");
}

Array2DIterator<float,Array2DNewAllocator<float> >::Array2DIterator<float,Array2DNewAllocator<float> >() // 0x60DCA2
{
    mangled_assert("??0?$Array2DIterator@MV?$Array2DNewAllocator@M@@@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __ARRAY2D_H__
#endif
