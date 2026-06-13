#if 0
#ifndef __FORMATIONTARGETINFOUTIL_H__
#define __FORMATIONTARGETINFOUTIL_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

class IntersectTarget :
    public FormationTargetInfo
{
public:
    IntersectTarget(IntersectTarget const &); /* compiler_generated() */
    IntersectTarget(Sob *, Sob *);
    virtual _inline ~IntersectTarget() override; /* compiler_generated() */
    IntersectTarget &operator=(IntersectTarget const &); /* compiler_generated() */
};
static_assert(sizeof(IntersectTarget) == 412, "Invalid IntersectTarget size");

class FlyToSpaceObject :
    public FormationTargetInfo
{
public:
    FlyToSpaceObject(FlyToSpaceObject const &); /* compiler_generated() */
    FlyToSpaceObject(Sob *, vector3 const &, vector3 const &, vector3 const &);
    FlyToSpaceObject(Sob *, vector3 const &);
    FlyToSpaceObject(Sob *);
    virtual _inline ~FlyToSpaceObject() override; /* compiler_generated() */
    FlyToSpaceObject &operator=(FlyToSpaceObject const &); /* compiler_generated() */
};
static_assert(sizeof(FlyToSpaceObject) == 412, "Invalid FlyToSpaceObject size");

class FlyToSquadron :
    public FormationTargetInfo
{
public:
    FlyToSquadron(FlyToSquadron const &); /* compiler_generated() */
    FlyToSquadron(Squadron *, vector3 const &);
    FlyToSquadron(Squadron *);
    virtual _inline ~FlyToSquadron() override; /* compiler_generated() */
    FlyToSquadron &operator=(FlyToSquadron const &); /* compiler_generated() */
};
static_assert(sizeof(FlyToSquadron) == 412, "Invalid FlyToSquadron size");

class FlyAtSpaceObject :
    public FormationTargetInfo
{
public:
    FlyAtSpaceObject(FlyAtSpaceObject const &); /* compiler_generated() */
    FlyAtSpaceObject(Sob *, vector3 const &);
    FlyAtSpaceObject(Sob *);
    virtual _inline ~FlyAtSpaceObject() override; /* compiler_generated() */
    FlyAtSpaceObject &operator=(FlyAtSpaceObject const &); /* compiler_generated() */
};
static_assert(sizeof(FlyAtSpaceObject) == 412, "Invalid FlyAtSpaceObject size");

class FlyToPoint :
    public FormationTargetInfo
{
public:
    FlyToPoint(FlyToPoint const &); /* compiler_generated() */
    FlyToPoint(vector3 const &, vector3 const &);
    FlyToPoint(vector3 const &);
    virtual _inline ~FlyToPoint() override; /* compiler_generated() */
    FlyToPoint &operator=(FlyToPoint const &); /* compiler_generated() */
};
static_assert(sizeof(FlyToPoint) == 412, "Invalid FlyToPoint size");

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __FORMATIONTARGETINFOUTIL_H__
#endif
