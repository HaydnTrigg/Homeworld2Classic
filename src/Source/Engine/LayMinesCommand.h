#if 0
#ifndef __LAYMINESCOMMAND_H__
#define __LAYMINESCOMMAND_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class LayMinesCommand :
    public Command,
    private Selection::Observer
{
public:
    LayMinesCommand(LayMinesCommand const &); /* compiler_generated() */
    LayMinesCommand(SaveGameData *);
    LayMinesCommand(Squadron *, std::list<vector3,std::allocator<vector3> > const &, Command::CommandOrigin);
    virtual ~LayMinesCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    static void getPointsFor(vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static void getPointsFromSphereFor(vector3 const &centre, float const radius, float const densityModifier, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static void getPointsFromCuboidFor(matrix3 const &rotation, vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static bool initialiseSpheres();
    static bool shutdownSpheres();
    _inline std::list<vector3,std::allocator<vector3> > const &getMinePoints() const;
    virtual char const *getName() const override;
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void flyToPoint(vector3 const &);
    void dropMine();
    std::list<vector3,std::allocator<vector3> > m_points; // 0x18
    Selection m_droppedMines; // 0x20
    float m_Time; // 0x54
    LayMinesCommand::State m_State; // 0x58
    enum State
    {
        Start = 0,
        HeadingToPoint,
        AtPoint,
    };
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LayMinesCommand &operator=(LayMinesCommand const &); /* compiler_generated() */
};
static_assert(sizeof(LayMinesCommand) == 92, "Invalid LayMinesCommand size");

class LayMinesCommand :
    public Command,
    private Selection::Observer
{
public:
    LayMinesCommand(LayMinesCommand const &); /* compiler_generated() */
    LayMinesCommand(SaveGameData *);
    LayMinesCommand(Squadron *, std::list<vector3,std::allocator<vector3> > const &, Command::CommandOrigin);
    virtual ~LayMinesCommand() override;
    virtual ComResult update(float) override;
    virtual CommandType getCommandType() const override;
    virtual void resetCommand() override;
    virtual void cleanUpCommand() override;
    virtual vector3 const &getDestinationDtrm() const override;
    virtual vector3 const &getDestinationVis() const override;
    virtual _inline bool canBeInterrupted(CommandType, Command *) override;
    static void getPointsFor(vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static void getPointsFromSphereFor(vector3 const &centre, float const radius, float const densityModifier, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static void getPointsFromCuboidFor(matrix3 const &rotation, vector3 const &centre, vector3 const &extent, unsigned __int32 const numberOfSquads, std::list<std::list<vector3,std::allocator<vector3> >,std::allocator<std::list<vector3,std::allocator<vector3> > > > &destinationLists);
    static bool initialiseSpheres();
    static bool shutdownSpheres();
    _inline std::list<vector3,std::allocator<vector3> > const &getMinePoints() const;
    virtual char const *getName() const override;
private:
    virtual void Notify_Insertion(Sob *) override;
    virtual void Notify_Removal(Sob *) override;
    void flyToPoint(vector3 const &);
    void dropMine();
    std::list<vector3,std::allocator<vector3> > m_points; // 0x18
    Selection m_droppedMines; // 0x20
    float m_Time; // 0x54
    LayMinesCommand::State m_State; // 0x58
    enum State
    {
        Start = 0,
        HeadingToPoint,
        AtPoint,
    };
public:
    virtual bool save(SaveGameData *, SaveType) override;
    virtual bool restore(SaveGameData *) override;
    virtual _inline bool isDeterministic() override;
    virtual void postRestore() override;
    virtual _inline char const *saveToken() override;
    void defaultSettings();
    static char const m_saveToken[0];
    static SaveData const m_saveData[0];
    LayMinesCommand &operator=(LayMinesCommand const &); /* compiler_generated() */
};
static_assert(sizeof(LayMinesCommand) == 92, "Invalid LayMinesCommand size");

class LayMinesCommandStaticInfo :
    public BaseCommandStaticInfo
{
public:
    LayMinesCommandStaticInfo(LayMinesCommandStaticInfo const &); /* compiler_generated() */
    LayMinesCommandStaticInfo(ShipStatic *);
    virtual ~LayMinesCommandStaticInfo() override;
    float m_mineLayingDelayTime; // 0x8
    LayMinesCommandStaticInfo &operator=(LayMinesCommandStaticInfo const &); /* compiler_generated() */
};
static_assert(sizeof(LayMinesCommandStaticInfo) == 12, "Invalid LayMinesCommandStaticInfo size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

_extern bool _sub_6AD321(LayMinesCommand *const, CommandType, Command *);
_inline bool LayMinesCommand::canBeInterrupted(CommandType, Command *) // 0x6AD321
{
    mangled_assert("?canBeInterrupted@LayMinesCommand@@UAE_NW4CommandType@@PAVCommand@@@Z");
    todo("implement");
    bool __result = _sub_6AD321(this, arg, arg);
    return __result;
}

_extern std::list<vector3,std::allocator<vector3> > const &_sub_612673(LayMinesCommand const *const);
_inline std::list<vector3,std::allocator<vector3> > const &LayMinesCommand::getMinePoints() const // 0x612673
{
    mangled_assert("?getMinePoints@LayMinesCommand@@QBEABV?$list@Vvector3@@V?$allocator@Vvector3@@@std@@@std@@XZ");
    todo("implement");
    std::list<vector3,std::allocator<vector3> > const & __result = _sub_612673(this);
    return __result;
}

_extern bool _sub_6AE3D8(LayMinesCommand *const);
_inline bool LayMinesCommand::isDeterministic() // 0x6AE3D8
{
    mangled_assert("?isDeterministic@LayMinesCommand@@UAE_NXZ");
    todo("implement");
    bool __result = _sub_6AE3D8(this);
    return __result;
}

_extern char const *_sub_6AE583(LayMinesCommand *const);
_inline char const *LayMinesCommand::saveToken() // 0x6AE583
{
    mangled_assert("?saveToken@LayMinesCommand@@UAEPBDXZ");
    todo("implement");
    char const * __result = _sub_6AE583(this);
    return __result;
}

/* ---------- private code */

#endif // __LAYMINESCOMMAND_H__
#endif
