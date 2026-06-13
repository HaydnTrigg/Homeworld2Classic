#if 0
#ifndef __FOURIER_H__
#define __FOURIER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Fourier
{
};
static_assert(sizeof(Fourier) == 1, "Invalid Fourier size");

/* ---------- prototypes */

extern void bitrv2<float>(__int32 n, std::vector<float,std::allocator<float> > &a);

_static void bitrv<float>(__int32 n, std::vector<float,std::allocator<float> > &a);

/* ---------- globals */

/* ---------- public code */

_extern void _sub_60C70B(__int32, std::vector<float,std::allocator<float> > &);
void bitrv2<float>(__int32 n, std::vector<float,std::allocator<float> > &a) // 0x60C70B
{
    mangled_assert("??$bitrv2@M@@YGXHAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60C70B(n, a);
}

_extern void _sub_60C89D(__int32, float, float, std::vector<float,std::allocator<float> > &);
void Fourier::cdft<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60C89D
{
    mangled_assert("??$cdft@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60C89D(n, wr, wi, a);
}

_extern void _sub_60D8F4(__int32, float, float, std::vector<float,std::allocator<float> > &);
void Fourier::rdft<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60D8F4
{
    mangled_assert("??$rdft@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60D8F4(n, wr, wi, a);
}

_extern void _sub_60CC8C(__int32, float, float, std::vector<float,std::allocator<float> > &);
void Fourier::ddct<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60CC8C
{
    mangled_assert("??$ddct@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60CC8C(n, wr, wi, a);
}

_extern void _sub_60CFD8(__int32, float, float, std::vector<float,std::allocator<float> > &);
void Fourier::dfct<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60CFD8
{
    mangled_assert("??$dfct@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
    _sub_60CFD8(n, wr, wi, a);
}

/* ---------- private code */

_extern void _sub_60C7FD(__int32, std::vector<float,std::allocator<float> > &);
_static void bitrv<float>(__int32 n, std::vector<float,std::allocator<float> > &a) // 0x60C7FD
{
    mangled_assert("bitrv<float>");
    todo("implement");
    _sub_60C7FD(n, a);
}

#endif // __FOURIER_H__
#endif
