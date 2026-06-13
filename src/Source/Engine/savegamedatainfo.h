#if 0
#ifndef __SAVEGAMEDATAINFO_H__
#define __SAVEGAMEDATAINFO_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class SaveGameDataInfo
{
public:
    _inline SaveGameDataInfo();
    unsigned __int32 getVersion();
    _inline void setVersion(unsigned __int32);
    _inline unsigned __int32 getSaveType();
    _inline void setSaveType(unsigned __int32);
    _inline unsigned __int32 getCRC();
    _inline void setCRC(unsigned __int32);
    struct Info
    {
        unsigned __int32 m_version; // 0x0
        unsigned __int32 m_saveType; // 0x4
        unsigned __int32 m_crc; // 0x8
    };
    static_assert(sizeof(Info) == 12, "Invalid Info size");
protected:
    SaveGameDataInfo::Info m_info; // 0x0
};
static_assert(sizeof(SaveGameDataInfo) == 12, "Invalid SaveGameDataInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern _sub_6280C4(SaveGameDataInfo *const);
_inline SaveGameDataInfo::SaveGameDataInfo() // 0x6280C4
{
    mangled_assert("??0SaveGameDataInfo@@QAE@XZ");
    todo("implement");
    _sub_6280C4(this);
}

_extern void _sub_62A297(SaveGameDataInfo *const, unsigned __int32);
_inline void SaveGameDataInfo::setVersion(unsigned __int32) // 0x62A297
{
    mangled_assert("?setVersion@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
    _sub_62A297(this, arg);
}

_extern unsigned __int32 _sub_628D06(SaveGameDataInfo *const);
_inline unsigned __int32 SaveGameDataInfo::getSaveType() // 0x628D06
{
    mangled_assert("?getSaveType@SaveGameDataInfo@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_628D06(this);
    return __result;
}

_extern void _sub_62A28D(SaveGameDataInfo *const, unsigned __int32);
_inline void SaveGameDataInfo::setSaveType(unsigned __int32) // 0x62A28D
{
    mangled_assert("?setSaveType@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
    _sub_62A28D(this, arg);
}

_extern unsigned __int32 _sub_627504(SaveGameDataInfo *const);
_inline unsigned __int32 SaveGameDataInfo::getCRC() // 0x627504
{
    mangled_assert("?getCRC@SaveGameDataInfo@@QAEIXZ");
    todo("implement");
    unsigned __int32 __result = _sub_627504(this);
    return __result;
}

_extern void _sub_62A283(SaveGameDataInfo *const, unsigned __int32);
_inline void SaveGameDataInfo::setCRC(unsigned __int32) // 0x62A283
{
    mangled_assert("?setCRC@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
    _sub_62A283(this, arg);
}

/* ---------- private code */

#endif // __SAVEGAMEDATAINFO_H__
#endif
