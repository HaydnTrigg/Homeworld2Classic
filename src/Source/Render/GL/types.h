#if 0
#ifndef __TYPES_H__
#define __TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FogParam
{
public:
    FogParam(FogType, float, float, float, vector4 &);
    _inline FogParam();
    FogType m_type; // 0x0
    float m_start; // 0x4
    float m_end; // 0x8
    float m_density; // 0xC
    vector4 m_colour; // 0x10
};
static_assert(sizeof(FogParam) == 32, "Invalid FogParam size");

struct CapChange
{
    __int32 iCap; // 0x0
    bool state; // 0x4
};
static_assert(sizeof(CapChange) == 8, "Invalid CapChange size");

struct CapChanges
{
    CapChange changes[76]; // 0x0
};
static_assert(sizeof(CapChanges) == 608, "Invalid CapChanges size");

struct VertexBufferDescriptor
{
    void *base; // 0x0
    void *vertexBase; // 0x4
    void *normalBase; // 0x8
    void *colourBase; // 0xC
    void *tangentBase; // 0x10
    void *binormalBase; // 0x14
    void *uvBase[4]; // 0x18
    __int32 vertexOffset; // 0x28
    __int32 normalOffset; // 0x2C
    __int32 colourOffset; // 0x30
    __int32 tangentOffset; // 0x34
    __int32 binormalOffset; // 0x38
    __int32 uvOffset[4]; // 0x3C
    __int32 vertexStride; // 0x4C
    __int32 normalStride; // 0x50
    __int32 colourStride; // 0x54
    __int32 uvStride; // 0x58
    __int32 tangentStride; // 0x5C
    __int32 binormalStride; // 0x60
};
static_assert(sizeof(VertexBufferDescriptor) == 100, "Invalid VertexBufferDescriptor size");

struct PixelFormatDescriptor
{
    __int32 colourBits; // 0x0
    __int32 alphaBits; // 0x4
    __int32 depthBits; // 0x8
    __int32 stencilBits; // 0xC
    __int32 accumBits; // 0x10
    bool accelerated; // 0x14
};
static_assert(sizeof(PixelFormatDescriptor) == 24, "Invalid PixelFormatDescriptor size");

struct glCaps
{
    bool depthbuffer; // 0x0
    bool dither; // 0x1
    bool cull; // 0x2
    bool lighting; // 0x3
    bool gouraud; // 0x4
    bool texture[4]; // 0x5
    bool cubeMap[4]; // 0x9
    bool texture3D[4]; // 0xD
    bool blend; // 0x11
    bool alphatest; // 0x12
    bool linesmooth; // 0x13
    bool pointsmooth; // 0x14
    bool polygonsmooth; // 0x15
    bool stencil; // 0x16
    bool normalize; // 0x17
    bool rescaleNormal; // 0x18
    bool colourMaterial; // 0x19
    bool fog; // 0x1A
    bool texgen[4]; // 0x1B
    bool offsetFill; // 0x1F
    bool offsetLine; // 0x20
    bool offsetPoint; // 0x21
    bool registerCombiner; // 0x22
    bool separateSpecular; // 0x23
    bool combineTexture; // 0x24
    bool registerCombiner2; // 0x25
    bool vertexProgram; // 0x26
    bool clipPlane[6]; // 0x27
    bool scissor; // 0x2D
    bool multisample; // 0x2E
    bool fragmentProgram; // 0x2F
    bool fragmentShader; // 0x30
};
static_assert(sizeof(glCaps) == 49, "Invalid glCaps size");

struct glState
{
    vector4 clearColour; // 0x0
    double clearDepth; // 0x10
    unsigned __int32 clearStencil; // 0x18
    MatrixMode matrixMode; // 0x1C
    bool depthWrite; // 0x20
    bool colourWrite[4]; // 0x21
    ComparisonFunc depthFunc; // 0x28
    BlendFunc srcBlend; // 0x2C
    BlendFunc destBlend; // 0x30
    ComparisonFunc alphaFunc; // 0x34
    float alphaRef; // 0x38
    unsigned __int32 activeTextureUnit; // 0x3C
    unsigned __int32 activeClientTextureUnit; // 0x40
    unsigned __int32 numTextureUnits; // 0x44
    TextureTarget textureTarget[4]; // 0x48
    unsigned __int32 glTextureTarget[4]; // 0x58
    unsigned __int32 glSpecificTextureTarget[4]; // 0x68
    TexgenMode texgenMode[4][4]; // 0x78
    TextureMode textureMode[4]; // 0xB8
    unsigned __int32 boundTexture[4]; // 0xC8
    float textureBias[4]; // 0xD8
    float maxTextureBias; // 0xE8
    bool light[8]; // 0xEC
    vector4 vertexColour; // 0xF4
    vector4 matAmbient[2]; // 0x104
    vector4 matDiffuse[2]; // 0x124
    vector4 matSpecular[2]; // 0x144
    float matShininess[2]; // 0x164
    vector4 matEmission[2]; // 0x16C
    MaterialSide matSide; // 0x18C
    bool inList; // 0x190
    PolyfillMode polyFill; // 0x194
    float lineWidth; // 0x198
    float pointSize; // 0x19C
    CullMode cullMode; // 0x1A0
    bool twoSidedLighting; // 0x1A4
    vector4 combineColour[4]; // 0x1A8
    float textureQuality; // 0x1E8
    unsigned __int32 stencilGlobalMask; // 0x1EC
    ComparisonFunc stencilFunc; // 0x1F0
    unsigned __int32 stencilRef; // 0x1F4
    unsigned __int32 stencilMask; // 0x1F8
    StencilOp stencilFail; // 0x1FC
    StencilOp stencilZFail; // 0x200
    StencilOp stencilZPass; // 0x204
    FogParam fog; // 0x208
    __int32 viewX; // 0x228
    __int32 viewY; // 0x22C
    __int32 viewWidth; // 0x230
    __int32 viewHeight; // 0x234
    unsigned __int32 program[2]; // 0x238
    glCaps cap; // 0x240
    _inline glState(); /* compiler_generated() */
};
static_assert(sizeof(glState) == 632, "Invalid glState size");

