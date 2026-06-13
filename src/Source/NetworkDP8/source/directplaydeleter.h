#if 0
#ifndef __DIRECTPLAYDELETER_H__
#define __DIRECTPLAYDELETER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Net::DirectPlayDeleter
{
public:
    DirectPlayDeleter(Net::DirectPlay::Context *, IDirectPlay8Peer *);
    void operator()();
private:
    Net::DirectPlay::Context *m_context; // 0x0
    IDirectPlay8Peer *m_dp; // 0x4
};
static_assert(sizeof(Net::DirectPlayDeleter) == 8, "Invalid Net::DirectPlayDeleter size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DIRECTPLAYDELETER_H__
#endif
