#if 0
#ifndef __R_DEFINES_H__
#define __R_DEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum BufferBit
{
    colourBuffer = 1, // 0x0001
    depthBuffer = 2, // 0x0002
    stencilBuffer = 4, // 0x0004
    accumBuffer = 8, // 0x0008
    BufferBitForce32bit = -1, // 0xFF
};

enum MatrixMode
{
    modelviewMatrix = 256, // 0x0100
    projectionMatrix = 257, // 0x0101
    textureMatrix = 258, // 0x0102
    MatrixModeForce32bit = -1, // 0xFF
};

enum PrimitiveType
{
    invalidPrim = 0, // 0x0000
    pointPrim = 512, // 0x0200
    linePrim = 513, // 0x0201
    trianglePrim = 514, // 0x0202
    lineloopPrim = 515, // 0x0203
    linestripPrim = 516, // 0x0204
    trianglefanPrim = 517, // 0x0205
    trianglestripPrim = 518, // 0x0206
    quadPrim = 519, // 0x0207
    quadstripPrim = 520, // 0x0208
    polygonPrim = 521, // 0x0209
    PrimitiveTypeForce32bit = -1, // 0xFF
};

enum BlendFunc
{
    zeroBlend = 768, // 0x0300
    oneBlend = 769, // 0x0301
    destcolourBlend = 770, // 0x0302
    invdestcolourBlend = 771, // 0x0303
    srcalphaBlend = 772, // 0x0304
    invsrcalphaBlend = 773, // 0x0305
    destalphaBlend = 774, // 0x0306
    invdestalphaBlend = 775, // 0x0307
    srccolourBlend = 776, // 0x0308
    invsrccolourBlend = 777, // 0x0309
    noneBlend = 778, // 0x030A
    BlendFuncForce32bit = -1, // 0xFF
};

enum TextureFormat
{
    rgba32 = 1024, // 0x0400
    rgba16 = 1025, // 0x0401
    rgb24 = 1026, // 0x0402
    rgb16 = 1027, // 0x0403
    cdxt1 = 1028, // 0x0404
    cdxt3 = 1029, // 0x0405
    cdxt5 = 1030, // 0x0406
    luminance = 1031, // 0x0407
    alpha = 1032, // 0x0408
    luminanceAlpha = 1033, // 0x0409
    depth32 = 1034, // 0x040A
    depth24 = 1035, // 0x040B
    depth16 = 1036, // 0x040C
    TextureFormatForce32bit = -1, // 0xFF
};

enum TextureMode
{
    replaceMode = 1280, // 0x0500
    modulateMode = 1281, // 0x0501
    blendMode = 1282, // 0x0502
    decalMode = 1283, // 0x0503
    addMode = 1284, // 0x0504
    combineMode = 1285, // 0x0505
    TextureModeForce32bit = -1, // 0xFF
};

enum TextureFilter
{
    pointFilter = 1536, // 0x0600
    linearFilter = 1537, // 0x0601
    pointPointFilter = 1538, // 0x0602
    linearPointFilter = 1539, // 0x0603
    pointLinearFilter = 1540, // 0x0604
    linearLinearFilter = 1541, // 0x0605
    TextureFilterForce32bit = -1, // 0xFF
};

enum TextureWrap
{
    repeatWrap = 1792, // 0x0700
    clampWrap = 1793, // 0x0701
    clampToEdgeWrap = 1794, // 0x0702
    TextureWrapForce32bit = -1, // 0xFF
};

enum BooleanCap
{
    depthbufferCap = 1, // 0x0001
    firstCap = 1, // 0x0001
    ditherCap = 2, // 0x0002
    cullCap = 3, // 0x0003
    lightingCap = 4, // 0x0004
    gouraudCap = 5, // 0x0005
    blendCap = 6, // 0x0006
    alphatestCap = 7, // 0x0007
    texture0Cap = 8, // 0x0008
    texture1Cap = 9, // 0x0009
    texture2Cap = 10, // 0x000A
    texture3Cap = 11, // 0x000B
    lineSmoothCap = 16, // 0x0010
    stencilCap = 17, // 0x0011
    normalizeCap = 18, // 0x0012
    rescaleNormalCap = 19, // 0x0013
    colourMaterialCap = 20, // 0x0014
    cullVertexCap = 21, // 0x0015
    destAlphaCap = 22, // 0x0016
    fogCap = 23, // 0x0017
    textureBiasCap = 24, // 0x0018
    texgenSCap = 25, // 0x0019
    texgenTCap = 26, // 0x001A
    texgenRCap = 27, // 0x001B
    texgenQCap = 28, // 0x001C
    offsetFillCap = 29, // 0x001D
    offsetLineCap = 30, // 0x001E
    offsetPointCap = 31, // 0x001F
    preferFewPrimsCap = 32, // 0x0020 ' '
    cubeMapCap = 33, // 0x0021 '!'
    cube0MapCap = 34, // 0x0022 '"'
    cube1MapCap = 35, // 0x0023 '#'
    cube2MapCap = 36, // 0x0024 '$'
    cube3MapCap = 37, // 0x0025 '%'
    pointSizeCap = 38, // 0x0026 '&'
    lineWidthCap = 39, // 0x0027 '''
    pointSmoothCap = 40, // 0x0028 '('
    polygonSmoothCap = 41, // 0x0029 ')'
    registerCombinerCap = 42, // 0x002A '*'
    dxtcCap = 43, // 0x002B '+'
    separateSpecularCap = 44, // 0x002C ','
    combineCap = 45, // 0x002D '-'
    crossbarCap = 46, // 0x002E '.'
    dot3Cap = 47, // 0x002F '/'
    combine3Cap = 48, // 0x0030 '0'
    routeCap = 49, // 0x0031 '1'
    registerCombiner2Cap = 50, // 0x0032 '2'
    anisotropicCap = 51, // 0x0033 '3'
    vertexProgramCap = 52, // 0x0034 '4'
    clipPlane0Cap = 53, // 0x0035 '5'
    clipPlane1Cap = 54, // 0x0036 '6'
    clipPlane2Cap = 55, // 0x0037 '7'
    clipPlane3Cap = 56, // 0x0038 '8'
    clipPlane4Cap = 57, // 0x0039 '9'
    clipPlane5Cap = 58, // 0x003A ':'
    scissorCap = 59, // 0x003B ';'
    pbufferCap = 60, // 0x003C '<'
    textureShaderCap = 61, // 0x003D '='
    texture3DCap = 62, // 0x003E '>'
    texture3D0Cap = 63, // 0x003F '?'
    texture3D1Cap = 64, // 0x0040 '@'
    texture3D2Cap = 65, // 0x0041 'A'
    texture3D3Cap = 66, // 0x0042 'B'
    mipmapAutoGenCap = 67, // 0x0043 'C'
    shadowBufferCap = 68, // 0x0044 'D'
    renderToTextureCap = 69, // 0x0045 'E'
    renderToDepthTextureCap = 70, // 0x0046 'F'
    multisampleCap = 71, // 0x0047 'G'
    vertexBufferObjectCap = 72, // 0x0048 'H'
    fragmentProgramCap = 73, // 0x0049 'I'
    fragmentShaderCap = 74, // 0x004A 'J'
    stencilClearCap = 75, // 0x004B 'K'
    numCaps = 76, // 0x004C 'L'
    endofCap = 268435455, // 0x0FFFFFFF
    BooleanCapForce32bit = -1, // 0xFF
};

enum FatMask
{
    vertexBit = 1, // 0x0001
    normalBit = 2, // 0x0002
    colourBit = 4, // 0x0004
    texture0Bit = 8, // 0x0008
    texture1Bit = 16, // 0x0010
    texture2Bit = 32, // 0x0020 ' '
    texture3Bit = 64, // 0x0040 '@'
    hvertexBit = 2048, // 0x0800
    svertexBit = 4096, // 0x1000
    tangentBit = 8192, // 0x2000
    binormalBit = 16384, // 0x4000
    FatMaskForce32bit = -1, // 0xFF
};

