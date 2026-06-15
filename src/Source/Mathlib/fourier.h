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

void bitrv2<float>(__int32 n, std::vector<float,std::allocator<float> > &a) // 0x60C70B
{
    mangled_assert("??$bitrv2@M@@YGXHAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

void Fourier::cdft<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60C89D
{
    mangled_assert("??$cdft@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

void Fourier::rdft<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60D8F4
{
    mangled_assert("??$rdft@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

void Fourier::ddct<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60CC8C
{
    mangled_assert("??$ddct@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

void Fourier::dfct<float>(__int32 n, float wr, float wi, std::vector<float,std::allocator<float> > &a) // 0x60CFD8
{
    mangled_assert("??$dfct@M@Fourier@@SGXHMMAAV?$vector@MV?$allocator@M@std@@@std@@@Z");
    todo("implement");
}

/* ---------- private code */

_static void bitrv<float>(__int32 n, std::vector<float,std::allocator<float> > &a) // 0x60C7FD
{
    mangled_assert("bitrv<float>");
    todo("implement");
}

#endif // __FOURIER_H__
#endif
