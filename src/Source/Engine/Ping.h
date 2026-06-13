#if 0
#ifndef __PING_H__
#define __PING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PingManager :
    public Task
{
public:
    enum PingParameter
    {
        PP_BattleStatus = 0,
        PP_NumParams,
    };
    static bool Startup();
    static bool Shutdown();
    static bool SaveModule(SaveGameData *saveGameData, SaveType saveType);
    static bool RestoreModule(SaveGameData *saveGameData);
    static PingManager *Instance();
    unsigned __int32 addPointPing(wchar_t const *, char const *, vector3 const &, matrix3 const *);
    unsigned __int32 addPointPing(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *);
    unsigned __int32 addOwnerPing(wchar_t const *, char const *, Sob *, bool);
    unsigned __int32 addOwnerPing(wchar_t const *, ATITemplatePing *, Sob *, bool);
    unsigned __int32 addSelectionPing(wchar_t const *, char const *, Selection const &);
    unsigned __int32 addSelectionPing(wchar_t const *, ATITemplatePing *, Selection const &);
    unsigned __int32 addSelectionPingList(wchar_t const *, char const *, Selection const &);
    unsigned __int32 addSelectionPingList(wchar_t const *, ATITemplatePing *, Selection const &);
    bool setPingLabel(unsigned __int32, bool);
    bool removePing(Sob *);
    bool removePing(unsigned __int32);
    bool setPingParameter(unsigned __int32, PingManager::PingParameter, float);
    bool setPingDescription(unsigned __int32, unsigned __int32, wchar_t const *);
    virtual __int32 taskFunction(float) override;
    void render(Camera const *, float, float);
    void addMetaSelTargs(Camera const *, bool);
    ATITemplatePing *findTemplate(char const *) const;
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    PingManager(PingManager const &); /* compiler_generated() */
private:
    PingManager();
public:
    PingManager(SaveGameData *);
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void savePingMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restorePingMap(void *objectPtr, SaveGameData *saveGameData);
private:
    virtual ~PingManager() override;
    typedef std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > PingMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,PingBase *> > > > PingMapI;
    PingBase *findPing(unsigned __int32);
    std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > m_pings; // 0x30
    unsigned __int32 m_pingID; // 0x38
    std::vector<ATITemplatePing *,std::allocator<ATITemplatePing *> > m_ATITemplates; // 0x3C
public:
    PingManager &operator=(PingManager const &); /* compiler_generated() */
};
static_assert(sizeof(PingManager) == 72, "Invalid PingManager size");

