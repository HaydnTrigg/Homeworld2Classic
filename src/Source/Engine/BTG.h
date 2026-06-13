#if 0
#ifndef __BTG_H__
#define __BTG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Background :
    public Core
{
public:
    Background(Background const &); /* compiler_generated() */
    Background();
    virtual ~Background() override;
    static Background *create();
    virtual bool release() override;
    bool load(char const *);
    void loadHODFile(char const *, char const *);
    void cull(vector3 const &, vector3 const &, vector3 const &);
    void render(vector3 const &, vector3 const &, vector3 const &, bool);
    void setLightColour(vector4 const &);
    void setColourMultiplier(float);
    void setTheta(float);
    void setPhi(float);
    float getColourMultiplier() const;
    float getFOV() const;
    float getTheta() const;
    float getPhi() const;
    MeshInstance *getMeshInstance();
    static __int32 HandleHIER(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 HandleSTRF(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 HandleBMSH(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 HandleBMBV(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 HandleBGLT(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    static __int32 HandleBGMS(IFF *iff, IFFChunk *chunk, void *pBackground, void *user1);
    static __int32 HandleBGSG(IFF *iff, IFFChunk *chunk, void *user0, void *user1);
    class Data;
private:
    boost::scoped_ptr<Background::Data> m_pimpl; // 0x4
    void reset();
    void setCoordSys(bool);
    void loadLUAFile(char const *);
public:
    Background &operator=(Background const &); /* compiler_generated() */
};
static_assert(sizeof(Background) == 8, "Invalid Background size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __BTG_H__
#endif
