#if 0
#ifndef __TABLE_H__
#define __TABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct TableHeader
{
    long count; // 0x0
    long nalloc; // 0x4
};
static_assert(sizeof(TableHeader) == 8, "Invalid TableHeader size");

class TableHead<RawPoly>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    RawPoly data[100]; // 0x8
    TableHead<RawPoly>();
};
static_assert(sizeof(TableHead<RawPoly>) == 10408, "Invalid TableHead<RawPoly> size");

class TableHead<OptPoly>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    OptPoly data[100]; // 0x8
    TableHead<OptPoly>();
};
static_assert(sizeof(TableHead<OptPoly>) == 4408, "Invalid TableHead<OptPoly> size");

class TableHead<HashEntry>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    HashEntry data[100]; // 0x8
    TableHead<HashEntry>();
};
static_assert(sizeof(TableHead<HashEntry>) == 808, "Invalid TableHead<HashEntry> size");

class TableHead<vector3>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    vector3 data[100]; // 0x8
    TableHead<vector3>();
};
static_assert(sizeof(TableHead<vector3>) == 1208, "Invalid TableHead<vector3> size");

class TableHead<vector2>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    vector2 data[100]; // 0x8
    TableHead<vector2>();
};
static_assert(sizeof(TableHead<vector2>) == 808, "Invalid TableHead<vector2> size");

class Table<RawPoly>
{
private:
    TableHead<RawPoly> *th; // 0x4
public:
    Table<RawPoly>(Table<RawPoly> const &);
    Table<RawPoly>();
    virtual ~Table<RawPoly>();
    Table<RawPoly> &operator=(Table<RawPoly> const &);
    __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    RawPoly &operator[](__int32 const) const;
    RawPoly *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, RawPoly *);
    __int32 Insert(__int32, RawPoly &);
    __int32 Append(__int32, RawPoly *, __int32);
    __int32 Append(RawPoly &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(RawPoly &);
    __int32 AppendUnique(RawPoly &, __int32);
    __int32 Remove(RawPoly &);
};
static_assert(sizeof(Table<RawPoly>) == 8, "Invalid Table<RawPoly> size");

class Table<OptPoly>
{
private:
    TableHead<OptPoly> *th; // 0x4
public:
    Table<OptPoly>(Table<OptPoly> const &);
    Table<OptPoly>();
    virtual ~Table<OptPoly>();
    Table<OptPoly> &operator=(Table<OptPoly> const &);
    __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    OptPoly &operator[](__int32 const) const;
    OptPoly *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, OptPoly *);
    __int32 Insert(__int32, OptPoly &);
    __int32 Append(__int32, OptPoly *, __int32);
    __int32 Append(OptPoly &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(OptPoly &);
    __int32 AppendUnique(OptPoly &, __int32);
    __int32 Remove(OptPoly &);
};
static_assert(sizeof(Table<OptPoly>) == 8, "Invalid Table<OptPoly> size");

class Table<HashEntry>
{
private:
    TableHead<HashEntry> *th; // 0x4
public:
    Table<HashEntry>(Table<HashEntry> const &);
    Table<HashEntry>();
    virtual ~Table<HashEntry>();
    Table<HashEntry> &operator=(Table<HashEntry> const &);
    __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    HashEntry &operator[](__int32 const) const;
    HashEntry *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, HashEntry *);
    __int32 Insert(__int32, HashEntry &);
    __int32 Append(__int32, HashEntry *, __int32);
    __int32 Append(HashEntry &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(HashEntry &);
    __int32 AppendUnique(HashEntry &, __int32);
    __int32 Remove(HashEntry &);
};
static_assert(sizeof(Table<HashEntry>) == 8, "Invalid Table<HashEntry> size");

class Table<vector3>
{
private:
    TableHead<vector3> *th; // 0x4
public:
    Table<vector3>(Table<vector3> const &);
    Table<vector3>();
    virtual ~Table<vector3>();
    Table<vector3> &operator=(Table<vector3> const &);
    __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    vector3 &operator[](__int32 const) const;
    vector3 *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, vector3 *);
    __int32 Insert(__int32, vector3 &);
    __int32 Append(__int32, vector3 *, __int32);
    __int32 Append(vector3 &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(vector3 &);
    __int32 AppendUnique(vector3 &, __int32);
    __int32 Remove(vector3 &);
};
static_assert(sizeof(Table<vector3>) == 8, "Invalid Table<vector3> size");

