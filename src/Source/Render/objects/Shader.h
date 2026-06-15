#if 0
#ifndef __SHADER_H__
#define __SHADER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Shader :
    public Parsable
{
public:
    _inline Shader(Shader const &); /* compiler_generated() */
    Shader();
    ~Shader();
    void parse(Parser &, bool);
    __int32 getNumPasses();
    ShaderPass *getPass(__int32);
    char const *getName();
    void setName(char const *);
    void addPass(ShaderPass *);
    std::vector<ShaderParam *,std::allocator<ShaderParam *> > &getParamList();
    unsigned __int32 m_flags; // 0x0
    bool m_bETGShader; // 0x4
private:
    char m_name[64]; // 0x5
    std::vector<ShaderPass *,std::allocator<ShaderPass *> > m_passes; // 0x48
    std::vector<ShaderParam *,std::allocator<ShaderParam *> > m_params; // 0x54
public:
    static void setOverrideShader(Shader *shader);
    static void clearOverrideShader();
    void flush();
    _inline Shader &operator=(Shader const &); /* compiler_generated() */
};
static_assert(sizeof(Shader) == 96, "Invalid Shader size");

class ShaderInstance
{
public:
    _inline ShaderInstance(ShaderInstance const &); /* compiler_generated() */
    ShaderInstance(Shader *);
    ~ShaderInstance();
    char const *getName();
    Shader *getShader();
    ShaderParam *getParam(char *);
    _inline ShaderParam *getParam(__int32);
    _inline std::vector<ShaderParam *,std::allocator<ShaderParam *> > &getShaderParams();
    void setParam(__int32, void *);
    void setName(char const *);
    void applyParams();
private:
    char m_name[64]; // 0x0
    Shader *m_shader; // 0x40
    std::vector<ShaderParam *,std::allocator<ShaderParam *> > m_params; // 0x44
public:
    _inline ShaderInstance &operator=(ShaderInstance const &); /* compiler_generated() */
};
static_assert(sizeof(ShaderInstance) == 80, "Invalid ShaderInstance size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline ShaderParam *ShaderInstance::getParam(__int32) // 0x10085860
{
    mangled_assert("?getParam@ShaderInstance@@QAEPAVShaderParam@@H@Z");
    todo("implement");
}

_inline std::vector<ShaderParam *,std::allocator<ShaderParam *> > &ShaderInstance::getShaderParams() // 0x10085880
{
    mangled_assert("?getShaderParams@ShaderInstance@@QAEAAV?$vector@PAVShaderParam@@V?$allocator@PAVShaderParam@@@std@@@std@@XZ");
    todo("implement");
}

/* ---------- private code */

#endif // __SHADER_H__
#endif
