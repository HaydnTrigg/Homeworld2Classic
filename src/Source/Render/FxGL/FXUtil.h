#if 0
#ifndef __FXUTIL_H__
#define __FXUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct InterpolateLess2P<std::pair<float,float>,float> :
    public std::binary_function<std::pair<float,float>,float,bool>
{
    bool operator()(std::pair<float,float> const &, float const &) const;
};
static_assert(sizeof(InterpolateLess2P<std::pair<float,float>,float>) == 1, "Invalid InterpolateLess2P<std::pair<float,float>,float> size");

struct InterpolateLess2P<std::pair<float,vector4>,float> :
    public std::binary_function<std::pair<float,vector4>,float,bool>
{
    bool operator()(std::pair<float,vector4> const &, float const &) const;
};
static_assert(sizeof(InterpolateLess2P<std::pair<float,vector4>,float>) == 1, "Invalid InterpolateLess2P<std::pair<float,vector4>,float> size");

struct InterpolateLess2P<std::pair<float,vector3>,float> :
    public std::binary_function<std::pair<float,vector3>,float,bool>
{
    bool operator()(std::pair<float,vector3> const &, float const &) const;
};
static_assert(sizeof(InterpolateLess2P<std::pair<float,vector3>,float>) == 1, "Invalid InterpolateLess2P<std::pair<float,vector3>,float> size");

/* ---------- prototypes */

extern _inline unsigned __int32 FindCurrentFrameTime<float>(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &v, float const age);
extern _inline unsigned __int32 FindCurrentFrameTime<vector3>(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &v, float const age);
extern _inline unsigned __int32 FindCurrentFrameTime<vector4>(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &v, float const age);
extern _inline float FXInterpolate<float>(float const &l, float const &r, float t);
extern _inline vector3 FXInterpolate<vector3>(vector3 const &l, vector3 const &r, float t);
extern _inline vector4 FXInterpolate<vector4>(vector4 const &l, vector4 const &r, float t);
extern _inline float FXInterpolateTime<float>(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &v, float ageNormalized);
extern _inline vector3 FXInterpolateTime<vector3>(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &v, float ageNormalized);
extern _inline vector4 FXInterpolateTime<vector4>(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &v, float ageNormalized);
extern _inline float FXCalculateDragFactor(vector3 const &vel, float drag, float elapsedSeconds);

/* ---------- globals */

/* ---------- public code */

_inline bool InterpolateLess2P<std::pair<float,float>,float>::operator()(std::pair<float,float> const &, float const &) const // 0x6E5C41
{
    mangled_assert("??R?$InterpolateLess2P@U?$pair@MM@std@@M@@QBE_NABU?$pair@MM@std@@ABM@Z");
    todo("implement");
}

_inline bool InterpolateLess2P<std::pair<float,vector3>,float>::operator()(std::pair<float,vector3> const &, float const &) const // 0x6E5C58
{
    mangled_assert("??R?$InterpolateLess2P@U?$pair@MVvector3@@@std@@M@@QBE_NABU?$pair@MVvector3@@@std@@ABM@Z");
    todo("implement");
}

_inline bool InterpolateLess2P<std::pair<float,vector4>,float>::operator()(std::pair<float,vector4> const &, float const &) const // 0x6E5C6F
{
    mangled_assert("??R?$InterpolateLess2P@U?$pair@MVvector4@@@std@@M@@QBE_NABU?$pair@MVvector4@@@std@@ABM@Z");
    todo("implement");
}

_inline unsigned __int32 FindCurrentFrameTime<float>(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &v, float const age) // 0x6E383B
{
    mangled_assert("??$FindCurrentFrameTime@M@@YGIABV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline unsigned __int32 FindCurrentFrameTime<vector3>(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &v, float const age) // 0x6E386C
{
    mangled_assert("??$FindCurrentFrameTime@Vvector3@@@@YGIABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline unsigned __int32 FindCurrentFrameTime<vector4>(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &v, float const age) // 0x6E389D
{
    mangled_assert("??$FindCurrentFrameTime@Vvector4@@@@YGIABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline float FXInterpolate<float>(float const &l, float const &r, float t) // 0x6E3593
{
    mangled_assert("??$FXInterpolate@M@@YGMABM0M@Z");
    todo("implement");
}

_inline vector3 FXInterpolate<vector3>(vector3 const &l, vector3 const &r, float t) // 0x6E35DD
{
    mangled_assert("??$FXInterpolate@Vvector3@@@@YG?AVvector3@@ABV0@0M@Z");
    todo("implement");
}

_inline vector4 FXInterpolate<vector4>(vector4 const &l, vector4 const &r, float t) // 0x6E3663
{
    mangled_assert("??$FXInterpolate@Vvector4@@@@YG?AVvector4@@ABV0@0M@Z");
    todo("implement");
}

_inline float FXInterpolateTime<float>(std::vector<std::pair<float,float>,std::allocator<std::pair<float,float> > > const &v, float ageNormalized) // 0x6E36D4
{
    mangled_assert("??$FXInterpolateTime@M@@YGMABV?$vector@U?$pair@MM@std@@V?$allocator@U?$pair@MM@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline vector3 FXInterpolateTime<vector3>(std::vector<std::pair<float,vector3>,std::allocator<std::pair<float,vector3> > > const &v, float ageNormalized) // 0x6E372C
{
    mangled_assert("??$FXInterpolateTime@Vvector3@@@@YG?AVvector3@@ABV?$vector@U?$pair@MVvector3@@@std@@V?$allocator@U?$pair@MVvector3@@@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline vector4 FXInterpolateTime<vector4>(std::vector<std::pair<float,vector4>,std::allocator<std::pair<float,vector4> > > const &v, float ageNormalized) // 0x6E378B
{
    mangled_assert("??$FXInterpolateTime@Vvector4@@@@YG?AVvector4@@ABV?$vector@U?$pair@MVvector4@@@std@@V?$allocator@U?$pair@MVvector4@@@std@@@2@@std@@M@Z");
    todo("implement");
}

_inline float FXCalculateDragFactor(vector3 const &vel, float drag, float elapsedSeconds) // 0x6E1465
{
    mangled_assert("?FXCalculateDragFactor@@YGMABVvector3@@MM@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __FXUTIL_H__
#endif
