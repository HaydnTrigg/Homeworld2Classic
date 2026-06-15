#if 0
#ifndef __MATERIAL_H__
#define __MATERIAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Modifier :
    public Core
{
public:
    virtual void modify(VertexArray *, unsigned __int32 *, bool);
    virtual void modify(Material *, unsigned __int32 *);
    Modifier(Modifier const &); /* compiler_generated() */
    Modifier(); /* compiler_generated() */
    virtual ~Modifier() override; /* compiler_generated() */
    Modifier &operator=(Modifier const &); /* compiler_generated() */
};
static_assert(sizeof(Modifier) == 4, "Invalid Modifier size");

class Material :
    public Core
{
public:
    Material(Material const &);
    Material();
    virtual ~Material() override;
    Material &operator=(Material const &);
    static Material *create();
    enum
    {
        ReplaceModeFlag = (1 << 0),
        ModulateModeFlag = (1 << 1),
        DecalModeFlag = (1 << 2),
        SmoothShadedFlag = (1 << 3),
        BlendModeFlag = (1 << 4),
        RepeatWrapSFlag = (1 << 5),
        ClampWrapSFlag = (1 << 6),
        RepeatWrapTFlag = (1 << 7),
        ClampWrapTFlag = (1 << 8),
        DoubleSidedFlag = (1 << 9),
    };
    __int32 getNumLayers() const;
    void addLayer(Layer *);
    bool remLayer(Layer *);
    bool delLayer(Layer *);
    Layer *getLayer(__int32) const;
    void clearLayers();
    bool apply();
    bool apply(unsigned __int32 &);
    static void setStats(__int32);
    static __int32 getStats();
    void setGouraud(bool);
    bool getGouraud() const;
    void setCull(CullMode);
    CullMode getCull() const;
    void setBlend(BlendFunc, BlendFunc);
    void getBlend(BlendFunc *, BlendFunc *) const;
    BlendFunc getSourceBlend() const;
    BlendFunc getDestBlend() const;
    void setAmbient(vector4 const &);
    void setDiffuse(vector4 const &);
    void setSpecular(vector4 const &);
    void setShininess(float);
    void setEmission(vector4 const &);
    vector4 const &getAmbient() const;
    vector4 const &getDiffuse() const;
    vector4 const &getSpecular() const;
    float getShininess() const;
    vector4 const &getEmission() const;
    void clear();
    enum
    {
        AllowTexture0 = 1, // 0x0001
        AllowTexture1 = 2, // 0x0002
        AllowTexture = 3, // 0x0003
        AllowMaterial = 4, // 0x0004
        AllowModifier = 8, // 0x0008
        AllowAll = -1, // 0xFF
    };
    static unsigned __int32 setOverride(unsigned __int32);
    static unsigned __int32 getOverride();
    static bool addModifier(Modifier *);
    static bool remModifier(Modifier *);
    static bool clearModifiers();
    static bool processModifiers(Material *, unsigned __int32 *);
    static bool suspendModifiers(bool);
    static __int32 getNumModifiers();
private:
    void assign(Material &, Material const &);
    typedef std::vector<Layer *,std::allocator<Layer *> > LayerList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Layer *> > > LayerListI;
    static bool m_suspend;
    bool m_gouraud; // 0x4
    CullMode m_cull; // 0x8
    vector4 m_ambient; // 0xC
    vector4 m_diffuse; // 0x1C
    vector4 m_specular; // 0x2C
    float m_shininess; // 0x3C
    vector4 m_emission; // 0x40
    BlendFunc m_sourceBlend; // 0x50
    BlendFunc m_destBlend; // 0x54
    std::vector<Layer *,std::allocator<Layer *> > m_layerList; // 0x58
};
static_assert(sizeof(Material) == 100, "Invalid Material size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MATERIAL_H__
/* combined */
#ifndef __MATERIAL_H__
#define __MATERIAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Modifier :
    public Core
{
public:
    virtual _inline void modify(VertexArray *, unsigned __int32 *, bool);
    virtual _inline void modify(Material *, unsigned __int32 *);
    _inline Modifier(Modifier const &); /* compiler_generated() */
    _inline Modifier(); /* compiler_generated() */
    virtual _inline ~Modifier() override; /* compiler_generated() */
    _inline Modifier &operator=(Modifier const &); /* compiler_generated() */
};
static_assert(sizeof(Modifier) == 4, "Invalid Modifier size");

class Material :
    public Core
{
public:
    Material(Material const &);
    Material();
    virtual ~Material() override;
    Material &operator=(Material const &);
    static Material *create();
    enum
    {
        ReplaceModeFlag = (1 << 0),
        ModulateModeFlag = (1 << 1),
        DecalModeFlag = (1 << 2),
        SmoothShadedFlag = (1 << 3),
        BlendModeFlag = (1 << 4),
        RepeatWrapSFlag = (1 << 5),
        ClampWrapSFlag = (1 << 6),
        RepeatWrapTFlag = (1 << 7),
        ClampWrapTFlag = (1 << 8),
        DoubleSidedFlag = (1 << 9),
    };
    _inline __int32 getNumLayers() const;
    void addLayer(Layer *);
    bool remLayer(Layer *);
    bool delLayer(Layer *);
    Layer *getLayer(__int32) const;
    void clearLayers();
    bool apply();
    bool apply(unsigned __int32 &);
    static void setStats(__int32 _nSwitches);
    static __int32 getStats();
    void setGouraud(bool);
    bool getGouraud() const;
    void setCull(CullMode);
    CullMode getCull() const;
    void setBlend(BlendFunc, BlendFunc);
    void getBlend(BlendFunc *, BlendFunc *) const;
    _inline BlendFunc getSourceBlend() const;
    _inline BlendFunc getDestBlend() const;
    void setAmbient(vector4 const &);
    void setDiffuse(vector4 const &);
    void setSpecular(vector4 const &);
    void setShininess(float);
    void setEmission(vector4 const &);
    _inline vector4 const &getAmbient() const;
    _inline vector4 const &getDiffuse() const;
    _inline vector4 const &getSpecular() const;
    _inline float getShininess() const;
    _inline vector4 const &getEmission() const;
    void clear();
    enum
    {
        AllowTexture0 = 1, // 0x0001
        AllowTexture1 = 2, // 0x0002
        AllowTexture = 3, // 0x0003
        AllowMaterial = 4, // 0x0004
        AllowModifier = 8, // 0x0008
        AllowAll = -1, // 0xFF
    };
    static unsigned __int32 setOverride(unsigned __int32 passthru);
    static unsigned __int32 getOverride();
    static bool addModifier(Modifier *mod);
    static bool remModifier(Modifier *mod);
    static bool clearModifiers();
    static bool processModifiers(Material *mat, unsigned __int32 *mask);
    static bool suspendModifiers(bool state);
    static __int32 getNumModifiers();
private:
    void assign(Material &, Material const &);
    typedef std::vector<Layer *,std::allocator<Layer *> > LayerList;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Layer *> > > LayerListI;
    static bool m_suspend;
    bool m_gouraud; // 0x4
    CullMode m_cull; // 0x8
    vector4 m_ambient; // 0xC
    vector4 m_diffuse; // 0x1C
    vector4 m_specular; // 0x2C
    float m_shininess; // 0x3C
    vector4 m_emission; // 0x40
    BlendFunc m_sourceBlend; // 0x50
    BlendFunc m_destBlend; // 0x54
    std::vector<Layer *,std::allocator<Layer *> > m_layerList; // 0x58
};
static_assert(sizeof(Material) == 100, "Invalid Material size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline void Modifier::modify(Material *, unsigned __int32 *) // 0x1001A830
{
    mangled_assert("?modify@Modifier@@UAEXPAVMaterial@@PAI@Z");
    todo("implement");
}

_inline void Modifier::modify(VertexArray *, unsigned __int32 *, bool) // 0x1001A840
{
    mangled_assert("?modify@Modifier@@UAEXPAVVertexArray@@PAI_N@Z");
    todo("implement");
}

_inline __int32 Material::getNumLayers() const // 0x10019380
{
    mangled_assert("?getNumLayers@Material@@QBEHXZ");
    todo("implement");
}

_inline BlendFunc Material::getSourceBlend() const // 0x10019470
{
    mangled_assert("?getSourceBlend@Material@@QBE?AW4BlendFunc@@XZ");
    todo("implement");
}

_inline BlendFunc Material::getDestBlend() const // 0x10019210
{
    mangled_assert("?getDestBlend@Material@@QBE?AW4BlendFunc@@XZ");
    todo("implement");
}

_inline vector4 const &Material::getAmbient() const // 0x10019100
{
    mangled_assert("?getAmbient@Material@@QBEABVvector4@@XZ");
    todo("implement");
}

_inline vector4 const &Material::getDiffuse() const // 0x10019220
{
    mangled_assert("?getDiffuse@Material@@QBEABVvector4@@XZ");
    todo("implement");
}

_inline vector4 const &Material::getSpecular() const // 0x10019480
{
    mangled_assert("?getSpecular@Material@@QBEABVvector4@@XZ");
    todo("implement");
}

_inline float Material::getShininess() const // 0x10019460
{
    mangled_assert("?getShininess@Material@@QBEMXZ");
    todo("implement");
}

_inline vector4 const &Material::getEmission() const // 0x10019230
{
    mangled_assert("?getEmission@Material@@QBEABVvector4@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __MATERIAL_H__
#endif