enum MaterialProperty
{
    ambientMat = 1, // 0x0001
    diffuseMat = 2, // 0x0002
    specularMat = 3, // 0x0003
    shininessMat = 4, // 0x0004
    emissionMat = 5, // 0x0005
    MaterialPropertyForce32bit = -1, // 0xFF
};

enum LightProperty
{
    constantAttenuation = 1, // 0x0001
    linearAttenuation = 2, // 0x0002
    quadraticAttenuation = 3, // 0x0003
    LightPropertyForce32bit = -1, // 0xFF
};

enum DisplayListOp
{
    compileList = 1, // 0x0001
    executeList = 2, // 0x0002
    DisplayListForce32bit = -1, // 0xFF
};

enum IdentifierString
{
    vendorStr = 1, // 0x0001
    rendererStr = 2, // 0x0002
    versionStr = 3, // 0x0003
    extensionsStr = 4, // 0x0004
    extensionsSystemStr = 5, // 0x0005
    IdentifierStringForce32bit = -1, // 0xFF
};

enum ComparisonFunc
{
    neverFunc = 512, // 0x0200
    lessFunc = 513, // 0x0201
    equalFunc = 514, // 0x0202
    lessEqualFunc = 515, // 0x0203
    greaterFunc = 516, // 0x0204
    notEqualFunc = 517, // 0x0205
    greaterEqualFunc = 518, // 0x0206
    alwaysFunc = 519, // 0x0207
    ComparisonForce32bit = -1, // 0xFF
};

enum StencilOp
{
    keepOp = 3328, // 0x0D00
    zeroOp = 3329, // 0x0D01
    replaceOp = 3330, // 0x0D02
    incrementOp = 3331, // 0x0D03
    decrementOp = 3332, // 0x0D04
    invertOp = 3333, // 0x0D05
    StencilOpForce32bit = -1, // 0xFF
};

enum PolyfillMode
{
    lineFill = 2304, // 0x0900
    solidFill = 2305, // 0x0901
    PolyfillModeForce32bit = -1, // 0xFF
};

enum CullMode
{
    frontCull = 2560, // 0x0A00
    backCull = 2561, // 0x0A01
    frontandbackCull = 2562, // 0x0A02
    noneCull = 2563, // 0x0A03
    CullModeForce32bit = -1, // 0xFF
};

enum MaterialSide
{
    frontSide = 2816, // 0x0B00
    backSide = 2817, // 0x0B01
    frontandbackSide = 2818, // 0x0B02
    MaterialSideForce32bit = -1, // 0xFF
};

enum TexgenMode
{
    noneGen = 3072, // 0x0C00
    objectLinearGen = 3074, // 0x0C02
    eyeLinearGen = 3075, // 0x0C03
    sphereMapGen = 3076, // 0x0C04
    reflectionMapGen = 3077, // 0x0C05
    normalMapGen = 3078, // 0x0C06
    TexgenModeForce32bit = -1, // 0xFF
};

enum FogType
{
    linearFog = 3328, // 0x0D00
    expFog = 3329, // 0x0D01
    exp2Fog = 3330, // 0x0D02
    noFog = 3331, // 0x0D03
    FogTypeForce32bit = -1, // 0xFF
};

enum TextureTarget
{
    texture1DTarget = 3584, // 0x0E00
    texture2DTarget = 3585, // 0x0E01
    texture3DTarget = 3586, // 0x0E02
    textureCubeTarget = 3587, // 0x0E03
    textureCubePosX = 3588, // 0x0E04
    textureCubeNegX = 3589, // 0x0E05
    textureCubePosY = 3590, // 0x0E06
    textureCubeNegY = 3591, // 0x0E07
    textureCubePosZ = 3592, // 0x0E08
    textureCubeNegZ = 3593, // 0x0E09
    TextureTargetForce32bit = -1, // 0xFF
};

enum PixelFormat
{
    pixelColourIndex = 3840, // 0x0F00
    pixelStencilIndex = 3841, // 0x0F01
    pixelDepthComponent = 3842, // 0x0F02
    pixelRed = 3843, // 0x0F03
    pixelGreen = 3844, // 0x0F04
    pixelBlue = 3845, // 0x0F05
    pixelAlpha = 3846, // 0x0F06
    pixelRGB = 3847, // 0x0F07
    pixelRGBA = 3848, // 0x0F08
    pixelLuminance = 3849, // 0x0F09
    pixelLuminanceAlpha = 3850, // 0x0F0A
    PixelFormatForce32bit = -1, // 0xFF
};

enum CombinerStage
{
    combiner0 = 34128, // 0x8550
    combiner1 = 34129, // 0x8551
    combiner2 = 34130, // 0x8552
    combiner3 = 34131, // 0x8553
    combiner4 = 34132, // 0x8554
    combiner5 = 34133, // 0x8555
    combiner6 = 34134, // 0x8556
    combiner7 = 34135, // 0x8557
};

enum CombinerVariable
{
    variableA = 34083, // 0x8523
    variableB = 34084, // 0x8524
    variableC = 34085, // 0x8525
    variableD = 34086, // 0x8526
    variableE = 34087, // 0x8527
    variableF = 34088, // 0x8528
    variableG = 34089, // 0x8529
};

enum CombinerInput
{
    inputZero = 0, // 0x0000
    inputConst0 = 34090, // 0x852A
    inputConst1 = 34091, // 0x852B
    inputFog = 2912, // 0x0B60
    inputPrimary = 34092, // 0x852C
    inputSecondary = 34093, // 0x852D
    inputSpare0 = 34094, // 0x852E
    inputSpare1 = 34095, // 0x852F
    inputTexture0 = 33984, // 0x84C0
    inputTexture1 = 33985, // 0x84C1
    inputETimesF = 34097, // 0x8531
    inputSpare0PlusSecondary = 34098, // 0x8532
};

enum CombinerMapping
{
    unsignedIdentity = 34102, // 0x8536
    unsignedInvert = 34103, // 0x8537
    expandNormal = 34104, // 0x8538
    expandNegate = 34105, // 0x8539
    halfBiasNormal = 34106, // 0x853A
    halfBiasNegate = 34107, // 0x853B
    signedIdentity = 34108, // 0x853C
    signedNegate = 34109, // 0x853D
};

enum CombinerScale
{
    scaleNone = 0, // 0x0000
    scaleByTwo = 34110, // 0x853E
    scaleByFour = 34111, // 0x853F
    scaleByHalf = 34112, // 0x8540
};

enum CombinerBias
{
    biasNone = 0, // 0x0000
    biasNegHalf = 34113, // 0x8541
};

enum CombinerOutput
{
    outputDiscard = 34096, // 0x8530
    outputPrimary = 34092, // 0x852C
    outputSecondary = 34093, // 0x852D
    outputSpare0 = 34094, // 0x852E
    outputSpare1 = 34095, // 0x852F
    outputTexture0 = 33984, // 0x84C0
    outputTexture1 = 33985, // 0x84C1
};

enum CombinerInputParam
{
    paramInput = 34114, // 0x8542
    paramMapping = 34115, // 0x8543
    paramComponentUsage = 34116, // 0x8544
};

enum CombinerOutputParam
{
    paramABDot = 34117, // 0x8545
    paramCDDot = 34118, // 0x8546
    paramMuxSum = 34119, // 0x8547
    paramScale = 34120, // 0x8548
    paramBias = 34121, // 0x8549
    paramABOutput = 34122, // 0x854A
    paramCDOutput = 34123, // 0x854B
    paramSumOutput = 34124, // 0x854C
};

enum CombinerConstColor
{
    constColor0 = 34090, // 0x852A
    constColor1 = 34091, // 0x852B
};

enum RGL_Stats
{
    RGLSTAT_TextureChange = 0,
    RGLSTAT_RenderPrimCall,
    RGLSTAT_RenderPrimVert,
    RGLSTAT_RenderVACall,
    RGLSTAT_RenderVAIndex,
    RGLSTAT_Num,
};

