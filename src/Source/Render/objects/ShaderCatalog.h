#if 0
#ifndef __SHADERCATALOG_H__
#define __SHADERCATALOG_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class ShaderCatalog
{
public:
    ShaderCatalog();
    ~ShaderCatalog();
    static ShaderCatalog *instance();
    static ShaderCatalog *i();
    bool release();
    void flushShaders(bool);
    Shader *getShader(char const *, bool);
    bool reloadShader(char const *);
    void debugShaders();
private:
    Shader *loadShader(char const *, bool);
    static ShaderCatalog *s_instance;
    typedef stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > NameToShaderMap;
    static stdext::hash_map<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,Shader *,stdext::hash_compare<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,Shader *> > > m_nameToShaderMap;
};
static_assert(sizeof(ShaderCatalog) == 1, "Invalid ShaderCatalog size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SHADERCATALOG_H__
#endif
