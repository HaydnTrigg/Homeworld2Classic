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

_inline SaveGameDataInfo::SaveGameDataInfo() // 0x6280C4
{
    mangled_assert("??0SaveGameDataInfo@@QAE@XZ");
    todo("implement");
}

_inline void SaveGameDataInfo::setVersion(unsigned __int32) // 0x62A297
{
    mangled_assert("?setVersion@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SaveGameDataInfo::getSaveType() // 0x628D06
{
    mangled_assert("?getSaveType@SaveGameDataInfo@@QAEIXZ");
    todo("implement");
}

_inline void SaveGameDataInfo::setSaveType(unsigned __int32) // 0x62A28D
{
    mangled_assert("?setSaveType@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 SaveGameDataInfo::getCRC() // 0x627504
{
    mangled_assert("?getCRC@SaveGameDataInfo@@QAEIXZ");
    todo("implement");
}

_inline void SaveGameDataInfo::setCRC(unsigned __int32) // 0x62A283
{
    mangled_assert("?setCRC@SaveGameDataInfo@@QAEXI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __SAVEGAMEDATAINFO_H__
#endif
