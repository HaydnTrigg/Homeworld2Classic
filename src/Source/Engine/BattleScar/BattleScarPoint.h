#if 0
#ifndef __BATTLESCARPOINT_H__
#define __BATTLESCARPOINT_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BattleScarPoint
{
public:
    class Type :
        public BattleScarManager::Type
    {
    public:
        static BattleScarManager::Type *creator(char const *name);
        virtual bool load(LuaConfig &) override;
        virtual void renderBegin() const override;
        virtual void renderEnd() const override;
        virtual void createObject(void *, BattleScarManager::Handle &) override;
        virtual unsigned __int32 objectSize() const override;
        virtual void reloadTextures() override;
        void render(BattleScarPoint::Obj const *) const;
    protected:
        virtual _inline bool healthLimitDamage(float, BattleScarStats const &) const override;
        virtual bool randIgnore() const override;
        virtual bool ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const override;
        virtual void damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) override;
        virtual void damageEnd() override;
        virtual bool onDamage(BattleScarManager::DamageTarget &) override;
    public:
        Type(BattleScarPoint::Type const &); /* compiler_generated() */
    private:
        Type(char const *);
        virtual ~Type() override;
        enum TextureOrientation
        {
            TO_Random = 0,
            TO_ShipAligned,
        };
        enum TextureType
        {
            TT_Default = 0,
            TT_HeavyDamage,
            TT_COUNT,
        };
        struct TextureTypeInfo
        {
            _inline TextureTypeInfo();
            unsigned __int32 m_count; // 0x0
            unsigned __int32 m_startOffset; // 0x4
        };
        static_assert(sizeof(TextureTypeInfo) == 8, "Invalid TextureTypeInfo size");
        bool onDamagePoint(vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &);
        bool ignoreEvent(vector3 const &, vector3 const &, vector3 const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *) const;
        bool assignUVs(vector3 const &, vector3 const &, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, BattleScarManager::Object::History &);
        void eventAbortCleanup();
        bool verifyTexDir(vector3 const &) const;
        void loadTextures(LuaConfig &, __int32);
        void loadTextures_ver1(LuaConfig &);
        void loadTextures_ver2(LuaConfig &, char const *, BattleScarPoint::Type::TextureType, bool);
        void loadTextures_ver2(LuaConfig &);
        void loadFXs(LuaConfig &, __int32);
        void loadFXs_ver2(LuaConfig &);
        void loadFXs_ver3(LuaConfig &);
        float m_radius; // 0x1C
        float m_scarProbability; // 0x20
        float m_shallowDirDotInvNorm; // 0x24
        float m_minScarScarDist2; // 0x28
        BattleScarPoint::Type::TextureOrientation m_textureOrient; // 0x2C
        std::vector<Texture *,std::allocator<Texture *> > m_textures; // 0x30
        std::vector<float,std::allocator<float> > m_texRandRadiusInc; // 0x3C
        BattleScarPoint::Type::TextureTypeInfo m_texTypeInfo[2]; // 0x48
        std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_fxs; // 0x58
        std::vector<float,std::allocator<float> > m_fxRandRadiusInc; // 0x64
        std::vector<enum BattleScarPoint::Type::TextureType,std::allocator<enum BattleScarPoint::Type::TextureType> > m_fxTextureType; // 0x70
        float m_fxProbability; // 0x7C
        BattleScarManager::DamageInfo const *m_eventDmgInfo; // 0x80
        float m_eventTime; // 0x84
        __int32 m_eventMaxTriCount; // 0x88
        long m_eventWeaponID; // 0x8C
        float m_eventRadius; // 0x90
        __int32 m_eventTargetCount; // 0x94
        __int32 m_eventTexID; // 0x98
        vector3 m_eventTexDir; // 0x9C
        vector3 m_eventTexUp; // 0xA8
        vector3 m_eventTexRight; // 0xB4
        float m_eventTexScaleUp; // 0xC0
        float m_eventTexScaleRight; // 0xC4
        __int32 m_eventFxIndex; // 0xC8
        float m_eventFxRadius; // 0xCC
        bool m_bEventAbort; // 0xD0
        __int32 m_eventTriCount; // 0xD4
        BattleScarStats *m_pScarStats; // 0xD8
        std::list<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *> > m_eventTargetScarList; // 0xDC
        std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > m_eventObjects; // 0xE4
        boost::scoped_ptr<BattleScarPoint::Renderer> m_renderer; // 0xF0
        vector3 m_dbLastHitPoint; // 0xF4
    public:
        BattleScarPoint::Type &operator=(BattleScarPoint::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 256, "Invalid Type size");
    class Obj :
        public BattleScarManager::Object
    {
    public:
        virtual void display() const override;
        virtual bool inProximity(vector3 const &, float) const override;
    private:
        void debugDisplay() const;
    public:
        Obj(BattleScarPoint::Obj const &); /* compiler_generated() */
    private:
        Obj(BattleScarManager::Type *, BattleScarManager::Handle &);
        virtual ~Obj() override;
    };
    static_assert(sizeof(Obj) == 184, "Invalid Obj size");
    class Renderer
    {
    public:
        Renderer(BattleScarPoint::Renderer const &); /* compiler_generated() */
        Renderer();
        ~Renderer();
        void renderBegin(std::vector<Texture *,std::allocator<Texture *> > const *);
        void render(BattleScarManager::Object const *);
        void renderEnd();
    private:
        void registerDecal(__int32, matrix4 const &, float, BattleScarManager::Object::Decal const *);
        void renderDecal(matrix4 const &, float, BattleScarManager::Object::Decal const *);
        struct DecalDesc
        {
            BattleScarManager::Object::Decal const *m_pDecal; // 0x0
            matrix4 m_txfm; // 0x4
            float m_opacity; // 0x44
            _inline DecalDesc(); /* compiler_generated() */
        };
        static_assert(sizeof(DecalDesc) == 72, "Invalid DecalDesc size");
        typedef std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > DecalList;
        typedef std::map<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > > DecalMap;
        std::map<int,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarPoint::Renderer::DecalDesc,std::allocator<BattleScarPoint::Renderer::DecalDesc> > > > > m_decalMap; // 0x0
        std::vector<Texture *,std::allocator<Texture *> > const *m_textureList; // 0x8
    public:
        BattleScarPoint::Renderer &operator=(BattleScarPoint::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 12, "Invalid Renderer size");
};
static_assert(sizeof(BattleScarPoint) == 1, "Invalid BattleScarPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_55F366(BattleScarPoint::Type const *const, float, BattleScarStats const &);
_inline bool BattleScarPoint::Type::healthLimitDamage(float, BattleScarStats const &) const // 0x55F366
{
    mangled_assert("?healthLimitDamage@Type@BattleScarPoint@@MBE_NMABVBattleScarStats@@@Z");
    todo("implement");
    bool __result = _sub_55F366(this, arg, arg);
    return __result;
}

_extern _sub_55DA70(BattleScarPoint::Type::TextureTypeInfo *const);
_inline BattleScarPoint::Type::TextureTypeInfo::TextureTypeInfo() // 0x55DA70
{
    mangled_assert("??0TextureTypeInfo@Type@BattleScarPoint@@QAE@XZ");
    todo("implement");
    _sub_55DA70(this);
}

/* ---------- private code */

#endif // __BATTLESCARPOINT_H__
#endif
