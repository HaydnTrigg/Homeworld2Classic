#if 0
#ifndef __MAIN_H__
#define __MAIN_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class MainImpl :
    public MainInterface
{
public:
    static bool startup();
    static bool shutdown();
    static MainImpl *i();
    virtual void setActivateCallback(void (*)(unsigned __int32)) override;
    virtual void setDeactivateCallback(void (*)(unsigned __int32)) override;
    virtual unsigned __int32 getInstanceHandle() const override;
    virtual bool processMessages() override;
    virtual unsigned __int32 getProcessID() const override;
    virtual bool shellExecute(char const *, char const *, char const *, char *, unsigned __int32) const override;
    void setInstanceHandle(unsigned __int32 const);
    void (*getActivateCallback())(unsigned __int32);
    void (*getDeactivateCallback())(unsigned __int32);
    MainImpl(MainImpl const &); /* compiler_generated() */
protected:
    MainImpl();
    virtual ~MainImpl() override;
private:
    static MainImpl *s_instance;
    unsigned __int32 m_instanceHandle; // 0x4
    void (*m_activateAppCallback)(unsigned __int32); // 0x8
    void (*m_deactivateAppCallback)(unsigned __int32); // 0xC
public:
    MainImpl &operator=(MainImpl const &); /* compiler_generated() */
};
static_assert(sizeof(MainImpl) == 16, "Invalid MainImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MAIN_H__
#endif
