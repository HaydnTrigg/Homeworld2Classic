#if 0
#ifndef __SOBTYPES_H__
#define __SOBTYPES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum SobType
{
    SobType_Invalid = -1, // 0xFF
    SobType_Ship = 0, // 0x0000
    SobType_WeaponFire = 1, // 0x0001
    SobType_Volume = 2, // 0x0002
    SobType_Asteroid = 3, // 0x0003
    SobType_Salvage = 4, // 0x0004
    SobType_DustCloud = 5, // 0x0005
    SobType_Formation = 6, // 0x0006
    SobType_Missile = 7, // 0x0007
    SobType_Weapon = 8, // 0x0008
    SobType_SubSystem = 9, // 0x0009
    SobType_Nebula = 10, // 0x000A
    SobType_DefenseField = 11, // 0x000B
    NUMBER_DetermSobTypes = 12, // 0x000C
    SobType_Waypoint = 12, // 0x000C
    SobType_Pebble = 13, // 0x000D
    SobType_Cloud = 14, // 0x000E
    NUMBER_SobTypes = 15, // 0x000F
};

enum VolumeType
{
    VOL_Point = 0,
    VOL_Sphere,
    VOL_AxisAlignBox,
    VOL_COUNT,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __SOBTYPES_H__
#endif
