#if 0
#ifndef __ARCHIVEINTERNALS_H__
#define __ARCHIVEINTERNALS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ArchiveInternals::FileStorageType
{
    FCT_Store = 0,
    FCT_StreamCompress,
    FCT_BufferCompress,
    FCT_Count,
};

/* ---------- definitions */

struct ArchiveInternals::ArchiveHeader
{
    char FileSignature[8]; // 0x0
    unsigned long FileVersion; // 0x8
    unsigned char MD5Hash[16]; // 0xC
    wchar_t Nicename[64]; // 0x1C
    unsigned char MD5RootHash[16]; // 0x9C
    unsigned long RootBlockSize; // 0xAC
    unsigned long FileDataOffset; // 0xB0
};
static_assert(sizeof(ArchiveInternals::ArchiveHeader) == 180, "Invalid ArchiveInternals::ArchiveHeader size");

struct ArchiveInternals::ArchiveRoot
{
    unsigned long TOCEntriesOffset; // 0x0
    unsigned short TOCCount; // 0x4
    unsigned long FolderEntriesOffset; // 0x6
    unsigned short FolderCount; // 0xA
    unsigned long FileEntriesOffset; // 0xC
    unsigned short FileCount; // 0x10
    unsigned long StringDBOffset; // 0x12
    unsigned short StringDBCount; // 0x16
};
static_assert(sizeof(ArchiveInternals::ArchiveRoot) == 24, "Invalid ArchiveInternals::ArchiveRoot size");

struct ArchiveInternals::TOCEntry
{
    char Alias[64]; // 0x0
    char TOCName[64]; // 0x40
    unsigned short FolderBegin; // 0x80
    unsigned short FolderEnd; // 0x82
    unsigned short FileBegin; // 0x84
    unsigned short FileEnd; // 0x86
    unsigned short RootFolderEntry; // 0x88
};
static_assert(sizeof(ArchiveInternals::TOCEntry) == 138, "Invalid ArchiveInternals::TOCEntry size");

struct ArchiveInternals::FolderEntry
{
    unsigned long FolderNameOffset; // 0x0
    unsigned short FolderBegin; // 0x4
    unsigned short FolderEnd; // 0x6
    unsigned short FileBegin; // 0x8
    unsigned short FileEnd; // 0xA
};
static_assert(sizeof(ArchiveInternals::FolderEntry) == 12, "Invalid ArchiveInternals::FolderEntry size");

struct ArchiveInternals::FileEntry
{
    enum FileEntryFlags
    {
        FEF_Compressed = 1, // 0x0001
    };
    unsigned long FileNameOffset; // 0x0
    unsigned char FileFlags : 4; // 0x4
    unsigned char CT : 4; // 0x4
    unsigned long FileOffset; // 0x5
    unsigned long FileStoreSize; // 0x9
    unsigned long FileSize; // 0xD
};
static_assert(sizeof(ArchiveInternals::FileEntry) == 17, "Invalid ArchiveInternals::FileEntry size");

struct ArchiveInternals::FileHeader
{
    char FileName[256]; // 0x0
    unsigned long FileDate; // 0x100
    unsigned long CRC; // 0x104
};
static_assert(sizeof(ArchiveInternals::FileHeader) == 264, "Invalid ArchiveInternals::FileHeader size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ARCHIVEINTERNALS_H__
/* combined */
#ifndef __ARCHIVEINTERNALS_H__
#define __ARCHIVEINTERNALS_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum ArchiveInternals::FileStorageType
{
    FCT_Store = 0,
    FCT_StreamCompress,
    FCT_BufferCompress,
    FCT_Count,
};

/* ---------- definitions */

struct ArchiveInternals::TOCEntry
{
    char Alias[64]; // 0x0
    char TOCName[64]; // 0x40
    unsigned short FolderBegin; // 0x80
    unsigned short FolderEnd; // 0x82
    unsigned short FileBegin; // 0x84
    unsigned short FileEnd; // 0x86
    unsigned short RootFolderEntry; // 0x88
};
static_assert(sizeof(ArchiveInternals::TOCEntry) == 138, "Invalid ArchiveInternals::TOCEntry size");

struct ArchiveInternals::FolderEntry
{
    unsigned long FolderNameOffset; // 0x0
    unsigned short FolderBegin; // 0x4
    unsigned short FolderEnd; // 0x6
    unsigned short FileBegin; // 0x8
    unsigned short FileEnd; // 0xA
};
static_assert(sizeof(ArchiveInternals::FolderEntry) == 12, "Invalid ArchiveInternals::FolderEntry size");

struct ArchiveInternals::FileEntry
{
    enum FileEntryFlags
    {
        FEF_Compressed = 1, // 0x0001
    };
    unsigned long FileNameOffset; // 0x0
    unsigned char FileFlags : 4; // 0x4
    unsigned char CT : 4; // 0x4
    unsigned long FileOffset; // 0x5
    unsigned long FileStoreSize; // 0x9
    unsigned long FileSize; // 0xD
};
static_assert(sizeof(ArchiveInternals::FileEntry) == 17, "Invalid ArchiveInternals::FileEntry size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ARCHIVEINTERNALS_H__
#endif
