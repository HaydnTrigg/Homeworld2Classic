#if 0
#ifndef __VERTEXARRAYINTERNAL_H__
#define __VERTEXARRAYINTERNAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VertexArrayI
{
public:
    virtual ~VertexArrayI();
    virtual void create(rndTable &, unsigned __int32, __int32) = 0;
    virtual void destroy(rndTable &) = 0;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool unapply(rndTable &, unsigned __int32) = 0;
    virtual bool reapply(rndTable &, unsigned __int32) = 0;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) = 0;
    VertexArrayI(VertexArrayI const &); /* compiler_generated() */
    VertexArrayI(); /* compiler_generated() */
    VertexArrayI &operator=(VertexArrayI const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayI) == 4, "Invalid VertexArrayI size");

class VertexArrayVBO :
    public VertexArrayI
{
public:
    VertexArrayVBO(VertexArrayVBO const &); /* compiler_generated() */
    VertexArrayVBO();
    void setUsage(VertexBufferObjectUsage);
    virtual void create(rndTable &, unsigned __int32, __int32) override;
    virtual void destroy(rndTable &) override;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unapply(rndTable &, unsigned __int32) override;
    virtual bool reapply(rndTable &, unsigned __int32) override;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) override;
private:
    VertexBufferObjectUsage m_usage; // 0x4
    unsigned __int32 m_vbo; // 0x8
    VertexBufferDescriptor m_vbInfo; // 0xC
public:
    virtual ~VertexArrayVBO() override; /* compiler_generated() */
    VertexArrayVBO &operator=(VertexArrayVBO const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayVBO) == 112, "Invalid VertexArrayVBO size");

class VertexArrayBasic :
    public VertexArrayI
{
public:
    VertexArrayBasic(VertexArrayBasic const &); /* compiler_generated() */
    VertexArrayBasic();
    virtual void create(rndTable &, unsigned __int32, __int32) override;
    virtual void destroy(rndTable &) override;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unapply(rndTable &, unsigned __int32) override;
    virtual bool reapply(rndTable &, unsigned __int32) override;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) override;
private:
    unsigned __int32 m_handle; // 0x4
public:
    virtual ~VertexArrayBasic() override; /* compiler_generated() */
    VertexArrayBasic &operator=(VertexArrayBasic const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayBasic) == 8, "Invalid VertexArrayBasic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __VERTEXARRAYINTERNAL_H__
/* combined */
#ifndef __VERTEXARRAYINTERNAL_H__
#define __VERTEXARRAYINTERNAL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class VertexArrayI
{
public:
    virtual _inline ~VertexArrayI();
    virtual void create(rndTable &, unsigned __int32, __int32) = 0;
    virtual void destroy(rndTable &) = 0;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) = 0;
    virtual bool unapply(rndTable &, unsigned __int32) = 0;
    virtual bool reapply(rndTable &, unsigned __int32) = 0;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) = 0;
    VertexArrayI(VertexArrayI const &); /* compiler_generated() */
    _inline VertexArrayI(); /* compiler_generated() */
    VertexArrayI &operator=(VertexArrayI const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayI) == 4, "Invalid VertexArrayI size");

class VertexArrayVBO :
    public VertexArrayI
{
public:
    VertexArrayVBO(VertexArrayVBO const &); /* compiler_generated() */
    VertexArrayVBO();
    void setUsage(VertexBufferObjectUsage);
    virtual void create(rndTable &, unsigned __int32, __int32) override;
    virtual void destroy(rndTable &) override;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unapply(rndTable &, unsigned __int32) override;
    virtual bool reapply(rndTable &, unsigned __int32) override;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) override;
private:
    VertexBufferObjectUsage m_usage; // 0x4
    unsigned __int32 m_vbo; // 0x8
    VertexBufferDescriptor m_vbInfo; // 0xC
public:
    virtual _inline ~VertexArrayVBO() override; /* compiler_generated() */
    VertexArrayVBO &operator=(VertexArrayVBO const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayVBO) == 112, "Invalid VertexArrayVBO size");

class VertexArrayBasic :
    public VertexArrayI
{
public:
    VertexArrayBasic(VertexArrayBasic const &); /* compiler_generated() */
    VertexArrayBasic();
    virtual void create(rndTable &, unsigned __int32, __int32) override;
    virtual void destroy(rndTable &) override;
    virtual VertexBufferDescriptor const *lock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unlock(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool apply(rndTable &, unsigned __int32, __int32, __int32) override;
    virtual bool unapply(rndTable &, unsigned __int32) override;
    virtual bool reapply(rndTable &, unsigned __int32) override;
    virtual void writeVertexRange(rndTable &, unsigned __int32, __int32, unsigned __int32, unsigned __int32, FatVertex *) override;
private:
    unsigned __int32 m_handle; // 0x4
public:
    virtual _inline ~VertexArrayBasic() override; /* compiler_generated() */
    VertexArrayBasic &operator=(VertexArrayBasic const &); /* compiler_generated() */
};
static_assert(sizeof(VertexArrayBasic) == 8, "Invalid VertexArrayBasic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline VertexArrayI::~VertexArrayI() // 0x100ACF90
{
    mangled_assert("??1VertexArrayI@@UAE@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __VERTEXARRAYINTERNAL_H__
#endif
