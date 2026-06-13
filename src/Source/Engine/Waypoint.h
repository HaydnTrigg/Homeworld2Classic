#if 0
#ifndef __WAYPOINT_H__
#define __WAYPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Waypoint :
    public SobUnmoveable
{
public:
    Waypoint(Waypoint &); /* compiler_generated() */
    Waypoint(SaveGameData *);
    Waypoint(vector3 const &);
    virtual ~Waypoint() override;
    virtual void render(matrix4 &) override;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    WaypointPath *pPath; // 0x210
    Waypoint &operator=(Waypoint &); /* compiler_generated() */
};
static_assert(sizeof(Waypoint) == 532, "Invalid Waypoint size");

class WaypointPath :
    public SaveObject
{
public:
    WaypointPath(WaypointPath const &); /* compiler_generated() */
    WaypointPath(SaveGameData *);
    WaypointPath(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    WaypointPath();
    virtual ~WaypointPath() override;
    void render(float, vector4);
    void render(float);
    void setCurrentIndex(__int32);
    void insertAfter(Waypoint *);
    void insertBefore(Waypoint *);
    void append(Waypoint *);
    std::vector<vector3,std::allocator<vector3> > &getPathPoints();
    unsigned __int32 getSize() const;
    _inline bool empty() const;
    Selection const &getSobs() const;
    float findClosestPoint2D(vector3 const &, vector3 const &, vector3 *, vector3 *, vector3 *, __int32 *, float *);
    unsigned __int32 findClosestPointIndex(vector3 const &) const;
    Waypoint *operator[](__int32) const;
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual void defaultSettings();
    unsigned __int32 currentIndex; // 0xC
    Selection m_path; // 0x10
    std::vector<vector3,std::allocator<vector3> > m_pathPoints; // 0x44
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x50
    static char const m_saveToken[0];
protected:
    static SaveData const m_saveData[0];
public:
    WaypointPath &operator=(WaypointPath const &); /* compiler_generated() */
};
static_assert(sizeof(WaypointPath) == 104, "Invalid WaypointPath size");

class PathList :
    public Saveable
{
public:
    PathList(PathList const &); /* compiler_generated() */
    PathList();
    virtual ~PathList() override;
    _inline std::list<WaypointPath *,std::allocator<WaypointPath *> > *getPathList();
    WaypointPath *getPathByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addPath(WaypointPath *);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual void defaultSettings();
protected:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    std::list<WaypointPath *,std::allocator<WaypointPath *> > m_pathList; // 0x4
public:
    PathList &operator=(PathList const &); /* compiler_generated() */
};
static_assert(sizeof(PathList) == 12, "Invalid PathList size");

class WaypointManager :
    public Saveable
{
public:
    WaypointManager(WaypointManager const &); /* compiler_generated() */
    WaypointManager();
    virtual ~WaypointManager() override;
    Selection const &getSobs();
    bool newPath();
    void endPath();
    void cancelPath();
    void appendPoint(vector3 const &);
    _inline WaypointPath *getEditingPath();
    void editPath(Sob *);
    Selection const &addPoint(vector3 const &);
    void movePoints(Selection const &, vector3 const &);
    void deletePoints(Selection const &);
    vector3 *getLastEditPoint();
    bool isPointNearPath2D(vector3 const &, vector3 const &, vector3 *);
    void drawPaths(float);
    void drawArrow(Camera const *);
    bool getPath(std::vector<vector3,std::allocator<vector3> > **, vector3 *, __int32 *, bool *);
    std::vector<vector3,std::allocator<vector3> > &getPath();
    bool getJoinPosition(vector3 &);
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
protected:
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
private:
    Selection m_currentSelection; // 0x4
    WaypointPath *m_pEditingPath; // 0x38
    std::list<WaypointPath *,std::allocator<WaypointPath *> > m_pathList; // 0x3C
    WaypointPath *m_rememberPath; // 0x44
    vector3 m_rememberP0; // 0x48
    float m_rememberT; // 0x54
    float m_rememberSign; // 0x58
    vector3 m_arrowDir; // 0x5C
    vector3 m_joinPosition; // 0x68
    unsigned __int32 m_firstIndex; // 0x74
    std::vector<vector3,std::allocator<vector3> > m_currentPath; // 0x78
public:
    WaypointManager &operator=(WaypointManager const &); /* compiler_generated() */
};
static_assert(sizeof(WaypointManager) == 132, "Invalid WaypointManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_65501E(Waypoint *const);
_inline char const *Waypoint::saveToken() // 0x65501E
{
    mangled_assert("?saveToken@Waypoint@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_65501E(this);
    return __result;
}

_extern bool _sub_65477A(Waypoint *const);
_inline bool Waypoint::isDeterministic() // 0x65477A
{
    mangled_assert("?isDeterministic@Waypoint@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_65477A(this);
    return __result;
}

_extern bool _sub_653F79(WaypointPath const *const);
_inline bool WaypointPath::empty() const // 0x653F79
{
    mangled_assert("?empty@WaypointPath@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_653F79(this);
    return __result;
}

_extern char const *_sub_65502A(WaypointPath *const);
_inline char const *WaypointPath::saveToken() // 0x65502A
{
    mangled_assert("?saveToken@WaypointPath@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_65502A(this);
    return __result;
}

_extern bool _sub_654780(WaypointPath *const);
_inline bool WaypointPath::isDeterministic() // 0x654780
{
    mangled_assert("?isDeterministic@WaypointPath@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_654780(this);
    return __result;
}

_extern std::list<WaypointPath *,std::allocator<WaypointPath *> > *_sub_5F0FD8(PathList *const);
_inline std::list<WaypointPath *,std::allocator<WaypointPath *> > *PathList::getPathList() // 0x5F0FD8
{
    mangled_assert("?getPathList@PathList@@QAEPAV?$list@PAVWaypointPath@@V?$allocator@PAVWaypointPath@@@std@@@std@@XZ");
    todo("implement");
    std::list<WaypointPath *,std::allocator<WaypointPath *> > * __result = _sub_5F0FD8(this);
    return __result;
}

_extern char const *_sub_655018(PathList *const);
_inline char const *PathList::saveToken() // 0x655018
{
    mangled_assert("?saveToken@PathList@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_655018(this);
    return __result;
}

_extern bool _sub_654777(PathList *const);
_inline bool PathList::isDeterministic() // 0x654777
{
    mangled_assert("?isDeterministic@PathList@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_654777(this);
    return __result;
}

_extern WaypointPath *_sub_453FB9(WaypointManager *const);
_inline WaypointPath *WaypointManager::getEditingPath() // 0x453FB9
{
    mangled_assert("?getEditingPath@WaypointManager@@QAEPAVWaypointPath@@XZ");
    todo("implement");
    WaypointPath * __result = _sub_453FB9(this);
    return __result;
}

_extern char const *_sub_655024(WaypointManager *const);
_inline char const *WaypointManager::saveToken() // 0x655024
{
    mangled_assert("?saveToken@WaypointManager@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_655024(this);
    return __result;
}

_extern bool _sub_65477D(WaypointManager *const);
_inline bool WaypointManager::isDeterministic() // 0x65477D
{
    mangled_assert("?isDeterministic@WaypointManager@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_65477D(this);
    return __result;
}

/* ---------- private code */

#endif // __WAYPOINT_H__
#endif
