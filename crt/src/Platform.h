// ==++==
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// ==--==
// =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
// Platform.h : abstracts the underlying platform APIs
//
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
#pragma once

#ifndef _CRT_APP
// We need to bring in data structures and function prototypes defined
// on Win7 for UMS.
#undef _WIN32_WINNT
#define _WIN32_WINNT  0x0601
#undef NTDDI_VERSION
#define NTDDI_VERSION 0x06010000
#endif // _CRT_APP

// Windows headers that we need

#include <windows.h>
#include <winnt.h>
#include <oaidl.h>

#include <roapi.h>

#undef Yield    // The windows headers #define Yield, a name we want to use

#include <wmistr.h>
#include <evntrace.h>

namespace Concurrency { namespace details { namespace platform {

/// <summary>
/// Initializes function pointers that are only present on specific versions of the OS
/// </summary>
void InitializeSystemFunctionPointers();

/************** Thread Affinity ***************************/

/// <summary>
/// Retrieves the thread group affinity
/// </summary>
BOOL __GetThreadGroupAffinity(HANDLE hThread, PGROUP_AFFINITY affinity);

/// <summary>
/// Sets the thread group affinity
/// </summary>
BOOL __SetThreadGroupAffinity(HANDLE hThread, const GROUP_AFFINITY * affinity);

/// <summary>
/// Deletes the timer
/// </summary>
void __DeleteTimerQueueTimer(HANDLE timerQueue, HANDLE hTimer, HANDLE completionEvent);

/************** System Info ***************************/

/// <summary>
/// Retrieves the information about the relationships of logical processors and related hardware
/// </summary>
PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX __GetLogicalProcessorInformationEx(LOGICAL_PROCESSOR_RELATIONSHIP relation,  PDWORD retLength);

/// <summary>
/// Retrieves the information about logical processors and related hardware
/// </summary
PSYSTEM_LOGICAL_PROCESSOR_INFORMATION __GetLogicalProcessorInformation(PDWORD retLength);

/// <summary>
/// Retrieves the processor group and number of the logical processor where the thread is running
/// </summary>
void __GetCurrentProcessorNumberEx(PPROCESSOR_NUMBER procNum);

}}} // namespace Concurrency::details::platform