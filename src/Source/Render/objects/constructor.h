#if 0
#ifndef __CONSTRUCTOR_H__
#define __CONSTRUCTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONSTRUCTOR_H__
/* combined */
#ifndef __CONSTRUCTOR_H__
#define __CONSTRUCTOR_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Constructor
{
public:
    static Constructor *getInstance();
    Geometry *createGeometry();
    Layer *createLayer();
    Material *createMaterial();
    ParentMesh *createParentMesh();
    PrimSet *createPrimSet();
    PrimSetList *createPrimSetList();
    RawMesh *createRawMesh();
    Stripper *createStripper();
    VaryMesh *createVaryMesh();
    MultiMesh *createMultiMesh();
    BasicMesh *createBasicMesh();
    VertexArray *createVertexArray();
    FontSystem *createFontSystem();
    ImplicitSurface *createImplicitSurface();
    SimpleMesh *createSimpleMesh();
    ShaderPass *createShaderPass();
    MeshInstance *createMeshInstance();
protected:
    Constructor();
private:
    static Constructor *_instance;
};
static_assert(sizeof(Constructor) == 1, "Invalid Constructor size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __CONSTRUCTOR_H__
#endif