enum AttribBits
{
    acummBuffer_attribBit = 1, // 0x0001
    colourBuffer_attribBit = 2, // 0x0002
    current_attribBit = 4, // 0x0004
    depthBuffer_attribBit = 8, // 0x0008
    enable_attribBit = 16, // 0x0010
    eval_attribBit = 32, // 0x0020 ' '
    fog_attribBit = 64, // 0x0040 '@'
    hint_attribBit = 128, // 0x0080
    lighting_attribBit = 256, // 0x0100
    line_attribBit = 512, // 0x0200
    list_attribBit = 1024, // 0x0400
    pixelMode_attribBit = 2048, // 0x0800
    point_attribBit = 4096, // 0x1000
    polygon_attribBit = 8192, // 0x2000
    polygonStipple_attribBit = 16384, // 0x4000
    scissor_attribBit = 32768, // 0x8000
    stencilBuffer_attribBit = 65536, // 0x00010000
    texure_attribBit = 131072, // 0x00020000
    transform_attribBit = 262144, // 0x00040000
    viewPort_attribBit = 524288, // 0x00080000
    all_attribBit = -1, // 0xFF
};

enum ClientAttribBits
{
    pixelStore_clientAttribBit = 1, // 0x0001
    vertexArray_clientAttribBit = 2, // 0x0002
    all_clientAttribBit = -1, // 0xFF
};

enum ClipPlane
{
    clipPlane0 = 12288, // 0x3000
    clipPlane1 = 12289, // 0x3001
    clipPlane2 = 12290, // 0x3002
    clipPlane3 = 12291, // 0x3003
    clipPlane4 = 12292, // 0x3004
    clipPlane5 = 12293, // 0x3005
    clipPlaneForce32Bit = -1, // 0xFF
};

enum eVP_GenericAttribute
{
    eVP_vertex = 0, // 0x0000
    eVP_weights = 1, // 0x0001
    eVP_nortmal = 2, // 0x0002
    eVP_colour0 = 3, // 0x0003
    eVP_colour1 = 4, // 0x0004
    eVP_fog = 5, // 0x0005
    eVP_tangent = 6, // 0x0006
    eVP_binormal = 7, // 0x0007
    eVP_tex0 = 8, // 0x0008
    eVP_tex1 = 9, // 0x0009
    eVP_tex2 = 10, // 0x000A
    eVP_tex3 = 11, // 0x000B
    eVP_tex4 = 12, // 0x000C
    eVP_tex5 = 13, // 0x000D
    eVP_tex6 = 14, // 0x000E
    eVP_tex7 = 15, // 0x000F
    eVP_forceGenericAttributeTo32Bit = -1, // 0xFF
};

enum eProgramType
{
    eVertexProgram = 0, // 0x0000
    eFragmentProgram = 1, // 0x0001
    eNumProgramTypes = 2, // 0x0002
    eProgramTypeForce32bit = -1, // 0xFF
};

enum SystemSetting
{
    maxTextureSize = 0, // 0x0000
    max3DTextureSize = 1, // 0x0001
    maxCubeTextureSize = 2, // 0x0002
    maxAnisotropy = 3, // 0x0003
    maxNVCombiners = 4, // 0x0004
    systemSettingForce32bit = -1, // 0xFF
};

enum DefaultOpenGLState
{
    state3D_Lit = 0, // 0x0000
    state3D_Unlit = 1, // 0x0001
    state2D = 2, // 0x0002
    DefaultOpenGLStateForce32bit = -1, // 0xFF
};

enum PBufferTexture
{
    PBuffer_Colour = 1, // 0x0001
    PBuffer_Depth = 2, // 0x0002
    PBuffer_Both = 3, // 0x0003
    PBufferTextureForce32bit = -1, // 0xFF
};

