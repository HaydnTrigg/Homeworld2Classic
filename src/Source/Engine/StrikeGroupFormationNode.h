#if 0
#ifndef __STRIKEGROUPFORMATIONNODE_H__
#define __STRIKEGROUPFORMATIONNODE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class StrikeGroupFormationNode :
    public SaveObject
{
public:
    StrikeGroupFormationNode(SaveGameData *);
private:
    StrikeGroupFormationNode(StrikeGroupFormationNode const &);
public:
    StrikeGroupFormationNode(StrikeGroupFormationNode const &, StrikeGroupFormationNode *);
    StrikeGroupFormationNode(LuaConfig &, StrikeGroupFormationNode *);
    virtual ~StrikeGroupFormationNode() override;
    bool getSquadronStation(Squadron const *, Squadron *&, vector3 &) const;
    bool addSquadron(Squadron *);
    bool removeSquadron(Squadron *);
    void removeAllSquadrons();
    StrikeGroupFormationNode *getNodeByName(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
    void addChildNode(StrikeGroupFormationNode *);
    _inline vector3 const &getVectorFromRoot() const;
    Squadron *getSquadron() const;
    StrikeGroupFormationNode const *getNodeFor(Squadron const *) const;
    float const getMaxSpeedFraction() const;
    bool isNodeInCombatOrAreChildrenInCombat() const;
    void mirrorSlots();
private:
    void setSquadron(Squadron *);
    void calculateSpacing();
    StrikeGroupFormationNode const *getCore() const;
    bool isDesiredTypeForNode(Squadron *);
    StrikeGroupFormationNode *m_parent; // 0xC
    std::list<StrikeGroupFormationNode *,std::allocator<StrikeGroupFormationNode *> > m_children; // 0x10
    unsigned __int32 m_familyFlags; // 0x18
    unsigned __int32 m_squadID; // 0x1C
    vector3 m_vectorFromParent; // 0x20
    vector3 m_vectorFromRoot; // 0x2C
    std::basic_string<char,std::char_traits<char>,std::allocator<char> > m_name; // 0x38
    float m_spacing; // 0x50
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static SaveData const m_saveData[0];
    static char const m_saveToken[0];
    StrikeGroupFormationNode &operator=(StrikeGroupFormationNode const &); /* compiler_generated() */
};
static_assert(sizeof(StrikeGroupFormationNode) == 84, "Invalid StrikeGroupFormationNode size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_inline vector3 const &StrikeGroupFormationNode::getVectorFromRoot() const // 0x50AD53
{
    mangled_assert("?getVectorFromRoot@StrikeGroupFormationNode@@QBEABVvector3@@XZ");
    todo("implement");
}

_inline bool StrikeGroupFormationNode::isDeterministic() // 0x50AD9C
{
    mangled_assert("?isDeterministic@StrikeGroupFormationNode@@UAE_NXZ");
    todo("implement");
}

_inline char const *StrikeGroupFormationNode::saveToken() // 0x50B054
{
    mangled_assert("?saveToken@StrikeGroupFormationNode@@UAEPBDXZ");
    todo("implement");
}

/* ---------- private code */

#endif // __STRIKEGROUPFORMATIONNODE_H__
#endif
