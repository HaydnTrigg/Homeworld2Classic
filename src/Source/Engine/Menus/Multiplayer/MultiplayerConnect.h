#if 0
#ifndef __MULTIPLAYERCONNECT_H__
#define __MULTIPLAYERCONNECT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ConnectionAgent
{
public:
    ConnectionAgent(ConnectionAgent &); /* compiler_generated() */
    ConnectionAgent(wchar_t const *, unsigned short, wchar_t const *, wchar_t const *);
    ~ConnectionAgent();
    bool Update(unsigned __int32);
    std::auto_ptr<Net::Session> GetResult();
private:
    void Connect();
    void EnumHostForPort();
    void ReportError(HRESULT) const;
    void StateConnect(unsigned __int32);
    void StateEnumHost(unsigned __int32);
    enum State
    {
        State_Init = 0,
        State_EnumHost,
        State_Connect,
        State_Completed,
    };
    ConnectionAgent::State m_state; // 0x0
    Net::Authentication m_authentication; // 0x4
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_URL; // 0x28
    unsigned short m_port; // 0x40
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_password; // 0x44
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_playerName; // 0x5C
    unsigned __int32 m_enumTime; // 0x74
    std::auto_ptr<Net::Session> m_session; // 0x78
    std::auto_ptr<Net::SessionEnumerator> m_enumerator; // 0x7C
    static ConnectionAgent *s_instance;
    static void OnCancel(UI::InterfaceElement *);
public:
    ConnectionAgent &operator=(ConnectionAgent &); /* compiler_generated() */
};
static_assert(sizeof(ConnectionAgent) == 128, "Invalid ConnectionAgent size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MULTIPLAYERCONNECT_H__
#endif
