// ==++==
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// ==--==
// =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
// Platform.cpp
//
// Platform API abstraction.
//
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#include "concrtinternal.h"
#include <process.h>
#include <awint.h>

namespace Concurrency { namespace details { namespace platform {

#if (defined(_M_IX86) || defined(_M_X64))
    // A pointer to a kernel32 function that exists only on versions of windows that are 6100 and higher.
    typedef VOID (WINAPI *PFnGetCurrentProcessorNumberEx)(PPROCESSOR_NUMBER);
    static PFnGetCurrentProcessorNumberEx s_pfnGetCurrentProcessorNumberEx = nullptr;

    // A pointer to a kernel32 function that exists only on Win7 and higher
    typedef BOOL (WINAPI *PFnSetThreadGroupAffinity)(HANDLE, const GROUP_AFFINITY *, PGROUP_AFFINITY);
    static PFnSetThreadGroupAffinity s_pfnSetThreadGroupAffinity = nullptr;

    // A pointer to a kernel32 function that exists only on Win7 and higher
    typedef BOOL (WINAPI *PFnGetThreadGroupAffinity)(HANDLE, PGROUP_AFFINITY);
    static PFnGetThreadGroupAffinity s_pfnGetThreadGroupAffinity = nullptr;
#endif  // (defined(_M_IX86) || defined(_M_X64))

/// <summary>
/// Initializes function pointers that are only present on specific versions of the OS
/// </summary>
void InitializeSystemFunctionPointers()
{
#if (defined(_M_IX86) || defined(_M_X64))

#ifdef _CORESYS
#define THREAD_GROUP_DLL L"api-ms-win-core-processtopology-l1-1-0.dll"
#else
#define THREAD_GROUP_DLL L"kernel32.dll"
#endif

    HMODULE hmodThreadGroup = GetModuleHandleW(THREAD_GROUP_DLL);

    // Get/SetThreadGroupAffinity function for Win7
    PFnSetThreadGroupAffinity pfnSetFunction = (PFnSetThreadGroupAffinity) GetProcAddress(hmodThreadGroup,
                                                                                            "SetThreadGroupAffinity");

    PFnGetThreadGroupAffinity pfnGetFunction = (PFnGetThreadGroupAffinity) GetProcAddress(hmodThreadGroup,
                                                                                            "GetThreadGroupAffinity");

    if (pfnSetFunction == NULL || pfnGetFunction == NULL)
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    s_pfnSetThreadGroupAffinity = (PFnSetThreadGroupAffinity) Security::EncodePointer(pfnSetFunction);
    s_pfnGetThreadGroupAffinity = (PFnGetThreadGroupAffinity) Security::EncodePointer(pfnGetFunction);

#ifdef _CORESYS
#define CURRENT_PROCESSOR_DLL L"api-ms-win-core-processthreads-l1-1-1.dll"
#else
#define CURRENT_PROCESSOR_DLL L"kernel32.dll"
#endif
    PFnGetCurrentProcessorNumberEx pfnFunction = (PFnGetCurrentProcessorNumberEx)GetProcAddress(GetModuleHandleW(CURRENT_PROCESSOR_DLL),
                                                                                                "GetCurrentProcessorNumberEx");
    if (pfnFunction == NULL)
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }
    s_pfnGetCurrentProcessorNumberEx = (PFnGetCurrentProcessorNumberEx) Security::EncodePointer(pfnFunction);

#endif  // (defined(_M_IX86) || defined(_M_X64))
}

/************** Thread Affinity ***************************/

/// <summary>
/// Retrieves the thread group affinity
/// </summary>
BOOL __GetThreadGroupAffinity(HANDLE hThread, PGROUP_AFFINITY affinity)
{
#if (defined(_M_IX86) || defined(_M_X64))
    if (::Concurrency::GetOSVersion() >= ::Concurrency::IResourceManager::Win7OrLater)
    {
        PFnGetThreadGroupAffinity fnDecodedFunction = (PFnGetThreadGroupAffinity) Security::DecodePointer(s_pfnGetThreadGroupAffinity);
        CONCRT_VERIFY(fnDecodedFunction(hThread, affinity));
    }
    else
    {
        // On operating systems older than Win7, we don't have access to the correct information about thread's affinity,
        // so we will assume that the affinity is that of the process.
        DWORD_PTR pProcessAffinityMask;
        DWORD_PTR pSystemAffinityMask;

        GetProcessAffinityMask(GetCurrentProcess(), &pProcessAffinityMask, &pSystemAffinityMask);
        affinity->Group = 0;
        affinity->Mask = pProcessAffinityMask;
    }
#else   // !(defined(_M_IX86) || defined(_M_X64))
    CONCRT_VERIFY(GetThreadGroupAffinity(hThread, affinity));
#endif  // !(defined(_M_IX86) || defined(_M_X64))

    return 1;
}

/// <summary>
/// Sets the thread group affinity
/// </summary>
BOOL __SetThreadGroupAffinity(HANDLE hThread, const GROUP_AFFINITY * affinity)
{
#if (defined(_M_IX86) || defined(_M_X64))
    if (::Concurrency::GetOSVersion() >= ::Concurrency::IResourceManager::Win7OrLater)
    {
        PFnSetThreadGroupAffinity fnDecodedFunction = (PFnSetThreadGroupAffinity) Security::DecodePointer(s_pfnSetThreadGroupAffinity);
        CONCRT_VERIFY(fnDecodedFunction(hThread, affinity, NULL));
    }
    else
    {
        CONCRT_VERIFY(SetThreadAffinityMask(hThread, affinity->Mask));
    }
#else   // !(defined(_M_IX86) || defined(_M_X64))
    CONCRT_VERIFY(SetThreadGroupAffinity(hThread, affinity, NULL));
#endif  // !(defined(_M_IX86) || defined(_M_X64))
    return 1;
}

/************** System Info ***************************/

/// <summary>
/// Retrieves the information about the relationships of logical processors and related hardware
/// </summary>
PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX __GetLogicalProcessorInformationEx(LOGICAL_PROCESSOR_RELATIONSHIP relation,  PDWORD retLength)
{
    ASSERT(retLength != nullptr);
    PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX pSysInfo = nullptr;

#if     (defined(_M_IX86) || defined(_M_X64))
    typedef BOOL (WINAPI *PFnGetLogicalProcessorInformationEx)(LOGICAL_PROCESSOR_RELATIONSHIP, PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, PDWORD);
#ifdef _CORESYS
#define LOGICAL_PROCESSOR_DLL L"api-ms-win-core-processthreads-l1-1-1.dll"
#else
#define LOGICAL_PROCESSOR_DLL L"kernel32.dll"
#endif
    PFnGetLogicalProcessorInformationEx pfnGetLogicalProcessorInformationEx
        = (PFnGetLogicalProcessorInformationEx) GetProcAddress(GetModuleHandleW(LOGICAL_PROCESSOR_DLL),
                                                                "GetLogicalProcessorInformationEx");
    if (pfnGetLogicalProcessorInformationEx == NULL)
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    pfnGetLogicalProcessorInformationEx(relation, NULL, retLength);
#else   // !(defined(_M_IX86) || defined(_M_X64))
    GetLogicalProcessorInformationEx(relation, NULL, retLength);
#endif  // !(defined(_M_IX86) || defined(_M_X64))

    if (ERROR_INSUFFICIENT_BUFFER != GetLastError())
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    DWORD len = *retLength;
    ASSERT(len > 0);

    pSysInfo = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX) malloc(len);

