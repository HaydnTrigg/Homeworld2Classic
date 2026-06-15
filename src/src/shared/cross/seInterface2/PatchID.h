#if 0
#ifndef __PATCHID_H__
#define __PATCHID_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PatchID
{
public:
    struct Info
    {
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_fname; // 0x0
        PatchBase *m_pPatch; // 0x18
        long m_refcount; // 0x1C
        Info(PatchID::Info const &); /* compiler_generated() */
        _inline Info(); /* compiler_generated() */
        _inline ~Info(); /* compiler_generated() */
        PatchID::Info &operator=(PatchID::Info const &); /* compiler_generated() */
    };
    static_assert(sizeof(Info) == 32, "Invalid Info size");
    PatchID(char const *, PatchBase *);
    PatchID(PatchID const &);
    PatchID();
    ~PatchID();
    PatchID &operator=(PatchID const &);
    static PatchID const ID_Invalid;
    char const *GetFileName() const;
    _inline PatchBase const *operator->() const;
    _inline PatchBase *operator->();
    _inline PatchBase const *get() const;
    _inline PatchBase *get();
    void Save(char const *);
    void Load(char const *);
    void New();
    _inline bool operator==(PatchID const &) const;
    _inline bool operator!=(PatchID const &) const;
private:
    PatchID::Info *m_pPatchIDInfo; // 0x0
    void Reset();
};
static_assert(sizeof(PatchID) == 4, "Invalid PatchID size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline PatchBase *PatchID::get() // 0x6BF0A4
{
    mangled_assert("?get@PatchID@@QAEPAVPatchBase@@XZ");
    todo("implement");
}

_inline PatchBase const *PatchID::get() const // 0x6CFE09
{
    mangled_assert("?get@PatchID@@QBEPBVPatchBase@@XZ");
    todo("implement");
}

_inline PatchBase *PatchID::operator->() // 0x51E5AA
{
    mangled_assert("??CPatchID@@QAEPAVPatchBase@@XZ");
    todo("implement");
}

_inline PatchBase const *PatchID::operator->() const // 0x6CC0DA
{
    mangled_assert("??CPatchID@@QBEPBVPatchBase@@XZ");
    todo("implement");
}

_inline bool PatchID::operator==(PatchID const &) const // 0x48A33D
{
    mangled_assert("??8PatchID@@QBE_NABV0@@Z");
    todo("implement");
}

_inline bool PatchID::operator!=(PatchID const &) const // 0x48A39D
{
    mangled_assert("??9PatchID@@QBE_NABV0@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PATCHID_H__
#endif
