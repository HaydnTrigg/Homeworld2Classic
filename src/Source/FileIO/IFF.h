#if 0
#ifndef __IFF_H__
#define __IFF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum IFFType
{
    Normal = 0, // 0x0000
    NormalVers = 'NRML', // 0x4E524D4C
    Form = 'FORM', // 0x464F524D
};

/* ---------- definitions */

class IFF
{
public:
    typedef __int32 (*ChunkHandler)(IFF *, IFFChunk *, void *, void *);
    _inline IFF(IFF const &); /* compiler_generated() */
    IFF();
    virtual ~IFF();
    class ChunkList
    {
public:
        typedef std::list<IFFChunk *,std::allocator<IFFChunk *> > Rep;
    private:
        std::list<IFFChunk *,std::allocator<IFFChunk *> > rep; // 0x4
    public:
        _inline ChunkList(IFF::ChunkList const &); /* compiler_generated() */
        ChunkList();
        virtual ~ChunkList();
        typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > iterator;
        _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > begin() const;
        _inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > end() const;
        _inline IFFChunk *front() const;
        unsigned __int32 size() const;
        _inline bool empty() const;
        _inline void push_front(IFFChunk *);
        _inline void push_back(IFFChunk *);
        _inline void pop_front();
        _inline void remove(IFFChunk *);
        _inline IFF::ChunkList &operator=(IFF::ChunkList const &); /* compiler_generated() */
    };
    static_assert(sizeof(ChunkList) == 12, "Invalid ChunkList size");
    _inline void setFileVersion(unsigned __int32);
    _inline unsigned __int32 getFileVersion();
    char const *getName() const;
    virtual bool attach(ByteStream *);
    virtual void skip(unsigned __int32);
    void addHandler(unsigned __int32, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void addHandler(unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void setDefaultHandler(__int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *);
    virtual __int32 parse();
    virtual IFF::ChunkList *load();
    virtual bool save(IFF::ChunkList *);
    virtual _inline IFFChunk *push(unsigned __int32);
    virtual _inline IFFChunk *push(IFFType, unsigned __int32);
    virtual IFFChunk *push(IFFType, unsigned __int32, unsigned long);
    virtual bool pop();
    virtual unsigned __int32 getPosition();
    virtual unsigned __int32 chunkRemain();
    unsigned long getVersion() const;
private:
    virtual void swap(void *, unsigned __int32, unsigned __int32);
    virtual bool write(void *, unsigned __int32, unsigned __int32, bool);
    virtual bool read(void *, unsigned __int32, unsigned __int32, bool);
    virtual void _push(IFFType, unsigned __int32, unsigned long);
    virtual void _pop();
    IFF::ChunkList chunkStack; // 0x4
    std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > handlerStack; // 0x10
    ByteStream *stream; // 0x18
    IFFChunk *current; // 0x1C
    IFF::HandlerList *handlers; // 0x20
    IFF::HandlerNode *defaultHandler; // 0x24
    bool bParsing; // 0x28
    __int32 depth; // 0x2C
    unsigned __int32 fileVersion; // 0x30
    struct HandlerNode;
    class HandlerList;
    typedef std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > HandlerListList;
public:
    _inline IFF &operator=(IFF const &); /* compiler_generated() */
};
static_assert(sizeof(IFF) == 52, "Invalid IFF size");

class IFFChunk
{
public:
    _inline IFFChunk(IFFChunk const &); /* compiler_generated() */
    IFFChunk(IFF *, IFFType, unsigned __int32);
    IFFChunk(IFF *);
    virtual ~IFFChunk();
    _inline unsigned __int32 getPosition() const;
    _inline unsigned __int32 getSize() const;
    _inline unsigned __int32 getID() const;
    _inline IFFType getType() const;
    _inline void skip(unsigned __int32);
private:
    bool write(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool write(std::string);
    virtual bool write(bool);
private:
    bool read(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool read(__int32, char *);
    virtual bool read(char **);
    _inline bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    virtual bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    _inline bool read(bool *);
    virtual bool read(bool &);
    _inline unsigned char *getData();
    _inline __int32 getDataSize() const;
    _inline void freeData();
    _inline unsigned char *resizeData(__int32);
    _inline bool setOnDisk(bool);
    _inline bool getOnDisk() const;
    _inline void setDataPosition(__int32);
    _inline __int32 getDataPosition() const;
    _inline unsigned long getVersion() const;
private:
    unsigned __int32 pos; // 0x4
    unsigned __int32 size; // 0x8
    unsigned __int32 id; // 0xC
    IFFType type; // 0x10
    unsigned long version; // 0x14
    std::vector<unsigned char,std::allocator<unsigned char> > data; // 0x18
    __int32 position; // 0x24
    IFF *parent; // 0x28
    bool onDisk; // 0x2C
    typedef std::vector<unsigned char,std::allocator<unsigned char> > DataBlock;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > DataBlockI;
    virtual bool _write(void *, unsigned __int32, unsigned __int32);
    virtual bool _read(void *, unsigned __int32, unsigned __int32);
public:
    _inline IFFChunk &operator=(IFFChunk const &); /* compiler_generated() */
};
static_assert(sizeof(IFFChunk) == 48, "Invalid IFFChunk size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > IFF::ChunkList::begin() const // 0x100118F2
{
    mangled_assert("?begin@ChunkList@IFF@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVIFFChunk@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > IFF::ChunkList::end() const // 0x10011ABF
{
    mangled_assert("?end@ChunkList@IFF@@QBE?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PAVIFFChunk@@@std@@@std@@@std@@XZ");
    todo("implement");
}

_inline IFFChunk *IFF::ChunkList::front() const // 0x10011C57
{
    mangled_assert("?front@ChunkList@IFF@@QBEPAVIFFChunk@@XZ");
    todo("implement");
}

_inline bool IFF::ChunkList::empty() const // 0x10011A66
{
    mangled_assert("?empty@ChunkList@IFF@@QBE_NXZ");
    todo("implement");
}

_inline void IFF::ChunkList::push_front(IFFChunk *) // 0x10012239
{
    mangled_assert("?push_front@ChunkList@IFF@@QAEXPAVIFFChunk@@@Z");
    todo("implement");
}

_inline void IFF::ChunkList::push_back(IFFChunk *) // 0x10012207
{
    mangled_assert("?push_back@ChunkList@IFF@@QAEXPAVIFFChunk@@@Z");
    todo("implement");
}

_inline void IFF::ChunkList::pop_front() // 0x100120E7
{
    mangled_assert("?pop_front@ChunkList@IFF@@QAEXXZ");
    todo("implement");
}

_inline void IFF::ChunkList::remove(IFFChunk *) // 0x100124D5
{
    mangled_assert("?remove@ChunkList@IFF@@QAEXPAVIFFChunk@@@Z");
    todo("implement");
}

_inline void IFF::setFileVersion(unsigned __int32) // 0x100126FD
{
    mangled_assert("?setFileVersion@IFF@@QAEXI@Z");
    todo("implement");
}

_inline unsigned __int32 IFF::getFileVersion() // 0x10011C79
{
    mangled_assert("?getFileVersion@IFF@@QAEIXZ");
    todo("implement");
}

_inline IFFChunk *IFF::push(IFFType, unsigned __int32) // 0x1001210B
{
    mangled_assert("?push@IFF@@UAEPAVIFFChunk@@W4IFFType@@I@Z");
    todo("implement");
}

_inline IFFChunk *IFF::push(unsigned __int32) // 0x100120FB
{
    mangled_assert("?push@IFF@@UAEPAVIFFChunk@@I@Z");
    todo("implement");
}

_inline unsigned __int32 IFFChunk::getPosition() const // 0x10011C9D
{
    mangled_assert("?getPosition@IFFChunk@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 IFFChunk::getSize() const // 0x10011CA1
{
    mangled_assert("?getSize@IFFChunk@@QBEIXZ");
    todo("implement");
}

_inline unsigned __int32 IFFChunk::getID() const // 0x10011C7D
{
    mangled_assert("?getID@IFFChunk@@QBEIXZ");
    todo("implement");
}

_inline IFFType IFFChunk::getType() const // 0x10011CA5
{
    mangled_assert("?getType@IFFChunk@@QBE?AW4IFFType@@XZ");
    todo("implement");
}

_inline void IFFChunk::skip(unsigned __int32) // 0x10012774
{
    mangled_assert("?skip@IFFChunk@@QAEXI@Z");
    todo("implement");
}

_inline bool IFFChunk::write<unsigned char>(unsigned char) // 0x10010547
{
    mangled_assert("??$write@E@IFFChunk@@QAE_NE@Z");
    todo("implement");
}

_inline bool IFFChunk::write<unsigned int>(unsigned __int32) // 0x10010558
{
    mangled_assert("??$write@I@IFFChunk@@QAE_NI@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned int>(unsigned __int32 *) // 0x10010525
{
    mangled_assert("??$read@I@IFFChunk@@QAE_NPAI@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned char>(unsigned char &) // 0x10010505
{
    mangled_assert("??$read@E@IFFChunk@@QAE_NAAE@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned int>(unsigned __int32 &) // 0x10010515
{
    mangled_assert("??$read@I@IFFChunk@@QAE_NAAI@Z");
    todo("implement");
}

_inline bool IFFChunk::writeArray<char const >(char const *, unsigned __int32) // 0x10010569
{
    mangled_assert("??$writeArray@$$CBD@IFFChunk@@QAE_NPBDI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<char>(char *, unsigned __int32) // 0x10010535
{
    mangled_assert("??$readArray@D@IFFChunk@@QAE_NPADI@Z");
    todo("implement");
}

_inline bool IFFChunk::read(bool *) // 0x100122B8
{
    mangled_assert("?read@IFFChunk@@QAE_NPA_N@Z");
    todo("implement");
}

_inline bool IFFChunk::read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *) // 0x100122B3
{
    mangled_assert("?read@IFFChunk@@QAE_NPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline unsigned char *IFFChunk::getData() // 0x10011C60
{
    mangled_assert("?getData@IFFChunk@@QAEPAEXZ");
    todo("implement");
}

_inline __int32 IFFChunk::getDataSize() const // 0x10011C72
{
    mangled_assert("?getDataSize@IFFChunk@@QBEHXZ");
    todo("implement");
}

_inline void IFFChunk::freeData() // 0x10011C40
{
    mangled_assert("?freeData@IFFChunk@@QAEXXZ");
    todo("implement");
}

_inline unsigned char *IFFChunk::resizeData(__int32) // 0x1001253E
{
    mangled_assert("?resizeData@IFFChunk@@QAEPAEH@Z");
    todo("implement");
}

_inline bool IFFChunk::setOnDisk(bool) // 0x10012707
{
    mangled_assert("?setOnDisk@IFFChunk@@QAE_N_N@Z");
    todo("implement");
}

_inline bool IFFChunk::getOnDisk() const // 0x10011C89
{
    mangled_assert("?getOnDisk@IFFChunk@@QBE_NXZ");
    todo("implement");
}

_inline void IFFChunk::setDataPosition(__int32) // 0x100126B4
{
    mangled_assert("?setDataPosition@IFFChunk@@QAEXH@Z");
    todo("implement");
}

_inline __int32 IFFChunk::getDataPosition() const // 0x10011C6E
{
    mangled_assert("?getDataPosition@IFFChunk@@QBEHXZ");
    todo("implement");
}

_inline unsigned long IFFChunk::getVersion() const // 0x10011CB5
{
    mangled_assert("?getVersion@IFFChunk@@QBEKXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __IFF_H__
/* combined */
#ifndef __IFF_H__
#define __IFF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum IFFType
{
    Normal = 0, // 0x0000
    NormalVers = 'NRML', // 0x4E524D4C
    Form = 'FORM', // 0x464F524D
};

/* ---------- definitions */

class IFF
{
public:
    typedef __int32 (*ChunkHandler)(IFF *, IFFChunk *, void *, void *);
    IFF(IFF const &); /* compiler_generated() */
    IFF();
    virtual ~IFF();
    class ChunkList
    {
public:
        typedef std::list<IFFChunk *,std::allocator<IFFChunk *> > Rep;
    private:
        std::list<IFFChunk *,std::allocator<IFFChunk *> > rep; // 0x4
    public:
        ChunkList(IFF::ChunkList const &); /* compiler_generated() */
        ChunkList();
        virtual ~ChunkList();
        typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > iterator;
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > begin() const;
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > end() const;
        IFFChunk *front() const;
        unsigned __int32 size() const;
        bool empty() const;
        void push_front(IFFChunk *);
        void push_back(IFFChunk *);
        void pop_front();
        void remove(IFFChunk *);
        IFF::ChunkList &operator=(IFF::ChunkList const &); /* compiler_generated() */
    };
    static_assert(sizeof(ChunkList) == 12, "Invalid ChunkList size");
    void setFileVersion(unsigned __int32);
    unsigned __int32 getFileVersion();
    char const *getName() const;
    virtual bool attach(ByteStream *);
    virtual void skip(unsigned __int32);
    void addHandler(unsigned __int32, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void addHandler(unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void setDefaultHandler(__int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *);
    virtual __int32 parse();
    virtual IFF::ChunkList *load();
    virtual bool save(IFF::ChunkList *);
    virtual IFFChunk *push(unsigned __int32);
    virtual IFFChunk *push(IFFType, unsigned __int32);
    virtual IFFChunk *push(IFFType, unsigned __int32, unsigned long);
    virtual bool pop();
    virtual unsigned __int32 getPosition();
    virtual unsigned __int32 chunkRemain();
    unsigned long getVersion() const;
private:
    virtual void swap(void *, unsigned __int32, unsigned __int32);
    virtual bool write(void *, unsigned __int32, unsigned __int32, bool);
    virtual bool read(void *, unsigned __int32, unsigned __int32, bool);
    virtual void _push(IFFType, unsigned __int32, unsigned long);
    virtual void _pop();
    IFF::ChunkList chunkStack; // 0x4
    std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > handlerStack; // 0x10
    ByteStream *stream; // 0x18
    IFFChunk *current; // 0x1C
    IFF::HandlerList *handlers; // 0x20
    IFF::HandlerNode *defaultHandler; // 0x24
    bool bParsing; // 0x28
    __int32 depth; // 0x2C
    unsigned __int32 fileVersion; // 0x30
    struct HandlerNode;
    class HandlerList;
    typedef std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > HandlerListList;
public:
    IFF &operator=(IFF const &); /* compiler_generated() */
};
static_assert(sizeof(IFF) == 52, "Invalid IFF size");

class IFFChunk
{
public:
    IFFChunk(IFFChunk const &); /* compiler_generated() */
    IFFChunk(IFF *, IFFType, unsigned __int32);
    IFFChunk(IFF *);
    virtual ~IFFChunk();
    unsigned __int32 getPosition() const;
    unsigned __int32 getSize() const;
    unsigned __int32 getID() const;
    IFFType getType() const;
    void skip(unsigned __int32);
private:
    bool write(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool write(std::string);
    virtual bool write(bool);
private:
    bool read(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool read(__int32, char *);
    virtual bool read(char **);
    bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    virtual bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool read(bool *);
    virtual bool read(bool &);
    unsigned char *getData();
    __int32 getDataSize() const;
    void freeData();
    unsigned char *resizeData(__int32);
    bool setOnDisk(bool);
    bool getOnDisk() const;
    void setDataPosition(__int32);
    __int32 getDataPosition() const;
    unsigned long getVersion() const;
private:
    unsigned __int32 pos; // 0x4
    unsigned __int32 size; // 0x8
    unsigned __int32 id; // 0xC
    IFFType type; // 0x10
    unsigned long version; // 0x14
    std::vector<unsigned char,std::allocator<unsigned char> > data; // 0x18
    __int32 position; // 0x24
    IFF *parent; // 0x28
    bool onDisk; // 0x2C
    typedef std::vector<unsigned char,std::allocator<unsigned char> > DataBlock;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > DataBlockI;
    virtual bool _write(void *, unsigned __int32, unsigned __int32);
    virtual bool _read(void *, unsigned __int32, unsigned __int32);
public:
    IFFChunk &operator=(IFFChunk const &); /* compiler_generated() */
};
static_assert(sizeof(IFFChunk) == 48, "Invalid IFFChunk size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool IFFChunk::read<int>(__int32 *) // 0x47B9A4
{
    mangled_assert("??$read@H@IFFChunk@@QAE_NPAH@Z");
    todo("implement");
}

_inline bool IFFChunk::read<long>(long &) // 0x5C2285
{
    mangled_assert("??$read@J@IFFChunk@@QAE_NAAJ@Z");
    todo("implement");
}

_inline bool IFFChunk::read<double>(double &) // 0x5168B4
{
    mangled_assert("??$read@N@IFFChunk@@QAE_NAAN@Z");
    todo("implement");
}

_inline bool IFFChunk::read<matrix3>(matrix3 &) // 0x4ABCDB
{
    mangled_assert("??$read@Vmatrix3@@@IFFChunk@@QAE_NAAVmatrix3@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<matrix4>(matrix4 &) // 0x4ABCEC
{
    mangled_assert("??$read@Vmatrix4@@@IFFChunk@@QAE_NAAVmatrix4@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector2>(vector2 &) // 0x4ABCFD
{
    mangled_assert("??$read@Vvector2@@@IFFChunk@@QAE_NAAVvector2@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector4>(vector4 &) // 0x4ABD0E
{
    mangled_assert("??$read@Vvector4@@@IFFChunk@@QAE_NAAVvector4@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<enum PathType>(PathType &) // 0x4ABD1F
{
    mangled_assert("??$read@W4PathType@@@IFFChunk@@QAE_NAAW4PathType@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned short>(unsigned short &) // 0x47B993
{
    mangled_assert("??$read@G@IFFChunk@@QAE_NAAG@Z");
    todo("implement");
}

_inline bool IFFChunk::read<float>(float &) // 0x47B9B5
{
    mangled_assert("??$read@M@IFFChunk@@QAE_NAAM@Z");
    todo("implement");
}

_inline bool IFFChunk::read<int>(__int32 &) // 0x4427F0
{
    mangled_assert("??$read@H@IFFChunk@@QAE_NAAH@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned int>(unsigned __int32 &) // 0x43F6BF
{
    mangled_assert("??$read@I@IFFChunk@@QAE_NAAI@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector3>(vector3 &) // 0x43F6D0
{
    mangled_assert("??$read@Vvector3@@@IFFChunk@@QAE_NAAVvector3@@@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<int>(__int32 *, unsigned __int32) // 0x60756A
{
    mangled_assert("??$readArray@H@IFFChunk@@QAE_NPAHI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<bool>(bool *, unsigned __int32) // 0x5D4005
{
    mangled_assert("??$readArray@_N@IFFChunk@@QAE_NPA_NI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<double>(double *, unsigned __int32) // 0x5168C5
{
    mangled_assert("??$readArray@N@IFFChunk@@QAE_NPANI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<char>(char *, unsigned __int32) // 0x4ABD30
{
    mangled_assert("??$readArray@D@IFFChunk@@QAE_NPADI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __IFF_H__
/* combined */
#ifndef __IFF_H__
#define __IFF_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum IFFType
{
    Normal = 0, // 0x0000
    NormalVers = 'NRML', // 0x4E524D4C
    Form = 'FORM', // 0x464F524D
};

/* ---------- definitions */

class IFF
{
public:
    typedef __int32 (*ChunkHandler)(IFF *, IFFChunk *, void *, void *);
    IFF(IFF const &); /* compiler_generated() */
    IFF();
    virtual ~IFF();
    class ChunkList
    {
public:
        typedef std::list<IFFChunk *,std::allocator<IFFChunk *> > Rep;
    private:
        std::list<IFFChunk *,std::allocator<IFFChunk *> > rep; // 0x4
    public:
        ChunkList(IFF::ChunkList const &); /* compiler_generated() */
        ChunkList();
        virtual ~ChunkList();
        typedef std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > iterator;
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > begin() const;
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<IFFChunk *> > > end() const;
        IFFChunk *front() const;
        unsigned __int32 size() const;
        bool empty() const;
        void push_front(IFFChunk *);
        void push_back(IFFChunk *);
        void pop_front();
        void remove(IFFChunk *);
        IFF::ChunkList &operator=(IFF::ChunkList const &); /* compiler_generated() */
    };
    static_assert(sizeof(ChunkList) == 12, "Invalid ChunkList size");
    void setFileVersion(unsigned __int32);
    unsigned __int32 getFileVersion();
    char const *getName() const;
    virtual bool attach(ByteStream *);
    virtual void skip(unsigned __int32);
    void addHandler(unsigned __int32, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void addHandler(unsigned __int32, IFFType, __int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *, __int32);
    virtual void setDefaultHandler(__int32 (*)(IFF *, IFFChunk *, void *, void *), void *, void *);
    virtual __int32 parse();
    virtual IFF::ChunkList *load();
    virtual bool save(IFF::ChunkList *);
    virtual IFFChunk *push(unsigned __int32);
    virtual IFFChunk *push(IFFType, unsigned __int32);
    virtual IFFChunk *push(IFFType, unsigned __int32, unsigned long);
    virtual bool pop();
    virtual unsigned __int32 getPosition();
    virtual unsigned __int32 chunkRemain();
    unsigned long getVersion() const;
private:
    virtual void swap(void *, unsigned __int32, unsigned __int32);
    virtual bool write(void *, unsigned __int32, unsigned __int32, bool);
    virtual bool read(void *, unsigned __int32, unsigned __int32, bool);
    virtual void _push(IFFType, unsigned __int32, unsigned long);
    virtual void _pop();
    IFF::ChunkList chunkStack; // 0x4
    std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > handlerStack; // 0x10
    ByteStream *stream; // 0x18
    IFFChunk *current; // 0x1C
    IFF::HandlerList *handlers; // 0x20
    IFF::HandlerNode *defaultHandler; // 0x24
    bool bParsing; // 0x28
    __int32 depth; // 0x2C
    unsigned __int32 fileVersion; // 0x30
    struct HandlerNode;
    class HandlerList;
    typedef std::list<IFF::HandlerList *,std::allocator<IFF::HandlerList *> > HandlerListList;
public:
    IFF &operator=(IFF const &); /* compiler_generated() */
};
static_assert(sizeof(IFF) == 52, "Invalid IFF size");

class IFFChunk
{
public:
    IFFChunk(IFFChunk const &); /* compiler_generated() */
    IFFChunk(IFF *, IFFType, unsigned __int32);
    IFFChunk(IFF *);
    virtual ~IFFChunk();
    unsigned __int32 getPosition() const;
    unsigned __int32 getSize() const;
    unsigned __int32 getID() const;
    IFFType getType() const;
    void skip(unsigned __int32);
private:
    bool write(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool write(std::string);
    virtual bool write(bool);
private:
    bool read(void *, unsigned __int32, unsigned __int32);
public:
    virtual bool read(__int32, char *);
    virtual bool read(char **);
    bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
    virtual bool read(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
    bool read(bool *);
    virtual bool read(bool &);
    unsigned char *getData();
    __int32 getDataSize() const;
    void freeData();
    unsigned char *resizeData(__int32);
    bool setOnDisk(bool);
    bool getOnDisk() const;
    void setDataPosition(__int32);
    __int32 getDataPosition() const;
    unsigned long getVersion() const;
private:
    unsigned __int32 pos; // 0x4
    unsigned __int32 size; // 0x8
    unsigned __int32 id; // 0xC
    IFFType type; // 0x10
    unsigned long version; // 0x14
    std::vector<unsigned char,std::allocator<unsigned char> > data; // 0x18
    __int32 position; // 0x24
    IFF *parent; // 0x28
    bool onDisk; // 0x2C
    typedef std::vector<unsigned char,std::allocator<unsigned char> > DataBlock;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<unsigned char> > > DataBlockI;
    virtual bool _write(void *, unsigned __int32, unsigned __int32);
    virtual bool _read(void *, unsigned __int32, unsigned __int32);
public:
    IFFChunk &operator=(IFFChunk const &); /* compiler_generated() */
};
static_assert(sizeof(IFFChunk) == 48, "Invalid IFFChunk size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline bool IFFChunk::write<unsigned char>(unsigned char) // 0x10060E00
{
    mangled_assert("??$write@E@IFFChunk@@QAE_NE@Z");
    todo("implement");
}

_inline bool IFFChunk::write<unsigned short>(unsigned short) // 0x10060E20
{
    mangled_assert("??$write@G@IFFChunk@@QAE_NG@Z");
    todo("implement");
}

_inline bool IFFChunk::read<long>(long *) // 0x10082540
{
    mangled_assert("??$read@J@IFFChunk@@QAE_NPAJ@Z");
    todo("implement");
}

_inline bool IFFChunk::read<float>(float *) // 0x10082560
{
    mangled_assert("??$read@M@IFFChunk@@QAE_NPAM@Z");
    todo("implement");
}

_inline bool IFFChunk::read<enum StateVarType>(StateVarType *) // 0x10082580
{
    mangled_assert("??$read@W4StateVarType@@@IFFChunk@@QAE_NPAW4StateVarType@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<int>(__int32 *) // 0x10058C40
{
    mangled_assert("??$read@H@IFFChunk@@QAE_NPAH@Z");
    todo("implement");
}

_inline bool IFFChunk::read<matrix4>(matrix4 *) // 0x10058C60
{
    mangled_assert("??$read@Vmatrix4@@@IFFChunk@@QAE_NPAVmatrix4@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector2>(vector2 *) // 0x10058C80
{
    mangled_assert("??$read@Vvector2@@@IFFChunk@@QAE_NPAVvector2@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector3>(vector3 *) // 0x10058CA0
{
    mangled_assert("??$read@Vvector3@@@IFFChunk@@QAE_NPAVvector3@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned long>(unsigned long &) // 0x100A31B0
{
    mangled_assert("??$read@K@IFFChunk@@QAE_NAAK@Z");
    todo("implement");
}

_inline bool IFFChunk::read<wchar_t>(wchar_t &) // 0x100A31D0
{
    mangled_assert("??$read@_W@IFFChunk@@QAE_NAA_W@Z");
    todo("implement");
}

_inline bool IFFChunk::read<short>(short &) // 0x10087B50
{
    mangled_assert("??$read@F@IFFChunk@@QAE_NAAF@Z");
    todo("implement");
}

_inline bool IFFChunk::read<enum Fixup::Type>(Fixup::Type &) // 0x10087B70
{
    mangled_assert("??$read@W4Type@Fixup@@@IFFChunk@@QAE_NAAW4Type@Fixup@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<float>(float &) // 0x1006B860
{
    mangled_assert("??$read@M@IFFChunk@@QAE_NAAM@Z");
    todo("implement");
}

_inline bool IFFChunk::read<enum Light::Type>(Light::Type &) // 0x1006B880
{
    mangled_assert("??$read@W4Type@Light@@@IFFChunk@@QAE_NAAW4Type@Light@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned char>(unsigned char &) // 0x10060DA0
{
    mangled_assert("??$read@E@IFFChunk@@QAE_NAAE@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned short>(unsigned short &) // 0x1000A090
{
    mangled_assert("??$read@G@IFFChunk@@QAE_NAAG@Z");
    todo("implement");
}

_inline bool IFFChunk::read<int>(__int32 &) // 0x1000A0B0
{
    mangled_assert("??$read@H@IFFChunk@@QAE_NAAH@Z");
    todo("implement");
}

_inline bool IFFChunk::read<unsigned int>(unsigned __int32 &) // 0x1000A0D0
{
    mangled_assert("??$read@I@IFFChunk@@QAE_NAAI@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector2>(vector2 &) // 0x1000A0F0
{
    mangled_assert("??$read@Vvector2@@@IFFChunk@@QAE_NAAVvector2@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector3>(vector3 &) // 0x1000A110
{
    mangled_assert("??$read@Vvector3@@@IFFChunk@@QAE_NAAVvector3@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<vector4>(vector4 &) // 0x1000A130
{
    mangled_assert("??$read@Vvector4@@@IFFChunk@@QAE_NAAVvector4@@@Z");
    todo("implement");
}

_inline bool IFFChunk::read<enum PrimitiveType>(PrimitiveType &) // 0x1000A150
{
    mangled_assert("??$read@W4PrimitiveType@@@IFFChunk@@QAE_NAAW4PrimitiveType@@@Z");
    todo("implement");
}

_inline bool IFFChunk::writeArray<unsigned char const >(unsigned char const *, unsigned __int32) // 0x10060E40
{
    mangled_assert("??$writeArray@$$CBE@IFFChunk@@QAE_NPBEI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<char>(char *, unsigned __int32) // 0x100825A0
{
    mangled_assert("??$readArray@D@IFFChunk@@QAE_NPADI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<unsigned char>(unsigned char *, unsigned __int32) // 0x10060DC0
{
    mangled_assert("??$readArray@E@IFFChunk@@QAE_NPAEI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<int>(__int32 *, unsigned __int32) // 0x10058CC0
{
    mangled_assert("??$readArray@H@IFFChunk@@QAE_NPAHI@Z");
    todo("implement");
}

_inline bool IFFChunk::readArray<unsigned short>(unsigned short *, unsigned __int32) // 0x1000A170
{
    mangled_assert("??$readArray@G@IFFChunk@@QAE_NPAGI@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __IFF_H__
#endif
