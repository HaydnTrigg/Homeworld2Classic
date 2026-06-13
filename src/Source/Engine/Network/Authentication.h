#if 0
#ifndef __AUTHENTICATION_H__
#define __AUTHENTICATION_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Authenticator
{
public:
    Authenticator();
    void GetHash(unsigned char *) const;
private:
    unsigned char m_hash[16]; // 0x0
};
static_assert(sizeof(Authenticator) == 16, "Invalid Authenticator size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __AUTHENTICATION_H__
#endif
