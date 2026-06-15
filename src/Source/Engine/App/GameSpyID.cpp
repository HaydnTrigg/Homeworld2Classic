#if 0
/* ---------- headers */

#include "decomp.h"
#include <xstring>
#include <xmemory0>
#include <pch.h>
#include <new>
#include <xstddef>
#include <version.h>
#include <type_traits>
#include <iosfwd>
#include <luaconfig\luaconfig.h>
#include <lua.h>
#include <boost\scoped_ptr.hpp>
#include <App\GameSpyID.h>

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */


_static void StringXOR(char const *str, char const *xor, char *output);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *k_GameNameXOR1; // 0x836DA0
    extern char const *k_GameNameXOR2; // 0x836DA4
    extern char const *k_SecretKeyXOR1; // 0x836DA8
    extern char const *k_SecretKeyXOR2; // 0x836DAC
    extern char const *k_DistributionIDFile; // 0x836DB0
}

/* ---------- public code */

GameSpyID::GameSpyID() // 0x4FD834
{
    mangled_assert("??0GameSpyID@@QAE@XZ");
    todo("implement");
}

void GameSpyID::Setup() // 0x4FD97E
{
    mangled_assert("?Setup@GameSpyID@@QAEXXZ");
    todo("implement");
}

char const *GameSpyID::GetGameName() const // 0x4FD94E
{
    mangled_assert("?GetGameName@GameSpyID@@QBEPBDXZ");
    todo("implement");
}

char const *GameSpyID::GetSecretKey() const // 0x4FD960
{
    mangled_assert("?GetSecretKey@GameSpyID@@QBEPBDXZ");
    todo("implement");
}

__int32 GameSpyID::GetPatchProductID() const // 0x4FD95A
{
    mangled_assert("?GetPatchProductID@GameSpyID@@QBEHXZ");
    todo("implement");
}

__int32 GameSpyID::GetTrackingProductID() const // 0x4FD96C
{
    mangled_assert("?GetTrackingProductID@GameSpyID@@QBEHXZ");
    todo("implement");
}

char const *GameSpyID::GetVersionUniqueID() const // 0x4FD972
{
    mangled_assert("?GetVersionUniqueID@GameSpyID@@QBEPBDXZ");
    todo("implement");
}

__int32 GameSpyID::GetDistributionID() const // 0x4FD94B
{
    mangled_assert("?GetDistributionID@GameSpyID@@QBEHXZ");
    todo("implement");
}

/* ---------- private code */

_static void StringXOR(char const *str, char const *xor, char *output) // 0x4FD9F1
{
    mangled_assert("StringXOR");
    todo("implement");
}
#endif
