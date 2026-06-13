#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_array<vector4>
{
private:
    vector4 *ptr; // 0x0
public:
    _inline scoped_array<vector4>(vector4 *);
private:
    scoped_array<vector4>(boost::scoped_array<vector4> const &);
    boost::scoped_array<vector4> &operator=(boost::scoped_array<vector4> const &);
    typedef boost::scoped_array<vector4> this_type;
    typedef vector4 element_type;
public:
    _inline ~scoped_array<vector4>();
    void reset(vector4 *);
    _inline vector4 &operator[](__int32) const;
    _inline vector4 *get() const;
    typedef vector4 **unspecified_bool_type() const;
    vector4 **operator class vector4 *(__thiscall boost::scoped_array<class vector4>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<vector4> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<vector4>) == 4, "Invalid boost::scoped_array<vector4> size");

class boost::scoped_array<`anonymous namespace'::HLSFactors>
{
private:
    `anonymous-namespace'::HLSFactors *ptr; // 0x0
public:
    scoped_array<`anonymous namespace'::HLSFactors>(`anonymous-namespace'::HLSFactors *);
private:
    scoped_array<`anonymous namespace'::HLSFactors>(boost::scoped_array<`anonymous namespace'::HLSFactors> const &);
    boost::scoped_array<`anonymous namespace'::HLSFactors> &operator=(boost::scoped_array<`anonymous namespace'::HLSFactors> const &);
    typedef boost::scoped_array<`anonymous namespace'::HLSFactors> this_type;
    typedef `anonymous-namespace'::HLSFactors element_type;
public:
    ~scoped_array<`anonymous namespace'::HLSFactors>();
    void reset(`anonymous-namespace'::HLSFactors *);
    `anonymous-namespace'::HLSFactors &operator[](__int32) const;
    `anonymous-namespace'::HLSFactors *get() const;
    typedef `anonymous-namespace'::HLSFactors **unspecified_bool_type() const;
    `anonymous-namespace'::HLSFactors **operator struct `anonymous-namespace'::HLSFactors *(__thiscall boost::scoped_array<struct `anonymous namespace'::HLSFactors>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<`anonymous namespace'::HLSFactors> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<`anonymous namespace'::HLSFactors>) == 4, "Invalid boost::scoped_array<`anonymous namespace'::HLSFactors> size");

class boost::scoped_array<unsigned int>
{
private:
    unsigned __int32 *ptr; // 0x0
public:
    _inline scoped_array<unsigned int>(unsigned __int32 *);
private:
    scoped_array<unsigned int>(boost::scoped_array<unsigned int> const &);
    boost::scoped_array<unsigned int> &operator=(boost::scoped_array<unsigned int> const &);
    typedef boost::scoped_array<unsigned int> this_type;
    typedef unsigned __int32 element_type;
public:
    _inline ~scoped_array<unsigned int>();
    void reset(unsigned __int32 *);
    unsigned __int32 &operator[](__int32) const;
    _inline unsigned __int32 *get() const;
    typedef unsigned __int32 **unspecified_bool_type() const;
    unsigned __int32 **operator unsigned int *(__thiscall boost::scoped_array<unsigned int>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<unsigned int> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<unsigned int>) == 4, "Invalid boost::scoped_array<unsigned int> size");

