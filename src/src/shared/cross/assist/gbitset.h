#if 0
#ifndef __GBITSET_H__
#define __GBITSET_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class TypedBitSet<enum SoundParams::ParamType,30>
{
private:
    std::bitset<30> m_bits; // 0x0
public:
    _inline TypedBitSet<enum SoundParams::ParamType,30>(TypedBitSet<enum SoundParams::ParamType,30> const &);
    _inline TypedBitSet<enum SoundParams::ParamType,30>();
    _inline TypedBitSet<enum SoundParams::ParamType,30> &operator=(TypedBitSet<enum SoundParams::ParamType,30> const &);
    _inline bool tst(SoundParams::ParamType) const;
    _inline bool any() const;
    bool none() const;
    _inline void set(SoundParams::ParamType, bool);
    _inline void set(SoundParams::ParamType);
    _inline void clr(SoundParams::ParamType);
    _inline void clear();
    TypedBitSet<enum SoundParams::ParamType,30> &operator|=(TypedBitSet<enum SoundParams::ParamType,30> const &);
    TypedBitSet<enum SoundParams::ParamType,30> &operator|=(SoundParams::ParamType);
    TypedBitSet<enum SoundParams::ParamType,30> &operator&=(TypedBitSet<enum SoundParams::ParamType,30> const &);
    _inline bool operator==(TypedBitSet<enum SoundParams::ParamType,30> const &) const;
    unsigned __int32 to_size_t() const;
};
static_assert(sizeof(TypedBitSet<enum SoundParams::ParamType,30>) == 4, "Invalid TypedBitSet<enum SoundParams::ParamType,30> size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline TypedBitSet<enum SoundParams::ParamType,30>::TypedBitSet<enum SoundParams::ParamType,30>() // 0x6C377F
{
    mangled_assert("??0?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAE@XZ");
    todo("implement");
}

_inline TypedBitSet<enum SoundParams::ParamType,30>::TypedBitSet<enum SoundParams::ParamType,30>(TypedBitSet<enum SoundParams::ParamType,30> const &) // 0x6C3772
{
    mangled_assert("??0?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAE@ABV0@@Z");
    todo("implement");
}

_inline TypedBitSet<enum SoundParams::ParamType,30> &TypedBitSet<enum SoundParams::ParamType,30>::operator=(TypedBitSet<enum SoundParams::ParamType,30> const &) // 0x6C39A9
{
    mangled_assert("??4?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAEAAV0@ABV0@@Z");
    todo("implement");
}

_inline bool TypedBitSet<enum SoundParams::ParamType,30>::tst(SoundParams::ParamType) const // 0x6C6453
{
    mangled_assert("?tst@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QBE_NW4ParamType@SoundParams@@@Z");
    todo("implement");
}

_inline bool TypedBitSet<enum SoundParams::ParamType,30>::any() const // 0x6C4DEC
{
    mangled_assert("?any@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QBE_NXZ");
    todo("implement");
}

_inline void TypedBitSet<enum SoundParams::ParamType,30>::set(SoundParams::ParamType) // 0x6C63D0
{
    mangled_assert("?set@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAEXW4ParamType@SoundParams@@@Z");
    todo("implement");
}

_inline void TypedBitSet<enum SoundParams::ParamType,30>::set(SoundParams::ParamType, bool) // 0x6C63DE
{
    mangled_assert("?set@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAEXW4ParamType@SoundParams@@_N@Z");
    todo("implement");
}

_inline void TypedBitSet<enum SoundParams::ParamType,30>::clr(SoundParams::ParamType) // 0x6C4EAB
{
    mangled_assert("?clr@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAEXW4ParamType@SoundParams@@@Z");
    todo("implement");
}

_inline void TypedBitSet<enum SoundParams::ParamType,30>::clear() // 0x6C4E86
{
    mangled_assert("?clear@?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QAEXXZ");
    todo("implement");
}

_inline bool TypedBitSet<enum SoundParams::ParamType,30>::operator==(TypedBitSet<enum SoundParams::ParamType,30> const &) const // 0x6C3AE4
{
    mangled_assert("??8?$TypedBitSet@W4ParamType@SoundParams@@$0BO@@@QBE_NABV0@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __GBITSET_H__
#endif
