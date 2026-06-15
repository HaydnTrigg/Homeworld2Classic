#if 0
#ifndef __SYSTEMDIALOG_H__
#define __SYSTEMDIALOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SysDialogImpl :
    public SysDialogInterface
{
public:
    static bool startup();
    static bool shutdown();
    static SysDialogImpl *i();
    virtual void Simple(char const *, char const *) override;
    virtual __int32 Complex(__int32, char const *, __int32) override;
    virtual void FatalErrorWait(__int32, char const *, bool) override;
    _inline char const *getDialogText() const;
    _inline __int32 getDialogTextBoxName() const;
    SysDialogImpl(SysDialogImpl const &); /* compiler_generated() */
protected:
    SysDialogImpl();
    virtual ~SysDialogImpl() override;
private:
    static SysDialogImpl *s_instance;
    char const *m_sysDialogText; // 0x4
    __int32 m_sysDialogTextBoxName; // 0x8
public:
    SysDialogImpl &operator=(SysDialogImpl const &); /* compiler_generated() */
};
static_assert(sizeof(SysDialogImpl) == 12, "Invalid SysDialogImpl size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *SysDialogImpl::getDialogText() const // 0x100079AA
{
    mangled_assert("?getDialogText@SysDialogImpl@@QBEPBDXZ");
    todo("implement");
}

_inline __int32 SysDialogImpl::getDialogTextBoxName() const // 0x100079AE
{
    mangled_assert("?getDialogTextBoxName@SysDialogImpl@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SYSTEMDIALOG_H__
#endif
