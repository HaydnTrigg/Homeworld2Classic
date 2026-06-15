#if 0
/* ---------- headers */

#include "decomp.h"
#include "src\tools\ExeTie\pch.h"
#include "src\tools\ExeTie\ExeTie.h"

/* ---------- constants */

/* ---------- definitions */

class `anonymous-namespace'::CommandLineArgs
{
private:
    char **m_args; // 0x0
    unsigned __int32 m_argc; // 0x4
public:
    CommandLineArgs(char const *);
    ~CommandLineArgs();
    unsigned __int32 Size() const;
    char const *Args(unsigned __int32) const;
private:
    void AddArg(char const *, char const *);
    void Parse(char const *);
};
static_assert(sizeof(`anonymous-namespace'::CommandLineArgs) == 8, "Invalid `anonymous-namespace'::CommandLineArgs size");

typedef `anonymous-namespace'::CommandLineArgs ?A0x164bddd9::CommandLineArgs;

/* ---------- prototypes */

extern __int32 DllMain(void *module, unsigned long reason, void *reserved);
extern void RunDll32(HWND__ *hwnd, HINSTANCE__ *hinst, char *lpCmdLine, __int32 nCmdShow);

/* ---------- globals */

/* ---------- private variables */

_static
{
    extern char const *EXETIE; // 0x10003000
}

/* ---------- public code */

__int32 DllMain(void *module, unsigned long reason, void *reserved) // 0x100012C8
{
    mangled_assert("_DllMain@12");
    todo("implement");
}

void RunDll32(HWND__ *hwnd, HINSTANCE__ *hinst, char *lpCmdLine, __int32 nCmdShow) // 0x100012CE
{
    mangled_assert("_RunDll32@16");
    todo("implement");
}

/* ---------- private code */
#endif