class Table<vector2>
{
private:
    TableHead<vector2> *th; // 0x4
public:
    Table<vector2>(Table<vector2> const &);
    Table<vector2>();
    virtual ~Table<vector2>();
    Table<vector2> &operator=(Table<vector2> const &);
    __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    vector2 &operator[](__int32 const) const;
    vector2 *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, vector2 *);
    __int32 Insert(__int32, vector2 &);
    __int32 Append(__int32, vector2 *, __int32);
    __int32 Append(vector2 &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(vector2 &);
    __int32 AppendUnique(vector2 &, __int32);
    __int32 Remove(vector2 &);
};
static_assert(sizeof(Table<vector2>) == 8, "Invalid Table<vector2> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __TABLE_H__
/* combined */
#ifndef __TABLE_H__
#define __TABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct TableHeader
{
    long count; // 0x0
    long nalloc; // 0x4
};
static_assert(sizeof(TableHeader) == 8, "Invalid TableHeader size");

class TableHead<RawPoly>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    RawPoly data[100]; // 0x8
    TableHead<RawPoly>();
};
static_assert(sizeof(TableHead<RawPoly>) == 10408, "Invalid TableHead<RawPoly> size");

class TableHead<OptPoly>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    OptPoly data[100]; // 0x8
    TableHead<OptPoly>();
};
static_assert(sizeof(TableHead<OptPoly>) == 4408, "Invalid TableHead<OptPoly> size");

class TableHead<HashEntry>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    HashEntry data[100]; // 0x8
    TableHead<HashEntry>();
};
static_assert(sizeof(TableHead<HashEntry>) == 808, "Invalid TableHead<HashEntry> size");

class TableHead<vector3>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    vector3 data[100]; // 0x8
    TableHead<vector3>();
};
static_assert(sizeof(TableHead<vector3>) == 1208, "Invalid TableHead<vector3> size");

class TableHead<vector2>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    vector2 data[100]; // 0x8
    TableHead<vector2>();
};
static_assert(sizeof(TableHead<vector2>) == 808, "Invalid TableHead<vector2> size");

class TableHead<int>
{
public:
    long count; // 0x0
    long nalloc; // 0x4
    __int32 data[100]; // 0x8
    TableHead<int>();
};
static_assert(sizeof(TableHead<int>) == 408, "Invalid TableHead<int> size");

