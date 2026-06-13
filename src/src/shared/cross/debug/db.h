#if 0
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32 numSkip);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class dbTraceObj
{
public:
    enum
    {
        MAX_DEPTH = 32, // 0x0020 ' '
    };
    dbTraceObj(dbTraceObj const &);
    dbTraceObj();
    dbTraceObj &operator=(dbTraceObj const &);
    bool operator==(dbTraceObj const &) const;
    ~dbTraceObj();
    static dbTraceObj GenerateTrace(unsigned __int32);
    char const *FunctionAt(unsigned __int32) const;
    unsigned __int32 Depth() const;
    long const GetTraceAddress(unsigned __int32) const;
private:
    unsigned __int32 m_depth; // 0x0
    long m_trace[32]; // 0x4
    bool m_textValid; // 0x84
    char *m_text[32]; // 0x88
    void Release();
};
static_assert(sizeof(dbTraceObj) == 264, "Invalid dbTraceObj size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
/* combined */
#ifndef __DB_H__
#define __DB_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __DB_H__
#endif
