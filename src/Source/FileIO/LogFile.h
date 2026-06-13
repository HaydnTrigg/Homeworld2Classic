#if 0
#ifndef __LOGFILE_H__
#define __LOGFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LogFile
{
public:
    _inline LogFile(LogFile const &); /* compiler_generated() */
    LogFile();
    ~LogFile();
    void printf(char const *format, ...);
    void puts(char const *);
    bool Create(char const *, char const *);
    bool CreateWithName(char const *);
    void Close();
    bool IsOpened() const;
    static void MakeFilename(char *fname, char const *name, char const *ext);
    static void MakeFilename(char *s);
private:
    ByteStreamProxy m_file; // 0x0
    char m_chbuf[2048]; // 0x4
    void WriteString(char const *);
public:
    _inline LogFile &operator=(LogFile const &); /* compiler_generated() */
};
static_assert(sizeof(LogFile) == 2052, "Invalid LogFile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOGFILE_H__
/* combined */
#ifndef __LOGFILE_H__
#define __LOGFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LogFile
{
public:
    LogFile(LogFile const &); /* compiler_generated() */
    LogFile();
    ~LogFile();
    void printf(char const *, ...);
    void puts(char const *);
    bool Create(char const *, char const *);
    bool CreateWithName(char const *);
    void Close();
    bool IsOpened() const;
    static void MakeFilename(char *, char const *, char const *);
    static void MakeFilename(char *);
private:
    ByteStreamProxy m_file; // 0x0
    char m_chbuf[2048]; // 0x4
    void WriteString(char const *);
public:
    LogFile &operator=(LogFile const &); /* compiler_generated() */
};
static_assert(sizeof(LogFile) == 2052, "Invalid LogFile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOGFILE_H__
/* combined */
#ifndef __LOGFILE_H__
#define __LOGFILE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LogFile
{
public:
    LogFile(LogFile const &); /* compiler_generated() */
    LogFile();
    ~LogFile();
    void printf(char const *, ...);
    void puts(char const *);
    bool Create(char const *, char const *);
    bool CreateWithName(char const *);
    void Close();
    bool IsOpened() const;
    static void MakeFilename(char *, char const *, char const *);
    static void MakeFilename(char *);
private:
    ByteStreamProxy m_file; // 0x0
    char m_chbuf[2048]; // 0x4
    void WriteString(char const *);
public:
    LogFile &operator=(LogFile const &); /* compiler_generated() */
};
static_assert(sizeof(LogFile) == 2052, "Invalid LogFile size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __LOGFILE_H__
#endif