class PingManager :
    public Task
{
public:
    enum PingParameter
    {
        PP_BattleStatus = 0,
        PP_NumParams,
    };
    static bool Startup();
    static bool Shutdown();
    static bool SaveModule(SaveGameData *saveGameData, SaveType saveType);
    static bool RestoreModule(SaveGameData *saveGameData);
    static PingManager *Instance();
    unsigned __int32 addPointPing(wchar_t const *, char const *, vector3 const &, matrix3 const *);
    unsigned __int32 addPointPing(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *);
    unsigned __int32 addOwnerPing(wchar_t const *, char const *, Sob *, bool);
    unsigned __int32 addOwnerPing(wchar_t const *, ATITemplatePing *, Sob *, bool);
    unsigned __int32 addSelectionPing(wchar_t const *, char const *, Selection const &);
    unsigned __int32 addSelectionPing(wchar_t const *, ATITemplatePing *, Selection const &);
    unsigned __int32 addSelectionPingList(wchar_t const *, char const *, Selection const &);
    unsigned __int32 addSelectionPingList(wchar_t const *, ATITemplatePing *, Selection const &);
    bool setPingLabel(unsigned __int32, bool);
    bool removePing(Sob *);
    bool removePing(unsigned __int32);
    bool setPingParameter(unsigned __int32, PingManager::PingParameter, float);
    bool setPingDescription(unsigned __int32, unsigned __int32, wchar_t const *);
    virtual __int32 taskFunction(float) override;
    void render(Camera const *, float, float);
    void addMetaSelTargs(Camera const *, bool);
    ATITemplatePing *findTemplate(char const *) const;
    bool save(SaveGameData *, SaveType);
    bool restore(SaveGameData *);
    _inline bool isDeterministic();
    void postRestore();
    char const *saveToken();
    void defaultSettings();
    PingManager(PingManager const &); /* compiler_generated() */
private:
    PingManager();
public:
    PingManager(SaveGameData *);
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void savePingMap(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restorePingMap(void *objectPtr, SaveGameData *saveGameData);
private:
    virtual ~PingManager() override;
    typedef std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > PingMap;
    typedef std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const ,PingBase *> > > > PingMapI;
    PingBase *findPing(unsigned __int32);
    std::map<unsigned int,PingBase *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const ,PingBase *> > > m_pings; // 0x30
    unsigned __int32 m_pingID; // 0x38
    std::vector<ATITemplatePing *,std::allocator<ATITemplatePing *> > m_ATITemplates; // 0x3C
public:
    PingManager &operator=(PingManager const &); /* compiler_generated() */
};
static_assert(sizeof(PingManager) == 72, "Invalid PingManager size");

class PingBase :
    public SaveObject
{
public:
    enum PingType
    {
        PING_Point = 0,
        PING_Owner,
        PING_Selection,
        PING_SelectionList,
        PING_COUNT,
    };
    static unsigned __int32 const NumberDescriptionLines;
    PingBase(PingBase const &); /* compiler_generated() */
    PingBase(SaveGameData *);
    PingBase(wchar_t const *, ATITemplatePing *);
    virtual ~PingBase() override;
    float evaluateSize(float);
    _inline wchar_t const *getName();
    virtual PingBase::PingType getType() = 0;
    virtual bool update(Camera const *, float);
    virtual void render(Camera const *, float, float, unsigned __int32);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0xC
    vector3 m_position; // 0x24
    float m_radius; // 0x30
    float m_expandRadius; // 0x34
    float m_creationTime; // 0x38
    float m_expireTime; // 0x3C
    float m_parameter[1]; // 0x40
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_description[4]; // 0x44
    bool m_bLabel; // 0xA4
    ATITemplatePing *m_template; // 0xA8
    SoundEntityHandle m_soundEmitter; // 0xAC
    float m_lastsize; // 0xB4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveTemplateName(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreTemplateName(void *objectPtr, SaveGameData *saveGameData);
    PingBase &operator=(PingBase const &); /* compiler_generated() */
};
static_assert(sizeof(PingBase) == 184, "Invalid PingBase size");

class PingBase :
    public SaveObject
{
public:
    enum PingType
    {
        PING_Point = 0,
        PING_Owner,
        PING_Selection,
        PING_SelectionList,
        PING_COUNT,
    };
    static unsigned __int32 const NumberDescriptionLines;
    PingBase(PingBase const &); /* compiler_generated() */
    PingBase(SaveGameData *);
    PingBase(wchar_t const *, ATITemplatePing *);
    virtual ~PingBase() override;
    float evaluateSize(float);
    _inline wchar_t const *getName();
    virtual PingBase::PingType getType() = 0;
    virtual bool update(Camera const *, float);
    virtual void render(Camera const *, float, float, unsigned __int32);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_name; // 0xC
    vector3 m_position; // 0x24
    float m_radius; // 0x30
    float m_expandRadius; // 0x34
    float m_creationTime; // 0x38
    float m_expireTime; // 0x3C
    float m_parameter[1]; // 0x40
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > m_description[4]; // 0x44
    bool m_bLabel; // 0xA4
    ATITemplatePing *m_template; // 0xA8
    SoundEntityHandle m_soundEmitter; // 0xAC
    float m_lastsize; // 0xB4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveTemplateName(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreTemplateName(void *objectPtr, SaveGameData *saveGameData);
    PingBase &operator=(PingBase const &); /* compiler_generated() */
};
static_assert(sizeof(PingBase) == 184, "Invalid PingBase size");

class PingPoint :
    public PingBase
{
public:
    PingPoint(PingPoint const &); /* compiler_generated() */
    PingPoint(SaveGameData *);
    PingPoint(wchar_t const *, ATITemplatePing *, vector3 const &, matrix3 const *);
    virtual _inline ~PingPoint() override;
    virtual _inline PingBase::PingType getType() override;
    bool m_bUseOrientation; // 0xB8
    matrix3 m_orientation; // 0xBC
    typedef PingBase SuperClass;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    PingPoint &operator=(PingPoint const &); /* compiler_generated() */
};
static_assert(sizeof(PingPoint) == 224, "Invalid PingPoint size");

class PingOwner :
    public PingBase
{
public:
    PingOwner(PingOwner const &); /* compiler_generated() */
    PingOwner(SaveGameData *);
    PingOwner(wchar_t const *, ATITemplatePing *, Sob *);
    virtual _inline ~PingOwner() override;
    virtual _inline PingBase::PingType getType() override;
    virtual bool update(Camera const *, float) override;
    virtual void render(Camera const *, float, float, unsigned __int32) override;
    bool m_bUseOrientation; // 0xB8
    SobID m_sobID; // 0xBC
    typedef PingBase SuperClass;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    PingOwner &operator=(PingOwner const &); /* compiler_generated() */
};
static_assert(sizeof(PingOwner) == 200, "Invalid PingOwner size");

class PingSelection :
    public PingBase
{
public:
    PingSelection(PingSelection const &); /* compiler_generated() */
    PingSelection(SaveGameData *);
    PingSelection(wchar_t const *, ATITemplatePing *, Selection const &);
    virtual _inline ~PingSelection() override;
    virtual _inline PingBase::PingType getType() override;
    virtual bool update(Camera const *, float) override;
    virtual void render(Camera const *, float, float, unsigned __int32) override;
    Selection m_selection; // 0xB8
    typedef PingBase SuperClass;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    PingSelection &operator=(PingSelection const &); /* compiler_generated() */
};
static_assert(sizeof(PingSelection) == 236, "Invalid PingSelection size");

class PingSelectionList :
    public PingBase
{
public:
    typedef PingBase SuperClass;
    PingSelectionList(PingSelectionList const &); /* compiler_generated() */
    PingSelectionList(SaveGameData *);
    PingSelectionList(wchar_t const *, ATITemplatePing *, Selection const &);
    virtual _inline PingBase::PingType getType() override;
    virtual bool update(Camera const *, float) override;
    virtual void render(Camera const *, float, float, unsigned __int32) override;
    SobID m_sobID; // 0xB8
    Selection m_selection; // 0xC4
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    virtual _inline ~PingSelectionList() override; /* compiler_generated() */
    PingSelectionList &operator=(PingSelectionList const &); /* compiler_generated() */
};
static_assert(sizeof(PingSelectionList) == 248, "Invalid PingSelectionList size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_61BFAF(PingManager *const);
_inline bool PingManager::isDeterministic() // 0x61BFAF
{
    mangled_assert("?isDeterministic@PingManager@@QAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFAF(this);
    return __result;
}

_extern wchar_t const *_sub_61BF73(PingBase *const);
_inline wchar_t const *PingBase::getName() // 0x61BF73
{
    mangled_assert("?getName@PingBase@@QAEPB_WXZ");
    todo("implement");
    wchar_t const * __result = _sub_61BF73(this);
    return __result;
}

_extern bool _sub_61BFAC(PingBase *const);
_inline bool PingBase::isDeterministic() // 0x61BFAC
{
    mangled_assert("?isDeterministic@PingBase@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFAC(this);
    return __result;
}

_extern char const *_sub_61CC6C(PingBase *const);
_inline char const *PingBase::saveToken() // 0x61CC6C
{
    mangled_assert("?saveToken@PingBase@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_61CC6C(this);
    return __result;
}

_extern void _sub_61B12F(PingPoint *const);
_inline PingPoint::~PingPoint() // 0x61B12F
{
    mangled_assert("??1PingPoint@@UAE@XZ");
    todo("implement");
    _sub_61B12F(this);
}

_extern PingBase::PingType _sub_61BFA1(PingPoint *const);
_inline PingBase::PingType PingPoint::getType() // 0x61BFA1
{
    mangled_assert("?getType@PingPoint@@UAE?AW4PingType@PingBase@@XZ");
    todo("implement");
    PingBase::PingType __result = _sub_61BFA1(this);
    return __result;
}

_extern bool _sub_61BFB5(PingPoint *const);
_inline bool PingPoint::isDeterministic() // 0x61BFB5
{
    mangled_assert("?isDeterministic@PingPoint@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFB5(this);
    return __result;
}

_extern char const *_sub_61CC78(PingPoint *const);
_inline char const *PingPoint::saveToken() // 0x61CC78
{
    mangled_assert("?saveToken@PingPoint@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_61CC78(this);
    return __result;
}

_extern void _sub_61B0ED(PingOwner *const);
_inline PingOwner::~PingOwner() // 0x61B0ED
{
    mangled_assert("??1PingOwner@@UAE@XZ");
    todo("implement");
    _sub_61B0ED(this);
}

_extern PingBase::PingType _sub_61BF9D(PingOwner *const);
_inline PingBase::PingType PingOwner::getType() // 0x61BF9D
{
    mangled_assert("?getType@PingOwner@@UAE?AW4PingType@PingBase@@XZ");
    todo("implement");
    PingBase::PingType __result = _sub_61BF9D(this);
    return __result;
}

_extern bool _sub_61BFB2(PingOwner *const);
_inline bool PingOwner::isDeterministic() // 0x61BFB2
{
    mangled_assert("?isDeterministic@PingOwner@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFB2(this);
    return __result;
}

_extern char const *_sub_61CC72(PingOwner *const);
_inline char const *PingOwner::saveToken() // 0x61CC72
{
    mangled_assert("?saveToken@PingOwner@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_61CC72(this);
    return __result;
}

_extern void _sub_61B13A(PingSelection *const);
_inline PingSelection::~PingSelection() // 0x61B13A
{
    mangled_assert("??1PingSelection@@UAE@XZ");
    todo("implement");
    _sub_61B13A(this);
}

_extern PingBase::PingType _sub_61BFA4(PingSelection *const);
_inline PingBase::PingType PingSelection::getType() // 0x61BFA4
{
    mangled_assert("?getType@PingSelection@@UAE?AW4PingType@PingBase@@XZ");
    todo("implement");
    PingBase::PingType __result = _sub_61BFA4(this);
    return __result;
}

_extern bool _sub_61BFB8(PingSelection *const);
_inline bool PingSelection::isDeterministic() // 0x61BFB8
{
    mangled_assert("?isDeterministic@PingSelection@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFB8(this);
    return __result;
}

_extern char const *_sub_61CC7E(PingSelection *const);
_inline char const *PingSelection::saveToken() // 0x61CC7E
{
    mangled_assert("?saveToken@PingSelection@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_61CC7E(this);
    return __result;
}

_extern PingBase::PingType _sub_61BFA8(PingSelectionList *const);
_inline PingBase::PingType PingSelectionList::getType() // 0x61BFA8
{
    mangled_assert("?getType@PingSelectionList@@UAE?AW4PingType@PingBase@@XZ");
    todo("implement");
    PingBase::PingType __result = _sub_61BFA8(this);
    return __result;
}

_extern bool _sub_61BFBB(PingSelectionList *const);
_inline bool PingSelectionList::isDeterministic() // 0x61BFBB
{
    mangled_assert("?isDeterministic@PingSelectionList@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_61BFBB(this);
    return __result;
}

_extern char const *_sub_61CC84(PingSelectionList *const);
_inline char const *PingSelectionList::saveToken() // 0x61CC84
{
    mangled_assert("?saveToken@PingSelectionList@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_61CC84(this);
    return __result;
}

/* ---------- private code */

#endif // __PING_H__
#endif
