#if 0
#ifndef __HARDPOINTSTATIC_H__
#define __HARDPOINTSTATIC_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum HardPointHealthType
{
    HardPointHealthType_Indestructable = 0,
    HardPointHealthType_Damageable,
    HardPointHealthType_Destroyable,
};

/* ---------- definitions */

class HardPointStatic
{
public:
    HardPointStatic(HardPointStatic const &); /* compiler_generated() */
    HardPointStatic();
    ~HardPointStatic();
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    _inline void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline SubSystemType getType() const;
    _inline void setType(SubSystemType);
    _inline SubSystemFamily getFamily() const;
    _inline void setFamily(SubSystemFamily);
    _inline vector3 const &getPosition() const;
    _inline void setPosition(vector3 const &);
    _inline matrix3 const &getOrientation() const;
    _inline void setOrientation(matrix3 const &);
    _inline HardPointHealthType getHealthType() const;
    _inline void setHealthType(HardPointHealthType);
    _inline unsigned __int32 getDefaultSubSystemId() const;
    void setDefaultSubSystemId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addFittingSubSystem(unsigned __int32);
    bool doesSubSystemFit(unsigned __int32) const;
protected:
    SubSystemType m_type; // 0x0
    SubSystemFamily m_family; // 0x4
    vector3 m_position; // 0x8
    matrix3 m_orientation; // 0x14
    HardPointHealthType m_healthType; // 0x38
    unsigned __int32 m_defaultSubSystemId; // 0x3C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x40
    std::vector<unsigned int,std::allocator<unsigned int> > m_fittingSubSystems; // 0x58
    typedef std::vector<unsigned int,std::allocator<unsigned int> > FittingSubsystems;
public:
    HardPointStatic &operator=(HardPointStatic const &); /* compiler_generated() */
};
static_assert(sizeof(HardPointStatic) == 100, "Invalid HardPointStatic size");

class HardPointStatic
{
public:
    HardPointStatic(HardPointStatic const &); /* compiler_generated() */
    HardPointStatic();
    ~HardPointStatic();
    _inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &getName() const;
    _inline void setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    _inline SubSystemType getType() const;
    _inline void setType(SubSystemType);
    _inline SubSystemFamily getFamily() const;
    _inline void setFamily(SubSystemFamily);
    _inline vector3 const &getPosition() const;
    _inline void setPosition(vector3 const &);
    _inline matrix3 const &getOrientation() const;
    _inline void setOrientation(matrix3 const &);
    _inline HardPointHealthType getHealthType() const;
    _inline void setHealthType(HardPointHealthType);
    _inline unsigned __int32 getDefaultSubSystemId() const;
    void setDefaultSubSystemId(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addFittingSubSystem(unsigned __int32);
    bool doesSubSystemFit(unsigned __int32) const;
protected:
    SubSystemType m_type; // 0x0
    SubSystemFamily m_family; // 0x4
    vector3 m_position; // 0x8
    matrix3 m_orientation; // 0x14
    HardPointHealthType m_healthType; // 0x38
    unsigned __int32 m_defaultSubSystemId; // 0x3C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x40
    std::vector<unsigned int,std::allocator<unsigned int> > m_fittingSubSystems; // 0x58
    typedef std::vector<unsigned int,std::allocator<unsigned int> > FittingSubsystems;
public:
    HardPointStatic &operator=(HardPointStatic const &); /* compiler_generated() */
};
static_assert(sizeof(HardPointStatic) == 100, "Invalid HardPointStatic size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &HardPointStatic::getName() const // 0x48C86C
{
    mangled_assert("?getName@HardPointStatic@@QBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &) // 0x4D0317
{
    mangled_assert("?setName@HardPointStatic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    todo("implement");
}

_inline SubSystemType HardPointStatic::getType() const // 0x48D44D
{
    mangled_assert("?getType@HardPointStatic@@QBE?AW4SubSystemType@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setType(SubSystemType) // 0x4D0404
{
    mangled_assert("?setType@HardPointStatic@@QAEXW4SubSystemType@@@Z");
    todo("implement");
}

_inline SubSystemFamily HardPointStatic::getFamily() const // 0x48C14E
{
    mangled_assert("?getFamily@HardPointStatic@@QBE?AW4SubSystemFamily@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setFamily(SubSystemFamily) // 0x4D0303
{
    mangled_assert("?setFamily@HardPointStatic@@QAEXW4SubSystemFamily@@@Z");
    todo("implement");
}

_inline vector3 const &HardPointStatic::getPosition() const // 0x4EF036
{
    mangled_assert("?getPosition@HardPointStatic@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setPosition(vector3 const &) // 0x4D0332
{
    mangled_assert("?setPosition@HardPointStatic@@QAEXABVvector3@@@Z");
    todo("implement");
}

_inline matrix3 const &HardPointStatic::getOrientation() const // 0x4EF027
{
    mangled_assert("?getOrientation@HardPointStatic@@QBEABVmatrix3@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setOrientation(matrix3 const &) // 0x4D031F
{
    mangled_assert("?setOrientation@HardPointStatic@@QAEXABVmatrix3@@@Z");
    todo("implement");
}

_inline HardPointHealthType HardPointStatic::getHealthType() const // 0x4F0AEA
{
    mangled_assert("?getHealthType@HardPointStatic@@QBE?AW4HardPointHealthType@@XZ");
    todo("implement");
}

_inline void HardPointStatic::setHealthType(HardPointHealthType) // 0x4D030D
{
    mangled_assert("?setHealthType@HardPointStatic@@QAEXW4HardPointHealthType@@@Z");
    todo("implement");
}

_inline unsigned __int32 HardPointStatic::getDefaultSubSystemId() const // 0x4EF01C
{
    mangled_assert("?getDefaultSubSystemId@HardPointStatic@@QBEIXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __HARDPOINTSTATIC_H__
#endif
