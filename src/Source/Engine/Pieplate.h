#if 0
#ifndef __PIEPLATE_H__
#define __PIEPLATE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class Pieplate
{
public:
    Pieplate();
    ~Pieplate();
    enum Mode
    {
        MOVE_DISC = 0,
        PATH,
        OFF,
    };
    enum Shape
    {
        LINE = 0,
        SPHERE,
        BOX,
    };
    void update();
    void setOrigin(Selection const &);
    void setOrigin(vector3 const &);
    void resetOrigin();
    void setSelection(Selection const &);
    void setMode(Pieplate::Mode);
    void setHeightMode(bool);
    void setDepthMode(bool);
    void tryToSnapToSquadFoot();
    void setOffsetFromOriginMode(bool);
    void setCloseToPath(bool);
    void setPathPoint(vector3 const &);
    void setMaxMovementDistance(float);
    void setCommand(OrderType);
    void setHyperspaceCost(Fixed<10> const &);
    void setAllowMouseOver(bool);
    void setFocused(bool);
    void setShape(Pieplate::Shape);
    void incHeight(float);
    void enableEffect(bool);
    bool toggleHeightMode();
    bool toggleDepthMode();
    bool toggleFocusMode();
    void resetHeight();
    void reset();
    vector3 const &getOrigin() const;
    vector3 const &getMoveTo() const;
    bool invalidDestination() const;
    vector3 getBoxCorner() const;
    Selection const &getSelection() const;
    Pieplate::Mode getMode() const;
    OrderType getCommand() const;
    float getMaxMovementDistance() const;
    bool getAllowMouseOver() const;
    bool getFocused() const;
    bool isOn() const;
    bool isMode(Pieplate::Mode) const;
    bool isHeightMode() const;
    bool isDepthMode() const;
    bool isOffsetFromOriginMode() const;
    void calculateMoveTo(float, float, Camera *);
    void calculateMousePos(float &, float &, matrix4 const &, matrix4 const &);
    void draw(Camera const *, matrix4 const &, Selection const &, bool);
    void enableLock(bool, float, float);
    void addFoot(vector3 &, float);
    class Data;
    class Renderer;
private:
    Pieplate::Data *m_pimpl; // 0x0
    Pieplate::Renderer *m_renderer; // 0x4
};
static_assert(sizeof(Pieplate) == 8, "Invalid Pieplate size");

class Pieplate
{
public:
    Pieplate();
    ~Pieplate();
    enum Mode
    {
        MOVE_DISC = 0,
        PATH,
        OFF,
    };
    enum Shape
    {
        LINE = 0,
        SPHERE,
        BOX,
    };
    void update();
    void setOrigin(Selection const &);
    void setOrigin(vector3 const &);
    void resetOrigin();
    void setSelection(Selection const &);
    void setMode(Pieplate::Mode);
    void setHeightMode(bool);
    void setDepthMode(bool);
    void tryToSnapToSquadFoot();
    void setOffsetFromOriginMode(bool);
    void setCloseToPath(bool);
    void setPathPoint(vector3 const &);
    void setMaxMovementDistance(float);
    void setCommand(OrderType);
    void setHyperspaceCost(Fixed<10> const &);
    void setAllowMouseOver(bool);
    void setFocused(bool);
    void setShape(Pieplate::Shape);
    void incHeight(float);
    void enableEffect(bool);
    bool toggleHeightMode();
    bool toggleDepthMode();
    bool toggleFocusMode();
    void resetHeight();
    void reset();
    vector3 const &getOrigin() const;
    vector3 const &getMoveTo() const;
    bool invalidDestination() const;
    vector3 getBoxCorner() const;
    Selection const &getSelection() const;
    Pieplate::Mode getMode() const;
    OrderType getCommand() const;
    float getMaxMovementDistance() const;
    bool getAllowMouseOver() const;
    bool getFocused() const;
    bool isOn() const;
    bool isMode(Pieplate::Mode) const;
    bool isHeightMode() const;
    bool isDepthMode() const;
    bool isOffsetFromOriginMode() const;
    void calculateMoveTo(float, float, Camera *);
    void calculateMousePos(float &, float &, matrix4 const &, matrix4 const &);
    void draw(Camera const *, matrix4 const &, Selection const &, bool);
    void enableLock(bool, float, float);
    void addFoot(vector3 &, float);
    class Data;
    class Renderer;
private:
    Pieplate::Data *m_pimpl; // 0x0
    Pieplate::Renderer *m_renderer; // 0x4
};
static_assert(sizeof(Pieplate) == 8, "Invalid Pieplate size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __PIEPLATE_H__
#endif
