#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <Scar\pch.h>
#include <Mathlib\luamathbinding.h>
#include <Engine\SobUnmoveable.h>
#include <Engine\sob.h>
#include <Engine\sobstatic.h>
#include <bitset>
#include <luaconfig\luabinding.h>
#include <new>
#include <xstddef>
#include <type_traits>
#include <seInterface2\SampleID.h>
#include <seInterface2\SampleBase.h>
#include <xutility>
#include <boost\scoped_array.hpp>
#include <boost\config.hpp>
#include <Engine\Volume.h>
#include <iosfwd>
#include <Engine\VolumeStatic.h>
#include <Engine\SobUnmoveableStatic.h>
#include <platform\timer.h>
#include <Scar\LuaSound.h>
#include <Scar\GameQuery.h>
#include <fileio\bytestream.h>
#include <fileio\filepath.h>
#include <fileio\fileioexports.h>
#include <Scar\Scar.h>
#include <Scar\ScarEventSys.h>
#include <vector>
#include <boost\detail\workaround.hpp>
#include <seInterface2\sedefinesshared.h>
#include <Mathlib\vector3.h>
#include <Mathlib\vector4.h>
#include <Scar\LuaRuleSystem.h>
#include <boost\utility.hpp>
#include <Mathlib\vector2.h>
#include <boost\utility\addressof.hpp>
#include <cstdarg>
#include <boost\utility\base_from_member.hpp>
#include <stdarg.h>
#include <boost\utility_fwd.hpp>
#include <seInterface2\PatchID.h>
#include <seInterface2\SoundParams.h>
#include <Engine\savegamedef.h>
#include <boost\shared_ptr.hpp>
#include <boost\next_prior.hpp>
#include <boost\smart_ptr.hpp>
#include <boost\scoped_ptr.hpp>
#include <boost\noncopyable.hpp>
#include <SoundManager\SoundManager.h>
#include <seInterface2\SEInterface.h>
#include <seInterface2\SoundParamManager.h>
#include <seInterface2\seinterfacefunc.h>
#include <assist\gbitset.h>
#include <boost\shared_array.hpp>
#include <SoundManager\SoundEntityHandle.h>

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::LuaSoundLib :
    public LuaLibrary
{
public:
    LuaSoundLib(`anonymous-namespace'::LuaSoundLib const &); /* compiler_generated() */
    LuaSoundLib();
    virtual ~LuaSoundLib() override;
    virtual bool Register(LuaConfig &) override;
    virtual bool DeRegister(LuaConfig &) override;
    `anonymous-namespace'::LuaSoundLib &operator=(`anonymous-namespace'::LuaSoundLib const &); /* compiler_generated() */
};
static_assert(sizeof(`anonymous-namespace'::LuaSoundLib) == 16, "Invalid `anonymous-namespace'::LuaSoundLib size");

typedef `anonymous-namespace'::LuaSoundLib ?A0xbafe1ebb::LuaSoundLib;

/* ---------- prototypes */

extern void setMusicPath(char const *path);
extern void setDefaultMusic(char const *scriptname);
extern void Sound_SpeechPlay(char const *filename);
extern void Sound_SpeechSubtitlePath(char const *filepath);
extern void Sound_MusicPlay(char const *filename);
extern void Sound_MusicPlayType(char const *filename, __int32 type);
extern void Sound_StingerPlay(char const *filename);
extern void Sound_EnableAllSpeech(bool enable);
extern void Sound_EnterIntelEvent();
extern void Sound_ExitIntelEvent();
extern void Sound_SetMuteActor(char const *actorname);
extern void Sound_SFXPlay3DPos(char const *filename, vector3 position);
extern void Sound_SFXPlay3D(char const *filename, char const *volumeName);

/* ---------- globals */

extern char const *LUALIB_SOUND; // 0x842734

/* ---------- private variables */

/* ---------- public code */

void setMusicPath(char const *path) // 0x717345
{
    mangled_assert("?setMusicPath@@YGXPBD@Z");
    todo("implement");
}

void setDefaultMusic(char const *scriptname) // 0x71733A
{
    mangled_assert("?setDefaultMusic@@YGXPBD@Z");
    todo("implement");
}

void Sound_SpeechPlay(char const *filename) // 0x717215
{
    mangled_assert("?Sound_SpeechPlay@@YGXPBD@Z");
    todo("implement");
}

void Sound_SpeechSubtitlePath(char const *filepath) // 0x717285
{
    mangled_assert("?Sound_SpeechSubtitlePath@@YGXPBD@Z");
    todo("implement");
}

void Sound_MusicPlay(char const *filename) // 0x717167
{
    mangled_assert("?Sound_MusicPlay@@YGXPBD@Z");
    todo("implement");
}

void Sound_MusicPlayType(char const *filename, __int32 type) // 0x71717B
{
    mangled_assert("?Sound_MusicPlayType@@YGXPBDH@Z");
    todo("implement");
}

void Sound_StingerPlay(char const *filename) // 0x7172E3
{
    mangled_assert("?Sound_StingerPlay@@YGXPBD@Z");
    todo("implement");
}

void Sound_EnableAllSpeech(bool enable) // 0x717140
{
    mangled_assert("?Sound_EnableAllSpeech@@YGX_N@Z");
    todo("implement");
}

void Sound_EnterIntelEvent() // 0x71714B
{
    mangled_assert("?Sound_EnterIntelEvent@@YGXXZ");
    todo("implement");
}

void Sound_ExitIntelEvent() // 0x717159
{
    mangled_assert("?Sound_ExitIntelEvent@@YGXXZ");
    todo("implement");
}

void Sound_SetMuteActor(char const *actorname) // 0x71720A
{
    mangled_assert("?Sound_SetMuteActor@@YGXPBD@Z");
    todo("implement");
}

void Sound_SFXPlay3DPos(char const *filename, vector3 position) // 0x7171E8
{
    mangled_assert("?Sound_SFXPlay3DPos@@YGXPBDVvector3@@@Z");
    todo("implement");
}

void Sound_SFXPlay3D(char const *filename, char const *volumeName) // 0x717186
{
    mangled_assert("?Sound_SFXPlay3D@@YGXPBD0@Z");
    todo("implement");
}

/* ---------- private code */
#endif
