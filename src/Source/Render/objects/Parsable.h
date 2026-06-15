#if 0
#ifndef __PARSABLE_H__
#define __PARSABLE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct parsablekey_s
{
    char *keyword; // 0x0
    void (*func)(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &); // 0x4
};
static_assert(sizeof(parsablekey_s) == 8, "Invalid parsablekey_s size");

class Parsable
{
public:
    _inline Parsable();
    _inline ~Parsable();
protected:
    void parseLine(Parser &, parsablekey_s *, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
    void (*findFunc(char const *, parsablekey_s *))(Parsable *, Parser &, std::vector<ShaderParam *,std::allocator<ShaderParam *> > &);
};
static_assert(sizeof(Parsable) == 1, "Invalid Parsable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline Parsable::Parsable() // 0x1002E3F0
{
    mangled_assert("??0Parsable@@QAE@XZ");
    todo("implement");
}

_inline Parsable::~Parsable() // 0x1002EDE0
{
    mangled_assert("??1Parsable@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __PARSABLE_H__
#endif
