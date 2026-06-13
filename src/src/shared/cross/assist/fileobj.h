#if 0
#ifndef __FILEOBJ_H__
#define __FILEOBJ_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileObj
{
private:
    FileObj(FileObj const &);
public:
    _inline FileObj();
    _inline ~FileObj();
    _inline bool Open(char const *, char const *);
    _inline void Close();
    _inline _iobuf *Pointer();
private:
    _iobuf *m_handle; // 0x0
    FileObj &operator=(FileObj const &);
};
static_assert(sizeof(FileObj) == 4, "Invalid FileObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_10003666(FileObj *const, char const *, char const *);
_inline bool FileObj::Open(char const *, char const *) // 0x10003666
{
    mangled_assert("?Open@FileObj@@QAE_NPBD0@Z");
    todo("implement");
    bool __result = _sub_10003666(this, arg, arg);
    return __result;
}

_extern void _sub_1000256C(FileObj *const);
_inline void FileObj::Close() // 0x1000256C
{
    mangled_assert("?Close@FileObj@@QAEXXZ");
    todo("implement");
    _sub_1000256C(this);
}

_extern _iobuf *_sub_100036B9(FileObj *const);
_inline _iobuf *FileObj::Pointer() // 0x100036B9
{
    mangled_assert("?Pointer@FileObj@@QAEPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_100036B9(this);
    return __result;
}

_extern _sub_10001BCB(FileObj *const);
_inline FileObj::FileObj() // 0x10001BCB
{
    mangled_assert("??0FileObj@@QAE@XZ");
    todo("implement");
    _sub_10001BCB(this);
}

_extern void _sub_10001E67(FileObj *const);
_inline FileObj::~FileObj() // 0x10001E67
{
    mangled_assert("??1FileObj@@QAE@XZ");
    todo("implement");
    _sub_10001E67(this);
}

/* ---------- private code */

#endif // __FILEOBJ_H__
/* combined */
#ifndef __FILEOBJ_H__
#define __FILEOBJ_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FileObj
{
private:
    FileObj(FileObj const &);
public:
    _inline FileObj();
    _inline ~FileObj();
    _inline bool Open(char const *, char const *);
    _inline void Close();
    _inline _iobuf *Pointer();
private:
    _iobuf *m_handle; // 0x0
    FileObj &operator=(FileObj const &);
};
static_assert(sizeof(FileObj) == 4, "Invalid FileObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_46C4D9(FileObj *const, char const *, char const *);
_inline bool FileObj::Open(char const *, char const *) // 0x46C4D9
{
    mangled_assert("?Open@FileObj@@QAE_NPBD0@Z");
    todo("implement");
    bool __result = _sub_46C4D9(this, arg, arg);
    return __result;
}

_extern void _sub_46B887(FileObj *const);
_inline void FileObj::Close() // 0x46B887
{
    mangled_assert("?Close@FileObj@@QAEXXZ");
    todo("implement");
    _sub_46B887(this);
}

_extern _iobuf *_sub_46C4F9(FileObj *const);
_inline _iobuf *FileObj::Pointer() // 0x46C4F9
{
    mangled_assert("?Pointer@FileObj@@QAEPAU_iobuf@@XZ");
    todo("implement");
    _iobuf * __result = _sub_46C4F9(this);
    return __result;
}

_extern _sub_46B4FA(FileObj *const);
_inline FileObj::FileObj() // 0x46B4FA
{
    mangled_assert("??0FileObj@@QAE@XZ");
    todo("implement");
    _sub_46B4FA(this);
}

_extern void _sub_46B5DA(FileObj *const);
_inline FileObj::~FileObj() // 0x46B5DA
{
    mangled_assert("??1FileObj@@QAE@XZ");
    todo("implement");
    _sub_46B5DA(this);
}

/* ---------- private code */

#endif // __FILEOBJ_H__
#endif
