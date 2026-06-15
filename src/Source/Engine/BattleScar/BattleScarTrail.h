#if 0
#ifndef __BATTLESCARTRAIL_H__
#define __BATTLESCARTRAIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class BattleScarTrail
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
        void render(BattleScarTrail::Obj const *) const;
    protected:
        virtual bool healthLimitDamage(float, BattleScarStats const &) const override;
        virtual bool randIgnore() const override;
        virtual bool ignoreDamage(BattleScarManager::DamageInfo const &, float const, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *, matrix4 const &) const override;
        virtual void damageBegin(BattleScarManager::DamageInfo const &, float, __int32, long, BattleScarStats &) override;
        virtual void damageEnd() override;
        virtual bool onDamage(BattleScarManager::DamageTarget &) override;
    public:
        Type(BattleScarTrail::Type const &); /* compiler_generated() */
    private:
        Type(char const *);
        virtual ~Type() override;
        bool tooCloseToExisting(vector3 const &, std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > const *) const;
        BattleScarTrail::Obj *findTrailToExtend(vector3 const &, BattleScarManager::DamageTarget const &) const;
        bool extendTrail(BattleScarTrail::Obj *, vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &);
        bool newTrail(vector3 const &, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &);
        BattleScarManager::Object::Decal *newDotDecal(BattleScarTrail::Obj *, vector3 const &, __int32, BattleScarManager::DamageTarget &, BattleScarManager::Object::History *);
        BattleScarManager::Object::Decal *newDashDecal(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &);
        bool extendDashDot(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &);
        bool newDashDot(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &);
        bool extendDashDecal(BattleScarTrail::Obj *, BattleScarManager::Object::Decal *, BattleScarManager::Object::Decal const *, vector3 const &, vector3 const &, BattleScarManager::DamageTarget &);
        void insertTrianglesIntoDash(BattleScarTrail::Obj *, std::vector<FatVertex,std::allocator<FatVertex> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > &, std::vector<unsigned short,std::allocator<unsigned short> > const &, BattleScarManager::DamageTarget &) const;
        bool assignDotUVs(BattleScarTrail::TextureTransform const &, std::vector<FatVertex,std::allocator<FatVertex> > &, BattleScarManager::Object::History *);
        bool assignDashUVs(vector3 const &, BattleScarTrail::TextureTransform const &, std::vector<FatVertex,std::allocator<FatVertex> > &);
        bool needNewTexTransform(BattleScarTrail::Obj *, vector3 const &, BattleScarManager::DamageTarget &);
        void eventAbortCleanup();
        float m_radius; // 0x1C
        float m_shallowDirDotInvNorm; // 0x20
        float m_minScarScarDist2; // 0x24
        float m_minScarExtendDist2; // 0x28
        float m_maxScarExtendDist2; // 0x2C
        std::vector<Texture *,std::allocator<Texture *> > m_textures; // 0x30
        std::vector<bool,std::allocator<bool> > m_bMaskList; // 0x3C
        Texture *m_maskTex; // 0x4C
        __int32 m_numDotTextures; // 0x50
        __int32 m_numDashTextures; // 0x54
        std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_fxs; // 0x58
        float m_fxProbability; // 0x64
        std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > m_transitionFXs; // 0x68
        float m_dirChgError; // 0x74
        bool m_bBatchRender; // 0x78
        bool m_bDashOverDot; // 0x79
        float m_dashUScale; // 0x7C
        BattleScarManager::DamageInfo const *m_eventDmgInfo; // 0x80
        float m_eventTime; // 0x84
        long m_eventWeaponID; // 0x88
        __int32 m_eventTargetCount; // 0x8C
        __int32 m_eventDotTexID; // 0x90
        __int32 m_eventDashTexID; // 0x94
        BattleScarTrail::TextureTransform m_eventDotTexTxfm; // 0x98
        BattleScarTrail::TextureTransform m_eventDashTexTxfm; // 0xD0
        bool m_bEventAbort; // 0x108
        BattleScarStats *m_pScarStats; // 0x10C
        std::list<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *,std::allocator<std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > *> > m_eventTargetScarList; // 0x110
        std::vector<BattleScarManager::Handle,std::allocator<BattleScarManager::Handle> > m_eventObjects; // 0x118
        boost::scoped_ptr<BattleScarTrail::Renderer> m_renderer; // 0x124
        vector3 m_dbLastHitPoint; // 0x128
    public:
        BattleScarTrail::Type &operator=(BattleScarTrail::Type const &); /* compiler_generated() */
    };
    static_assert(sizeof(Type) == 308, "Invalid Type size");
    class Obj :
        public BattleScarManager::Object
    {
    public:
        virtual void display() const override;
        virtual bool inProximity(vector3 const &, float) const override;
        virtual bool save(SaveGameData *) const override;
        virtual bool restore(SaveGameData *) override;
        enum DecalType
        {
            DT_StartDot = 1, // 0x0001
            DT_EndDot = 4, // 0x0004
            DT_Dash = 8, // 0x0008
        };
    private:
        void debugDisplay() const;
    public:
        Obj(BattleScarTrail::Obj const &); /* compiler_generated() */
    private:
        Obj(BattleScarManager::Type *, BattleScarManager::Handle &);
        virtual ~Obj() override;
        enum FinalizeCommandType
        {
            FT_None = 0,
            FT_AddDotDecal,
            FT_AddDashDotDecals,
            FT_RepDashDotDecals,
        };
        struct FinalizeCommand
        {
            _inline FinalizeCommand();
            BattleScarTrail::Obj::FinalizeCommandType type; // 0x0
            BattleScarManager::Object::Decal *pDotDecal; // 0x4
            BattleScarManager::Object::Decal *pDashDecal; // 0x8
            BattleScarTrail::TextureTransform lastDashTxfm; // 0xC
            Collision::Sphere boundSphere; // 0x44
        };
        static_assert(sizeof(FinalizeCommand) == 84, "Invalid FinalizeCommand size");
    public:
        _inline bool finalizeCmdIsSet();
        void finalizeCmdClear();
        void finalizeCmdSet(BattleScarTrail::Obj::FinalizeCommand &);
        void finalizeCmdAbort();
        void finalizeCmdCommit();
        _inline BattleScarTrail::TextureTransform const &getLastDashTexTxfm() const;
    private:
        BattleScarTrail::Obj::FinalizeCommand m_finalizeCmd; // 0xB8
        BattleScarTrail::TextureTransform m_lastDashTexTxfm; // 0x10C
    };
    static_assert(sizeof(Obj) == 324, "Invalid Obj size");
    class Renderer
    {
    public:
        Renderer(BattleScarTrail::Renderer const &); /* compiler_generated() */
        Renderer();
        ~Renderer();
        void renderBegin(std::vector<Texture *,std::allocator<Texture *> > const *, std::vector<bool,std::allocator<bool> > const *, Texture *, bool, bool);
        void render(BattleScarManager::Object const *);
        void renderEnd();
    private:
        void registerDecal(__int32, matrix4 const &, float, BattleScarManager::Object::Decal const *);
        void renderDecal(matrix4 const &, float, BattleScarManager::Object::Decal const *);
        void textureBegin(__int32);
        void textureEnd(__int32);
        struct DecalDesc
        {
            BattleScarManager::Object::Decal const *m_pDecal; // 0x0
            matrix4 m_txfm; // 0x4
            float m_opacity; // 0x44
            _inline DecalDesc(); /* compiler_generated() */
        };
        static_assert(sizeof(DecalDesc) == 72, "Invalid DecalDesc size");
        typedef std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > DecalList;
        typedef std::map<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > > DecalMap;
        std::map<int,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> >,std::less<int>,std::allocator<std::pair<int const ,std::vector<BattleScarTrail::Renderer::DecalDesc,std::allocator<BattleScarTrail::Renderer::DecalDesc> > > > > m_decalMap; // 0x0
        std::vector<Texture *,std::allocator<Texture *> > const *m_textureList; // 0x8
        std::vector<bool,std::allocator<bool> > const *m_bMaskList; // 0xC
        Texture *m_maskTex; // 0x10
        bool m_bBatch; // 0x14
        bool m_bDashOverDot; // 0x15
        bool m_bOrigTexture1Cap; // 0x16
    public:
        BattleScarTrail::Renderer &operator=(BattleScarTrail::Renderer const &); /* compiler_generated() */
    };
    static_assert(sizeof(Renderer) == 24, "Invalid Renderer size");
    struct TextureTransform
    {
        vector3 refPoint; // 0x0
        vector3 dir; // 0xC
        vector3 right; // 0x18
        vector3 up; // 0x24
        float rightScale; // 0x30
        float upScale; // 0x34
        _inline TextureTransform(); /* compiler_generated() */
    };
    static_assert(sizeof(TextureTransform) == 56, "Invalid TextureTransform size");
};
static_assert(sizeof(BattleScarTrail) == 1, "Invalid BattleScarTrail size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline BattleScarTrail::Obj::FinalizeCommand::FinalizeCommand() // 0x56287B
{
    mangled_assert("??0FinalizeCommand@Obj@BattleScarTrail@@QAE@XZ");
    todo("implement");
}

_inline bool BattleScarTrail::Obj::finalizeCmdIsSet() // 0x564CBB
{
    mangled_assert("?finalizeCmdIsSet@Obj@BattleScarTrail@@QAE_NXZ");
    todo("implement");
}

_inline BattleScarTrail::TextureTransform const &BattleScarTrail::Obj::getLastDashTexTxfm() const // 0x564FCA
{
    mangled_assert("?getLastDashTexTxfm@Obj@BattleScarTrail@@QBEABUTextureTransform@2@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __BATTLESCARTRAIL_H__
#endif
