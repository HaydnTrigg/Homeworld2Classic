#if 0
#ifndef __PATHSTRING_H__
#define __PATHSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PathString
{
public:
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PathVector;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorI;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorCI;
private:
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > path; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > file; // 0xC
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > split(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void assign(PathString &, PathString const &);
protected:
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &getPath() const;
public:
    PathString(PathString const &);
    PathString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    PathString(char const *);
    PathString();
    PathString &operator=(PathString const &);
    void setFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void setFile(char const *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getFile() const;
    void addDir(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addDir(char const *);
    void addCurrentDir();
    void addPreviousDir();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > popDir();
    __int32 getNumDir() const;
    void clear();
    void clearDir();
    void clearFile();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > str() const;
    char const *c_str() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > dir_str() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > file_str() const;
    ~PathString(); /* compiler_generated() */
};
static_assert(sizeof(PathString) == 36, "Invalid PathString size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PATHSTRING_H__
/* combined */
#ifndef __PATHSTRING_H__
#define __PATHSTRING_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class PathString
{
public:
    typedef std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > PathVector;
    typedef std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorI;
    typedef std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > > PathVectorCI;
private:
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > path; // 0x0
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > file; // 0xC
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > split(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void assign(PathString &, PathString const &);
protected:
    _inline std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &getPath() const;
public:
    PathString(PathString const &);
    PathString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    PathString(char const *);
    PathString();
    PathString &operator=(PathString const &);
    void setFile(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void setFile(char const *);
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > getFile() const;
    void addDir(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addDir(char const *);
    void addCurrentDir();
    void addPreviousDir();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > popDir();
    __int32 getNumDir() const;
    void clear();
    void clearDir();
    void clearFile();
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > str() const;
    char const *c_str() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > dir_str() const;
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > file_str() const;
    _inline ~PathString(); /* compiler_generated() */
};
static_assert(sizeof(PathString) == 36, "Invalid PathString size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &_sub_10006294(PathString const *const);
_inline std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &PathString::getPath() const // 0x10006294
{
    mangled_assert("?getPath@PathString@@IBEABV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ");
    todo("implement");
    std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const & __result = _sub_10006294(this);
    return __result;
}

/* ---------- private code */

#endif // __PATHSTRING_H__
#endif
