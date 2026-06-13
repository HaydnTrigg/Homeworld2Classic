#if 0
#ifndef __LOCALIZER_H__
#define __LOCALIZER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Localizer
{
public:
    enum
    {
        MAXLENGTH = 4096, // 0x1000
    };
    enum CharacterType
    {
        CT_Alpha = 256, // 0x0100
        CT_Digit = 4, // 0x0004
        CT_Space = 8, // 0x0008
        CT_Punct = 16, // 0x0010
    };
    static bool Initialize();
    static bool Shutdown();
    static bool GetString(wchar_t *, unsigned __int32, __int32);
    static bool GetString(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, __int32);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetString(__int32);
    static bool FormatText(wchar_t *, unsigned __int32, __int32, ...);
    static bool ConvertLocIDToLocalized(__int32 const, wchar_t *, unsigned __int32);
    static bool ConvertLocIDToLocalized(wchar_t const *, wchar_t *, unsigned __int32);
    static bool ConvertLocIDToLocalized(char const *, wchar_t *, unsigned __int32);
    static bool ConvertLocalizedToLocID(wchar_t const *, __int32 &);
    static void LocString2String(char *, unsigned __int32, wchar_t const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(wchar_t const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static void String2LocString(wchar_t *, unsigned __int32, char const *);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(char const *);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static bool ConvertNumber2Localized(wchar_t *, unsigned __int32, long);
    static bool GetLocalizedDate(wchar_t *, unsigned __int32);
    static bool GetLocalizedTime(wchar_t *, unsigned __int32);
    static __int32 CompareSort(wchar_t const *, wchar_t const *);
    static __int32 CompareSort(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CompareEqual(wchar_t const *, wchar_t const *);
    static bool CompareEqual(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CompareStrict(wchar_t const *, wchar_t const *);
    static bool CompareStrict(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CheckString(wchar_t const *, unsigned long, wchar_t const *);
    static std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > ResLoadFolder(char const *);
    static void ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    static bool ResUnload(char const *);
    static bool UCSLoad(char const *);
    static bool UCSUnload(char const *);
    static bool TxtLoad(char const *);
    static bool TxtUnload(char const *);
    static bool TxtSave(char const *);
    static bool TxtGetRange(char const *, __int32 &, __int32 &);
    static bool TxtResetRange(char const *, __int32 const, __int32 const);
    static bool TxtAddRange(char const *, unsigned __int32 const, char const *, __int32 &, __int32 &);
    static __int32 TxtAdd(char const *, __int32 const, __int32 const, wchar_t const *, __int32 const);
    typedef __int32 FontID;
    enum
    {
        InvalidFont = -1,
    };
private:
    Localizer(Localizer const &);
    Localizer();
    Localizer &operator=(Localizer const &);
};
static_assert(sizeof(Localizer) == 1, "Invalid Localizer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZER_H__
/* combined */
#ifndef __LOCALIZER_H__
#define __LOCALIZER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Localizer
{
public:
    enum
    {
        MAXLENGTH = 4096, // 0x1000
    };
    enum CharacterType
    {
        CT_Alpha = 256, // 0x0100
        CT_Digit = 4, // 0x0004
        CT_Space = 8, // 0x0008
        CT_Punct = 16, // 0x0010
    };
    static bool Initialize();
    static bool Shutdown();
    static bool GetString(wchar_t *out, unsigned __int32 outlen, __int32 key);
    static bool GetString(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &out, __int32 key);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetString(__int32 key);
    static bool FormatText(wchar_t *out, unsigned __int32 outlen, __int32 formatkey, ...);
    static bool ConvertLocIDToLocalized(__int32 const id, wchar_t *out, unsigned __int32 outlen);
    static bool ConvertLocIDToLocalized(wchar_t const *locid, wchar_t *out, unsigned __int32 outlen);
    static bool ConvertLocIDToLocalized(char const *locid, wchar_t *out, unsigned __int32 outlen);
    static bool ConvertLocalizedToLocID(wchar_t const *locid, __int32 &id);
    static void LocString2String(char *out, unsigned __int32 outlen, wchar_t const *s);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(wchar_t const *s);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &s);
    static void String2LocString(wchar_t *out, unsigned __int32 outlen, char const *s);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(char const *s);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &s);
    static bool ConvertNumber2Localized(wchar_t *out, unsigned __int32 outlen, long n);
    static bool GetLocalizedDate(wchar_t *out, unsigned __int32 outlen);
    static bool GetLocalizedTime(wchar_t *out, unsigned __int32 outlen);
    static __int32 CompareSort(wchar_t const *l, wchar_t const *r);
    static __int32 CompareSort(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r);
    static bool CompareEqual(wchar_t const *l, wchar_t const *r);
    static bool CompareEqual(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r);
    static bool CompareStrict(wchar_t const *l, wchar_t const *r);
    static bool CompareStrict(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &l, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &r);
    static bool CheckString(wchar_t const *str, unsigned long mask, wchar_t const *allowed);
    static std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > ResLoadFolder(char const *folder);
    static void ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &files);
    static bool ResUnload(char const *fileName);
    static bool UCSLoad(char const *fileName);
    static bool UCSUnload(char const *fileName);
    static bool TxtLoad(char const *fileName);
    static bool TxtUnload(char const *fileName);
    static bool TxtSave(char const *txtResName);
    static bool TxtGetRange(char const *txtResName, __int32 &rangeMin, __int32 &rangeMax);
    static bool TxtResetRange(char const *txtResName, __int32 const rangeMin, __int32 const rangeMax);
    static bool TxtAddRange(char const *txtResName, unsigned __int32 const rangeSize, char const *comment, __int32 &rangeMin, __int32 &rangeMax);
    static __int32 TxtAdd(char const *txtResName, __int32 const rangeMin, __int32 const rangeMax, wchar_t const *text, __int32 const suggestion);
    typedef __int32 FontID;
    enum
    {
        InvalidFont = -1,
    };
private:
    Localizer(Localizer const &);
    Localizer();
    Localizer &operator=(Localizer const &);
};
static_assert(sizeof(Localizer) == 1, "Invalid Localizer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZER_H__
/* combined */
#ifndef __LOCALIZER_H__
#define __LOCALIZER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZER_H__
/* combined */
#ifndef __LOCALIZER_H__
#define __LOCALIZER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Localizer
{
public:
    enum
    {
        MAXLENGTH = 4096, // 0x1000
    };
    enum CharacterType
    {
        CT_Alpha = 256, // 0x0100
        CT_Digit = 4, // 0x0004
        CT_Space = 8, // 0x0008
        CT_Punct = 16, // 0x0010
    };
    static bool Initialize();
    static bool Shutdown();
    static bool GetString(wchar_t *, unsigned __int32, __int32);
    static bool GetString(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > &, __int32);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > GetString(__int32);
    static bool FormatText(wchar_t *, unsigned __int32, __int32, ...);
    static bool ConvertLocIDToLocalized(__int32 const, wchar_t *, unsigned __int32);
    static bool ConvertLocIDToLocalized(wchar_t const *, wchar_t *, unsigned __int32);
    static bool ConvertLocIDToLocalized(char const *, wchar_t *, unsigned __int32);
    static bool ConvertLocalizedToLocID(wchar_t const *, __int32 &);
    static void LocString2String(char *, unsigned __int32, wchar_t const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(wchar_t const *);
    static std::basic_string<char,std::char_traits<char>,std::allocator<char> > LocString2String(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static void String2LocString(wchar_t *, unsigned __int32, char const *);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(char const *);
    static std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > String2LocString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    static bool ConvertNumber2Localized(wchar_t *, unsigned __int32, long);
    static bool GetLocalizedDate(wchar_t *, unsigned __int32);
    static bool GetLocalizedTime(wchar_t *, unsigned __int32);
    static __int32 CompareSort(wchar_t const *, wchar_t const *);
    static __int32 CompareSort(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CompareEqual(wchar_t const *, wchar_t const *);
    static bool CompareEqual(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CompareStrict(wchar_t const *, wchar_t const *);
    static bool CompareStrict(std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &, std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > const &);
    static bool CheckString(wchar_t const *, unsigned long, wchar_t const *);
    static std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > ResLoadFolder(char const *);
    static void ResUnload(std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
    static bool ResUnload(char const *);
    static bool UCSLoad(char const *);
    static bool UCSUnload(char const *);
    static bool TxtLoad(char const *);
    static bool TxtUnload(char const *);
    static bool TxtSave(char const *);
    static bool TxtGetRange(char const *, __int32 &, __int32 &);
    static bool TxtResetRange(char const *, __int32 const, __int32 const);
    static bool TxtAddRange(char const *, unsigned __int32 const, char const *, __int32 &, __int32 &);
    static __int32 TxtAdd(char const *, __int32 const, __int32 const, wchar_t const *, __int32 const);
    typedef __int32 FontID;
    enum
    {
        InvalidFont = -1,
    };
private:
    Localizer(Localizer const &);
    Localizer();
    Localizer &operator=(Localizer const &);
};
static_assert(sizeof(Localizer) == 1, "Invalid Localizer size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOCALIZER_H__
#endif
