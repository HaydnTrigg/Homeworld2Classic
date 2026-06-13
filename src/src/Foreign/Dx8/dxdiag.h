#if 0
#ifndef __DXDIAG_H__
#define __DXDIAG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

struct _DXDIAG_INIT_PARAMS
{
    unsigned long dwSize; // 0x0
    unsigned long dwDxDiagHeaderVersion; // 0x4
    __int32 bAllowWHQLChecks; // 0x8
    void *pReserved; // 0xC
};
static_assert(sizeof(_DXDIAG_INIT_PARAMS) == 16, "Invalid _DXDIAG_INIT_PARAMS size");

struct IDxDiagProvider :
    public IUnknown
{
    virtual HRESULT QueryInterface(_GUID const &, void **) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual HRESULT Initialize(_DXDIAG_INIT_PARAMS *) = 0;
    virtual HRESULT GetRootContainer(IDxDiagContainer **) = 0;
    IDxDiagProvider(IDxDiagProvider const &); /* compiler_generated() */
    IDxDiagProvider(); /* compiler_generated() */
    IDxDiagProvider &operator=(IDxDiagProvider const &); /* compiler_generated() */
};
static_assert(sizeof(IDxDiagProvider) == 4, "Invalid IDxDiagProvider size");

struct IDxDiagContainer :
    public IUnknown
{
    virtual HRESULT QueryInterface(_GUID const &, void **) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual HRESULT GetNumberOfChildContainers(unsigned long *) = 0;
    virtual HRESULT EnumChildContainerNames(unsigned long, wchar_t *, unsigned long) = 0;
    virtual HRESULT GetChildContainer(wchar_t const *, IDxDiagContainer **) = 0;
    virtual HRESULT GetNumberOfProps(unsigned long *) = 0;
    virtual HRESULT EnumPropNames(unsigned long, wchar_t *, unsigned long) = 0;
    virtual HRESULT GetPropA(wchar_t const *, tagVARIANT *) = 0;
    IDxDiagContainer(IDxDiagContainer const &); /* compiler_generated() */
    IDxDiagContainer(); /* compiler_generated() */
    IDxDiagContainer &operator=(IDxDiagContainer const &); /* compiler_generated() */
};
static_assert(sizeof(IDxDiagContainer) == 4, "Invalid IDxDiagContainer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DXDIAG_H__
#endif
