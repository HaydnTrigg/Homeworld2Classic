#if 0
#ifndef __ARCHIVEMANAGER_H__
#define __ARCHIVEMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ArchiveManager
{
public:
    static void Startup();
    static void Shutdown();
    static ArchiveManager *Instance();
    typedef unsigned long ArchiveID;
    static unsigned long const InvalidArchiveID;
    typedef std::vector<unsigned long,std::allocator<unsigned long> > ArchiveIDList;
private:
    ArchiveManager();
    ~ArchiveManager();
public:
    unsigned long LoadArchive(char const *, char const *);
    bool UnLoadArchive(unsigned long);
    Archive *GetArchive(unsigned long);
    typedef bool (*MapArchiveCB)(ArchiveIterator<Archive::TOCProxy>);
    bool MapArchiveFilePath(unsigned long, long, bool (*)(ArchiveIterator<Archive::TOCProxy>));
    bool UnMapArchiveFilePath(unsigned long);
    unsigned long ListArchives(std::vector<Archive const *,std::allocator<Archive const *> > &);
    class Data;
private:
    ArchiveManager::Data *m_pimpl; // 0x0
};
static_assert(sizeof(ArchiveManager) == 4, "Invalid ArchiveManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __ARCHIVEMANAGER_H__
#endif
