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

_inline bool FileObj::Open(char const *, char const *) // 0x10003666
{
    mangled_assert("?Open@FileObj@@QAE_NPBD0@Z");
    todo("implement");
}

_inline void FileObj::Close() // 0x1000256C
{
    mangled_assert("?Close@FileObj@@QAEXXZ");
    todo("implement");
}

_inline _iobuf *FileObj::Pointer() // 0x100036B9
{
    mangled_assert("?Pointer@FileObj@@QAEPAU_iobuf@@XZ");
    todo("implement");
}

_inline FileObj::FileObj() // 0x10001BCB
{
    mangled_assert("??0FileObj@@QAE@XZ");
    todo("implement");
}

_inline FileObj::~FileObj() // 0x10001E67
{
    mangled_assert("??1FileObj@@QAE@XZ");
    todo("implement");
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

_inline bool FileObj::Open(char const *, char const *) // 0x46C4D9
{
    mangled_assert("?Open@FileObj@@QAE_NPBD0@Z");
    todo("implement");
}

_inline void FileObj::Close() // 0x46B887
{
    mangled_assert("?Close@FileObj@@QAEXXZ");
    todo("implement");
}

_inline _iobuf *FileObj::Pointer() // 0x46C4F9
{
    mangled_assert("?Pointer@FileObj@@QAEPAU_iobuf@@XZ");
    todo("implement");
}

_inline FileObj::FileObj() // 0x46B4FA
{
    mangled_assert("??0FileObj@@QAE@XZ");
    todo("implement");
}

_inline FileObj::~FileObj() // 0x46B5DA
{
    mangled_assert("??1FileObj@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __FILEOBJ_H__
#endif
