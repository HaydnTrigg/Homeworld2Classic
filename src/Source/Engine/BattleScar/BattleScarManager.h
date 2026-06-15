#if 0
#ifndef __BATTLESCARMANAGER_H__
#define __BATTLESCARMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BattleScarManager :
    public Saveable
{
public:
    class Type
    {
    public:
        Type(BattleScarManager::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type();
        virtual bool load(LuaConfig &) = 0;
        virtual void onWeaponHit(BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
        virtual void renderBegin() const = 0;
        virtual void renderEnd() const = 0;
        virtual void createObject(void *, BattleScarManager::Handle &) = 0;
        virtual unsigned __int32 objectSize() const = 0;
        virtual void reloadTextures() = 0;
    protected:
        bool isScaringDamage(BattleScarManager::DamageInfo const &, float, __int32, float, float, BattleScarStats const &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > const &, BattleScarManager::DamageResult &) const;
        void onNewScar(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &);
        virtual bool healthLimitDamage(float, BattleScarStats const &) const = 0;
        virtual bool randIgnore() const = 0;
        virtual bool ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const = 0;
        virtual void damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) = 0;
        virtual void damageEnd() = 0;
        virtual bool onDamage(BattleScarManager::DamageTarget &) = 0;
    public:
        _inline char const *name() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    public:
        BattleScarManager::Type &operator=(BattleScarManager::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 28, "Invalid Type size");
    class Object
    {
    public:
        Object(BattleScarManager::Object const &); /* compiler_generated() */
    protected:
        Object(BattleScarManager::Type const *, BattleScarManager::Handle const &);
        virtual ~Object();
        struct FXInstance
        {
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_typeName; // 0x0
            float m_scale; // 0x18
            FXManager::Handle m_handle; // 0x1C
            matrix4 m_localTxfm; // 0x24
            _inline FXInstance(BattleScarManager::Object::FXInstance const &); /* compiler_generated() */
            _inline FXInstance(); /* compiler_generated() */
            _inline ~FXInstance(); /* compiler_generated() */
            _inline BattleScarManager::Object::FXInstance &operator=(BattleScarManager::Object::FXInstance const &); /* compiler_generated() */
        };
        static_assert(sizeof(FXInstance) == 100, "Invalid FXInstance size");
        typedef std::list<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > FXInstanceList;
        class Decal
        {
        public:
            static BattleScarManager::Object::Decal *construct();
            static void destroy(BattleScarManager::Object::Decal *d);
            Decal(BattleScarManager::Object::Decal const &); /* compiler_generated() */
        private:
            Decal();
            ~Decal();
        public:
            BattleScarManager::Object::Decal &operator=(BattleScarManager::Object::Decal const &);
            float distanceSqr(vector3 const &) const;
            unsigned __int32 getNumTriangles() const;
            bool save(SaveGameData *) const;
            bool restore(SaveGameData *, BattleScarManager::Object const *);
            void setVisible(bool);
            typedef std::list<Collision::Sphere,std::allocator<Collision::Sphere> > BoundingSphereList;
            DecalManager::Object *pBasicDecal; // 0x0
            __int32 decalType; // 0x4
            std::list<Collision::Sphere,std::allocator<Collision::Sphere> > boundingSpheres; // 0x8
            std::list<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > fxs; // 0x10
        };
        static_assert(sizeof(Decal) == 24, "Invalid Decal size");
        typedef std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > DecalList;
        struct History
        {
            matrix3 texProjMtx; // 0x0
            vector3 texProjCenter; // 0x24
            _inline History(); /* compiler_generated() */
        };
        static_assert(sizeof(History) == 48, "Invalid History size");
    public:
        virtual void display() const = 0;
        virtual bool inProximity(vector3 const &, float) const = 0;
        virtual bool save(SaveGameData *) const;
        virtual bool restore(SaveGameData *);
        bool postRestoreValidate();
        _inline BattleScarManager::Type const *getType() const;
        _inline BattleScarManager::Handle const &getSelf() const;
        bool isValid() const;
        _inline long getWeaponID() const;
        _inline void setWeaponID(long);
        _inline float getBirthTime() const;
        _inline void setBirthTime(float);
        _inline float getDamage() const;
        _inline void setDamage(float);
        _inline matrix4 const &getTransform() const;
        void setTransform(matrix4 const &);
        _inline float getOpacity() const;
        _inline void setOpacity(float);
        _inline bool getVisibility() const;
        void setVisibility(bool);
        _inline bool getRender() const;
        _inline void setRender(bool);
        _inline Collision::Sphere const &getBoundingSphere() const;
        _inline void setBoundingSphere(Collision::Sphere const &);
        _inline __int32 getNumTriangles() const;
        BattleScarManager::Object::Decal *createDecal();
        BattleScarManager::Object::Decal *duplicateDecal(BattleScarManager::Object::Decal const *);
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > &getDecalList();
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > const &getDecalList() const;
        void deleteFirstDecal();
        void deleteLastDecal();
        BattleScarManager::Object::Decal *popbackDecal();
        void pushbackDecal(BattleScarManager::Object::Decal *);
        _inline void deletePopedDecal(BattleScarManager::Object::Decal *);
        void countDecalTriangles();
        void removeFX();
        _inline void setHistory(BattleScarManager::Object::History const &);
        _inline BattleScarManager::Object::History const &getHistory() const;
    private:
        BattleScarManager::Type const *m_type; // 0x4
        BattleScarManager::Handle const m_self; // 0x8
        bool m_bValid; // 0x10
        long m_weaponID; // 0x14
        float m_birthTime; // 0x18
        float m_damage; // 0x1C
        matrix4 m_transform; // 0x20
        float m_opacity; // 0x60
        bool m_bVisible; // 0x64
        __int32 m_numTriangles; // 0x68
        Collision::Sphere m_boundSphere; // 0x6C
        bool m_bRender; // 0x7C
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > m_decals; // 0x80
        BattleScarManager::Object::History m_history; // 0x88
    };
    static_assert(sizeof(Object) == 184, "Invalid Object size");
    struct Handle
    {
        long r0; // 0x0
        long r1; // 0x4
    };
    static_assert(sizeof(Handle) == 8, "Invalid Handle size");
    typedef std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > HandleList;
    struct DamageTarget
    {
        DecalRefMesh const *m_pMesh; // 0x0
        std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *m_pScarList; // 0x4
        matrix4 m_txfm; // 0x8
        _inline DamageTarget(); /* compiler_generated() */
    };
    static_assert(sizeof(DamageTarget) == 72, "Invalid DamageTarget size");
    struct DamageInfo
    {
        vector3 m_position; // 0x0
        vector3 m_direction; // 0xC
        vector3 m_normal; // 0x18
        float m_damage; // 0x24
        _inline DamageInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(DamageInfo) == 40, "Invalid DamageInfo size");
    typedef unsigned short VertIndex;
    enum DamageResult
    {
        DR_NewScar = 0,
        DR_NoScar_Random,
        DR_NoScar_HealthCap,
        DR_NoScar_TriCap,
        DR_NoScar_Other,
    };
    static bool startup();
    static bool shutdown();
    static BattleScarManager *instance();
    static bool saveSingleton(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreSingleton(SaveGameData *saveGameData);
    void enableNewScar(bool);
    bool isNewScarEnabled();
    void enableRender(bool);
    bool isRenderEnabled() const;
    void setDetail(float);
    float getDetail() const;
    void setFolder(char const *);
    char const *getFolder() const;
    BattleScarManager::Type *typeGet(char const *);
    BattleScarManager::Handle objectCreate(BattleScarManager::Type *);
    bool objectIsDead(BattleScarManager::Handle const &) const;
    void objectSetTransform(BattleScarManager::Handle const &, matrix4 const &) const;
    void objectSetOpacity(BattleScarManager::Handle const &, float) const;
    void objectSetVisibility(BattleScarManager::Handle const &, bool) const;
    float objectGetDamage(BattleScarManager::Handle const &) const;
    __int32 objectGetNumTriangles(BattleScarManager::Handle const &) const;
    float objectGetBirthTime(BattleScarManager::Handle const &) const;
    void objectDestroy(BattleScarManager::Handle const &);
    void objectRemoveFX(BattleScarManager::Handle const &);
    void onWeaponHit(char const *, BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
    bool needRepair(float, BattleScarStats const &) const;
    void onRepair(float, float, BattleScarStats &, std::vector<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> >,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > > > &) const;
    void addToRender(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, float) const;
    void validate(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    void setTransform(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, matrix4 const &) const;
    void removeFX(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
    void reloadTextures();
    DecalManager *getDecalManager();
    void render(Camera const *);
    void setClipPlane0(bool);
    virtual bool save(SaveGameData *, SaveType) override;
    bool save(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const &) const;
    virtual bool restore(SaveGameData *) override;
    bool restore(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    virtual void postRestore() override;
    void postRestore(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
private:
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveData(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreData(void *objectPtr, SaveGameData *saveGameData);
    BattleScarManager::Type *typeLoad(char const *);
    BattleScarManager::Type *typeFind(char const *);
    void renderBegin();
    void renderEnd();
public:
    BattleScarManager(BattleScarManager const &); /* compiler_generated() */
private:
    BattleScarManager();
    virtual ~BattleScarManager() override;
    class Data;
    boost::scoped_ptr<BattleScarManager::Data> m_pimpl; // 0x4
public:
    BattleScarManager &operator=(BattleScarManager const &); /* compiler_generated() */
};
static_assert(sizeof(BattleScarManager) == 8, "Invalid BattleScarManager size");

class BattleScarManager :
    public Saveable
{
public:
    class Type
    {
    public:
        Type(BattleScarManager::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type();
        virtual bool load(LuaConfig &) = 0;
        virtual void onWeaponHit(BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
        virtual void renderBegin() const = 0;
        virtual void renderEnd() const = 0;
        virtual void createObject(void *, BattleScarManager::Handle &) = 0;
        virtual unsigned __int32 objectSize() const = 0;
        virtual void reloadTextures() = 0;
    protected:
        bool isScaringDamage(BattleScarManager::DamageInfo const &, float, __int32, float, float, BattleScarStats const &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > const &, BattleScarManager::DamageResult &) const;
        void onNewScar(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &);
        virtual bool healthLimitDamage(float, BattleScarStats const &) const = 0;
        virtual bool randIgnore() const = 0;
        virtual bool ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const = 0;
        virtual void damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) = 0;
        virtual void damageEnd() = 0;
        virtual bool onDamage(BattleScarManager::DamageTarget &) = 0;
    public:
        _inline char const *name() const;
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x4
    public:
        BattleScarManager::Type &operator=(BattleScarManager::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 28, "Invalid Type size");
    class Object
    {
    public:
        Object(BattleScarManager::Object const &); /* compiler_generated() */
    protected:
        Object(BattleScarManager::Type const *, BattleScarManager::Handle const &);
        virtual ~Object();
        struct FXInstance
        {
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_typeName; // 0x0
            float m_scale; // 0x18
            FXManager::Handle m_handle; // 0x1C
            matrix4 m_localTxfm; // 0x24
            _inline FXInstance(BattleScarManager::Object::FXInstance const &); /* compiler_generated() */
            _inline FXInstance(); /* compiler_generated() */
            _inline ~FXInstance(); /* compiler_generated() */
            _inline BattleScarManager::Object::FXInstance &operator=(BattleScarManager::Object::FXInstance const &); /* compiler_generated() */
        };
        static_assert(sizeof(FXInstance) == 100, "Invalid FXInstance size");
        typedef std::list<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > FXInstanceList;
        class Decal
        {
        public:
            static BattleScarManager::Object::Decal *construct();
            static void destroy(BattleScarManager::Object::Decal *d);
            Decal(BattleScarManager::Object::Decal const &); /* compiler_generated() */
        private:
            Decal();
            ~Decal();
        public:
            BattleScarManager::Object::Decal &operator=(BattleScarManager::Object::Decal const &);
            float distanceSqr(vector3 const &) const;
            unsigned __int32 getNumTriangles() const;
            bool save(SaveGameData *) const;
            bool restore(SaveGameData *, BattleScarManager::Object const *);
            void setVisible(bool);
            typedef std::list<Collision::Sphere,std::allocator<Collision::Sphere> > BoundingSphereList;
            DecalManager::Object *pBasicDecal; // 0x0
            __int32 decalType; // 0x4
            std::list<Collision::Sphere,std::allocator<Collision::Sphere> > boundingSpheres; // 0x8
            std::list<BattleScarManager::Object::FXInstance,std::allocator<BattleScarManager::Object::FXInstance> > fxs; // 0x10
        };
        static_assert(sizeof(Decal) == 24, "Invalid Decal size");
        typedef std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > DecalList;
        struct History
        {
            matrix3 texProjMtx; // 0x0
            vector3 texProjCenter; // 0x24
            _inline History(); /* compiler_generated() */
        };
        static_assert(sizeof(History) == 48, "Invalid History size");
    public:
        virtual void display() const = 0;
        virtual bool inProximity(vector3 const &, float) const = 0;
        virtual bool save(SaveGameData *) const;
        virtual bool restore(SaveGameData *);
        bool postRestoreValidate();
        _inline BattleScarManager::Type const *getType() const;
        _inline BattleScarManager::Handle const &getSelf() const;
        bool isValid() const;
        _inline long getWeaponID() const;
        _inline void setWeaponID(long);
        _inline float getBirthTime() const;
        _inline void setBirthTime(float);
        _inline float getDamage() const;
        _inline void setDamage(float);
        _inline matrix4 const &getTransform() const;
        void setTransform(matrix4 const &);
        _inline float getOpacity() const;
        _inline void setOpacity(float);
        _inline bool getVisibility() const;
        void setVisibility(bool);
        _inline bool getRender() const;
        _inline void setRender(bool);
        _inline Collision::Sphere const &getBoundingSphere() const;
        _inline void setBoundingSphere(Collision::Sphere const &);
        _inline __int32 getNumTriangles() const;
        BattleScarManager::Object::Decal *createDecal();
        BattleScarManager::Object::Decal *duplicateDecal(BattleScarManager::Object::Decal const *);
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > &getDecalList();
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > const &getDecalList() const;
        void deleteFirstDecal();
        void deleteLastDecal();
        BattleScarManager::Object::Decal *popbackDecal();
        void pushbackDecal(BattleScarManager::Object::Decal *);
        _inline void deletePopedDecal(BattleScarManager::Object::Decal *);
        void countDecalTriangles();
        void removeFX();
        _inline void setHistory(BattleScarManager::Object::History const &);
        _inline BattleScarManager::Object::History const &getHistory() const;
    private:
        BattleScarManager::Type const *m_type; // 0x4
        BattleScarManager::Handle const m_self; // 0x8
        bool m_bValid; // 0x10
        long m_weaponID; // 0x14
        float m_birthTime; // 0x18
        float m_damage; // 0x1C
        matrix4 m_transform; // 0x20
        float m_opacity; // 0x60
        bool m_bVisible; // 0x64
        __int32 m_numTriangles; // 0x68
        Collision::Sphere m_boundSphere; // 0x6C
        bool m_bRender; // 0x7C
        std::list<BattleScarManager::Object::Decal *,std::allocator<BattleScarManager::Object::Decal *> > m_decals; // 0x80
        BattleScarManager::Object::History m_history; // 0x88
    };
    static_assert(sizeof(Object) == 184, "Invalid Object size");
    struct Handle
    {
        long r0; // 0x0
        long r1; // 0x4
    };
    static_assert(sizeof(Handle) == 8, "Invalid Handle size");
    typedef std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > HandleList;
    struct DamageTarget
    {
        DecalRefMesh const *m_pMesh; // 0x0
        std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *m_pScarList; // 0x4
        matrix4 m_txfm; // 0x8
        _inline DamageTarget(); /* compiler_generated() */
    };
    static_assert(sizeof(DamageTarget) == 72, "Invalid DamageTarget size");
    struct DamageInfo
    {
        vector3 m_position; // 0x0
        vector3 m_direction; // 0xC
        vector3 m_normal; // 0x18
        float m_damage; // 0x24
        _inline DamageInfo(); /* compiler_generated() */
    };
    static_assert(sizeof(DamageInfo) == 40, "Invalid DamageInfo size");
    typedef unsigned short VertIndex;
    enum DamageResult
    {
        DR_NewScar = 0,
        DR_NoScar_Random,
        DR_NoScar_HealthCap,
        DR_NoScar_TriCap,
        DR_NoScar_Other,
    };
    static bool startup();
    static bool shutdown();
    static BattleScarManager *instance();
    static bool saveSingleton(SaveGameData *saveGameData, SaveType saveType);
    static bool restoreSingleton(SaveGameData *saveGameData);
    void enableNewScar(bool);
    bool isNewScarEnabled();
    void enableRender(bool);
    bool isRenderEnabled() const;
    void setDetail(float);
    float getDetail() const;
    void setFolder(char const *);
    char const *getFolder() const;
    BattleScarManager::Type *typeGet(char const *);
    BattleScarManager::Handle objectCreate(BattleScarManager::Type *);
    bool objectIsDead(BattleScarManager::Handle const &) const;
    void objectSetTransform(BattleScarManager::Handle const &, matrix4 const &) const;
    void objectSetOpacity(BattleScarManager::Handle const &, float) const;
    void objectSetVisibility(BattleScarManager::Handle const &, bool) const;
    float objectGetDamage(BattleScarManager::Handle const &) const;
    __int32 objectGetNumTriangles(BattleScarManager::Handle const &) const;
    float objectGetBirthTime(BattleScarManager::Handle const &) const;
    void objectDestroy(BattleScarManager::Handle const &);
    void objectRemoveFX(BattleScarManager::Handle const &);
    void onWeaponHit(char const *, BattleScarManager::DamageInfo const &, float, long, __int32, float, float, BattleScarStats &, std::vector<BattleScarManager::DamageTarget,std::allocator<BattleScarManager::DamageTarget> > &, BattleScarManager::DamageResult &);
    bool needRepair(float, BattleScarStats const &) const;
    void onRepair(float, float, BattleScarStats &, std::vector<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> >,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > > > &) const;
    void addToRender(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, float) const;
    void validate(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    void setTransform(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &, matrix4 const &) const;
    void removeFX(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &);
    void reloadTextures();
    DecalManager *getDecalManager();
    void render(Camera const *);
    void setClipPlane0(bool);
    virtual bool save(SaveGameData *, SaveType) override;
    bool save(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const &) const;
    virtual bool restore(SaveGameData *) override;
    bool restore(SaveGameData *, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    virtual void postRestore() override;
    void postRestore(std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > &) const;
    virtual _inline char const *saveToken() override;
    virtual _inline bool isDeterministic() override;
private:
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    static void saveData(void *objectPtr, SaveGameData *saveGameData, SaveType savetype);
    static void restoreData(void *objectPtr, SaveGameData *saveGameData);
    BattleScarManager::Type *typeLoad(char const *);
    BattleScarManager::Type *typeFind(char const *);
    void renderBegin();
    void renderEnd();
public:
    BattleScarManager(BattleScarManager const &); /* compiler_generated() */
private:
    BattleScarManager();
    virtual ~BattleScarManager() override;
    class Data;
    boost::scoped_ptr<BattleScarManager::Data> m_pimpl; // 0x4
public:
    BattleScarManager &operator=(BattleScarManager const &); /* compiler_generated() */
};
static_assert(sizeof(BattleScarManager) == 8, "Invalid BattleScarManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline char const *BattleScarManager::saveToken() // 0x55C853
{
    mangled_assert("?saveToken@BattleScarManager@@UAEPBDXZ");
    todo("implement");
}

_inline bool BattleScarManager::isDeterministic() // 0x55B807
{
    mangled_assert("?isDeterministic@BattleScarManager@@UAE_NXZ");
    todo("implement");
}

_inline char const *BattleScarManager::Type::name() const // 0x55B9B7
{
    mangled_assert("?name@Type@BattleScarManager@@QBEPBDXZ");
    todo("implement");
}

_inline BattleScarManager::Type const *BattleScarManager::Object::getType() const // 0x55B7F9
{
    mangled_assert("?getType@Object@BattleScarManager@@QBEPBVType@2@XZ");
    todo("implement");
}

_inline BattleScarManager::Handle const &BattleScarManager::Object::getSelf() const // 0x564FE2
{
    mangled_assert("?getSelf@Object@BattleScarManager@@QBEABUHandle@2@XZ");
    todo("implement");
}

_inline long BattleScarManager::Object::getWeaponID() const // 0x564FE6
{
    mangled_assert("?getWeaponID@Object@BattleScarManager@@QBEJXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setWeaponID(long) // 0x5606B2
{
    mangled_assert("?setWeaponID@Object@BattleScarManager@@QAEXJ@Z");
    todo("implement");
}

_inline float BattleScarManager::Object::getBirthTime() const // 0x55B7BA
{
    mangled_assert("?getBirthTime@Object@BattleScarManager@@QBEMXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setBirthTime(float) // 0x56066E
{
    mangled_assert("?setBirthTime@Object@BattleScarManager@@QAEXM@Z");
    todo("implement");
}

_inline float BattleScarManager::Object::getDamage() const // 0x55B7BE
{
    mangled_assert("?getDamage@Object@BattleScarManager@@QBEMXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setDamage(float) // 0x56068E
{
    mangled_assert("?setDamage@Object@BattleScarManager@@QAEXM@Z");
    todo("implement");
}

_inline matrix4 const &BattleScarManager::Object::getTransform() const // 0x55F362
{
    mangled_assert("?getTransform@Object@BattleScarManager@@QBEABVmatrix4@@XZ");
    todo("implement");
}

_inline float BattleScarManager::Object::getOpacity() const // 0x55F35E
{
    mangled_assert("?getOpacity@Object@BattleScarManager@@QBEMXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setOpacity(float) // 0x55C895
{
    mangled_assert("?setOpacity@Object@BattleScarManager@@QAEXM@Z");
    todo("implement");
}

_inline bool BattleScarManager::Object::getVisibility() const // 0x55B7FD
{
    mangled_assert("?getVisibility@Object@BattleScarManager@@QBE_NXZ");
    todo("implement");
}

_inline bool BattleScarManager::Object::getRender() const // 0x55B7F5
{
    mangled_assert("?getRender@Object@BattleScarManager@@QBE_NXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setRender(bool) // 0x55C8A3
{
    mangled_assert("?setRender@Object@BattleScarManager@@QAEX_N@Z");
    todo("implement");
}

_inline Collision::Sphere const &BattleScarManager::Object::getBoundingSphere() const // 0x55F35A
{
    mangled_assert("?getBoundingSphere@Object@BattleScarManager@@QBEABVSphere@Collision@@XZ");
    todo("implement");
}

_inline void BattleScarManager::Object::setBoundingSphere(Collision::Sphere const &) // 0x56067C
{
    mangled_assert("?setBoundingSphere@Object@BattleScarManager@@QAEXABVSphere@Collision@@@Z");
    todo("implement");
}

_inline __int32 BattleScarManager::Object::getNumTriangles() const // 0x55B7F1
{
    mangled_assert("?getNumTriangles@Object@BattleScarManager@@QBEHXZ");
    todo("implement");
}

_inline void BattleScarManager::Object::deletePopedDecal(BattleScarManager::Object::Decal *) // 0x5640F1
{
    mangled_assert("?deletePopedDecal@Object@BattleScarManager@@QAEXPAVDecal@12@@Z");
    todo("implement");
}

_inline void BattleScarManager::Object::setHistory(BattleScarManager::Object::History const &) // 0x56069C
{
    mangled_assert("?setHistory@Object@BattleScarManager@@QAEXABUHistory@12@@Z");
    todo("implement");
}

_inline BattleScarManager::Object::History const &BattleScarManager::Object::getHistory() const // 0x564FC3
{
    mangled_assert("?getHistory@Object@BattleScarManager@@QBEABUHistory@12@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BATTLESCARMANAGER_H__
#endif
