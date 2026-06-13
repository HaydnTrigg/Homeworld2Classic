#if 0
/* ---------- headers */

#include "decomp.h"
#include <videoapi.h>
#include <VideoInterface.h>
#include <pch.h>
#include <video.h>
#include <WebMVideoInterface.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

extern VideoInterface *VideoInterface::ms_instance; // 0x8611E0

/* ---------- private variables */

/* ---------- public code */

_extern bool _sub_6FC164();
bool VideoInterface::InitInterface() // 0x6FC164
{
    mangled_assert("?InitInterface@VideoInterface@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6FC164();
    return __result;
}

_extern bool _sub_6FC132();
bool VideoInterface::ExitInterface() // 0x6FC132
{
    mangled_assert("?ExitInterface@VideoInterface@@SG_NXZ");
    todo("implement");
    bool __result = _sub_6FC132();
    return __result;
}

_extern VideoInterface *_sub_6FC15E();
VideoInterface *VideoInterface::GetInstance() // 0x6FC15E
{
    mangled_assert("?GetInstance@VideoInterface@@SGPAV1@XZ");
    todo("implement");
    VideoInterface * __result = _sub_6FC15E();
    return __result;
}

/* ---------- private code */
#endif
