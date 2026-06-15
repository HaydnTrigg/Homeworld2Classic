#if 0
#ifndef __PARSER_H__
#define __PARSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Parser
{
public:
    Parser(char *);
    Parser(char const *);
    Parser();
    ~Parser();
    void setData(char *);
    __int32 loadFile(char const *);
    __int32 getLineNum();
    char *getData();
    void setLookahead(char *);
    char *returnLookahead();
    __int32 matchString(char const *);
    __int32 isNextMatch(char const *);
    __int32 matchAny();
    __int32 matchInt(__int32 *);
    __int32 matchFloat(float *);
    __int32 matchBoolean(__int32 *);
    __int32 matchVector3(float *);
    __int32 matchQuat(float *);
    __int32 matchLine();
    __int32 matchIntParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, __int32 *);
    __int32 matchFloatParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, float *);
    __int32 lenDataLeft();
    char *returnDataLeft();
    void returnLine(char *, __int32);
private:
    char *return_token(char **);
    char *lexan();
    bool m_bDeleteData; // 0x0
    __int32 m_lineNum; // 0x4
    __int32 m_iFileLen; // 0x8
    char *m_alldata; // 0xC
    char *m_pData; // 0x10
    char m_token[256]; // 0x14
    char *m_lookahead; // 0x114
};
static_assert(sizeof(Parser) == 280, "Invalid Parser size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PARSER_H__
/* combined */
#ifndef __PARSER_H__
#define __PARSER_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Parser
{
public:
    Parser(char *);
    Parser(char const *);
    Parser();
    ~Parser();
    void setData(char *);
    __int32 loadFile(char const *);
    _inline __int32 getLineNum();
    _inline char *getData();
    _inline void setLookahead(char *);
    char *returnLookahead();
    __int32 matchString(char const *);
    __int32 isNextMatch(char const *);
    __int32 matchAny();
    __int32 matchInt(__int32 *);
    __int32 matchFloat(float *);
    __int32 matchBoolean(__int32 *);
    __int32 matchVector3(float *);
    __int32 matchQuat(float *);
    __int32 matchLine();
    __int32 matchIntParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, __int32 *);
    __int32 matchFloatParam(std::vector<ShaderParam *,std::allocator<ShaderParam *> > &, float *);
    __int32 lenDataLeft();
    char *returnDataLeft();
    void returnLine(char *, __int32);
private:
    char *return_token(char **);
    char *lexan();
    bool m_bDeleteData; // 0x0
    __int32 m_lineNum; // 0x4
    __int32 m_iFileLen; // 0x8
    char *m_alldata; // 0xC
    char *m_pData; // 0x10
    char m_token[256]; // 0x14
    char *m_lookahead; // 0x114
};
static_assert(sizeof(Parser) == 280, "Invalid Parser size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline __int32 Parser::getLineNum() // 0x1008A400
{
    mangled_assert("?getLineNum@Parser@@QAEHXZ");
    todo("implement");
}

_inline char *Parser::getData() // 0x1008A3F0
{
    mangled_assert("?getData@Parser@@QAEPADXZ");
    todo("implement");
}

_inline void Parser::setLookahead(char *) // 0x1008A480
{
    mangled_assert("?setLookahead@Parser@@QAEXPAD@Z");
    todo("implement");
}

/* ---------- private code */

#endif // __PARSER_H__
#endif
