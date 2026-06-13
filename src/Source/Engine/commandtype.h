#if 0
#ifndef __COMMANDTYPE_H__
#define __COMMANDTYPE_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum CommandType
{
    COMMAND_Idle = 0,
    COMMAND_Move,
    COMMAND_Attack,
    COMMAND_Build,
    COMMAND_Dock,
    COMMAND_Resource,
    COMMAND_Launch,
    COMMAND_WaypointMove,
    COMMAND_Parade,
    COMMAND_Guard,
    COMMAND_Capture,
    COMMAND_Hyperspace,
    COMMAND_MoveToSob,
    COMMAND_FormHyperspaceGate,
    COMMAND_HyperspaceViaGate,
    COMMAND_Repair,
    COMMAND_Retire,
    COMMAND_Despawn,
    COMMAND_LayMines,
    COMMAND_Salvage,
    COMMAND_AttackMove,
    COMMAND_RallyParade,
    COMMAND_NumCommands,
};

enum OrderType
{
    ORDER_NoOrder = 0, // 0x0000
    ORDER_Move = 1, // 0x0001
    ORDER_Attack = 2, // 0x0002
    ORDER_Build = 3, // 0x0003
    ORDER_Dock = 4, // 0x0004
    ORDER_Resource = 5, // 0x0005
    ORDER_Idle = 6, // 0x0006
    ORDER_WaypointMove = 7, // 0x0007
    ORDER_Launch = 8, // 0x0008
    ORDER_ToggleAutoLaunch = 9, // 0x0009
    ORDER_Parade = 10, // 0x000A
    ORDER_Alliance = 11, // 0x000B
    ORDER_AllianceTransfer = 12, // 0x000C
    ORDER_Research = 13, // 0x000D
    ORDER_Halt = 14, // 0x000E
    ORDER_CancelResearch = 15, // 0x000F
    ORDER_PauseResearch = 16, // 0x0010
    ORDER_PauseBuildQueue = 17, // 0x0011
    ORDER_MoveToTopOfBuildQueue = 18, // 0x0012
    ORDER_MoveToTopOfResearchQueue = 19, // 0x0013
    ORDER_FormStrikeGroup = 20, // 0x0014
    ORDER_SetTactics = 21, // 0x0015
    ORDER_Guard = 22, // 0x0016
    ORDER_Capture = 23, // 0x0017
    ORDER_Hyperspace = 24, // 0x0018
    ORDER_Scuttle = 25, // 0x0019
    ORDER_MoveToSob = 26, // 0x001A
    ORDER_FormHyperspaceGate = 27, // 0x001B
    ORDER_HyperspaceViaGate = 28, // 0x001C
    ORDER_SensorPing = 29, // 0x001D
    ORDER_Repair = 30, // 0x001E
    ORDER_Cloak = 31, // 0x001F
    ORDER_HyperspaceOffMap = 32, // 0x0020 ' '
    ORDER_Retire = 33, // 0x0021 '!'
    ORDER_SetRallyPoint = 34, // 0x0022 '"'
    ORDER_Despawn = 35, // 0x0023 '#'
    ORDER_LayMines = 36, // 0x0024 '$'
    ORDER_DefenseField = 37, // 0x0025 '%'
    ORDER_Kamikaze = 38, // 0x0026 '&'
    ORDER_RetireSubSystems = 39, // 0x0027 '''
    ORDER_Salvage = 40, // 0x0028 '('
    ORDER_LeaveStrikeGroup = 41, // 0x0029 ')'
    ORDER_AttackMove = 42, // 0x002A '*'
    ORDER_AddToStrikeGroup = 43, // 0x002B '+'
    ORDER_TempWaypointMove = 44, // 0x002C ','
    ORDER_Surrender = 45, // 0x002D '-'
    ORDER_Chat = 46, // 0x002E '.'
    ORDER_StagingArea = 47, // 0x002F '/'
    ORDER_ContentDownload = 48, // 0x0030 '0'
    ORDER_Pause = 49, // 0x0031 '1'
    ORDER_Unpause = 50, // 0x0032 '2'
    ORDER_DropPlayer = 51, // 0x0033 '3'
    ORDER_NumberOfOrders = 52, // 0x0034 '4'
    ORDER_FrameOrders = 128, // 0x0080
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __COMMANDTYPE_H__
#endif
