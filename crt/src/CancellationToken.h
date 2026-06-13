// ==++==
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
// ==--==
// =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
//
// CancellationToken.h
//
// Cancellation token internal header
//
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

class CancellationTokenRegistration_TaskProc : public _CancellationTokenRegistration
{
public:

    CancellationTokenRegistration_TaskProc(TaskProc proc, void *pData, int initialRefs) :
        _CancellationTokenRegistration(initialRefs), m_proc(proc), m_pData(pData)
    {
    }

protected:

    virtual void _Exec()
    {
        m_proc(m_pData);
    }

private:

    TaskProc m_proc;
    void *m_pData;

};