class boost::scoped_array<FatVertex>
{
private:
    FatVertex *ptr; // 0x0
public:
    _inline scoped_array<FatVertex>(FatVertex *);
private:
    scoped_array<FatVertex>(boost::scoped_array<FatVertex> const &);
    boost::scoped_array<FatVertex> &operator=(boost::scoped_array<FatVertex> const &);
    typedef boost::scoped_array<FatVertex> this_type;
    typedef FatVertex element_type;
public:
    _inline ~scoped_array<FatVertex>();
    void reset(FatVertex *);
    _inline FatVertex &operator[](__int32) const;
    _inline FatVertex *get() const;
    typedef FatVertex **unspecified_bool_type() const;
    FatVertex **operator struct FatVertex *(__thiscall boost::scoped_array<struct FatVertex>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<FatVertex> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<FatVertex>) == 4, "Invalid boost::scoped_array<FatVertex> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_5DD098(boost::scoped_array<FatVertex> *const, FatVertex *);
_inline boost::scoped_array<FatVertex>::scoped_array<FatVertex>(FatVertex *) // 0x5DD098
{
    mangled_assert("??0?$scoped_array@UFatVertex@@@boost@@QAE@PAUFatVertex@@@Z");
    todo("implement");
    _sub_5DD098(this, arg);
}

_extern _sub_56BF35(boost::scoped_array<unsigned int> *const, unsigned __int32 *);
_inline boost::scoped_array<unsigned int>::scoped_array<unsigned int>(unsigned __int32 *) // 0x56BF35
{
    mangled_assert("??0?$scoped_array@I@boost@@QAE@PAI@Z");
    todo("implement");
    _sub_56BF35(this, arg);
}

_extern _sub_56BF4B(boost::scoped_array<vector4> *const, vector4 *);
_inline boost::scoped_array<vector4>::scoped_array<vector4>(vector4 *) // 0x56BF4B
{
    mangled_assert("??0?$scoped_array@Vvector4@@@boost@@QAE@PAVvector4@@@Z");
    todo("implement");
    _sub_56BF4B(this, arg);
}

_extern void _sub_5DD0F5(boost::scoped_array<FatVertex> *const);
_inline boost::scoped_array<FatVertex>::~scoped_array<FatVertex>() // 0x5DD0F5
{
    mangled_assert("??1?$scoped_array@UFatVertex@@@boost@@QAE@XZ");
    todo("implement");
    _sub_5DD0F5(this);
}

_extern void _sub_56C263(boost::scoped_array<unsigned int> *const);
_inline boost::scoped_array<unsigned int>::~scoped_array<unsigned int>() // 0x56C263
{
    mangled_assert("??1?$scoped_array@I@boost@@QAE@XZ");
    todo("implement");
    _sub_56C263(this);
}

_extern void _sub_56C275(boost::scoped_array<vector4> *const);
_inline boost::scoped_array<vector4>::~scoped_array<vector4>() // 0x56C275
{
    mangled_assert("??1?$scoped_array@Vvector4@@@boost@@QAE@XZ");
    todo("implement");
    _sub_56C275(this);
}

_extern FatVertex &_sub_5DD11C(boost::scoped_array<FatVertex> const *const, __int32);
_inline FatVertex &boost::scoped_array<FatVertex>::operator[](__int32) const // 0x5DD11C
{
    mangled_assert("??A?$scoped_array@UFatVertex@@@boost@@QBEAAUFatVertex@@H@Z");
    todo("implement");
    FatVertex & __result = _sub_5DD11C(this, arg);
    return __result;
}

_extern vector4 &_sub_56C34A(boost::scoped_array<vector4> const *const, __int32);
_inline vector4 &boost::scoped_array<vector4>::operator[](__int32) const // 0x56C34A
{
    mangled_assert("??A?$scoped_array@Vvector4@@@boost@@QBEAAVvector4@@H@Z");
    todo("implement");
    vector4 & __result = _sub_56C34A(this, arg);
    return __result;
}

_extern FatVertex *_sub_5DE5DC(boost::scoped_array<FatVertex> const *const);
_inline FatVertex *boost::scoped_array<FatVertex>::get() const // 0x5DE5DC
{
    mangled_assert("?get@?$scoped_array@UFatVertex@@@boost@@QBEPAUFatVertex@@XZ");
    todo("implement");
    FatVertex * __result = _sub_5DE5DC(this);
    return __result;
}

_extern unsigned __int32 *_sub_56D85D(boost::scoped_array<unsigned int> const *const);
_inline unsigned __int32 *boost::scoped_array<unsigned int>::get() const // 0x56D85D
{
    mangled_assert("?get@?$scoped_array@I@boost@@QBEPAIXZ");
    todo("implement");
    unsigned __int32 * __result = _sub_56D85D(this);
    return __result;
}

_extern vector4 *_sub_56D863(boost::scoped_array<vector4> const *const);
_inline vector4 *boost::scoped_array<vector4>::get() const // 0x56D863
{
    mangled_assert("?get@?$scoped_array@Vvector4@@@boost@@QBEPAVvector4@@XZ");
    todo("implement");
    vector4 * __result = _sub_56D863(this);
    return __result;
}

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_array<unsigned short>
{
private:
    unsigned short *ptr; // 0x0
public:
    _inline scoped_array<unsigned short>(unsigned short *);
private:
    scoped_array<unsigned short>(boost::scoped_array<unsigned short> const &);
    boost::scoped_array<unsigned short> &operator=(boost::scoped_array<unsigned short> const &);
    typedef boost::scoped_array<unsigned short> this_type;
    typedef unsigned short element_type;
public:
    _inline ~scoped_array<unsigned short>();
    void reset(unsigned short *);
    unsigned short &operator[](__int32) const;
    _inline unsigned short *get() const;
    typedef unsigned short **unspecified_bool_type() const;
    unsigned short **operator unsigned short *(__thiscall boost::scoped_array<unsigned short>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<unsigned short> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<unsigned short>) == 4, "Invalid boost::scoped_array<unsigned short> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1000141A(boost::scoped_array<unsigned short> *const, unsigned short *);
_inline boost::scoped_array<unsigned short>::scoped_array<unsigned short>(unsigned short *) // 0x1000141A
{
    mangled_assert("??0?$scoped_array@G@boost@@QAE@PAG@Z");
    todo("implement");
    _sub_1000141A(this, arg);
}

_extern void _sub_10001471(boost::scoped_array<unsigned short> *const);
_inline boost::scoped_array<unsigned short>::~scoped_array<unsigned short>() // 0x10001471
{
    mangled_assert("??1?$scoped_array@G@boost@@QAE@XZ");
    todo("implement");
    _sub_10001471(this);
}

_extern unsigned short *_sub_10002B6F(boost::scoped_array<unsigned short> const *const);
_inline unsigned short *boost::scoped_array<unsigned short>::get() const // 0x10002B6F
{
    mangled_assert("?get@?$scoped_array@G@boost@@QBEPAGXZ");
    todo("implement");
    unsigned short * __result = _sub_10002B6F(this);
    return __result;
}

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class boost::scoped_array<FatVertex>
{
private:
    FatVertex *ptr; // 0x0
public:
    _inline scoped_array<FatVertex>(FatVertex *);
private:
    scoped_array<FatVertex>(boost::scoped_array<FatVertex> const &);
    boost::scoped_array<FatVertex> &operator=(boost::scoped_array<FatVertex> const &);
    typedef boost::scoped_array<FatVertex> this_type;
    typedef FatVertex element_type;
public:
    _inline ~scoped_array<FatVertex>();
    void reset(FatVertex *);
    _inline FatVertex &operator[](__int32) const;
    _inline FatVertex *get() const;
    typedef FatVertex **unspecified_bool_type() const;
    FatVertex **operator struct FatVertex *(__thiscall boost::scoped_array<struct FatVertex>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<FatVertex> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<FatVertex>) == 4, "Invalid boost::scoped_array<FatVertex> size");

class boost::scoped_array<unsigned int>
{
private:
    unsigned __int32 *ptr; // 0x0
public:
    _inline scoped_array<unsigned int>(unsigned __int32 *);
private:
    scoped_array<unsigned int>(boost::scoped_array<unsigned int> const &);
    boost::scoped_array<unsigned int> &operator=(boost::scoped_array<unsigned int> const &);
    typedef boost::scoped_array<unsigned int> this_type;
    typedef unsigned __int32 element_type;
public:
    _inline ~scoped_array<unsigned int>();
    void reset(unsigned __int32 *);
    unsigned __int32 &operator[](__int32) const;
    _inline unsigned __int32 *get() const;
    typedef unsigned __int32 **unspecified_bool_type() const;
    unsigned __int32 **operator unsigned int *(__thiscall boost::scoped_array<unsigned int>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<unsigned int> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<unsigned int>) == 4, "Invalid boost::scoped_array<unsigned int> size");

class boost::scoped_array<int>
{
private:
    __int32 *ptr; // 0x0
public:
    _inline scoped_array<int>(__int32 *);
private:
    scoped_array<int>(boost::scoped_array<int> const &);
    boost::scoped_array<int> &operator=(boost::scoped_array<int> const &);
    typedef boost::scoped_array<int> this_type;
    typedef __int32 element_type;
public:
    _inline ~scoped_array<int>();
    void reset(__int32 *);
    _inline __int32 &operator[](__int32) const;
    _inline __int32 *get() const;
    typedef __int32 **unspecified_bool_type() const;
    __int32 **operator int *(__thiscall boost::scoped_array<int>::* )(void) const() const() const;
    bool operator!() const;
    void swap(boost::scoped_array<int> &);
    void __dflt_ctor_closure(); /* compiler_generated() */
};
static_assert(sizeof(boost::scoped_array<int>) == 4, "Invalid boost::scoped_array<int> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_100A6D90(boost::scoped_array<int> *const, __int32 *);
_inline boost::scoped_array<int>::scoped_array<int>(__int32 *) // 0x100A6D90
{
    mangled_assert("??0?$scoped_array@H@boost@@QAE@PAH@Z");
    todo("implement");
    _sub_100A6D90(this, arg);
}

_extern _sub_100A11C0(boost::scoped_array<unsigned int> *const, unsigned __int32 *);
_inline boost::scoped_array<unsigned int>::scoped_array<unsigned int>(unsigned __int32 *) // 0x100A11C0
{
    mangled_assert("??0?$scoped_array@I@boost@@QAE@PAI@Z");
    todo("implement");
    _sub_100A11C0(this, arg);
}

_extern _sub_10048370(boost::scoped_array<FatVertex> *const, FatVertex *);
_inline boost::scoped_array<FatVertex>::scoped_array<FatVertex>(FatVertex *) // 0x10048370
{
    mangled_assert("??0?$scoped_array@UFatVertex@@@boost@@QAE@PAUFatVertex@@@Z");
    todo("implement");
    _sub_10048370(this, arg);
}

_extern void _sub_100A6FE0(boost::scoped_array<int> *const);
_inline boost::scoped_array<int>::~scoped_array<int>() // 0x100A6FE0
{
    mangled_assert("??1?$scoped_array@H@boost@@QAE@XZ");
    todo("implement");
    _sub_100A6FE0(this);
}

_extern void _sub_100A1320(boost::scoped_array<unsigned int> *const);
_inline boost::scoped_array<unsigned int>::~scoped_array<unsigned int>() // 0x100A1320
{
    mangled_assert("??1?$scoped_array@I@boost@@QAE@XZ");
    todo("implement");
    _sub_100A1320(this);
}

_extern void _sub_10048440(boost::scoped_array<FatVertex> *const);
_inline boost::scoped_array<FatVertex>::~scoped_array<FatVertex>() // 0x10048440
{
    mangled_assert("??1?$scoped_array@UFatVertex@@@boost@@QAE@XZ");
    todo("implement");
    _sub_10048440(this);
}

_extern __int32 &_sub_100A7290(boost::scoped_array<int> const *const, __int32);
_inline __int32 &boost::scoped_array<int>::operator[](__int32) const // 0x100A7290
{
    mangled_assert("??A?$scoped_array@H@boost@@QBEAAHH@Z");
    todo("implement");
    __int32 & __result = _sub_100A7290(this, arg);
    return __result;
}

_extern FatVertex &_sub_10048510(boost::scoped_array<FatVertex> const *const, __int32);
_inline FatVertex &boost::scoped_array<FatVertex>::operator[](__int32) const // 0x10048510
{
    mangled_assert("??A?$scoped_array@UFatVertex@@@boost@@QBEAAUFatVertex@@H@Z");
    todo("implement");
    FatVertex & __result = _sub_10048510(this, arg);
    return __result;
}

_extern __int32 *_sub_100A88D0(boost::scoped_array<int> const *const);
_inline __int32 *boost::scoped_array<int>::get() const // 0x100A88D0
{
    mangled_assert("?get@?$scoped_array@H@boost@@QBEPAHXZ");
    todo("implement");
    __int32 * __result = _sub_100A88D0(this);
    return __result;
}

_extern unsigned __int32 *_sub_100A1CB0(boost::scoped_array<unsigned int> const *const);
_inline unsigned __int32 *boost::scoped_array<unsigned int>::get() const // 0x100A1CB0
{
    mangled_assert("?get@?$scoped_array@I@boost@@QBEPAIXZ");
    todo("implement");
    unsigned __int32 * __result = _sub_100A1CB0(this);
    return __result;
}

_extern FatVertex *_sub_10048A00(boost::scoped_array<FatVertex> const *const);
_inline FatVertex *boost::scoped_array<FatVertex>::get() const // 0x10048A00
{
    mangled_assert("?get@?$scoped_array@UFatVertex@@@boost@@QBEPAUFatVertex@@XZ");
    todo("implement");
    FatVertex * __result = _sub_10048A00(this);
    return __result;
}

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
/* combined */
#ifndef __SCOPED_ARRAY_H__
#define __SCOPED_ARRAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SCOPED_ARRAY_H__
