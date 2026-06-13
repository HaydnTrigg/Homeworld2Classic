#if 0
#ifndef __ADDRESS_H__
#define __ADDRESS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::Address
{
public:
    static Net::Address *Create(wchar_t const *name, unsigned short port);
    static Net::Address *Create(_GUID const &device, unsigned short port);
    IDirectPlay8Address *GetRaw() const;
    bool GetURL(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, unsigned short &) const;
    _inline Address(Net::Address const &); /* compiler_generated() */
private:
    Address(ATL::CComPtr<IDirectPlay8Address> const &);
    ATL::CComPtr<IDirectPlay8Address> m_dpAddress; // 0x0
public:
    _inline ~Address(); /* compiler_generated() */
    _inline Net::Address &operator=(Net::Address const &); /* compiler_generated() */
};
static_assert(sizeof(Net::Address) == 4, "Invalid Net::Address size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ADDRESS_H__
#endif
