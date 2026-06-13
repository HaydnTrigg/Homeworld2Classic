#if 0
#ifndef __DPADDR_H__
#define __DPADDR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct IDirectPlay8Address :
    public IUnknown
{
    virtual HRESULT QueryInterface(_GUID const &, void **) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual HRESULT BuildFromURLW(wchar_t *) = 0;
    virtual HRESULT BuildFromURLA(char *) = 0;
    virtual HRESULT Duplicate(IDirectPlay8Address **) = 0;
    virtual HRESULT SetEqual(IDirectPlay8Address *) = 0;
    virtual HRESULT IsEqual(IDirectPlay8Address *) = 0;
    virtual HRESULT Clear() = 0;
    virtual HRESULT GetURLW(wchar_t *, unsigned long *) = 0;
    virtual HRESULT GetURLA(char *, unsigned long *) = 0;
    virtual HRESULT GetSP(_GUID *) = 0;
    virtual HRESULT GetUserData(void *, unsigned long *) = 0;
    virtual HRESULT SetSP(_GUID const *const) = 0;
    virtual HRESULT SetUserData(void const *const, unsigned long const) = 0;
    virtual HRESULT GetNumComponents(unsigned long *) = 0;
    virtual HRESULT GetComponentByName(wchar_t const *const, void *, unsigned long *, unsigned long *) = 0;
    virtual HRESULT GetComponentByIndex(unsigned long const, wchar_t *, unsigned long *, void *, unsigned long *, unsigned long *) = 0;
    virtual HRESULT AddComponent(wchar_t const *const, void const *const, unsigned long const, unsigned long const) = 0;
    virtual HRESULT GetDevice(_GUID *) = 0;
    virtual HRESULT SetDevice(_GUID const *const) = 0;
    virtual HRESULT BuildFromDPADDRESS(void *, unsigned long) = 0;
    IDirectPlay8Address(IDirectPlay8Address const &); /* compiler_generated() */
    IDirectPlay8Address(); /* compiler_generated() */
    IDirectPlay8Address &operator=(IDirectPlay8Address const &); /* compiler_generated() */
};
static_assert(sizeof(IDirectPlay8Address) == 4, "Invalid IDirectPlay8Address size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DPADDR_H__
#endif