class Table<RawPoly>
{
private:
    TableHead<RawPoly> *th; // 0x4
public:
    _inline Table<RawPoly>(Table<RawPoly> const &);
    _inline Table<RawPoly>();
    virtual _inline ~Table<RawPoly>();
    _inline Table<RawPoly> &operator=(Table<RawPoly> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    _inline RawPoly &operator[](__int32 const) const;
    RawPoly *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, RawPoly *);
    __int32 Insert(__int32, RawPoly &);
    __int32 Append(__int32, RawPoly *, __int32);
    __int32 Append(RawPoly &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(RawPoly &);
    __int32 AppendUnique(RawPoly &, __int32);
    __int32 Remove(RawPoly &);
};
static_assert(sizeof(Table<RawPoly>) == 8, "Invalid Table<RawPoly> size");

class Table<OptPoly>
{
private:
    TableHead<OptPoly> *th; // 0x4
public:
    _inline Table<OptPoly>(Table<OptPoly> const &);
    _inline Table<OptPoly>();
    virtual _inline ~Table<OptPoly>();
    _inline Table<OptPoly> &operator=(Table<OptPoly> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    _inline void SetCount(__int32);
    _inline OptPoly &operator[](__int32 const) const;
    _inline OptPoly *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, OptPoly *);
    __int32 Insert(__int32, OptPoly &);
    __int32 Append(__int32, OptPoly *, __int32);
    __int32 Append(OptPoly &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(OptPoly &);
    __int32 AppendUnique(OptPoly &, __int32);
    __int32 Remove(OptPoly &);
};
static_assert(sizeof(Table<OptPoly>) == 8, "Invalid Table<OptPoly> size");

class Table<vector3>
{
private:
    TableHead<vector3> *th; // 0x4
public:
    _inline Table<vector3>(Table<vector3> const &);
    _inline Table<vector3>();
    virtual _inline ~Table<vector3>();
    _inline Table<vector3> &operator=(Table<vector3> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    _inline void SetCount(__int32);
    _inline vector3 &operator[](__int32 const) const;
    _inline vector3 *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, vector3 *);
    __int32 Insert(__int32, vector3 &);
    __int32 Append(__int32, vector3 *, __int32);
    __int32 Append(vector3 &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(vector3 &);
    __int32 AppendUnique(vector3 &, __int32);
    __int32 Remove(vector3 &);
};
static_assert(sizeof(Table<vector3>) == 8, "Invalid Table<vector3> size");

class Table<vector2>
{
private:
    TableHead<vector2> *th; // 0x4
public:
    _inline Table<vector2>(Table<vector2> const &);
    _inline Table<vector2>();
    virtual _inline ~Table<vector2>();
    _inline Table<vector2> &operator=(Table<vector2> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    _inline vector2 &operator[](__int32 const) const;
    _inline vector2 *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, vector2 *);
    __int32 Insert(__int32, vector2 &);
    __int32 Append(__int32, vector2 *, __int32);
    __int32 Append(vector2 &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(vector2 &);
    __int32 AppendUnique(vector2 &, __int32);
    __int32 Remove(vector2 &);
};
static_assert(sizeof(Table<vector2>) == 8, "Invalid Table<vector2> size");

class Table<HashEntry>
{
private:
    TableHead<HashEntry> *th; // 0x4
public:
    _inline Table<HashEntry>(Table<HashEntry> const &);
    _inline Table<HashEntry>();
    virtual _inline ~Table<HashEntry>();
    _inline Table<HashEntry> &operator=(Table<HashEntry> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    HashEntry &operator[](__int32 const) const;
    _inline HashEntry *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, HashEntry *);
    __int32 Insert(__int32, HashEntry &);
    __int32 Append(__int32, HashEntry *, __int32);
    __int32 Append(HashEntry &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(HashEntry &);
    __int32 AppendUnique(HashEntry &, __int32);
    __int32 Remove(HashEntry &);
};
static_assert(sizeof(Table<HashEntry>) == 8, "Invalid Table<HashEntry> size");

class Table<int>
{
private:
    TableHead<int> *th; // 0x4
public:
    Table<int>(Table<int> const &);
    _inline Table<int>();
    virtual _inline ~Table<int>();
    Table<int> &operator=(Table<int> const &);
    _inline __int32 Count() const;
    __int32 Nalloc() const;
    void ZeroCount();
    void SetCount(__int32);
    _inline __int32 &operator[](__int32 const) const;
    __int32 *Addr(__int32 const) const;
    __int32 Insert(__int32, __int32, __int32 *);
    __int32 Insert(__int32, __int32 &);
    __int32 Append(__int32, __int32 *, __int32);
    __int32 Append(__int32 &, __int32);
    __int32 Delete(__int32, __int32);
    __int32 Resize(__int32);
    void Shrink();
    void Sort(__int32 (*)(void const *, void const *));
    __int32 Find(__int32 &);
    __int32 AppendUnique(__int32 &, __int32);
    __int32 Remove(__int32 &);
};
static_assert(sizeof(Table<int>) == 8, "Invalid Table<int> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_1008BE00(Table<int> *const);
_inline Table<int>::Table<int>() // 0x1008BE00
{
    mangled_assert("??0?$Table@H@@QAE@XZ");
    todo("implement");
    _sub_1008BE00(this);
}

_extern _sub_1002D5F0(Table<HashEntry> *const);
_inline Table<HashEntry>::Table<HashEntry>() // 0x1002D5F0
{
    mangled_assert("??0?$Table@UHashEntry@@@@QAE@XZ");
    todo("implement");
    _sub_1002D5F0(this);
}

_extern _sub_1002D640(Table<OptPoly> *const);
_inline Table<OptPoly>::Table<OptPoly>() // 0x1002D640
{
    mangled_assert("??0?$Table@UOptPoly@@@@QAE@XZ");
    todo("implement");
    _sub_1002D640(this);
}

_extern _sub_1002D690(Table<RawPoly> *const);
_inline Table<RawPoly>::Table<RawPoly>() // 0x1002D690
{
    mangled_assert("??0?$Table@URawPoly@@@@QAE@XZ");
    todo("implement");
    _sub_1002D690(this);
}

_extern _sub_1002D6E0(Table<vector2> *const);
_inline Table<vector2>::Table<vector2>() // 0x1002D6E0
{
    mangled_assert("??0?$Table@Vvector2@@@@QAE@XZ");
    todo("implement");
    _sub_1002D6E0(this);
}

_extern _sub_1002D730(Table<vector3> *const);
_inline Table<vector3>::Table<vector3>() // 0x1002D730
{
    mangled_assert("??0?$Table@Vvector3@@@@QAE@XZ");
    todo("implement");
    _sub_1002D730(this);
}

_extern _sub_1002D5B0(Table<HashEntry> *const, Table<HashEntry> const &);
_inline Table<HashEntry>::Table<HashEntry>(Table<HashEntry> const &) // 0x1002D5B0
{
    mangled_assert("??0?$Table@UHashEntry@@@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002D5B0(this, arg);
}

_extern _sub_1002D600(Table<OptPoly> *const, Table<OptPoly> const &);
_inline Table<OptPoly>::Table<OptPoly>(Table<OptPoly> const &) // 0x1002D600
{
    mangled_assert("??0?$Table@UOptPoly@@@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002D600(this, arg);
}

_extern _sub_1002D650(Table<RawPoly> *const, Table<RawPoly> const &);
_inline Table<RawPoly>::Table<RawPoly>(Table<RawPoly> const &) // 0x1002D650
{
    mangled_assert("??0?$Table@URawPoly@@@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002D650(this, arg);
}

_extern _sub_1002D6A0(Table<vector2> *const, Table<vector2> const &);
_inline Table<vector2>::Table<vector2>(Table<vector2> const &) // 0x1002D6A0
{
    mangled_assert("??0?$Table@Vvector2@@@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002D6A0(this, arg);
}

_extern _sub_1002D6F0(Table<vector3> *const, Table<vector3> const &);
_inline Table<vector3>::Table<vector3>(Table<vector3> const &) // 0x1002D6F0
{
    mangled_assert("??0?$Table@Vvector3@@@@QAE@ABV0@@Z");
    todo("implement");
    _sub_1002D6F0(this, arg);
}

_extern void _sub_1008BE30(Table<int> *const);
_inline Table<int>::~Table<int>() // 0x1008BE30
{
    mangled_assert("??1?$Table@H@@UAE@XZ");
    todo("implement");
    _sub_1008BE30(this);
}

_extern void _sub_1002EA70(Table<HashEntry> *const);
_inline Table<HashEntry>::~Table<HashEntry>() // 0x1002EA70
{
    mangled_assert("??1?$Table@UHashEntry@@@@UAE@XZ");
    todo("implement");
    _sub_1002EA70(this);
}

_extern void _sub_1002EAA0(Table<OptPoly> *const);
_inline Table<OptPoly>::~Table<OptPoly>() // 0x1002EAA0
{
    mangled_assert("??1?$Table@UOptPoly@@@@UAE@XZ");
    todo("implement");
    _sub_1002EAA0(this);
}

_extern void _sub_1002EAD0(Table<RawPoly> *const);
_inline Table<RawPoly>::~Table<RawPoly>() // 0x1002EAD0
{
    mangled_assert("??1?$Table@URawPoly@@@@UAE@XZ");
    todo("implement");
    _sub_1002EAD0(this);
}

_extern void _sub_1002EB00(Table<vector2> *const);
_inline Table<vector2>::~Table<vector2>() // 0x1002EB00
{
    mangled_assert("??1?$Table@Vvector2@@@@UAE@XZ");
    todo("implement");
    _sub_1002EB00(this);
}

_extern void _sub_1002EB30(Table<vector3> *const);
_inline Table<vector3>::~Table<vector3>() // 0x1002EB30
{
    mangled_assert("??1?$Table@Vvector3@@@@UAE@XZ");
    todo("implement");
    _sub_1002EB30(this);
}

_extern Table<HashEntry> &_sub_1002EF60(Table<HashEntry> *const, Table<HashEntry> const &);
_inline Table<HashEntry> &Table<HashEntry>::operator=(Table<HashEntry> const &) // 0x1002EF60
{
    mangled_assert("??4?$Table@UHashEntry@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Table<HashEntry> & __result = _sub_1002EF60(this, arg);
    return __result;
}

_extern Table<OptPoly> &_sub_1002EF90(Table<OptPoly> *const, Table<OptPoly> const &);
_inline Table<OptPoly> &Table<OptPoly>::operator=(Table<OptPoly> const &) // 0x1002EF90
{
    mangled_assert("??4?$Table@UOptPoly@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Table<OptPoly> & __result = _sub_1002EF90(this, arg);
    return __result;
}

_extern Table<RawPoly> &_sub_1002EFC0(Table<RawPoly> *const, Table<RawPoly> const &);
_inline Table<RawPoly> &Table<RawPoly>::operator=(Table<RawPoly> const &) // 0x1002EFC0
{
    mangled_assert("??4?$Table@URawPoly@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Table<RawPoly> & __result = _sub_1002EFC0(this, arg);
    return __result;
}

_extern Table<vector2> &_sub_1002EFF0(Table<vector2> *const, Table<vector2> const &);
_inline Table<vector2> &Table<vector2>::operator=(Table<vector2> const &) // 0x1002EFF0
{
    mangled_assert("??4?$Table@Vvector2@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Table<vector2> & __result = _sub_1002EFF0(this, arg);
    return __result;
}

_extern Table<vector3> &_sub_1002F020(Table<vector3> *const, Table<vector3> const &);
_inline Table<vector3> &Table<vector3>::operator=(Table<vector3> const &) // 0x1002F020
{
    mangled_assert("??4?$Table@Vvector3@@@@QAEAAV0@ABV0@@Z");
    todo("implement");
    Table<vector3> & __result = _sub_1002F020(this, arg);
    return __result;
}

_extern __int32 _sub_1008CC10(Table<int> const *const);
_inline __int32 Table<int>::Count() const // 0x1008CC10
{
    mangled_assert("?Count@?$Table@H@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_1008CC10(this);
    return __result;
}

_extern __int32 _sub_10030860(Table<HashEntry> const *const);
_inline __int32 Table<HashEntry>::Count() const // 0x10030860
{
    mangled_assert("?Count@?$Table@UHashEntry@@@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10030860(this);
    return __result;
}

_extern __int32 _sub_10030870(Table<OptPoly> const *const);
_inline __int32 Table<OptPoly>::Count() const // 0x10030870
{
    mangled_assert("?Count@?$Table@UOptPoly@@@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10030870(this);
    return __result;
}

_extern __int32 _sub_10030880(Table<RawPoly> const *const);
_inline __int32 Table<RawPoly>::Count() const // 0x10030880
{
    mangled_assert("?Count@?$Table@URawPoly@@@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10030880(this);
    return __result;
}

_extern __int32 _sub_10030890(Table<vector2> const *const);
_inline __int32 Table<vector2>::Count() const // 0x10030890
{
    mangled_assert("?Count@?$Table@Vvector2@@@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_10030890(this);
    return __result;
}

_extern __int32 _sub_100308A0(Table<vector3> const *const);
_inline __int32 Table<vector3>::Count() const // 0x100308A0
{
    mangled_assert("?Count@?$Table@Vvector3@@@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_100308A0(this);
    return __result;
}

_extern void _sub_1008CEA0(Table<OptPoly> *const, __int32);
_inline void Table<OptPoly>::SetCount(__int32) // 0x1008CEA0
{
    mangled_assert("?SetCount@?$Table@UOptPoly@@@@QAEXH@Z");
    todo("implement");
    _sub_1008CEA0(this, arg);
}

_extern void _sub_1008CEC0(Table<vector3> *const, __int32);
_inline void Table<vector3>::SetCount(__int32) // 0x1008CEC0
{
    mangled_assert("?SetCount@?$Table@Vvector3@@@@QAEXH@Z");
    todo("implement");
    _sub_1008CEC0(this, arg);
}

_extern __int32 &_sub_1008BE60(Table<int> const *const, __int32 const);
_inline __int32 &Table<int>::operator[](__int32 const) const // 0x1008BE60
{
    mangled_assert("??A?$Table@H@@QBEAAHH@Z");
    todo("implement");
    __int32 & __result = _sub_1008BE60(this, arg);
    return __result;
}

_extern OptPoly &_sub_1008BE70(Table<OptPoly> const *const, __int32 const);
_inline OptPoly &Table<OptPoly>::operator[](__int32 const) const // 0x1008BE70
{
    mangled_assert("??A?$Table@UOptPoly@@@@QBEAAUOptPoly@@H@Z");
    todo("implement");
    OptPoly & __result = _sub_1008BE70(this, arg);
    return __result;
}

_extern RawPoly &_sub_1008BE90(Table<RawPoly> const *const, __int32 const);
_inline RawPoly &Table<RawPoly>::operator[](__int32 const) const // 0x1008BE90
{
    mangled_assert("??A?$Table@URawPoly@@@@QBEAAURawPoly@@H@Z");
    todo("implement");
    RawPoly & __result = _sub_1008BE90(this, arg);
    return __result;
}

_extern vector2 &_sub_1008BEB0(Table<vector2> const *const, __int32 const);
_inline vector2 &Table<vector2>::operator[](__int32 const) const // 0x1008BEB0
{
    mangled_assert("??A?$Table@Vvector2@@@@QBEAAVvector2@@H@Z");
    todo("implement");
    vector2 & __result = _sub_1008BEB0(this, arg);
    return __result;
}

_extern vector3 &_sub_1008BEC0(Table<vector3> const *const, __int32 const);
_inline vector3 &Table<vector3>::operator[](__int32 const) const // 0x1008BEC0
{
    mangled_assert("??A?$Table@Vvector3@@@@QBEAAVvector3@@H@Z");
    todo("implement");
    vector3 & __result = _sub_1008BEC0(this, arg);
    return __result;
}

_extern HashEntry *_sub_1008BF50(Table<HashEntry> const *const, __int32 const);
_inline HashEntry *Table<HashEntry>::Addr(__int32 const) const // 0x1008BF50
{
    mangled_assert("?Addr@?$Table@UHashEntry@@@@QBEPAUHashEntry@@H@Z");
    todo("implement");
    HashEntry * __result = _sub_1008BF50(this, arg);
    return __result;
}

_extern OptPoly *_sub_1008BF60(Table<OptPoly> const *const, __int32 const);
_inline OptPoly *Table<OptPoly>::Addr(__int32 const) const // 0x1008BF60
{
    mangled_assert("?Addr@?$Table@UOptPoly@@@@QBEPAUOptPoly@@H@Z");
    todo("implement");
    OptPoly * __result = _sub_1008BF60(this, arg);
    return __result;
}

_extern vector2 *_sub_1008BF80(Table<vector2> const *const, __int32 const);
_inline vector2 *Table<vector2>::Addr(__int32 const) const // 0x1008BF80
{
    mangled_assert("?Addr@?$Table@Vvector2@@@@QBEPAVvector2@@H@Z");
    todo("implement");
    vector2 * __result = _sub_1008BF80(this, arg);
    return __result;
}

_extern vector3 *_sub_1008BF90(Table<vector3> const *const, __int32 const);
_inline vector3 *Table<vector3>::Addr(__int32 const) const // 0x1008BF90
{
    mangled_assert("?Addr@?$Table@Vvector3@@@@QBEPAVvector3@@H@Z");
    todo("implement");
    vector3 * __result = _sub_1008BF90(this, arg);
    return __result;
}

_extern __int32 _sub_1008BFB0(Table<int> *const, __int32 &, __int32);
__int32 Table<int>::Append(__int32 &, __int32) // 0x1008BFB0
{
    mangled_assert("?Append@?$Table@H@@QAEHAAHH@Z");
    todo("implement");
    __int32 __result = _sub_1008BFB0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008BFF0(Table<HashEntry> *const, HashEntry &, __int32);
__int32 Table<HashEntry>::Append(HashEntry &, __int32) // 0x1008BFF0
{
    mangled_assert("?Append@?$Table@UHashEntry@@@@QAEHAAUHashEntry@@H@Z");
    todo("implement");
    __int32 __result = _sub_1008BFF0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008C030(Table<OptPoly> *const, OptPoly &, __int32);
__int32 Table<OptPoly>::Append(OptPoly &, __int32) // 0x1008C030
{
    mangled_assert("?Append@?$Table@UOptPoly@@@@QAEHAAUOptPoly@@H@Z");
    todo("implement");
    __int32 __result = _sub_1008C030(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008C070(Table<RawPoly> *const, RawPoly &, __int32);
__int32 Table<RawPoly>::Append(RawPoly &, __int32) // 0x1008C070
{
    mangled_assert("?Append@?$Table@URawPoly@@@@QAEHAAURawPoly@@H@Z");
    todo("implement");
    __int32 __result = _sub_1008C070(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008C0B0(Table<vector2> *const, vector2 &, __int32);
__int32 Table<vector2>::Append(vector2 &, __int32) // 0x1008C0B0
{
    mangled_assert("?Append@?$Table@Vvector2@@@@QAEHAAVvector2@@H@Z");
    todo("implement");
    __int32 __result = _sub_1008C0B0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008C0F0(Table<vector3> *const, vector3 &, __int32);
__int32 Table<vector3>::Append(vector3 &, __int32) // 0x1008C0F0
{
    mangled_assert("?Append@?$Table@Vvector3@@@@QAEHAAVvector3@@H@Z");
    todo("implement");
    __int32 __result = _sub_1008C0F0(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1009B230(Table<int> *const, __int32, __int32 *, __int32);
__int32 Table<int>::Append(__int32, __int32 *, __int32) // 0x1009B230
{
    mangled_assert("?Append@?$Table@H@@QAEHHPAHH@Z");
    todo("implement");
    __int32 __result = _sub_1009B230(this, arg, arg, arg);
    return __result;
}

_extern __int32 _sub_1009BE40(Table<int> *const, __int32, __int32);
__int32 Table<int>::Delete(__int32, __int32) // 0x1009BE40
{
    mangled_assert("?Delete@?$Table@H@@QAEHHH@Z");
    todo("implement");
    __int32 __result = _sub_1009BE40(this, arg, arg);
    return __result;
}

_extern __int32 _sub_1008CE00(Table<HashEntry> *const, __int32);
__int32 Table<HashEntry>::Resize(__int32) // 0x1008CE00
{
    mangled_assert("?Resize@?$Table@UHashEntry@@@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_1008CE00(this, arg);
    return __result;
}

_extern __int32 _sub_1008CE20(Table<OptPoly> *const, __int32);
__int32 Table<OptPoly>::Resize(__int32) // 0x1008CE20
{
    mangled_assert("?Resize@?$Table@UOptPoly@@@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_1008CE20(this, arg);
    return __result;
}

_extern __int32 _sub_1008CE40(Table<RawPoly> *const, __int32);
__int32 Table<RawPoly>::Resize(__int32) // 0x1008CE40
{
    mangled_assert("?Resize@?$Table@URawPoly@@@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_1008CE40(this, arg);
    return __result;
}

_extern __int32 _sub_1008CE60(Table<vector2> *const, __int32);
__int32 Table<vector2>::Resize(__int32) // 0x1008CE60
{
    mangled_assert("?Resize@?$Table@Vvector2@@@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_1008CE60(this, arg);
    return __result;
}

_extern __int32 _sub_1008CE80(Table<vector3> *const, __int32);
__int32 Table<vector3>::Resize(__int32) // 0x1008CE80
{
    mangled_assert("?Resize@?$Table@Vvector3@@@@QAEHH@Z");
    todo("implement");
    __int32 __result = _sub_1008CE80(this, arg);
    return __result;
}

_extern void _sub_1008CEE0(Table<OptPoly> *const, __int32 (*)(void const *, void const *));
void Table<OptPoly>::Sort(__int32 (*)(void const *, void const *)) // 0x1008CEE0
{
    mangled_assert("?Sort@?$Table@UOptPoly@@@@QAEXP6AHPBX0@Z@Z");
    todo("implement");
    _sub_1008CEE0(this, arg);
}

/* ---------- private code */

#endif // __TABLE_H__
#endif
