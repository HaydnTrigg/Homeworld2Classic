#if 0
#ifndef __DIRECTPLAY_H__
#define __DIRECTPLAY_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::DirectPlay
{
public:
    DirectPlay(Net::DirectPlay &); /* compiler_generated() */
    DirectPlay();
    virtual ~DirectPlay();
    bool GetLocalAddresses(std::vector<Net::Address,std::allocator<Net::Address> > &, unsigned short) const;
    static _GUID const &GetProvider();
    struct Context
    {
        _inline Context(Net::DirectPlay *);
        Net::DirectPlay *m_dp; // 0x0
    };
    static_assert(sizeof(Context) == 4, "Invalid Context size");
private:
    static HRESULT Callback(void *context, unsigned long msg, void *data);
protected:
    virtual HRESULT Callback(unsigned long, void *);
    ATL::CComPtr<IDirectPlay8Peer> m_dp; // 0x4
    std::auto_ptr<Net::DirectPlay::Context> m_context; // 0x8
private:
    static void WaitPendingOperation();
    static boost::thread *s_pendingOperation;
    struct ExitHelper
    {
        _inline ~ExitHelper();
    };
    static_assert(sizeof(ExitHelper) == 1, "Invalid ExitHelper size");
    static Net::DirectPlay::ExitHelper s_exitHelper;
public:
    Net::DirectPlay &operator=(Net::DirectPlay &); /* compiler_generated() */
};
static_assert(sizeof(Net::DirectPlay) == 12, "Invalid Net::DirectPlay size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6D63B3(Net::DirectPlay::Context *const, Net::DirectPlay *);
_inline Net::DirectPlay::Context::Context(Net::DirectPlay *) // 0x6D63B3
{
    mangled_assert("??0Context@DirectPlay@Net@@QAE@PAV12@@Z");
    todo("implement");
    _sub_6D63B3(this, arg);
}

_extern void _sub_6D658D(Net::DirectPlay::ExitHelper *const);
_inline Net::DirectPlay::ExitHelper::~ExitHelper() // 0x6D658D
{
    mangled_assert("??1ExitHelper@DirectPlay@Net@@QAE@XZ");
    todo("implement");
    _sub_6D658D(this);
}

/* ---------- private code */

#endif // __DIRECTPLAY_H__
#endif