enum VertexBufferObjectUsage
{
    VBOU_StreamDraw = 35040, // 0x88E0
    VBOU_StreamRead = 35041, // 0x88E1
    VBOU_StreamCopy = 35042, // 0x88E2
    VBOU_StaticDraw = 35044, // 0x88E4
    VBOU_StaticRead = 35045, // 0x88E5
    VBOU_StaticCopy = 35046, // 0x88E6
    VBOU_DynamicDraw = 35048, // 0x88E8
    VBOU_DynamicRead = 35049, // 0x88E9
    VBOU_DynamicCopy = 35050, // 0x88EA
    VertexBufferObjectUsageForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectAccess
{
    VBOA_ReadOnly = 35000, // 0x88B8
    VBOA_WriteOnly = 35001, // 0x88B9
    VBOA_ReadWrite = 35002, // 0x88BA
    VertexBufferObjectAccessForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectPName
{
    VBOP_BufferSize = 34660, // 0x8764
    VBOP_BufferUsage = 34661, // 0x8765
    VBOP_BufferAccess = 35003, // 0x88BB
    VBOP_BufferMapped = 35004, // 0x88BC
    VertexBufferObjectPNameForce32Bit = -1, // 0xFF
};

enum eProgramQuerey
{
    eProgramLength = 34343, // 0x8627
    eProgramFormat = 34934, // 0x8876
    eProgramBinding = 34423, // 0x8677
    eProgramInstructions = 34976, // 0x88A0
    eProgramMaxInstruction = 34977, // 0x88A1
    eProgramNativeInstructions = 34978, // 0x88A2
    eProgramMaxNativeInstructions = 34979, // 0x88A3
    eProgramTemporaries = 34980, // 0x88A4
    eProgramMaxTemporaries = 34981, // 0x88A5
    eProgramNativeTemporaries = 34982, // 0x88A6
    eProgramMaxNativeTemporaries = 34983, // 0x88A7
    eProgramParameters = 34984, // 0x88A8
    eProgramMaxParameters = 34985, // 0x88A9
    eProgramNativeParameters = 34986, // 0x88AA
    eProgramMaxNativeParameters = 34987, // 0x88AB
    eProgramAttribes = 34988, // 0x88AC
    eProgramMaxAttribs = 34989, // 0x88AD
    eProgramNativeAttribs = 34990, // 0x88AE
    eProgramMaxNativeAttribs = 34991, // 0x88AF
    eProgramAddressRegisters = 34992, // 0x88B0
    eProgramMaxAddressRegisters = 34993, // 0x88B1
    eProgramNativeAddressRegisters = 34994, // 0x88B2
    eProgramMaxNativeAddressRegisters = 34995, // 0x88B3
    eProgramLocalParameters = 34996, // 0x88B4
    eProgramEnvParameters = 34997, // 0x88B5
    eProgramUnderLimits = 34998, // 0x88B6
    eProgramMaxALUIntructions = 34827, // 0x880B
    eProgramMaxTexInstructions = 34828, // 0x880C
    eProgramMaxTexIndirections = 34829, // 0x880D
    eProgramMaxNativeALUInstructions = 34830, // 0x880E
    eProgramMaxNativeTexInstructions = 34831, // 0x880F
    eProgramMaxNativeIndirections = 34832, // 0x8810
    eProgramALUInstructions = 34821, // 0x8805
    eProgramTexInstructions = 34822, // 0x8806
    eProgramTexIndirections = 34823, // 0x8807
    eProgramNativeALUInstructions = 34824, // 0x8808
    eProgramNativeTexInstructions = 34825, // 0x8809
    eProgramNativeIndirections = 34826, // 0x880A
    eProgramForce32bit = -1, // 0xFF
};

enum eMinSpec
{
    eFirstRequirement = 0, // 0x0000
    eNumTexturesRequirement = 0, // 0x0000
    eDot3Requirement = 1, // 0x0001
    eCubeMapRequirement = 2, // 0x0002
    eDestAlphaRequirement = 3, // 0x0003
    eNumMinSpecRequirements = 4, // 0x0004
    eAllRequirements = 4, // 0x0004
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_DEFINES_H__
/* combined */
#ifndef __R_DEFINES_H__
#define __R_DEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum BufferBit
{
    colourBuffer = 1, // 0x0001
    depthBuffer = 2, // 0x0002
    stencilBuffer = 4, // 0x0004
    accumBuffer = 8, // 0x0008
    BufferBitForce32bit = -1, // 0xFF
};

enum MatrixMode
{
    modelviewMatrix = 256, // 0x0100
    projectionMatrix = 257, // 0x0101
    textureMatrix = 258, // 0x0102
    MatrixModeForce32bit = -1, // 0xFF
};

enum PrimitiveType
{
    invalidPrim = 0, // 0x0000
    pointPrim = 512, // 0x0200
    linePrim = 513, // 0x0201
    trianglePrim = 514, // 0x0202
    lineloopPrim = 515, // 0x0203
    linestripPrim = 516, // 0x0204
    trianglefanPrim = 517, // 0x0205
    trianglestripPrim = 518, // 0x0206
    quadPrim = 519, // 0x0207
    quadstripPrim = 520, // 0x0208
    polygonPrim = 521, // 0x0209
    PrimitiveTypeForce32bit = -1, // 0xFF
};

enum BlendFunc
{
    zeroBlend = 768, // 0x0300
    oneBlend = 769, // 0x0301
    destcolourBlend = 770, // 0x0302
    invdestcolourBlend = 771, // 0x0303
    srcalphaBlend = 772, // 0x0304
    invsrcalphaBlend = 773, // 0x0305
    destalphaBlend = 774, // 0x0306
    invdestalphaBlend = 775, // 0x0307
    srccolourBlend = 776, // 0x0308
    invsrccolourBlend = 777, // 0x0309
    noneBlend = 778, // 0x030A
    BlendFuncForce32bit = -1, // 0xFF
};

enum TextureFormat
{
    rgba32 = 1024, // 0x0400
    rgba16 = 1025, // 0x0401
    rgb24 = 1026, // 0x0402
    rgb16 = 1027, // 0x0403
    cdxt1 = 1028, // 0x0404
    cdxt3 = 1029, // 0x0405
    cdxt5 = 1030, // 0x0406
    luminance = 1031, // 0x0407
    alpha = 1032, // 0x0408
    luminanceAlpha = 1033, // 0x0409
    depth32 = 1034, // 0x040A
    depth24 = 1035, // 0x040B
    depth16 = 1036, // 0x040C
    TextureFormatForce32bit = -1, // 0xFF
};

enum TextureMode
{
    replaceMode = 1280, // 0x0500
    modulateMode = 1281, // 0x0501
    blendMode = 1282, // 0x0502
    decalMode = 1283, // 0x0503
    addMode = 1284, // 0x0504
    combineMode = 1285, // 0x0505
    TextureModeForce32bit = -1, // 0xFF
};

enum TextureFilter
{
    pointFilter = 1536, // 0x0600
    linearFilter = 1537, // 0x0601
    pointPointFilter = 1538, // 0x0602
    linearPointFilter = 1539, // 0x0603
    pointLinearFilter = 1540, // 0x0604
    linearLinearFilter = 1541, // 0x0605
    TextureFilterForce32bit = -1, // 0xFF
};

enum TextureWrap
{
    repeatWrap = 1792, // 0x0700
    clampWrap = 1793, // 0x0701
    clampToEdgeWrap = 1794, // 0x0702
    TextureWrapForce32bit = -1, // 0xFF
};

enum BooleanCap
{
    depthbufferCap = 1, // 0x0001
    firstCap = 1, // 0x0001
    ditherCap = 2, // 0x0002
    cullCap = 3, // 0x0003
    lightingCap = 4, // 0x0004
    gouraudCap = 5, // 0x0005
    blendCap = 6, // 0x0006
    alphatestCap = 7, // 0x0007
    texture0Cap = 8, // 0x0008
    texture1Cap = 9, // 0x0009
    texture2Cap = 10, // 0x000A
    texture3Cap = 11, // 0x000B
    lineSmoothCap = 16, // 0x0010
    stencilCap = 17, // 0x0011
    normalizeCap = 18, // 0x0012
    rescaleNormalCap = 19, // 0x0013
    colourMaterialCap = 20, // 0x0014
    cullVertexCap = 21, // 0x0015
    destAlphaCap = 22, // 0x0016
    fogCap = 23, // 0x0017
    textureBiasCap = 24, // 0x0018
    texgenSCap = 25, // 0x0019
    texgenTCap = 26, // 0x001A
    texgenRCap = 27, // 0x001B
    texgenQCap = 28, // 0x001C
    offsetFillCap = 29, // 0x001D
    offsetLineCap = 30, // 0x001E
    offsetPointCap = 31, // 0x001F
    preferFewPrimsCap = 32, // 0x0020 ' '
    cubeMapCap = 33, // 0x0021 '!'
    cube0MapCap = 34, // 0x0022 '"'
    cube1MapCap = 35, // 0x0023 '#'
    cube2MapCap = 36, // 0x0024 '$'
    cube3MapCap = 37, // 0x0025 '%'
    pointSizeCap = 38, // 0x0026 '&'
    lineWidthCap = 39, // 0x0027 '''
    pointSmoothCap = 40, // 0x0028 '('
    polygonSmoothCap = 41, // 0x0029 ')'
    registerCombinerCap = 42, // 0x002A '*'
    dxtcCap = 43, // 0x002B '+'
    separateSpecularCap = 44, // 0x002C ','
    combineCap = 45, // 0x002D '-'
    crossbarCap = 46, // 0x002E '.'
    dot3Cap = 47, // 0x002F '/'
    combine3Cap = 48, // 0x0030 '0'
    routeCap = 49, // 0x0031 '1'
    registerCombiner2Cap = 50, // 0x0032 '2'
    anisotropicCap = 51, // 0x0033 '3'
    vertexProgramCap = 52, // 0x0034 '4'
    clipPlane0Cap = 53, // 0x0035 '5'
    clipPlane1Cap = 54, // 0x0036 '6'
    clipPlane2Cap = 55, // 0x0037 '7'
    clipPlane3Cap = 56, // 0x0038 '8'
    clipPlane4Cap = 57, // 0x0039 '9'
    clipPlane5Cap = 58, // 0x003A ':'
    scissorCap = 59, // 0x003B ';'
    pbufferCap = 60, // 0x003C '<'
    textureShaderCap = 61, // 0x003D '='
    texture3DCap = 62, // 0x003E '>'
    texture3D0Cap = 63, // 0x003F '?'
    texture3D1Cap = 64, // 0x0040 '@'
    texture3D2Cap = 65, // 0x0041 'A'
    texture3D3Cap = 66, // 0x0042 'B'
    mipmapAutoGenCap = 67, // 0x0043 'C'
    shadowBufferCap = 68, // 0x0044 'D'
    renderToTextureCap = 69, // 0x0045 'E'
    renderToDepthTextureCap = 70, // 0x0046 'F'
    multisampleCap = 71, // 0x0047 'G'
    vertexBufferObjectCap = 72, // 0x0048 'H'
    fragmentProgramCap = 73, // 0x0049 'I'
    fragmentShaderCap = 74, // 0x004A 'J'
    stencilClearCap = 75, // 0x004B 'K'
    numCaps = 76, // 0x004C 'L'
    endofCap = 268435455, // 0x0FFFFFFF
    BooleanCapForce32bit = -1, // 0xFF
};

enum FatMask
{
    vertexBit = 1, // 0x0001
    normalBit = 2, // 0x0002
    colourBit = 4, // 0x0004
    texture0Bit = 8, // 0x0008
    texture1Bit = 16, // 0x0010
    texture2Bit = 32, // 0x0020 ' '
    texture3Bit = 64, // 0x0040 '@'
    hvertexBit = 2048, // 0x0800
    svertexBit = 4096, // 0x1000
    tangentBit = 8192, // 0x2000
    binormalBit = 16384, // 0x4000
    FatMaskForce32bit = -1, // 0xFF
};

enum MaterialProperty
{
    ambientMat = 1, // 0x0001
    diffuseMat = 2, // 0x0002
    specularMat = 3, // 0x0003
    shininessMat = 4, // 0x0004
    emissionMat = 5, // 0x0005
    MaterialPropertyForce32bit = -1, // 0xFF
};

enum LightProperty
{
    constantAttenuation = 1, // 0x0001
    linearAttenuation = 2, // 0x0002
    quadraticAttenuation = 3, // 0x0003
    LightPropertyForce32bit = -1, // 0xFF
};

enum DisplayListOp
{
    compileList = 1, // 0x0001
    executeList = 2, // 0x0002
    DisplayListForce32bit = -1, // 0xFF
};

enum IdentifierString
{
    vendorStr = 1, // 0x0001
    rendererStr = 2, // 0x0002
    versionStr = 3, // 0x0003
    extensionsStr = 4, // 0x0004
    extensionsSystemStr = 5, // 0x0005
    IdentifierStringForce32bit = -1, // 0xFF
};

enum ComparisonFunc
{
    neverFunc = 512, // 0x0200
    lessFunc = 513, // 0x0201
    equalFunc = 514, // 0x0202
    lessEqualFunc = 515, // 0x0203
    greaterFunc = 516, // 0x0204
    notEqualFunc = 517, // 0x0205
    greaterEqualFunc = 518, // 0x0206
    alwaysFunc = 519, // 0x0207
    ComparisonForce32bit = -1, // 0xFF
};

enum StencilOp
{
    keepOp = 3328, // 0x0D00
    zeroOp = 3329, // 0x0D01
    replaceOp = 3330, // 0x0D02
    incrementOp = 3331, // 0x0D03
    decrementOp = 3332, // 0x0D04
    invertOp = 3333, // 0x0D05
    StencilOpForce32bit = -1, // 0xFF
};

enum PolyfillMode
{
    lineFill = 2304, // 0x0900
    solidFill = 2305, // 0x0901
    PolyfillModeForce32bit = -1, // 0xFF
};

enum CullMode
{
    frontCull = 2560, // 0x0A00
    backCull = 2561, // 0x0A01
    frontandbackCull = 2562, // 0x0A02
    noneCull = 2563, // 0x0A03
    CullModeForce32bit = -1, // 0xFF
};

enum MaterialSide
{
    frontSide = 2816, // 0x0B00
    backSide = 2817, // 0x0B01
    frontandbackSide = 2818, // 0x0B02
    MaterialSideForce32bit = -1, // 0xFF
};

enum TexgenMode
{
    noneGen = 3072, // 0x0C00
    objectLinearGen = 3074, // 0x0C02
    eyeLinearGen = 3075, // 0x0C03
    sphereMapGen = 3076, // 0x0C04
    reflectionMapGen = 3077, // 0x0C05
    normalMapGen = 3078, // 0x0C06
    TexgenModeForce32bit = -1, // 0xFF
};

enum FogType
{
    linearFog = 3328, // 0x0D00
    expFog = 3329, // 0x0D01
    exp2Fog = 3330, // 0x0D02
    noFog = 3331, // 0x0D03
    FogTypeForce32bit = -1, // 0xFF
};

enum TextureTarget
{
    texture1DTarget = 3584, // 0x0E00
    texture2DTarget = 3585, // 0x0E01
    texture3DTarget = 3586, // 0x0E02
    textureCubeTarget = 3587, // 0x0E03
    textureCubePosX = 3588, // 0x0E04
    textureCubeNegX = 3589, // 0x0E05
    textureCubePosY = 3590, // 0x0E06
    textureCubeNegY = 3591, // 0x0E07
    textureCubePosZ = 3592, // 0x0E08
    textureCubeNegZ = 3593, // 0x0E09
    TextureTargetForce32bit = -1, // 0xFF
};

enum PixelFormat
{
    pixelColourIndex = 3840, // 0x0F00
    pixelStencilIndex = 3841, // 0x0F01
    pixelDepthComponent = 3842, // 0x0F02
    pixelRed = 3843, // 0x0F03
    pixelGreen = 3844, // 0x0F04
    pixelBlue = 3845, // 0x0F05
    pixelAlpha = 3846, // 0x0F06
    pixelRGB = 3847, // 0x0F07
    pixelRGBA = 3848, // 0x0F08
    pixelLuminance = 3849, // 0x0F09
    pixelLuminanceAlpha = 3850, // 0x0F0A
    PixelFormatForce32bit = -1, // 0xFF
};

enum CombinerStage
{
    combiner0 = 34128, // 0x8550
    combiner1 = 34129, // 0x8551
    combiner2 = 34130, // 0x8552
    combiner3 = 34131, // 0x8553
    combiner4 = 34132, // 0x8554
    combiner5 = 34133, // 0x8555
    combiner6 = 34134, // 0x8556
    combiner7 = 34135, // 0x8557
};

enum CombinerVariable
{
    variableA = 34083, // 0x8523
    variableB = 34084, // 0x8524
    variableC = 34085, // 0x8525
    variableD = 34086, // 0x8526
    variableE = 34087, // 0x8527
    variableF = 34088, // 0x8528
    variableG = 34089, // 0x8529
};

enum CombinerInputParam
{
    paramInput = 34114, // 0x8542
    paramMapping = 34115, // 0x8543
    paramComponentUsage = 34116, // 0x8544
};

enum CombinerOutputParam
{
    paramABDot = 34117, // 0x8545
    paramCDDot = 34118, // 0x8546
    paramMuxSum = 34119, // 0x8547
    paramScale = 34120, // 0x8548
    paramBias = 34121, // 0x8549
    paramABOutput = 34122, // 0x854A
    paramCDOutput = 34123, // 0x854B
    paramSumOutput = 34124, // 0x854C
};

enum CombinerConstColor
{
    constColor0 = 34090, // 0x852A
    constColor1 = 34091, // 0x852B
};

enum RGL_Stats
{
    RGLSTAT_TextureChange = 0,
    RGLSTAT_RenderPrimCall,
    RGLSTAT_RenderPrimVert,
    RGLSTAT_RenderVACall,
    RGLSTAT_RenderVAIndex,
    RGLSTAT_Num,
};

enum ClipPlane
{
    clipPlane0 = 12288, // 0x3000
    clipPlane1 = 12289, // 0x3001
    clipPlane2 = 12290, // 0x3002
    clipPlane3 = 12291, // 0x3003
    clipPlane4 = 12292, // 0x3004
    clipPlane5 = 12293, // 0x3005
    clipPlaneForce32Bit = -1, // 0xFF
};

enum eProgramType
{
    eVertexProgram = 0, // 0x0000
    eFragmentProgram = 1, // 0x0001
    eNumProgramTypes = 2, // 0x0002
    eProgramTypeForce32bit = -1, // 0xFF
};

enum SystemSetting
{
    maxTextureSize = 0, // 0x0000
    max3DTextureSize = 1, // 0x0001
    maxCubeTextureSize = 2, // 0x0002
    maxAnisotropy = 3, // 0x0003
    maxNVCombiners = 4, // 0x0004
    systemSettingForce32bit = -1, // 0xFF
};

enum DefaultOpenGLState
{
    state3D_Lit = 0, // 0x0000
    state3D_Unlit = 1, // 0x0001
    state2D = 2, // 0x0002
    DefaultOpenGLStateForce32bit = -1, // 0xFF
};

enum PBufferTexture
{
    PBuffer_Colour = 1, // 0x0001
    PBuffer_Depth = 2, // 0x0002
    PBuffer_Both = 3, // 0x0003
    PBufferTextureForce32bit = -1, // 0xFF
};

enum VertexBufferObjectUsage
{
    VBOU_StreamDraw = 35040, // 0x88E0
    VBOU_StreamRead = 35041, // 0x88E1
    VBOU_StreamCopy = 35042, // 0x88E2
    VBOU_StaticDraw = 35044, // 0x88E4
    VBOU_StaticRead = 35045, // 0x88E5
    VBOU_StaticCopy = 35046, // 0x88E6
    VBOU_DynamicDraw = 35048, // 0x88E8
    VBOU_DynamicRead = 35049, // 0x88E9
    VBOU_DynamicCopy = 35050, // 0x88EA
    VertexBufferObjectUsageForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectAccess
{
    VBOA_ReadOnly = 35000, // 0x88B8
    VBOA_WriteOnly = 35001, // 0x88B9
    VBOA_ReadWrite = 35002, // 0x88BA
    VertexBufferObjectAccessForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectPName
{
    VBOP_BufferSize = 34660, // 0x8764
    VBOP_BufferUsage = 34661, // 0x8765
    VBOP_BufferAccess = 35003, // 0x88BB
    VBOP_BufferMapped = 35004, // 0x88BC
    VertexBufferObjectPNameForce32Bit = -1, // 0xFF
};

enum eProgramQuerey
{
    eProgramLength = 34343, // 0x8627
    eProgramFormat = 34934, // 0x8876
    eProgramBinding = 34423, // 0x8677
    eProgramInstructions = 34976, // 0x88A0
    eProgramMaxInstruction = 34977, // 0x88A1
    eProgramNativeInstructions = 34978, // 0x88A2
    eProgramMaxNativeInstructions = 34979, // 0x88A3
    eProgramTemporaries = 34980, // 0x88A4
    eProgramMaxTemporaries = 34981, // 0x88A5
    eProgramNativeTemporaries = 34982, // 0x88A6
    eProgramMaxNativeTemporaries = 34983, // 0x88A7
    eProgramParameters = 34984, // 0x88A8
    eProgramMaxParameters = 34985, // 0x88A9
    eProgramNativeParameters = 34986, // 0x88AA
    eProgramMaxNativeParameters = 34987, // 0x88AB
    eProgramAttribes = 34988, // 0x88AC
    eProgramMaxAttribs = 34989, // 0x88AD
    eProgramNativeAttribs = 34990, // 0x88AE
    eProgramMaxNativeAttribs = 34991, // 0x88AF
    eProgramAddressRegisters = 34992, // 0x88B0
    eProgramMaxAddressRegisters = 34993, // 0x88B1
    eProgramNativeAddressRegisters = 34994, // 0x88B2
    eProgramMaxNativeAddressRegisters = 34995, // 0x88B3
    eProgramLocalParameters = 34996, // 0x88B4
    eProgramEnvParameters = 34997, // 0x88B5
    eProgramUnderLimits = 34998, // 0x88B6
    eProgramMaxALUIntructions = 34827, // 0x880B
    eProgramMaxTexInstructions = 34828, // 0x880C
    eProgramMaxTexIndirections = 34829, // 0x880D
    eProgramMaxNativeALUInstructions = 34830, // 0x880E
    eProgramMaxNativeTexInstructions = 34831, // 0x880F
    eProgramMaxNativeIndirections = 34832, // 0x8810
    eProgramALUInstructions = 34821, // 0x8805
    eProgramTexInstructions = 34822, // 0x8806
    eProgramTexIndirections = 34823, // 0x8807
    eProgramNativeALUInstructions = 34824, // 0x8808
    eProgramNativeTexInstructions = 34825, // 0x8809
    eProgramNativeIndirections = 34826, // 0x880A
    eProgramForce32bit = -1, // 0xFF
};

enum eMinSpec
{
    eFirstRequirement = 0, // 0x0000
    eNumTexturesRequirement = 0, // 0x0000
    eDot3Requirement = 1, // 0x0001
    eCubeMapRequirement = 2, // 0x0002
    eDestAlphaRequirement = 3, // 0x0003
    eNumMinSpecRequirements = 4, // 0x0004
    eAllRequirements = 4, // 0x0004
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_DEFINES_H__
/* combined */
#ifndef __R_DEFINES_H__
#define __R_DEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MatrixMode
{
    modelviewMatrix = 256, // 0x0100
    projectionMatrix = 257, // 0x0101
    textureMatrix = 258, // 0x0102
    MatrixModeForce32bit = -1, // 0xFF
};

enum PrimitiveType
{
    invalidPrim = 0, // 0x0000
    pointPrim = 512, // 0x0200
    linePrim = 513, // 0x0201
    trianglePrim = 514, // 0x0202
    lineloopPrim = 515, // 0x0203
    linestripPrim = 516, // 0x0204
    trianglefanPrim = 517, // 0x0205
    trianglestripPrim = 518, // 0x0206
    quadPrim = 519, // 0x0207
    quadstripPrim = 520, // 0x0208
    polygonPrim = 521, // 0x0209
    PrimitiveTypeForce32bit = -1, // 0xFF
};

enum BlendFunc
{
    zeroBlend = 768, // 0x0300
    oneBlend = 769, // 0x0301
    destcolourBlend = 770, // 0x0302
    invdestcolourBlend = 771, // 0x0303
    srcalphaBlend = 772, // 0x0304
    invsrcalphaBlend = 773, // 0x0305
    destalphaBlend = 774, // 0x0306
    invdestalphaBlend = 775, // 0x0307
    srccolourBlend = 776, // 0x0308
    invsrccolourBlend = 777, // 0x0309
    noneBlend = 778, // 0x030A
    BlendFuncForce32bit = -1, // 0xFF
};

enum TextureFormat
{
    rgba32 = 1024, // 0x0400
    rgba16 = 1025, // 0x0401
    rgb24 = 1026, // 0x0402
    rgb16 = 1027, // 0x0403
    cdxt1 = 1028, // 0x0404
    cdxt3 = 1029, // 0x0405
    cdxt5 = 1030, // 0x0406
    luminance = 1031, // 0x0407
    alpha = 1032, // 0x0408
    luminanceAlpha = 1033, // 0x0409
    depth32 = 1034, // 0x040A
    depth24 = 1035, // 0x040B
    depth16 = 1036, // 0x040C
    TextureFormatForce32bit = -1, // 0xFF
};

enum TextureMode
{
    replaceMode = 1280, // 0x0500
    modulateMode = 1281, // 0x0501
    blendMode = 1282, // 0x0502
    decalMode = 1283, // 0x0503
    addMode = 1284, // 0x0504
    combineMode = 1285, // 0x0505
    TextureModeForce32bit = -1, // 0xFF
};

enum TextureFilter
{
    pointFilter = 1536, // 0x0600
    linearFilter = 1537, // 0x0601
    pointPointFilter = 1538, // 0x0602
    linearPointFilter = 1539, // 0x0603
    pointLinearFilter = 1540, // 0x0604
    linearLinearFilter = 1541, // 0x0605
    TextureFilterForce32bit = -1, // 0xFF
};

enum TextureWrap
{
    repeatWrap = 1792, // 0x0700
    clampWrap = 1793, // 0x0701
    clampToEdgeWrap = 1794, // 0x0702
    TextureWrapForce32bit = -1, // 0xFF
};

enum BooleanCap
{
    depthbufferCap = 1, // 0x0001
    firstCap = 1, // 0x0001
    ditherCap = 2, // 0x0002
    cullCap = 3, // 0x0003
    lightingCap = 4, // 0x0004
    gouraudCap = 5, // 0x0005
    blendCap = 6, // 0x0006
    alphatestCap = 7, // 0x0007
    texture0Cap = 8, // 0x0008
    texture1Cap = 9, // 0x0009
    texture2Cap = 10, // 0x000A
    texture3Cap = 11, // 0x000B
    lineSmoothCap = 16, // 0x0010
    stencilCap = 17, // 0x0011
    normalizeCap = 18, // 0x0012
    rescaleNormalCap = 19, // 0x0013
    colourMaterialCap = 20, // 0x0014
    cullVertexCap = 21, // 0x0015
    destAlphaCap = 22, // 0x0016
    fogCap = 23, // 0x0017
    textureBiasCap = 24, // 0x0018
    texgenSCap = 25, // 0x0019
    texgenTCap = 26, // 0x001A
    texgenRCap = 27, // 0x001B
    texgenQCap = 28, // 0x001C
    offsetFillCap = 29, // 0x001D
    offsetLineCap = 30, // 0x001E
    offsetPointCap = 31, // 0x001F
    preferFewPrimsCap = 32, // 0x0020 ' '
    cubeMapCap = 33, // 0x0021 '!'
    cube0MapCap = 34, // 0x0022 '"'
    cube1MapCap = 35, // 0x0023 '#'
    cube2MapCap = 36, // 0x0024 '$'
    cube3MapCap = 37, // 0x0025 '%'
    pointSizeCap = 38, // 0x0026 '&'
    lineWidthCap = 39, // 0x0027 '''
    pointSmoothCap = 40, // 0x0028 '('
    polygonSmoothCap = 41, // 0x0029 ')'
    registerCombinerCap = 42, // 0x002A '*'
    dxtcCap = 43, // 0x002B '+'
    separateSpecularCap = 44, // 0x002C ','
    combineCap = 45, // 0x002D '-'
    crossbarCap = 46, // 0x002E '.'
    dot3Cap = 47, // 0x002F '/'
    combine3Cap = 48, // 0x0030 '0'
    routeCap = 49, // 0x0031 '1'
    registerCombiner2Cap = 50, // 0x0032 '2'
    anisotropicCap = 51, // 0x0033 '3'
    vertexProgramCap = 52, // 0x0034 '4'
    clipPlane0Cap = 53, // 0x0035 '5'
    clipPlane1Cap = 54, // 0x0036 '6'
    clipPlane2Cap = 55, // 0x0037 '7'
    clipPlane3Cap = 56, // 0x0038 '8'
    clipPlane4Cap = 57, // 0x0039 '9'
    clipPlane5Cap = 58, // 0x003A ':'
    scissorCap = 59, // 0x003B ';'
    pbufferCap = 60, // 0x003C '<'
    textureShaderCap = 61, // 0x003D '='
    texture3DCap = 62, // 0x003E '>'
    texture3D0Cap = 63, // 0x003F '?'
    texture3D1Cap = 64, // 0x0040 '@'
    texture3D2Cap = 65, // 0x0041 'A'
    texture3D3Cap = 66, // 0x0042 'B'
    mipmapAutoGenCap = 67, // 0x0043 'C'
    shadowBufferCap = 68, // 0x0044 'D'
    renderToTextureCap = 69, // 0x0045 'E'
    renderToDepthTextureCap = 70, // 0x0046 'F'
    multisampleCap = 71, // 0x0047 'G'
    vertexBufferObjectCap = 72, // 0x0048 'H'
    fragmentProgramCap = 73, // 0x0049 'I'
    fragmentShaderCap = 74, // 0x004A 'J'
    stencilClearCap = 75, // 0x004B 'K'
    numCaps = 76, // 0x004C 'L'
    endofCap = 268435455, // 0x0FFFFFFF
    BooleanCapForce32bit = -1, // 0xFF
};

enum FatMask
{
    vertexBit = 1, // 0x0001
    normalBit = 2, // 0x0002
    colourBit = 4, // 0x0004
    texture0Bit = 8, // 0x0008
    texture1Bit = 16, // 0x0010
    texture2Bit = 32, // 0x0020 ' '
    texture3Bit = 64, // 0x0040 '@'
    hvertexBit = 2048, // 0x0800
    svertexBit = 4096, // 0x1000
    tangentBit = 8192, // 0x2000
    binormalBit = 16384, // 0x4000
    FatMaskForce32bit = -1, // 0xFF
};

enum MaterialProperty
{
    ambientMat = 1, // 0x0001
    diffuseMat = 2, // 0x0002
    specularMat = 3, // 0x0003
    shininessMat = 4, // 0x0004
    emissionMat = 5, // 0x0005
    MaterialPropertyForce32bit = -1, // 0xFF
};

enum LightProperty
{
    constantAttenuation = 1, // 0x0001
    linearAttenuation = 2, // 0x0002
    quadraticAttenuation = 3, // 0x0003
    LightPropertyForce32bit = -1, // 0xFF
};

enum DisplayListOp
{
    compileList = 1, // 0x0001
    executeList = 2, // 0x0002
    DisplayListForce32bit = -1, // 0xFF
};

enum IdentifierString
{
    vendorStr = 1, // 0x0001
    rendererStr = 2, // 0x0002
    versionStr = 3, // 0x0003
    extensionsStr = 4, // 0x0004
    extensionsSystemStr = 5, // 0x0005
    IdentifierStringForce32bit = -1, // 0xFF
};

enum ComparisonFunc
{
    neverFunc = 512, // 0x0200
    lessFunc = 513, // 0x0201
    equalFunc = 514, // 0x0202
    lessEqualFunc = 515, // 0x0203
    greaterFunc = 516, // 0x0204
    notEqualFunc = 517, // 0x0205
    greaterEqualFunc = 518, // 0x0206
    alwaysFunc = 519, // 0x0207
    ComparisonForce32bit = -1, // 0xFF
};

enum StencilOp
{
    keepOp = 3328, // 0x0D00
    zeroOp = 3329, // 0x0D01
    replaceOp = 3330, // 0x0D02
    incrementOp = 3331, // 0x0D03
    decrementOp = 3332, // 0x0D04
    invertOp = 3333, // 0x0D05
    StencilOpForce32bit = -1, // 0xFF
};

enum PolyfillMode
{
    lineFill = 2304, // 0x0900
    solidFill = 2305, // 0x0901
    PolyfillModeForce32bit = -1, // 0xFF
};

enum CullMode
{
    frontCull = 2560, // 0x0A00
    backCull = 2561, // 0x0A01
    frontandbackCull = 2562, // 0x0A02
    noneCull = 2563, // 0x0A03
    CullModeForce32bit = -1, // 0xFF
};

enum MaterialSide
{
    frontSide = 2816, // 0x0B00
    backSide = 2817, // 0x0B01
    frontandbackSide = 2818, // 0x0B02
    MaterialSideForce32bit = -1, // 0xFF
};

enum TexgenMode
{
    noneGen = 3072, // 0x0C00
    objectLinearGen = 3074, // 0x0C02
    eyeLinearGen = 3075, // 0x0C03
    sphereMapGen = 3076, // 0x0C04
    reflectionMapGen = 3077, // 0x0C05
    normalMapGen = 3078, // 0x0C06
    TexgenModeForce32bit = -1, // 0xFF
};

enum FogType
{
    linearFog = 3328, // 0x0D00
    expFog = 3329, // 0x0D01
    exp2Fog = 3330, // 0x0D02
    noFog = 3331, // 0x0D03
    FogTypeForce32bit = -1, // 0xFF
};

enum TextureTarget
{
    texture1DTarget = 3584, // 0x0E00
    texture2DTarget = 3585, // 0x0E01
    texture3DTarget = 3586, // 0x0E02
    textureCubeTarget = 3587, // 0x0E03
    textureCubePosX = 3588, // 0x0E04
    textureCubeNegX = 3589, // 0x0E05
    textureCubePosY = 3590, // 0x0E06
    textureCubeNegY = 3591, // 0x0E07
    textureCubePosZ = 3592, // 0x0E08
    textureCubeNegZ = 3593, // 0x0E09
    TextureTargetForce32bit = -1, // 0xFF
};

enum PixelFormat
{
    pixelColourIndex = 3840, // 0x0F00
    pixelStencilIndex = 3841, // 0x0F01
    pixelDepthComponent = 3842, // 0x0F02
    pixelRed = 3843, // 0x0F03
    pixelGreen = 3844, // 0x0F04
    pixelBlue = 3845, // 0x0F05
    pixelAlpha = 3846, // 0x0F06
    pixelRGB = 3847, // 0x0F07
    pixelRGBA = 3848, // 0x0F08
    pixelLuminance = 3849, // 0x0F09
    pixelLuminanceAlpha = 3850, // 0x0F0A
    PixelFormatForce32bit = -1, // 0xFF
};

enum CombinerStage
{
    combiner0 = 34128, // 0x8550
    combiner1 = 34129, // 0x8551
    combiner2 = 34130, // 0x8552
    combiner3 = 34131, // 0x8553
    combiner4 = 34132, // 0x8554
    combiner5 = 34133, // 0x8555
    combiner6 = 34134, // 0x8556
    combiner7 = 34135, // 0x8557
};

enum CombinerVariable
{
    variableA = 34083, // 0x8523
    variableB = 34084, // 0x8524
    variableC = 34085, // 0x8525
    variableD = 34086, // 0x8526
    variableE = 34087, // 0x8527
    variableF = 34088, // 0x8528
    variableG = 34089, // 0x8529
};

enum CombinerInput
{
    inputZero = 0, // 0x0000
    inputConst0 = 34090, // 0x852A
    inputConst1 = 34091, // 0x852B
    inputFog = 2912, // 0x0B60
    inputPrimary = 34092, // 0x852C
    inputSecondary = 34093, // 0x852D
    inputSpare0 = 34094, // 0x852E
    inputSpare1 = 34095, // 0x852F
    inputTexture0 = 33984, // 0x84C0
    inputTexture1 = 33985, // 0x84C1
    inputETimesF = 34097, // 0x8531
    inputSpare0PlusSecondary = 34098, // 0x8532
};

enum CombinerMapping
{
    unsignedIdentity = 34102, // 0x8536
    unsignedInvert = 34103, // 0x8537
    expandNormal = 34104, // 0x8538
    expandNegate = 34105, // 0x8539
    halfBiasNormal = 34106, // 0x853A
    halfBiasNegate = 34107, // 0x853B
    signedIdentity = 34108, // 0x853C
    signedNegate = 34109, // 0x853D
};

enum CombinerScale
{
    scaleNone = 0, // 0x0000
    scaleByTwo = 34110, // 0x853E
    scaleByFour = 34111, // 0x853F
    scaleByHalf = 34112, // 0x8540
};

enum CombinerBias
{
    biasNone = 0, // 0x0000
    biasNegHalf = 34113, // 0x8541
};

enum CombinerOutput
{
    outputDiscard = 34096, // 0x8530
    outputPrimary = 34092, // 0x852C
    outputSecondary = 34093, // 0x852D
    outputSpare0 = 34094, // 0x852E
    outputSpare1 = 34095, // 0x852F
    outputTexture0 = 33984, // 0x84C0
    outputTexture1 = 33985, // 0x84C1
};

enum CombinerInputParam
{
    paramInput = 34114, // 0x8542
    paramMapping = 34115, // 0x8543
    paramComponentUsage = 34116, // 0x8544
};

enum CombinerOutputParam
{
    paramABDot = 34117, // 0x8545
    paramCDDot = 34118, // 0x8546
    paramMuxSum = 34119, // 0x8547
    paramScale = 34120, // 0x8548
    paramBias = 34121, // 0x8549
    paramABOutput = 34122, // 0x854A
    paramCDOutput = 34123, // 0x854B
    paramSumOutput = 34124, // 0x854C
};

enum CombinerConstColor
{
    constColor0 = 34090, // 0x852A
    constColor1 = 34091, // 0x852B
};

enum ClipPlane
{
    clipPlane0 = 12288, // 0x3000
    clipPlane1 = 12289, // 0x3001
    clipPlane2 = 12290, // 0x3002
    clipPlane3 = 12291, // 0x3003
    clipPlane4 = 12292, // 0x3004
    clipPlane5 = 12293, // 0x3005
    clipPlaneForce32Bit = -1, // 0xFF
};

enum eProgramType
{
    eVertexProgram = 0, // 0x0000
    eFragmentProgram = 1, // 0x0001
    eNumProgramTypes = 2, // 0x0002
    eProgramTypeForce32bit = -1, // 0xFF
};

enum SystemSetting
{
    maxTextureSize = 0, // 0x0000
    max3DTextureSize = 1, // 0x0001
    maxCubeTextureSize = 2, // 0x0002
    maxAnisotropy = 3, // 0x0003
    maxNVCombiners = 4, // 0x0004
    systemSettingForce32bit = -1, // 0xFF
};

enum DefaultOpenGLState
{
    state3D_Lit = 0, // 0x0000
    state3D_Unlit = 1, // 0x0001
    state2D = 2, // 0x0002
    DefaultOpenGLStateForce32bit = -1, // 0xFF
};

enum PBufferTexture
{
    PBuffer_Colour = 1, // 0x0001
    PBuffer_Depth = 2, // 0x0002
    PBuffer_Both = 3, // 0x0003
    PBufferTextureForce32bit = -1, // 0xFF
};

enum VertexBufferObjectUsage
{
    VBOU_StreamDraw = 35040, // 0x88E0
    VBOU_StreamRead = 35041, // 0x88E1
    VBOU_StreamCopy = 35042, // 0x88E2
    VBOU_StaticDraw = 35044, // 0x88E4
    VBOU_StaticRead = 35045, // 0x88E5
    VBOU_StaticCopy = 35046, // 0x88E6
    VBOU_DynamicDraw = 35048, // 0x88E8
    VBOU_DynamicRead = 35049, // 0x88E9
    VBOU_DynamicCopy = 35050, // 0x88EA
    VertexBufferObjectUsageForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectAccess
{
    VBOA_ReadOnly = 35000, // 0x88B8
    VBOA_WriteOnly = 35001, // 0x88B9
    VBOA_ReadWrite = 35002, // 0x88BA
    VertexBufferObjectAccessForce32Bit = -1, // 0xFF
};

enum VertexBufferObjectPName
{
    VBOP_BufferSize = 34660, // 0x8764
    VBOP_BufferUsage = 34661, // 0x8765
    VBOP_BufferAccess = 35003, // 0x88BB
    VBOP_BufferMapped = 35004, // 0x88BC
    VertexBufferObjectPNameForce32Bit = -1, // 0xFF
};

enum eProgramQuerey
{
    eProgramLength = 34343, // 0x8627
    eProgramFormat = 34934, // 0x8876
    eProgramBinding = 34423, // 0x8677
    eProgramInstructions = 34976, // 0x88A0
    eProgramMaxInstruction = 34977, // 0x88A1
    eProgramNativeInstructions = 34978, // 0x88A2
    eProgramMaxNativeInstructions = 34979, // 0x88A3
    eProgramTemporaries = 34980, // 0x88A4
    eProgramMaxTemporaries = 34981, // 0x88A5
    eProgramNativeTemporaries = 34982, // 0x88A6
    eProgramMaxNativeTemporaries = 34983, // 0x88A7
    eProgramParameters = 34984, // 0x88A8
    eProgramMaxParameters = 34985, // 0x88A9
    eProgramNativeParameters = 34986, // 0x88AA
    eProgramMaxNativeParameters = 34987, // 0x88AB
    eProgramAttribes = 34988, // 0x88AC
    eProgramMaxAttribs = 34989, // 0x88AD
    eProgramNativeAttribs = 34990, // 0x88AE
    eProgramMaxNativeAttribs = 34991, // 0x88AF
    eProgramAddressRegisters = 34992, // 0x88B0
    eProgramMaxAddressRegisters = 34993, // 0x88B1
    eProgramNativeAddressRegisters = 34994, // 0x88B2
    eProgramMaxNativeAddressRegisters = 34995, // 0x88B3
    eProgramLocalParameters = 34996, // 0x88B4
    eProgramEnvParameters = 34997, // 0x88B5
    eProgramUnderLimits = 34998, // 0x88B6
    eProgramMaxALUIntructions = 34827, // 0x880B
    eProgramMaxTexInstructions = 34828, // 0x880C
    eProgramMaxTexIndirections = 34829, // 0x880D
    eProgramMaxNativeALUInstructions = 34830, // 0x880E
    eProgramMaxNativeTexInstructions = 34831, // 0x880F
    eProgramMaxNativeIndirections = 34832, // 0x8810
    eProgramALUInstructions = 34821, // 0x8805
    eProgramTexInstructions = 34822, // 0x8806
    eProgramTexIndirections = 34823, // 0x8807
    eProgramNativeALUInstructions = 34824, // 0x8808
    eProgramNativeTexInstructions = 34825, // 0x8809
    eProgramNativeIndirections = 34826, // 0x880A
    eProgramForce32bit = -1, // 0xFF
};

enum eMinSpec
{
    eFirstRequirement = 0, // 0x0000
    eNumTexturesRequirement = 0, // 0x0000
    eDot3Requirement = 1, // 0x0001
    eCubeMapRequirement = 2, // 0x0002
    eDestAlphaRequirement = 3, // 0x0003
    eNumMinSpecRequirements = 4, // 0x0004
    eAllRequirements = 4, // 0x0004
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __R_DEFINES_H__
#endif
