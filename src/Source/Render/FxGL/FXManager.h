#if 0
#ifndef __FXMANAGER_H__
#define __FXMANAGER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FXManager
{
public:
    enum Style
    {
        STYLE_SPRAY = 0,
        STYLE_RING,
        STYLE_BEAM,
        STYLE_TRAIL,
        STYLE_COMBO,
        STYLE_CONDITIONAL,
        STYLE_LIGHT,
        STYLE_HYPERSPACE,
        STYLE_LENSFLARE,
        STYLE_COUNT,
    };
    class Type
    {
public:
        struct Property
        {
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > name; // 0x0
            std::basic_string<char,std::char_traits<char>,std::allocator<char> > description; // 0x18
            VarMulti value; // 0x30
            _inline Property(FXManager::Type::Property const &); /* compiler_generated() */
            _inline Property(); /* compiler_generated() */
            _inline ~Property(); /* compiler_generated() */
            FXManager::Type::Property &operator=(FXManager::Type::Property const &); /* compiler_generated() */
        };
        static_assert(sizeof(Property) == 84, "Invalid Property size");
        enum BlendType
        {
            BT_None = 0,
            BT_Alpha,
            BT_Additive,
            BT_Multiply,
            BT_AdditiveAlpha,
            BT_Count,
        };
        typedef std::pair<float,vector4> TimeColour;
        typedef std::pair<float,float> TimeFloat;
        typedef std::pair<float,vector3> TimeVector3;
        Type(FXManager::Type const &); /* compiler_generated() */
        Type(char const *);
        virtual ~Type();
        static FXManager::Type *LoadFromFile(char const *nameOfType);
        static bool SaveToFile(FXManager::Type const *type);
        static char const *Folder();
        static void SetFolder(char const *str);
        static void ListFromFolder(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &l);
        _inline char const *Name() const;
        _inline __int32 SortOrder() const;
        virtual bool NameChange(char const *);
        void SetSortOrder(__int32);
        _inline float GetSizeEstimate() const;
        virtual FXManager::Style GetStyle() const = 0;
        virtual bool IsVisible() const;
        virtual bool NeverDistanceCulled() const;
        virtual float GetMaximumDuration() const = 0;
        virtual void CreateObject(void *, FXManager::Handle const &, FXManager::Handle const &, __int32 const) const = 0;
        virtual void Precache() = 0;
        virtual void Flush() = 0;
        virtual void RenderBegin() const = 0;
        virtual void RenderEnd() const = 0;
        virtual void RenderStat();
        virtual void LinkedFx(std::list<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &) const = 0;
        virtual bool PropertyList(std::list<FXManager::Type::Property,std::allocator<FXManager::Type::Property> > &) const = 0;
        virtual bool PropertyAt(unsigned __int32 const, FXManager::Type::Property &) const = 0;
        virtual bool PropertyGet(char const *, VarMulti &) const = 0;
        virtual bool PropertySet(char const *, VarMulti const &) = 0;
    protected:
        __int32 m_sortOrder; // 0x4
    private:
        std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x8
        float m_sizeEstimate; // 0x20
    public:
        FXManager::Type &operator=(FXManager::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 36, "Invalid Type size");
    class Object
    {
public:
        enum
        {
            k_MaxSize = 200, // 0x00C8
        };
        Object(FXManager::Object const &); /* compiler_generated() */
    protected:
        Object(FXManager::Type const *, FXManager::Handle const &, FXManager::Handle const &, __int32);
        virtual ~Object();
    public:
        _inline FXManager::Type const *GetType() const;
        _inline FXManager::Handle const &GetSelf() const;
        _inline matrix4 const &GetTransform() const;
        virtual void SetTransform(matrix4 const &);
        _inline vector3 const &GetVelocity() const;
        virtual void SetVelocity(vector3 const &);
        _inline float GetScale() const;
        virtual void SetScale(float);
        _inline float GetLength() const;
        virtual void SetLength(float);
        _inline bool GetVisible() const;
        virtual void SetVisible(bool);
        _inline float GetCullingRadius() const;
        float GetCollisionRadius() const;
        _inline bool GetStop() const;
        virtual void SetStop();
        virtual _inline float GetGravwellStrength() const;
        virtual _inline bool GetOffset(vector3 &) const;
        virtual _inline bool GetColour(vector4 &) const;
        virtual _inline float GetHeight() const;
        virtual _inline bool SetHeight(float);
        virtual _inline bool SetOffset(vector3 const &);
        virtual _inline bool SetFadeT(float);
        _inline FXManager::Handle GetParent() const;
        virtual bool Update(float) = 0;
        virtual void Display(float) = 0;
    protected:
        virtual void SetCullingRadius(float);
        virtual void SetCollisionRadius(float);
    private:
        FXManager::Type const *m_type; // 0x4
        FXManager::Handle const m_self; // 0x8
        FXManager::Handle m_parent; // 0x10
        matrix4 m_transform; // 0x18
        vector3 m_velocity; // 0x58
        float m_scale; // 0x64
        float m_length; // 0x68
        float m_radiusCulling; // 0x6C
        float m_radiusCollision; // 0x70
        bool m_visible; // 0x74
        bool m_stop; // 0x75
    };
    static_assert(sizeof(Object) == 120, "Invalid Object size");
    class Dynamics
    {
public:
        enum
        {
            k_MaxSize = 56, // 0x0038 '8'
        };
        enum Behavior
        {
            BH_STRAIGHT = 0,
            BH_GRAVITYWIND_COLLIDE_DIE,
            BH_GRAVITYWIND_COLLIDE_BOUNCE,
            BH_GRAVITYWIND_COLLIDE_STICK,
            BH_WIND,
            BH_PLANARWATER,
            BH_LOCAL,
            BH_LAND,
            BH_GRAVITYWIND_COLLIDE_IGNORE,
            BH_TERRAIN_SURFACE,
            BH_GRAVWELL,
            BH_COUNT,
        };
        virtual ~Dynamics();
        virtual FXManager::Dynamics *Clone() const = 0;
        virtual void InitialPosition(vector3 const &) = 0;
        virtual void InitialVelocity(vector3 const &) = 0;
        virtual void InitialDrag(float const) = 0;
        virtual bool MoveObject(FXManager::Object *, float) = 0;
        static void *operator new(unsigned __int32 s);
        static void operator delete(void *p, unsigned __int32 s);
        Dynamics(FXManager::Dynamics const &); /* compiler_generated() */
        _inline Dynamics(); /* compiler_generated() */
        FXManager::Dynamics &operator=(FXManager::Dynamics const &); /* compiler_generated() */
    };
    static_assert(sizeof(Dynamics) == 4, "Invalid Dynamics size");
    struct Handle
    {
        unsigned long r0; // 0x0
        unsigned long r1; // 0x4
        _inline Handle();
        _inline bool operator==(FXManager::Handle const &) const;
        _inline bool operator!=(FXManager::Handle const &) const;
    };
    static_assert(sizeof(Handle) == 8, "Invalid Handle size");
    static FXManager::Handle const InvalidHandle;
    enum
    {
        CLOCK_SIM = 0,
        CLOCK_UI,
        CLOCK_CURRENT,
    };
    struct Stats
    {
        unsigned __int32 typeCount; // 0x0
        unsigned __int32 typeMax; // 0x4
        unsigned __int32 objectCount; // 0x8
        unsigned __int32 objectMax; // 0xC
        unsigned __int32 updateCount; // 0x10
        unsigned __int32 updateMax; // 0x14
        unsigned __int32 renderCount; // 0x18
        unsigned __int32 renderMax; // 0x1C
        unsigned __int32 deadCount; // 0x20
        unsigned __int32 deadMax; // 0x24
        unsigned __int32 distanceCulled; // 0x28
        unsigned __int32 shaderChanges; // 0x2C
    };
    static_assert(sizeof(Stats) == 48, "Invalid Stats size");
    enum Caps
    {
        CAP_NoDynamicLights = 0,
        CAP_NumCaps,
    };
private:
    FXManager(FXManager const &);
    FXManager();
    ~FXManager();
public:
    static FXManager *Instance();
    static bool Initialize();
    static bool Shutdown();
    void SetTimeInterface(FXTimeInterface *);
    void SetUpdateClamp(float);
    void SetAlternateFOV(float);
    float GetAlternateFOV() const;
    void SetFadePointDistance(float);
    float GetFadePointDistance() const;
    void SetMaxPointDistance(float);
    float GetMaxPointDistance() const;
    void SetMaxLightPriority(__int32);
    __int32 GetMaxLightPriority() const;
    void SetFarMode(bool);
    FXManager::Handle ObjectCreate(char const *, FXManager::Dynamics const *, __int32 const);
    FXManager::Handle ObjectCreateFarMode(char const *, FXManager::Dynamics const *, __int32 const);
    FXManager::Handle ObjectCreateLink(char const *, FXManager::Dynamics const *, FXManager::Handle const &, float);
    void ObjectStop(FXManager::Handle const &);
    void ObjectSetVisible(FXManager::Handle const &, bool);
    void ObjectDestroy(FXManager::Handle const &);
    bool ObjectIsDead(FXManager::Handle const &) const;
    void ObjectDestroyAll(__int32 const);
    void ObjectSetTransform(FXManager::Handle const &, matrix4 const &);
    void ObjectSetScale(FXManager::Handle const &, float);
    void ObjectSetLength(FXManager::Handle const &, float);
    void ObjectSetVelocity(FXManager::Handle const &, vector3 const &);
    void ObjectSetHeight(FXManager::Handle const &, float);
    void ObjectSetOffset(FXManager::Handle const &, vector3 const &);
    void ObjectSetFadeT(FXManager::Handle const &, float);
    void ObjectSetFarMode(FXManager::Handle const &, bool);
    bool ObjectGetTransform(FXManager::Handle const &, matrix4 &) const;
    float ObjectGetScale(FXManager::Handle const &) const;
    float ObjectGetLength(FXManager::Handle const &) const;
    float ObjectGetGravwellStrength(FXManager::Handle const &) const;
    bool ObjectGetOffset(FXManager::Handle const &, vector3 &) const;
    bool ObjectGetColour(FXManager::Handle const &, vector4 &) const;
    FXManager::Handle ObjectGetParent(FXManager::Handle const &) const;
    void ObjectForceUpdate(FXManager::Handle const &);
    void ObjectForceDynamicsUpdate(FXManager::Handle const &);
    void DynamicsSet(FXManager::Dynamics *, __int32);
    FXManager::Dynamics const *DynamicsGet(__int32) const;
    bool TypeExists(char const *);
    void TypeAdd(FXManager::Type *);
    FXManager::Type const *TypeGet(char const *);
    void TypePrecache(char const *);
    void TypeFlushAll();
    void TypeDestroy(char const *);
    void TypeDestroyAll();
    void Update(__int32, float);
    void Display(__int32, Frustum const &, Camera const *);
    void StatsGet(FXManager::Stats &) const;
    void StatsReset();
    void StatsDump() const;
    void CapSet(FXManager::Caps, bool);
    bool CapGet(FXManager::Caps) const;
    class Data;
private:
    boost::scoped_ptr<FXManager::Data> m_pimpl; // 0x0
    FXManager::Handle ObjectCreateInternal(char const *, FXManager::Dynamics const *, FXManager::Handle const &, __int32 const, float const, bool);
    FXManager &operator=(FXManager const &);
};
static_assert(sizeof(FXManager) == 4, "Invalid FXManager size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern char const *_sub_6DD51D(FXManager::Type const *const);
_inline char const *FXManager::Type::Name() const // 0x6DD51D
{
    mangled_assert("?Name@Type@FXManager@@QBEPBDXZ");
    todo("implement");
    char const * __result = _sub_6DD51D(this);
    return __result;
}

_extern __int32 _sub_6DE389(FXManager::Type const *const);
_inline __int32 FXManager::Type::SortOrder() const // 0x6DE389
{
    mangled_assert("?SortOrder@Type@FXManager@@QBEHXZ");
    todo("implement");
    __int32 __result = _sub_6DE389(this);
    return __result;
}

_extern float _sub_519412(FXManager::Type const *const);
_inline float FXManager::Type::GetSizeEstimate() const // 0x519412
{
    mangled_assert("?GetSizeEstimate@Type@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_519412(this);
    return __result;
}

_extern FXManager::Type const *_sub_6DCE30(FXManager::Object const *const);
_inline FXManager::Type const *FXManager::Object::GetType() const // 0x6DCE30
{
    mangled_assert("?GetType@Object@FXManager@@QBEPBVType@2@XZ");
    todo("implement");
    FXManager::Type const * __result = _sub_6DCE30(this);
    return __result;
}

_extern FXManager::Handle const &_sub_6E6304(FXManager::Object const *const);
_inline FXManager::Handle const &FXManager::Object::GetSelf() const // 0x6E6304
{
    mangled_assert("?GetSelf@Object@FXManager@@QBEABUHandle@2@XZ");
    todo("implement");
    FXManager::Handle const & __result = _sub_6E6304(this);
    return __result;
}

_extern matrix4 const &_sub_6DCE2C(FXManager::Object const *const);
_inline matrix4 const &FXManager::Object::GetTransform() const // 0x6DCE2C
{
    mangled_assert("?GetTransform@Object@FXManager@@QBEABVmatrix4@@XZ");
    todo("implement");
    matrix4 const & __result = _sub_6DCE2C(this);
    return __result;
}

_extern vector3 const &_sub_6E9A8A(FXManager::Object const *const);
_inline vector3 const &FXManager::Object::GetVelocity() const // 0x6E9A8A
{
    mangled_assert("?GetVelocity@Object@FXManager@@QBEABVvector3@@XZ");
    todo("implement");
    vector3 const & __result = _sub_6E9A8A(this);
    return __result;
}

_extern float _sub_6DCE28(FXManager::Object const *const);
_inline float FXManager::Object::GetScale() const // 0x6DCE28
{
    mangled_assert("?GetScale@Object@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCE28(this);
    return __result;
}

_extern float _sub_6DCDF7(FXManager::Object const *const);
_inline float FXManager::Object::GetLength() const // 0x6DCDF7
{
    mangled_assert("?GetLength@Object@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCDF7(this);
    return __result;
}

_extern bool _sub_6E6412(FXManager::Object const *const);
_inline bool FXManager::Object::GetVisible() const // 0x6E6412
{
    mangled_assert("?GetVisible@Object@FXManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6E6412(this);
    return __result;
}

_extern float _sub_6DCDE4(FXManager::Object const *const);
_inline float FXManager::Object::GetCullingRadius() const // 0x6DCDE4
{
    mangled_assert("?GetCullingRadius@Object@FXManager@@QBEMXZ");
    todo("implement");
    float __result = _sub_6DCDE4(this);
    return __result;
}

_extern bool _sub_6E630C(FXManager::Object const *const);
_inline bool FXManager::Object::GetStop() const // 0x6E630C
{
    mangled_assert("?GetStop@Object@FXManager@@QBE_NXZ");
    todo("implement");
    bool __result = _sub_6E630C(this);
    return __result;
}

_extern float _sub_6DCDF1(FXManager::Object const *const);
_inline float FXManager::Object::GetGravwellStrength() const // 0x6DCDF1
{
    mangled_assert("?GetGravwellStrength@Object@FXManager@@UBEMXZ");
    todo("implement");
    float __result = _sub_6DCDF1(this);
    return __result;
}

_extern bool _sub_6DCE0D(FXManager::Object const *const, vector3 &);
_inline bool FXManager::Object::GetOffset(vector3 &) const // 0x6DCE0D
{
    mangled_assert("?GetOffset@Object@FXManager@@UBE_NAAVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6DCE0D(this, arg);
    return __result;
}

_extern bool _sub_6DCDDF(FXManager::Object const *const, vector4 &);
_inline bool FXManager::Object::GetColour(vector4 &) const // 0x6DCDDF
{
    mangled_assert("?GetColour@Object@FXManager@@UBE_NAAVvector4@@@Z");
    todo("implement");
    bool __result = _sub_6DCDDF(this, arg);
    return __result;
}

_extern float _sub_6DCDF4(FXManager::Object const *const);
_inline float FXManager::Object::GetHeight() const // 0x6DCDF4
{
    mangled_assert("?GetHeight@Object@FXManager@@UBEMXZ");
    todo("implement");
    float __result = _sub_6DCDF4(this);
    return __result;
}

_extern bool _sub_6DE2A7(FXManager::Object *const, float);
_inline bool FXManager::Object::SetHeight(float) // 0x6DE2A7
{
    mangled_assert("?SetHeight@Object@FXManager@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6DE2A7(this, arg);
    return __result;
}

_extern bool _sub_6DE2E7(FXManager::Object *const, vector3 const &);
_inline bool FXManager::Object::SetOffset(vector3 const &) // 0x6DE2E7
{
    mangled_assert("?SetOffset@Object@FXManager@@UAE_NABVvector3@@@Z");
    todo("implement");
    bool __result = _sub_6DE2E7(this, arg);
    return __result;
}

_extern bool _sub_6DE280(FXManager::Object *const, float);
_inline bool FXManager::Object::SetFadeT(float) // 0x6DE280
{
    mangled_assert("?SetFadeT@Object@FXManager@@UAE_NM@Z");
    todo("implement");
    bool __result = _sub_6DE280(this, arg);
    return __result;
}

_extern FXManager::Handle _sub_6DCE12(FXManager::Object const *const);
_inline FXManager::Handle FXManager::Object::GetParent() const // 0x6DCE12
{
    mangled_assert("?GetParent@Object@FXManager@@QBE?AUHandle@2@XZ");
    todo("implement");
    FXManager::Handle __result = _sub_6DCE12(this);
    return __result;
}

_extern _sub_48558D(FXManager::Handle *const);
_inline FXManager::Handle::Handle() // 0x48558D
{
    mangled_assert("??0Handle@FXManager@@QAE@XZ");
    todo("implement");
    _sub_48558D(this);
}

_extern bool _sub_485643(FXManager::Handle const *const, FXManager::Handle const &);
_inline bool FXManager::Handle::operator==(FXManager::Handle const &) const // 0x485643
{
    mangled_assert("??8Handle@FXManager@@QBE_NABU01@@Z");
    todo("implement");
    bool __result = _sub_485643(this, arg);
    return __result;
}

_extern bool _sub_48565F(FXManager::Handle const *const, FXManager::Handle const &);
_inline bool FXManager::Handle::operator!=(FXManager::Handle const &) const // 0x48565F
{
    mangled_assert("??9Handle@FXManager@@QBE_NABU01@@Z");
    todo("implement");
    bool __result = _sub_48565F(this, arg);
    return __result;
}

/* ---------- private code */

#endif // __FXMANAGER_H__
#endif
