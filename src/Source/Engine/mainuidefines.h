#if 0
#ifndef __MAINUIDEFINES_H__
#define __MAINUIDEFINES_H__
#pragma once

/* ---------- headers */

/* ---------- constants */

enum MUI_Commands
{
    MUI_CancelCommand = 0,
    MUI_WaypointCommand,
    MUI_WaypointModeCommand,
    MUI_DeleteCommand,
    MUI_FocusCommand,
    MUI_NextFocusCommand,
    MUI_PreviousFocusCommand,
    MUI_AttackCommand,
    MUI_MoveCommand,
    MUI_StopCommand,
    MUI_CreateGroupCommand,
    MUI_SelectGroupCommand,
    MUI_SetSelectionCommand,
    MUI_TacticalOverlayToggleCommand,
    MUI_DockCommand,
    MUI_GuardCommand,
    MUI_ParadeCommand,
    MUI_HarvestCommand,
    MUI_ShiftModifierCommand,
    MUI_ControlModifierCommand,
    MUI_FocusModifierCommand,
    MUI_ZoomCommand,
    MUI_SensorsManagerToggleCommand,
    MUI_OrderFeedbackCommand,
    MUI_SelectAllVisibleCommand,
    MUI_FocusHomeCommand,
    MUI_HyperspaceCommand,
    MUI_RepairCommand,
    MUI_SpecialAttackCommand,
    MUI_SetRallyPoint,
    MUI_SetRallyObject,
    MUI_RetireCommand,
    MUI_DropMinesCommand,
    MUI_MoveAttackCommand,
    MUI_MilitaryCommand,
    MUI_DefenseFieldCommand,
    MUI_CloakCommand,
    MUI_CaptureCommand,
    MUI_SensorPingCommand,
    MUI_DeployMinesCommand,
    MUI_ScuttleCommand,
    MUI_TempWaypointCommand,
    MUI_NumCommands,
};

enum MUI_CommandModes
{
    MUI_CM_Normal = 0,
    MUI_CM_Attack,
    MUI_CM_ForceAttack,
    MUI_CM_Add,
    MUI_CM_Eye,
    MUI_CM_Guard,
    MUI_CM_Harvest,
    MUI_CM_Dock,
    MUI_CM_Repair,
    MUI_CM_Cloak,
    MUI_CM_Mine,
    MUI_CM_Capture,
    MUI_CM_WaypointMove,
    MUI_CM_Move,
    MUI_CM_ShipRelativeMove,
    MUI_CM_Hyperspace,
    MUI_CM_FormGate,
    MUI_CM_HyperspaceViaGate,
    MUI_CM_SpecialAttack,
    MUI_CM_SetRallyObject,
    MUI_CM_DefenseField,
    MUI_CM_MoveAttack,
    MUI_CM_Salvage,
    MUI_CM_Military,
    MUI_CM_NumModes,
};

enum MUI_SelectionMode
{
    MUI_Sel_MouseOver = 0,
    MUI_Sel_BandBox,
    MUI_SEL_NumModes,
};

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

#endif // __MAINUIDEFINES_H__
#endif
