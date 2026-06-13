#if 0
#ifndef __CDKEYSERVER_H__
#define __CDKEYSERVER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class CDKeyServer
{
public:
    class AuthCallback
    {
    public:
        virtual void Result(__int32, __int32, __int32, char const *) = 0;
        AuthCallback(CDKeyServer::AuthCallback const &); /* compiler_generated() */
        AuthCallback(); /* compiler_generated() */
        CDKeyServer::AuthCallback &operator=(CDKeyServer::AuthCallback const &); /* compiler_generated() */
    };
    static_assert(sizeof(AuthCallback) == 4, "Invalid AuthCallback size");
    CDKeyServer(__int32, CDKeyServer::AuthCallback *);
    ~CDKeyServer();
    void Think();
    void AuthenticateUser(__int32, unsigned __int32, char const *, char const *);
    void DisconnectUser(__int32);
private:
    static void ServerAuthCallBackFn(__int32, __int32, __int32, char *, void *);
    class Data;
    CDKeyServer::Data *m_pimpl; // 0x0
};
static_assert(sizeof(CDKeyServer) == 4, "Invalid CDKeyServer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CDKEYSERVER_H__
#endif