    if (pSysInfo == NULL)
    {
        throw std::bad_alloc();
    }

#if     (defined(_M_IX86) || defined(_M_X64))
    if (!pfnGetLogicalProcessorInformationEx(relation, pSysInfo, retLength))
#else   // !(defined(_M_IX86) || defined(_M_X64))
    if (!GetLogicalProcessorInformationEx(relation, pSysInfo, retLength))
#endif  // !(defined(_M_IX86) || defined(_M_X64))
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }
    return pSysInfo;
}

/// <summary>
/// Retrieves the information about logical processors and related hardware
/// </summary>
PSYSTEM_LOGICAL_PROCESSOR_INFORMATION __GetLogicalProcessorInformation(PDWORD retLength)
{
#if (defined(_M_IX86) || defined(_M_X64))
    ASSERT(retLength != nullptr);

    __crtGetLogicalProcessorInformation(NULL, retLength);

    if (ERROR_INSUFFICIENT_BUFFER != GetLastError())
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    DWORD len = *retLength;
    ASSERT(len > 0);

    PSYSTEM_LOGICAL_PROCESSOR_INFORMATION pSysInfo = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION) malloc(len);

    if (pSysInfo == NULL)
    {
        throw std::bad_alloc();
    }

    if (!__crtGetLogicalProcessorInformation(pSysInfo, retLength))
    {
        throw scheduler_resource_allocation_error(HRESULT_FROM_WIN32(GetLastError()));
    }

    return pSysInfo;
#else

    throw invalid_operation();

#endif // (defined(_M_IX86) || defined(_M_X64))
}

/// <summary>
/// Retrieves the processor group and number of the logical processor where the thread is running
/// </summary>
void __GetCurrentProcessorNumberEx(PPROCESSOR_NUMBER procNum)
{
#if (defined(_M_IX86) || defined(_M_X64))

    PFnGetCurrentProcessorNumberEx fnDecodedFunction = (PFnGetCurrentProcessorNumberEx) Security::DecodePointer(s_pfnGetCurrentProcessorNumberEx);
    fnDecodedFunction(procNum);

#else   // !(defined(_M_IX86) || defined(_M_X64))

    GetCurrentProcessorNumberEx(procNum);

#endif  // !(defined(_M_IX86) || defined(_M_X64)
}

//***********************************************/
//   Timer                                       /
//***********************************************/

/// <summary>
/// Deletes the timer
/// </summary>
void __DeleteTimerQueueTimer(HANDLE timerQueue, HANDLE hTimer, HANDLE completionEvent)
{
    for(;;)
    {
        if (!DeleteTimerQueueTimer(timerQueue, hTimer, completionEvent))
        {
            if (GetLastError() == ERROR_IO_PENDING) 
                break;
        }
        else
        {
            break;
        }
    }
}
}}}