struct rndTable
{
    bool (*attachToWindow)(unsigned __int32 const &, unsigned __int32 const &, unsigned __int32); // 0x0
    bool (*detachFromWindow)(); // 0x4
    void (*getPixelFormat)(PixelFormatDescriptor *); // 0x8
    std::list<rndloDevice,std::allocator<rndloDevice> > const &(*enumerateDevices)(); // 0xC
    bool (*selectDevice)(unsigned __int32); // 0x10
    bool (*freeDevice)(); // 0x14
    void (*getError)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &); // 0x18
    char const *(*getString)(IdentifierString); // 0x1C
    void (*setClearColour)(vector4 const &); // 0x20
    vector4 const &(*getClearColour)(); // 0x24
    void (*setClearDepth)(float); // 0x28
    float (*getClearDepth)(); // 0x2C
    void (*setClearStencil)(unsigned __int32); // 0x30
    unsigned __int32 (*getClearStencil)(); // 0x34
    void (*clearBuffers)(unsigned __int32); // 0x38
    void (*setVertexColour)(vector4 const &); // 0x3C
    vector4 (*getVertexColour)(); // 0x40
    void (*setViewport)(__int32, __int32, __int32, __int32); // 0x44
    void (*getViewport)(__int32 *, __int32 *, __int32 *, __int32 *); // 0x48
    MatrixMode (*setMatrixMode)(MatrixMode); // 0x4C
    MatrixMode (*getMatrixMode)(); // 0x50
    void (*setIdentity)(); // 0x54
    void (*setMatrix)(matrix4 const &); // 0x58
    void (*getMatrix)(matrix4 &); // 0x5C
    void (*pushMatrix)(); // 0x60
    void (*popMatrix)(); // 0x64
    void (*multMatrix)(matrix4 const &); // 0x68
    void (*multTranslate)(float, float, float); // 0x6C
    void (*multRotation)(float, float, float, float); // 0x70
    void (*multScale)(float, float, float); // 0x74
    void (*genIdentity)(matrix4 &); // 0x78
    void (*genRotation)(matrix4 &, vector3 const &, float); // 0x7C
    void (*genPerspectiveWindow)(matrix4 &, float, float, float, float, vector4 &); // 0x80
    void (*genPerspective)(matrix4 &, float, float, float, float); // 0x84
    void (*genOrthographic)(matrix4 &, float, float, float, float, float, float); // 0x88
    void (*multPerspective)(float, float, float, float); // 0x8C
    void (*multOrthographic)(float, float, float, float, float, float); // 0x90
    void (*multOrthographic2D)(float, float, float, float); // 0x94
    void (*multLookAt)(vector3 const &, vector3 const &, vector3 const &); // 0x98
    void (*genLookAt)(matrix4 &, vector3 const &, vector3 const &, vector3 const &); // 0x9C
    void (*renderPrimitive)(PrimitiveType, __int32, FatVertex const *, unsigned __int32); // 0xA0
    void (*renderIndexedPrimitive)(PrimitiveType, __int32, FatVertex const *, __int32 const *, unsigned __int32); // 0xA4
    bool (*renderVertexArray)(PrimitiveType, __int32); // 0xA8
    bool (*renderIndexedVertexArray)(PrimitiveType, __int32, __int32 const *); // 0xAC
    unsigned __int32 (*createVertexBuffer)(unsigned __int32, __int32); // 0xB0
    bool (*releaseVertexBuffer)(unsigned __int32); // 0xB4
    VertexBufferDescriptor const *(*lockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xB8
    bool (*unlockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xBC
    bool (*applyVertexBuffer)(unsigned __int32, __int32, __int32); // 0xC0
    bool (*applyVertexBufferWithMask)(unsigned __int32, unsigned __int32, __int32, __int32); // 0xC4
    bool (*reapplyVertexBuffer)(unsigned __int32, unsigned __int32); // 0xC8
    bool (*unapplyVertexBuffer)(unsigned __int32); // 0xCC
    bool (*applyVertexStream)(unsigned __int32, void const *, __int32); // 0xD0
    bool (*unapplyVertexStream)(unsigned __int32); // 0xD4
    void (*rawPrimitive)(bool, PrimitiveType); // 0xD8
    void (*rawSvertex)(float, float); // 0xDC
    void (*rawVertexv)(vector3 const &); // 0xE0
    void (*rawNormalv)(vector3 const &); // 0xE4
    void (*rawUVv)(vector2 const &); // 0xE8
    void (*rawMultiUVv)(__int32, vector2 const &); // 0xEC
    void (*rawElement)(__int32); // 0xF0
    __int32 (*genLists)(__int32); // 0xF4
    void (*beginList)(__int32, DisplayListOp); // 0xF8
    void (*endList)(); // 0xFC
    void (*delLists)(__int32, __int32); // 0x100
    void (*setListBase)(__int32); // 0x104
    void (*callList)(__int32); // 0x108
    void (*callLists)(__int32, unsigned char const *); // 0x10C
    void (*resetState)(); // 0x110
    void (*setDefaultState)(); // 0x114
    void (*setDefaultCaps)(); // 0x118
    void (*dumpState)(char const *, _iobuf *); // 0x11C
    void (*captureState)(glState *); // 0x120
    void (*setDumpStateCallback)(void *); // 0x124
    bool (*setCap)(unsigned __int32, bool); // 0x128
    bool (*getCap)(BooleanCap); // 0x12C
    bool (*restoreCaps)(CapChanges *); // 0x130
    bool (*ensureCaps)(BooleanCap const *, CapChanges *); // 0x134
    void (*setDepthWrite)(bool); // 0x138
    bool (*getDepthWrite)(); // 0x13C
    void (*setColourWrite)(bool, bool, bool, bool); // 0x140
    bool (*getColourWrite)(__int32); // 0x144
    void (*setDepthFunc)(ComparisonFunc); // 0x148
    ComparisonFunc (*getDepthFunc)(); // 0x14C
    void (*setSrcBlend)(unsigned __int32); // 0x150
    BlendFunc (*getSrcBlend)(); // 0x154
    void (*setDestBlend)(unsigned __int32); // 0x158
    BlendFunc (*getDestBlend)(); // 0x15C
    void (*setAlphaFunc)(ComparisonFunc); // 0x160
    ComparisonFunc (*getAlphaFunc)(); // 0x164
    void (*setAlphaRef)(float); // 0x168
    float (*getAlphaRef)(); // 0x16C
    bool (*canUse)(BooleanCap, bool); // 0x170
    bool (*isEmulated)(BooleanCap); // 0x174
    void (*setPolyFill)(unsigned __int32); // 0x178
    PolyfillMode (*getPolyFill)(); // 0x17C
    void (*setCullMode)(unsigned __int32); // 0x180
    CullMode (*getCullMode)(); // 0x184
    void (*setLineWidth)(float); // 0x188
    float (*getLineWidth)(); // 0x18C
    void (*setPointSize)(float); // 0x190
    float (*getPointSize)(); // 0x194
    void (*setPolygonOffset)(float, float); // 0x198
    void (*getPolygonOffset)(float *, float *); // 0x19C
    void (*reapplyState)(); // 0x1A0
    void (*setStencilMask)(unsigned __int32); // 0x1A4
    void (*setStencilFunc)(ComparisonFunc, unsigned __int32, unsigned __int32); // 0x1A8
    void (*setStencilOp)(StencilOp, StencilOp, StencilOp); // 0x1AC
    TextureTarget (*setTextureTarget)(TextureTarget); // 0x1B0
    TextureTarget (*getTextureTarget)(); // 0x1B4
    unsigned __int32 (*getNumTextureUnits)(); // 0x1B8
    void (*setTextureUnit)(unsigned __int32); // 0x1BC
    __int32 (*getTextureUnit)(); // 0x1C0
    void (*genTextures)(__int32, unsigned __int32 *); // 0x1C4
    void (*delTextures)(__int32, unsigned __int32 *); // 0x1C8
    void (*bindTexture)(unsigned __int32); // 0x1CC
    void (*bindTextureToTextureUnit)(__int32, unsigned __int32); // 0x1D0
    void (*copyTextureData)(TextureFormat, __int32, __int32, __int32); // 0x1D4
    void (*copySubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32); // 0x1D8
    void (*setTextureData)(TextureFormat, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1DC
    void (*setSubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1E0
    void (*setTextureUnitMode)(unsigned __int32); // 0x1E4
    TextureMode (*getTextureUnitMode)(); // 0x1E8
    void (*setTextureFilter)(TextureFilter, TextureFilter); // 0x1EC
    void (*setTextureWrap)(TextureWrap, TextureWrap, TextureWrap); // 0x1F0
    void (*setTextureAnisotropy)(unsigned __int32); // 0x1F4
    void (*setTextureMaxLevel)(unsigned __int32); // 0x1F8
    void (*setTextureBaseLevel)(unsigned __int32); // 0x1FC
    void (*setTexturePriority)(unsigned __int32, float); // 0x200
    void (*setTexgenMode)(unsigned __int32, TexgenMode); // 0x204
    TexgenMode (*getTexgenMode)(unsigned __int32); // 0x208
    void (*setTexgenPlane)(unsigned __int32, bool, vector4 const &); // 0x20C
    unsigned __int32 (*textureWalk)(unsigned __int32); // 0x210
    float (*setTextureBias)(float); // 0x214
    float (*getTextureBias)(__int32); // 0x218
    float (*getMaxTextureBias)(); // 0x21C
    float (*setTextureQuality)(float); // 0x220
    float (*getTextureQuality)(); // 0x224
    void (*displayFrame)(); // 0x228
    void (*beginFrame)(); // 0x22C
    void (*endFrame)(); // 0x230
    bool (*setLight)(__int32, bool); // 0x234
    bool (*getLight)(__int32); // 0x238
    void (*setLightPosition)(__int32, vector4 const &); // 0x23C
    vector4 (*getLightPosition)(__int32); // 0x240
    void (*setMaterialProperty)(unsigned __int32, vector4 const &); // 0x244
    vector4 (*getMaterialProperty)(MaterialProperty); // 0x248
    void (*setLightProperty)(__int32, MaterialProperty, vector4 const &); // 0x24C
    void (*setLightPropertyf)(__int32, LightProperty, float); // 0x250
    MaterialSide (*setMaterialSide)(MaterialSide); // 0x254
    MaterialSide (*getMaterialSide)(); // 0x258
    bool (*setTwoSidedLighting)(bool); // 0x25C
    bool (*getTwoSidedLighting)(); // 0x260
    void (*getSceneAmbient)(vector4 &); // 0x264
    void (*setSceneAmbient)(vector4 const &); // 0x268
    void (*setFog)(FogParam const &); // 0x26C
    FogParam const &(*getFog)(); // 0x270
    void (*getPixels)(__int32, __int32, __int32, __int32, PixelFormat, __int32, void *); // 0x274
    void (*initializeGlare)(unsigned __int32, unsigned __int32); // 0x278
    void (*finalizeGlare)(); // 0x27C
    void (*renderGlare)(float); // 0x280
    void (*combinerParameteriv)(unsigned __int32, __int32 const *); // 0x284
    void (*combinerParameterfv)(unsigned __int32, float const *); // 0x288
    void (*combinerParameterf)(unsigned __int32, float); // 0x28C
    void (*combinerParameteri)(unsigned __int32, unsigned __int32); // 0x290
    void (*combinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x294
    void (*combinerOutput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool); // 0x298
    void (*finalCombinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x29C
    void (*getCombinerInputParameterfv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, float *); // 0x2A0
    void (*getCombinerInputParameteriv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, __int32 *); // 0x2A4
    void (*getCombinerOutputParameterfv)(CombinerStage, unsigned __int32, CombinerOutputParam, float *); // 0x2A8
    void (*getCombinerOutputParameteriv)(CombinerStage, unsigned __int32, CombinerOutputParam, __int32 *); // 0x2AC
    void (*getFinalCombinerInputParameterfv)(CombinerVariable, CombinerInputParam, float *); // 0x2B0
    void (*getFinalCombinerInputParameteriv)(CombinerVariable, CombinerInputParam, __int32 *); // 0x2B4
    void (*setCombineSource)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x2B8
    void (*setCombineFunction)(unsigned __int32, unsigned __int32, float); // 0x2BC
    void (*disableArrayElement)(unsigned __int32); // 0x2C0
    void (*enableArrayElement)(unsigned __int32); // 0x2C4
    void (*combinerStageParameterfv)(unsigned __int32, unsigned __int32, float const *); // 0x2C8
    void (*getCombinerStageParameterfv)(CombinerStage, CombinerConstColor, float *); // 0x2CC
    bool (*areStatsEnabled)(); // 0x2D0
    __int32 (*getStat)(__int32); // 0x2D4
    void (*clearStat)(__int32); // 0x2D8
    void (*clearAllStats)(); // 0x2DC
    bool (*progamString)(eProgramType, char const *); // 0x2E0
    void (*genPrograms)(unsigned __int32, unsigned __int32 *); // 0x2E4
    void (*bindProgram)(eProgramType, unsigned __int32); // 0x2E8
    void (*deletePrograms)(unsigned __int32, unsigned __int32 const *); // 0x2EC
    bool (*isProgram)(unsigned __int32); // 0x2F0
    void (*setProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F4
    void (*setProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F8
    void (*getProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x2FC
    void (*getProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x300
    void (*getProgramInformation)(eProgramType const, eProgramQuerey const, __int32 *); // 0x304
    bool (*programStringIsNative)(eProgramType, char const *); // 0x308
    void (*vertexAttributePointer)(unsigned __int32, __int32, unsigned __int32, bool, unsigned __int32, void const *); // 0x30C
    void (*enableVertexAttribute)(unsigned __int32); // 0x310
    void (*disableVertexAttribute)(unsigned __int32); // 0x314
    void (*pushAttrib)(unsigned __int32); // 0x318
    void (*popAttrib)(); // 0x31C
    void (*pushClientAttrib)(unsigned __int32); // 0x320
    void (*popClientAttrib)(); // 0x324
    void (*getInteger)(SystemSetting const, __int32 &); // 0x328
    void (*clipPlane)(ClipPlane, float *); // 0x32C
    void (*checkDefaultState)(char const *const, DefaultOpenGLState); // 0x330
    void (*scissor)(__int32, __int32, unsigned __int32, unsigned __int32); // 0x334
    PBuffer *(*createPbuffer)(unsigned __int32 const, unsigned __int32 const, PBufferTexture, unsigned __int32 const, unsigned __int32 const); // 0x338
    void (*destroyPbuffer)(PBuffer *); // 0x33C
    bool (*applyContext)(PBuffer **); // 0x340
    bool (*unapplyContext)(PBuffer *); // 0x344
    void (*bindAsTexture)(PBuffer &, PBufferTexture, bool); // 0x348
    void (*unbindAsTexture)(PBuffer &, PBufferTexture); // 0x34C
    void (*showPBufferDebug)(PBuffer *, PBufferTexture, float, float, float, float); // 0x350
    void (*setVSync)(bool); // 0x354
    void (*setCombineColour)(vector4 const &); // 0x358
    void (*setCombineColourForTextureUnit)(unsigned __int32 const, vector4 const &); // 0x35C
    vector4 (*getCombineColour)(); // 0x360
    void (*fillVertexBufferDescriptor)(unsigned __int32, __int32, __int32 &, __int32 &, VertexBufferDescriptor &); // 0x364
    void (*setVertexBufferDescriptorBase)(VertexBufferDescriptor &, void *); // 0x368
    unsigned __int32 (*createVBO)(); // 0x36C
    void (*deleteVBO)(unsigned __int32); // 0x370
    bool (*isValidVBO)(unsigned __int32); // 0x374
    void (*bindVBO)(unsigned __int32); // 0x378
    void (*setDataVBO)(unsigned __int32, void const *, VertexBufferObjectUsage); // 0x37C
    void (*setSubDataVBO)(unsigned __int32, unsigned __int32, void const *); // 0x380
    void (*getSubDataVBO)(unsigned __int32, unsigned __int32, void *); // 0x384
    void *(*mapVBO)(VertexBufferObjectAccess); // 0x388
    bool (*unMapVBO)(); // 0x38C
    void (*getBufferParameterivVBO)(VertexBufferObjectPName, __int32 *); // 0x390
    void (*getBufferPointervVBO)(VertexBufferObjectPName, void **); // 0x394
    void (*applyVBO)(unsigned __int32, VertexBufferDescriptor const &, __int32, __int32, bool); // 0x398
    void (*reapplyVBO)(unsigned __int32, VertexBufferDescriptor const &); // 0x39C
    char const *(*getFunctionName)(long); // 0x3A0
    float (*getVersion)(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &); // 0x3A4
    bool (*needNewerDriver)(); // 0x3A8
    bool (*workedAroundBadDrivers)(); // 0x3AC
    bool (*disabledEmulatedFeatures)(); // 0x3B0
    bool (*cardIsPCI)(); // 0x3B4
    bool (*meetsMinSpec)(eMinSpec); // 0x3B8
    void (*setGamma)(float); // 0x3BC
    float (*getGamma)(); // 0x3C0
    void (*setCanUse)(BooleanCap, bool); // 0x3C4
};
static_assert(sizeof(rndTable) == 968, "Invalid rndTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FogParam::FogParam() // 0x10003A27
{
    mangled_assert("??0FogParam@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TYPES_H__
/* combined */
#ifndef __TYPES_H__
#define __TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FogParam
{
public:
    _inline FogParam(FogType, float, float, float, vector4 &);
    _inline FogParam();
    FogType m_type; // 0x0
    float m_start; // 0x4
    float m_end; // 0x8
    float m_density; // 0xC
    vector4 m_colour; // 0x10
};
static_assert(sizeof(FogParam) == 32, "Invalid FogParam size");

struct CapChange
{
    __int32 iCap; // 0x0
    bool state; // 0x4
};
static_assert(sizeof(CapChange) == 8, "Invalid CapChange size");

struct CapChanges
{
    CapChange changes[76]; // 0x0
};
static_assert(sizeof(CapChanges) == 608, "Invalid CapChanges size");

struct VertexBufferDescriptor
{
    void *base; // 0x0
    void *vertexBase; // 0x4
    void *normalBase; // 0x8
    void *colourBase; // 0xC
    void *tangentBase; // 0x10
    void *binormalBase; // 0x14
    void *uvBase[4]; // 0x18
    __int32 vertexOffset; // 0x28
    __int32 normalOffset; // 0x2C
    __int32 colourOffset; // 0x30
    __int32 tangentOffset; // 0x34
    __int32 binormalOffset; // 0x38
    __int32 uvOffset[4]; // 0x3C
    __int32 vertexStride; // 0x4C
    __int32 normalStride; // 0x50
    __int32 colourStride; // 0x54
    __int32 uvStride; // 0x58
    __int32 tangentStride; // 0x5C
    __int32 binormalStride; // 0x60
};
static_assert(sizeof(VertexBufferDescriptor) == 100, "Invalid VertexBufferDescriptor size");

struct PixelFormatDescriptor
{
    __int32 colourBits; // 0x0
    __int32 alphaBits; // 0x4
    __int32 depthBits; // 0x8
    __int32 stencilBits; // 0xC
    __int32 accumBits; // 0x10
    bool accelerated; // 0x14
};
static_assert(sizeof(PixelFormatDescriptor) == 24, "Invalid PixelFormatDescriptor size");

struct glCaps
{
    bool depthbuffer; // 0x0
    bool dither; // 0x1
    bool cull; // 0x2
    bool lighting; // 0x3
    bool gouraud; // 0x4
    bool texture[4]; // 0x5
    bool cubeMap[4]; // 0x9
    bool texture3D[4]; // 0xD
    bool blend; // 0x11
    bool alphatest; // 0x12
    bool linesmooth; // 0x13
    bool pointsmooth; // 0x14
    bool polygonsmooth; // 0x15
    bool stencil; // 0x16
    bool normalize; // 0x17
    bool rescaleNormal; // 0x18
    bool colourMaterial; // 0x19
    bool fog; // 0x1A
    bool texgen[4]; // 0x1B
    bool offsetFill; // 0x1F
    bool offsetLine; // 0x20
    bool offsetPoint; // 0x21
    bool registerCombiner; // 0x22
    bool separateSpecular; // 0x23
    bool combineTexture; // 0x24
    bool registerCombiner2; // 0x25
    bool vertexProgram; // 0x26
    bool clipPlane[6]; // 0x27
    bool scissor; // 0x2D
    bool multisample; // 0x2E
    bool fragmentProgram; // 0x2F
    bool fragmentShader; // 0x30
};
static_assert(sizeof(glCaps) == 49, "Invalid glCaps size");

struct glState
{
    vector4 clearColour; // 0x0
    double clearDepth; // 0x10
    unsigned __int32 clearStencil; // 0x18
    MatrixMode matrixMode; // 0x1C
    bool depthWrite; // 0x20
    bool colourWrite[4]; // 0x21
    ComparisonFunc depthFunc; // 0x28
    BlendFunc srcBlend; // 0x2C
    BlendFunc destBlend; // 0x30
    ComparisonFunc alphaFunc; // 0x34
    float alphaRef; // 0x38
    unsigned __int32 activeTextureUnit; // 0x3C
    unsigned __int32 activeClientTextureUnit; // 0x40
    unsigned __int32 numTextureUnits; // 0x44
    TextureTarget textureTarget[4]; // 0x48
    unsigned __int32 glTextureTarget[4]; // 0x58
    unsigned __int32 glSpecificTextureTarget[4]; // 0x68
    TexgenMode texgenMode[4][4]; // 0x78
    TextureMode textureMode[4]; // 0xB8
    unsigned __int32 boundTexture[4]; // 0xC8
    float textureBias[4]; // 0xD8
    float maxTextureBias; // 0xE8
    bool light[8]; // 0xEC
    vector4 vertexColour; // 0xF4
    vector4 matAmbient[2]; // 0x104
    vector4 matDiffuse[2]; // 0x124
    vector4 matSpecular[2]; // 0x144
    float matShininess[2]; // 0x164
    vector4 matEmission[2]; // 0x16C
    MaterialSide matSide; // 0x18C
    bool inList; // 0x190
    PolyfillMode polyFill; // 0x194
    float lineWidth; // 0x198
    float pointSize; // 0x19C
    CullMode cullMode; // 0x1A0
    bool twoSidedLighting; // 0x1A4
    vector4 combineColour[4]; // 0x1A8
    float textureQuality; // 0x1E8
    unsigned __int32 stencilGlobalMask; // 0x1EC
    ComparisonFunc stencilFunc; // 0x1F0
    unsigned __int32 stencilRef; // 0x1F4
    unsigned __int32 stencilMask; // 0x1F8
    StencilOp stencilFail; // 0x1FC
    StencilOp stencilZFail; // 0x200
    StencilOp stencilZPass; // 0x204
    FogParam fog; // 0x208
    __int32 viewX; // 0x228
    __int32 viewY; // 0x22C
    __int32 viewWidth; // 0x230
    __int32 viewHeight; // 0x234
    unsigned __int32 program[2]; // 0x238
    glCaps cap; // 0x240
    glState(); /* compiler_generated() */
};
static_assert(sizeof(glState) == 632, "Invalid glState size");

struct rndTable
{
    bool (*attachToWindow)(unsigned __int32 const &, unsigned __int32 const &, unsigned __int32); // 0x0
    bool (*detachFromWindow)(); // 0x4
    void (*getPixelFormat)(PixelFormatDescriptor *); // 0x8
    std::list<rndloDevice,std::allocator<rndloDevice> > const &(*enumerateDevices)(); // 0xC
    bool (*selectDevice)(unsigned __int32); // 0x10
    bool (*freeDevice)(); // 0x14
    void (*getError)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &); // 0x18
    char const *(*getString)(IdentifierString); // 0x1C
    void (*setClearColour)(vector4 const &); // 0x20
    vector4 const &(*getClearColour)(); // 0x24
    void (*setClearDepth)(float); // 0x28
    float (*getClearDepth)(); // 0x2C
    void (*setClearStencil)(unsigned __int32); // 0x30
    unsigned __int32 (*getClearStencil)(); // 0x34
    void (*clearBuffers)(unsigned __int32); // 0x38
    void (*setVertexColour)(vector4 const &); // 0x3C
    vector4 (*getVertexColour)(); // 0x40
    void (*setViewport)(__int32, __int32, __int32, __int32); // 0x44
    void (*getViewport)(__int32 *, __int32 *, __int32 *, __int32 *); // 0x48
    MatrixMode (*setMatrixMode)(MatrixMode); // 0x4C
    MatrixMode (*getMatrixMode)(); // 0x50
    void (*setIdentity)(); // 0x54
    void (*setMatrix)(matrix4 const &); // 0x58
    void (*getMatrix)(matrix4 &); // 0x5C
    void (*pushMatrix)(); // 0x60
    void (*popMatrix)(); // 0x64
    void (*multMatrix)(matrix4 const &); // 0x68
    void (*multTranslate)(float, float, float); // 0x6C
    void (*multRotation)(float, float, float, float); // 0x70
    void (*multScale)(float, float, float); // 0x74
    void (*genIdentity)(matrix4 &); // 0x78
    void (*genRotation)(matrix4 &, vector3 const &, float); // 0x7C
    void (*genPerspectiveWindow)(matrix4 &, float, float, float, float, vector4 &); // 0x80
    void (*genPerspective)(matrix4 &, float, float, float, float); // 0x84
    void (*genOrthographic)(matrix4 &, float, float, float, float, float, float); // 0x88
    void (*multPerspective)(float, float, float, float); // 0x8C
    void (*multOrthographic)(float, float, float, float, float, float); // 0x90
    void (*multOrthographic2D)(float, float, float, float); // 0x94
    void (*multLookAt)(vector3 const &, vector3 const &, vector3 const &); // 0x98
    void (*genLookAt)(matrix4 &, vector3 const &, vector3 const &, vector3 const &); // 0x9C
    void (*renderPrimitive)(PrimitiveType, __int32, FatVertex const *, unsigned __int32); // 0xA0
    void (*renderIndexedPrimitive)(PrimitiveType, __int32, FatVertex const *, __int32 const *, unsigned __int32); // 0xA4
    bool (*renderVertexArray)(PrimitiveType, __int32); // 0xA8
    bool (*renderIndexedVertexArray)(PrimitiveType, __int32, __int32 const *); // 0xAC
    unsigned __int32 (*createVertexBuffer)(unsigned __int32, __int32); // 0xB0
    bool (*releaseVertexBuffer)(unsigned __int32); // 0xB4
    VertexBufferDescriptor const *(*lockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xB8
    bool (*unlockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xBC
    bool (*applyVertexBuffer)(unsigned __int32, __int32, __int32); // 0xC0
    bool (*applyVertexBufferWithMask)(unsigned __int32, unsigned __int32, __int32, __int32); // 0xC4
    bool (*reapplyVertexBuffer)(unsigned __int32, unsigned __int32); // 0xC8
    bool (*unapplyVertexBuffer)(unsigned __int32); // 0xCC
    bool (*applyVertexStream)(unsigned __int32, void const *, __int32); // 0xD0
    bool (*unapplyVertexStream)(unsigned __int32); // 0xD4
    void (*rawPrimitive)(bool, PrimitiveType); // 0xD8
    void (*rawSvertex)(float, float); // 0xDC
    void (*rawVertexv)(vector3 const &); // 0xE0
    void (*rawNormalv)(vector3 const &); // 0xE4
    void (*rawUVv)(vector2 const &); // 0xE8
    void (*rawMultiUVv)(__int32, vector2 const &); // 0xEC
    void (*rawElement)(__int32); // 0xF0
    __int32 (*genLists)(__int32); // 0xF4
    void (*beginList)(__int32, DisplayListOp); // 0xF8
    void (*endList)(); // 0xFC
    void (*delLists)(__int32, __int32); // 0x100
    void (*setListBase)(__int32); // 0x104
    void (*callList)(__int32); // 0x108
    void (*callLists)(__int32, unsigned char const *); // 0x10C
    void (*resetState)(); // 0x110
    void (*setDefaultState)(); // 0x114
    void (*setDefaultCaps)(); // 0x118
    void (*dumpState)(char const *, _iobuf *); // 0x11C
    void (*captureState)(glState *); // 0x120
    void (*setDumpStateCallback)(void *); // 0x124
    bool (*setCap)(unsigned __int32, bool); // 0x128
    bool (*getCap)(BooleanCap); // 0x12C
    bool (*restoreCaps)(CapChanges *); // 0x130
    bool (*ensureCaps)(BooleanCap const *, CapChanges *); // 0x134
    void (*setDepthWrite)(bool); // 0x138
    bool (*getDepthWrite)(); // 0x13C
    void (*setColourWrite)(bool, bool, bool, bool); // 0x140
    bool (*getColourWrite)(__int32); // 0x144
    void (*setDepthFunc)(ComparisonFunc); // 0x148
    ComparisonFunc (*getDepthFunc)(); // 0x14C
    void (*setSrcBlend)(unsigned __int32); // 0x150
    BlendFunc (*getSrcBlend)(); // 0x154
    void (*setDestBlend)(unsigned __int32); // 0x158
    BlendFunc (*getDestBlend)(); // 0x15C
    void (*setAlphaFunc)(ComparisonFunc); // 0x160
    ComparisonFunc (*getAlphaFunc)(); // 0x164
    void (*setAlphaRef)(float); // 0x168
    float (*getAlphaRef)(); // 0x16C
    bool (*canUse)(BooleanCap, bool); // 0x170
    bool (*isEmulated)(BooleanCap); // 0x174
    void (*setPolyFill)(unsigned __int32); // 0x178
    PolyfillMode (*getPolyFill)(); // 0x17C
    void (*setCullMode)(unsigned __int32); // 0x180
    CullMode (*getCullMode)(); // 0x184
    void (*setLineWidth)(float); // 0x188
    float (*getLineWidth)(); // 0x18C
    void (*setPointSize)(float); // 0x190
    float (*getPointSize)(); // 0x194
    void (*setPolygonOffset)(float, float); // 0x198
    void (*getPolygonOffset)(float *, float *); // 0x19C
    void (*reapplyState)(); // 0x1A0
    void (*setStencilMask)(unsigned __int32); // 0x1A4
    void (*setStencilFunc)(ComparisonFunc, unsigned __int32, unsigned __int32); // 0x1A8
    void (*setStencilOp)(StencilOp, StencilOp, StencilOp); // 0x1AC
    TextureTarget (*setTextureTarget)(TextureTarget); // 0x1B0
    TextureTarget (*getTextureTarget)(); // 0x1B4
    unsigned __int32 (*getNumTextureUnits)(); // 0x1B8
    void (*setTextureUnit)(unsigned __int32); // 0x1BC
    __int32 (*getTextureUnit)(); // 0x1C0
    void (*genTextures)(__int32, unsigned __int32 *); // 0x1C4
    void (*delTextures)(__int32, unsigned __int32 *); // 0x1C8
    void (*bindTexture)(unsigned __int32); // 0x1CC
    void (*bindTextureToTextureUnit)(__int32, unsigned __int32); // 0x1D0
    void (*copyTextureData)(TextureFormat, __int32, __int32, __int32); // 0x1D4
    void (*copySubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32); // 0x1D8
    void (*setTextureData)(TextureFormat, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1DC
    void (*setSubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1E0
    void (*setTextureUnitMode)(unsigned __int32); // 0x1E4
    TextureMode (*getTextureUnitMode)(); // 0x1E8
    void (*setTextureFilter)(TextureFilter, TextureFilter); // 0x1EC
    void (*setTextureWrap)(TextureWrap, TextureWrap, TextureWrap); // 0x1F0
    void (*setTextureAnisotropy)(unsigned __int32); // 0x1F4
    void (*setTextureMaxLevel)(unsigned __int32); // 0x1F8
    void (*setTextureBaseLevel)(unsigned __int32); // 0x1FC
    void (*setTexturePriority)(unsigned __int32, float); // 0x200
    void (*setTexgenMode)(unsigned __int32, TexgenMode); // 0x204
    TexgenMode (*getTexgenMode)(unsigned __int32); // 0x208
    void (*setTexgenPlane)(unsigned __int32, bool, vector4 const &); // 0x20C
    unsigned __int32 (*textureWalk)(unsigned __int32); // 0x210
    float (*setTextureBias)(float); // 0x214
    float (*getTextureBias)(__int32); // 0x218
    float (*getMaxTextureBias)(); // 0x21C
    float (*setTextureQuality)(float); // 0x220
    float (*getTextureQuality)(); // 0x224
    void (*displayFrame)(); // 0x228
    void (*beginFrame)(); // 0x22C
    void (*endFrame)(); // 0x230
    bool (*setLight)(__int32, bool); // 0x234
    bool (*getLight)(__int32); // 0x238
    void (*setLightPosition)(__int32, vector4 const &); // 0x23C
    vector4 (*getLightPosition)(__int32); // 0x240
    void (*setMaterialProperty)(unsigned __int32, vector4 const &); // 0x244
    vector4 (*getMaterialProperty)(MaterialProperty); // 0x248
    void (*setLightProperty)(__int32, MaterialProperty, vector4 const &); // 0x24C
    void (*setLightPropertyf)(__int32, LightProperty, float); // 0x250
    MaterialSide (*setMaterialSide)(MaterialSide); // 0x254
    MaterialSide (*getMaterialSide)(); // 0x258
    bool (*setTwoSidedLighting)(bool); // 0x25C
    bool (*getTwoSidedLighting)(); // 0x260
    void (*getSceneAmbient)(vector4 &); // 0x264
    void (*setSceneAmbient)(vector4 const &); // 0x268
    void (*setFog)(FogParam const &); // 0x26C
    FogParam const &(*getFog)(); // 0x270
    void (*getPixels)(__int32, __int32, __int32, __int32, PixelFormat, __int32, void *); // 0x274
    void (*initializeGlare)(unsigned __int32, unsigned __int32); // 0x278
    void (*finalizeGlare)(); // 0x27C
    void (*renderGlare)(float); // 0x280
    void (*combinerParameteriv)(unsigned __int32, __int32 const *); // 0x284
    void (*combinerParameterfv)(unsigned __int32, float const *); // 0x288
    void (*combinerParameterf)(unsigned __int32, float); // 0x28C
    void (*combinerParameteri)(unsigned __int32, unsigned __int32); // 0x290
    void (*combinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x294
    void (*combinerOutput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool); // 0x298
    void (*finalCombinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x29C
    void (*getCombinerInputParameterfv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, float *); // 0x2A0
    void (*getCombinerInputParameteriv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, __int32 *); // 0x2A4
    void (*getCombinerOutputParameterfv)(CombinerStage, unsigned __int32, CombinerOutputParam, float *); // 0x2A8
    void (*getCombinerOutputParameteriv)(CombinerStage, unsigned __int32, CombinerOutputParam, __int32 *); // 0x2AC
    void (*getFinalCombinerInputParameterfv)(CombinerVariable, CombinerInputParam, float *); // 0x2B0
    void (*getFinalCombinerInputParameteriv)(CombinerVariable, CombinerInputParam, __int32 *); // 0x2B4
    void (*setCombineSource)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x2B8
    void (*setCombineFunction)(unsigned __int32, unsigned __int32, float); // 0x2BC
    void (*disableArrayElement)(unsigned __int32); // 0x2C0
    void (*enableArrayElement)(unsigned __int32); // 0x2C4
    void (*combinerStageParameterfv)(unsigned __int32, unsigned __int32, float const *); // 0x2C8
    void (*getCombinerStageParameterfv)(CombinerStage, CombinerConstColor, float *); // 0x2CC
    bool (*areStatsEnabled)(); // 0x2D0
    __int32 (*getStat)(__int32); // 0x2D4
    void (*clearStat)(__int32); // 0x2D8
    void (*clearAllStats)(); // 0x2DC
    bool (*progamString)(eProgramType, char const *); // 0x2E0
    void (*genPrograms)(unsigned __int32, unsigned __int32 *); // 0x2E4
    void (*bindProgram)(eProgramType, unsigned __int32); // 0x2E8
    void (*deletePrograms)(unsigned __int32, unsigned __int32 const *); // 0x2EC
    bool (*isProgram)(unsigned __int32); // 0x2F0
    void (*setProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F4
    void (*setProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F8
    void (*getProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x2FC
    void (*getProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x300
    void (*getProgramInformation)(eProgramType const, eProgramQuerey const, __int32 *); // 0x304
    bool (*programStringIsNative)(eProgramType, char const *); // 0x308
    void (*vertexAttributePointer)(unsigned __int32, __int32, unsigned __int32, bool, unsigned __int32, void const *); // 0x30C
    void (*enableVertexAttribute)(unsigned __int32); // 0x310
    void (*disableVertexAttribute)(unsigned __int32); // 0x314
    void (*pushAttrib)(unsigned __int32); // 0x318
    void (*popAttrib)(); // 0x31C
    void (*pushClientAttrib)(unsigned __int32); // 0x320
    void (*popClientAttrib)(); // 0x324
    void (*getInteger)(SystemSetting const, __int32 &); // 0x328
    void (*clipPlane)(ClipPlane, float *); // 0x32C
    void (*checkDefaultState)(char const *const, DefaultOpenGLState); // 0x330
    void (*scissor)(__int32, __int32, unsigned __int32, unsigned __int32); // 0x334
    PBuffer *(*createPbuffer)(unsigned __int32 const, unsigned __int32 const, PBufferTexture, unsigned __int32 const, unsigned __int32 const); // 0x338
    void (*destroyPbuffer)(PBuffer *); // 0x33C
    bool (*applyContext)(PBuffer **); // 0x340
    bool (*unapplyContext)(PBuffer *); // 0x344
    void (*bindAsTexture)(PBuffer &, PBufferTexture, bool); // 0x348
    void (*unbindAsTexture)(PBuffer &, PBufferTexture); // 0x34C
    void (*showPBufferDebug)(PBuffer *, PBufferTexture, float, float, float, float); // 0x350
    void (*setVSync)(bool); // 0x354
    void (*setCombineColour)(vector4 const &); // 0x358
    void (*setCombineColourForTextureUnit)(unsigned __int32 const, vector4 const &); // 0x35C
    vector4 (*getCombineColour)(); // 0x360
    void (*fillVertexBufferDescriptor)(unsigned __int32, __int32, __int32 &, __int32 &, VertexBufferDescriptor &); // 0x364
    void (*setVertexBufferDescriptorBase)(VertexBufferDescriptor &, void *); // 0x368
    unsigned __int32 (*createVBO)(); // 0x36C
    void (*deleteVBO)(unsigned __int32); // 0x370
    bool (*isValidVBO)(unsigned __int32); // 0x374
    void (*bindVBO)(unsigned __int32); // 0x378
    void (*setDataVBO)(unsigned __int32, void const *, VertexBufferObjectUsage); // 0x37C
    void (*setSubDataVBO)(unsigned __int32, unsigned __int32, void const *); // 0x380
    void (*getSubDataVBO)(unsigned __int32, unsigned __int32, void *); // 0x384
    void *(*mapVBO)(VertexBufferObjectAccess); // 0x388
    bool (*unMapVBO)(); // 0x38C
    void (*getBufferParameterivVBO)(VertexBufferObjectPName, __int32 *); // 0x390
    void (*getBufferPointervVBO)(VertexBufferObjectPName, void **); // 0x394
    void (*applyVBO)(unsigned __int32, VertexBufferDescriptor const &, __int32, __int32, bool); // 0x398
    void (*reapplyVBO)(unsigned __int32, VertexBufferDescriptor const &); // 0x39C
    char const *(*getFunctionName)(long); // 0x3A0
    float (*getVersion)(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &); // 0x3A4
    bool (*needNewerDriver)(); // 0x3A8
    bool (*workedAroundBadDrivers)(); // 0x3AC
    bool (*disabledEmulatedFeatures)(); // 0x3B0
    bool (*cardIsPCI)(); // 0x3B4
    bool (*meetsMinSpec)(eMinSpec); // 0x3B8
    void (*setGamma)(float); // 0x3BC
    float (*getGamma)(); // 0x3C0
    void (*setCanUse)(BooleanCap, bool); // 0x3C4
};
static_assert(sizeof(rndTable) == 968, "Invalid rndTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FogParam::FogParam() // 0x5EE2D9
{
    mangled_assert("??0FogParam@@QAE@XZ");
    todo("implement");
}

_inline FogParam::FogParam(FogType, float, float, float, vector4 &) // 0x5EE29F
{
    mangled_assert("??0FogParam@@QAE@W4FogType@@MMMAAVvector4@@@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __TYPES_H__
/* combined */
#ifndef __TYPES_H__
#define __TYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class FogParam
{
public:
    FogParam(FogType, float, float, float, vector4 &);
    _inline FogParam();
    FogType m_type; // 0x0
    float m_start; // 0x4
    float m_end; // 0x8
    float m_density; // 0xC
    vector4 m_colour; // 0x10
};
static_assert(sizeof(FogParam) == 32, "Invalid FogParam size");

struct CapChange
{
    __int32 iCap; // 0x0
    bool state; // 0x4
};
static_assert(sizeof(CapChange) == 8, "Invalid CapChange size");

struct CapChanges
{
    CapChange changes[76]; // 0x0
};
static_assert(sizeof(CapChanges) == 608, "Invalid CapChanges size");

struct VertexBufferDescriptor
{
    void *base; // 0x0
    void *vertexBase; // 0x4
    void *normalBase; // 0x8
    void *colourBase; // 0xC
    void *tangentBase; // 0x10
    void *binormalBase; // 0x14
    void *uvBase[4]; // 0x18
    __int32 vertexOffset; // 0x28
    __int32 normalOffset; // 0x2C
    __int32 colourOffset; // 0x30
    __int32 tangentOffset; // 0x34
    __int32 binormalOffset; // 0x38
    __int32 uvOffset[4]; // 0x3C
    __int32 vertexStride; // 0x4C
    __int32 normalStride; // 0x50
    __int32 colourStride; // 0x54
    __int32 uvStride; // 0x58
    __int32 tangentStride; // 0x5C
    __int32 binormalStride; // 0x60
};
static_assert(sizeof(VertexBufferDescriptor) == 100, "Invalid VertexBufferDescriptor size");

struct PixelFormatDescriptor
{
    __int32 colourBits; // 0x0
    __int32 alphaBits; // 0x4
    __int32 depthBits; // 0x8
    __int32 stencilBits; // 0xC
    __int32 accumBits; // 0x10
    bool accelerated; // 0x14
};
static_assert(sizeof(PixelFormatDescriptor) == 24, "Invalid PixelFormatDescriptor size");

struct glCaps
{
    bool depthbuffer; // 0x0
    bool dither; // 0x1
    bool cull; // 0x2
    bool lighting; // 0x3
    bool gouraud; // 0x4
    bool texture[4]; // 0x5
    bool cubeMap[4]; // 0x9
    bool texture3D[4]; // 0xD
    bool blend; // 0x11
    bool alphatest; // 0x12
    bool linesmooth; // 0x13
    bool pointsmooth; // 0x14
    bool polygonsmooth; // 0x15
    bool stencil; // 0x16
    bool normalize; // 0x17
    bool rescaleNormal; // 0x18
    bool colourMaterial; // 0x19
    bool fog; // 0x1A
    bool texgen[4]; // 0x1B
    bool offsetFill; // 0x1F
    bool offsetLine; // 0x20
    bool offsetPoint; // 0x21
    bool registerCombiner; // 0x22
    bool separateSpecular; // 0x23
    bool combineTexture; // 0x24
    bool registerCombiner2; // 0x25
    bool vertexProgram; // 0x26
    bool clipPlane[6]; // 0x27
    bool scissor; // 0x2D
    bool multisample; // 0x2E
    bool fragmentProgram; // 0x2F
    bool fragmentShader; // 0x30
};
static_assert(sizeof(glCaps) == 49, "Invalid glCaps size");

struct glState
{
    vector4 clearColour; // 0x0
    double clearDepth; // 0x10
    unsigned __int32 clearStencil; // 0x18
    MatrixMode matrixMode; // 0x1C
    bool depthWrite; // 0x20
    bool colourWrite[4]; // 0x21
    ComparisonFunc depthFunc; // 0x28
    BlendFunc srcBlend; // 0x2C
    BlendFunc destBlend; // 0x30
    ComparisonFunc alphaFunc; // 0x34
    float alphaRef; // 0x38
    unsigned __int32 activeTextureUnit; // 0x3C
    unsigned __int32 activeClientTextureUnit; // 0x40
    unsigned __int32 numTextureUnits; // 0x44
    TextureTarget textureTarget[4]; // 0x48
    unsigned __int32 glTextureTarget[4]; // 0x58
    unsigned __int32 glSpecificTextureTarget[4]; // 0x68
    TexgenMode texgenMode[4][4]; // 0x78
    TextureMode textureMode[4]; // 0xB8
    unsigned __int32 boundTexture[4]; // 0xC8
    float textureBias[4]; // 0xD8
    float maxTextureBias; // 0xE8
    bool light[8]; // 0xEC
    vector4 vertexColour; // 0xF4
    vector4 matAmbient[2]; // 0x104
    vector4 matDiffuse[2]; // 0x124
    vector4 matSpecular[2]; // 0x144
    float matShininess[2]; // 0x164
    vector4 matEmission[2]; // 0x16C
    MaterialSide matSide; // 0x18C
    bool inList; // 0x190
    PolyfillMode polyFill; // 0x194
    float lineWidth; // 0x198
    float pointSize; // 0x19C
    CullMode cullMode; // 0x1A0
    bool twoSidedLighting; // 0x1A4
    vector4 combineColour[4]; // 0x1A8
    float textureQuality; // 0x1E8
    unsigned __int32 stencilGlobalMask; // 0x1EC
    ComparisonFunc stencilFunc; // 0x1F0
    unsigned __int32 stencilRef; // 0x1F4
    unsigned __int32 stencilMask; // 0x1F8
    StencilOp stencilFail; // 0x1FC
    StencilOp stencilZFail; // 0x200
    StencilOp stencilZPass; // 0x204
    FogParam fog; // 0x208
    __int32 viewX; // 0x228
    __int32 viewY; // 0x22C
    __int32 viewWidth; // 0x230
    __int32 viewHeight; // 0x234
    unsigned __int32 program[2]; // 0x238
    glCaps cap; // 0x240
    _inline glState(); /* compiler_generated() */
};
static_assert(sizeof(glState) == 632, "Invalid glState size");

struct rndTable
{
    bool (*attachToWindow)(unsigned __int32 const &, unsigned __int32 const &, unsigned __int32); // 0x0
    bool (*detachFromWindow)(); // 0x4
    void (*getPixelFormat)(PixelFormatDescriptor *); // 0x8
    std::list<rndloDevice,std::allocator<rndloDevice> > const &(*enumerateDevices)(); // 0xC
    bool (*selectDevice)(unsigned __int32); // 0x10
    bool (*freeDevice)(); // 0x14
    void (*getError)(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &); // 0x18
    char const *(*getString)(IdentifierString); // 0x1C
    void (*setClearColour)(vector4 const &); // 0x20
    vector4 const &(*getClearColour)(); // 0x24
    void (*setClearDepth)(float); // 0x28
    float (*getClearDepth)(); // 0x2C
    void (*setClearStencil)(unsigned __int32); // 0x30
    unsigned __int32 (*getClearStencil)(); // 0x34
    void (*clearBuffers)(unsigned __int32); // 0x38
    void (*setVertexColour)(vector4 const &); // 0x3C
    vector4 (*getVertexColour)(); // 0x40
    void (*setViewport)(__int32, __int32, __int32, __int32); // 0x44
    void (*getViewport)(__int32 *, __int32 *, __int32 *, __int32 *); // 0x48
    MatrixMode (*setMatrixMode)(MatrixMode); // 0x4C
    MatrixMode (*getMatrixMode)(); // 0x50
    void (*setIdentity)(); // 0x54
    void (*setMatrix)(matrix4 const &); // 0x58
    void (*getMatrix)(matrix4 &); // 0x5C
    void (*pushMatrix)(); // 0x60
    void (*popMatrix)(); // 0x64
    void (*multMatrix)(matrix4 const &); // 0x68
    void (*multTranslate)(float, float, float); // 0x6C
    void (*multRotation)(float, float, float, float); // 0x70
    void (*multScale)(float, float, float); // 0x74
    void (*genIdentity)(matrix4 &); // 0x78
    void (*genRotation)(matrix4 &, vector3 const &, float); // 0x7C
    void (*genPerspectiveWindow)(matrix4 &, float, float, float, float, vector4 &); // 0x80
    void (*genPerspective)(matrix4 &, float, float, float, float); // 0x84
    void (*genOrthographic)(matrix4 &, float, float, float, float, float, float); // 0x88
    void (*multPerspective)(float, float, float, float); // 0x8C
    void (*multOrthographic)(float, float, float, float, float, float); // 0x90
    void (*multOrthographic2D)(float, float, float, float); // 0x94
    void (*multLookAt)(vector3 const &, vector3 const &, vector3 const &); // 0x98
    void (*genLookAt)(matrix4 &, vector3 const &, vector3 const &, vector3 const &); // 0x9C
    void (*renderPrimitive)(PrimitiveType, __int32, FatVertex const *, unsigned __int32); // 0xA0
    void (*renderIndexedPrimitive)(PrimitiveType, __int32, FatVertex const *, __int32 const *, unsigned __int32); // 0xA4
    bool (*renderVertexArray)(PrimitiveType, __int32); // 0xA8
    bool (*renderIndexedVertexArray)(PrimitiveType, __int32, __int32 const *); // 0xAC
    unsigned __int32 (*createVertexBuffer)(unsigned __int32, __int32); // 0xB0
    bool (*releaseVertexBuffer)(unsigned __int32); // 0xB4
    VertexBufferDescriptor const *(*lockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xB8
    bool (*unlockVertexBuffer)(unsigned __int32, __int32, __int32); // 0xBC
    bool (*applyVertexBuffer)(unsigned __int32, __int32, __int32); // 0xC0
    bool (*applyVertexBufferWithMask)(unsigned __int32, unsigned __int32, __int32, __int32); // 0xC4
    bool (*reapplyVertexBuffer)(unsigned __int32, unsigned __int32); // 0xC8
    bool (*unapplyVertexBuffer)(unsigned __int32); // 0xCC
    bool (*applyVertexStream)(unsigned __int32, void const *, __int32); // 0xD0
    bool (*unapplyVertexStream)(unsigned __int32); // 0xD4
    void (*rawPrimitive)(bool, PrimitiveType); // 0xD8
    void (*rawSvertex)(float, float); // 0xDC
    void (*rawVertexv)(vector3 const &); // 0xE0
    void (*rawNormalv)(vector3 const &); // 0xE4
    void (*rawUVv)(vector2 const &); // 0xE8
    void (*rawMultiUVv)(__int32, vector2 const &); // 0xEC
    void (*rawElement)(__int32); // 0xF0
    __int32 (*genLists)(__int32); // 0xF4
    void (*beginList)(__int32, DisplayListOp); // 0xF8
    void (*endList)(); // 0xFC
    void (*delLists)(__int32, __int32); // 0x100
    void (*setListBase)(__int32); // 0x104
    void (*callList)(__int32); // 0x108
    void (*callLists)(__int32, unsigned char const *); // 0x10C
    void (*resetState)(); // 0x110
    void (*setDefaultState)(); // 0x114
    void (*setDefaultCaps)(); // 0x118
    void (*dumpState)(char const *, _iobuf *); // 0x11C
    void (*captureState)(glState *); // 0x120
    void (*setDumpStateCallback)(void *); // 0x124
    bool (*setCap)(unsigned __int32, bool); // 0x128
    bool (*getCap)(BooleanCap); // 0x12C
    bool (*restoreCaps)(CapChanges *); // 0x130
    bool (*ensureCaps)(BooleanCap const *, CapChanges *); // 0x134
    void (*setDepthWrite)(bool); // 0x138
    bool (*getDepthWrite)(); // 0x13C
    void (*setColourWrite)(bool, bool, bool, bool); // 0x140
    bool (*getColourWrite)(__int32); // 0x144
    void (*setDepthFunc)(ComparisonFunc); // 0x148
    ComparisonFunc (*getDepthFunc)(); // 0x14C
    void (*setSrcBlend)(unsigned __int32); // 0x150
    BlendFunc (*getSrcBlend)(); // 0x154
    void (*setDestBlend)(unsigned __int32); // 0x158
    BlendFunc (*getDestBlend)(); // 0x15C
    void (*setAlphaFunc)(ComparisonFunc); // 0x160
    ComparisonFunc (*getAlphaFunc)(); // 0x164
    void (*setAlphaRef)(float); // 0x168
    float (*getAlphaRef)(); // 0x16C
    bool (*canUse)(BooleanCap, bool); // 0x170
    bool (*isEmulated)(BooleanCap); // 0x174
    void (*setPolyFill)(unsigned __int32); // 0x178
    PolyfillMode (*getPolyFill)(); // 0x17C
    void (*setCullMode)(unsigned __int32); // 0x180
    CullMode (*getCullMode)(); // 0x184
    void (*setLineWidth)(float); // 0x188
    float (*getLineWidth)(); // 0x18C
    void (*setPointSize)(float); // 0x190
    float (*getPointSize)(); // 0x194
    void (*setPolygonOffset)(float, float); // 0x198
    void (*getPolygonOffset)(float *, float *); // 0x19C
    void (*reapplyState)(); // 0x1A0
    void (*setStencilMask)(unsigned __int32); // 0x1A4
    void (*setStencilFunc)(ComparisonFunc, unsigned __int32, unsigned __int32); // 0x1A8
    void (*setStencilOp)(StencilOp, StencilOp, StencilOp); // 0x1AC
    TextureTarget (*setTextureTarget)(TextureTarget); // 0x1B0
    TextureTarget (*getTextureTarget)(); // 0x1B4
    unsigned __int32 (*getNumTextureUnits)(); // 0x1B8
    void (*setTextureUnit)(unsigned __int32); // 0x1BC
    __int32 (*getTextureUnit)(); // 0x1C0
    void (*genTextures)(__int32, unsigned __int32 *); // 0x1C4
    void (*delTextures)(__int32, unsigned __int32 *); // 0x1C8
    void (*bindTexture)(unsigned __int32); // 0x1CC
    void (*bindTextureToTextureUnit)(__int32, unsigned __int32); // 0x1D0
    void (*copyTextureData)(TextureFormat, __int32, __int32, __int32); // 0x1D4
    void (*copySubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32); // 0x1D8
    void (*setTextureData)(TextureFormat, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1DC
    void (*setSubTextureData)(TextureFormat, __int32, __int32, __int32, __int32, __int32, __int32, __int32, void const *, unsigned __int32 &); // 0x1E0
    void (*setTextureUnitMode)(unsigned __int32); // 0x1E4
    TextureMode (*getTextureUnitMode)(); // 0x1E8
    void (*setTextureFilter)(TextureFilter, TextureFilter); // 0x1EC
    void (*setTextureWrap)(TextureWrap, TextureWrap, TextureWrap); // 0x1F0
    void (*setTextureAnisotropy)(unsigned __int32); // 0x1F4
    void (*setTextureMaxLevel)(unsigned __int32); // 0x1F8
    void (*setTextureBaseLevel)(unsigned __int32); // 0x1FC
    void (*setTexturePriority)(unsigned __int32, float); // 0x200
    void (*setTexgenMode)(unsigned __int32, TexgenMode); // 0x204
    TexgenMode (*getTexgenMode)(unsigned __int32); // 0x208
    void (*setTexgenPlane)(unsigned __int32, bool, vector4 const &); // 0x20C
    unsigned __int32 (*textureWalk)(unsigned __int32); // 0x210
    float (*setTextureBias)(float); // 0x214
    float (*getTextureBias)(__int32); // 0x218
    float (*getMaxTextureBias)(); // 0x21C
    float (*setTextureQuality)(float); // 0x220
    float (*getTextureQuality)(); // 0x224
    void (*displayFrame)(); // 0x228
    void (*beginFrame)(); // 0x22C
    void (*endFrame)(); // 0x230
    bool (*setLight)(__int32, bool); // 0x234
    bool (*getLight)(__int32); // 0x238
    void (*setLightPosition)(__int32, vector4 const &); // 0x23C
    vector4 (*getLightPosition)(__int32); // 0x240
    void (*setMaterialProperty)(unsigned __int32, vector4 const &); // 0x244
    vector4 (*getMaterialProperty)(MaterialProperty); // 0x248
    void (*setLightProperty)(__int32, MaterialProperty, vector4 const &); // 0x24C
    void (*setLightPropertyf)(__int32, LightProperty, float); // 0x250
    MaterialSide (*setMaterialSide)(MaterialSide); // 0x254
    MaterialSide (*getMaterialSide)(); // 0x258
    bool (*setTwoSidedLighting)(bool); // 0x25C
    bool (*getTwoSidedLighting)(); // 0x260
    void (*getSceneAmbient)(vector4 &); // 0x264
    void (*setSceneAmbient)(vector4 const &); // 0x268
    void (*setFog)(FogParam const &); // 0x26C
    FogParam const &(*getFog)(); // 0x270
    void (*getPixels)(__int32, __int32, __int32, __int32, PixelFormat, __int32, void *); // 0x274
    void (*initializeGlare)(unsigned __int32, unsigned __int32); // 0x278
    void (*finalizeGlare)(); // 0x27C
    void (*renderGlare)(float); // 0x280
    void (*combinerParameteriv)(unsigned __int32, __int32 const *); // 0x284
    void (*combinerParameterfv)(unsigned __int32, float const *); // 0x288
    void (*combinerParameterf)(unsigned __int32, float); // 0x28C
    void (*combinerParameteri)(unsigned __int32, unsigned __int32); // 0x290
    void (*combinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x294
    void (*combinerOutput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32, bool, bool, bool); // 0x298
    void (*finalCombinerInput)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x29C
    void (*getCombinerInputParameterfv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, float *); // 0x2A0
    void (*getCombinerInputParameteriv)(CombinerStage, unsigned __int32, CombinerVariable, CombinerInputParam, __int32 *); // 0x2A4
    void (*getCombinerOutputParameterfv)(CombinerStage, unsigned __int32, CombinerOutputParam, float *); // 0x2A8
    void (*getCombinerOutputParameteriv)(CombinerStage, unsigned __int32, CombinerOutputParam, __int32 *); // 0x2AC
    void (*getFinalCombinerInputParameterfv)(CombinerVariable, CombinerInputParam, float *); // 0x2B0
    void (*getFinalCombinerInputParameteriv)(CombinerVariable, CombinerInputParam, __int32 *); // 0x2B4
    void (*setCombineSource)(unsigned __int32, unsigned __int32, unsigned __int32, unsigned __int32); // 0x2B8
    void (*setCombineFunction)(unsigned __int32, unsigned __int32, float); // 0x2BC
    void (*disableArrayElement)(unsigned __int32); // 0x2C0
    void (*enableArrayElement)(unsigned __int32); // 0x2C4
    void (*combinerStageParameterfv)(unsigned __int32, unsigned __int32, float const *); // 0x2C8
    void (*getCombinerStageParameterfv)(CombinerStage, CombinerConstColor, float *); // 0x2CC
    bool (*areStatsEnabled)(); // 0x2D0
    __int32 (*getStat)(__int32); // 0x2D4
    void (*clearStat)(__int32); // 0x2D8
    void (*clearAllStats)(); // 0x2DC
    bool (*progamString)(eProgramType, char const *); // 0x2E0
    void (*genPrograms)(unsigned __int32, unsigned __int32 *); // 0x2E4
    void (*bindProgram)(eProgramType, unsigned __int32); // 0x2E8
    void (*deletePrograms)(unsigned __int32, unsigned __int32 const *); // 0x2EC
    bool (*isProgram)(unsigned __int32); // 0x2F0
    void (*setProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F4
    void (*setProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 const &); // 0x2F8
    void (*getProgramEnvironmentVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x2FC
    void (*getProgramLocalVar)(eProgramType const, unsigned __int32 const, vector4 &); // 0x300
    void (*getProgramInformation)(eProgramType const, eProgramQuerey const, __int32 *); // 0x304
    bool (*programStringIsNative)(eProgramType, char const *); // 0x308
    void (*vertexAttributePointer)(unsigned __int32, __int32, unsigned __int32, bool, unsigned __int32, void const *); // 0x30C
    void (*enableVertexAttribute)(unsigned __int32); // 0x310
    void (*disableVertexAttribute)(unsigned __int32); // 0x314
    void (*pushAttrib)(unsigned __int32); // 0x318
    void (*popAttrib)(); // 0x31C
    void (*pushClientAttrib)(unsigned __int32); // 0x320
    void (*popClientAttrib)(); // 0x324
    void (*getInteger)(SystemSetting const, __int32 &); // 0x328
    void (*clipPlane)(ClipPlane, float *); // 0x32C
    void (*checkDefaultState)(char const *const, DefaultOpenGLState); // 0x330
    void (*scissor)(__int32, __int32, unsigned __int32, unsigned __int32); // 0x334
    PBuffer *(*createPbuffer)(unsigned __int32 const, unsigned __int32 const, PBufferTexture, unsigned __int32 const, unsigned __int32 const); // 0x338
    void (*destroyPbuffer)(PBuffer *); // 0x33C
    bool (*applyContext)(PBuffer **); // 0x340
    bool (*unapplyContext)(PBuffer *); // 0x344
    void (*bindAsTexture)(PBuffer &, PBufferTexture, bool); // 0x348
    void (*unbindAsTexture)(PBuffer &, PBufferTexture); // 0x34C
    void (*showPBufferDebug)(PBuffer *, PBufferTexture, float, float, float, float); // 0x350
    void (*setVSync)(bool); // 0x354
    void (*setCombineColour)(vector4 const &); // 0x358
    void (*setCombineColourForTextureUnit)(unsigned __int32 const, vector4 const &); // 0x35C
    vector4 (*getCombineColour)(); // 0x360
    void (*fillVertexBufferDescriptor)(unsigned __int32, __int32, __int32 &, __int32 &, VertexBufferDescriptor &); // 0x364
    void (*setVertexBufferDescriptorBase)(VertexBufferDescriptor &, void *); // 0x368
    unsigned __int32 (*createVBO)(); // 0x36C
    void (*deleteVBO)(unsigned __int32); // 0x370
    bool (*isValidVBO)(unsigned __int32); // 0x374
    void (*bindVBO)(unsigned __int32); // 0x378
    void (*setDataVBO)(unsigned __int32, void const *, VertexBufferObjectUsage); // 0x37C
    void (*setSubDataVBO)(unsigned __int32, unsigned __int32, void const *); // 0x380
    void (*getSubDataVBO)(unsigned __int32, unsigned __int32, void *); // 0x384
    void *(*mapVBO)(VertexBufferObjectAccess); // 0x388
    bool (*unMapVBO)(); // 0x38C
    void (*getBufferParameterivVBO)(VertexBufferObjectPName, __int32 *); // 0x390
    void (*getBufferPointervVBO)(VertexBufferObjectPName, void **); // 0x394
    void (*applyVBO)(unsigned __int32, VertexBufferDescriptor const &, __int32, __int32, bool); // 0x398
    void (*reapplyVBO)(unsigned __int32, VertexBufferDescriptor const &); // 0x39C
    char const *(*getFunctionName)(long); // 0x3A0
    float (*getVersion)(unsigned __int32 &, unsigned __int32 &, unsigned __int32 &); // 0x3A4
    bool (*needNewerDriver)(); // 0x3A8
    bool (*workedAroundBadDrivers)(); // 0x3AC
    bool (*disabledEmulatedFeatures)(); // 0x3B0
    bool (*cardIsPCI)(); // 0x3B4
    bool (*meetsMinSpec)(eMinSpec); // 0x3B8
    void (*setGamma)(float); // 0x3BC
    float (*getGamma)(); // 0x3C0
    void (*setCanUse)(BooleanCap, bool); // 0x3C4
};
static_assert(sizeof(rndTable) == 968, "Invalid rndTable size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline FogParam::FogParam() // 0x1008E780
{
    mangled_assert("??0FogParam@@QAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __TYPES_H__
#endif
