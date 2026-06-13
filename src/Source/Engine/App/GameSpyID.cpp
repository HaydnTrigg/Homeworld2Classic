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

_extern _sub_4FD834(GameSpyID *const);
GameSpyID::GameSpyID() // 0x4FD834
{
    mangled_assert("??0GameSpyID@@QAE@XZ");
    todo("implement");
    _sub_4FD834(this);
}

_extern void _sub_4FD97E(GameSpyID *const);
void GameSpyID::Setup() // 0x4FD97E
{
    mangled_assert("?Setup@GameSpyID@@QAEXXZ");
    todo("implement");
    _sub_4FD97E(this);
}

_extern char const *_sub_4FD94E(GameSpyID const *const);
char const *GameSpyID::GetGameName() const // 0x4FD94E
{
    mangled_assert("?GetGameName@GameSpyID@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4FD94E(this);
    return __result;
}

_extern char const *_sub_4FD960(GameSpyID const *const);
char const *GameSpyID::GetSecretKey() const // 0x4FD960
{
    mangled_assert("?GetSecretKey@GameSpyID@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4FD960(this);
    return __result;
}

_extern __int32 _sub_4FD95A(GameSpyID const *const);
__int32 GameSpyID::GetPatchProductID() const // 0x4FD95A
{
    mangled_assert("?GetPatchProductID@GameSpyID@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4FD95A(this);
    return __result;
}

_extern __int32 _sub_4FD96C(GameSpyID const *const);
__int32 GameSpyID::GetTrackingProductID() const // 0x4FD96C
{
    mangled_assert("?GetTrackingProductID@GameSpyID@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4FD96C(this);
    return __result;
}

_extern char const *_sub_4FD972(GameSpyID const *const);
char const *GameSpyID::GetVersionUniqueID() const // 0x4FD972
{
    mangled_assert("?GetVersionUniqueID@GameSpyID@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_4FD972(this);
    return __result;
}

_extern __int32 _sub_4FD94B(GameSpyID const *const);
__int32 GameSpyID::GetDistributionID() const // 0x4FD94B
{
    mangled_assert("?GetDistributionID@GameSpyID@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_4FD94B(this);
    return __result;
}

/* ---------- private code */

_extern void _sub_4FD9F1(char const *, char const *, char *);
_static void StringXOR(char const *str, char const *xor, char *output) // 0x4FD9F1
{
    mangled_assert("StringXOR");
    todo("implement");
    _sub_4FD9F1(str, xor, output);
}
#endif
