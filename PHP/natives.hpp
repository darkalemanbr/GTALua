#pragma once
#include "types.h"

namespace AI
{
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(Any* p0, Any p1) { return invoke<float>(0x6C26484D20845070, p0, p1); }
static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x729CF4943DFABB73, ped); }
static void SET_SCENARIO_GROUP_ENABLED(char* scenarioGroup, BOOL p1) { invoke<Void>(0xE28C11441D3C6728, scenarioGroup, p1); }
static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { invoke<Void>(0x3D36F443AE7F8236, p0, p1, p2, p3); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) { invoke<Void>(0xD51A787BB45EACB9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) { invoke<Void>(0x407478B39E1FE456, p0, p1, p2, p3, p4, p5); }
static void SET_PARACHUTE_TASK_THRUST(Any p0, float p1) { invoke<Void>(0x846BBCB286E634D5, p0, p1); }
static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any* p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5A3E25570D8C617D, p0, p1, p2, p3, p4); }
static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0x63F42E0E0601969D, entity, target, duration, firingPattern); }
static void TASK_RAPPEL_FROM_HELI(Ped ped, int p1) { invoke<Void>(0x55202F5BDBEE75AA, ped, p1); }
static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) { return invoke<BOOL>(0x1262CC69BD01BD7C, p0, p1, p2, p3, p4, p5); }
static void TASK_JUMP(Ped ped, BOOL unused) { invoke<Void>(0x90847097E95FDD5, ped, unused); }
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0x490E5086E14B644E); }
static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xCBCDD0224F846664, p0, p1, p2); }
static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0xE0515572A97718F4, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); }
static void TASK_CLEAR_LOOK_AT(Ped playerPed) { invoke<Void>(0x7440EFC435CB25D1, playerPed); }
static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<Void>(0x32055D255A5648A0, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, p7, noRoadsDistance); }
static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { invoke<Void>(0x51803D2DB78F6B69, ped, target, p2); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) { invoke<Void>(0xB442DD37DF569C77, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); }
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) { invoke<Void>(0xE525AF786105DD38, p0, p1); }
static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0x965EE43EA07CD10, ped, p1, p2, p3, p4, p5); }
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0xA80CFE0B8267DCC8, dist); }
static void TASK_START_SCENARIO_IN_PLACE(Ped ped, char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0x603942C851F9C09, ped, scenarioName, unkDelay, playEnterAnim); }
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0x6E336752A0165292, ped, vehicle, x, y, z, speed, driveMode, stopRange); }
static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, Any p9, float p10, Any p11) { invoke<Void>(0xFA67FF269DD72D2A, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, p9, p10, p11); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float zeroFloat, int zeroInt, float zeroFloat2) { invoke<Void>(0xE4A57337AE998385, ped, x, y, z, speed, timeout, zeroFloat, zeroInt, zeroFloat2); }
static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xEC500F39EFE9D522, ped); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float speed, int timeout, float unkFloat, int unkInt, float unkX, float unkY, float unkZ, float unk_40000f) { invoke<Void>(0xC2CFEF9DB8373C96, ped, x, y, z, speed, timeout, unkFloat, unkInt, unkX, unkY, unkZ, unk_40000f); }
static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xDAA9D89ADC7FE2C9, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xF5E37818FAE1D825, ped, meleeTarget, p2, p3, p4, p5); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped p0, float x, float y, float z, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x9F1CEAA058D36400, p0, x, y, z, p4, p5, p6, p7, p8, p9, p10, p11); }
static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0x7ACF885D02B287A3, ped, x, y, z, duration); }
static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) { invoke<Void>(0x8360F47E760DD9A9, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7); }
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xADD2A144138FC1B5, x, y, z); }
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float p1) { invoke<Void>(0xA1FA3BB70DC8A28D, ped, p1); }
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Any p0) { return invoke<float>(0xBF56FD7AC0E37EA6, p0); }
static void TASK_SWEEP_AIM_ENTITY(Ped ped, char* anim, char* p2, char* p3, char* p4, int p5, Vehicle vehicle, float p7, float p8) { invoke<Void>(0x25BBB1BCA3FAB1F, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); }
static void SET_ANIM_WEIGHT(Any p0, float p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xDCD22ECD2B54E714, p0, p1, p2, p3, p4); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2) { invoke<Void>(0x7EE88106C4A0F9FC, p0, p1, p2); }
static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) { invoke<Void>(0x3DA9DFE29006A19F, ped, fleeTarget, distance, fleeTime, p4, p5); }
static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0x2FF76D45942329BA, p0, p1); }
static void TASK_PLANE_MISSION(Ped pilot, Vehicle plane, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int p7, float physicsSpeed, float p9, float p10, float maxAltitude, float minAltitude) { invoke<Void>(0x2F12745174B8C3A0, pilot, plane, targetVehicle, targetPed, destinationX, destinationY, destinationZ, p7, physicsSpeed, p9, p10, maxAltitude, minAltitude); }
static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xEBAFB5F069759DB3, p0, p1, p2, p3); }
static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x5A95954B07C0C0A, ped); }
static Any GET_PED_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0x1E7649D94CEB0FD6, p0); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x603D1721FED38663, p0, p1, p2, p3, p4, p5); }
static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0xF0B8508F5EE6C739, ped); }
static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x8D1E4231095B313B, ped); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, float p1, Any p2, Any p3) { invoke<Void>(0x40D12722C6FCC132, p0, p1, p2, p3); }
static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x4A18F12F3507DC2F, pilot, entityToFollow, x, y, z); }
static void _0xB7E25185B59B5358(Ped ped, char* task, float multiplier, BOOL p3, char* animDict, int flags) { invoke<Void>(0xB7E25185B59B5358, ped, task, multiplier, p3, animDict, flags); }
static void TASK_DRIVE_BY(Ped p0, Ped targetPed, Any p2, float targetX, float targetY, float targetZ, float p6, Any p7, BOOL p8, Hash firingPattern) { invoke<Void>(0x79BC35B5729FAC2E, p0, targetPed, p2, targetX, targetY, targetZ, p6, p7, p8, firingPattern); }
static Any WAYPOINT_RECORDING_GET_COORD(Any p0, Any p1, Any p2) { return invoke<Any>(0xDB5C953D6BD61BB8, p0, p1, p2); }
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0x3F7D64512FB9EE1, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); }
static BOOL _0x4ACD54462C94342(Any p0) { return invoke<BOOL>(0x4ACD54462C94342, p0); }
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5, Any p6, float p7, BOOL p8, float p9) { invoke<Void>(0x347457A360E454FB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void TASK_GOTO_ENTITY_OFFSET_XY(Any p0, Any p1, Any p2, float p3, float p4, float p5, float p6, Any p7) { invoke<Void>(0x4592A3AC866799EE, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xF89375AB4D41AFA7, ped); }
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char* route) { invoke<Void>(0x3EE330FEB4D10E4C, route); }
static BOOL IS_SCENARIO_GROUP_ENABLED(char* scenarioGroup) { return invoke<BOOL>(0x28CF037DC47EE46D, scenarioGroup); }
static Any CLEAR_SEQUENCE_TASK(Object* taskSequence) { return invoke<Any>(0x433C209504FBC7EE, taskSequence); }
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x246DB3A0E0918F4E, ped, toggle); }
static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8) { invoke<Void>(0xA3D422F1F33045B4, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static Any CLOSE_SEQUENCE_TASK(Object taskSequence) { return invoke<Any>(0x33F83FC0F5F458E3, taskSequence); }
static BOOL IS_SCENARIO_TYPE_ENABLED(char* scenarioType) { return invoke<BOOL>(0x38F1147126ACCD4A, scenarioType); }
static Any GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(Any p0) { return invoke<Any>(0xEE364FA9A1DD05E, p0); }
static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0x10983DD43F9EBAD, driver, targetEnt); }
static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x879B4BD03DB983D2, ped); }
static BOOL _0xB0268B85799475A2(Any p0) { return invoke<BOOL>(0xB0268B85799475A2, p0); }
static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0x4F84B4D98F3DA350, ped, duration); }
static void _TASK_STOP_PHONE_GESTURE_ANIMATION(Any p0) { invoke<Void>(0x28224EA5EDFBCEFE, p0); }
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { invoke<Void>(0x54D07F6EC0E6D324, p0, p1); }
static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoke<Any>(0x576F8D887AA9D188, p0); }
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, Any timeout, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { invoke<Void>(0x5A125963515AB5EB, ped, x, y, z, timeout, p5, p6, p7, p8, p9, p10); }
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x7E4ABC985C51B1AE); }
static void SET_PED_PATH_AVOID_FIRE(Any p0, BOOL p1) { invoke<Void>(0xC3A6B5E1035F14F, p0, p1); }
static void TASK_VEHICLE_AIM_AT_COORD(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x91800F66B8E44BDE, vehicle, x, y, z); }
static void TASK_SHOCKING_EVENT_REACT(Ped ped, Any event) { invoke<Void>(0x76D0D93FC025A543, ped, event); }
static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0xCB0785EBF6DAFF80, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); }
static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0x3962F271DFF22C89, ped, x, y, z, duration, firingPattern); }
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Any p0) { return invoke<float>(0xB09ABE9380B50D1C, p0); }
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0xA249D6E4A7359B69, p0); }
static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xF55CF905F405E357, ped, vehicle, speed, drivingStyle); }
static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { invoke<Void>(0xDCC927D2BB77E99C, p0, p1, p2, p3); }
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0x496B6221561AC306, ped, x, y, z, radius, p5); }
static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { invoke<Void>(0xD851850C36B6C8A9, ped, state, p2); }
static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { invoke<Void>(0x550B00F01FC4ADF0, ped, p1, p2); }
static void TASK_VEHICLE_SHOOT_AT_COORD(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0x2372632B3BC77D15, vehicle, x, y, z, p4); }
static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(Any* p0, Any* p1) { return invoke<BOOL>(0x5C686C7E826F6CCF, p0, p1); }
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) { return invoke<int>(0x6C2875E66ED4D80B, veh); }
static void SET_EXCLUSIVE_SCENARIO_GROUP(char* scenarioGroup) { invoke<Void>(0xA55C6555EA5B4D4A, scenarioGroup); }
static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x431C14C947878B67, ped); }
static void SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) { invoke<Void>(0x575C8AF5AF9A9FED, taskSequence, repeat); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0xFA9B776034846E2F, ped, x, y, z, radius, p5); }
static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x1A16B1BA696A551D, coverpoint); }
static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int unknown) { invoke<Void>(0x29470C4B71346D2, ped, speed, unknown); }
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) { invoke<Void>(0x214984AD6856C2D7, p0, p1, p2, p3); }
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float p5, float p6) { invoke<Void>(0xBEC6AC05F460461F, ped, x, y, z, heading, p5, p6); }
static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) { return invoke<BOOL>(0x35A830607A198ABC, x, y, z, radius, b); }
static Any TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { return invoke<Any>(0x8B8674266D533E9F, ped, taskSequence); }
static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0xF14C2AE8A3F59CE0, ped, entity, duration); }
static void TASK_GO_TO_COORD_ANY_MEANS(Ped p0, float x, float y, float z, float speed, Any p5, BOOL p6, int drivingStyle, float p8) { invoke<Void>(0xA141BAEF7921107F, p0, x, y, z, speed, p5, p6, drivingStyle, p8); }
static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x9459094F36F0BFDC, driver, cruiseSpeed); }
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x3A3FF0970AAA1D1A, p0); }
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xCEB93D0B7F722540, ped, x, y, z); }
static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0x7D53E66325CAFB79, ped, duration); }
static void TASK_SKY_DIVE(Ped ped) { invoke<Void>(0xB344FF705AEFB57, ped); }
static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char* route) { return invoke<BOOL>(0xABCC5756D7CA4CBE, route); }
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x1A615D6BB9EC592F, entity1, entity2, p2, p3, p4, p5, p6); }
static BOOL _0xD110A81FD0FD5F76(Any p0) { return invoke<BOOL>(0xD110A81FD0FD5F76, p0); }
static void TASK_RELOAD_WEAPON(Ped ped, BOOL doReload) { invoke<Void>(0x87BBE9E99A020CAC, ped, doReload); }
static Any GET_NAVMESH_ROUTE_RESULT(Any p0) { return invoke<Any>(0x27D2560F095A2268, p0); }
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0x84ADBFECD93C2C50, ped, distance); }
static void TASK_VEHICLE_MISSION(Any p0, Any p1, Any p2, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0x1F77863D3EF27FD4, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x62C849827BA0555D, p0); }
static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { invoke<Void>(0xB974406BCBB37194, ped, x, y, z, time, p5, p6); }
static void UNCUFF_PED(Ped ped) { invoke<Void>(0xAAEB16EC0263D4AB, ped); }
static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int unknown1, int unknown2) { invoke<Void>(0x85FD30B510E7C05E, ped, lookAt, duration, unknown1, unknown2); }
static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, char* animation_set, char* animation_name) { invoke<Void>(0xB66D182CA05A4A52, vehicle, animation_set, animation_name); }
static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { invoke<Void>(0x9B6F077214CEDE77, entity, target, duration, distance, speed, p5, p6); }
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0x34625BE0BB862DA3, height); }
static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6) { invoke<Void>(0x398367D1AEB7ED62, entity, x, y, z, duration, p5, p6); }
static void SET_ANIM_LOOPED(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x6CC1CFDF526A6351, p0, p1, p2, p3); }
static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xBE3AC69427B4FF38, p0); }
static char* _0x4796A7DAFAD8B6DC(Entity entity) { return invoke<char*>(0x4796A7DAFAD8B6DC, entity); }
static void TASK_THROW_PROJECTILE(Any p0, float x, float y, float z) { invoke<Void>(0x611FE091310C4A46, p0, x, y, z); }
static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0x46DB6AA439E2758D, ped, fleeTarget); }
static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, char* animDict, char* animName) { invoke<Void>(0x4532AD024C76745E, ped, animDict, animName); }
static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0xFDDF4C4054FCC886, ped); }
static void TASK_SEEK_COVER_FROM_POS(Any p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0x9394142D5A8A233, p0, p1, p2, p3, p4, p5); }
static void DELETE_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0x127E405068C974E1, patrolRoute); }
static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0xE2A3948C5973E8CC, p0, p1, p2, p3, p4, p5); }
static Any SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { return invoke<Any>(0x933BC8B8B4134020, ped, Toggle); }
static int GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash) { return invoke<int>(0x810AFFABCBF31E2D, targetPed, taskHash); }
static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xCFDCACBBA77D9276, p0, p1, p2, p3, p4); }
static void TASK_EXIT_COVER(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0x9307C3340D9964B2, p0, p1, p2, p3, p4); }
static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL p2, BOOL p3) { invoke<Void>(0xD6FE02CD3A8D76CB, ped, scriptTask, p2, p3); }
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) { invoke<Void>(0x2F4E6A5807842BEF, ped, vehicle); }
static void TASK_SWEEP_AIM_POSITION(Any p0, Any* p1, Any* p2, Any* p3, Any* p4, Any p5, float p6, float p7, float p8, float p9, float p10) { invoke<Void>(0x3347D76C03D2E9B9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) { invoke<Void>(0xEF97E2FE926E823D, ped, radius, p2); }
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0xA58D164970875BCF, p0, p1, p2); }
static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0x6BBF264760160857, vehicle); }
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(char* route) { invoke<Void>(0x416D7FE1927AF869, route); }
static void TASK_PLAY_ANIM_ADVANCED(Ped ped, char* animDict, char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, Any p14, Any p15) { invoke<Void>(0xFEB38679E5E29979, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); }
static void TASK_FLUSH_ROUTE() { invoke<Void>(0xA1D2174FACAF61A3); }
static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) { invoke<Void>(0xF6C16D6C995CD9D7, ped, target, duration, p3); }
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x20F71E6370022C2C, ped); }
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) { invoke<Void>(0xF1258D86F8847A7F, ped, ped2); }
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0x98DD7434CFA2181, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x500B88F6A1F3B822, ped); }
static Any _0xD3DD800F9078905B(Ped p0, float p1) { return invoke<Any>(0xD3DD800F9078905B, p0, p1); }
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x8C7C6E170652BC13, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xF4F135C1DE46A0CA, p0, p1, p2, p3, p4); }
static void TASK_CLIMB(Ped ped, BOOL unused) { invoke<Void>(0x763A03B7D9D9EC56, ped, unused); }
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoke<Void>(0xEF936724A389D0F0, p0); }
static void TASK_CHAT_TO_PED(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xAFEA49BE83A57A1A, ped, target, p2, p3, p4, p5, p6, p7); }
static void SET_HIGH_FALL_TASK(Ped p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE8B1CB42DAFBE552, p0, p1, p2, p3); }
static Any SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { return invoke<Any>(0x87053360846AD4, ped, Toggle); }
static void ADD_PATROL_ROUTE_NODE(int p0, char* p1, float x1, float y1, float z1, float x2, float y2, float z2, int p8) { invoke<Void>(0x2BE51BFA4CC5FBEE, p0, p1, x1, y1, z1, x2, y2, z2, p8); }
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped p0, Any* p1, Any* p2, Any* p3, float p4, float p5, BOOL p6, BOOL p7) { invoke<Void>(0x6292202A30E5FFEF, p0, p1, p2, p3, p4, p5, p6, p7); }
static void _0x4C4E7A863737407C(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x4C4E7A863737407C, p0, p1, p2); }
static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x8265D96B5808A45B, ped); }
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xF2E2A21DDA5A0DA4, ped, toggle); }
static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x4E2F67DAF5750EE5, ped, time); }
static BOOL _0x7C3CB7FB8C434587(int PlayerID) { return invoke<BOOL>(0x7C3CB7FB8C434587, PlayerID); }
static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xC582B35278C39CE4, p0, p1, p2, p3, p4); }
static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xD9F9CB5C8842E29C, ped, heading, timeout); }
static void TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int p2, Any p3) { invoke<Void>(0x6604A187BAE05BD3, p0, ped, p2, p3); }
static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int mode, float maxSpeed, int drivingStyle, float minDistance, float p7, BOOL p8) { invoke<Void>(0xE88C6873CB5C0508, ped, vehicle, pedTarget, mode, maxSpeed, drivingStyle, minDistance, p7, p8); }
static void TASK_SMART_FLEE_COORD(Any ped, float x, float y, float z, float distance, int time, BOOL p6, BOOL p7) { invoke<Void>(0x746A0D047AA197EB, ped, x, y, z, distance, time, p6, p7); }
static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoke<Void>(0x2A443C71FF0677A3, p0); }
static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed) { invoke<Void>(0xFE70EDF546BA0BAA, ped, vehicle, timeOut, doorIndex, speed); }
static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0xE012DD6DADC57C5D, ped, x, y, z, heading); }
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x7F475EA704108C70, p0, p1, p2, p3, p4, p5); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) { invoke<Void>(0x15E390D34C74EB99, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x1C9D2135563CF053, p0, p1, p2, p3, p4, p5); }
static void STOP_ANIM_TASK(Ped ped, char* animDictionary, char* animationName, float p3) { invoke<Void>(0x1B1FB642178B8CEE, ped, animDictionary, animationName, p3); }
static Any GET_VEHICLE_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0x63B52896FA93CA2E, p0); }
static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0xA62C2DE6090B87D5, ped, vehicle, seat); }
static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL p3) { invoke<Void>(0xA32477EFFEE42B03, ped, entity, duration, p3); }
static void _TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0xD69A360A2A273336, ped, boat); }
static void REQUEST_WAYPOINT_RECORDING(char* name) { invoke<Void>(0x73FC038FEC1E71CF, name); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x1C09BAA9FE7D178D, p0, p1, p2, p3, p4, p5); }
static void TASK_SWAP_WEAPON(Ped ped, BOOL p1) { invoke<Void>(0x1D0114579B702B8F, ped, p1); }
static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x5502BE3C3D6C392E, ped); }
static void OPEN_PATROL_ROUTE(char* patrolRoute) { invoke<Void>(0x96E7A85CC54E404B, patrolRoute); }
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped ped, float gotoX, float gotoY, float gotoZ, float aimNearX, float aimNearY, float aimNearZ, float speed, BOOL shoot, float unknown1, float unknown2, BOOL unkTrue, int unknown3, BOOL heading, Hash firingPattern) { invoke<Void>(0x16D1859EDC787EF5, ped, gotoX, gotoY, gotoZ, aimNearX, aimNearY, aimNearZ, speed, shoot, unknown1, unknown2, unkTrue, unknown3, heading, firingPattern); }
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(Any* p0, Any p1) { return invoke<float>(0x686017F6E988EC42, p0, p1); }
static BOOL _0x332F48E6DF8B1ED4(Any p0, char* p1) { return invoke<BOOL>(0x332F48E6DF8B1ED4, p0, p1); }
static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0x5CA4475A743EAFC, x, y, z); }
static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xADAACF8AAA308017, ped, duration); }
static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0x7AEF22017C2A884C, ped, target, distanceToStopAt, StartAimingDist); }
static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x77F0528961D45C3C, ped); }
static Any TASK_STEALTH_KILL(Ped killer, Ped target, Hash killType, float p3, BOOL p4) { return invoke<Any>(0x6589F97869D9364C, killer, target, killType, p3, p4); }
static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0x9D2BE36C9D2B76F, ped); }
static Any _0xC5A6A3FEEF012702(Any p0, Any p1) { return invoke<Any>(0xC5A6A3FEEF012702, p0, p1); }
static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x537945462B3922D7, ped); }
static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xF1F769035A44EEAD, pilot, entityToFollow, x, y, z); }
static void TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) { invoke<Void>(0x9D95E15490FC7E35, p0, p1); }
static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, char* scenarioName) { invoke<Void>(0x2D9754A3226FE8C6, ped, x, y, z, heading, scenarioName); }
static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xB9938CE72B31A078, coverpoint); }
static void CREATE_PATROL_ROUTE() { invoke<Void>(0x3BC99251B24B115E); }
static void CLOSE_PATROL_ROUTE() { invoke<Void>(0x8811B3091B1B27E); }
static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) { return invoke<BOOL>(0xE4A4201018E7FD55, ped, taskNumber); }
static void _0x6A45789BEFE091B7(Ped p0, Any* p1, BOOL p2) { invoke<Void>(0x6A45789BEFE091B7, p0, p1, p2); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0x64C7D187A71A95A7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x7EE6C8CC61C98440, ped, x, y, z); }
static BOOL _0xA66042207A8C23E5(Any p0, Any* p1) { return invoke<BOOL>(0xA66042207A8C23E5, p0, p1); }
static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Any* p0, float p1, float p2, float p3, Any* p4) { return invoke<BOOL>(0xF1C1DF0D06A97CDD, p0, p1, p2, p3, p4); }
static void TASK_CLIMB_LADDER(Ped ped, int p1) { invoke<Void>(0x10EFF39427987154, ped, p1); }
static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0x973DA05FA35E63D7, ped); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, Vector3* position, Any p2, Any p3, Any p4, int drivingStyle, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0xEAD30E17E95B04D5, ped, position, p2, p3, p4, drivingStyle, p6, p7, p8, p9, p10, p11, p12); }
static void UPDATE_TASK_SWEEP_AIM_POSITION(Any p0, float p1, float p2, float p3) { invoke<Void>(0x1F24898A41967494, p0, p1, p2, p3); }
static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { invoke<Void>(0x89E04CE50E22A89C, ped, p1, p2); }
static void TASK_USE_MOBILE_PHONE(Ped ped, int p1) { invoke<Void>(0xB1F3893795B13F9B, ped, p1); }
static void TASK_PATROL(Ped ped, char* p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0x292508C721FF8FBB, ped, p1, p2, p3, p4); }
static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0x8BE8D6FA917B0300, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); }
static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int p5, Any p6) { invoke<Void>(0x835BBE043A81D6DD, ped, vehicle, timeout, seat, speed, p5, p6); }
static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xB5E2137D4AF8CCCB, ped, x, y, z); }
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0x65302471454A7946, ped); }
static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xCB3588C2CE159109, driver, vehicle, action, time); }
static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x22653396A8BEABE7, ped); }
static Any GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped p0, Any* p1, Any* p2) { return invoke<Any>(0x4F3F7CF2154861E6, p0, p1, p2); }
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6, float p7, float p8, float p9, float p10) { invoke<Void>(0xAE994B2F824D947F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(char* name) { return invoke<BOOL>(0xCE92500E70EEA516, name); }
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0x37F43BEBFBC57F3E, ped, flag, set); }
static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Entity targetEntity, Any p2, float x, float y, float z) { invoke<Void>(0x705B81444CDC23F7, shootingPed, targetEntity, p2, x, y, z); }
static void TASK_WRITHE(Ped ped, Ped target, int time, int p3) { invoke<Void>(0xA993B055DAF2BC4, ped, target, time, p3); }
static Any _0xD28C43FA17698A0D(Ped ped, char* p1) { return invoke<Any>(0xD28C43FA17698A0D, ped, p1); }
static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float p5) { invoke<Void>(0x9D59A8EFA7BFD098, ped, x, y, z, heading, p5); }
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xCC33E1AC8BD9E3B9, p0, p1, p2, p3, p4, p5, p6); }
static void TASK_PARACHUTE(Ped ped, BOOL p1) { invoke<Void>(0xC55786978EAFB6B2, ped, p1); }
static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0x8BD12B4D2B1648B7, ped, vehicle, flags); }
static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6) { invoke<Void>(0xB3DE6E3E0030F62, p0, p1, p2, p3, p4, p5, p6); }
static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x90B14011D1935B08, ped); }
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char* route, int props) { invoke<Void>(0x8AA051C6235AC392, route, props); }
static void _0x5ACD1F012734A5BF(Ped ped, char* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, float p9, BOOL p10, char* animDict, int flags) { invoke<Void>(0x5ACD1F012734A5BF, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, animDict, flags); }
static void _0x470944B6DD8CCADD(Ped p0, char* p1, float p2) { invoke<Void>(0x470944B6DD8CCADD, p0, p1, p2); }
static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0x96A503439BC4E230, p0, p1, p2, p3, p4, p5, p6, p7); }
static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0x3D09311EB0F37652, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); }
static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0x9C2C48DE2B6D390C, ped, drivingStyle); }
static void TASK_HELI_MISSION(Ped pilot, Vehicle vehicle, Any p2, Ped pedToFollow, float posX, float posY, float posZ, int mode, float speed, float radius, float angle, int p11, int height, float p13, int p14) { invoke<Void>(0xC2804AD13A70DAC1, pilot, vehicle, p2, pedToFollow, posX, posY, posZ, mode, speed, radius, angle, p11, height, p13, p14); }
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0x53311AF3973F551E); }
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoke<Void>(0xBCEAD138C576AB73, p0); }
static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0x50B909564C2EEE80, ped); }
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xD6DBC06EFF1D9485); }
static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0xE2BA71D7F9853728, ped); }
static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xE93B539220FFA8, ped); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0x8220085DFF289BD5, p0); }
static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLenght, float timeBetweenWalks) { invoke<Void>(0xED1BBBA88805B3DD, ped, x, y, z, radius, minimalLenght, timeBetweenWalks); }
static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xF156AA2A744B309E, ped); }
static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { invoke<Void>(0x395AA67734CB52F2, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); }
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0xD0B601905B4CA920, ped, Toggle); }
static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Any p1, Any p2, float x, float y, float z, int duration) { invoke<Void>(0xBCC0A3F70884FE9C, ped, p1, p2, x, y, z, duration); }
static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0x4141D76A687F2BAD, ped, target); }
static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0x2C2140298026862, ped); }
static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0xB436A8BAA391C84A, ped, entity); }
static void SET_DRIVEBY_TASK_TARGET(Any p0, Any p1, Any p2, float p3, float p4, float p5) { invoke<Void>(0xCDE8E56B4F6AE3FD, p0, p1, p2, p3, p4, p5); }
static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0x64D33619061250A1, ped); }
static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0x69A269E9AC8D52C8, p0); }
static void _0xBD38D2394768BF4D(Any p0, Any p1, BOOL p2, Any p3) { invoke<Void>(0xBD38D2394768BF4D, p0, p1, p2, p3); }
static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0x963F67A22BBFA2AE, ped, ms); }
static Any OPEN_SEQUENCE_TASK(Object* taskSequence) { return invoke<Any>(0x33A0CEA494F4C2A3, taskSequence); }
static void TASK_PLAY_ANIM(Ped ped, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0x878D12AEFBF5BAF0, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); }
static void SET_SCENARIO_TYPE_ENABLED(char* scenarioType, BOOL toggle) { invoke<Void>(0x46FA2CC6615D6359, scenarioType, toggle); }
static void TASK_SET_DECISION_MAKER(Ped p0, Hash p1) { invoke<Void>(0xB0E2B335371D29B1, p0, p1); }
static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x5609B407A91B9156, p0, p1, p2, p3); }
static void STOP_ANIM_PLAYBACK(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x1C61975037E0BC9A, ped, p1, p2); }
static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, char* animDictionary, char* animationName, float p4, float p5, Any p6, Any p7, float p8, Any p9) { invoke<Void>(0x98E2FD5DA7CF97D3, ped, scene, animDictionary, animationName, p4, p5, p6, p7, p8, p9); }
static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float Y, float Z, int p5, int p6, int p7, float p8, float p9, BOOL p10) { invoke<Void>(0xC524A07ED2FAC2C2, ped, vehicle, x, Y, Z, p5, p6, p7, p8, p9, p10); }
static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0x2A114B9566024696, ped); }
static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { invoke<Void>(0xF7CC6FE06DC847BB, ped, targetPed, p2, p3); }
static void SET_NEXT_DESIRED_MOVE_STATE(Any p0) { invoke<Void>(0x45E9F1F85E939383, p0); }
static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, Any p3, Any p4) { invoke<Void>(0xCE76B3438711A56E, ped, duration, facingPed, p3, p4); }
static void SET_PED_PATHS_WIDTH_PLANT(Ped ped, BOOL mayEnterWater) { invoke<Void>(0x994C7FB25D8AF3F9, ped, mayEnterWater); }
static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0x58815FBF7FDC21BE, ped, target); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x3AAD3BDAC622B4F1, p0); }
static BOOL DOES_SCENARIO_GROUP_EXIST(char* scenarioGroup) { return invoke<BOOL>(0xAE930CC2795F78CF, scenarioGroup); }
static void TASK_START_SCENARIO_AT_POSITION(Ped ped, char* scenarioName, float x, float y, float z, float heading, Any p6, BOOL p7, BOOL p8) { invoke<Void>(0xC4D56EBA4E22B570, ped, scenarioName, x, y, z, heading, p6, p7, p8); }
static void _TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle, float speed, int minDistance) { invoke<Void>(0xADB68391691E6BAE, driver, vehicle, targetEntity, drivingStyle, speed, minDistance); }
static void REMOVE_WAYPOINT_RECORDING(char* name) { invoke<Void>(0x47419E1CD54CFC70, name); }
}



namespace APP
{
static float APP_GET_FLOAT(char* property) { return invoke<float>(0x737EED16935DD01B, property); }
static void APP_SET_FLOAT(char* property, float value) { invoke<Void>(0x739FD28F94F2D7C9, property, value); }
static void APP_SET_BLOCK(char* blockName) { invoke<Void>(0x810B63E9C94D44EB, blockName); }
static void APP_SET_STRING(char* property, char* value) { invoke<Void>(0xCAFF15BE72098E89, property, value); }
static BOOL APP_DELETE_APP_DATA(char* appName) { return invoke<BOOL>(0xB015F71356D8BEF7, appName); }
static void APP_CLEAR_BLOCK() { invoke<Void>(0x7E91C9755165415A); }
static void APP_SET_INT(char* property, int value) { invoke<Void>(0x52EC2ED99EAA7782, property, value); }
static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x4D7E023DA40AAB56); }
static char* APP_GET_STRING(char* property) { return invoke<char*>(0xB63361E09A03F8D9, property); }
static BOOL APP_DATA_VALID() { return invoke<BOOL>(0x6EB7CC64D61453EB); }
static void APP_SAVE_DATA() { invoke<Void>(0x2DC2B176C525E0DE); }
static Any APP_GET_DELETED_FILE_STATUS() { return invoke<Any>(0xF594164D45B82ECF); }
static BOOL APP_HAS_SYNCED_DATA(char* appName) { return invoke<BOOL>(0x9AF5231739414C79, appName); }
static void APP_SET_APP(char* appName) { invoke<Void>(0xB80C8E72758FD069, appName); }
static int APP_GET_INT(char* property) { return invoke<int>(0x56624FBF50719B9C, property); }
static void APP_CLOSE_APP() { invoke<Void>(0xC6F0CE81018940E7); }
static void APP_CLOSE_BLOCK() { invoke<Void>(0x5BCF4C5FCA920CF6); }
}



namespace AUDIO
{
static BOOL* START_AUDIO_SCENE(char* sceneName) { return invoke<BOOL*>(0xF8B012FD1C255840, sceneName); }
static void _0xFA20724AA7C932FA() { invoke<Void>(0xFA20724AA7C932FA); }
static void _0x3D79ED8A2C4AA6FC(Any p0, float p1) { invoke<Void>(0x3D79ED8A2C4AA6FC, p0, p1); }
static BOOL IS_AMBIENT_ZONE_ENABLED(char* ambientZone) { return invoke<BOOL>(0xFD066F0786C77C58, ambientZone); }
static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle veh) { return invoke<Hash>(0xABECB4E47E365302, veh); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any* p1) { return invoke<BOOL>(0xE51EB359FB4BF78C, p0, p1); }
static void _0x3D927703E0382BA9(Any p0) { invoke<Void>(0x3D927703E0382BA9, p0); }
static void _0xC0928A4ABC866B05(char* radioStation, char* p1) { invoke<Void>(0xC0928A4ABC866B05, radioStation, p1); }
static BOOL _IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) { return invoke<BOOL>(0x167BD4715C5CB48A, vehicle); }
static void START_ALARM(char* alarmName, BOOL p2) { invoke<Void>(0xDE61E19AF93982C1, alarmName, p2); }
static void _0xF859B6A20A1A4232(char* p0, char* p1) { invoke<Void>(0xF859B6A20A1A4232, p0, p1); }
static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0x7D2129D13363B0E7, ped); }
static Any _0x162303E32243E0F3() { return invoke<Any>(0x162303E32243E0F3); }
static void _0x192D7DCDAB2FE9C3() { invoke<Void>(0x192D7DCDAB2FE9C3); }
static void _0x6457746FEEC9AE5E(Any p0, BOOL p1) { invoke<Void>(0x6457746FEEC9AE5E, p0, p1); }
static void _0x28E8472EDB3B386A(BOOL p0) { invoke<Void>(0x28E8472EDB3B386A, p0); }
static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xCA13AD55F34C14F2); }
static BOOL _0x261C08F6D29B24A8() { return invoke<BOOL>(0x261C08F6D29B24A8); }
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) { invoke<Void>(0xF376AD23EAA7E0B7, Toggle); }
static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { invoke<Void>(0xE37232298D81A622, p0, p1); }
static void _0x43150A41AF558DE2(Any p0) { invoke<Void>(0x43150A41AF558DE2, p0); }
static void OVERRIDE_TREVOR_RAGE(Any* p0) { invoke<Void>(0x63CD1FBB202912F2, p0); }
static void _0x284E8ADF8C29DD67(float p0, float p1) { invoke<Void>(0x284E8ADF8C29DD67, p0, p1); }
static void _0x75C3321388DDC4F1(Entity p0, char* p1, float p2) { invoke<Void>(0x75C3321388DDC4F1, p0, p1, p2); }
static void _0x91BAC4C70F39FDB0(char* radioStation) { invoke<Void>(0x91BAC4C70F39FDB0, radioStation); }
static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0x1BF2632AED6B5924); }
static void _0xF2B7165E6D968F2D(Any p0, float p1) { invoke<Void>(0xF2B7165E6D968F2D, p0, p1); }
static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0x23A75DA1EF3B3263); }
static void _0x6F834BFBDF5BAD3() { invoke<Void>(0x6F834BFBDF5BAD3); }
static void SET_USER_RADIO_CONTROL_ENABLED(BOOL p0) { invoke<Void>(0xB690D98009ECA44C, p0); }
static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xF6E8DC3E13E9201A, vehicle); }
static void SET_VEH_RADIO_STATION(Vehicle vehicle, char* radioStation) { invoke<Void>(0xF29AF29F697681A6, vehicle, radioStation); }
static void _0xDEEE72C1AD050C38(Any p0, BOOL p1) { invoke<Void>(0xDEEE72C1AD050C38, p0, p1); }
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x4210B4468718F7FA, ambientZone, p1, p2); }
static BOOL PREPARE_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xAD68522F73EA2CC1, eventName); }
static BOOL IS_PED_RINGTONE_PLAYING(Any p0) { return invoke<BOOL>(0xAAF832F889426A9C, p0); }
static BOOL LOAD_STREAM(char* streamName, char* soundSet) { return invoke<BOOL>(0x8D888C6E405B18D7, streamName, soundSet); }
static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL set) { invoke<Void>(0x6181FE04D5044AF7, vehicle, set); }
static void SPECIAL_FRONTEND_EQUAL(float x, float y, float z) { invoke<Void>(0xF51FE16320D4174, x, y, z); }
static void CLEAR_AMBIENT_ZONE_STATE(Any* p0, BOOL p1) { invoke<Void>(0x594642D3199C88F7, p0, p1); }
static BOOL IS_ALARM_PLAYING(char* alarmName) { return invoke<BOOL>(0x62CF6FCD67E09678, alarmName); }
static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xA4B18C004E8C4C4E); }
static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xC50759E68BA0611, p0, p1); }
static void _0xC351BC9AC942BDD(Any p0, BOOL p1) { invoke<Void>(0xC351BC9AC942BDD, p0, p1); }
static void _0x595938F87B23350E(float p0) { invoke<Void>(0x595938F87B23350E, p0); }
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0x6C91A55D7CDBE6D6, soundId); }
static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0x7A8811D8FA3359D8, stop); }
static BOOL REQUEST_SCRIPT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0x386AEE656157CB3A, p0, p1); }
static void SET_VARIABLE_ON_STREAM(char* p0, float p1) { invoke<Void>(0x572AB87C8B37732C, p0, p1); }
static void _0xD4D1D55A4A2B9F7F(Any p0, float p1, float p2, float p3) { invoke<Void>(0xD4D1D55A4A2B9F7F, p0, p1, p2, p3); }
static void FREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0x25A6FD2ACCC45C88, radioStation); }
static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(Ped p0, char* speechName, char* voiceName, char* speechParam, BOOL p4) { invoke<Void>(0x1D6AFE0F8AC2F140, p0, speechName, voiceName, speechParam, p4); }
static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xB79BFBEF5A2CE64B, soundId); }
static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0x419A7296D34D99BC, toggle); }
static void SET_STATIC_EMITTER_ENABLED(char* emitterName, BOOL toggle) { invoke<Void>(0xE2AA080D37C384D4, emitterName, toggle); }
static Any _0x5D83FF0B8442650A() { return invoke<Any>(0x5D83FF0B8442650A); }
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int p1) { invoke<Void>(0x6E0A4B26F2BBC2F9, vehicle, p1); }
static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xC7FDF3482B082D61, p0, p1, p2, p3); }
static void SET_CUTSCENE_AUDIO_OVERRIDE(char* p0) { invoke<Void>(0x8E7696A9386E9CB8, p0); }
static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9C7CD45CE4DD7F73, vehicle, toggle); }
static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0x1A2D0C7E2220C559, active); }
static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL mute, int p2) { invoke<Void>(0xD8E76303AFA0FD1D, vehicle, mute, p2); }
static void _0x9F4025C2572C3ECE(Any p0) { invoke<Void>(0x9F4025C2572C3ECE, p0); }
static int GET_SOUND_ID() { return invoke<int>(0x9EE81D7901D9BCE2); }
static void _0xBFAB9534DD5F62FA(Any p0, BOOL p1) { invoke<Void>(0xBFAB9534DD5F62FA, p0, p1); }
static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<Any>(0x351E0C865946978E); }
static BOOL _0x1FE3EE730A97D34E(Any p0, Any* p1, BOOL p2) { return invoke<BOOL>(0x1FE3EE730A97D34E, p0, p1, p2); }
static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xCFED5C3635E63D52, vehicle, Toggle); }
static void _0x7AC2074B51443C45(Any p0) { invoke<Void>(0x7AC2074B51443C45, p0); }
static void _0xA7596FE90789822D(char* radioStation, char* p1, BOOL p2) { invoke<Void>(0xA7596FE90789822D, radioStation, p1, p2); }
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0x2D72B682CEC906A8); }
static void _0x184FB568DA6D42F0(Any p0, char* p1) { invoke<Void>(0x184FB568DA6D42F0, p0, p1); }
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0x979D7393BF81DB0D); }
static Any _0xC8650C9D5691E09C() { return invoke<Any>(0xC8650C9D5691E09C); }
static void _0x5F9DBB8B1388379E(BOOL p0) { invoke<Void>(0x5F9DBB8B1388379E, p0); }
static void _0xE76D5D57E1864F4B(BOOL p0, BOOL p1) { invoke<Void>(0xE76D5D57E1864F4B, p0, p1); }
static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xA578B2DE04C3A445); }
static BOOL LOAD_STREAM_WITH_START_OFFSET(char* streamName, int startOffset, char* soundSet) { return invoke<BOOL>(0x265B6EA1822D6E0F, streamName, startOffset, soundSet); }
static void _0xA040822209D839EB(Any p0, float p1) { invoke<Void>(0xA040822209D839EB, p0, p1); }
static BOOL CANCEL_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xB8DE4A0771D4330D, eventName); }
static Any _0x9F7C0BB769F2033F() { return invoke<Any>(0x9F7C0BB769F2033F); }
static BOOL _0x87DBEF6BC272CA4E(Any p0) { return invoke<BOOL>(0x87DBEF6BC272CA4E, p0); }
static BOOL _0x283EBA21B92178D7() { return invoke<BOOL>(0x283EBA21B92178D7); }
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0x2DC22579179699F7, p0, p1); }
static void _0x9DDF45D1CD28A7CF(BOOL p0) { invoke<Void>(0x9DDF45D1CD28A7CF, p0); }
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int p1) { invoke<Void>(0x83BA03DDA504D07B, vehicle, p1); }
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xD9E507B645D4A3BD); }
static int GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) { return invoke<int>(0x16626D9631ABD17A, p0); }
static void PLAY_SOUND_FRONTEND(int soundId, char* audioName, char* audioRef, BOOL p3) { invoke<Void>(0x954BCDB8FDB0AC0F, soundId, audioName, audioRef, p3); }
static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x5F7D123D0B700C40, p0, p1, p2, p3); }
static void STOP_PED_RINGTONE(Any p0) { invoke<Void>(0xC32C62B749BDBAF7, p0); }
static void SET_AMBIENT_VOICE_NAME(Ped ped, char* name) { invoke<Void>(0x4410225696D7183B, ped, name); }
static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0x291B8F9C92A4A886); }
static void SKIP_RADIO_FORWARD() { invoke<Void>(0xC5BEA581ABFD1F6D); }
static Any _0x5980E518D8F36994() { return invoke<Any>(0x5980E518D8F36994); }
static void _0x1892C630AC0762D9(Any p0, BOOL p1) { invoke<Void>(0x1892C630AC0762D9, p0, p1); }
static BOOL TRIGGER_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0x68BD4F826EFDDC53, eventName); }
static void _0xDAA114A22E65524C(BOOL p0, Any p1) { invoke<Void>(0xDAA114A22E65524C, p0, p1); }
static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xBD5D1DC3ADCC7F23, ped); }
static void _0x48D6A85C3B814B7B(Any* p0, float p1) { invoke<Void>(0x48D6A85C3B814B7B, p0, p1); }
static BOOL REQUEST_MISSION_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0x6AD11818FBE4C473, p0, p1); }
static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xEFEEF8E6B0B4E34); }
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xD8C43FFF81752DF4, netId); }
static void _0xA2FED6CB93781845(Any p0, BOOL p1) { invoke<Void>(0xA2FED6CB93781845, p0, p1); }
static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x25A6B1F847D627B6, vehicle, toggle); }
static void _0x386EBE6B87203A8F(char* radioStation, BOOL p1) { invoke<Void>(0x386EBE6B87203A8F, radioStation, p1); }
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* audioBank) { invoke<Void>(0x46E187EE07236C31, audioBank); }
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xE2C17B4C500D756C); }
static void _0xE3DAB1A3244F3EEC(Any p0) { invoke<Void>(0xE3DAB1A3244F3EEC, p0); }
static void _0x24E1592110FBB2A1(Any p0, Any p1) { invoke<Void>(0x24E1592110FBB2A1, p0, p1); }
static void PLAY_SOUND(int soundId, char* audioName, char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0x9AB287E280978669, soundId, audioName, audioRef, p3, p4, p5); }
static void _0x99E5CA18A3174C48() { invoke<Void>(0x99E5CA18A3174C48); }
static Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<Any>(0x319503702F27C92D); }
static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0x123D4C0D452E1A27, p0); }
static void SET_INITIAL_PLAYER_STATION(char* radioStation) { invoke<Void>(0xF6EE75AB59B5F994, radioStation); }
static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0x30FDF1E58681D80B, ped); }
static void _0x5C7F48F98E71D005(Any p0, Any p1) { invoke<Void>(0x5C7F48F98E71D005, p0, p1); }
static void _0x84523D2002592F9(Ped p0, char* p1, char* p2) { invoke<Void>(0x84523D2002592F9, p0, p1, p2); }
static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xF58D57797DDA1FC7, p0); }
static void _0xEDEAC05BD3C5EADA(float p0, float p1) { invoke<Void>(0xEDEAC05BD3C5EADA, p0, p1); }
static int FIND_RADIO_STATION_INDEX(int station) { return invoke<int>(0xA574FD272F39D24C, station); }
static void PLAY_SOUND_FROM_COORD(int soundId, char* audioName, float x, float y, float z, char* audioRef, BOOL p6, Any p7, BOOL p8) { invoke<Void>(0xB3062467BC9D98A8, soundId, audioName, x, y, z, audioRef, p6, p7, p8); }
static void _PLAY_AMBIENT_SPEECH1(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0x83983CFE8950EEAC, ped, speechName, speechParam); }
static Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x12A5CF71FED4EBA1, p0, p1); }
static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0x3BF4F8DBABE55D2B, p0); }
static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xF4BFE09A87C3605E, p0); }
static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0x3698BEC25B076C2D, ped); }
static void _SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME(char* p0, Entity p1) { invoke<Void>(0x11076AA89823BFFF, p0, p1); }
static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0x1A9766A82ADC4282, ped, toggle); }
static void ADD_PED_TO_CONVERSATION(Any p0, Any p1, char* p2) { invoke<Void>(0xB4448525D2DBB286, p0, p1, p2); }
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0x637E45B4F0D8E9F); }
static void SET_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0xDE0A0542A615CC2B, p0, p1, p2); }
static void _0x30C8017D8FF43A9() { invoke<Void>(0x30C8017D8FF43A9); }
static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xF022734652B12EB3); }
static void _SOUND_VEHICLE_HORN_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xF05CCC87E6E844C3, vehicle); }
static void _0x54D3ACE90671A38F(Any p0, float p1) { invoke<Void>(0x54D3ACE90671A38F, p0, p1); }
static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0x63070E40C11F5D99, ped, shaking); }
static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xFDE5081714F7A548, vehicle); }
static BOOL PREPARE_ALARM(char* alarmName) { return invoke<BOOL>(0x90F076E311C149C5, alarmName); }
static void INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) { invoke<Void>(0xC2B9392B0A0B43, p0, p1, p2); }
static Any _0xDD124C8A32761F5D() { return invoke<Any>(0xDD124C8A32761F5D); }
static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0x35F02EDB0B3AE3F2); }
static void STOP_ALARM(char* alarmName, BOOL toggle) { invoke<Void>(0x698FDE6DDD416ACA, alarmName, toggle); }
static void STOP_SOUND(int soundId) { invoke<Void>(0x972F93B6DF7649AC, soundId); }
static void STOP_STREAM() { invoke<Void>(0xE57736DF156A23CE); }
static void _0x6FE4EE1DFA4C0E09(Any p0, BOOL p1) { invoke<Void>(0x6FE4EE1DFA4C0E09, p0, p1); }
static Any GET_PLAYER_RADIO_STATION_GENRE() { return invoke<Any>(0xEE2D39FFDB0EF1FE); }
static void _0x864D162F281250DB(Any p0) { invoke<Void>(0x864D162F281250DB, p0); }
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0x4EF530C7DC710F06, radioStation); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0x23B1DA900D65FF0C); }
static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xB44C5DE4630BE7A3, ped, toggle); }
static Any _0x561311015F27FC28(Any* p0) { return invoke<Any>(0x561311015F27FC28, p0); }
static Any _0x45AD20B46BBA6A77(Any p0) { return invoke<Any>(0x45AD20B46BBA6A77, p0); }
static void SET_EMITTER_RADIO_STATION(char* emitterName, char* radioStation) { invoke<Void>(0x22A937DF1D891BC9, emitterName, radioStation); }
static void SET_VARIABLE_ON_SOUND(int soundId, Any* p1, float p2) { invoke<Void>(0xE35939C3B3CA3B85, soundId, p1, p2); }
static void PLAY_MISSION_COMPLETE_AUDIO(char* audioName) { invoke<Void>(0xF0CCECED31D3C488, audioName); }
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0x81B90631FC427B1D, newsStory); }
static char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<char*>(0xDD882CFC4CFE7714, radioStation); }
static Any CLEAR_ALL_BROKEN_GLASS() { return invoke<Any>(0x691FB305DA9E90F2); }
static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0x9C8542846F831A05); }
static void SET_RADIO_TRACK(char* radioStation, char* radioTrack) { invoke<Void>(0xFFCA318DB99A4723, radioStation, radioTrack); }
static void _0xCEAD363208603499(char* p0) { invoke<Void>(0xCEAD363208603499, p0); }
static void _DISABLE_POLICE_REPORTS() { invoke<Void>(0xB5CCBBE1D65EF7FD); }
static void _0xA997F8E92402014B(BOOL p0) { invoke<Void>(0xA997F8E92402014B, p0); }
static BOOL IS_AUDIO_SCENE_ACTIVE(char* scene) { return invoke<BOOL>(0x159730DB57D995D0, scene); }
static void SET_MICROPHONE_POSITION(BOOL p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0x486F201A0C6103D8, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0x19FF04B61FA225B2, vehicle); }
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped p0) { invoke<Void>(0xE172FEABFEAC2539, p0); }
static void SET_AUDIO_FLAG(char* flagName, BOOL toggle) { invoke<Void>(0xF01E9C7FDA2976B1, flagName, toggle); }
static void STOP_AUDIO_SCENES() { invoke<Void>(0xC74ABD5E58D7334F); }
static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE3F055109915E09D, vehicle, toggle); }
static void PLAY_PAIN(int painID, float p1, int p2) { invoke<Void>(0x226F06D3A72C22D2, painID, p1, p2); }
static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(char* p0, float p1) { invoke<Void>(0x83569B39B63775BE, p0, p1); }
static void SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0x7EC5EEE3A9985C5E, p0, p1, p2); }
static void _0x497564C75D814A5E(BOOL p0) { invoke<Void>(0x497564C75D814A5E, p0); }
static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0x49CE592DD8B1F5E0, state); }
static void _0xC0B43D6C408C0159(Any p0, BOOL p1, Any p2) { invoke<Void>(0xC0B43D6C408C0159, p0, p1, p2); }
static void _0xE046E7831F7AA836(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE046E7831F7AA836, vehicle, toggle); }
static void _0x804EC51083173BAB(Vehicle vehicle) { invoke<Void>(0x804EC51083173BAB, vehicle); }
static void SET_RADIO_AUTO_UNFREEZE(BOOL p0) { invoke<Void>(0x5EFC6A902010C106, p0); }
static BOOL _0xD702EBEC2C69FBE2(Any p0) { return invoke<BOOL>(0xD702EBEC2C69FBE2, p0); }
static void ADD_LINE_TO_CONVERSATION(Any p0, Any* p1, Any* p2, Any p3, Any p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0x82DD0912AC8EC0E0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void _PLAY_AMBIENT_SPEECH2(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0x4A89A6315DF646B4, ped, speechName, speechParam); }
static void SET_RADIO_TO_STATION_NAME(char* stationName) { invoke<Void>(0xC82355CCACC0C99E, stationName); }
static void REGISTER_SCRIPT_WITH_AUDIO(Any p0) { invoke<Void>(0x229773841C1D2E13, p0); }
static Any PREPARE_SYNCHRONIZED_AUDIO_EVENT(char* p0, Any p1) { return invoke<Any>(0x81B2FDDAE341210, p0, p1); }
static Any _0xC59B751CBE3CCF98() { return invoke<Any>(0xC59B751CBE3CCF98); }
static void _0xDFC28582BD98FD77(Any* p0, float p1, float p2, float p3) { invoke<Void>(0xDFC28582BD98FD77, p0, p1, p2, p3); }
static void _0xAC29399B1403C1B5(char* p0, char* soundset) { invoke<Void>(0xAC29399B1403C1B5, p0, soundset); }
static void SET_ANIMAL_MOOD(Any p0, Any p1) { invoke<Void>(0x63A646BA939098E, p0, p1); }
static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0x667A43C3A9ECA5E0, p0); }
static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0x29D600697466E7AC, play); }
static void _0xDE59EC0ADBA732B9(Any* p0) { invoke<Void>(0xDE59EC0ADBA732B9, p0); }
static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0x189B9AE317FFA9C2); }
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0x1F5BD5164CB9E324); }
static void _0x803D7A82B179F149(Any p0, BOOL p1) { invoke<Void>(0x803D7A82B179F149, p0, p1); }
static void _0xA4C563F3C0A1AAFB(Any p0) { invoke<Void>(0xA4C563F3C0A1AAFB, p0); }
static void _0x47E476203D9BE209() { invoke<Void>(0x47E476203D9BE209); }
static Any STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<Any>(0x94DA6AACA7F07289, p0); }
static void _0x3DC1DB3CD8613BAF() { invoke<Void>(0x3DC1DB3CD8613BAF); }
static void _0xA36226CF6671C4BE(Any* p0) { invoke<Void>(0xA36226CF6671C4BE, p0); }
static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0x6FADC4FFB18EDED0); }
static void STOP_AUDIO_SCENE(char* scene) { invoke<Void>(0x354EC40268FD2071, scene); }
static Any PLAY_POLICE_REPORT(char* name, float p1) { return invoke<Any>(0xF30F45A6EE56923E, name, p1); }
static void _0x5D8B8C8567BAC2DB() { invoke<Void>(0x5D8B8C8567BAC2DB); }
static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xC5FCB9DAC1B3705C, vehicle, p1); }
static void PLAY_SOUND_FROM_ENTITY(int soundId, char* audioName, Entity entity, char* audioRef, BOOL p4, Any p5) { invoke<Void>(0x2A5264C35FD91CE4, soundId, audioName, entity, audioRef, p4, p5); }
static Any _0xE2069CF76EF4DC1B() { return invoke<Any>(0xE2069CF76EF4DC1B); }
static void RESET_TREVOR_RAGE() { invoke<Void>(0xE26B037B327EABA3); }
static Any GET_MUSIC_PLAYTIME() { return invoke<Any>(0xF8AF1D4D59909A63); }
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xB1540336553EB013); }
static void SET_PLAYER_ANGRY(Player player, BOOL IsAngry) { invoke<Void>(0x616FB155ABBA576E, player, IsAngry); }
static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0x77224DB6FE38489B, object); }
static void _0x99306C23451977E1(Any* p0, Any* p1, float p2, float p3, float p4, Any* p5) { invoke<Void>(0x99306C23451977E1, p0, p1, p2, p3, p4, p5); }
static void _0xEE5D0C722672376E(Any p0, Any p1, Any* p2) { invoke<Void>(0xEE5D0C722672376E, p0, p1, p2); }
static void SET_AUDIO_SCENE_VARIABLE(Any* p0, Any* p1, float p2) { invoke<Void>(0x863557F7F5DB1BBB, p0, p1, p2); }
static void _0xCEC8AF2C6BA95D1C(BOOL p0) { invoke<Void>(0xCEC8AF2C6BA95D1C, p0); }
static int _MAX_RADIO_STATION_INDEX() { return invoke<int>(0x96FE7220BAA3D3C6); }
static void _0x816708901DF20F00(Any p0, char* p1, char* p2) { invoke<Void>(0x816708901DF20F00, p0, p1, p2); }
static void OVERRIDE_UNDERWATER_STREAM(Any* p0, BOOL p1) { invoke<Void>(0x36428C21C702E6F7, p0, p1); }
static void _0x8D3F4F2AD21CC6A1(Any p0, BOOL p1) { invoke<Void>(0x8D3F4F2AD21CC6A1, p0, p1); }
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x9AAFC1509AF6C2C8, ambientZone, p1, p2); }
static void RESET_PED_AUDIO_FLAGS(Any p0) { invoke<Void>(0xEEA0B2B67EFCF86, p0); }
static char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<char*>(0xA5C0F9826308544F); }
static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0x2C71E9DE00620D10, active); }
static void PLAY_PED_RINGTONE(char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0x21B6ED89EA28DBF3, ringtoneName, ped, p2); }
static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF12DB6FA2706C226, vehicle, toggle); }
static Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x8DD1493C61AFFF42, p0, p1); }
static void _0x75619BC4A251AA02(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x75619BC4A251AA02, p0, p1, p2, p3); }
static void UNFREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0x3199EF076C12E1E8, radioStation); }
static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0x1E18C8095B37D998, soundId); }
static BOOL REQUEST_AMBIENT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0x32BC205C9A5813D0, p0, p1); }
static void _0xD7EEDABB74DF8C0B() { invoke<Void>(0xD7EEDABB74DF8C0B); }
}



namespace BRAIN
{
static void _0x86D02224B682A21A() { invoke<Void>(0x86D02224B682A21A); }
static void REGISTER_OBJECT_SCRIPT_BRAIN(char* scriptName, Hash p1, int p2, float p3, int p4, int p5) { invoke<Void>(0x3C02BFF62E1583B8, scriptName, p1, p2, p3, p4, p5); }
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xB83C53FFCBC7B797, brainSet); }
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any* p0, float p1, Any p2) { invoke<Void>(0x3D3957F7469DAC5E, p0, p1, p2); }
static void _0x43C589C0F37CA7E9() { invoke<Void>(0x43C589C0F37CA7E9); }
static void ADD_SCRIPT_TO_RANDOM_PED(char* name, Hash model, float p2, float p3) { invoke<Void>(0x36EBF488E54EA822, name, model, p2, p3); }
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x5CFF302504ECDC63, brainSet); }
static void _0x50406E610924F6B3(char* action) { invoke<Void>(0x50406E610924F6B3, action); }
static void _0x40DAAD66DB803610(char* action) { invoke<Void>(0x40DAAD66DB803610, action); }
static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0x7742FB54677E08D9); }
static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0x179C5C4A19D3D535, object); }
}



namespace CAM
{
static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x93BC9427D72133EA); }
static void _0x64E911B3993155DB(float p0) { invoke<Void>(0x64E911B3993155DB, p0); }
static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xA931FF68636DF31C, cam, active); }
static BOOL IS_CAM_SPLINE_PAUSED(Any p0) { return invoke<BOOL>(0x33C09AE1BA2B1BAC, p0); }
static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0x5D6077A892B90119, cam); }
static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xC416F2B1A1D7685D, cam); }
static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4) { invoke<Void>(0x4E786541E35ECB1, render, ease, easeTime, p3, p4); }
static void _0x68B47845D7A7BF1B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x68B47845D7A7BF1B, p0, p1, p2, p3); }
static void _0x1616A715DDB9E853(float p0) { invoke<Void>(0x1616A715DDB9E853, p0); }
static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xADBA33EFF2D3A2C1, p0); }
static void _0x2A932881B64740C0(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2A932881B64740C0, p0, p1, p2, p3); }
static void _SET_GAMEPLAY_CAM_RAW_YAW(float yaw) { invoke<Void>(0xDB2C4154EE8453D9, yaw); }
static void _0x2D115C76EF975C3C(Any p0) { invoke<Void>(0x2D115C76EF975C3C, p0); }
static void _0x11B06C4F00D8389A(float p0) { invoke<Void>(0x11B06C4F00D8389A, p0); }
static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { invoke<Void>(0x11313BF69BBB7F1B, cam, timeDuration); }
static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xDD23360B0FA2E0E2); }
static Any _0x38A88E02AAE52548() { return invoke<Any>(0x38A88E02AAE52548); }
static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0x905B718488172973, cam, toggle); }
static Any _0xD2707D96EC4B48D3() { return invoke<Any>(0xD2707D96EC4B48D3); }
static void SET_GAMEPLAY_ENTITY_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xEE40B5E30309799D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0x777F49FF59EB2E2A, zoomLevel); }
static Any _0x7DC564DE3CF907A4() { return invoke<Any>(0x7DC564DE3CF907A4); }
static void _0x1CDE3A93E05584B0() { invoke<Void>(0x1CDE3A93E05584B0); }
static void SET_CAM_DEBUG_NAME(Cam camera, char* name) { invoke<Void>(0xA69459B67D2A60C6, camera, name); }
static void _0x8DC163BE005C64EB(BOOL p0) { invoke<Void>(0x8DC163BE005C64EB, p0); }
static Any _0x2B12D71CB9FEF9A3() { return invoke<Any>(0x2B12D71CB9FEF9A3); }
static void _0x4B538331C47DD27(char* vehicleName) { invoke<Void>(0x4B538331C47DD27, vehicleName); }
static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0x4DEAA070DDCEE958, p0); }
static void SET_CAM_SPLINE_PHASE(int cam, float p1) { invoke<Void>(0xD4F15DA68FB1A401, cam, p1); }
static void _0x7F830C51945D47EB(BOOL p0) { invoke<Void>(0x7F830C51945D47EB, p0); }
static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xE1FC7073974B4E43, cam); }
static int _0x406EA1A3F6A27B8D(Any p0, Any p1) { return invoke<int>(0x406EA1A3F6A27B8D, p0, p1); }
static void _0xFEA72180EC2884C1(Any p0, BOOL p1) { invoke<Void>(0xFEA72180EC2884C1, p0, p1); }
static void _0xF91DA2F69C7C591D(BOOL p0, BOOL p1) { invoke<Void>(0xF91DA2F69C7C591D, p0, p1); }
static void _0xEC0E0A999462DD8(Any p0, Any p1) { invoke<Void>(0xEC0E0A999462DD8, p0, p1); }
static void _0xE4A44B51976B825D(Entity p0) { invoke<Void>(0xE4A44B51976B825D, p0); }
static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x9087CE22428F8EEB, p0, x1, y1, z1, p4, p5, p6, p7); }
static void _0xFE28E4E4B71C0F93(Any p0, float p1) { invoke<Void>(0xFE28E4E4B71C0F93, p0, p1); }
static void _0xD94781A85D6FDB01(float p0, float p1) { invoke<Void>(0xD94781A85D6FDB01, p0, p1); }
static BOOL _0x2ABDED714CA46493() { return invoke<BOOL>(0x2ABDED714CA46493); }
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0x3A073B336B178B28); }
static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x848B254591916C7D); }
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0x8D2022E807AD4703); }
static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0x31CEF8D9ECF63500, cam, p1, p2, p3, p4); }
static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0x98001036D307DF03, cam, nearDOF); }
static void _0x1EFD194545DD70F4(BOOL p0) { invoke<Void>(0x1EFD194545DD70F4, p0); }
static void OVERRIDE_CAM_SPLINE_VELOCITY(int cam, int p1, float p2, float p3) { invoke<Void>(0xE7BC60A9D0081AE, cam, p1, p2, p3); }
static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0x41DCC3C12AE53BBD, cam, phase); }
static void _0x6890F6D69509E340(float p0) { invoke<Void>(0x6890F6D69509E340, p0); }
static BOOL SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(char* p0, int p1) { return invoke<BOOL>(0x5BFA31CA5E6B8CBB, p0, p1); }
static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, Any p1) { invoke<Void>(0x97DE3E3E13740294, cam, p1); }
static void _0x5E091AC0096FFC8B(BOOL p0) { invoke<Void>(0x5E091AC0096FFC8B, p0); }
static void _0x34DEBA0AAEE7AD61(float p0) { invoke<Void>(0x34DEBA0AAEE7AD61, p0); }
static void _0x9152DFED78329F4D(Any p0) { invoke<Void>(0x9152DFED78329F4D, p0); }
static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xA76CE456B0AC525B, cam, posX, posY, posZ); }
static Any _0x5893E9409FB78DD8() { return invoke<Any>(0x5893E9409FB78DD8); }
static void _0x9995BDC7C3E44E62(Any p0, float p1, float p2, float p3) { invoke<Void>(0x9995BDC7C3E44E62, p0, p1, p2, p3); }
static void SET_GAMEPLAY_HINT_FOV(float p0) { invoke<Void>(0x560952A1AFEC167D, p0); }
static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xE736AA7B4B2691FB, p0); }
static Cam GET_RENDERING_CAM() { return invoke<Cam>(0x2250973117767F21); }
static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x5281B472766D7E36, cam, entity, p2, p3, p4, p5); }
static void _0x2723AEB7C6F73288() { invoke<Void>(0x2723AEB7C6F73288); }
static void _0xFD537ED4A36BD0D0() { invoke<Void>(0xFD537ED4A36BD0D0); }
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int p0) { invoke<Void>(0x2B09ED27E8902FB5, p0); }
static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xCBB243DDC0D132D1); }
static Vector3 _GET_GAMEPLAY_CAM_ROT(int p0) { return invoke<Vector3>(0x9D0B637AD4927B0F, p0); }
static void _0x50A9A9D165C4A111(Any p0) { invoke<Void>(0x50A9A9D165C4A111, p0); }
static BOOL _0x4BE48DF7647E4D42(Any p0) { return invoke<BOOL>(0x4BE48DF7647E4D42, p0); }
static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xF1384D7CDC020749); }
static void _0x2A7559BA2AEEDF21(float p0) { invoke<Void>(0x2A7559BA2AEEDF21, p0); }
static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x92B7E26C02EFE31E); }
static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xD8475FDA60C29E40, camHash, p1); }
static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0x22CFFC7B9F272DA3, cam, dofStrength); }
static float _0x85D1466D996D5545(Any p0) { return invoke<float>(0x85D1466D996D5545, p0); }
static void _0x62E01B08909FE4EC(Any p0, Any p1, Any p2) { invoke<Void>(0x62E01B08909FE4EC, p0, p1, p2); }
static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0x6CEB6EAD811364DF, cam, ped, boneIndex, x, y, z, heading); }
static void _0xDC379BD9C4B333B6() { invoke<Void>(0xDC379BD9C4B333B6); }
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x76DA9CDEC35E18D8); }
static void _0x8FCB49A4D4EC3B1D(Any p0, BOOL p1) { invoke<Void>(0x8FCB49A4D4EC3B1D, p0, p1); }
static void POINT_CAM_AT_PED_BONE(Cam cam, int ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xFDE391544EC4EA28, cam, ped, boneIndex, x, y, z, p6); }
static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x32B2DBD1EB9EECE3); }
static void SHAKE_CAM(Cam cam, char* type, float amplitude) { invoke<Void>(0xB936630341324D47, cam, type, amplitude); }
static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, BOOL p8, Any p9) { return invoke<Cam>(0x197AFDD7C344686F, camHash, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9); }
static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0x9F63CC039551CF9, cam); }
static Any SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { return invoke<Any>(0x4523FDDB9926E1D8, x, Value2); }
static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0x3BF94EFE1821F331, cam, strength); }
static BOOL _0xE1ED5CAD58AE2626() { return invoke<BOOL>(0xE1ED5CAD58AE2626); }
static Any _0x646C546D0CB6DD48(float p0) { return invoke<Any>(0x646C546D0CB6DD48, p0); }
static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xAC2BD8E798D43B27); }
static void CREATE_CINEMATIC_SHOT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDC90FF1D91C63E1, p0, p1, p2, p3); }
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x66806C50F201EF6C); }
static Any _0x35731E96413BF22C() { return invoke<Any>(0x35731E96413BF22C); }
static void _SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) { invoke<Void>(0x897AB63B69C06A1D, pitch); }
static void STOP_CINEMATIC_SHOT(Any p0) { invoke<Void>(0xFBC35B0D19F07C64, p0); }
static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xA07829C3F763B9B6); }
static void _0xB6E0C4B0AA99B04C(Any p0, Any p1, Any p2) { invoke<Void>(0xB6E0C4B0AA99B04C, p0, p1, p2); }
static Vector3 GET_CAM_ROT(Cam cam, Any p1) { return invoke<Vector3>(0xA58A2FD3996B3868, cam, p1); }
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Any p0, Any p1, float p2, float p3) { invoke<Void>(0x2D5610769F2D7059, p0, p1, p2, p3); }
static void _0x4D078277931E904E(Any p0, float p1) { invoke<Void>(0x4D078277931E904E, p0, p1); }
static float _GET_GAMEPLAY_CAM_ZOOM() { return invoke<float>(0x96D5F7016452CAF3); }
static void _SET_CAM_EFFECT(int p0) { invoke<Void>(0x7FE1DF4EF3066981, p0); }
static Any _0x64F087E24E3C699F() { return invoke<Any>(0x64F087E24E3C699F); }
static Vector3 GET_GAMEPLAY_CAM_ROT(int p0) { return invoke<Vector3>(0x1FD56C4830604096, p0); }
static void _0x17EC7A11F58804C8(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0x17EC7A11F58804C8, p0, p1, p2, p3); }
static void SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0xAB57EBCFC4DD8E7E, p0, p1, p2, p3, p4, p5, p6, p7); }
static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int p4) { invoke<Void>(0xDA9442DEE6F3003E, cam, rotX, rotY, rotZ, p4); }
static void ADD_CAM_SPLINE_NODE(int camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int p8, int p9) { invoke<Void>(0x1E0F2731E278B09A, camera, x, y, z, xRot, yRot, zRot, length, p8, p9); }
static void DESTROY_CAM(Cam cam, BOOL destroy) { invoke<Void>(0x1D1A369233055AEC, cam, destroy); }
static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0x4E63F662FDE672C3, duration); }
static Any _0xD0873EEDC2CF17CF(float p0, Any p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0xD0873EEDC2CF17CF, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0xCE6627CDE1DCBD82(Any p0) { invoke<Void>(0xCE6627CDE1DCBD82, p0); }
static Any _0xBB2334F50B1E9B45() { return invoke<Any>(0xBB2334F50B1E9B45); }
static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0x2364CDCFD1601D69, cam, toggle); }
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0x6A60A80D676F74A7); }
static void DESTROY_ALL_CAMS(BOOL destroy) { invoke<Void>(0xDF434429CE6BC53E, destroy); }
static Any _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { return invoke<Any>(0xC2F74DA5D109A07, minimum, maximum); }
static void _0xCE56A8E02B692AC0(BOOL p0) { invoke<Void>(0xCE56A8E02B692AC0, p0); }
static Any _0xE714319F1EC6BC50() { return invoke<Any>(0xE714319F1EC6BC50); }
static BOOL PLAY_CAM_ANIM(Cam cam, char* animName, char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0x6D80619030028C00, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
static void SET_TIME_IDLE_DROP(BOOL p0, BOOL p1) { invoke<Void>(0xCF927AF478EBC1BE, p0, p1); }
static void _0xFFEF262239550C1D() { invoke<Void>(0xFFEF262239550C1D); }
static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, BOOL easeLocation, BOOL easeRotation) { invoke<Void>(0x5C309DFF11824A69, camTo, camFrom, duration, easeLocation, easeRotation); }
static Any _0xD245703CD928A57() { return invoke<Any>(0xD245703CD928A57); }
static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xD524530B6B34C5E3, cam); }
static void SET_USE_HI_DOF() { invoke<Void>(0x64581AA31D39F1D1); }
static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return invoke<Vector3>(0xBA52BEE23FDD4B7C); }
static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x1A934C912339621C, p0, p1, p2, p3, p4, p5, p6, p7); }
static void ANIMATED_SHAKE_CAM(Cam cam, char* p1, char* p2, char* p3, float amplitude) { invoke<Void>(0x5DF9285113033FDD, cam, p1, p2, p3, amplitude); }
static void _0xE8976D7A95DA0AF5(Any p0, BOOL p1) { invoke<Void>(0xE8976D7A95DA0AF5, p0, p1); }
static void DETACH_CAM(Cam cam) { invoke<Void>(0x97B2E83A2FEED9B3, cam); }
static void _0xE7DDB3D6A989169A(BOOL p0) { invoke<Void>(0xE7DDB3D6A989169A, p0); }
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xD1F37E8DD733194); }
static Any _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { return invoke<Any>(0x9D814A42E3C7D973, minimum, maximum); }
static void _0xE6825C29BAE51CBF(Any p0, Any p1, float p2) { invoke<Void>(0xE6825C29BAE51CBF, p0, p1, p2); }
static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0x54DA78A82349F5AC, cam); }
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0x7E67E312BA5D0EF7, amplitude); }
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int mode) { invoke<Void>(0xBF7211828BD30D98, mode); }
static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0x79A7D216C2E5642F); }
static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0x176DD5FEFDE13359, cam, farClip); }
static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0x1FCE0CA03A463A36, cam, fieldOfView); }
static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0x53BD58003D2F35B4); }
static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0x3934E959DB2478D3); }
static BOOL GET_CAM_SPLINE_NODE_INDEX(int cam) { return invoke<BOOL>(0x1D2A9855B6DBFEE5, cam); }
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xB28AEB595CB09AF, heading); }
static Cam CREATE_CAM_WITH_PARAMS(char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0x4B49D13510261EFF, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0x76B330F53B01256A, cam); }
static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xB014DD3F634CDB35, cam); }
static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0x333DEA0402E3C657, cam); }
static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0x6E41E4654B278A0B); }
static void _0x37D2D7C53DB62347(float p0, float p1) { invoke<Void>(0x37D2D7C53DB62347, p0, p1); }
static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0x62A8B47253876150, cam, p1); }
static Any _0xBF53EBA244D929F8() { return invoke<Any>(0xBF53EBA244D929F8); }
static void SET_CAM_PARAMS(Cam cam, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0xA5BB6562A45BA2E6, cam, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _0xB87D069085B4650D(char* p0, char* p1, char* p2, float p3) { invoke<Void>(0xB87D069085B4650D, p0, p1, p2, p3); }
static float GET_CAM_FOV(Cam cam) { return invoke<float>(0x862326FCF2B7B0A7, cam); }
static void _0xFBE343EDEAD1E6C4(Any p0, float p1) { invoke<Void>(0xFBE343EDEAD1E6C4, p0, p1); }
static Cam CREATE_CAM(char* camName, BOOL p1) { return invoke<Cam>(0x3A5E675E99CE82DC, camName, p1); }
static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0x471DC3F6ACB5CA9C, cam); }
static void _0x2C5772DDCECBAE2E(Any p0, float p1) { invoke<Void>(0x2C5772DDCECBAE2E, p0, p1); }
static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0x93036D56AFF4101B); }
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0x90F5DA557C0B2909, p0); }
static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xA316D8C27D14C788, cam, nearClip); }
static void _0xE4C30F469371ABE1(Any p0, Any p1, Any p2) { invoke<Void>(0xE4C30F469371ABE1, p0, p1, p2); }
static void _0xFBF2C3153001E455() { invoke<Void>(0xFBF2C3153001E455); }
static void _0x593066DAC3000E9F(Cam p0) { invoke<Void>(0x593066DAC3000E9F, p0); }
static BOOL IS_CAM_PLAYING_ANIM(Cam cam, char* animName, char* animDictionary) { return invoke<BOOL>(0x9723DB37FF2B3784, cam, animName, animDictionary); }
static Any _0xD47A0DE770BBA7A6() { return invoke<Any>(0xD47A0DE770BBA7A6); }
static void _0xB6B64E1319C1B3B5(Any p0, float p1, float p2, float p3) { invoke<Void>(0xB6B64E1319C1B3B5, p0, p1, p2, p3); }
static void _0xA4F476D23394503E(float p0) { invoke<Void>(0xA4F476D23394503E, p0); }
static Any _0x6541E6B5D949B591() { return invoke<Any>(0x6541E6B5D949B591); }
static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0x1C3F8A712337F651); }
static BOOL IS_CINEMATIC_SHOT_ACTIVE(Any p0) { return invoke<BOOL>(0x6CA83EC879870AC1, p0); }
static void _0x1BAC70105E7D4CC1(BOOL p0) { invoke<Void>(0x1BAC70105E7D4CC1, p0); }
static void _0x4BB572112541568B(float p0, float p1) { invoke<Void>(0x4BB572112541568B, p0, p1); }
static Any _0x90E8EFE5BE0777D8() { return invoke<Any>(0x90E8EFE5BE0777D8); }
static void _0x1F1A3610B05115F6(Any p0, Any p1) { invoke<Void>(0x1F1A3610B05115F6, p0, p1); }
static void _0x8A44186D0A43AD46(float p0) { invoke<Void>(0x8A44186D0A43AD46, p0); }
static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0x4AD174B0D4656163, duration); }
static void SET_GAMEPLAY_COORD_HINT(float p0, float p1, float p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x671E83A75A61F1B7, p0, p1, p2, p3, p4, p5, p6); }
static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0x4DC38D1AEB85B2D9, cam, amplitude); }
static float GET_CAM_SPLINE_NODE_PHASE(Any p0) { return invoke<float>(0xCC4AEFD6CDDF052B, p0); }
static void STOP_CUTSCENE_CAM_SHAKING() { invoke<Void>(0xE1081A7BE69C3CC4); }
static void _0x3745B919F6042279(BOOL p0) { invoke<Void>(0x3745B919F6042279, p0); }
static void _0xA838F80C8EEC93A4() { invoke<Void>(0xA838F80C8EEC93A4); }
static Any SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { return invoke<Any>(0x253830D462669824, p0, p1); }
static void SHAKE_CINEMATIC_CAM(char* p0, float p1) { invoke<Void>(0x46828BE680E7A797, p0, p1); }
static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { invoke<Void>(0x3BBEE88C7B616CE2, p0); }
static void _0x8E15948C2438CBB7() { invoke<Void>(0x8E15948C2438CBB7); }
static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0xFCAD45DC2D789DD0); }
static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float distance) { invoke<Void>(0x5E122EA5F387EB73, p0, distance); }
static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xF92D82BAF297B579, cam); }
static Any _0xD6DAB87888A6D6A6() { return invoke<Any>(0xD6DAB87888A6D6A6); }
static void _0xB102C72A04B6BB42(Any p0, float p1) { invoke<Void>(0xB102C72A04B6BB42, p0, p1); }
static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, char* p2, char* p3) { return invoke<BOOL>(0x5FEC4EB24E8C1ADE, p0, p1, p2, p3); }
static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0x3E55FAB19AD423A2, x, y, z, radius); }
static void GET_IS_MULTIPLAYER_BRIEF(BOOL p0) { invoke<Void>(0xD1A0164670D2CD32, p0); }
static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0x2FC8076880D60BD4); }
static Any _0x485F184B29634917(Vehicle p0, int p1) { return invoke<Any>(0x485F184B29634917, p0, p1); }
static void _ENABLE_CROSSHAIR_THIS_FRAME() { invoke<Void>(0x4CDF5ADC7CA2E3F3); }
static Any _0x385318D26776C58C() { return invoke<Any>(0x385318D26776C58C); }
static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0x2E46AF6A22BB8C3E, cam, farDOF); }
static Any _0xD7DDFCF6557D9296(Any p0) { return invoke<Any>(0xD7DDFCF6557D9296, p0); }
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0x58462D4717CA82BE); }
static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xE86605B696896B3C, cam); }
static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0x2776343F9772A0A9, p0); }
static void _0x50298E3E0CF53540(char* p0, float p1) { invoke<Void>(0x50298E3E0CF53540, p0, p1); }
static void _0x286EE9A97BFAB834() { invoke<Void>(0x286EE9A97BFAB834); }
static void _0x4C90601C85A476A2(Any p0, float p1) { invoke<Void>(0x4C90601C85A476A2, p0, p1); }
static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0x5B93752DB55274F7, cam, x, y, z); }
static void _0xA1B37040B6E24E35(float p0) { invoke<Void>(0xA1B37040B6E24E35, p0); }
static void _0x19CCC4C3F9E567A1(Any p0, float p1) { invoke<Void>(0x19CCC4C3F9E567A1, p0, p1); }
static void _0x3A53A1334355329D(Any p0) { invoke<Void>(0x3A53A1334355329D, p0); }
static void SHAKE_GAMEPLAY_CAM(char* shakeName, float intensity) { invoke<Void>(0x9DEAF0B551E1211, shakeName, intensity); }
static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL p5) { invoke<Void>(0x9A0D3C5EF599DE42, cam, entity, xOffset, yOffset, zOffset, p5); }
}



namespace CONTROLS
{
static char* _GET_CONTROL_ACTION_NAME(int inputGroup, int control, BOOL p2) { return invoke<char*>(0x2549EF0239E06207, inputGroup, control, p2); }
static BOOL _0x4D78A0BA5F4D6EFB() { return invoke<BOOL>(0x4D78A0BA5F4D6EFB); }
static float GET_DISABLED_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0xC7BC555CD69A1B05, inputGroup, control); }
static BOOL _IS_INPUT_JUST_DISABLED(int inputGroup) { return invoke<BOOL>(0x34650B66FAF4897C, inputGroup); }
static void _0x6A7317FE0419ADDD(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6A7317FE0419ADDD, p0, p1, p2, p3, p4); }
static BOOL IS_CONTROL_ENABLED(int inputGroup, int control) { return invoke<BOOL>(0xC55A2D68D9DCE160, inputGroup, control); }
static BOOL _0xD0BCE7B6784387C5(Any p0) { return invoke<BOOL>(0xD0BCE7B6784387C5, p0); }
static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0x7E5B5D3856851E03, inputGroup, control); }
static void ENABLE_CONTROL_ACTION(int inputGroup, int control, BOOL enable) { invoke<Void>(0x32AA9ADAA9E9A2D4, inputGroup, control, enable); }
static void STOP_PAD_SHAKE(Any p0) { invoke<Void>(0x5BE7CBDDE90FC280, p0); }
static BOOL _0x474B73F09C08754C(char* p0) { return invoke<BOOL>(0x474B73F09C08754C, p0); }
static BOOL _0x67032E347E7602BB(char* p0) { return invoke<BOOL>(0x67032E347E7602BB, p0); }
static void SET_PAD_SHAKE(int p0, int duration, int frequency) { invoke<Void>(0x9942629F73A2BD5, p0, duration, frequency); }
static float _0x1CB3481DB3DE9B89(int inputGroup, int control) { return invoke<float>(0x1CB3481DB3DE9B89, inputGroup, control); }
static BOOL IS_CONTROL_JUST_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0xFE8B08EBA8FB9177, inputGroup, control); }
static BOOL IS_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0x117D586920E8F7BA, inputGroup, control); }
static Any _0x4FA02D768C669805() { return invoke<Any>(0x4FA02D768C669805); }
static void _0x24FDEF6CC08556D3(BOOL p0) { invoke<Void>(0x24FDEF6CC08556D3, p0); }
static float _0x5D664BF11795445D(int inputGroup, int control) { return invoke<float>(0x5D664BF11795445D, inputGroup, control); }
static void DISABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<Void>(0x8D8EA8289B6D0F8, inputGroup); }
static void _0xAF8EDF24847B0EC9() { invoke<Void>(0xAF8EDF24847B0EC9); }
static BOOL IS_CONTROL_RELEASED(int inputGroup, int control) { return invoke<BOOL>(0x3B1A7999B9473C17, inputGroup, control); }
static BOOL _0x6972ED7043DFFBF7(int inputGroup) { return invoke<BOOL>(0x6972ED7043DFFBF7, inputGroup); }
static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xE4FBBCD3AA42C3FF); }
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xC8517E90BE9E6065, toggle); }
static void _0xC87A934FDDA49A6A(int inputGroup) { invoke<Void>(0xC87A934FDDA49A6A, inputGroup); }
static char* _0xF99693FC563AE02C(int inputGroup, int control, BOOL p2) { return invoke<char*>(0xF99693FC563AE02C, inputGroup, control, p2); }
static void _0x5276E1B62787E9E4(int p0, int colorR, int colorG, int colorB) { invoke<Void>(0x5276E1B62787E9E4, p0, colorR, colorG, colorB); }
static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0x71D2CBF04FD5E207, inputGroup, control); }
static void _0xF146146F1E025C47(Any p0) { invoke<Void>(0xF146146F1E025C47, p0); }
static BOOL _IS_INPUT_DISABLED(int inputGroup) { return invoke<BOOL>(0xE1834019C3CC3C33, inputGroup); }
static void ENABLE_ALL_CONTROL_ACTIONS(int inputGroup) { invoke<Void>(0xBF3017631D46B2A5, inputGroup); }
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xF436232699272DC3); }
static void _0xFBABC21EC4BCF69F(Any p0) { invoke<Void>(0xFBABC21EC4BCF69F, p0); }
static int _0x9CFDC535BAF98582(int p0) { return invoke<int>(0x9CFDC535BAF98582, p0); }
static int GET_CONTROL_VALUE(int inputGroup, int control) { return invoke<int>(0x32BCD40DD9A8C4D3, inputGroup, control); }
static BOOL _0xDA3A365AB8DA727B() { return invoke<BOOL>(0xDA3A365AB8DA727B); }
static BOOL IS_DISABLED_CONTROL_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0xC522B453AD5C9D05, inputGroup, control); }
static BOOL _SET_CONTROL_NORMAL(int inputGroup, int control, float amount) { return invoke<BOOL>(0x33D233C9C1CDF70F, inputGroup, control, amount); }
static float GET_CONTROL_NORMAL(int inputGroup, int control) { return invoke<float>(0x9CD0A6A062DCF2A7, inputGroup, control); }
static void SET_INPUT_EXCLUSIVE(int inputGroup, int control) { invoke<Void>(0xDF3F6D6CDD523546, inputGroup, control); }
static void _0xE39FA762AB3B0405(Any p0, Any p1) { invoke<Void>(0xE39FA762AB3B0405, p0, p1); }
static BOOL IS_CONTROL_PRESSED(int inputGroup, int control) { return invoke<BOOL>(0x5FCAE3F8AEC656AF, inputGroup, control); }
static BOOL _0x6A159967E657EF2(float p0, float p1) { return invoke<BOOL>(0x6A159967E657EF2, p0, p1); }
static BOOL _0x147D712924F7D918() { return invoke<BOOL>(0x147D712924F7D918); }
static void DISABLE_CONTROL_ACTION(int inputGroup, int control, BOOL disable) { invoke<Void>(0xCFF471245AFEEDCE, inputGroup, control, disable); }
}



namespace CUTSCENE
{
static void _0xC57EDA6349581C41(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xC57EDA6349581C41, p0, p1, p2, p3, p4, p5, p6); }
static void SET_CUTSCENE_PED_PROP_VARIATION(char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { invoke<Void>(0xEBCFA81EA7447178, cutsceneEntName, p1, p2, p3, modelHash); }
static void _0x180E652EF0BA98F0(Any* p0) { invoke<Void>(0x180E652EF0BA98F0, p0); }
static void _0x2A5AAB53406D468E(BOOL p0) { invoke<Void>(0x2A5AAB53406D468E, p0); }
static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xBA771D6C8993A605, cutsceneEntName, modelHash); }
static Any _0x261D489C7C36DCA9(Any* p0) { return invoke<Any>(0x261D489C7C36DCA9, p0); }
static void START_CUTSCENE(int p0) { invoke<Void>(0xBC7FB8D910011C75, p0); }
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int p3) { invoke<Void>(0x66E38409454C51CC, x, y, z, p3); }
static void _0x4959DFBF16606CE5(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x4959DFBF16606CE5, p0, p1, p2, p3); }
static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<Void>(0x7198B02CC9A9788C); }
static BOOL HAS_THIS_CUTSCENE_LOADED(char* cutsceneName) { return invoke<BOOL>(0x9DC514E840090818, cutsceneName); }
static void _0xB68D048BCF11270A(char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xB68D048BCF11270A, cutsceneEntName, ped, modelHash); }
static void _0x947D4F9E3670AF47(BOOL p0) { invoke<Void>(0x947D4F9E3670AF47, p0); }
static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0x412B5035A97A4D15); }
static void _0x1C6FABE55435EF02(BOOL p0) { invoke<Void>(0x1C6FABE55435EF02, p0); }
static void REMOVE_CUTSCENE() { invoke<Void>(0x18159512D699D089); }
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0x80215C10F4056D03); }
static BOOL DOES_CUTSCENE_ENTITY_EXIST(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xA2F91BC0632220F5, cutsceneEntName, modelHash); }
static void _0x91023293BCF40D78(Any* p0, Any p1, Any p2) { invoke<Void>(0x91023293BCF40D78, p0, p1, p2); }
static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0x1F12913CC4103895, cutsceneEntName, modelHash); }
static BOOL _0x23FD54F7B2206405(char* cutsceneName) { return invoke<BOOL>(0x23FD54F7B2206405, cutsceneName); }
static int _0x8864689F4D1F9CF5() { return invoke<int>(0x8864689F4D1F9CF5); }
static Any _0x741A2DABDA1C2BC8() { return invoke<Any>(0x741A2DABDA1C2BC8); }
static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xE8BE8AD5206E2538, cutsceneEntName, modelHash); }
static BOOL _0x9ED486CE48BA18D7() { return invoke<BOOL>(0x9ED486CE48BA18D7); }
static BOOL _0x77FD7C1D85AFECBA(Any p0) { return invoke<BOOL>(0x77FD7C1D85AFECBA, p0); }
static void REQUEST_CUTSCENE(char* cutsceneName, int p1) { invoke<Void>(0xE592C68A352C5B0A, cutsceneName, p1); }
static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xD13B98F0B2581017); }
static void _0x98E9C976B38F9039(Hash modelHash) { invoke<Void>(0x98E9C976B38F9039, modelHash); }
static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x5A164E5A64DEF99D, p0, p1, p2, p3); }
static void _0x7BC5C3EE2B9CEBD8(int p0) { invoke<Void>(0x7BC5C3EE2B9CEBD8, p0); }
static void SET_CUTSCENE_TRIGGER_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xE3FE8493EEE1D9BF, p0, p1, p2, p3, p4, p5); }
static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xB1FDEE75A71D93F5); }
static int _0xE9F84F88F70445CA() { return invoke<int>(0xE9F84F88F70445CA); }
static BOOL _0xFCB87DFDB4E2F726(Any* p0) { return invoke<BOOL>(0xFCB87DFDB4E2F726, p0); }
static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0x260AD5C1BAEF7765, p0); }
static BOOL _0x95921D2FB0B6ACDD() { return invoke<BOOL>(0x95921D2FB0B6ACDD); }
static void SET_CUTSCENE_ORIGIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA368035F7E9A024F, p0, p1, p2, p3, p4); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(char* cutsceneEntName, int p1, int p2, int p3, Hash modelHash) { invoke<Void>(0x22CBA2C5F68DB7EE, cutsceneEntName, p1, p2, p3, modelHash); }
static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0x7F2F5CBBB87D2D4B, cutsceneEntName, modelHash); }
static void _REQUEST_CUTSCENE_2(char* cutsceneName, int p1, int p2) { invoke<Void>(0xD6EC97AEEF3FE2E2, cutsceneName, p1, p2); }
static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xAA28218C604F91A5); }
static void _0x9556B1B52B8D9672(BOOL p0) { invoke<Void>(0x9556B1B52B8D9672, p0); }
static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0x6D84AAC1F334DEE9, p0); }
static void _0x1BC38B9090321C88(Any* p0) { invoke<Void>(0x1BC38B9090321C88, p0); }
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xB09C7F6E0902F04E); }
static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0x67FB99B1361E144E); }
static void _0xF32D44B55179EEC2(BOOL p0) { invoke<Void>(0xF32D44B55179EEC2, p0); }
static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0x90F1D412CA4CF490, cutscenePed, cutsceneEntName, p2, modelHash, p4); }
static int GET_CUTSCENE_TIME() { return invoke<int>(0x692A7BCA51FD25CC); }
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0x643420C38EFC59D); }
}



namespace DATAFILE
{
static BOOL _0x1BDA9A44B8C88B44(int p0) { return invoke<BOOL>(0x1BDA9A44B8C88B44, p0); }
static int _OBJECT_VALUE_GET_TYPE(Any* objectData, char* key) { return invoke<int>(0x12B8990BAE31537D, objectData, key); }
static int _ARRAY_VALUE_GET_SIZE(Any* arrayData) { return invoke<int>(0xEC85C2DC9477300E, arrayData); }
static float _OBJECT_VALUE_GET_FLOAT(Any* objectData, char* key) { return invoke<float>(0xA361D922F3339879, objectData, key); }
static BOOL _OBJECT_VALUE_GET_BOOLEAN(Any* objectData, char* key) { return invoke<BOOL>(0x472E86F64AA98B04, objectData, key); }
static BOOL _0xD2761819C51ABB60(Any p0) { return invoke<BOOL>(0xD2761819C51ABB60, p0); }
static BOOL _0xFA18904B107F3909(Any p0) { return invoke<BOOL>(0xFA18904B107F3909, p0); }
static void _0xFE0771C43A2BFC0F() { invoke<Void>(0xFE0771C43A2BFC0F); }
static void _ARRAY_VALUE_ADD_STRING(Any* arrayData, char* value) { invoke<Void>(0xFF9AE00222203142, arrayData, value); }
static void _OBJECT_VALUE_ADD_BOOLEAN(Any* objectData, char* key, BOOL value) { invoke<Void>(0x8A3C2E6EDFD8D79A, objectData, key, value); }
static int _ARRAY_VALUE_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xC128BEC1E47D7A3B, arrayData, arrayIndex); }
static char* _OBJECT_VALUE_GET_STRING(Any* objectData, char* key) { return invoke<char*>(0xD856A6F0C791DA48, objectData, key); }
static int _ARRAY_VALUE_GET_INTEGER(Any* arrayData, int arrayIndex) { return invoke<int>(0x9B63716C99E9B205, arrayData, arrayIndex); }
static void _ARRAY_VALUE_ADD_VECTOR3(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xAFB1056E4808AA21, arrayData, valueX, valueY, valueZ); }
static BOOL _0x1A44C5DA85A0F2F2(char* p0, char* p1, char* p2, char* p3, char* type) { return invoke<BOOL>(0x1A44C5DA85A0F2F2, p0, p1, p2, p3, type); }
static Vector3 _OBJECT_VALUE_GET_VECTOR3(Any* objectData, char* key) { return invoke<Vector3>(0x10AC91A12AB855AE, objectData, key); }
static void _OBJECT_VALUE_ADD_VECTOR3(Any* objectData, char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0x1477C0365262D0A8, objectData, key, valueX, valueY, valueZ); }
static BOOL _0x43938CA5A4304C90(BOOL* p0) { return invoke<BOOL>(0x43938CA5A4304C90, p0); }
static BOOL _ARRAY_VALUE_GET_BOOLEAN(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0x31C444FBA3B6A27B, arrayData, arrayIndex); }
static BOOL _0x90A5A4F231DA97D4(int p0) { return invoke<BOOL>(0x90A5A4F231DA97D4, p0); }
static void _ARRAY_VALUE_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0x5F138D953316A7BC, arrayData, value); }
static Any* _OBJECT_VALUE_ADD_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0xE09F70A88D6A6BEA, objectData, key); }
static BOOL _0x667AB1AB7EC2BFC1(char* p0, Any* p1, BOOL p2, Any* p3, Any* p4, Any* p5, char* type) { return invoke<BOOL>(0x667AB1AB7EC2BFC1, p0, p1, p2, p3, p4, p5, type); }
static Any* _ARRAY_VALUE_ADD_OBJECT(Any* arrayData) { return invoke<Any*>(0x717BA4623498F09E, arrayData); }
static BOOL _0x9090ED3355088D6D(char* p0, float p1, char* type) { return invoke<BOOL>(0x9090ED3355088D6D, p0, p1, type); }
static void _0xD34925A26C599AF6() { invoke<Void>(0xD34925A26C599AF6); }
static int _OBJECT_VALUE_GET_INTEGER(Any* objectData, char* key) { return invoke<int>(0xC70A268552D2D17, objectData, key); }
static Any* _OBJECT_VALUE_GET_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0x6D57F4CEAF9EFFBB, objectData, key); }
static BOOL _0xEF73317DE653A847(char* filename) { return invoke<BOOL>(0xEF73317DE653A847, filename); }
static Any* _ARRAY_VALUE_GET_OBJECT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0x12A772D94035846C, arrayData, arrayIndex); }
static Vector3 _ARRAY_VALUE_GET_VECTOR3(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0xFC5E9F9EB9E91418, arrayData, arrayIndex); }
static BOOL _0x806C6C94A234DAFE(Any p0) { return invoke<BOOL>(0x806C6C94A234DAFE, p0); }
static void _OBJECT_VALUE_ADD_STRING(Any* objectData, char* key, char* value) { invoke<Void>(0x274E35FE0D555DBF, objectData, key, value); }
static Any* _GET_ROOT_OBJECT() { return invoke<Any*>(0xBF5127EAB2CAEF2C); }
static void DATAFILE_DELETE() { invoke<Void>(0xAD8E5BF5EF384D7D); }
static BOOL _0xB2EF5E9FF22C9C91(int p0, BOOL p1) { return invoke<BOOL>(0xB2EF5E9FF22C9C91, p0, p1); }
static Any* _OBJECT_VALUE_ADD_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0x814CE9A9E9FC6D32, objectData, key); }
static BOOL _0xAB267B9811CD4FFD(char* p0, char* p1, char* p2, char* p3, BOOL p4) { return invoke<BOOL>(0xAB267B9811CD4FFD, p0, p1, p2, p3, p4); }
static BOOL _0xC2407D11F17B893F(int p0) { return invoke<BOOL>(0xC2407D11F17B893F, p0); }
static void _0x97C9BE374886D19C(Any p0) { invoke<Void>(0x97C9BE374886D19C, p0); }
static Any* _OBJECT_VALUE_GET_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0x1B61845568F6F93A, objectData, key); }
static BOOL _0x1AB59BFCD46AAD2F() { return invoke<BOOL>(0x1AB59BFCD46AAD2F); }
static float _ARRAY_VALUE_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0x84CC82885F6E3E3E, arrayData, arrayIndex); }
static void _OBJECT_VALUE_ADD_FLOAT(Any* objectData, char* key, float value) { invoke<Void>(0xBAF7EAB9107B9156, objectData, key, value); }
static BOOL _LOAD_UGC_FILE(char* filename) { return invoke<BOOL>(0x7C1AAF1967B5F60A, filename); }
static void _0xC8C6902F47BA3387() { invoke<Void>(0xC8C6902F47BA3387); }
static BOOL _0xE27AE63FEFE892CE(char* p0, BOOL p1, char* p2, Any* p3, Any* p4, char* type, BOOL p6) { return invoke<BOOL>(0xE27AE63FEFE892CE, p0, p1, p2, p3, p4, type, p6); }
static void _ARRAY_VALUE_ADD_INTEGER(Any* arrayData, int value) { invoke<Void>(0xB055B3DD7FC73C4E, arrayData, value); }
static void DATAFILE_CREATE() { invoke<Void>(0x32E554D8CDD508B6); }
static char* _ARRAY_VALUE_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<char*>(0xFC143A57593B7EBA, arrayData, arrayIndex); }
static void _OBJECT_VALUE_ADD_INTEGER(Any* objectData, char* key, int value) { invoke<Void>(0x65C2E3458A80F16B, objectData, key, value); }
static void _ARRAY_VALUE_ADD_BOOLEAN(Any* arrayData, BOOL value) { invoke<Void>(0xD34029F18B277B6D, arrayData, value); }
static BOOL _0xFCE7A47F85B851(Any p0) { return invoke<BOOL>(0xFCE7A47F85B851, p0); }
static BOOL _0xA1C4892A9F199A42(Any p0) { return invoke<BOOL>(0xA1C4892A9F199A42, p0); }
}



namespace DECISIONEVENT
{
static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return invoke<BOOL>(0x496CE22D6603765D, type, x, y, z, radius); }
static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0x6AA87532C1855E90, event); }
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xE788F0E493E84E0D); }
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x1ABEC7C0B9A3CE98); }
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) { invoke<Void>(0x40D03F37979DBF79, type); }
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int type) { invoke<Void>(0x3A2E082E8BFEBE9F, name, type); }
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0x2AE7BFDEB746DE93); }
static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration) { return invoke<ScrHandle>(0xE20423FE607FBF55, type, entity, duration); }
static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0x929DE3DC8120365B, ped, name); }
static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0x6D60708E6FE87881, name, type); }
static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) { return invoke<ScrHandle>(0xFF1562BFEE092DE5, type, x, y, z, duration); }
static void BLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0xEC5C086C104B9C7C, name, type); }
static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xD913FA47554E3556, p0); }
}



namespace DECORATOR
{
static BOOL DECOR_REMOVE(Entity entity, char* propertyName) { return invoke<BOOL>(0xEF7D3CA676ABA716, entity, propertyName); }
static BOOL DECOR_EXIST_ON(Entity entity, char* propertyName) { return invoke<BOOL>(0xE8E046017EE675F2, entity, propertyName); }
static BOOL DECOR_SET_INT(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0xE259158ED7E55524, entity, propertyName, value); }
static BOOL _DECOR_SET_FLOAT(Entity entity, char* propertyName, float value) { return invoke<BOOL>(0xEF5C6C7EBBC9F4C2, entity, propertyName, value); }
static int _0x5853D68FC0B7636E() { return invoke<int>(0x5853D68FC0B7636E); }
static BOOL DECOR_IS_REGISTERED_AS_TYPE(char* propertyName, int type) { return invoke<BOOL>(0x90F7F7FF57758DF4, propertyName, type); }
static float _DECOR_GET_FLOAT(Entity entity, char* propertyName) { return invoke<float>(0x15ADB8D7E380CCE, entity, propertyName); }
static BOOL DECOR_SET_BOOL(Entity entity, char* propertyName, BOOL value) { return invoke<BOOL>(0xBC2F3726EAB9B952, entity, propertyName, value); }
static BOOL DECOR_SET_TIME(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0x9384089C2DF9FFF6, entity, propertyName, value); }
static void DECOR_REGISTER(char* propertyName, int type) { invoke<Void>(0xD6757106AB0BC16E, propertyName, type); }
static int DECOR_GET_INT(Entity entity, char* propertyName) { return invoke<int>(0x6140AB07098540A5, entity, propertyName); }
static void DECOR_REGISTER_LOCK() { invoke<Void>(0xE685C4DB93750989); }
static BOOL DECOR_GET_BOOL(Entity entity, char* propertyName) { return invoke<BOOL>(0xF47B23D65F733C81, entity, propertyName); }
}



namespace DLC1
{
static Any _0x8939B2C9630BC6D6(Any p0) { return invoke<Any>(0x8939B2C9630BC6D6, p0); }
static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xD6CC5E439300EFB7, entity, componentId, drawableVariant, textureVariant); }
static BOOL _0xB8F3AEDA1B2F685E(Any p0) { return invoke<BOOL>(0xB8F3AEDA1B2F685E, p0); }
static Any _0x6CBAC93420023E48(Any p0) { return invoke<Any>(0x6CBAC93420023E48, p0); }
static BOOL _GET_PROP_FROM_OUTFIT(Any outfit, Any slot, Any* item) { return invoke<BOOL>(0x548C49DA22A760B1, outfit, slot, item); }
static void INIT_SHOP_PED_COMPONENT(Player outComponent) { invoke<Void>(0xAC1CC1837466CC86, outComponent); }
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xD46B5FE0A90F977C, componentId, outComponent); }
static int _0xD671B6E4476BAB9B(int p0) { return invoke<int>(0xD671B6E4476BAB9B, p0); }
static BOOL GET_DLC_VEHICLE_DATA(int dlcWeapIndex, Any* outData) { return invoke<BOOL>(0xB1B63407FCB8DC25, dlcWeapIndex, outData); }
static BOOL _0xF85281061FECBFF7(Hash componentHash, Hash drawableSlotHash, int p2) { return invoke<BOOL>(0xF85281061FECBFF7, componentHash, drawableSlotHash, p2); }
static int GET_NUM_DLC_WEAPON_COMPONENTS(Any p0) { return invoke<int>(0x10717D9B27CF5851, p0); }
static int _0x26A2CCAFC5E69DCE(int p0, int p1, int p2, int p3) { return invoke<int>(0x26A2CCAFC5E69DCE, p0, p1, p2, p3); }
static int GET_DLC_VEHICLE_FLAGS(int p0) { return invoke<int>(0xED5112388E96ADE7, p0); }
static void _0xA556B3729B46F9A9(Any p0, Any* p1) { invoke<Void>(0xA556B3729B46F9A9, p0, p1); }
static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0x1463DBBCCB07A9D8, entity, componentId, propIndex, propTextureIndex); }
static void GET_FORCED_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x3A5452084A5A2455, componentHash, componentId, p2, p3, p4); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xD1F2F7720C352D2F, p0, p1, p2); }
static void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xCA7A7671A8BA2299, p0, p1); }
static void GET_VARIANT_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x20464123C0125184, componentHash, componentId, p2, p3, p4); }
static void GET_SHOP_PED_COMPONENT(Any p0, Any* p1) { invoke<Void>(0x745DBF500BAEBEE6, p0, p1); }
static BOOL GET_DLC_WEAPON_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x91156000A6A01C12, p0, p1); }
static int _GET_NUM_PROPS_FROM_OUTFIT(int playerId, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xE6037C03B43E9AE7, playerId, p1, p2, p3, p4, componentId); }
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xF91F65A88EC73320); }
static BOOL _0x7987A88FA80AD264(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x7987A88FA80AD264, p0, p1, p2); }
static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0x514D672EE096FB3D, p0, p1); }
static Any _0xD14FB796B1E45B5A(Any p0) { return invoke<Any>(0xD14FB796B1E45B5A, p0); }
static int _0xC2352EBA2D34397F(Hash componentHash) { return invoke<int>(0xC2352EBA2D34397F, componentHash); }
static int _GET_NUM_FORCED_COMPONENTS(Hash componentHash) { return invoke<int>(0xADDA1392F4F8A2DA, componentHash); }
static BOOL _IS_DLC_DATA_EMPTY(Any dlcData) { return invoke<BOOL>(0x80EC20FBCB429863, dlcData); }
static void GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) { invoke<Void>(0x880ACDB17971EE98, p0, p1); }
static void _0x376FBDE83A1D48A(Any p0, Any p1, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x376FBDE83A1D48A, p0, p1, p2, p3, p4); }
static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0x588D8B0DDDAB55A2, outProp); }
static Hash GET_DLC_VEHICLE_MODEL(int p0) { return invoke<Hash>(0xCCB0AB0B22D0559A, p0); }
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0x5F329C28EE128D99); }
static int _0x49F78716F50C5C28(int character, BOOL p1) { return invoke<int>(0x49F78716F50C5C28, character, p1); }
static BOOL _0x37E70A233D17976B(int p0, int p1, Any* outComponent) { return invoke<BOOL>(0x37E70A233D17976B, p0, p1, outComponent); }
}



namespace DLC2
{
static void _LOAD_MP_DLC_MAPS() { invoke<Void>(0x44D10276CE9FD2BC); }
static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0x800D3980D41FD1E4); }
static BOOL _NULLIFY(Any* variable, Any unused) { return invoke<BOOL>(0xB3A078B096EC0222, variable, unused); }
static BOOL IS_DLC_PRESENT(Hash DlcHash) { return invoke<BOOL>(0xA29E536967D6DF2E, DlcHash); }
static Any _0xA0A3F3C9D4C3B543() { return invoke<Any>(0xA0A3F3C9D4C3B543); }
static Any _0x66CAB5401C0B1D47() { return invoke<Any>(0x66CAB5401C0B1D47); }
static Any _0xCB11FFBF3F71918A() { return invoke<Any>(0xCB11FFBF3F71918A); }
static void _LOAD_SP_DLC_MAPS() { invoke<Void>(0xD63BC8BDB1EDC092); }
static Any _0xEC1BDDA0E88A8FEF() { return invoke<Any>(0xEC1BDDA0E88A8FEF); }
}



namespace ENTITY
{
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0x2B602B95240AC6EF, entity1, entity2); }
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0x90BE3D4A8CA18006, x, y, z, radius, originalModel, newModel, p6); }
static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0x97EA5EA3E7FE8500, entity); }
static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0x1B44B568175DB615, entity); }
static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0x4EEE9D9427E70F4E, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static BOOL FIND_ANIM_EVENT_PHASE(char* animDictionary, char* animName, char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xE86716A9B434D9B4, animDictionary, animName, p2, p3, p4); }
static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xA594978F4C43B587, entity, toggle); }
static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xE7669FB0FEEAD3DD, entity); }
static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xE24B37600DCB21FC, entity); }
static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xD6FF698E7BC1C003, entity, toggle); }
static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xB0D97BCCF59EF6B6, entity, speed); }
static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xF26D052072E243F6, entity, modelHash); }
static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, float p5) { return invoke<BOOL>(0xFB534796DD249A50, p0, p1, p2, p3, p4, p5); }
static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xB6B19B427CED946A, entity); }
static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0x536DE1C69CF1DE5A, x, y, z, p3, modelHash, p5); }
static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xFFE8D8D3D4C09D89, entity); }
static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0x7A9F665551CAFDAB, entity, value); }
static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0x17976D9BB43321C1, entity, toggle); }
static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xCD0F5594F1C6772F, entity, toggle); }
static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0x799B2D82E6E6C363, entity, targetEntity); }
static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xD7C4E2CB0B216852, entity, offsetX, offsetY, offsetZ); }
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isRel, BOOL highForce, BOOL p8) { invoke<Void>(0x9AAD6EA7A85E6C7A, entity, forceType, x, y, z, p5, isRel, highForce, p8); }
static void _0xABF1E5A2095F1B98(Entity entity, BOOL p1) { invoke<Void>(0xABF1E5A2095F1B98, entity, p1); }
static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xF1919C21714E9FAF, entity, toggle, keepPhysics); }
static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x452D0C2B11A45529, entity, x, y, z); }
static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0x71A741FE7CE9D57A, entity); }
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xA9C97BD080FF4ED5, entity); }
static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, char* animDict, char* animName, int p4) { return invoke<BOOL>(0xF4954568C87BA772, entity, animDict, animName, p4); }
static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xB1988D54B2C48CB5, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, char* animDict, char* animName, int p3) { return invoke<BOOL>(0xEBE7103A50B01336, entity, animDict, animName, p3); }
static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0x8453099F4E7EF410, entity); }
static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0x7CECDDECF10DF2AA, entity, posX, posY, posZ); }
static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0x18805F05877E2E2, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); }
static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0x7E8F7C1D05860F53, ped); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x7047948B09B46E3F, entity); }
static Any STOP_ENTITY_ANIM(Entity entity, char* animation, char* animGroup, float p3) { return invoke<Any>(0xCF2E232F96B927E2, entity, animation, animGroup, p3); }
static void SET_ENTITY_ANIM_SPEED(Entity entity, char* animDictionary, char* animName, float speedMultiplier) { invoke<Void>(0x4F42FA30FB1F8CB9, entity, animDictionary, animName, speedMultiplier); }
static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0x63AF28A95F236824, entity, toggle); }
static void _0x256484B4984A9D02(Entity entity, BOOL p1) { invoke<Void>(0x256484B4984A9D02, entity, p1); }
static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0x45BFA2594AA26529, entity, animDict, animName); }
static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xDC994C828DF12354, entity, toggle); }
static void _0x77E24407E71C2B27(Entity entity, BOOL p1) { invoke<Void>(0x77E24407E71C2B27, entity, p1); }
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0xDEDF8755837CD441, x, y, z, radius, model, p5); }
static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0x7DC0C08D21B1080D, object); }
static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xA8CFDE65C45F813B, entity, alive); }
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0x2B70DAD920D11AA4, entity); }
static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xC36DEC5C63DF7AA0, entity); }
static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xA8CA82EB31D1626F, entity, toggle); }
static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xF02BC5112BB376BE, entity, p1, p2); }
static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDictionary, char* animName, float time) { invoke<Void>(0xF4906444051FDC58, entity, animDictionary, animName, time); }
static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xF97AA029DC40CB2B, entity, alphaLevel, skin); }
static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xEAE1E838D30BBB88, entity, boneIndex); }
static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0x55D0FF0532D6A513, entity); }
static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0x73A52F9295BA1599, entity); }
static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xE2E0F5BEB0CCC177, entity); }
static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xE88D20D0E7E8D924, entity, toggle); }
static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0x35E488C304B2E03E, entity); }
static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xE9052D862BBEBC9D, entity, team); }
static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, char* animDict, char* animName) { return invoke<float>(0x6C9F58BF9CFDBA50, entity, animDict, animName); }
static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float originX, float originY, float originZ, float edgeX, float edgeY, float edgeZ, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0x98CEDC9398D49BB8, entity, originX, originY, originZ, edgeX, edgeY, edgeZ, angle, p8, p9, p10); }
static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x54F37403E01EFD97, entity); }
static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xB2D89B2FA7AD008C, entity, angle); }
static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0x4E839ED2046D41A1, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0x305A284795698071, entity, state); }
static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0x6C2E94E5E71423B4, entity, value); }
static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xC24FB3C481261A5B, entity); }
static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0x684C5648AE092BE3, entity, X, Y, Z, atTop, inWorldCoords); }
static void _0xAB8E568A01DD18DF(Entity entity, float p1) { invoke<Void>(0xAB8E568A01DD18DF, entity, p1); }
static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xB745C22E7AF4C5D2, entity); }
static BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0x2006A8C1BA2AFE80, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0x4D58D4878F3F3E12, entity); }
static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xD20FE481FBFD31BD, p0, p1, p2, p3, p4); }
static void _SET_ENTITY_COORDS_2(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0x3C5851B7100376E7, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0x9846B4D56971A958, vehicle); }
static void _0xEBC2FD3B79B2DAB1(Entity entity, BOOL p1) { invoke<Void>(0xEBC2FD3B79B2DAB1, entity, p1); }
static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x8F8858152A9B9959, entity); }
static void SET_ENTITY_HEALTH(Entity entity, int health) { invoke<Void>(0x51F79AC13D2AD286, entity, health); }
static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL isRelative, BOOL collision, BOOL allowRotation, int vertexIndex, BOOL fixedRot) { invoke<Void>(0x356675505D724E40, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, isRelative, collision, allowRotation, vertexIndex, fixedRot); }
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0x926A3BE56A6B3BA9, entity, p1, p2); }
static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xBAF5DD9392338B65, entity); }
static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xD2CFFE76B625AE55, entity); }
static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0x296014070DDA209D, entity, toggle); }
static BOOL IS_AN_ENTITY(int handle) { return invoke<BOOL>(0x23D116027ACCFB70, handle); }
static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xC4F9E3DD5445F8E4, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xF01F794A8E94C0E1, entity, x, y, z, w); }
static void _0x6708A35A50A19245(Entity entity) { invoke<Void>(0x6708A35A50A19245, entity); }
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0x2CBC4FD55924CEE9, entity, toggle); }
static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0x23C9DE7FE1B9D6D9, entity, x, y, z, w); }
static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xE4797CEBCFBDED92, entity, toggle); }
static BOOL PLAY_ENTITY_ANIM(Entity entity, char* animName, char* propName, float p3, BOOL p4, BOOL p5, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x7318FEB27BFEAB70, entity, animName, propName, p3, p4, p5, p6, delta, bitset); }
static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0x943B0C3F713F51DE, entity); }
static float _GET_ENTITY_PHYSICS_HEADING(Entity entity) { return invoke<float>(0xA3560C67B8AA418D, entity); }
static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int p4, BOOL p5) { invoke<Void>(0x359A241E2DD22AC, entity, pitch, roll, yaw, p4, p5); }
static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xD45EA3EE5DC8356F, entity); }
static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xBAF34551BADE6DC, entity); }
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash model, BOOL p5) { invoke<Void>(0x6EF6FEAF532E4684, x, y, z, radius, model, p5); }
static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0x376E4A601F9FE2E9, entity); }
static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xF6E7E32D0D604675, entity); }
static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xBCB0D055F08D63E3, entity); }
static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xEB9962C184DA6150, entity); }
static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xFBDCF3D5834B58D8, entity, heading); }
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0x7A0541D3CF368247, x, y, z, radius, originalModel, newModel, p6); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x84BB56A10D9E43D8, entity); }
static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0x45492A3571FB6301, entity); }
static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL noCollision) { invoke<Void>(0xE223D49B3EFFD3E3, entity, p1, noCollision); }
static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x936D9EB7E9F75DA2, entity, relative); }
static Any RESET_ENTITY_ALPHA(Entity entity) { return invoke<Any>(0x6E841781168D15F6, entity); }
static void _0x75FAAD902F8E132F(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x75FAAD902F8E132F, entity, p1, p2); }
static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x946C63BD9EF05437, entity); }
static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL collision) { invoke<Void>(0x624BAB532B5DC6D9, entity1, entity2, collision); }
static char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<char*>(0x608A5034B2871DB1, entity, script); }
static Any CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { return invoke<Any>(0x1393E54C663BBD20, entity); }
static void _0xF71E692271975546(Entity entity, BOOL p1) { invoke<Void>(0xF71E692271975546, entity, p1); }
static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0x36F01E62334B745B, entity, toggle); }
static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL value, BOOL byThisScript) { invoke<Void>(0xAF3355298F537BB0, entity, value, byThisScript); }
static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xFC06ECC816BE236A, entity); }
static Vector3 GET_ENTITY_ROTATION(Entity entity, int p1) { return invoke<Vector3>(0x9A98AE1D9D8DEF06, entity, p1); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0x738E93147C5CBA85, entity); }
static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xBF99E4112970270F, entity); }
static BOOL IS_ENTITY_IN_ZONE(Entity entity, char* zone) { return invoke<BOOL>(0x9F40A91E033B35AC, entity, zone); }
static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0x87EFF3C203462E60, entity); }
static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, Any p5, Any* p6, Any* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0x584431AC2A00988F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0x6E54BBC6FA4E6693, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); }
static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceType, float x, float y, float z, float xRot, float yRot, float zRot, int p8, BOOL isRel, BOOL p10, BOOL highForce, BOOL p12, BOOL p13) { invoke<Void>(0xB832F99A86A0D1C2, entity, forceType, x, y, z, xRot, yRot, zRot, p8, isRel, p10, highForce, p12, p13); }
static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, Entity syncedScene, char* animation, char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0x4DCC07E3B4ADC9CD, entity, syncedScene, animation, propName, p4, p5, p6, p7); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0x77F1B7F6C32990D6, entity1, entity2, p2); }
static BOOL _IS_ENTITY_COLLISON_DISABLED(Entity entity) { return invoke<BOOL>(0x3EC1AB953865DDFC, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xE023C3ABA6B29DD, entity); }
static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xA8ED23ED7AA60A97, entity); }
static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0x396C7323F60EA166, entity); }
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xFB8F5CAF6A3A134D, entity, toggle); }
static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0x4EF677A895B2F2F3, entity); }
static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xECC01072E61D2F3A, entity); }
static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xDF5FCBDBA9ECE63C, entity); }
static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xF85370D360C5C95C, entity); }
static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xD54126A841C7B0C2, p0, p1, p2, p3, p4, p5); }
static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xEE2B8D7A30F55AF7, entity); }
static void _0x7CA705648D3D4B09(Entity entity, BOOL p1) { invoke<Void>(0x7CA705648D3D4B09, entity, p1); }
static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xFF65D7BC656BA68E, entity, p1); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x1A82CEBB20BF3F73, entity); }
static void _0xC264CE68C4ABEC9A(Entity entity, BOOL p1) { invoke<Void>(0xC264CE68C4ABEC9A, entity, p1); }
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0x9AAE2FED7F9C3140, entity, p1, p2); }
static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0x5EE69620FB6ABC8D, entity); }
static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0x8D93429DE767D936, entity); }
static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0x4FB9EE3D0706477D, entity); }
static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xE9A5D068FA8717DC, entity); }
static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0x4D6B971C8AEE130C, entity); }
static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0x6966685A80857971, entity); }
static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0x98F6ED6E1345DBB0, entity, p1, p2); }
static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unk) { invoke<Void>(0xFBE386F7181B95E8, entity, toggle, unk); }
static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0x8C819425CC4D7DD4, entity, actionHash); }
static void GET_ENTITY_MATRIX(Entity entity, Vector3* p1, Vector3* p2, Vector3* p3, Vector3* p4) { invoke<Void>(0xDF8D08A4A01E7859, entity, p1, p2, p3, p4); }
static BOOL WOULD_ENTITY_BE_OCCLUDED(Entity entity, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0x4F0E31BFF50C479F, entity, x, y, z, p4); }
static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0x4C3235E6E203703D, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x53D573A48E8DFC4C, from, to); }
static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0x76743E423ACEE0E6, entity); }
static int _GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xA5ED715BB113D366, entity); }
static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL p6, BOOL p7, BOOL drownProof) { invoke<Void>(0xF7B3552987613A6B, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); }
static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, char* boneName) { return invoke<int>(0x1060AD708DD56BC7, entity, boneName); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xDE7DE56F6FF55B6A, entity1, entity2, traceType); }
static float _GET_ENTITY_ANIM_DURATION(char* animDict, char* animName) { return invoke<float>(0xB24F61EB6890263F, animDict, animName); }
}



namespace FIRE
{
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0x78856C91417B033E, x, y, z, radius); }
static Entity _GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0x5F5956B1527AA1F5, explosionType, x1, y1, z1, x2, y2, z2, radius); }
static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x5927A69C056FE6E3, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xFA7888B344869306, entity); }
static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x2FB10D858C6A5FD0, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xE24C49AB7FEAED17, outPosition, x, y, z); }
static void _ADD_SPECFX_EXPLOSION(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x9A73C9D83818F8A2, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0x7E5CC56729CE6D59, x, y, z, radius); }
static Any _0x62B24FDDA90323D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0x62B24FDDA90323D, p0, p1, p2, p3, p4, p5, p6); }
static Any START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<Any>(0x2AFAABC69EE45C3C, X, Y, Z, maxChildren, isGasFire); }
static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0x16C63BA5AB425385, entity); }
static void REMOVE_SCRIPT_FIRE(Any scriptHandle) { invoke<Void>(0x16E6B786BBE2CB9B, scriptHandle); }
static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0x5616664D591B61EA, explosionType, x1, y1, z1, x2, y2, z2, angle); }
static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xACD604A3AE9C4A92, explosionType, x, y, z, radius); }
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x704886F0F0CF2BF3, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static Any START_ENTITY_FIRE(Entity entity) { return invoke<Any>(0x2A87D36F7ADC7DF2, entity); }
}



namespace GAMEPLAY
{
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { invoke<Void>(0x5F19E109A9180E7B, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0xC972AA2C9F94741D, x, y, z, radius, p4, p5, p6, p7, p8); }
static void _0x8BE7D7E80F9B6247(char* p0) { invoke<Void>(0x8BE7D7E80F9B6247, p0); }
static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0x3DE83953A8E7C5D3, modelHash, minimum, maximum); }
static void STOP_SAVE_ARRAY() { invoke<Void>(0xE3D8AE25D0AA5274); }
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xDFAEC2DE5A80DCA7, x, y, z, radius, flags); }
static BOOL CREATE_INCIDENT_WITH_ENTITY(int p0, Entity p1, int p2, float p3, int* outIncident) { return invoke<BOOL>(0x4F089E05E7C94CBE, p0, p1, p2, p3, outIncident); }
static void _0x462A2A545CCB01DB() { invoke<Void>(0x462A2A545CCB01DB); }
static BOOL _HAS_BUTTON_COMBINATION_JUST_BEEN_ENTERED(Hash hash, int amount) { return invoke<BOOL>(0xC6F26EC5CCB72759, hash, amount); }
static Any _0x7F5C21162E476F() { return invoke<Any>(0x7F5C21162E476F); }
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0x8474F03FCE36E004, x, y, z, radius, flags); }
static void _0x437F9FD14FCE9F25(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x437F9FD14FCE9F25, p0, p1, p2, p3); }
static BOOL ARE_STRINGS_EQUAL(char* string1, char* string2) { return invoke<BOOL>(0xC1C5B83BB6719C6C, string1, string2); }
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x35F8042CFBC340F9); }
static void REGISTER_ENUM_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xE7EEE9489D1657A5, p0, name); }
static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0x1F3A62DB668B9B25, p0, p1, p2, p3, p4, p5, p6, p7); }
static Any SET_FIRE_AMMO_THIS_FRAME(Player player) { return invoke<Any>(0x91E9DAE837E9281F, player); }
static void _0xCC51F2BA9DB7EA8B(char* p0) { invoke<Void>(0xCC51F2BA9DB7EA8B, p0); }
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { invoke<Void>(0x31D69BBC7F83114D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static BOOL _0x5F71937A5C9C20EA(Any p0) { return invoke<BOOL>(0x5F71937A5C9C20EA, p0); }
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xE1B66F8951091F84, fakeWantedLevel); }
static Any _0x86ABFEA43D47BBE6() { return invoke<Any>(0x86ABFEA43D47BBE6); }
static float GET_FRAME_TIME() { return invoke<float>(0xFF104D8C26C113A2); }
static BOOL _0x9C0A6E8EE9A739E0(Any p0) { return invoke<BOOL>(0x9C0A6E8EE9A739E0, p0); }
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x1E765DC28DD319DF, x1, y1, x2, y2); }
static BOOL _0x6690913D899E262D(Any p0) { return invoke<BOOL>(0x6690913D899E262D, p0); }
static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xCA61AAED31F8576B, toggle); }
static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0x9A57F277955D977B, p0, p1, p2, p3, p4, p5, p6, p7); }
static int ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16) { return invoke<int>(0xE1D98D8F5D1FA9DF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static void CLEAR_REPLAY_STATS() { invoke<Void>(0x75A4B96DCBB23E73); }
static Any _0x4A1D603DC6EEDEF8() { return invoke<Any>(0x4A1D603DC6EEDEF8); }
static void _0xC5F56EFC189F568D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC5F56EFC189F568D, p0, p1, p2, p3); }
static float ACOS(float p0) { return invoke<float>(0x7D29901A621D1EB3, p0); }
static void SET_TIME_SCALE(float time) { invoke<Void>(0x59B57A061D8D4885, time); }
static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0x1630072C8625779F, toggle); }
static int COMPARE_STRINGS(char* str1, char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0x4A997F738952113D, str1, str2, matchCase, maxLength); }
static void _0xA38955D8C4F69C51(int p0, BOOL p1) { invoke<Void>(0xA38955D8C4F69C51, p0, p1); }
static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x8972D78816690B22); }
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0x66E3CE2698BD6E1C, x, y, z, p3, p4); }
static void _0xBDA34E9F6CDD7C65() { invoke<Void>(0xBDA34E9F6CDD7C65); }
static float _0x46061E93A067173D() { return invoke<float>(0x46061E93A067173D); }
static Any _0xA04ECC3218453349() { return invoke<Any>(0xA04ECC3218453349); }
static Vector3 _0x536DD887D9FADBE4(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0x536DD887D9FADBE4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xE0F2B328632171D0, toggle); }
static BOOL _0xC56DBA834801CC6A() { return invoke<BOOL>(0xC56DBA834801CC6A); }
static void _0xB97818D80EDD93EC() { invoke<Void>(0xB97818D80EDD93EC); }
static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0x32815B1681F2E177, policeIndex, toggle); }
static char* _GET_EMPTY_STRING() { return invoke<char*>(0x3B7B28BCB4E5D8C2); }
static void _0x31AEAED33F86F091(BOOL p0) { invoke<Void>(0x31AEAED33F86F091, p0); }
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0x1409F2EDFCAD4B50, p0); }
static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x3DE0BAEF32A10652, ped, toggle, p2); }
static void SET_WEATHER_TYPE_NOW(char* weatherType) { invoke<Void>(0x646DCF5C8BA88B4F, weatherType); }
static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x8A4F12025F4EA58F); }
static Any _0x7C6BCCD696AAF5F() { return invoke<Any>(0x7C6BCCD696AAF5F); }
static Any _0xF142F7DF9AB2F05() { return invoke<Any>(0xF142F7DF9AB2F05); }
static void _DISABLE_AUTOMATIC_RESPAWN(BOOL disableRespawn) { invoke<Void>(0xB12859ABFCB19EB5, disableRespawn); }
static Any _0x73D0D69F40265A33(float p0, float p1, float p2, float p3) { return invoke<Any>(0x73D0D69F40265A33, p0, p1, p2, p3); }
static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0xA27CFF319F7EB7BF, x1, y1, z1, x2, y2, z2, type, p7); }
static BOOL IS_NEXT_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0x7489214A03D3A1BC, weatherType); }
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xCBE9F57FCC3C2A5A, dx, dy); }
static void _0xD3A9962E1E3813F1(Any p0) { invoke<Void>(0xD3A9962E1E3813F1, p0); }
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0x5C02660403071A83, startRange, endRange); }
static void _0x18A4FC034DBB3015(float p0) { invoke<Void>(0x18A4FC034DBB3015, p0); }
static Any _0x76051FAD720B7E63(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<Any>(0x76051FAD720B7E63, p0, p1, p2, p3, p4, p5, p6, p7); }
static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0x55BD8738B8125282); }
static BOOL _0x9EE518BD3F590933(float p0, float p1, float p2, Any p3, float p4, BOOL p5) { return invoke<BOOL>(0x9EE518BD3F590933, p0, p1, p2, p3, p4, p5); }
static void REGISTER_INT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x78AD9BCE689926F8, p0, name); }
static void _0xB079B7AFD964B3F3() { invoke<Void>(0xB079B7AFD964B3F3); }
static int _0x94298AB41384FC9E() { return invoke<int>(0x94298AB41384FC9E); }
static Any _0x1A80B130FB878D4A() { return invoke<Any>(0x1A80B130FB878D4A); }
static void _0x341503D0BC8B2AD9(int p0) { invoke<Void>(0x341503D0BC8B2AD9, p0); }
static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xFFA15D908A6FDCD4, p0, p1, p2, p3, p4); }
static BOOL CREATE_INCIDENT(int p0, float p2, float p3, float p4, int p5, float p6, int* outIncident) { return invoke<BOOL>(0xC34B6652876361F6, p0, p2, p3, p4, p5, p6, outIncident); }
static void _0x4336D08EFFFFF99C(float p0) { invoke<Void>(0x4336D08EFFFFF99C, p0); }
static void _0xF6D37128461DCC1E() { invoke<Void>(0xF6D37128461DCC1E); }
static void SET_RANDOM_SEED(int time) { invoke<Void>(0xF23C709720A0181, time); }
static Any _0xEC0A8AFBD8F68CAB() { return invoke<Any>(0xEC0A8AFBD8F68CAB); }
static BOOL IS_PREV_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0x10F8DEA83B535D8B, weatherType); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0x5E14D8B3338FB668, p0, p1); }
static Any ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0x93FE85C93C24FAC3, p0, p1, p2, p3, p4); }
static Any _0x1E2469DA7C89A58E() { return invoke<Any>(0x1E2469DA7C89A58E); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0x539F22138C2F6ED4, p0, p1); }
static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xDFCB321F1D24137F); }
static void _0xA9D4405CDE443044(Any* p0, char* name) { invoke<Void>(0xA9D4405CDE443044, p0, name); }
static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0x9270D18AFCBDACEC, toggle); }
static Any _0x75337EC53F1CE6D9() { return invoke<Any>(0x75337EC53F1CE6D9); }
static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xD0333FE560420AC5); }
static void _0x2B10368F8FA22062(Any p0, Any p1) { invoke<Void>(0x2B10368F8FA22062, p0, p1); }
static void _0x1EAF280FA0F0A8F4(BOOL p0) { invoke<Void>(0x1EAF280FA0F0A8F4, p0); }
static void SET_SAVE_HOUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD0BBF189CD8F646C, p0, p1, p2); }
static void DO_AUTO_SAVE() { invoke<Void>(0x9A3D6DF4DD0E9DA6); }
static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { return invoke<BOOL>(0x92C13FDA105016D1, x1, y1, z1, x2, y2, z2, unknown); }
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0x5B9EDDC33E685513, var, rangeStart, rangeEnd); }
static void _0x9D1B9C2F3AB0AA4(Any p0, char* p1, float p2) { invoke<Void>(0x9D1B9C2F3AB0AA4, p0, p1, p2); }
static void DELETE_INCIDENT(int* incidentId) { invoke<Void>(0x8146107D95C34BB1, incidentId); }
static BOOL _0xD10DADA6BAFCBC41(Hash hash) { return invoke<BOOL>(0xD10DADA6BAFCBC41, hash); }
static Hash _GET_CURRENT_WEATHER_TYPE() { return invoke<Hash>(0x396006E15EFE5AFD); }
static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0x42B9806B3EED4C70, toggle); }
static void _SET_WEATHER_TYPE_TRANSITION(Hash sourceWeather, Hash targetWeather, float transitionTime) { invoke<Void>(0xAD6B850FCB925409, sourceWeather, targetWeather, transitionTime); }
static Any SET_SUPER_JUMP_THIS_FRAME(Player player) { return invoke<Any>(0x3D7D8E45C6F50EB1, player); }
static BOOL STRING_TO_INT(char* string, int* outInteger) { return invoke<BOOL>(0xD96FDCC6C2C68CE1, string, outInteger); }
static Any _0x755BFB74ADDC1524() { return invoke<Any>(0x755BFB74ADDC1524); }
static Any _0x22E0DD30928FC3D4() { return invoke<Any>(0x22E0DD30928FC3D4); }
static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0x77D38A448100AFE8, ped); }
static void _START_SAVE_ARRAY(Any* p0, int p1, char* arrayName) { invoke<Void>(0xAEFEB2286EDC77F1, p0, p1, arrayName); }
static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0x8D2EBBC5C13C1FD2); }
static void _0x50AA8765FF729E70(float p0) { invoke<Void>(0x50AA8765FF729E70, p0); }
static float TAN(float p0) { return invoke<float>(0xD00DE282B9BF1223, p0); }
static void _SET_RAIN_FX_INTENSITY(float intensity) { invoke<Void>(0x92CD2FAED853CF95, intensity); }
static void _0xDE3CC10C30E794(BOOL p0) { invoke<Void>(0xDE3CC10C30E794, p0); }
static Any _0xC34EFB51E4D5FCE2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xC34EFB51E4D5FCE2, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static BOOL _0x2166487CB6802201() { return invoke<BOOL>(0x2166487CB6802201); }
static Any _0x4CF34F465945EE31() { return invoke<Any>(0x4CF34F465945EE31); }
static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xC742956A70A5B61C, x1, y1, z1, x2, y2, z2, distance, spawnPoint); }
static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xE2466D85ABE6A073); }
static void _0xA9CBE029E89B7968(Any p0) { invoke<Void>(0xA9CBE029E89B7968, p0); }
static Any _0xD781B8CA59F0A8AC() { return invoke<Any>(0xD781B8CA59F0A8AC); }
static void _0xCDBC8F459D8E83A4(BOOL p0) { invoke<Void>(0xCDBC8F459D8E83A4, p0); }
static void _0xAD0F0E725659A8D0(Any* p0, char* name) { invoke<Void>(0xAD0F0E725659A8D0, p0, name); }
static BOOL _0xFCB0620889504FA8() { return invoke<BOOL>(0xFCB0620889504FA8); }
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { invoke<Void>(0xCABAD2FCF6FD563, p0); }
static void _0xA7C7BAE9FD51720C(Any p0) { invoke<Void>(0xA7C7BAE9FD51720C, p0); }
static void SET_WEATHER_TYPE_PERSIST(char* weatherType) { invoke<Void>(0x22A23BD150DFFD0F, weatherType); }
static void _0x5D3D121CE1475F3A(float x, float y, float z, float heading) { invoke<Void>(0x5D3D121CE1475F3A, x, y, z, heading); }
static Hash _GET_NEXT_WEATHER_TYPE() { return invoke<Hash>(0xEB04D0D7CB006169); }
static Any _0x1F6B512D02A112E0() { return invoke<Any>(0x1F6B512D02A112E0); }
static float ABSF(float value) { return invoke<float>(0x43698C98CC255554, value); }
static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0x99FFC1EC5913E822, level); }
static void POPULATE_NOW() { invoke<Void>(0x305C16714CD924F9); }
static void STOP_SAVE_DATA() { invoke<Void>(0xC7B0C3AF682910A2); }
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0x9BE562380687BB1C); }
static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xB43A7E851FA39612); }
static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xB573C3A12B5F3758); }
static void _0x232A6BB4CDEBA0BB(float p0) { invoke<Void>(0x232A6BB4CDEBA0BB, p0); }
static void REGISTER_FLOAT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x80A12A0C353539B6, p0, name); }
static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x55CE6A52F600CA13); }
static void _0x4164E5E71D8F3F19() { invoke<Void>(0x4164E5E71D8F3F19); }
static float _0xE36D4D10BF4CAF56(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<float>(0xE36D4D10BF4CAF56, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static Any _0xDF42AE354F074094(Any p0) { return invoke<Any>(0xDF42AE354F074094, p0); }
static void _0xE414D6C40FA8C31(Any* p0, char* name) { invoke<Void>(0xE414D6C40FA8C31, p0, name); }
static Any _0x4978AB631CEE55BD(Ped ped, Hash weaponhash, float p2, float p3, float p4, float p5) { return invoke<Any>(0x4978AB631CEE55BD, ped, weaponhash, p2, p3, p4, p5); }
static char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char*>(0xC054BA5E8416DBEC); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0x4D06F3D469F82303, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); }
static float ATAN2(float p0, float p1) { return invoke<float>(0x81CC6B68E6E0E55F, p0, p1); }
static void _0x70165847DB7C84D4() { invoke<Void>(0x70165847DB7C84D4); }
static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x6A8318CD08F60B96); }
static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xA0869E5C696A6B96); }
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xD0AA9E293D22F61C); }
static BOOL _0xA31DD72846DFDA46(float x, float y, float z, float* p3, Vector3* p4) { return invoke<BOOL>(0xA31DD72846DFDA46, x, y, z, p3, p4); }
static void _0xFD054DDDCF1F3CF7(char* p0) { invoke<Void>(0xFD054DDDCF1F3CF7, p0); }
static Any _0x76657109F89F3F3(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x76657109F89F3F3, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0x88264C840D0BF7DE, var, rangeStart, rangeEnd, p3); }
static BOOL _0x674A609F1C1A0A75(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x674A609F1C1A0A75, p0, p1, p2); }
static void _0x4EFF669193C8EEF6(Any p0, Any p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x4EFF669193C8EEF6, p0, p1, p2, p3, p4, p5); }
static Any _0x6E05C739B50EA472(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x6E05C739B50EA472, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0x60F2C6DC397A6833); }
static void _0x1DD66877E65EBDD9() { invoke<Void>(0x1DD66877E65EBDD9); }
static void SET_BIT(int* address, int offset) { invoke<Void>(0x26545538B51562AD, address, offset); }
static void _CLEAR_AREA_2(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xFE13E403CD2693FB, x, y, z, radius, p4, p5, p6, p7); }
static void _CLEAR_CLOUD_HAT() { invoke<Void>(0x69660299638D8AFD); }
static Any GET_RAIN_LEVEL() { return invoke<Any>(0xA19FC7212F3A6E5C); }
static BOOL _0x5ADAAB50497AB349() { return invoke<BOOL>(0x5ADAAB50497AB349); }
static void SET_RANDOM_EVENT_FLAG(BOOL p0) { invoke<Void>(0x82AF1068A2CD2D6A, p0); }
static void _0x6FC2C4611BF35D2(Any p0) { invoke<Void>(0x6FC2C4611BF35D2, p0); }
static BOOL HAS_BULLET_IMPACTED_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x667CDB48DB7744AA, p0, p1, p2, p3, p4, p5); }
static Any _0x16360370CF1CF98C() { return invoke<Any>(0x16360370CF1CF98C); }
static void _0xF54A0F5181996662(Any p0, Any p1) { invoke<Void>(0xF54A0F5181996662, p0, p1); }
static void _ENABLE_MP_DLC_MAPS(BOOL toggle) { invoke<Void>(0xDA45EBC76759DF38, toggle); }
static Any GET_GAME_TIMER() { return invoke<Any>(0xA0F74982C6AAA9D4); }
static void _0xAF844879E33A70F9(BOOL p0) { invoke<Void>(0xAF844879E33A70F9, p0); }
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char* scriptName) { invoke<Void>(0x113FDF809A4916C2, scriptName); }
static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xDDD29E9425856A4B); }
static void _0x9EB6CBD81A3DF00F(float p0) { invoke<Void>(0x9EB6CBD81A3DF00F, p0); }
static Any _0xD421943BA44A3393() { return invoke<Any>(0xD421943BA44A3393); }
static Any _0x728DE930B196F1FB(BOOL p0) { return invoke<Any>(0x728DE930B196F1FB, p0); }
static void END_REPLAY_STATS() { invoke<Void>(0xED7C39432A1057D9); }
static void _0x81C87679F22C6C74() { invoke<Void>(0x81C87679F22C6C74); }
static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0x9332944411A91CF6); }
static void SET_OVERRIDE_WEATHER(char* weatherType) { invoke<Void>(0xF2E8EBF7FD56022A, weatherType); }
static Any _0x7F82784F819FB41(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x7F82784F819FB41, p0, p1, p2, p3); }
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xE7F187E29AF31D2B, p0); }
static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xEFA71310CAEBAE1F, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); }
static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xB4C6C348349773FE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static Any SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { return invoke<Any>(0xF269AA8B906102B0, player); }
static void _0x5D577702AB70BE25(Hash hash, BOOL p1) { invoke<Void>(0x5D577702AB70BE25, hash, p1); }
static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0x748A964A12412EBB); }
static void _0x7E2D1692C1BDB974(Any* p0, Any* p1) { invoke<Void>(0x7E2D1692C1BDB974, p0, p1); }
static void _0xD177D74FED1E6B03(char* p0, float p1) { invoke<Void>(0xD177D74FED1E6B03, p0, p1); }
static void _0xC22767F1871E6C(float p0) { invoke<Void>(0xC22767F1871E6C, p0); }
static void _0x973906BDA807F3BC(float p0) { invoke<Void>(0x973906BDA807F3BC, p0); }
static float GET_WIND_SPEED() { return invoke<float>(0x4A96C23E0F236F1); }
static BOOL IS_BIT_SET(int address, int offset) { return invoke<BOOL>(0xF426A5DE932B3BEE, address, offset); }
static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0x7F38BE188FD5F1F0, p0, p1, p2); }
static float ATAN(float p0) { return invoke<float>(0x7BD11FCD3408FA6B, p0); }
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xF160EBCA8FFA0E2A, toggle); }
static Any _0x97C8D665FF0E8709() { return invoke<Any>(0x97C8D665FF0E8709); }
static void SET_WIND(float p0) { invoke<Void>(0x744C63B56195D577, p0); }
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x5B3123A6E6131ABB); }
static BOOL IS_POSITION_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0x589EDE4846388DD2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void _0xA6D78E3077F18F15(Any p0, Any p1, Any p2) { invoke<Void>(0xA6D78E3077F18F15, p0, p1, p2); }
static void _0x33E26F7BCBC0B83A(Any p0, BOOL p1) { invoke<Void>(0x33E26F7BCBC0B83A, p0, p1); }
static BOOL _0x653909CE9F2741FB(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0x653909CE9F2741FB, p0, p1, p2, p3); }
static void _0x694BB06C90B89D7C() { invoke<Void>(0x694BB06C90B89D7C); }
static void _0x3EE46D07126A13E9(float p0) { invoke<Void>(0x3EE46D07126A13E9, p0); }
static void _0xDF1DD6CD098F6002(BOOL toggle) { invoke<Void>(0xDF1DD6CD098F6002, toggle); }
static void _0x3DE54D6DBD884DF4(Any p0, Any p1, Any p2) { invoke<Void>(0x3DE54D6DBD884DF4, p0, p1, p2); }
static void _0x716A4AC07995A79A(float p0) { invoke<Void>(0x716A4AC07995A79A, p0); }
static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0x47D59F8F9FAE79C1, toggle); }
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xEBA4DF1138C23124, toggle); }
static void _0xF4991E0002CB1375(float p0) { invoke<Void>(0xF4991E0002CB1375, p0); }
static void _0x4D925D00FEC4EA6E(Any p0) { invoke<Void>(0x4D925D00FEC4EA6E, p0); }
static int ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18) { return invoke<int>(0x13DE0637464F2352, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0x90CDF5C9FC20A5BF, x, y, z, radius, flags); }
static void _START_SAVE_STRUCT(Any* p0, int p1, char* structName) { invoke<Void>(0x61B163634BFCEFBF, p0, p1, structName); }
static void _0x365670FBBC57DD9D(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, BOOL p16, BOOL p17) { invoke<Void>(0x365670FBBC57DD9D, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, p16, p17); }
static Any REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) { return invoke<Any>(0x4EE357CF024EB7F6, p0, p1, p2, p3, p4, p5, p6); }
static void _RESET_LOCALPLAYER_STATE() { invoke<Void>(0x794913E970CB9FFE); }
static void _0x519FDA0E5204B9F(float p0) { invoke<Void>(0x519FDA0E5204B9F, p0); }
static void _0x34BC277617F44A3A(float p0) { invoke<Void>(0x34BC277617F44A3A, p0); }
static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0x5DB716F779D8C70F, toggle); }
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xC06A80AF9911D7A8, profileSetting); }
static void _0xDA8218DD8A2B4E1E(float p0) { invoke<Void>(0xDA8218DD8A2B4E1E, p0); }
static Any GET_SNOW_LEVEL() { return invoke<Any>(0xF18BD3127C4311CA); }
static void _SET_UNK_MAP_FLAG(int flag) { invoke<Void>(0x66EEFE13E1BFC898, flag); }
static void _0xB5E1688872DB0703() { invoke<Void>(0xB5E1688872DB0703); }
static void _0xACB211DA728DA657() { invoke<Void>(0xACB211DA728DA657); }
static float ASIN(float p0) { return invoke<float>(0xD4043ADD2C0A68A, p0); }
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xCA7EBFB783C756ED, hospitalIndex, toggle); }
static BOOL IS_INCIDENT_VALID(int* incidentId) { return invoke<BOOL>(0x1A6F5916B1987749, incidentId); }
static void REGISTER_BOOL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x3931D2D4A3A44453, p0, name); }
static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL unk) { return invoke<BOOL>(0xF1F1EBE69E9A0DE7, x, y, z, groundZ, unk); }
static void SET_SAVE_MENU_ACTIVE(BOOL unk) { invoke<Void>(0x8FF720CCAF763A9A, unk); }
static BOOL IS_STRING_NULL_OR_EMPTY(char* string) { return invoke<BOOL>(0x75CB9E30BA492FF0, string); }
static void _0x1850E11844A37D37(int p0, char* windowTitle, Any* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, char* defaultConcat4, char* defaultConcat5, char* defaultConcat6, char* defaultConcat7, int maxInputLength) { invoke<Void>(0x1850E11844A37D37, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xB6EFD0607BD29927); }
static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0x3E00A1016DB5AFEF); }
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0x6E53DF2C222F676E); }
static Any _0xD8B62403640E4FC() { return invoke<Any>(0xD8B62403640E4FC); }
static void _0x8E0C7BDD39B757A7(Any p0, Any p1, Any p2) { invoke<Void>(0x8E0C7BDD39B757A7, p0, p1, p2); }
static Hash GET_HASH_KEY(char* value) { return invoke<Hash>(0x70ABFF261710305D, value); }
static void _0xD98E01FA2F8BA271(Any p0, float p1) { invoke<Void>(0xD98E01FA2F8BA271, p0, p1); }
static Any GET_RANDOM_EVENT_FLAG() { return invoke<Any>(0xE020981ADD7B744F); }
static Any _0xA1943F485519B496() { return invoke<Any>(0xA1943F485519B496); }
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0x3A5708FEE1B560A9, startRange, endRange); }
static Any _0x1559ABC44D41C505() { return invoke<Any>(0x1559ABC44D41C505); }
static void _0x8192FA7707D58DDD(BOOL p0) { invoke<Void>(0x8192FA7707D58DDD, p0); }
static void _0x83F636380B1E2902() { invoke<Void>(0x83F636380B1E2902); }
static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xFB56942BE14F95CB, toggle); }
static void _0xCBBD6CF628E1DF2B(Any p0, Any p1) { invoke<Void>(0xCBBD6CF628E1DF2B, p0, p1); }
static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0x21BE65040F4A1629, p0); }
static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x2DAF54CBFF4FA5CE, p0, p1, p2, p3, p4, p5, p6, p7); }
static Any _0x4ED892DE2459F4E3() { return invoke<Any>(0x4ED892DE2459F4E3); }
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xBEE458FA951B0113, x, y, z, radius, flags); }
static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0xCC4B3090D590E794, p0, p1, p2, p3, p4, p5, p6); }
static void _0x4A9D5BC7CD484071(BOOL p0) { invoke<Void>(0x4A9D5BC7CD484071, p0); }
static Any _0xE29B726A72D14368(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xE29B726A72D14368, p0, p1, p2, p3, p4); }
static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0x6D12ED077F3143DA, p0, p1); }
static void _0xC2A088248E44335A(Any p0, Any* p1, Any* p2, float p3, float p4, BOOL p5) { invoke<Void>(0xC2A088248E44335A, p0, p1, p2, p3, p4, p5); }
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0x870401E716EF42B4, p0); }
static void _0x47684B93E5A61D00(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity) { invoke<Void>(0x47684B93E5A61D00, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity); }
static void _0xC24FFBAD088D41F6() { invoke<Void>(0xC24FFBAD088D41F6); }
static void _0xAE01CA79E5F2675F(Any p0, Any p1) { invoke<Void>(0xAE01CA79E5F2675F, p0, p1); }
static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0x9774E3D02176F447, p0, p1, p2, p3, p4, p5, p6); }
static float _0x4137FFF3214448CB() { return invoke<float>(0x4137FFF3214448CB); }
static void _0xDFEAB6C13EF426ED(Any p0, BOOL p1) { invoke<Void>(0xDFEAB6C13EF426ED, p0, p1); }
static void CANCEL_STUNT_JUMP() { invoke<Void>(0x404032068BC91D11); }
static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xF17F4B0641AB2DE1, address, offset); }
static Any _0xCC4FDC5DE8C58841() { return invoke<Any>(0xCC4FDC5DE8C58841); }
static BOOL _0xC1CE8D77DE20032E(Any p0) { return invoke<BOOL>(0xC1CE8D77DE20032E, p0); }
static Any _0xCD406042E6046BBA() { return invoke<Any>(0xCD406042E6046BBA); }
static void _0xA98DBFBC90A4C596(Any p0, Any p1) { invoke<Void>(0xA98DBFBC90A4C596, p0, p1); }
static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0x94C92A998D7B5351, direction); }
static void STOP_SAVE_STRUCT() { invoke<Void>(0x6689082E9E8145B4); }
static Any _0x5361C271AC9581DD() { return invoke<Any>(0x5361C271AC9581DD); }
static int _0xCB8FE75EC0D12415(int p0) { return invoke<int>(0xCB8FE75EC0D12415, p0); }
static void _FORCE_SOCIAL_CLUB_UPDATE() { invoke<Void>(0x4D29F79140E8DF42); }
static void _0xE4DEA61F18BDF6E2(Any p0) { invoke<Void>(0xE4DEA61F18BDF6E2, p0); }
static void SET_WEATHER_TYPE_NOW_PERSIST(char* weatherType) { invoke<Void>(0x50C866513B518E7C, weatherType); }
static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x41475399A0A2D91A, p0, name); }
static void SET_WIND_SPEED(float speed) { invoke<Void>(0xB49C854E9D65D38C, speed); }
static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0x82D9E9171134D44, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static int ABSI(int value) { return invoke<int>(0x2D8D75F813225B7B, value); }
static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0x6155ECF1AC83D0DC, toggle); }
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0x676D4CD42E0837CA, x1, y1, z1, x2, y2, z2, useZ); }
static BOOL IS_STRING_NULL(char* string) { return invoke<BOOL>(0x275404839C0A19A, string); }
static void _0x5703346838A66565(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) { invoke<Void>(0x5703346838A66565, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void _0x24F31BE4199514B3(float p0) { invoke<Void>(0x24F31BE4199514B3, p0); }
static void _GET_WEATHER_TYPE_TRANSITION(Any* p0, Any* p1, float* progress_or_time) { invoke<Void>(0xF0A0648DE7C2A0BE, p0, p1, progress_or_time); }
static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0x3F06810A9137484, toggle); }
static BOOL _0xDC6E21BE6C4072FE(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) { return invoke<BOOL>(0xDC6E21BE6C4072FE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void _CREATE_LIGHTNING_THUNDER() { invoke<Void>(0x5A3163E7B387CDB4); }
static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xE060CF72D1CA5C87); }
static void _0x67648415D87A2379(float p0) { invoke<Void>(0x67648415D87A2379, p0); }
static void _0xD2E0AA8DFDEF93AF(Any* p0, char* name) { invoke<Void>(0xD2E0AA8DFDEF93AF, p0, name); }
static void _0x64CBF9B53864002A() { invoke<Void>(0x64CBF9B53864002A); }
static void _SET_WEATHER_TYPE_OVER_TIME(char* weatherType, float time) { invoke<Void>(0x546FC0B7718905D4, weatherType, time); }
static void _SET_CLOUD_HAT_TRANSITION(char* type, float transitionTime) { invoke<Void>(0xCC8F5F38C5C9EF04, type, transitionTime); }
static int GET_FRAME_COUNT() { return invoke<int>(0xA08D2B17A64B8371); }
static int _GET_FREE_STACK_SLOTS_COUNT(int stackSize) { return invoke<int>(0x68D07C3F13E3B9A7, stackSize); }
static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x4DEC3BA9A7D59C0, x1, y1, z1, x2, y2, z2); }
static Any SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { return invoke<Any>(0xA9864262B59996E, player); }
}



namespace GRAPHICS
{
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float radius, int colorR, int colorG, int colorB, int alpha, int reserved) { return invoke<int>(0x888171436F645C0, type, posX1, posY1, posZ1, posX2, posY2, posZ2, radius, colorR, colorG, colorB, alpha, reserved); }
static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(char* textureDict) { return invoke<BOOL>(0xBF1504B8A1447E5E, textureDict); }
static void _0x3C9F108363A59323() { invoke<Void>(0x3C9F108363A59323); }
static void _0x5EFBCB0A37398B0C(BOOL p0) { invoke<Void>(0x5EFBCB0A37398B0C, p0); }
static Any _0xEDAED5E5C9327B4(float p0) { return invoke<Any>(0xEDAED5E5C9327B4, p0); }
static void _0x797750BE915FCF5F(BOOL p0) { invoke<Void>(0x797750BE915FCF5F, p0); }
static void _0x2E6328B1B95241F5() { invoke<Void>(0x2E6328B1B95241F5); }
static BOOL _DOES_VEHICLE_HAVE_DECAL(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x3E70A6BAFEE797B2, vehicle, p1); }
static void _STOP_SCREEN_EFFECT(char* effectName) { invoke<Void>(0xBE273B45F8B9F771, effectName); }
static void _0xEAA91D5CEFBF0FBE(BOOL p0) { invoke<Void>(0xEAA91D5CEFBF0FBE, p0); }
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x69192A0FCC5D754C, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void _0xBFE613F3A51F9DFF() { invoke<Void>(0xBFE613F3A51F9DFF); }
static void _0x86B0EECEA9CC39C1() { invoke<Void>(0x86B0EECEA9CC39C1); }
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0x16CAC8D76580E555, p0, p1, fadeIn, duration, fadeOut); }
static BOOL _0x35BCD8E8F9AE6CD2(Hash p0) { return invoke<BOOL>(0x35BCD8E8F9AE6CD2, p0); }
static void _0x2129364F636D2866(BOOL p0) { invoke<Void>(0x2129364F636D2866, p0); }
static Any _0xD6FA10D5E943B600() { return invoke<Any>(0xD6FA10D5E943B600); }
static BOOL _HAS_NAMED_SCALEFORM_MOVIE_LOADED(char* scaleformName) { return invoke<BOOL>(0x255B26CDA4C903F3, scaleformName); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xA15B92C295D74BC6, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static Any _0x4BFA818922148D58() { return invoke<Any>(0x4BFA818922148D58); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, BOOL unk) { invoke<Void>(0x6201690B328DD500, scaleform, red, green, blue, alpha, unk); }
static void _0x2CFE0A63F05595B(BOOL p0) { invoke<Void>(0x2CFE0A63F05595B, p0); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xE70396854BECDB59, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xE4D2B0D96CFD2FBD); }
static void _0xB6D663542272AC04(BOOL p0, BOOL p1) { invoke<Void>(0xB6D663542272AC04, p0, p1); }
static void _0x66DE26ACD2F9F29D(BOOL p0) { invoke<Void>(0x66DE26ACD2F9F29D, p0); }
static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xAFAF44361033A504, toggle); }
static int REQUEST_SCALEFORM_MOVIE(char* scaleformName) { return invoke<int>(0x2E1B51315299F014, scaleformName); }
static void _SET_BLACKOUT(BOOL enable) { invoke<Void>(0x688E0CBE962FF70, enable); }
static void _0xEFC9240A8E3AE18F(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xEFC9240A8E3AE18F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void _0x4B4108F298C5EE23() { invoke<Void>(0x4B4108F298C5EE23); }
static void _0x1FADBFAB009BD865(Any p0) { invoke<Void>(0x1FADBFAB009BD865, p0); }
static void _0x31502819DB634B63(float p0) { invoke<Void>(0x31502819DB634B63, p0); }
static void _0xE1CE635886A46BDC() { invoke<Void>(0xE1CE635886A46BDC); }
static Any SET_TRACKED_POINT_INFO(Object point, float x, float y, float z, float radius) { return invoke<Any>(0xA7FBB0ED2C481782, point, x, y, z, radius); }
static int _0xAC319495958148AE(Any* p0) { return invoke<int>(0xAC319495958148AE, p0); }
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0x41F62D2369DD7347, enabled); }
static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xB65727737EE578A5, toggle); }
static void _0x64BA8CEF9F46F254(Any* p0, Any* p1) { invoke<Void>(0x64BA8CEF9F46F254, p0, p1); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x8374DCD8219A5A11, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static void _0x1ADF81BB5B1F4340(BOOL p0) { invoke<Void>(0x1ADF81BB5B1F4340, p0); }
static void _0xD76D2A8DF4C47B3(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { invoke<Void>(0xD76D2A8DF4C47B3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void _0x65607FF4AF1B9359(float p0) { invoke<Void>(0x65607FF4AF1B9359, p0); }
static void _DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0x85DFCB4872B1D168, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); }
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformPtr) { invoke<Void>(0xBBDCA990E9FC1AE1, scaleformPtr); }
static void SET_ENTITY_ICON_COLOR(Entity entity, int r, int g, int b, int alpha) { invoke<Void>(0xE1A8709E5F97AEAD, entity, r, g, b, alpha); }
static Any _0x601E3E9778079381() { return invoke<Any>(0x601E3E9778079381); }
static float GET_TV_VOLUME() { return invoke<float>(0xF5575EF1F2EAD727); }
static void _0x20D1C9ADCF603D1(Any p0, Any* p1, Any p2) { invoke<Void>(0x20D1C9ADCF603D1, p0, p1, p2); }
static BOOL _IS_NIGHTVISION_INACTIVE() { return invoke<BOOL>(0x7D27E1948866B645); }
static void _START_SCREEN_EFFECT(char* effectName, int duration, BOOL looped) { invoke<Void>(0xEC04D6F4A1ED71ED, effectName, duration, looped); }
static void _0xFE6EA2891FD81B32(BOOL p0) { invoke<Void>(0xFE6EA2891FD81B32, p0); }
static void _0x5602B23671E1DA99(BOOL p0) { invoke<Void>(0x5602B23671E1DA99, p0); }
static void _0x42B9B33CFB3E8FDB(float p0, float p1, float p2) { invoke<Void>(0x42B9B33CFB3E8FDB, p0, p1, p2); }
static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0x98BE69849534C197, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static void _0x1D813B363544B753(BOOL p0) { invoke<Void>(0x1D813B363544B753, p0); }
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0x4F8AB4E4B73B3953, r, g, b); }
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0x64B765705540DF31, checkpoint, nearHeight, farHeight, radius); }
static void _0xFA86E6DD7AD818ED() { invoke<Void>(0xFA86E6DD7AD818ED); }
static void _0xB4F0335EDC5AC0E9() { invoke<Void>(0xB4F0335EDC5AC0E9); }
static void _0x9A68EBB60EF3B912(float p0) { invoke<Void>(0x9A68EBB60EF3B912, p0); }
static BOOL _0x7E05E90F93BE406F(char* textureDict, BOOL p1) { return invoke<BOOL>(0x7E05E90F93BE406F, textureDict, p1); }
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int colorR, int colorG, int colorB, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, char* textureDict, char* textureName, BOOL drawOnEnts) { invoke<Void>(0x40EAE8F940A33315, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, colorR, colorG, colorB, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
static void SET_TV_VOLUME(float volume) { invoke<Void>(0x8A1246D557AAB0BA, volume); }
static void _0xF6580C8FB3BECE4D(Any* p0) { invoke<Void>(0xF6580C8FB3BECE4D, p0); }
static Any _0xB4CFB115396523CC(Any p0) { return invoke<Any>(0xB4CFB115396523CC, p0); }
static void _0x69E5666654194174() { invoke<Void>(0x69E5666654194174); }
static void _0x2863630C1B8CCF7D(float p0) { invoke<Void>(0x2863630C1B8CCF7D, p0); }
static Any _0xA95843ACF3E1A957(Any p0) { return invoke<Any>(0xA95843ACF3E1A957, p0); }
static void SET_TIMECYCLE_MODIFIER(char* modifierName) { invoke<Void>(0xFC28519C51323ADA, modifierName); }
static int _0x200C167A17C879D9(Any funcData) { return invoke<int>(0x200C167A17C879D9, funcData); }
static BOOL _0x4EA5B5229455F089(float xCoord, float yCoord, float zCoord, float p3) { return invoke<BOOL>(0x4EA5B5229455F089, xCoord, yCoord, zCoord, p3); }
static void _0xFCCDC8B6A17AF602() { invoke<Void>(0xFCCDC8B6A17AF602); }
static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xADE9BBB8055E9BBF); }
static void _0xC89C67829C93D720(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xC89C67829C93D720, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static float GET_DECAL_WASH_LEVEL(Any p0) { return invoke<float>(0x3C8B8930825E91B9, p0); }
static void _0x632AD74BA8D86A91() { invoke<Void>(0x632AD74BA8D86A91); }
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xC98249A500C8075); }
static BOOL _WORLD3D_TO_SCREEN2D(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xFE0F9B582AA6A11C, worldX, worldY, worldZ, screenX, screenY); }
static Vector3 GET_TEXTURE_RESOLUTION(char* textureDict, char* textureName) { return invoke<Vector3>(0xB5965C7E2BDB923D, textureDict, textureName); }
static Any _0x3290BB39BF2CFC87() { return invoke<Any>(0x3290BB39BF2CFC87); }
static void _END_TEXT_COMPONENT() { invoke<Void>(0xD3076D52458B36EF); }
static void _0x745CE5E683E162B3() { invoke<Void>(0x745CE5E683E162B3); }
static int _GET_SCREEN_EFFECT_IS_ACTIVE(char* effectName) { return invoke<int>(0x7CC3CEBF598398F7, effectName); }
static void _0xADB2E6D34F12E589(float p0) { invoke<Void>(0xADB2E6D34F12E589, p0); }
static void DRAW_DEBUG_TEXT(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0x3451E410C2C1CD9, text, x, y, z, r, g, b, alpha); }
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a) { invoke<Void>(0x962859A29A7D805C, x, y, width, height, r, g, b, a); }
static void SET_TRANSITION_TIMECYCLE_MODIFIER(char* modifierName, float transition) { invoke<Void>(0x60257F0840E9A428, modifierName, transition); }
static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xD9F29433371AA141); }
static Any _0x46744CC520F9DC65(int p0) { return invoke<Any>(0x46744CC520F9DC65, p0); }
static Any _0x6D1AE37CD1A7DC1A(Any p0) { return invoke<Any>(0x6D1AE37CD1A7DC1A, p0); }
static BOOL _ADD_CLAN_DECAL_TO_VEHICLE(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0x63BA0CA66B00D64B, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); }
static BOOL _IS_SEETHROUGH_ACTIVE() { return invoke<BOOL>(0xA9D91184EDE29144); }
static Any _0x3F2413A40CACC883() { return invoke<Any>(0x3F2413A40CACC883); }
static void _0xC89590C23160C5B(float p0) { invoke<Void>(0xC89590C23160C5B, p0); }
static Any _0xB3011321298A1A00() { return invoke<Any>(0xB3011321298A1A00); }
static BOOL _0x3E345EA475A90669(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x3E345EA475A90669, p0, p1, p2, p3); }
static void _0x43F25A90E93FB601() { invoke<Void>(0x43F25A90E93FB601); }
static void _0xA8992F77E2BDBC17(int checkpoint, float p0) { invoke<Void>(0xA8992F77E2BDBC17, checkpoint, p0); }
static void _0x8F197E186FCB4032() { invoke<Void>(0x8F197E186FCB4032); }
static void _SET_FORCE_VEHICLE_TRAILS(BOOL enabled) { invoke<Void>(0xCBAF2E3443AEF10E, enabled); }
static Any ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<Any>(0x19BD80A2F2389171, x, y, z, groundLvl, width, transparency); }
static void _0x73DECD87BF4B02EE(Any* p0) { invoke<Void>(0x73DECD87BF4B02EE, p0); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, char* functionName, char* param1, char* param2, char* param3, char* param4, char* param5) { invoke<Void>(0x528D658E98C2B472, scaleform, functionName, param1, param2, param3, param4, param5); }
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0xFF51FA5E68E9F7D4, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); }
static void _0x854A9AE47B680A6C(float p0) { invoke<Void>(0x854A9AE47B680A6C, p0); }
static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0x1EEB7F5267EBD6A8); }
static Any _0xA70A85FB530FAE42() { return invoke<Any>(0xA70A85FB530FAE42); }
static void WASH_DECALS_FROM_VEHICLE(Any p0, float p1) { invoke<Void>(0x32447CA7548E0861, p0, p1); }
static void _DRAW_SPOT_LIGHT_WITH_SHADOW(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, float shadow) { invoke<Void>(0xB2D80775A368F8DE, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadow); }
static float IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<float>(0x2E81239E5A5CB8EE); }
static void _0x525A62F3430B3168(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0x525A62F3430B3168, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0x14EA3066FD050C45, x, y, z, range); }
static void _0x3149A86FDA43AE2F() { invoke<Void>(0x3149A86FDA43AE2F); }
static BOOL _0x98123342C48F8511(Any p0) { return invoke<BOOL>(0x98123342C48F8511, p0); }
static void _0x3B16D5A1A64588A0(float p0) { invoke<Void>(0x3B16D5A1A64588A0, p0); }
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char* propertyName, float amount, BOOL Id) { invoke<Void>(0xFD192BB2F9563600, ptfxHandle, propertyName, amount, Id); }
static void _0xF2BCE7402DEE75CB(float p0) { invoke<Void>(0xF2BCE7402DEE75CB, p0); }
static void SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) { invoke<Void>(0x7F6CB2BDDD13C851, p0); }
static void _0xBDC490DB887A263A(int checkpoint) { invoke<Void>(0xBDC490DB887A263A, checkpoint); }
static void _SET_2D_LAYER(int layer) { invoke<Void>(0x5F817444B4379247, layer); }
static void _0x67D85B7BFE402DA0(Any p0) { invoke<Void>(0x67D85B7BFE402DA0, p0); }
static void _0xDEECFA9DDFAA8127(Any p0) { invoke<Void>(0xDEECFA9DDFAA8127, p0); }
static void _0xCBBCBA8E9B69C18B() { invoke<Void>(0xCBBCBA8E9B69C18B); }
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x64342EB0D2398B83, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void _SET_PTFX_ASSET_NEXT_CALL(char* name) { invoke<Void>(0xE30816F61FB9618B, name); }
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0x6BE7E63785FFC8D5, scaleform, toggle); }
static void _0x96890ED8E60BD9B0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x96890ED8E60BD9B0, p0, p1, p2, p3, p4, p5, p6); }
static void _0x752FAAEEF1315AAF(float p0, float p1, Any* p2, Any* p3) { invoke<Void>(0x752FAAEEF1315AAF, p0, p1, p2, p3); }
static void _0x6AE5578924EC5ADE(BOOL p0) { invoke<Void>(0x6AE5578924EC5ADE, p0); }
static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x283DAEAAE5D73336, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static void SET_CHECKPOINT_RGBA(int checkpoint, int r, int g, int b, int alpha) { invoke<Void>(0x898C27E5F8308EAB, checkpoint, r, g, b, alpha); }
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xAF21F856A53AC3D7, ptfxHandle, alpha); }
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int r, int g, int b, int alpha) { invoke<Void>(0x726ED21FB8479E3A, x, y, z, size, r, g, b, alpha); }
static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0x82E739904D3B17C8, ptfxHandle); }
static void _0x9A25FDD776671542(BOOL p0) { invoke<Void>(0x9A25FDD776671542, p0); }
static BOOL _0x846270FBDCDD12BC(Any p0) { return invoke<BOOL>(0x846270FBDCDD12BC, p0); }
static BOOL _0x20B35B8C39C5787D(Any funcData) { return invoke<BOOL>(0x20B35B8C39C5787D, funcData); }
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0x2BFCDA8CA03A75CF, alpha); }
static void _0xC7083572B2D1DA2D() { invoke<Void>(0xC7083572B2D1DA2D); }
static BOOL _0x17F76CBA90FE07D2(BOOL p0) { return invoke<BOOL>(0x17F76CBA90FE07D2, p0); }
static Any _0x47864B2811C5F881() { return invoke<Any>(0x47864B2811C5F881); }
static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xBEAD51E72A6A7BC0, toggle); }
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0x7ABC69FEA15E8E46, ptfxHandle, r, g, b, p4); }
static Any _0x24EEFC71D73CD39C() { return invoke<Any>(0x24EEFC71D73CD39C); }
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x69192A0FCC5D754C, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void _BEGIN_TEXT_COMPONENT(char* componentType) { invoke<Void>(0x37B602106C6E0E91, componentType); }
static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { invoke<Void>(0x25F24DD773636E, toggle); }
static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0x91CC9590C963FD3D, scaleformHandle); }
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xEFBE3288EC66BA2E, strength); }
static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0x3AE4B2D46F7C5554, entity); }
static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0x3B6934A61220EA3, p0, p1); }
static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xA9AA004B07D79AB6); }
static void _0x1660CDCA38AEDC7D() { invoke<Void>(0x1660CDCA38AEDC7D); }
static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0x4C3CEC038B6637D7, scaleformHandle); }
static void _GET_SCREEN_ACTIVE_RESOLUTION(int* x, int* y) { invoke<Void>(0x3D0935E194DF3A04, x, y); }
static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0x8FAE35A1A7299F75, toggle); }
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0x1DA5AB045175C794, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); }
static void GET_SCREEN_RESOLUTION(float* x, float* y) { invoke<Void>(0x72BB14BDE0E1475F, x, y); }
static void _0x5F757A9A02A4AB39(char* name) { invoke<Void>(0x5F757A9A02A4AB39, name); }
static void _0x37244B58BC2EF872(Any p0, Any* p1, Any* p2) { invoke<Void>(0x37244B58BC2EF872, p0, p1, p2); }
static void _SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0x8E01EBA3F7692D60, p0); }
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xD1FF5A06AAD731E1, ptfxHandle, p1); }
static Any _0x1F2AF5F7737F3E1A() { return invoke<Any>(0x1F2AF5F7737F3E1A); }
static void _0x60E590B03DBF5947() { invoke<Void>(0x60E590B03DBF5947); }
static void _REQUEST_HUD_SCALEFORM(int hudComponent) { invoke<Void>(0x97EA45DAD4FD8D66, hudComponent); }
static void _0xC7C39391447B94A5(float p0) { invoke<Void>(0xC7C39391447B94A5, p0); }
static void _0xBA24751953BC7C0F(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xBA24751953BC7C0F, p0, p1, p2, p3); }
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xCFA3E828BE67F8DD, p0); }
static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION_FROM_HUD_COMPONENT(int hudComponent, char* functionName) { return invoke<BOOL>(0xFE09792339E235E4, hudComponent, functionName); }
static BOOL _0x9E8B1557578D5ADB(char* p0, Ped ped, int p2, float posX, float posY, float posZ) { return invoke<BOOL>(0x9E8B1557578D5ADB, p0, ped, p2, posX, posY, posZ); }
static void _0xE3039CF1BD6BDAB3() { invoke<Void>(0xE3039CF1BD6BDAB3); }
static void _0x8B4759C68DC9248A(float p0) { invoke<Void>(0x8B4759C68DC9248A, p0); }
static void _0x6544409BAC8CE412(BOOL p0) { invoke<Void>(0x6544409BAC8CE412, p0); }
static Any _0xC98B67E52A4FDB4D(Any p0) { return invoke<Any>(0xC98B67E52A4FDB4D, p0); }
static void WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x32084C7CA1B4BAFD, p0, p1, p2, p3, p4); }
static Any ADD_ENTITY_ICON(Entity entity, char* icon) { return invoke<Any>(0x6DB5FCA5C8747534, entity, icon); }
static void _0xE86A5B46104AE817(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xE86A5B46104AE817, p0, p1, p2, p3, p4); }
static void ENABLE_ALIEN_BLOOD_VFX(BOOL p0) { invoke<Void>(0xBC0074B1163852EC, p0); }
static BOOL _TRANSITION_TO_BLURRED(float transitionTime) { return invoke<BOOL>(0x875DB1847F6CEA61, transitionTime); }
static void _0x5FB8438A61A6F246(BOOL p0) { invoke<Void>(0x5FB8438A61A6F246, p0); }
static void DRAW_DEBUG_TEXT_2D(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0x7A2F347DD34A6F55, text, x, y, z, r, g, b, alpha); }
static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x5178F9A017EA4BC0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static void _0x53F3804FD1DEE694() { invoke<Void>(0x53F3804FD1DEE694); }
static int _0x26E1CC891D871635(Any p0) { return invoke<int>(0x26E1CC891D871635, p0); }
static void _0xC9E877FB74A45FFF(BOOL p0) { invoke<Void>(0xC9E877FB74A45FFF, p0); }
static Any _0x1C45DFFC22A48C8D() { return invoke<Any>(0x1C45DFFC22A48C8D); }
static void _0xAEC8C2EE63918090(BOOL p0) { invoke<Void>(0xAEC8C2EE63918090, p0); }
static Any _0x3759523D041576A2() { return invoke<Any>(0x3759523D041576A2); }
static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xCFD7B4113BB1FAD8, obj, x, y, z); }
static void SET_DRAW_ORIGIN(float x, float y, float z, Any p3) { invoke<Void>(0x5F7BBC75CA13FC9B, x, y, z, p3); }
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int r, int g, int b, int alpha) { invoke<Void>(0x5ED34B5F21AFF532, x, y, z, radius, r, g, b, alpha); }
static BOOL _0xA9823121D42FD9B6(char* functionName) { return invoke<BOOL>(0xA9823121D42FD9B6, functionName); }
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int r, int g, int b, int alpha) { invoke<Void>(0x6EB27E3DF168A770, x1, y1, z1, x2, y2, z2, x3, y3, z3, r, g, b, alpha); }
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Any p0, BOOL p1) { invoke<Void>(0xD676C89758C2901C, p0, p1); }
static void _0xC2C56CC6BF6BBF2C() { invoke<Void>(0xC2C56CC6BF6BBF2C); }
static void _0xE9E77F46EE9E2515(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xE9E77F46EE9E2515, p0, p1, p2, p3, p4); }
static void _SET_FORCE_PED_FOOTSTEPS_TRACKS(BOOL enabled) { invoke<Void>(0xE814456F7E648A80, enabled); }
static void _0x49A6A276AFD9FACC(char* p0) { invoke<Void>(0x49A6A276AFD9FACC, p0); }
static void _0xE25758F8B1040B4B(int type, float xPos, float yPos, float zPos, float p4, int r, int g, int b, int alpha) { invoke<Void>(0xE25758F8B1040B4B, type, xPos, yPos, zPos, p4, r, g, b, alpha); }
static void DESTROY_TRACKED_POINT(Object point) { invoke<Void>(0xFFF7AF2BF2760CB8, point); }
static Any _0xACE110A166BAC924() { return invoke<Any>(0xACE110A166BAC924); }
static Any ADD_DECAL(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, BOOL p17, BOOL p18, BOOL p19) { return invoke<Any>(0xAC874EE6A397A6B3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); }
static void _0x4A78220C7FEB4CB8(float p0) { invoke<Void>(0x4A78220C7FEB4CB8, p0); }
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xCA62CEC09C6181BD, ptfxHandle, scale); }
static void _STOP_ALL_SCREEN_EFFECTS() { invoke<Void>(0xEAFB18BDF651DD1C); }
static int LOAD_MOVIE_MESH_SET(char* movieMeshSetName) { return invoke<int>(0x47B84E8C67CD564D, movieMeshSetName); }
static void _0x2296BC722CE5E867(Any p0) { invoke<Void>(0x2296BC722CE5E867, p0); }
static void _SET_SCREEN_DRAW_POSITION(int x, int y) { invoke<Void>(0xCAC481F47E89A9DD, x, y); }
static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xEA98454E7D8FA400, entity); }
static BOOL _0x295A1D8FADB377C7(char* functionName) { return invoke<BOOL>(0x295A1D8FADB377C7, functionName); }
static void _SET_CHECKPOINT_ICON_RGBA(int checkpoint, int r, int g, int b, int alpha) { invoke<Void>(0x9C9F224E12450418, checkpoint, r, g, b, alpha); }
static void _0x6C491BDC8C90530C(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x6C491BDC8C90530C, p0, p1, p2, p3, p4, p5); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(char* value) { invoke<Void>(0xED9ED095377C804A, value); }
static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xC6D30FF126156577, channel); }
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0x91769DA9DD09F507); }
static Any _0xA7BEC3295987302D() { return invoke<Any>(0xA7BEC3295987302D); }
static void _0x67B5BC744D64C2F3(float p0) { invoke<Void>(0x67B5BC744D64C2F3, p0); }
static void _0x7157D9668473721D(Any* p0) { invoke<Void>(0x7157D9668473721D, p0); }
static Any _0x3BEC273F6320C8EE() { return invoke<Any>(0x3BEC273F6320C8EE); }
static int _REQUEST_SCALEFORM_MOVIE3(char* scaleformName) { return invoke<int>(0xF10A6FDF2D445666, scaleformName); }
static void _0x47DEE9E02D683CC1(float p0) { invoke<Void>(0x47DEE9E02D683CC1, p0); }
static Any _0x375EAC50583E76FE(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x375EAC50583E76FE, p0, p1, p2, p3); }
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* textureDict) { invoke<Void>(0xF63A8BFF63F2E865, textureDict); }
static void _0x9425261D374C7FD1(Any p0) { invoke<Void>(0x9425261D374C7FD1, p0); }
static void _0x5665D3BF66653DD2(Any* p0) { invoke<Void>(0x5665D3BF66653DD2, p0); }
static void _0xED4E59D24FA2D680(BOOL p0) { invoke<Void>(0xED4E59D24FA2D680, p0); }
static void _0x41AB83A52916C7DA() { invoke<Void>(0x41AB83A52916C7DA); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(int value) { invoke<Void>(0xD2DC8221939F80F7, value); }
static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0x37A0BFC2F0684693, ptfxHandle, p1); }
static BOOL IS_TRACKED_POINT_VISIBLE(Object point) { return invoke<BOOL>(0xB5FC1EE74E5D5178, point); }
static Any _POP_SCALEFORM_MOVIE_FUNCTION() { return invoke<Any>(0xEF0E4A8ABAA0D524); }
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(char* scaleformName) { return invoke<int>(0xA3ABDF72D4CCE657, scaleformName); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(BOOL value) { invoke<Void>(0x6A784D1EF2D72A23, value); }
static void _0xD19C316FC489A9F4(BOOL p0) { invoke<Void>(0xD19C316FC489A9F4, p0); }
static void _POP_SCALEFORM_MOVIE_FUNCTION_VOID() { invoke<Void>(0x7E5FA681CB7A2EF7); }
static BOOL IS_DECAL_ALIVE(Any p0) { return invoke<BOOL>(0xDBBA5C22951CCD7A, p0); }
static int _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x8065FE3E0F15F5B9, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xC98DF3F843B9E455, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static void _0xE2A8CB80C1B4E236(float p0) { invoke<Void>(0xE2A8CB80C1B4E236, p0); }
static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0x17BBB32A8E45CDC8, toggle); }
static void _0xD9E63E3DB3FAF0A6(BOOL p0) { invoke<Void>(0xD9E63E3DB3FAF0A6, p0); }
static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xDFF3A4AB23A3777, value); }
static Any _0x2A2D4B20BCFA94B2(Any p0) { return invoke<Any>(0x2A2D4B20BCFA94B2, p0); }
static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xB0837AB034E8919A, obj); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xD3DFBDB51C2C1ABF, scaleform1, scaleform2, red, green, blue, alpha); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, char* functionName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0x67282B1700ABB038, scaleform, functionName, param1, param2, param3, param4, param5); }
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff) { invoke<Void>(0x248E6027F2762E00, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff); }
static void _0x777A55AADC80DE46(Any p0) { invoke<Void>(0x777A55AADC80DE46, p0); }
static BOOL _0xA63C93C955BA6DB7(Any p0) { return invoke<BOOL>(0xA63C93C955BA6DB7, p0); }
static void _0xE8A68145AD9A698(char* graphicsName) { invoke<Void>(0xE8A68145AD9A698, graphicsName); }
static void _0xF245BAD9CA8E4530(Any p0, Any p1) { invoke<Void>(0xF245BAD9CA8E4530, p0, p1); }
static void _0x9AA8D7C031B0602D(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0x9AA8D7C031B0602D, p0, p1, p2, p3, p4, p5, p6, p7); }
static void _0x9DB0646C2504B231(BOOL p0) { invoke<Void>(0x9DB0646C2504B231, p0); }
static BOOL _0xD0E0D37E73BFB53E() { return invoke<BOOL>(0xD0E0D37E73BFB53E); }
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x42E7E9B93AB7FD2, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float value) { invoke<Void>(0x4ACF99392701B935, value); }
static void _0x938382811650533(char* p0) { invoke<Void>(0x938382811650533, p0); }
static void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9589DB9A95BE4975, p0, p1, p2, p3, p4); }
static void _0x37BAA791BA2D4592(Any p0, float p1) { invoke<Void>(0x37BAA791BA2D4592, p0, p1); }
static void _0x85B6B98B5E920A57() { invoke<Void>(0x85B6B98B5E920A57); }
static void ENABLE_CLOWN_BLOOD_VFX(BOOL p0) { invoke<Void>(0x96D6AF3D5BE6C02E, p0); }
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0x90686E8E74E1F89E, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); }
static void _0xC37956A910F640B2() { invoke<Void>(0xC37956A910F640B2); }
static void _0x35BC7F420630FA9E(Any p0, Any p1) { invoke<Void>(0x35BC7F420630FA9E, p0, p1); }
static void _0x15A84DF3732D2F5C(BOOL p0) { invoke<Void>(0x15A84DF3732D2F5C, p0); }
static Any _0x198161A82887539F() { return invoke<Any>(0x198161A82887539F); }
static void _SET_PARTICLE_FX_LOOPED_RANGE(int ptfxHandle, float range) { invoke<Void>(0xEFDE0BB725603EBD, ptfxHandle, range); }
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0x19FAF10EF91E58C1, X, Y, Z, radius); }
static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<Any>(0x74D5B536C21CAECF, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static void _0x3E1092F55665BEC3() { invoke<Void>(0x3E1092F55665BEC3); }
static void _0x28BE258171BEBEC2(Object object) { invoke<Void>(0x28BE258171BEBEC2, object); }
static BOOL _HAS_HUD_SCALEFORM_LOADED(int hudComponent) { return invoke<BOOL>(0x53BFD5F5FFA422CA, hudComponent); }
static void REQUEST_STREAMED_TEXTURE_DICT(char* textureDict, BOOL p2) { invoke<Void>(0x72426D9FCE288C68, textureDict, p2); }
static void _SET_FROZEN_RENDERING_DISABLED(BOOL enabled) { invoke<Void>(0x9C1EF523D6CD2EB, enabled); }
static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xFB145D44C78616E7, entity, toggle); }
static int START_PARTICLE_FX_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { return invoke<int>(0x189D6441C37278D8, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10, p11); }
static void _0xE1CCC24166249A43() { invoke<Void>(0xE1CCC24166249A43); }
static char* SITTING_TV(int scaleform) { return invoke<char*>(0x95BA6DA7B304716E, scaleform); }
static void _0x8579BCD16C0FF8C5(float p0) { invoke<Void>(0x8579BCD16C0FF8C5, p0); }
static Object CREATE_TRACKED_POINT() { return invoke<Object>(0xCDF05534728E3682); }
static void _0xDAAA6512AF15CB42() { invoke<Void>(0xDAAA6512AF15CB42); }
static void _0xAEBB41560D3A646E(Any p0) { invoke<Void>(0xAEBB41560D3A646E, p0); }
static Any _0x7B2CC4B38E340CD9() { return invoke<Any>(0x7B2CC4B38E340CD9); }
static void _0x667526FEA92FE84C(BOOL p0) { invoke<Void>(0x667526FEA92FE84C, p0); }
static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0x84B6D9DB050D225F, toggle); }
static Any _0x15B76AE030C97E34(Any p0) { return invoke<Any>(0x15B76AE030C97E34, p0); }
static void DRAW_SPRITE(char* textureDict, char* textureName, float screenX, float screenY, float scaleX, float scaleY, float heading, int colorR, int colorG, int colorB, int alpha) { invoke<Void>(0x1CD6F39268A57216, textureDict, textureName, screenX, screenY, scaleX, scaleY, heading, colorR, colorG, colorB, alpha); }
static void _0x238A63F9EFBCDF35(char* p0) { invoke<Void>(0x238A63F9EFBCDF35, p0); }
static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xB5C0EE6BCF777B36, vehicle); }
static void _SET_PTFX_ASSET_OLD_TO_NEW(char* Old, char* New) { invoke<Void>(0xE1EFAFC849696C94, Old, New); }
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xB3368537F806024D, movieMeshSet); }
static Any _0x625AF028829BA8E6() { return invoke<Any>(0x625AF028829BA8E6); }
static void _0x5009BDE9FB05478F(Any p0) { invoke<Void>(0x5009BDE9FB05478F, p0); }
static Any _0xC9A5272F589B0AFD(Any p0) { return invoke<Any>(0xC9A5272F589B0AFD, p0); }
static void REMOVE_DECAL(Any p0) { invoke<Void>(0xE0E23749DB589B18, p0); }
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xDFF945049FCA4541, p0); }
static void _0xDF7E09F25EEE8239(BOOL p0) { invoke<Void>(0xDF7E09F25EEE8239, p0); }
static void _CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, char* stringParam1, char* stringParam2, char* stringParam3, char* stringParam4, char* stringParam5) { invoke<Void>(0xD1380CF94C3CC1BD, scaleform, functionName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); }
static void _0x8BA76050FA589EE5() { invoke<Void>(0x8BA76050FA589EE5); }
static BOOL _TRANSITION_FROM_BLURRED(float transitionTime) { return invoke<BOOL>(0x5DCD26563D0913DA, transitionTime); }
static void _0xEA5AF4AFC8E4E39A() { invoke<Void>(0xEA5AF4AFC8E4E39A); }
static float _GET_SCREEN_ASPECT_RATIO(BOOL b) { return invoke<float>(0xFE8EA5C3B2ABAB53, b); }
static BOOL _0x6E20BC27AB0BB154(char* p0) { return invoke<BOOL>(0x6E20BC27AB0BB154, p0); }
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xD16F0D957D1B331A, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xA92A24AFE1186FB, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
static void _0x4D64F3E671B11549(Any p0) { invoke<Void>(0x4D64F3E671B11549, p0); }
static void _DRAW_LIGHT_WITH_RANGE_AND_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xD9C885C08D085E87, x, y, z, r, g, b, range, intensity, shadow); }
static void _0x6DE22C30EEEF4D09(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0x6DE22C30EEEF4D09, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); }
static BOOL _START_PARTICLE_FX_NON_LOOPED_AT_COORD_2(char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xFBEBB5C6813860A2, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static void _0xE20858AA8B5A607E(float p0, float p1, float p2, float p3) { invoke<Void>(0xE20858AA8B5A607E, p0, p1, p2, p3); }
static Any _0xFF662659EC43EA0F(Any p0) { return invoke<Any>(0xFF662659EC43EA0F, p0); }
static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0x680356F7D91033B7, checkpoint); }
static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, char* functionName) { return invoke<BOOL>(0x8CED8F78CC31BEF2, scaleform, functionName); }
static void _0x6F4DFB5A082756E8(float p0) { invoke<Void>(0x6F4DFB5A082756E8, p0); }
static void _0x5F9227A5260EEA03(int p0, char* p1, BOOL p2) { invoke<Void>(0x5F9227A5260EEA03, p0, p1, p2); }
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xAF42FEB2259B847, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, char* method) { invoke<Void>(0x43FF19FFCB798385, scaleform, method); }
static int GET_TV_CHANNEL() { return invoke<int>(0x7F023DDE965A184); }
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int r, int g, int b, int alpha) { invoke<Void>(0xF922AAE342AD6558, xPos, yPos, xScale, yScale, rotation, r, g, b, alpha); }
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0x1DA7469E15D75D67); }
static int _0xD30B8C62C64E7202(Vehicle vehicle, Any p1) { return invoke<int>(0xD30B8C62C64E7202, vehicle, p1); }
static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xF7BDC806D326234E); }
}



namespace INTERIOR
{
static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char* interiorType) { return invoke<int>(0x695481387D3FCB8D, x, y, z, interiorType); }
static int GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<int>(0x94F32809C13F5225, entity); }
static void _0x89B94C02A76F6558() { invoke<Void>(0x89B94C02A76F6558); }
static void UNPIN_INTERIOR(int interiorID) { invoke<Void>(0x34E1C1B799C848E3, interiorID); }
static BOOL IS_VALID_INTERIOR(int interiorID) { return invoke<BOOL>(0xBFF8C08B5EEF0974, interiorID); }
static void _0x564E441E8CD3C56D(int interiorID) { invoke<Void>(0x564E441E8CD3C56D, interiorID); }
static BOOL _IS_INTERIOR_PROP_ENABLED(int interiorID, char* propName) { return invoke<BOOL>(0xC15BD08CEEC19256, interiorID, propName); }
static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xBE9583366FEFB49D, entity); }
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, char* roomName) { invoke<Void>(0x96A112F1D44B74E6, pickup, roomName); }
static void _0xA36FCFDE5771A590(Hash roomHashKey) { invoke<Void>(0xA36FCFDE5771A590, roomHashKey); }
static void REFRESH_INTERIOR(int interiorID) { invoke<Void>(0x397384EC0E21E11E, interiorID); }
static void _DISABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0x5317BD914F83696F, interiorID, propName); }
static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xD1C02130DDA2950A, entity); }
static Any _0x67B70A704EDE20CD(int interiorID) { return invoke<Any>(0x67B70A704EDE20CD, interiorID); }
static void FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) { invoke<Void>(0x50B6DFACAD3211E0, entity, interiorID, roomHashKey); }
static void _ENABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xE93C9D22AB95676F, interiorID, propName); }
static void DISABLE_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0x61FAA41D6C7713E7, interiorID, toggle); }
static BOOL IS_INTERIOR_READY(int interiorID) { return invoke<BOOL>(0x73F79DD3F5F32B29, interiorID); }
static void _0x6FE174646CE0C4A4(Entity entity, int interiorID) { invoke<Void>(0x6FE174646CE0C4A4, entity, interiorID); }
static void _0x2A7B5DADCF32C725(int interiorID, Hash roomHashKey) { invoke<Void>(0x2A7B5DADCF32C725, interiorID, roomHashKey); }
static BOOL IS_INTERIOR_CAPPED(int interiorID) { return invoke<BOOL>(0xB8D6BB6AEDDF34F8, interiorID); }
static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) { return invoke<Vector3>(0x36D03F00CFFF0687, interiorID, x, y, z); }
static void _0x865A7E9262D88F5D(BOOL toggle) { invoke<Void>(0x865A7E9262D88F5D, toggle); }
static Hash _GET_ROOM_KEY_FROM_GAMEPLAY_CAM() { return invoke<Hash>(0xCA9924596DC1996A); }
static void _HIDE_MAP_OBJECT_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0x753FD0272552C045, mapObjectHash); }
static void _0x8032575D1E5EE6A1(char* roomName) { invoke<Void>(0x8032575D1E5EE6A1, roomName); }
static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<int>(0x53DE78F24F01D352, x, y, z); }
static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xAD226152467334B0, entity); }
static BOOL IS_INTERIOR_DISABLED(int interiorID) { return invoke<BOOL>(0x294FE1B87D8C5686, interiorID); }
static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0x7A50CCA7C832A2D1); }
static void CAP_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0xEAF9A63AD91A2449, interiorID, toggle); }
static int GET_INTERIOR_GROUP_ID(int interiorID) { return invoke<int>(0x8BADF2859140B49D, interiorID); }
static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0xA22E9C9DBD350349, x, y, z); }
static BOOL _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return invoke<BOOL>(0x76D34DF1CE9FE002, x, y, z); }
static int _UNK_GET_INTERIOR_AT_COORDS(float x, float y, float z, int unk) { return invoke<int>(0x8661E1EE335919C3, x, y, z, unk); }
}



namespace ITEMSET
{
static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoke<Void>(0xFA4F7AF3819F37A9, p0, p1); }
static BOOL IS_IN_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0x59A4AA903A8EC439, p0, p1); }
static Any CREATE_ITEMSET(BOOL p0) { return invoke<Any>(0xA6AF27CED58425F6, p0); }
static void CLEAN_ITEMSET(Any p0) { invoke<Void>(0x57BD971CCEAF89DE, p0); }
static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoke<Any>(0x3D4B78B77BE424B1, p0, p1); }
static BOOL IS_ITEMSET_VALID(Any p0) { return invoke<BOOL>(0xB8CDAFBFC9BAACB6, p0); }
static Any GET_ITEMSET_SIZE(Any p0) { return invoke<Any>(0xDFB2C9EA32EA1ACA, p0); }
static void DESTROY_ITEMSET(Any p0) { invoke<Void>(0x77C710C1DE62530B, p0); }
static BOOL ADD_TO_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0x608807DD8608A89D, p0, p1); }
}



namespace MOBILE
{
static void _0xAE787C9B55187AED(BOOL phoneKeyEnabled) { invoke<Void>(0xAE787C9B55187AED, phoneKeyEnabled); }
static void _0x453142C28CFD24E1(float p0) { invoke<Void>(0x453142C28CFD24E1, p0); }
static void _0xFDA872505A4536D0(float p0) { invoke<Void>(0xFDA872505A4536D0, p0); }
static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Any p1) { invoke<Void>(0x44F7B7539CCA859F, rotation, p1); }
static BOOL _0x3EE0DBFFFE7E6D5E(Hash hash) { return invoke<BOOL>(0x3EE0DBFFFE7E6D5E, hash); }
static void _0xA581AE234C87FC68(float p0) { invoke<Void>(0xA581AE234C87FC68, p0); }
static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xAB860B25D4D37C06); }
static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xD53EE4D6F61E44C4, entity); }
static void _SET_PHONE_LEAN(BOOL Toggle) { invoke<Void>(0x34D20B755ABF1D47, Toggle); }
static void _0x5F80FEACE0A3A710(float p0) { invoke<Void>(0x5F80FEACE0A3A710, p0); }
static void _0xC9BE207C86C36D8F(float p0) { invoke<Void>(0xC9BE207C86C36D8F, p0); }
static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0x38AAAA167C55B731, position); }
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xF10089C8CCEFDB7A, posX, posY, posZ); }
static void _MOVE_FINGER(int direction) { invoke<Void>(0x33B966A9929DB40, direction); }
static void _0xCD7E9C64400B6D4A(BOOL toggle) { invoke<Void>(0xCD7E9C64400B6D4A, toggle); }
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0x18FCC42239B9A1FB, phoneType); }
static void _0x379DDC85B994381(float p0) { invoke<Void>(0x379DDC85B994381, p0); }
static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0x549BBD4FC262BEC0, renderId); }
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xDC418668FD6E119F, rotX, rotY, rotZ, p3); }
static BOOL _0xDFB97E6DD1F1DF01(char* name) { return invoke<BOOL>(0xDFB97E6DD1F1DF01, name); }
static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0x12491208BF9B1A1F); }
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0x1F7F7A49128BAA8, scale); }
static void _0xE16649891B10B121(float p0) { invoke<Void>(0xE16649891B10B121, p0); }
static void _0xD6D17C4190488A71(float p0) { invoke<Void>(0xD6D17C4190488A71, p0); }
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0x4727D77F489E4C71, toggle); }
static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0x4813584C1B3C8827, p0, p1); }
}



namespace NETWORK
{
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xECBDE2498459EE0C, timeA, timeB); }
static Any _0x273F82FB78DA33F() { return invoke<Any>(0x273F82FB78DA33F); }
static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xFB1CEF9E7943CFF5, entity); }
static BOOL _0xC1E1CB3C6CF24152(Any* p0, Any p1) { return invoke<BOOL>(0xC1E1CB3C6CF24152, p0, p1); }
static Any _0x63E547C031261612() { return invoke<Any>(0x63E547C031261612); }
static int _0xAF5C7ED62374581C(int netScene) { return invoke<int>(0xAF5C7ED62374581C, netScene); }
static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xAAC239430E4701A0, player); }
static void _0xB15EDF32C09B988A() { invoke<Void>(0xB15EDF32C09B988A); }
static BOOL _HAS_TUNABLES_BEEN_DOWNLOADED() { return invoke<BOOL>(0x60FC53FDE92C8EF2); }
static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0x7FF6AB5A8502A207); }
static Any NETWORK_IS_ACTIVITY_SESSION() { return invoke<Any>(0x9404B1BCD022816B); }
static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xB3081451628A5D6C); }
static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0x3C811AF60449B49); }
static void _0x5B8DAB6C07A826C(Entity entity) { invoke<Void>(0x5B8DAB6C07A826C, entity); }
static BOOL _0x4D144E73D122C2EF(Any* p0) { return invoke<BOOL>(0x4D144E73D122C2EF, p0); }
static BOOL _0x627BFFE3C9C2BCAF(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x627BFFE3C9C2BCAF, p0, p1, p2); }
static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0x2380875F8B6B9911, entity); }
static BOOL _0x232BF54B46718019(Any p0) { return invoke<BOOL>(0x232BF54B46718019, p0); }
static Any _0xB2772364A837A334() { return invoke<Any>(0xB2772364A837A334); }
static Any _0xD2A572080EB7D9FD() { return invoke<Any>(0xD2A572080EB7D9FD); }
static Any _0x322AA0CC48A7BEA4(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0x322AA0CC48A7BEA4, p0, p1, p2); }
static Any NETWORK_IS_TRANSITION_HOST() { return invoke<Any>(0x9BA8B8A12445DFA2); }
static Any NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<Any>(0x2B9102AB07859ECF, p0); }
static Any _0xCB639D2CDBBB624E() { return invoke<Any>(0xCB639D2CDBBB624E); }
static void _0x9DD41EFE33658C18(BOOL p0, BOOL p1) { invoke<Void>(0x9DD41EFE33658C18, p0, p1); }
static Any _0xB657E2797F9351BD(BOOL p0) { return invoke<Any>(0xB657E2797F9351BD, p0); }
static void _0x9E8D30A063090AF7(Any* p0, Any* p1) { invoke<Void>(0x9E8D30A063090AF7, p0, p1); }
static Any _0x8A30FF530E3D7956() { return invoke<Any>(0x8A30FF530E3D7956); }
static BOOL _0xF4617589418F9640(Any p0, Any p1) { return invoke<BOOL>(0xF4617589418F9640, p0, p1); }
static int PED_TO_NET(Ped ped) { return invoke<int>(0x970E0945BD0DD6AC, ped); }
static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(int* playerHandle) { return invoke<BOOL>(0x9B9C3FABD760DD83, playerHandle); }
static void _0xE60DA6F28E21C332(BOOL p0) { invoke<Void>(0xE60DA6F28E21C332, p0); }
static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0x88E055AE81551426); }
static Any _0x49B45031FB4E37E2() { return invoke<Any>(0x49B45031FB4E37E2); }
static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xE063DDE8855EC52); }
static void _0x417C69B4ECBFA634(Any p0) { invoke<Void>(0x417C69B4ECBFA634, p0); }
static void _0xB0EBB85E20A9BF7E() { invoke<Void>(0xB0EBB85E20A9BF7E); }
static BOOL _0x54C45319D5317B36(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x54C45319D5317B36, p0, p1, p2, p3); }
static Any _0x819B7152B120009E(Any* p0, Any p1) { return invoke<Any>(0x819B7152B120009E, p0, p1); }
static Any NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<Any>(0x2F56176C3EC01D11); }
static void SET_PLAYER_INVISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0x554D2DCF61451A89, p0, p1); }
static Any _0x8B56AE03C255720(BOOL p0) { return invoke<Any>(0x8B56AE03C255720, p0); }
static BOOL _0x4BE441F2F7A19154(Any p0) { return invoke<BOOL>(0x4BE441F2F7A19154, p0); }
static BOOL _0x554BB0B9E62F2C70() { return invoke<BOOL>(0x554BB0B9E62F2C70); }
static BOOL _0xCEAD67E23B5BFA04(Any* p0) { return invoke<BOOL>(0xCEAD67E23B5BFA04, p0); }
static void _0x1F41F35730DF0C5() { invoke<Void>(0x1F41F35730DF0C5); }
static Any _0x793C8DAC5A34F402() { return invoke<Any>(0x793C8DAC5A34F402); }
static BOOL _0xED0415A3E6AFB353(Any* p0, Any* p1) { return invoke<BOOL>(0xED0415A3E6AFB353, p0, p1); }
static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* p0) { return invoke<BOOL>(0x1DFBF50696107714, p0); }
static BOOL _0x29DBBAC3854E937B(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x29DBBAC3854E937B, p0, p1, p2); }
static int TEXTURE_DOWNLOAD_REQUEST(int* PlayerHandle, char* FilePath, char* Name, BOOL p3) { return invoke<int>(0xD6473FAABFE9737C, PlayerHandle, FilePath, Name, p3); }
static BOOL _0x2C9165A6372939E0(Any p0) { return invoke<BOOL>(0x2C9165A6372939E0, p0); }
static Any _0x171DF6A0C07FB3DC(Any p0, Any p1) { return invoke<Any>(0x171DF6A0C07FB3DC, p0, p1); }
static Any _0xC6CFC3C68405B9B4() { return invoke<Any>(0xC6CFC3C68405B9B4); }
static void _0x5B0A122C489CFC8B() { invoke<Void>(0x5B0A122C489CFC8B); }
static void NETWORK_SET_PROPERTY_ID(Any p0) { invoke<Void>(0xA02E4E0A7AE1DFCE, p0); }
static void _0x95496D532230447() { invoke<Void>(0x95496D532230447); }
static int _GET_TUNABLES_CONTENT_MODIFIER_ID(Hash contentHash) { return invoke<int>(0x805806E50E148933, contentHash); }
static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Entity entity) { return invoke<BOOL>(0xE1CAA98B09E043C9, entity); }
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x578FDABE92DF11B1); }
static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0x83F9F562331A5F8B); }
static BOOL NETWORK_IS_FRIEND(int* player) { return invoke<BOOL>(0xCD9EF71963819AF0, player); }
static Any _0x4F6C7DD68DDBCBBD(Any p0, Any p1) { return invoke<Any>(0x4F6C7DD68DDBCBBD, p0, p1); }
static BOOL _0xC7E762B4DD849A1E(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xC7E762B4DD849A1E, p0, p1, p2); }
static int NETWORK_GET_PARTICIPANT_INDEX(Any p0) { return invoke<int>(0xFE6F4DCB1D797E53, p0); }
static void _0xB4AB2A263E8B232C(BOOL p0) { invoke<Void>(0xB4AB2A263E8B232C, p0); }
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { invoke<Void>(0x9064278EBCD8C84A, p0, p1, p2); }
static Any _0xDAFB4C1510CB782A() { return invoke<Any>(0xDAFB4C1510CB782A); }
static BOOL _0xA603A612A24DFB75(Any p0) { return invoke<BOOL>(0xA603A612A24DFB75, p0); }
static int NETWORK_GET_HOST_OF_SCRIPT(char* scriptName, int p1, Any p2) { return invoke<int>(0x34BC92228D132865, scriptName, p1, p2); }
static void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4392DD4CF5597D9C, p0, p1, p2, p3); }
static BOOL _0x16B26CA1D1DBB8EA(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x16B26CA1D1DBB8EA, p0, p1, p2); }
static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return invoke<int>(0x628317A5051D62EC, p0); }
static Any _0xFFA89CBCECB87761() { return invoke<Any>(0xFFA89CBCECB87761); }
static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL p1) { invoke<Void>(0xB399D1EDF14937AA, entity, p1); }
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xF37889B966BC031B); }
static float NETWORK_GET_PLAYER_LOUDNESS(Any p0) { return invoke<float>(0x999615368A5BD1A1, p0); }
static BOOL _0xEB6D7E4CC1A2A6B1(Any p0) { return invoke<BOOL>(0xEB6D7E4CC1A2A6B1, p0); }
static void _0xDDA6E47BC33CE72() { invoke<Void>(0xDDA6E47BC33CE72); }
static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0x74E08DA361DEE3E6, p0, p1); }
static BOOL _0x34A8B315A9555A3C(Any p0) { return invoke<BOOL>(0x34A8B315A9555A3C, p0); }
static Any _0xEF7DEE25E2328468() { return invoke<Any>(0xEF7DEE25E2328468); }
static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0x6D4A357D96F0701F, entity); }
static Any _0xAEC5CE0A2F213406(Any p0) { return invoke<Any>(0xAEC5CE0A2F213406, p0); }
static Any _0x6729293AA5C68FB3() { return invoke<Any>(0x6729293AA5C68FB3); }
static int NETWORK_GET_PLAYER_INDEX(Ped Ped) { return invoke<int>(0xFAA1C60127DA6F80, Ped); }
static Any _0x3B0C667873707E03(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x3B0C667873707E03, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0x7D343C5B30D80DC6); }
static void _0x90F450EDF4C1E6FA() { invoke<Void>(0x90F450EDF4C1E6FA); }
static BOOL _0xB45902F5C3ED4C8A(Any p0) { return invoke<BOOL>(0xB45902F5C3ED4C8A, p0); }
static void _0x648BC25E434B08EA(BOOL p0) { invoke<Void>(0x648BC25E434B08EA, p0); }
static void _0xEEEF8D3A6B03E441() { invoke<Void>(0xEEEF8D3A6B03E441); }
static void _0xBB4EFE202AFA3ECB(Any p0, BOOL p1) { invoke<Void>(0xBB4EFE202AFA3ECB, p0, p1); }
static Any _0x6D2EB120D0C09182(Any p0) { return invoke<Any>(0x6D2EB120D0C09182, p0); }
static Any _0xB5B2A3B74E7EE634() { return invoke<Any>(0xB5B2A3B74E7EE634); }
static void _0x22CE911F590FC82B(BOOL p0) { invoke<Void>(0x22CE911F590FC82B, p0); }
static BOOL _0x2EEA762F61717201(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x2EEA762F61717201, p0, p1, p2); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Player* playerHandle) { return invoke<BOOL>(0x32D359DDC065ED99, playerHandle); }
static void _0x481474C95836D37A() { invoke<Void>(0x481474C95836D37A); }
static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xA8EFC723756B7650); }
static Any _0x856DB2FFB337C4E() { return invoke<Any>(0x856DB2FFB337C4E); }
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL p1) { invoke<Void>(0xC9E691953AAB6660, netId, p1); }
static Any _0x1031A6B2810AD76C() { return invoke<Any>(0x1031A6B2810AD76C); }
static Any _0x97250EE335F45A61(Any p0) { return invoke<Any>(0x97250EE335F45A61, p0); }
static void _0xC2ACCDA74A2B8EB6(Any p0, BOOL p1) { invoke<Void>(0xC2ACCDA74A2B8EB6, p0, p1); }
static void _0x245BFFE68C3308B8() { invoke<Void>(0x245BFFE68C3308B8); }
static BOOL _0x8832B8953ED742A7(Any p0, Any* p1) { return invoke<BOOL>(0x8832B8953ED742A7, p0, p1); }
static Any _0xC98D078C3A6D0369() { return invoke<Any>(0xC98D078C3A6D0369); }
static Any _0xA40C01FD30CB6585() { return invoke<Any>(0xA40C01FD30CB6585); }
static BOOL _0x4757E4E3F40FAC33(int p0, int p1, int maxPlayers, BOOL p3) { return invoke<BOOL>(0x4757E4E3F40FAC33, p0, p1, maxPlayers, p3); }
static BOOL _0x31504538981B774C(Any p0) { return invoke<BOOL>(0x31504538981B774C, p0); }
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xAB77C33FA649AA10, time); }
static Any NETWORK_LAUNCH_TRANSITION() { return invoke<Any>(0x48D24A9DA0DE9793); }
static BOOL _0x9E73613AD6E38286(Any p0) { return invoke<BOOL>(0x9E73613AD6E38286, p0); }
static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(int* player) { return invoke<BOOL>(0x1E5E4125F3417386, player); }
static Any _0xED3A6ED798C4B31C() { return invoke<Any>(0xED3A6ED798C4B31C); }
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0x1AC739B36BB1C130); }
static Any _0xFE655F57BD37C7B() { return invoke<Any>(0xFE655F57BD37C7B); }
static Any NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, BOOL p3) { return invoke<Any>(0xE178F7EAFD5EBD9B, vehicle, isAudible, isInvisible, p3); }
static void _0x9F93F148C4DEAA93(Any p0, BOOL p1) { invoke<Void>(0x9F93F148C4DEAA93, p0, p1); }
static BOOL _0xB633756014C8819D(Any p0) { return invoke<BOOL>(0xB633756014C8819D, p0); }
static Any _0x8D16E0B51D719105(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<Any>(0x8D16E0B51D719105, p0, p1, p2, p3, p4, p5); }
static void _0xA1AF88F691770080(Any p0) { invoke<Void>(0xA1AF88F691770080, p0); }
static BOOL _0x6E0B507EE93561F7(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x6E0B507EE93561F7, p0, p1, p2, p3); }
static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Player* playerHandle, char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xC9866308EFE4E7D4, playerHandle, p1, p2, p3, p4); }
static Any _0x77BA247D239DFC4(Any p0) { return invoke<Any>(0x77BA247D239DFC4, p0); }
static Any NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xD92CAEE8D4CBCFA8, p0, p1, p2, p3, p4, p5); }
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars) { invoke<Void>(0xEC578E04792A69AD, vars, numVars); }
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0x183ED3EDD70C10F3); }
static char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<char*>(0x6C2ED4A11B6E182, p0); }
static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xB4F0A6276CDF9E2, toggle); }
static Any _0xFDBEFB9588F469BE() { return invoke<Any>(0xFDBEFB9588F469BE); }
static Any _0x5F70AE34BCBC68CD(Any p0) { return invoke<Any>(0x5F70AE34BCBC68CD, p0); }
static Any _0x45596973A53EABD8(Any* p0, Any p1, Any p2) { return invoke<Any>(0x45596973A53EABD8, p0, p1, p2); }
static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0x33B21EAFED8C1338, netHandle); }
static void _0x38C2869F230C0B42(int p0) { invoke<Void>(0x38C2869F230C0B42, p0); }
static Any _GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<Any>(0x4269ED40BB5FF584, p0, p1); }
static void NETWORK_GET_RESPAWN_RESULT(Any p0, int* p1, int* p2) { invoke<Void>(0x5D219BF05C81BF80, p0, p1, p2); }
static Any _NETWORK_ADD_ENTITY_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0xDFF3894D01A63C53, p0, p1, p2, p3, p4, p5, p6); }
static Any _0xBF9EF8194008E4AC() { return invoke<Any>(0xBF9EF8194008E4AC); }
static void NETWORK_HANDLE_FROM_PLAYER(Player player, int* networkHandle, int bufferSize) { invoke<Void>(0x224B05ED6725EA52, player, networkHandle, bufferSize); }
static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<BOOL>(0xF1C8C691B49DACEA, netID); }
static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0x2EB27FD1B11C9FC6, p0, p1); }
static void _0x2C67EF5F82F6B386(BOOL p0) { invoke<Void>(0x2C67EF5F82F6B386, p0); }
static Any _0xF7C8506DD1CB3803() { return invoke<Any>(0xF7C8506DD1CB3803); }
static Any NETWORK_SEND_TEXT_MESSAGE(char* message, int* playerHandle) { return invoke<Any>(0x10555CFF3258A013, message, playerHandle); }
static BOOL _0xC8A24345CF20119D(Any p0) { return invoke<BOOL>(0xC8A24345CF20119D, p0); }
static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0x790727DE63F90407, p0, p1, p2, players, p4); }
static Any _0xE8EBFE0A4A407D81(Any p0) { return invoke<Any>(0xE8EBFE0A4A407D81, p0); }
static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x54663776183F5212); }
static void _0x945A43A502484557(BOOL p0) { invoke<Void>(0x945A43A502484557, p0); }
static Any _0x835D05FAF56BD37E(Any* p0) { return invoke<Any>(0x835D05FAF56BD37E, p0); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoke<BOOL>(0x50A45FCE14D10B26, p0); }
static BOOL _0x86914A54B7B7694F(Any p0) { return invoke<BOOL>(0x86914A54B7B7694F, p0); }
static void _0xA5064174B9213E3A(Any p0, Any p1) { invoke<Void>(0xA5064174B9213E3A, p0, p1); }
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars) { invoke<Void>(0xE6E20DA4BE6773A1, vars, numVars); }
static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xD9A8591111C0B390, p0, maxPlayers); }
static void _0xC7DA66AAC5A16244(BOOL p0) { invoke<Void>(0xC7DA66AAC5A16244, p0); }
static BOOL _0x2F63EDA96FD6EB8B(Any* p0) { return invoke<BOOL>(0x2F63EDA96FD6EB8B, p0); }
static void _0xE177C04DAE23C621(Any p0, BOOL p1) { invoke<Void>(0xE177C04DAE23C621, p0, p1); }
static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0x2AA78777BBD3E0BB, player); }
static void _0x7A9BA54867B399E2(int netID) { invoke<Void>(0x7A9BA54867B399E2, netID); }
static Any _0xFD708B659D45ABAB(Any p0, Any p1) { return invoke<Any>(0xFD708B659D45ABAB, p0, p1); }
static BOOL _NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0xFC67EEFF05793F35, tunableContext, tunableName, value); }
static char* _NETWORK_GET_FRIEND_NAME_FROM_INDEX(int friendIndex) { return invoke<char*>(0xF65852B668FB9DF8, friendIndex); }
static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0x28EC875B929FC59C, p0); }
static void _0x22443E2CA709D76A(BOOL p0, Any p1, BOOL p2) { invoke<Void>(0x22443E2CA709D76A, p0, p1, p2); }
static Any _0x396FCD6FA6158B80() { return invoke<Any>(0x396FCD6FA6158B80); }
static BOOL _0x2664D0C91B15C018(Any p0) { return invoke<BOOL>(0x2664D0C91B15C018, p0); }
static BOOL _0xAA60B98C39D226D3() { return invoke<BOOL>(0xAA60B98C39D226D3); }
static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL p0, Any p1) { invoke<Void>(0x36AF4FF58A228C4D, p0, p1); }
static BOOL NETWORK_IS_FRIEND_ONLINE(Any* p0) { return invoke<BOOL>(0xC0499075EE988C2D, p0); }
static char* NETWORK_GET_GAMERTAG_FROM_HANDLE(int* handle) { return invoke<char*>(0x66156EF3E3DC2720, handle); }
static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xE2F5C7BE0182E5EF, player, weaponHash); }
static void _DOWNLOAD_TUNABLES() { invoke<Void>(0x675824A1D4E1E276); }
static Any _0xA1094F463A2207CB() { return invoke<Any>(0xA1094F463A2207CB); }
static Any _0x5C21DAE767CA92CF() { return invoke<Any>(0x5C21DAE767CA92CF); }
static void _0xE8EE97E64953982E() { invoke<Void>(0xE8EE97E64953982E); }
static void _0x1BA61C752F91B420() { invoke<Void>(0x1BA61C752F91B420); }
static BOOL _0x4D45A97B976755FF(Any p0, Any* p1) { return invoke<BOOL>(0x4D45A97B976755FF, p0, p1); }
static void _0x4BCC127449F560FA() { invoke<Void>(0x4BCC127449F560FA); }
static Any _0xEADA9DF72CFCEC5A() { return invoke<Any>(0xEADA9DF72CFCEC5A); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0x33840B9DD44B9978, p0, maxPlayers, p2); }
static Any _0x98142B2C44CD663F() { return invoke<Any>(0x98142B2C44CD663F); }
static BOOL _0x22674E3A7D5F7C49(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x22674E3A7D5F7C49, p0, p1, p2); }
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0x16903D7079874DAA, netScene, entity, bone); }
static void _0xB2EC87ED12953BF5(Any p0) { invoke<Void>(0xB2EC87ED12953BF5, p0); }
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0x1A90CAA99695820C, p0); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(Any* p0, Any p1) { return invoke<BOOL>(0x1A5A32F03EB1DFA9, p0, p1); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* p0, Any p1) { return invoke<BOOL>(0xAE5ED0DA64B0340, p0, p1); }
static char* _NETWORK_PLAYER_GET_USER_ID(Player player, int* userID) { return invoke<char*>(0xF78AD5D7DB9EAB0B, player, userID); }
static Any NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xD1C665BCF28845D4, p0, p1, p2, p3, p4, p5); }
static Any NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) { return invoke<Any>(0x8295A2E379B474B3, p0); }
static void _0x3B536BB91A67BA(Any p0) { invoke<Void>(0x3B536BB91A67BA, p0); }
static BOOL _0xF4C11AD6BB2226E4(Any p0) { return invoke<BOOL>(0xF4C11AD6BB2226E4, p0); }
static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0x1375F10E435D3684, p0, p1); }
static void _0x300AF0641C3C0E27(Any p0) { invoke<Void>(0x300AF0641C3C0E27, p0); }
static BOOL _0x9DA62667263C2F4(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, Any p11) { return invoke<BOOL>(0x9DA62667263C2F4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static BOOL _0xDA37C2E18F19C6A7(Any p0) { return invoke<BOOL>(0xDA37C2E18F19C6A7, p0); }
static BOOL _0xF5E2AA5132A194C1(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xF5E2AA5132A194C1, p0, p1, p2); }
static Any _0x57ECB48236B11BFE() { return invoke<Any>(0x57ECB48236B11BFE); }
static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0xFFB05175212D9D1A, netID); }
static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xA2BAE6A6FF32F36, p0); }
static BOOL _0x3435E3667ECEBDAC(Any p0) { return invoke<BOOL>(0x3435E3667ECEBDAC, p0); }
static Any _0x921ABE96CE730C82(Any p0, Any p1) { return invoke<Any>(0x921ABE96CE730C82, p0, p1); }
static void RESERVE_NETWORK_MISSION_OBJECTS(int p0) { invoke<Void>(0x760D563099DDA295, p0); }
static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0x413EDE4988E7134E); }
static void _0x695CAF21D2439B2D() { invoke<Void>(0x695CAF21D2439B2D); }
static Any NETWORK_IS_TRANSITION_BUSY() { return invoke<Any>(0xE11DF5A4BD0EDF95); }
static void _0x221819D7BBD6C25B(Any p0, Any p1) { invoke<Void>(0x221819D7BBD6C25B, p0, p1); }
static void _0x2A9293D926AE19D0(Any p0) { invoke<Void>(0x2A9293D926AE19D0, p0); }
static BOOL _0x7B81F8DF383DF2F1(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x7B81F8DF383DF2F1, p0, p1, p2, p3); }
static Any _0x8E3291D1FC642E17() { return invoke<Any>(0x8E3291D1FC642E17); }
static Any NETWORK_IS_TRANSITION_STARTED() { return invoke<Any>(0xD41D021615AD423D); }
static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0x690AE3890EBC314C, player); }
static void _0x9CF1A2FC311C3F00(BOOL p0) { invoke<Void>(0x9CF1A2FC311C3F00, p0); }
static char* _GET_CONTENT_ID(Any p0) { return invoke<char*>(0x992D1F4B2174DAE9, p0); }
static BOOL _0x85660A71796DF019(Any p0) { return invoke<BOOL>(0x85660A71796DF019, p0); }
static Any _0xB2A6B7E4BF26893B(Any p0) { return invoke<Any>(0xB2A6B7E4BF26893B, p0); }
static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(int* player) { return invoke<BOOL>(0xC9EE1D06E1272479, player); }
static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xAA85236EFFE9C54D, p0); }
static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xE94941ECACFAF08A, p0); }
static BOOL _NETWORK_PLAYER_IS_IN_CLAN() { return invoke<BOOL>(0x4A95235C630E7410); }
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0x7025777635AB04C0); }
static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0x228F3B52A1CABDD9, player); }
static void _0x1F027074DC3C0FA1(BOOL p0) { invoke<Void>(0x1F027074DC3C0FA1, p0); }
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0x3F2703DCC0FC2191); }
static BOOL NETWORK_ARE_HANDLES_THE_SAME(int* netHandle1, int* netHandle2) { return invoke<BOOL>(0xFE7DEF93F4F2A351, netHandle1, netHandle2); }
static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xBE5C198B87F6127); }
static BOOL _0x5E2C58F0D7A918F8(Any* p0, Any* p1) { return invoke<BOOL>(0x5E2C58F0D7A918F8, p0, p1); }
static BOOL _0xF2C8BD6800A468EF(Any p0, Any* p1) { return invoke<BOOL>(0xF2C8BD6800A468EF, p0, p1); }
static Hash _NETWORK_HASH_FROM_GAMER_HANDLE(int* handle) { return invoke<Hash>(0xFF11A008BC882263, handle); }
static void _0x58E3C84EAE6CC2B3(Any p0, Any p1) { invoke<Void>(0x58E3C84EAE6CC2B3, p0, p1); }
static Any _0x52E43F6773B4C098(Any p0, Any p1, Any p2) { return invoke<Any>(0x52E43F6773B4C098, p0, p1, p2); }
static Any _0x154EEB6031D33511() { return invoke<Any>(0x154EEB6031D33511); }
static Any _0x4C5F5AF635DED95E() { return invoke<Any>(0x4C5F5AF635DED95E); }
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xD90C5586143D48B6); }
static BOOL _0xE2CCBFB054B508C9(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xE2CCBFB054B508C9, p0, p1, p2); }
static Any _0x79E185505B6C03BC() { return invoke<Any>(0x79E185505B6C03BC); }
static Any _0x5B28231B2F838CCE() { return invoke<Any>(0x5B28231B2F838CCE); }
static Any _0x8FE35E81C34AE938() { return invoke<Any>(0x8FE35E81C34AE938); }
static Any _0x1990026F4BD2774B() { return invoke<Any>(0x1990026F4BD2774B); }
static BOOL _0xEAAEDB059B4FE907(Any p0) { return invoke<BOOL>(0xEAAEDB059B4FE907, p0); }
static Any _0xDF3B17CC5E195D0() { return invoke<Any>(0xDF3B17CC5E195D0); }
static BOOL _0x71E724DD506FEB18(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { return invoke<BOOL>(0x71E724DD506FEB18, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static Any _0xFB980F295BB98E72() { return invoke<Any>(0xFB980F295BB98E72); }
static Any _0x61EE0D9720C7CFC2() { return invoke<Any>(0x61EE0D9720C7CFC2); }
static void _0xBD1648E392D11DAF(Any p0) { invoke<Void>(0xBD1648E392D11DAF, p0); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0x5BC6152A8D819EBF, p0); }
static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0x339BE8A5BE5352D3, pickup); }
static void _0x10289AED20D1EED8() { invoke<Void>(0x10289AED20D1EED8); }
static void _0x31A3430271E444A4(BOOL p0, Any p1) { invoke<Void>(0x31A3430271E444A4, p0, p1); }
static BOOL _0x8A413E65B2AF78E2(Any p0) { return invoke<BOOL>(0x8A413E65B2AF78E2, p0); }
static BOOL _0x3D3EC4199DF36385() { return invoke<BOOL>(0x3D3EC4199DF36385); }
static Any _0xD24EE817C58CBCBB() { return invoke<Any>(0xD24EE817C58CBCBB); }
static Any _0xD507C54D853FCDE6(Any p0) { return invoke<Any>(0xD507C54D853FCDE6, p0); }
static Any _0xC50852F4B44E3833() { return invoke<Any>(0xC50852F4B44E3833); }
static void _0xB78C3ADC4AAF87C6(Any p0) { invoke<Void>(0xB78C3ADC4AAF87C6, p0); }
static Any _0xEAE18E20772304BD() { return invoke<Any>(0xEAE18E20772304BD); }
static Any _0x7DA873368A8E11B9() { return invoke<Any>(0x7DA873368A8E11B9); }
static int _IS_PLAYER_BANNED() { return invoke<int>(0x38A6AF2E8897CB6E); }
static BOOL _NETWORK_IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xDEDA6095A64A34C2); }
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0x8999EB495E6DBA1B, toggle); }
static void _0xD8C4B75B0DF41A64(Any p0) { invoke<Void>(0xD8C4B75B0DF41A64, p0); }
static Any _0xEA2305405BEF3D73() { return invoke<Any>(0xEA2305405BEF3D73); }
static Any _0xC79581F2D1D363FF() { return invoke<Any>(0xC79581F2D1D363FF); }
static void _0x690EF66897686FB2() { invoke<Void>(0x690EF66897686FB2); }
static void _0x5918B6474E4A08BC(Any Entity, BOOL p1) { invoke<Void>(0x5918B6474E4A08BC, Entity, p1); }
static Any _0xD0157FBD9EE11F1D() { return invoke<Any>(0xD0157FBD9EE11F1D); }
static Any _0xE9E994E7C54702EB() { return invoke<Any>(0xE9E994E7C54702EB); }
static BOOL _0x461535ED8B04D436(Any p0) { return invoke<BOOL>(0x461535ED8B04D436, p0); }
static Any _0x1363833C34DE4AA() { return invoke<Any>(0x1363833C34DE4AA); }
static Any _0x6EE764E8E4BBCDEE() { return invoke<Any>(0x6EE764E8E4BBCDEE); }
static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0x7909D930A3A1BBCE, player); }
static void _0xFF31D28DE3928170() { invoke<Void>(0xFF31D28DE3928170); }
static BOOL NETWORK_GET_TRANSITION_HOST(int* netHandle) { return invoke<BOOL>(0x1C15390EAAE1F8A5, netHandle); }
static Any _0x556396787AABB71() { return invoke<Any>(0x556396787AABB71); }
static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xC445CD0E11A9E017); }
static Any _0x52A96866380EACA2(Any p0) { return invoke<Any>(0x52A96866380EACA2, p0); }
static Any _0x6AA2781364C20A27() { return invoke<Any>(0x6AA2781364C20A27); }
static void _0xC4DD67E1995B871E(Any* p0) { invoke<Void>(0xC4DD67E1995B871E, p0); }
static BOOL NETWORK_IS_PARTY_MEMBER(Any p0) { return invoke<BOOL>(0xC19B020A2290D223, p0); }
static BOOL _0x81FBB58FEA5DB721(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0x81FBB58FEA5DB721, p0, p1, p2, p3, p4); }
static void NETWORK_SESSION_VOICE_LEAVE() { invoke<Void>(0x9F4DE3A4F50FC30A); }
static Any _0xF9A2527AE152F062() { return invoke<Any>(0xF9A2527AE152F062); }
static Any _0x73781233050E5DAE() { return invoke<Any>(0x73781233050E5DAE); }
static Any NETWORK_IS_IN_TRANSITION() { return invoke<Any>(0x773592AD8895D61A); }
static void _0xDB99C5A57407C60B() { invoke<Void>(0xDB99C5A57407C60B); }
static BOOL _0xFB3AAF572502BD74(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xFB3AAF572502BD74, p0, p1, p2, p3, p4, p5); }
static BOOL CAN_REGISTER_MISSION_ENTITIES(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD7CD2A7CC1B2D0CF, p0, p1, p2, p3); }
static void _0xF5C2B258F8FF391A(BOOL p0) { invoke<Void>(0xF5C2B258F8FF391A, p0); }
static void _0x37401BC2B876F77C(BOOL p0) { invoke<Void>(0x37401BC2B876F77C, p0); }
static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(int* netHandle) { return invoke<BOOL>(0xC0A23A0A51AD5234, netHandle); }
static void _0x4A90C4004A1BD0C4(Any p0) { invoke<Void>(0x4A90C4004A1BD0C4, p0); }
static Player _NETWORK_GET_PED_PLAYER(Ped ped) { return invoke<Player>(0x881548CC6D5B749B, ped); }
static Any _0x9381F8B552B5520E(Any p0) { return invoke<Any>(0x9381F8B552B5520E, p0); }
static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0x20193FE47924AD7F); }
static void _NETWORK_GET_SERVER_TIME(int* hours, int* minutes, int* seconds) { invoke<Void>(0xFE68FDAA055FF2, hours, minutes, seconds); }
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x8CA1639B0A1E2C37); }
static BOOL _0xD49B8056047957E4(Any p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xD49B8056047957E4, p0, p1, p2, p3); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xA514AB7AA701A64E, netID); }
static Any NETWORK_IS_ADDING_FRIEND() { return invoke<Any>(0x4FE5B562102D759D); }
static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0x99605426D60264B7, p0, maxPlayers, p2); }
static Any _0x717776769E8EB52A(Any p0, Any p1) { return invoke<Any>(0x717776769E8EB52A, p0, p1); }
static void _0x99F85698A573B529(Any p0, Any p1) { invoke<Void>(0x99F85698A573B529, p0, p1); }
static BOOL NETWORK_IS_HANDLE_VALID(int* p0, int p1) { return invoke<BOOL>(0x5C131CC0633E1D17, p0, p1); }
static Any _0x908D2FEFC051BCFA() { return invoke<Any>(0x908D2FEFC051BCFA); }
static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(Any p0) { return invoke<BOOL>(0x6985B636BB8652CD, p0); }
static void _0x3BC462DDC9D9A953(Any p0) { invoke<Void>(0x3BC462DDC9D9A953, p0); }
static Any _0xED8AB6B3AF5FBAD6(Any p0) { return invoke<Any>(0xED8AB6B3AF5FBAD6, p0); }
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xE177FAB8503CA60A, toggle); }
static BOOL _0x41AD4ED4B469EA5B(Any p0) { return invoke<BOOL>(0x41AD4ED4B469EA5B, p0); }
static void _0x66A431E8EA4B8087(Entity entity) { invoke<Void>(0x66A431E8EA4B8087, entity); }
static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x1F104138B9F04F44, p0, p1, p2, p3); }
static BOOL NETWORK_IS_GAMER_TALKING(int* p0) { return invoke<BOOL>(0xA060414787093051, p0); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xB893ACE15C884AD6, p0, p1, p2, p3); }
static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xC5D7DB601435E1A, p0); }
static Any _0x1D5564D96DD4162D(Any p0) { return invoke<Any>(0x1D5564D96DD4162D, p0); }
static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xD6141983B7717978); }
static void _0x1988BE21889DBCBD() { invoke<Void>(0x1988BE21889DBCBD); }
static BOOL CAN_REGISTER_MISSION_VEHICLES(BOOL p0) { return invoke<BOOL>(0xD6F7F0651C1EFA56, p0); }
static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xA2DD8594DE86340B, p0); }
static Any _0xD97C581E98985AEC(Any p0) { return invoke<Any>(0xD97C581E98985AEC, p0); }
static BOOL _0x404DC91B50896023(Any* p0, Any* p1) { return invoke<BOOL>(0x404DC91B50896023, p0, p1); }
static void _0x62BA21A3E1609AEF() { invoke<Void>(0x62BA21A3E1609AEF); }
static BOOL _0x1B09CB427A5F1A1(Any p0) { return invoke<BOOL>(0x1B09CB427A5F1A1, p0); }
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xABE2714E96D3D865, entity); }
static Any NETWORK_GET_TRANSITION_MEMBERS(Any* p0, Any p1) { return invoke<Any>(0x1E589A41FBF59AA0, p0, p1); }
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0x916E801A460C13F4, p0); }
static void _0x5074DAC7A9E0E26E() { invoke<Void>(0x5074DAC7A9E0E26E); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xAB39929B33DB97EF, ped, netScene, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static Any _0x3A0BB227A6E8370B(Any p0) { return invoke<Any>(0x3A0BB227A6E8370B, p0); }
static Any _0x483A302F21332AC0() { return invoke<Any>(0x483A302F21332AC0); }
static BOOL _0x92C3F20E591497E1() { return invoke<BOOL>(0x92C3F20E591497E1); }
static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0x777E07982B33C44E, p0); }
static Any _0xD9B665709635D6FC() { return invoke<Any>(0xD9B665709635D6FC); }
static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xB65AAC6200E24B8A, toggle); }
static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0x3C422B810EF0DC55, p0); }
static Any _0x5E898B4D26519673(Any p0, Any p1) { return invoke<Any>(0x5E898B4D26519673, p0, p1); }
static Any _0xC1EBF68842083E1C(Any p0, Any p1) { return invoke<Any>(0xC1EBF68842083E1C, p0, p1); }
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x41A8E43C9B5341B4, p0); }
static Any _0xA7E706572C36E47F() { return invoke<Any>(0xA7E706572C36E47F); }
static void RESERVE_NETWORK_MISSION_VEHICLES(int p0) { invoke<Void>(0x50B946C04FF5E5E4, p0); }
static Any _0x4A98243B929E9B2F() { return invoke<Any>(0x4A98243B929E9B2F); }
static Any _0xD11321896950E6E4() { return invoke<Any>(0xD11321896950E6E4); }
static char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<char*>(0x26307DEFB2DBA0FA, player); }
static void _0x9154BA564F9D46FD(BOOL p0) { invoke<Void>(0x9154BA564F9D46FD, p0); }
static void _0xC19B020A2290D223(Any p0) { invoke<Void>(0xC19B020A2290D223, p0); }
static Any _0xA65A4B22D872A01F() { return invoke<Any>(0xA65A4B22D872A01F); }
static BOOL _0x6CAF61A1DC9616F9(Any p0, BOOL p1) { return invoke<BOOL>(0x6CAF61A1DC9616F9, p0, p1); }
static Any _0x83896B75E8F312B7() { return invoke<Any>(0x83896B75E8F312B7); }
static BOOL _0x65E418FC5AAF0D1A(Any* p0) { return invoke<BOOL>(0x65E418FC5AAF0D1A, p0); }
static Any NETWORK_GET_DESTROYER_OF_NETWORK_ID(Any p0, Any* p1) { return invoke<Any>(0xEEA186C8EF7230A8, p0, p1); }
static int GET_NETWORK_TIME() { return invoke<int>(0x20D394965B47B01A); }
static void _0xA7C2AC5C49E7D66D(BOOL p0) { invoke<Void>(0xA7C2AC5C49E7D66D, p0); }
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int p6, int p7, int p8, float p9) { return invoke<int>(0x2BBEEAF2B7C4E645, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9); }
static int _GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0x4C9052DD8093FA6E, p0); }
static void _0x638E46E171FFFB7B(BOOL p0) { invoke<Void>(0x638E46E171FFFB7B, p0); }
static Any _0xA07AFA28A02BAA88() { return invoke<Any>(0xA07AFA28A02BAA88); }
static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0x4BF7B9DDA2921974, p0); }
static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xB5BB7E2C13E88F08); }
static void NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, Any p1) { invoke<Void>(0xC2CC4C05A30C62D4, p0, p1); }
static BOOL _0x22946F7817A501F(Any p0) { return invoke<BOOL>(0x22946F7817A501F, p0); }
static Any _0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x7FD2990AF016795E, p0, p1, p2, p3, p4); }
static BOOL CAN_REGISTER_MISSION_OBJECTS(Any p0) { return invoke<BOOL>(0x2F600AC3146D596F, p0); }
static int _IS_ROCKSTAR_BANNED() { return invoke<int>(0x30A3978248956C90); }
static BOOL _HAS_BG_SCRIPT_BEEN_DOWNLOADED() { return invoke<BOOL>(0x569FC3E04932F4C3); }
static BOOL SET_BALANCE_ADD_MACHINE(Any* p0, Any* p1) { return invoke<BOOL>(0xB0CDA3458C2AE967, p0, p1); }
static BOOL _0x70594A4FE6B1BE47(Any p0) { return invoke<BOOL>(0x70594A4FE6B1BE47, p0); }
static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0x96BA6BF1BA1235CC); }
static BOOL _0xE24260ED0D7EC295(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xE24260ED0D7EC295, p0, p1, p2); }
static void _0xF9937FCD2999174D() { invoke<Void>(0xF9937FCD2999174D); }
static Any NETWORK_GET_TALKER_PROXIMITY() { return invoke<Any>(0x6A91A614344AD2FF); }
static BOOL _NETWORK_ARE_ROS_AVAILABLE() { return invoke<BOOL>(0xF8B1AB221BA632B5); }
static Any _0x9F73F967966B3045() { return invoke<Any>(0x9F73F967966B3045); }
static void NETWORK_SHOW_PROFILE_UI(int* playerHandle) { invoke<Void>(0xA09108CA264DCD24, playerHandle); }
static BOOL _0x3B8E181EB1D03904(Any* p0) { return invoke<BOOL>(0x3B8E181EB1D03904, p0); }
static BOOL NETWORK_DOES_TUNABLE_EXIST(char* tunableContext, char* tunableName) { return invoke<BOOL>(0x5002D2C57B0F3C4B, tunableContext, tunableName); }
static void _0x705DDEFF006B9D2B() { invoke<Void>(0x705DDEFF006B9D2B); }
static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0x39C4AF5B19011ED, doorID); }
static Any _0xA78C7D576D2598B5(Any p0, Any p1) { return invoke<Any>(0xA78C7D576D2598B5, p0, p1); }
static BOOL _0x3C671FD96FA65152(Any* p0) { return invoke<BOOL>(0x3C671FD96FA65152, p0); }
static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xCE604EB308351A84, player); }
static BOOL _0xD27F46331005B746(Any p0) { return invoke<BOOL>(0xD27F46331005B746, p0); }
static Any _0xB1C0D3E9E57FF37A() { return invoke<Any>(0xB1C0D3E9E57FF37A); }
static Any _0x55EAE044FFE1D191() { return invoke<Any>(0x55EAE044FFE1D191); }
static Any _0xBADD1A643AD56F36() { return invoke<Any>(0xBADD1A643AD56F36); }
static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xB747A73D349FF19A); }
static Any _0xD337FA3098E8AC8F() { return invoke<Any>(0xD337FA3098E8AC8F); }
static void _0x5E927477FB7FC3E7(Any p0, Any p1) { invoke<Void>(0x5E927477FB7FC3E7, p0, p1); }
static Any _0x875F2605B36BC34A(Any p0) { return invoke<Any>(0x875F2605B36BC34A, p0); }
static BOOL NETWORK_ACCESS_TUNABLE_INT(char* tunableContext, char* tunableName, int* value) { return invoke<BOOL>(0x1160931B15A8A97B, tunableContext, tunableName, value); }
static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xC610826FDD31C584, player); }
static BOOL _0x2BD86B02FDFBF77(Any p0) { return invoke<BOOL>(0x2BD86B02FDFBF77, p0); }
static BOOL _0x83F15C9D5C712BE9() { return invoke<BOOL>(0x83F15C9D5C712BE9); }
static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x5A785A381F26B81A); }
static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Player* playerHandle) { return invoke<BOOL>(0x239780C9F7968179, playerHandle); }
static BOOL NETWORK_ADD_FRIEND(Any* p0, char* p1) { return invoke<BOOL>(0x1D8FB475D716DC85, p0, p1); }
static Player PARTICIPANT_ID() { return invoke<Player>(0xA3CDB5D555FBB382); }
static BOOL _0xB9EF782D0819C3F8(Any p0) { return invoke<BOOL>(0xB9EF782D0819C3F8, p0); }
static Any _0x35C1EA95ADD54E4D() { return invoke<Any>(0x35C1EA95ADD54E4D); }
static BOOL _DOWNLOAD_BG_SCRIPT_RPF() { return invoke<BOOL>(0x12E139D9815BB1C3); }
static BOOL NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<BOOL>(0x787D88A5449F44F7, p0); }
static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xA5DE2588F01E450A, player); }
static Any _0x3AD626F7E34A3E91() { return invoke<Any>(0x3AD626F7E34A3E91); }
static void _0xF3FEEE9234C8E56A(BOOL p0) { invoke<Void>(0xF3FEEE9234C8E56A, p0); }
static void _0x73C24E5BD0FEFD1A() { invoke<Void>(0x73C24E5BD0FEFD1A); }
static Any _0x8934052A2D4677D2() { return invoke<Any>(0x8934052A2D4677D2); }
static BOOL _0xBEE28C91B5EDCC9C(int p0, int p1, int p2, int maxPlayers, BOOL p4) { return invoke<BOOL>(0xBEE28C91B5EDCC9C, p0, p1, p2, maxPlayers, p4); }
static void NETWORK_BAIL() { invoke<Void>(0x6F2FF1C23D3D4535); }
static Any _0xF4610F88E67CB5D1() { return invoke<Any>(0xF4610F88E67CB5D1); }
static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0x463F4AB457B6BA76, toggle); }
static BOOL NETWORK_IS_IN_PARTY() { return invoke<BOOL>(0xC19B020A2290D223); }
static void _0xF303C90B4D992D87() { invoke<Void>(0xF303C90B4D992D87); }
static BOOL _NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0x66317FE6EB487B7E, tunableContext, tunableName, value); }
static void _0xFA41D750DF0DB3A7(BOOL p0) { invoke<Void>(0xFA41D750DF0DB3A7, p0); }
static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0x39D4672F16AC4C1E); }
static void _0x56A898E695A647A(Any p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { invoke<Void>(0x56A898E695A647A, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_GET_BACKGROUND_LOADING_RECIPIENTS(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x744957489B0871D4, p0, p1, p2, p3); }
static void _0x1E2A091F4D980DD5(Any p0, Any p1) { invoke<Void>(0x1E2A091F4D980DD5, p0, p1); }
static BOOL _0xA2FB7E556C1142B3(Any p0) { return invoke<BOOL>(0xA2FB7E556C1142B3, p0); }
static BOOL _0xB6F90D136DE9E72B(Any p0, Any p1) { return invoke<BOOL>(0xB6F90D136DE9E72B, p0, p1); }
static int OBJ_TO_NET(Object object) { return invoke<int>(0x8B513DBDB3BBB4A6, object); }
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xACE769CD06E32A0F, netScene); }
static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0x878E45E8C4AA7963); }
static int _GET_POSIX_TIME() { return invoke<int>(0x9CC4C10F8D665832); }
static Any _0xE7BBAA19E98C0A89() { return invoke<Any>(0xE7BBAA19E98C0A89); }
static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Any p0) { return invoke<BOOL>(0x98526F8152DD2A20, p0); }
static BOOL _0xC1F7675ECE5F434C(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xC1F7675ECE5F434C, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SESSION_VOICE_HOST() { invoke<Void>(0x7CB6A7A2BFC0952); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5) { return invoke<BOOL>(0xFA6A3FB751990DF9, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x3265F1B4D606F172, p0, p1); }
static BOOL NETWORK_JOIN_TRANSITION(Any p0) { return invoke<BOOL>(0xFEDF73FD03808DC, p0); }
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(Any p0) { invoke<Void>(0xA98612584573A02B, p0); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE(char* scriptName, Any p1, BOOL p2, Any p3) { return invoke<BOOL>(0xD53E17620A2FE029, scriptName, p1, p2, p3); }
static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0x23FC0854C2543379, player); }
static Any NETWORK_IS_TRANSITION_TO_GAME() { return invoke<Any>(0x3A837DC94657625B); }
static void _0x67CF64B5C5B7CFF(BOOL p0) { invoke<Void>(0x67CF64B5C5B7CFF, p0); }
static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x7C4F3949A2F8BA17, p0, p1, p2, p3); }
static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0x8E6D2E4C20B2F499, p0, p1); }
static void _0xE60A208B7AFE86F9(int participantID, BOOL p1) { invoke<Void>(0xE60A208B7AFE86F9, participantID, p1); }
static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xE0D996B700AFE72A); }
static BOOL _0xF05E4A287C3CAFE3(Any p0, Any p1) { return invoke<BOOL>(0xF05E4A287C3CAFE3, p0, p1); }
static char* _FORMAT_TIME(int time) { return invoke<char*>(0x2B55F3A118A024E2, time); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xE2CF36BA430014A7, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* p0) { return invoke<BOOL>(0xF9134E43413FD7AE, p0); }
static BOOL _0xEC0EA5C88E09BFB1(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0xEC0EA5C88E09BFB1, p0, p1, p2, p3, p4); }
static BOOL NETWORK_CLAN_JOIN(Any clanHandle) { return invoke<BOOL>(0x460DFED547D71979, clanHandle); }
static Any _0xD80AC83DA90E9050() { return invoke<Any>(0xD80AC83DA90E9050); }
static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0x2142744DAF13353E, p0, p1); }
static Any _0x66E0109512300A5F() { return invoke<Any>(0x66E0109512300A5F); }
static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xA1BA6EF7D8AE2CC, toggle); }
static BOOL _0x7B52C6D8FC5F5C31(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x7B52C6D8FC5F5C31, p0, p1, p2, p3); }
static int _IS_SOCIALCLUB_BANNED() { return invoke<int>(0x84E89F35C5AA89EE); }
static Any _0xB6BED3AD512E0E5E() { return invoke<Any>(0xB6BED3AD512E0E5E); }
static void NETWORK_HANDLE_FROM_MEMBER_ID(char* memberId, int* networkHandle, int bufferSize) { invoke<Void>(0xFCD2AE5FE6E8F557, memberId, networkHandle, bufferSize); }
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0x2663C076C8451305, entity); }
static BOOL _0xF9485E86162C7515(Any p0, Any* p1) { return invoke<BOOL>(0xF9485E86162C7515, p0, p1); }
static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(int* player) { return invoke<BOOL>(0x82C57D04FE3EAC10, player); }
static BOOL _0x5C63F6D22ED70553(int netId) { return invoke<BOOL>(0x5C63F6D22ED70553, netId); }
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0x58B17A0EAF0D7404); }
static void _0xC4B31C0954A8F9F9() { invoke<Void>(0xC4B31C0954A8F9F9); }
static void _0xBDCA9E4A0512557() { invoke<Void>(0xBDCA9E4A0512557); }
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0x46979BF7DA499D4E, timeA, timeB); }
static void _0x7DD1D0FDE55308CC(BOOL p0) { invoke<Void>(0x7DD1D0FDE55308CC, p0); }
static BOOL _0x2757D9F613280C33(Any p0) { return invoke<BOOL>(0x2757D9F613280C33, p0); }
static Any _0x95105131A674D83A() { return invoke<Any>(0x95105131A674D83A); }
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xA49C63DBD63E39CB); }
static Any NETWORK_HOST_TRANSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x43A0BB01CA59ED39, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0x24C4E2C7A164BCC1, netID); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xFB2C8786A992F5B4, p0, p1, p2); }
static BOOL _0x107FED171739D95B(Any p0) { return invoke<BOOL>(0x107FED171739D95B, p0); }
static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoke<int>(0xD81B83309CFE36FF); }
static Any _0x1F5E52120427F17() { return invoke<Any>(0x1F5E52120427F17); }
static void _0xB6C27187B90D3647(BOOL p0) { invoke<Void>(0xB6C27187B90D3647, p0); }
static Any _0x7929A7DB5322C004() { return invoke<Any>(0x7929A7DB5322C004); }
static BOOL _0xA0004878D2804F73(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xA0004878D2804F73, p0, p1, p2, p3); }
static int _GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xFAC0FD9BE1542948, p0); }
static void _0x18D172329DB7F2E3(Ped ped, float x, float y, float z, float p4) { invoke<Void>(0x18D172329DB7F2E3, ped, x, y, z, p4); }
static void _0xD3C0D2AF83B99FEE(int netID, Player player, BOOL p2) { invoke<Void>(0xD3C0D2AF83B99FEE, netID, player, p2); }
static Any _0x6C8E92D4F56B150E() { return invoke<Any>(0x6C8E92D4F56B150E); }
static BOOL _0x6B021144457BD302(Any p0) { return invoke<BOOL>(0x6B021144457BD302, p0); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* p0) { return invoke<BOOL>(0x6F23B51BED7A4DC8, p0); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL(char* tunableContext, char* tunableName) { return invoke<BOOL>(0x37470E93AB4ABC08, tunableContext, tunableName); }
static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0x7F5A6CAF4DE98487, p0); }
static void _0xE72DBDD316E7E8E3(BOOL p0) { invoke<Void>(0xE72DBDD316E7E8E3, p0); }
static Any NETWORK_CLAN_GET_MEMBERSHIP_COUNT(Any* p0) { return invoke<Any>(0x2B4B27C744853A64, p0); }
static void _0x3E1E84B58E6C89(Any* globalPtr) { invoke<Void>(0x3E1E84B58E6C89, globalPtr); }
static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0x7B0C302F4888A894); }
static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, Any* timeStructure) { invoke<Void>(0x107824C42A26C591, unixEpoch, timeStructure); }
static Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<Any>(0x233AF2DB663CF21D); }
static void _0x365A456B9FA1DB27(Player p0, float* p1, float* p2) { invoke<Void>(0x365A456B9FA1DB27, p0, p1, p2); }
static BOOL _0x4FDDFB280457073C(Any p0) { return invoke<BOOL>(0x4FDDFB280457073C, p0); }
static BOOL _0x34598392CB66EAED(Any p0, Any p1) { return invoke<BOOL>(0x34598392CB66EAED, p0, p1); }
static BOOL _GET_MP_LOADING_STATE(int* loadingState) { return invoke<BOOL>(0x6DA4D23E8957F30A, loadingState); }
static void _0xE138C5096858AA4C(BOOL p0) { invoke<Void>(0xE138C5096858AA4C, p0); }
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xC57E4CFEDD3D9A7D); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0x64F64501208F8844); }
static BOOL _0xFB10271CAE0DFA33(Any p0) { return invoke<BOOL>(0xFB10271CAE0DFA33, p0); }
static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(ScrHandle* netHandle) { return invoke<BOOL>(0x5363E9DA9285526E, netHandle); }
static void _0xC4E5B10A8ADCBF8B() { invoke<Void>(0xC4E5B10A8ADCBF8B); }
static Any _0x60D8EB46DE43B0C3(Any p0) { return invoke<Any>(0x60D8EB46DE43B0C3, p0); }
static Any _0xEF8330455EA5D495() { return invoke<Any>(0xEF8330455EA5D495); }
static Any _0xD60B5D13370F71D9() { return invoke<Any>(0xD60B5D13370F71D9); }
static Any _0x4F0B183318E7854C(Any p0) { return invoke<Any>(0x4F0B183318E7854C, p0); }
static void _0x94EA02B7AB1259B(Any p0, Any p1) { invoke<Void>(0x94EA02B7AB1259B, p0, p1); }
static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0x52E0CABEEF3E4CB3, vehicle); }
static Any _0xD954C1579A5BCB75() { return invoke<Any>(0xD954C1579A5BCB75); }
static BOOL _0xA68EEF5FA3062966(Any* p0) { return invoke<BOOL>(0xA68EEF5FA3062966, p0); }
static Any _0x6575FF13E108C3C7() { return invoke<Any>(0x6575FF13E108C3C7); }
static void _0x45F84DE6BAF3B987(Any p0) { invoke<Void>(0x45F84DE6BAF3B987, p0); }
static void RESERVE_NETWORK_MISSION_PEDS(int p0) { invoke<Void>(0xD76663230247F023, p0); }
static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x8A84B429E389EEFD, entity); }
static BOOL _0x5857379D90D46555(Any* p0, Any* p1) { return invoke<BOOL>(0x5857379D90D46555, p0, p1); }
static void _0xE7F2E5B14CF1D9A6() { invoke<Void>(0xE7F2E5B14CF1D9A6); }
static BOOL SET_BALANCE_ADD_MACHINES(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xF03F58AF5794C005, p0, p1, p2); }
static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0x27C9C05A6B4E58D2, player); }
static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0x2B2A254BA30EBC33, p0, maxPlayers); }
static Any _0x3916E21A477A73E0() { return invoke<Any>(0x3916E21A477A73E0); }
static void _0xE61CCCA5BC5F8EC4() { invoke<Void>(0xE61CCCA5BC5F8EC4); }
static Any _0x5B6DDAD35A20513B() { return invoke<Any>(0x5B6DDAD35A20513B); }
static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xA14C6F71D17403CE, toggle); }
static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0x7388D745D5DF6F8, friendIndex); }
static Any _0xA6ADA372B73F2EB8(Any p0, Any p1) { return invoke<Any>(0xA6ADA372B73F2EB8, p0, p1); }
static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(Any* p0) { return invoke<BOOL>(0xE972DF9826E6CF63, p0); }
static void _0x2077065D9A5075D3(Any p0, BOOL p1) { invoke<Void>(0x2077065D9A5075D3, p0, p1); }
static int _0x2FC415A5C4BD70D3(Player player) { return invoke<int>(0x2FC415A5C4BD70D3, player); }
static BOOL CAN_REGISTER_MISSION_PEDS(Any p0) { return invoke<BOOL>(0xC0FA8416DA08599F, p0); }
static void _0xF8B9424B2072089F() { invoke<Void>(0xF8B9424B2072089F); }
static Any _0xB8808EF062A14AEF() { return invoke<Any>(0xB8808EF062A14AEF); }
static Any _0x1353F0CABAE3979F() { return invoke<Any>(0x1353F0CABAE3979F); }
static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0x34BB21E7BEAD2D5A, netHandle); }
static BOOL _0x1E052CAC51E6AC90(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x1E052CAC51E6AC90, p0, p1, p2, p3); }
static Any _0xF6CBC32F5D0A2A74(Any p0) { return invoke<Any>(0xF6CBC32F5D0A2A74, p0); }
static void _0xF76A2B9023CC90F4(Any p0, BOOL p1) { invoke<Void>(0xF76A2B9023CC90F4, p0, p1); }
static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xD9545E656AC42B18, netHandle); }
static char* _GET_ROOT_CONTENT_ID(Any p0) { return invoke<char*>(0xA2461EDFF244BD0B, p0); }
static BOOL _0x71211F44D104CAF6(int p0) { return invoke<BOOL>(0x71211F44D104CAF6, p0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xAB7F6896ED127321, p0, p1); }
static Any _0x414541CE7F30DB89() { return invoke<Any>(0x414541CE7F30DB89); }
static BOOL _0x28F392BEF81E2273(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x28F392BEF81E2273, p0, p1, p2, p3); }
static void _0x136AE2539F7444D3(BOOL p0) { invoke<Void>(0x136AE2539F7444D3, p0); }
static BOOL _0xA21CA41D9F032EB1(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xA21CA41D9F032EB1, p0, p1, p2); }
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0x47A8A0BF2961498, netScene); }
static void _0x70ADBA840A85A2C7() { invoke<Void>(0x70ADBA840A85A2C7); }
static Any _0x3CDC935268CCE981() { return invoke<Any>(0x3CDC935268CCE981); }
static BOOL _0xD8DEE0DDDACA354(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xD8DEE0DDDACA354, p0, p1, p2, p3); }
static Any _0x7042F6678CD32770() { return invoke<Any>(0x7042F6678CD32770); }
static void _0x8E676A7A2DBCF9AD(BOOL p0) { invoke<Void>(0x8E676A7A2DBCF9AD, p0); }
static Any _0x3F921467E4545B06() { return invoke<Any>(0x3F921467E4545B06); }
static Any _0xC332AB6157EBDACB() { return invoke<Any>(0xC332AB6157EBDACB); }
static Any _0x7033E150466534A4(Any* p0) { return invoke<Any>(0x7033E150466534A4, p0); }
static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<Void>(0xCFFB6D16A5476295); }
static BOOL _0xD51F5201A4150360(Any* p0, Any p1, BOOL p2, Any* p3) { return invoke<BOOL>(0xD51F5201A4150360, p0, p1, p2, p3); }
static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH_FAIL_VAL(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0x24B9F7382B89DD9A, tunableContext, tunableName, defaultValue); }
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0x51BB32E124264B0F, p0); }
static BOOL _0x2CE3609210ACDFF4(Entity entity) { return invoke<BOOL>(0x2CE3609210ACDFF4, entity); }
static Any _0x88DFE9A040BA3A3D() { return invoke<Any>(0x88DFE9A040BA3A3D); }
static Any NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0xF3A72D84ED8D41DB); }
static Any _0xC1050669F0943205() { return invoke<Any>(0xC1050669F0943205); }
static char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(int* playerHandle) { return invoke<char*>(0x82F5EFF659AB9E66, playerHandle); }
static Any _0x206F6AD5CFF9B8B0() { return invoke<Any>(0x206F6AD5CFF9B8B0); }
static Any _0x31D370CF6BE93ABF() { return invoke<Any>(0x31D370CF6BE93ABF); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP(Any* p0, Any* p1, Any p2) { return invoke<BOOL>(0x37FB8421146904C8, p0, p1, p2); }
static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0x9BF672D623B0E2A6); }
static void _0x2AA14F114AC56462(Any p0) { invoke<Void>(0x2AA14F114AC56462, p0); }
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* p0) { invoke<Void>(0x870909CD10836C0, p0); }
static void _0x4AF18722FE9522F2(Any p0) { invoke<Void>(0x4AF18722FE9522F2, p0); }
static Any _0x788FF1A5709D8984(Any p0) { return invoke<Any>(0x788FF1A5709D8984, p0); }
static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0x92CB7725500E696A); }
static void _0xCC15497218519956(Any p0) { invoke<Void>(0xCC15497218519956, p0); }
static Any _0x568661A0D07B22AB(BOOL p0) { return invoke<Any>(0x568661A0D07B22AB, p0); }
static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0x2B28BD63122A8312, timeA, timeB); }
static BOOL NETWORK_HAS_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0x224E1A81F9C11C95, doorID); }
static BOOL FILLOUT_PM_PLAYER_LIST(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x1CDD160CAD4D36C8, p0, p1, p2); }
static void NETWORK_SET_TALKER_PROXIMITY(float p0) { invoke<Void>(0x78A3CC62310F7A08, p0); }
static BOOL _0xACA001EEA1E1F3C(Any* p0) { return invoke<BOOL>(0xACA001EEA1E1F3C, p0); }
static char* _GET_CONTENT_USER_ID(int p0) { return invoke<char*>(0xC2F143A8DD0D2A43, p0); }
static void _0xD584FDE6A28E48B6(Entity entity) { invoke<Void>(0xD584FDE6A28E48B6, entity); }
static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int NetworkID) { return invoke<Entity>(0xC9584D16F598AF0, NetworkID); }
static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(int* playerHandle) { return invoke<Player>(0xB90971D5077FD42A, playerHandle); }
static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(int* p0) { return invoke<BOOL>(0x6683F2299FA7C267, p0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0x44DA7E4932EEE0DE, p0, p1); }
static BOOL _0xB3A7F120863640B2() { return invoke<BOOL>(0xB3A7F120863640B2); }
static Any _0x159C3CA452DB4B94() { return invoke<Any>(0x159C3CA452DB4B94); }
static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xDF9A31A7CC12647E, p0); }
static int _0xBC7F57BA55218CA2() { return invoke<int>(0xBC7F57BA55218CA2); }
static void _0x4709FC811C906100(Any p0, Any* p1, Any* p2) { invoke<Void>(0x4709FC811C906100, p0, p1, p2); }
static void _0x6028B50D39E343D5(Any p0, Any* p1) { invoke<Void>(0x6028B50D39E343D5, p0, p1); }
static void _0x1F3F4C908109D714(BOOL p0) { invoke<Void>(0x1F3F4C908109D714, p0); }
static void _0x89FB9932EBE6564F(BOOL p0) { invoke<Void>(0x89FB9932EBE6564F, p0); }
static BOOL _0x520870A8EBD0D06D(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x520870A8EBD0D06D, p0, p1, p2); }
static Any _0xBD04AB74EEFA396() { return invoke<Any>(0xBD04AB74EEFA396); }
static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0x911BD1C30CE29F66); }
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x1E21994267AA5168, p0, p1); }
static BOOL _0x18FB4D934DB459EE(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0x18FB4D934DB459EE, p0, p1, p2); }
static Any NETWORK_LEAVE_TRANSITION() { return invoke<Any>(0xAAAAC6B629456D08); }
static Any _0xBAF85A4B1D599675() { return invoke<Any>(0xBAF85A4B1D599675); }
static Any _0x6A4E9C9494B3AE20() { return invoke<Any>(0x6A4E9C9494B3AE20); }
static Any _0xB91DCE0B50DE1389(Any p0) { return invoke<Any>(0xB91DCE0B50DE1389, p0); }
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL p1) { invoke<Void>(0x455C37AF8B5BD5B8, netID, p1); }
static void NETWORK_HANDLE_FROM_FRIEND(Any p0, Any* p1, Any p2) { invoke<Void>(0x8EFD01569E777098, p0, p1, p2); }
static Any _0x6BF802D7F4BAE5FF() { return invoke<Any>(0x6BF802D7F4BAE5FF); }
static BOOL _0x816235BF16CB468D(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x816235BF16CB468D, p0, p1, p2, p3); }
static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xF74DE4C99A0C4ECD, toggle); }
static int _0x4C20005987D370CA(Any* p0, Any p1) { return invoke<int>(0x4C20005987D370CA, p0, p1); }
static BOOL _NETWORK_SESSION_ARE_PLAYERS_VOTING_TO_KICK(Player player) { return invoke<BOOL>(0xA79F370D3BEE7176, player); }
static Any _0xC6177871BD407C99() { return invoke<Any>(0xC6177871BD407C99); }
static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x9449948D298192D0, p0, p1, p2, p3); }
static void NETWORK_SET_ENTITY_CAN_BLEND(Any p0, BOOL toggle) { invoke<Void>(0xB383DFBDF71E71B2, p0, toggle); }
static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xCE032A7A27CEE81C); }
static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xBB4FAC4BA02ED087, netHandle); }
static void _0x4286CBC34E5A3986() { invoke<Void>(0x4286CBC34E5A3986); }
static BOOL IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x8CB13C77D6DDED64, p0, p1, p2); }
static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x116496AC98D7A236, p0, p1, p2, p3, p4); }
static Any _0xCACE2139BB52BE2B() { return invoke<Any>(0xCACE2139BB52BE2B); }
static void NETWORK_HANDLE_FROM_USER_ID(char* userId, int* networkHandle, int bufferSize) { invoke<Void>(0x8A34069145D90300, userId, networkHandle, bufferSize); }
static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0x6498C1F5F17A9DE6); }
static void _0x932D28C31049A591(Any p0, Any p1) { invoke<Void>(0x932D28C31049A591, p0, p1); }
static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0x89DAD225CD18A8D4, timeA, timeB); }
static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xE2418A9485ECC47, entity, p1, p2); }
static Any _0x8C4034F44A86E92D(Any p0) { return invoke<Any>(0x8C4034F44A86E92D, p0); }
static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* p0) { return invoke<BOOL>(0x4DCC0AC2465BB6E9, p0); }
static Any NETWORK_GET_PRESENCE_INVITE_ID(Any p0) { return invoke<Any>(0xBD3F8AF4FE4D8250, p0); }
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x65349EC907C95F59, p0, p1, p2); }
static void _0x864778F3559BE018() { invoke<Void>(0x864778F3559BE018); }
static Any SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetID, BOOL DoesExist) { return invoke<Any>(0x4F7D17B17C66872A, NetID, DoesExist); }
static Any _0xB0ED650B7DC3072D() { return invoke<Any>(0xB0ED650B7DC3072D); }
static char* NETWORK_GET_FRIEND_NAME(Player player) { return invoke<char*>(0xC66FB17100455AF9, player); }
static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0x471E68424890A745, entity); }
static BOOL USING_NETWORK_WEAPONTYPE(Any p0) { return invoke<BOOL>(0xD1FDB2FFD9916CB7, p0); }
static int _NETWORK_GET_RANDOM_INT_IN_RANGE(int rangeStart, int rangeEnd) { return invoke<int>(0xBCE459294ADA8D8, rangeStart, rangeEnd); }
static BOOL _NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunbaleContext, Hash tunableName) { return invoke<BOOL>(0x2278B01D299D975, tunbaleContext, tunableName); }
static BOOL _0xC3083815C8317B10(Any p0) { return invoke<BOOL>(0xC3083815C8317B10, p0); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(char* tunableContext, char* tunableName, float* value) { return invoke<BOOL>(0x99414D5D66CEF125, tunableContext, tunableName, value); }
static void NETWORK_SESSION_GET_INVITER(Player* outPlayerHandle) { invoke<Void>(0x511CD7ED2DDEFB94, outPlayerHandle); }
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x92BBD6FED9461D24, p0); }
static BOOL _0x5A1D67DA03AA7F06(Any p0) { return invoke<BOOL>(0x5A1D67DA03AA7F06, p0); }
static void _0xDBCFF0F7F4B6A1C2(Any p0, Any p1) { invoke<Void>(0xDBCFF0F7F4B6A1C2, p0, p1); }
static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<Void>(0xF985F57D42597DE6, Hours, Minutes, Seconds); }
static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0x5234A19AE50FC916, player); }
static void NETWORK_GET_LOCAL_HANDLE(int* networkHandle, int bufferSize) { invoke<Void>(0x7668B5E4D39E993, networkHandle, bufferSize); }
static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xCBD3DDB204E8F478); }
static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* p0) { return invoke<BOOL>(0xE1E628DF46666635, p0); }
static void _0x956CD1FBB4159389() { invoke<Void>(0x956CD1FBB4159389); }
static Any _0xAC202A6C145E336A() { return invoke<Any>(0xAC202A6C145E336A); }
static BOOL _NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0x7D1FE381AF12208B, tunableContext, tunableName); }
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, Any p4, Any p5) { invoke<Void>(0xD287EC81A55D8BE5, x, y, z, heading, p4, p5); }
static void NETWORK_BAIL_TRANSITION() { invoke<Void>(0x1C36A9184FF8BB15); }
static Any _0xA7C5302AD4665E8B() { return invoke<Any>(0xA7C5302AD4665E8B); }
static void _0xAA97BF5BB1A32139(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xAA97BF5BB1A32139, p0, p1, p2); }
static void _0x8AF8942AE7835AB0() { invoke<Void>(0x8AF8942AE7835AB0); }
static BOOL _0xFA8DBD81CD2C1977(Any p0) { return invoke<BOOL>(0xFA8DBD81CD2C1977, p0); }
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(Any p0, Any p1) { invoke<Void>(0xE2567B95B1938396, p0, p1); }
static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x97A2771E44E65966, p0, p1, p2); }
static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0x1898FCC29C3CFC90, p0, maxPlayers); }
static Any _0xF88F96DA990E8684() { return invoke<Any>(0xF88F96DA990E8684); }
static BOOL NETWORK_CLAN_PLAYER_GET_DESC(ScrHandle* description, int p1, ScrHandle* netHandle) { return invoke<BOOL>(0xCA2992FB3936A00C, description, p1, netHandle); }
static void _0x3219F3928F65AEE2(Any p0, Any p1) { invoke<Void>(0x3219F3928F65AEE2, p0, p1); }
static BOOL _0xA01C55F2A3C733B7() { return invoke<BOOL>(0xA01C55F2A3C733B7); }
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0x80CEB6B3448C003B, p0); }
static void NETWORK_SET_VOICE_CHANNEL(Any p0) { invoke<Void>(0xF439E1A1B75838AB, p0); }
static Any _0xFCF5B1384CF7F32C() { return invoke<Any>(0xFCF5B1384CF7F32C); }
static BOOL NETWORK_REMOVE_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xC21E86FBB67C4444, p0); }
static void _0xCC8D6F8C03B196E8() { invoke<Void>(0xCC8D6F8C03B196E8); }
static void _0xF207DDE7EECD1C9F() { invoke<Void>(0xF207DDE7EECD1C9F); }
static void _0xB0222774F7950C08(Any p0) { invoke<Void>(0xB0222774F7950C08, p0); }
static void _0x19FA22E68BDF96A8(Any p0, BOOL p1) { invoke<Void>(0x19FA22E68BDF96A8, p0, p1); }
static void _0xA1A258B5892C3FC8(Any p0) { invoke<Void>(0xA1A258B5892C3FC8, p0); }
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, char* animDictionary, char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0x49A4FC3565C3789D, entity, netScene, animDictionary, animName, speed, speedMulitiplier, flag); }
static Any _0xDEFAC494553EAB68() { return invoke<Any>(0xDEFAC494553EAB68); }
static BOOL NETWORK_GAMER_HAS_HEADSET(Any* p0) { return invoke<BOOL>(0x1B90BF4056A1F5CB, p0); }
static BOOL _0xFA68EC0B7D1EF7EB() { return invoke<BOOL>(0xFA68EC0B7D1EF7EB); }
static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0x525E7D7FABB6A009); }
static void _0x6BEECC5B002B6FF5(Any* p0, Any p1, Any* p2) { invoke<Void>(0x6BEECC5B002B6FF5, p0, p1, p2); }
static void _0x5D28A7A60C8BF6B1(BOOL p0) { invoke<Void>(0x5D28A7A60C8BF6B1, p0); }
static void _0x100C5A575E1DE3A0(Any p0) { invoke<Void>(0x100C5A575E1DE3A0, p0); }
static BOOL _0xC009FB0DDD3D9458(Any p0) { return invoke<BOOL>(0xC009FB0DDD3D9458, p0); }
static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xB0B9F852223D50B6, timeA, timeB); }
static BOOL _0x7CA707A9E786FF86(Any p0, float p1, float p2, float p3) { return invoke<BOOL>(0x7CA707A9E786FF86, p0, p1, p2, p3); }
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0x732C4E4B41A155BA, toggle); }
static void _0xE905E36C13FC85E4() { invoke<Void>(0xE905E36C13FC85E4); }
static void _0xAA8C55D537E5DF52(BOOL p0) { invoke<Void>(0xAA8C55D537E5DF52, p0); }
static Any _0x2A52778CB45D9EC2() { return invoke<Any>(0x2A52778CB45D9EC2); }
static BOOL _0x667E20310C37836F(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x667E20310C37836F, p0, p1, p2, p3); }
static void _0xCCBA03FC98B21877() { invoke<Void>(0xCCBA03FC98B21877); }
static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xE44F8DFE3AF6BE3, player); }
static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xFCFC83A10CC1474A, p0); }
static void SET_PLAYER_VISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0x630329307A4F1124, p0, p1); }
static void _0x3BB638375088A030(Any p0, Any p1, Any p2) { invoke<Void>(0x3BB638375088A030, p0, p1, p2); }
static Any _0x4FCA24751B56C887(Any p0, Any p1) { return invoke<Any>(0x4FCA24751B56C887, p0, p1); }
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xB627AC7D3D94C584); }
static void _0x7330D546674A4586(Any p0, Any p1) { invoke<Void>(0x7330D546674A4586, p0, p1); }
static void _0xD94F43C18FA6FE8C() { invoke<Void>(0xD94F43C18FA6FE8C); }
static Any _0x48DFBD388D558259() { return invoke<Any>(0x48DFBD388D558259); }
static BOOL _0xEADF4A388FBE5274() { return invoke<BOOL>(0xEADF4A388FBE5274); }
static void _0x73FAB5A88890F8ED(BOOL p0) { invoke<Void>(0x73FAB5A88890F8ED, p0); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0x891C1E7B8A2E2F6B); }
static void _0xAB275B551D6F6226(BOOL p0) { invoke<Void>(0xAB275B551D6F6226, p0); }
static Any _0x98F3B3EF4C9830C9() { return invoke<Any>(0x98F3B3EF4C9830C9); }
static Any _0x9C06F74C7CE749D5() { return invoke<Any>(0x9C06F74C7CE749D5); }
}



namespace NETWORKCASH
{
static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0x36EEF7CACBFCA6C5, amount); }
static void NETWORK_DELETE_CHARACTER(int characterIndex, BOOL p1, BOOL p2) { invoke<Void>(0x824391AEE6D31A51, characterIndex, p1, p2); }
static void NETWORK_EARN_FROM_BOUNTY(int amount, int* playerHandle, Any* p2, Any p3) { invoke<Void>(0xE14E361DAAE244CB, amount, playerHandle, p2, p3); }
static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF6C0FE04D21070CF, amount, p1, p2); }
static Any _0xB9B6167B4EC508E7() { return invoke<Any>(0xB9B6167B4EC508E7); }
static void NETWORK_SPENT_BETTING(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0xD0600428ED83A570, p0, p1, p2, p3, p4); }
static Any PROCESS_CASH_GIFT(Any p0, Any p1, Any p2) { return invoke<Any>(0x28EAC10793B44B48, p0, p1, p2); }
static void NETWORK_SPENT_CASH_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x1AD31CD88D924215, p0, p1, p2); }
static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD7C57EC0547C8720, p0, p1, p2); }
static void _0xAB0E7082E3E6789F(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xAB0E7082E3E6789F, p0, p1, p2); }
static BOOL NETWORK_CAN_BET(Any p0) { return invoke<BOOL>(0xBEC1FC225C5D56DD, p0); }
static void NETWORK_INITIALIZE_CASH(int p0, int p1) { invoke<Void>(0x5126D4DBC3CE8278, p0, p1); }
static void _0xC71FD62294C74BB2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xC71FD62294C74BB2, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0xC10859C5A87428CA(int amount) { invoke<Void>(0xC10859C5A87428CA, amount); }
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xBCBB031B68A73F54, amount); }
static void _0x61C6E2B5CE9F8DA6(Any p0, Any p1) { invoke<Void>(0x61C6E2B5CE9F8DA6, p0, p1); }
static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xCDABAC43D26DE43C, p0, p1, p2); }
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int amount, Player* player) { invoke<Void>(0xC11A1B5516D8225E, amount, player); }
static Any _0x3406CB2A189902E6() { return invoke<Any>(0x3406CB2A189902E6); }
static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xB8E12DD026F89DE6, p0, p1, p2, p3); }
static void _0xE7EAA4EA3524D797(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE7EAA4EA3524D797, p0, p1, p2); }
static void _0x92271C08D7795CE3(Any p0, Any* p1) { invoke<Void>(0x92271C08D7795CE3, p0, p1); }
static void NETWORK_BUY_PROPERTY(float propertyCost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0x804EF4CF930F64B6, propertyCost, propertyName, p2, p3); }
static void _0x10816936EB6AC052(Any p0, Any* p1, Any* p2) { invoke<Void>(0x10816936EB6AC052, p0, p1, p2); }
static void _0xE0A414D7EC12FBC8(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE0A414D7EC12FBC8, p0, p1, p2); }
static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x254DE7AF3C6323F9, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x6FD06F254A08E530, p0, p1, p2); }
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB28079F051619B7F, p0, p1, p2); }
static void _0xCB0D12DA3FC075E3(int p0, char* p1, int p2) { invoke<Void>(0xCB0D12DA3FC075E3, p0, p1, p2); }
static Any _0x62A83CAE7BEE98AC(Any p0) { return invoke<Any>(0x62A83CAE7BEE98AC, p0); }
static BOOL _0x8364E16B13353463(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5) { return invoke<BOOL>(0x8364E16B13353463, p0, p1, p2, p3, p4, p5); }
static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xF5A92521A6B6B8FB, cost, p1, p2); }
static Any _0x1C8607B5EEAFF44() { return invoke<Any>(0x1C8607B5EEAFF44); }
static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3) { invoke<Void>(0x6A900B876706AB1F, amount, victim, p2, p3); }
static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD80B410276FFC42B, p0, p1, p2); }
static Any _0x957B1AC37BA20DD4() { return invoke<Any>(0x957B1AC37BA20DD4); }
static void _0x4B558BD9D1D63911(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x4B558BD9D1D63911, p0, p1, p2, p3); }
static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x29D51EBE2025583C, p0, p1, p2); }
static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x50FEE345D5706F90, p0, p1, p2); }
static BOOL _0x9E39651A212D47E1(Any p0, BOOL p1, BOOL p2) { return invoke<BOOL>(0x9E39651A212D47E1, p0, p1, p2); }
static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x2E3E95EE401070BF, cost, p1, p2); }
static void _0xB1EB55A0FCB3B9EF(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB1EB55A0FCB3B9EF, p0, p1, p2); }
static void NETWORK_EARN_FROM_BETTING(int amount, char* p1) { invoke<Void>(0xF06C1507D154893E, amount, p1); }
static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0x8CF86B6666986C4F, amount, propertyName); }
static void _0xF09CE45FEA4BE521(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF09CE45FEA4BE521, p0, p1, p2, p3); }
static void _0xB0BAC9DDB20CA988(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xB0BAC9DDB20CA988, p0, p1, p2, p3); }
static void _0xE1BE6A76A1E44329(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE1BE6A76A1E44329, p0, p1, p2); }
static void _0xE4DE8A6519CBF201(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE4DE8A6519CBF201, p0, p1, p2); }
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Any p0, Hash VehicleModel, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0x5CFA234D379BE12C, p0, VehicleModel, p2, p3, p4); }
static void _0x3384A152CF9A2F78(Any p0) { invoke<Void>(0x3384A152CF9A2F78, p0); }
static Any _0xAAD9B5BADB2DE4F5(Any p0) { return invoke<Any>(0xAAD9B5BADB2DE4F5, p0); }
static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE8EAFA73AFF3CC09, p0, p1, p2); }
static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x6907619C9E6D209E, p0, p1, p2); }
static Any _0x55DB42552930D007() { return invoke<Any>(0x55DB42552930D007); }
static void _0x855F5510D2C49348(Any p0) { invoke<Void>(0x855F5510D2C49348, p0); }
static BOOL _HAS_ITEM_BEEN_UNLOCKED(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x1D1589333453413, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF388F6E6BA947583, p0, p1, p2, p3); }
static void _0x8241BA38E3DD9DAA(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x8241BA38E3DD9DAA, p0, p1, p2); }
static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB75DD6D3629179E, p0, p1, p2); }
static void _0xADFFBF5E3BD494B8(Any p0) { invoke<Void>(0xADFFBF5E3BD494B8, p0); }
static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x5CA5A82692183513, p0, p1, p2); }
static void NETWORK_EARN_FROM_JOB(int amount, char* p1) { invoke<Void>(0x26ECB9DA7C1D8E6F, amount, p1); }
static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x395FB6930C23F4D8, p0, p1, p2, p3, p4, p5, p6, p7); }
static void _0x4A0C09D2709457B3(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x4A0C09D2709457B3, p0, p1, p2); }
static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x2237FC0AEB649F81, cost, p1, p2); }
static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x9CE585D359577456, p0, p1, p2); }
static BOOL _0xB46E811B45F7E1FF(Any p0, Any p1) { return invoke<BOOL>(0xB46E811B45F7E1FF, p0, p1); }
static Any _0xDF6D04F84AD4D966(Any p0) { return invoke<Any>(0xDF6D04F84AD4D966, p0); }
static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF629D38E05480985, p0, p1, p2, p3); }
static BOOL _0xD0E45C1BB2856FA5(Any p0) { return invoke<BOOL>(0xD0E45C1BB2856FA5, p0); }
static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x1E51761EE8204510, p0, p1, p2); }
static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE9669D96A53A8824, p0, p1, p2); }
static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0x1CFD2163474F0BB9, p0, p1, p2, p3, p4); }
static Any NETWORK_EARN_FROM_PICKUP(int amount) { return invoke<Any>(0x4BF6AEB457E4EA24, amount); }
static void _0x489B4878EF4EFC63(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x489B4878EF4EFC63, p0, p1, p2, p3); }
static void NETWORK_BUY_ITEM(Ped player, Hash item, Any p2, Any p3, BOOL p4, char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xB39A33710C1B6C, player, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
static void _0xC64A207AA53F0689(Any p0) { invoke<Void>(0xC64A207AA53F0689, p0); }
static Any _0x3BCA459C61AE5053(Any p0) { return invoke<Any>(0x3BCA459C61AE5053, p0); }
static void NETWORK_EARN_FROM_IMPORT_EXPORT(Any p0, Any p1) { invoke<Void>(0x309A8D2E84473D36, p0, p1); }
static void NETWORK_REFUND_CASH(int index, char* context, char* reason, BOOL unk) { invoke<Void>(0xE3AFDDEFF85EE07B, index, context, reason, unk); }
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Player* player) { invoke<Void>(0x55536F4DD7C26A7C, amount, player); }
static void _0xE5C5279CAFD166FD(int p0, char* p1, Any* p2) { invoke<Void>(0xE5C5279CAFD166FD, p0, p1, p2); }
}



namespace OBJECT
{
static BOOL _0x18B3DB93D1DCAEF(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0x18B3DB93D1DCAEF, p0, p1, p2, p3); }
static BOOL _0x41D73FA4F72EF964(Any p0) { return invoke<BOOL>(0x41D73FA4F72EF964, p0); }
static void _0xA91C01D8828F1814(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xA91C01D8828F1814, doorHash, p1, p2, p3); }
static void CREATE_MONEY_PICKUPS(float xCoord, float yCoord, float zCoord, int value, int p4, Any p5) { invoke<Void>(0xF1AB859142A2899D, xCoord, yCoord, zCoord, value, p4, p5); }
static Hash _0xB6193CA936B67A65(Pickup pickupHash) { return invoke<Hash>(0xB6193CA936B67A65, pickupHash); }
static void _0x25A3FA2BD9F7C869(Any p0, Any p1) { invoke<Void>(0x25A3FA2BD9F7C869, p0, p1); }
static BOOL _0xF55F77B1ED61134C(Any p0) { return invoke<BOOL>(0xF55F77B1ED61134C, p0); }
static Pickup _CREATE_PORTABLE_PICKUP_2(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Pickup>(0xF7A54541F9BF9CDB, pickupHash, x, y, z, placeOnGround, modelHash); }
static Any _0xF3B4F6345CA33205(Hash doorHash) { return invoke<Any>(0xF3B4F6345CA33205, doorHash); }
static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0x8E183FB8F99DD2D7, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
static Any _0x3C55245495AD9A3D(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return invoke<Any>(0x3C55245495AD9A3D, coords, radius, modelHash, x, y, z, p6, p7); }
static BOOL _0xEBD3D2D9BFC3A327(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xEBD3D2D9BFC3A327, p0, p1, p2); }
static void _0x4EED271738AD9E21(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x4EED271738AD9E21, p0, p1, p2, p3, p4); }
static int GET_PICKUP_COORDS(Any p0) { return invoke<int>(0x3235367129D60ECA, p0); }
static float _0x89F3CBC8CC50D51F(Any p0) { return invoke<float>(0x89F3CBC8CC50D51F, p0); }
static void REMOVE_ALL_PICKUPS_OF_TYPE(Any p0) { invoke<Void>(0xC5D4A6110C33CB20, p0); }
static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xCC0EABB8FAB8D0DE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static Pickup CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Pickup>(0x2293A3AE5AB781DD, pickupHash, x, y, z, placeOnGround, modelHash); }
static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collisionCheck) { return invoke<BOOL>(0xBF1B5C9E1E9E5A85, object, toX, toY, toZ, speedX, speedY, speedZ, collisionCheck); }
static void _0x4744FE1F094DE8BE(float p0) { invoke<Void>(0x4744FE1F094DE8BE, p0); }
static void _0xBEA118EA1A76262C(BOOL p0) { invoke<Void>(0xBEA118EA1A76262C, p0); }
static void REMOVE_PICKUP(Any p0) { invoke<Void>(0x7EAE1191BBEA53F7, p0); }
static void _0x6D5CDEFE441E4E44(float x, float y, float z, int colorIndex) { invoke<Void>(0x6D5CDEFE441E4E44, x, y, z, colorIndex); }
static BOOL _0xF9A8E8787DF0F669(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0xF9A8E8787DF0F669, p0, p1, p2, p3); }
static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0x5EDE06C252535A86, x, y, z, range, p4); }
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xD57406034E1603A, object, toggle); }
static BOOL _0x265B855794ADD1F0(float p0, float p1, float p2, float p3, int modelHash, BOOL p5) { return invoke<BOOL>(0x265B855794ADD1F0, p0, p1, p2, p3, modelHash, p5); }
static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { invoke<Void>(0x7EB966CDEADE0758, doorHash); }
static void _0x50DCB6BC7C9D4046(Any p0) { invoke<Void>(0x50DCB6BC7C9D4046, p0); }
static Any _0x654963B4D0652D61(Any p0) { return invoke<Any>(0x654963B4D0652D61, p0); }
static void _0x79671FB57902EC56(Any p0, BOOL p1) { invoke<Void>(0x79671FB57902EC56, p0, p1); }
static Object GET_PICKUP_OBJECT(Object object) { return invoke<Object>(0x37B8BD5164871A8F, object); }
static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0xA8C993B9F5CB4D92, modelHash, x, y, z, networkHandle, createHandle, dynamic); }
static BOOL _0x7078A05B99628DFC(Any p0) { return invoke<BOOL>(0x7078A05B99628DFC, p0); }
static void DELETE_OBJECT(Object* object) { invoke<Void>(0x7C0FE14555841C1E, object); }
static void SET_TEAM_PICKUP_OBJECT(Any p0, Any p1, BOOL p2) { invoke<Void>(0x541031E675845D3C, p0, p1, p2); }
static BOOL _0x6DEEEFF5ED8E024C(float p0, float p1, float p2, Any p3, Any* p4) { return invoke<BOOL>(0x6DEEEFF5ED8E024C, p0, p1, p2, p3, p4); }
static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xCD73A3A2B60354CB, object); }
static void _0x323370FC49529A13(Any p0, Any p1) { invoke<Void>(0x323370FC49529A13, p0, p1); }
static Hash _0xBE748002295C536A(Pickup pickupHash) { return invoke<Hash>(0xBE748002295C536A, pickupHash); }
static void _0x9142BC6FF567DB85(Any p0, Any p1, BOOL p2) { invoke<Void>(0x9142BC6FF567DB85, p0, p1, p2); }
static float _0x7F040502E93777C2(Hash doorHash) { return invoke<float>(0x7F040502E93777C2, doorHash); }
static void _0x98EA019373875509() { invoke<Void>(0x98EA019373875509); }
static Pickup CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Pickup>(0xA622D6EFF04EDBC4, pickupHash, posX, posY, posZ, p4, value, modelHash, p7, p8); }
static BOOL _0x705570F248002402(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x705570F248002402, p0, p1, p2, p3, p4); }
static void _SET_DOOR_ACCELERATION_LIMIT(Hash doorHash, int limit, BOOL p2, BOOL p3) { invoke<Void>(0x29A7F2256763EE17, doorHash, limit, p2, p3); }
static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, Any p3, Any p4) { return invoke<Vector3>(0x5BE3B45A415255D, x, y, z, p3, p4); }
static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x1C1AFBE2CF0A8050, doorHash, modelHash, x, y, z, p5, p6, p7); }
static void _0x52DE7F47FA1ED6B1() { invoke<Void>(0x52DE7F47FA1ED6B1); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<BOOL>(0x8035D24318B0BC3, p0, p1, p2, p3, p4, p5); }
static void _0x876E5D8E7394130C(Any p0) { invoke<Void>(0x876E5D8E7394130C, p0); }
static void _0x11E5A77701DB020B(Object object, BOOL p1) { invoke<Void>(0x11E5A77701DB020B, object, p1); }
static void SET_PICKUP_REGENERATION_TIME(Any p0, Any p1) { invoke<Void>(0x9B559B9A9E4D2865, p0, p1); }
static void _0x11777047B0DE84F4(BOOL p0) { invoke<Void>(0x11777047B0DE84F4, p0); }
static BOOL HAS_PICKUP_BEEN_COLLECTED(Any p0) { return invoke<BOOL>(0x5D444D90F0D5FA34, p0); }
static BOOL _0x826E745A1D396887(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x826E745A1D396887, p0, p1, p2, p3, p4); }
static void _0xA6EE4437D602E261(Hash p0, BOOL p1) { invoke<Void>(0xA6EE4437D602E261, p0, p1); }
static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0x9436E910E5F9CA2A, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); }
static Any _0xDBF8EC026B0DA8F8(Any p0) { return invoke<Any>(0xDBF8EC026B0DA8F8, p0); }
static Any SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { return invoke<Any>(0x1540C86C2AAFAD3F, object, targettable); }
static BOOL HAS_OBJECT_BEEN_BROKEN(Object object) { return invoke<BOOL>(0x6299D442E6E3AE5F, object); }
static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0x85CDF51DD7146421, object); }
static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0x64FA73A7A44C81F5, objectHash, x, y, z, range); }
static void ATTACH_PORTABLE_PICKUP_TO_PED(Ped ped, Any p1) { invoke<Void>(0x9BC3F49303964FC7, ped, p1); }
static BOOL IS_GARAGE_EMPTY(Any garage, BOOL p1, int p2) { return invoke<BOOL>(0x1616D3D5996D3E4A, garage, p1, p2); }
static void _0xB1BA7C560A73E16E(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB1BA7C560A73E16E, p0, p1, p2); }
static void _0x3B2FD58DB5F8331C(Object object, int paintIndex) { invoke<Void>(0x3B2FD58DB5F8331C, object, paintIndex); }
static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0x8FC46BABCF818990, modelHash, x, y, z, networkHandle, createHandle, dynamic); }
static void _DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float p5, float p6, float p7) { invoke<Void>(0x95071E1E391C92C4, doorHash, x, y, z, locked, p5, p6, p7); }
static void _0xF237245FA596F560(Hash doorHash, float heading, BOOL p2, BOOL p3) { invoke<Void>(0xF237245FA596F560, doorHash, heading, p2, p3); }
static void _0x57EC74844E2451CB(Any p0, float p1, BOOL p2) { invoke<Void>(0x57EC74844E2451CB, p0, p1, p2); }
static void _0xED5F9E73E924F20() { invoke<Void>(0xED5F9E73E924F20); }
static void _0x28AF931629E9EA1E(Hash doorHash, BOOL p1) { invoke<Void>(0x28AF931629E9EA1E, doorHash, p1); }
static void _MARK_OBJECT_FOR_DELETION(Object object) { invoke<Void>(0xB2FA212D612BB449, object); }
static BOOL DOES_PICKUP_EXIST(Any p0) { return invoke<BOOL>(0xB436470ACC226C30, p0); }
static void TRACK_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0x2A22125F53415A48, p0); }
static void _0xC2296572B44F0B98(Object object, BOOL toggle) { invoke<Void>(0xC2296572B44F0B98, object, toggle); }
static Any _0xE933B0ADEB3E80F7(float x, float y, float z, float p3, char* p4) { return invoke<Any>(0xE933B0ADEB3E80F7, x, y, z, p3, p4); }
static void _SET_DOOR_AJAR_ANGLE(Hash doorHash, float ajar, BOOL p2, BOOL p3) { invoke<Void>(0x823647AFDCCB939A, doorHash, ajar, p2, p3); }
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xF643B6F1E4B0B326, p0, p1); }
static void _0xDB3B839DABFC1C1F(Any p0, BOOL p1) { invoke<Void>(0xDB3B839DABFC1C1F, p0, p1); }
static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0x62C3C410FFEFF6CF, x, y, z, radius, hash, p5); }
static BOOL _DOES_DOOR_EXIST(Hash doorHash) { return invoke<BOOL>(0xF677DFDD2122F4F1, doorHash); }
static void _0x17E4E495DA21781(Hash doorHash, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x17E4E495DA21781, doorHash, p1, p2, p3); }
static BOOL IS_DOOR_CLOSED(Hash door) { return invoke<BOOL>(0x595EAB6FF06CD405, door); }
static void _0x4F7BC45BBD7E1575(Any p0, BOOL p1) { invoke<Void>(0x4F7BC45BBD7E1575, p0, p1); }
static void _0xBDC75121BB342756(BOOL p0) { invoke<Void>(0xBDC75121BB342756, p0); }
static void DETACH_PORTABLE_PICKUP_FROM_PED(Ped ped) { invoke<Void>(0x37BA741B54FBF12E, ped); }
static void _0x34D2A5ED39FD121E(Hash doorHash, BOOL p1) { invoke<Void>(0x34D2A5ED39FD121E, doorHash, p1); }
static BOOL DOES_PICKUP_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0x46936E039BC18A71, p0); }
static Any _0xE549DEA9707ED508(Any p0) { return invoke<Any>(0xE549DEA9707ED508, p0); }
static BOOL _0x39665C49F09C5E75(Any p0) { return invoke<BOOL>(0x39665C49F09C5E75, p0); }
static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xE3250749A1141EC2, x, y, z, radius, modelHash, isMission, p6, p7); }
static void _0x9E9D6883606F182B(Object p0, Any p1, BOOL p2) { invoke<Void>(0x9E9D6883606F182B, p0, p1, p2); }
static void _0x51C19B6FED8FA678(Any p0, BOOL p1) { invoke<Void>(0x51C19B6FED8FA678, p0, p1); }
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0x5F7AFD157D2AE6CF, type, x, y, z, locked, heading); }
static BOOL _0x3A7CA3AE404A5B2D(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x3A7CA3AE404A5B2D, p0, p1, p2); }
static void _0x4C03094395EBCED1(Any p0, BOOL p1) { invoke<Void>(0x4C03094395EBCED1, p0, p1); }
static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x74E927B8174B02E9, p0, p1, p2, p3); }
static void SET_OBJECT_PHYSICS_PARAMS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x97EBC863E30F7DBB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xA2D570F4DBAB7E26, type, x, y, z, locked, heading, p6); }
static void _0xB3236E97AF79B50C(Any p0, Any p1) { invoke<Void>(0xB3236E97AF79B50C, p0, p1); }
static void _0xA6B9171A4385E795(Object object) { invoke<Void>(0xA6B9171A4385E795, object); }
static BOOL _IS_PICKUP_WITHIN_RADIUS(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0x88C724196877C5BC, pickupHash, x, y, z, radius); }
static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0x826997589D6EDCC7, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); }
}



namespace PATHFIND
{
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) { invoke<Void>(0x37782C5969C66777, x1, y1, z1, x2, y2, z2, p6); }
static Any _0x1B85DA5A73D7685B(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x1B85DA5A73D7685B, p0, p1, p2, p3, p4, p5); }
static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, Any* unknown1, int* flags) { return invoke<BOOL>(0x94BBFE6F5B663AC9, x, y, z, unknown1, flags); }
static BOOL _0x5B8694CEA5B5F33F(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x5B8694CEA5B5F33F, p0, p1, p2, p3); }
static void _0x342E7ED99505F379(float p0) { invoke<Void>(0x342E7ED99505F379, p0); }
static BOOL _0xA4AC1E7F742F659A(Any p0) { return invoke<BOOL>(0xA4AC1E7F742F659A, p0); }
static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x321183B98180543D, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0x9FCBA0F27BC04F13, x, y, z, vehicle); }
static Any GET_CLOSEST_ROAD(float x, float y, float z, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x53F874E7C513393E, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
static Any _0xED5F844026C08CB7(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xED5F844026C08CB7, p0, p1, p2, p3, p4); }
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0x34EB68F89DCC1D05, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); }
static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0x98FC5491A0C1C7C7, vehicleNodeId); }
static void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x440E2095CD95D710, p0, p1, p2, p3, p4, p5); }
static Any _0x45AF5609288759CB(BOOL p0) { return invoke<Any>(0x45AF5609288759CB, p0); }
static void _0x2F04C01C9650ECF(BOOL p0) { invoke<Void>(0x2F04C01C9650ECF, p0); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return invoke<int>(0xB037821F3D5BFE15, x, y, z, nth, nodetype, p5, p6); }
static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return invoke<BOOL>(0xCCB0AB6033F56041, x, y, z, outPosition, nodeType, p5, p6); }
static void _0xF9DB208FB498DAAB(Any p0) { invoke<Void>(0xF9DB208FB498DAAB, p0); }
static float _0x322520E82A9592BC(float p0, float p1) { return invoke<float>(0x322520E82A9592BC, p0, p1); }
static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return invoke<BOOL>(0x1B0B0F0FBD1869D4, x, y, z, outPosition, unknown1, unknown2); }
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xB93334BCBB12096E, x, y, z, streetName, crossingRoad); }
static float _0x3767CEBF670DD60F(float p0, float p1) { return invoke<float>(0x3767CEBF670DD60F, p0, p1); }
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { invoke<Void>(0xC0643154F51CB1E7, x1, y1, z1, x2, y2, z2, unknown); }
static float _0x1A7F05918AB8AB35(float p0, float p1, float p2, float p3) { return invoke<float>(0x1A7F05918AB8AB35, p0, p1, p2, p3); }
static void ADD_NAVMESH_REQUIRED_REGION(float p0, float p1, float p2) { invoke<Void>(0x963FDDD262945634, p0, p1, p2); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int p9, Any p10, Any p11) { return invoke<BOOL>(0x146F225B31527031, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, p9, p10, p11); }
static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xC296DD42927416B7, p0); }
static void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xAF5911B837600907, p0, p1, p2, p3, p4, p5, p6); }
static BOOL _GET_IS_SLOW_ROAD_FLAG(int nodeID) { return invoke<BOOL>(0xC61F08A082469192, nodeID); }
static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return invoke<Any>(0xACD6C8E078389F4E, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); }
static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0x77812F84643C3C4A, nodeId, outPosition); }
static void SET_IGNORE_NO_GPS_FLAG(BOOL p0) { invoke<Void>(0xE6A08D86A7E0D4A1, p0); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0xEFE2D8C4B92E42FD, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); }
static BOOL LOAD_ALL_PATH_NODES(BOOL keepInMemory) { return invoke<BOOL>(0x59FC11BF4A37E3D5, keepInMemory); }
static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xB9A4968F9922602); }
static Any _0xEBF16A13EEC8F7F7() { return invoke<Any>(0xEBF16A13EEC8F7F7); }
static float _0x6D3D808E2F1D5691(float p0, float p1, float p2, float p3) { return invoke<float>(0x6D3D808E2F1D5691, p0, p1, p2, p3); }
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xF2EC7ABCE01822BF); }
static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, float* heading) { return invoke<BOOL>(0xD43ADEDD6BC834A3, x, y, z, radius, p4, p5, p6, outPosition, heading); }
static BOOL _GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) { return invoke<BOOL>(0x8810C33CA8D476DD, nodeID); }
static void _0x13DFA01855D50ABB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x13DFA01855D50ABB, p0, p1, p2, p3, p4, p5, p6); }
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xFA8320E4116E5079, x1, y1, z1, x2, y2, z2); }
static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xFE3A173C654E331A, x, y, z, onGround, outPosition, flags); }
static Any _0xB2B392E0C931F068() { return invoke<Any>(0xB2B392E0C931F068); }
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) { invoke<Void>(0x696F8E0D51625508, x1, y1, z1, x2, y2, z2, unknown1, unknown2); }
static void _0x5ABAD80109702A5A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x5ABAD80109702A5A, p0, p1, p2, p3, p4, p5, p6); }
static Any _0xA8B9C77AAE1F6A6B() { return invoke<Any>(0xA8B9C77AAE1F6A6B); }
static void SET_GPS_DISABLED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xD96AF65985A7F52B, p0, p1, p2, p3, p4, p5); }
static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xA0E8F31C9D620FF0, p0, p1, p2, p3, p4, p5); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0x73C1A9AD53AC8AD8, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); }
static BOOL _0x8A51433F74CC1603(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x8A51433F74CC1603, p0, p1, p2, p3); }
static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xA487150A6E5396A7, x1, y1, z1, x2, y2, z2); }
static Any GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, Any p3, int* p4, Vehicle* vehicle, float* p6) { return invoke<Any>(0xAB0CE0BF5C3DDBE0, x, y, z, p3, p4, vehicle, p6); }
static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0x1CFFA4F4C25D434F, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return invoke<BOOL>(0x693FFA15DC756427, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
}



namespace PED
{
static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xBB2014A82F672126, ped); }
static void _0xF9340FBDB70251CB(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xF9340FBDB70251CB, p0, p1, p2, p3); }
static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xB5CE85EDF0B7F111, ped, value); }
static Any SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { return invoke<Any>(0x297732C509814F61, ped); }
static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0x17753565205CF66F, ped); }
static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xD6C4009A20B1117A, ped, toggle); }
static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0x1248D23AADA97359, ped, toggle); }
static BOOL _0x9B56FA2AAE737277(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0x9B56FA2AAE737277, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x11865ADDF8F270CA, ped, componentId); }
static BOOL _IS_A_VALID_LIPSTICK_COLOR(int colorID) { return invoke<BOOL>(0xD778CE811EF38AD8, colorID); }
static BOOL _0xA14ED1B9F7DB73A8(Any p0, Any p1, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xA14ED1B9F7DB73A8, p0, p1, p2, p3, p4, p5); }
static void _0xFB85669C4821F80C(Any p0, BOOL p1) { invoke<Void>(0xFB85669C4821F80C, p0, p1); }
static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xB8A4FDD35107E443, ped, responseType); }
static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x838311C5B5F34E30, x, y, z, radius); }
static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xF811B2896C0EBF83, ped, value); }
static void CLEAR_PED_PROP(Ped ped, int propId) { invoke<Void>(0xC1D863DB811A860C, ped, propId); }
static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0x282D43E703B851CE, ped, toggle); }
static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0x5D257DFB3D438E9A, ped); }
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0x7AA5A5EF421F62F0, ped, index); }
static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xD22AAFD3EDB17B31, ped); }
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD0731BD9ADB40FF5, ped, toggle); }
static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xC23650E60FCF4464, toggle); }
static void _0x5F34858AD354F435(Ped ped, float p1) { invoke<Void>(0x5F34858AD354F435, ped, p1); }
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, Any maxFriends) { invoke<Void>(0x979EEAA6B836DCC0, ped, radius, maxFriends); }
static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xAD4827FC1118471C, ped); }
static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xCD36E3B09BC1DCE2, ped); }
static void _0x6790F92177FCA74(Any p0, Any p1) { invoke<Void>(0x6790F92177FCA74, p0, p1); }
static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x30D6008994E431E8, ped); }
static void _0x7D1E2ECEE2B75B6A(Any p0) { invoke<Void>(0x7D1E2ECEE2B75B6A, p0); }
static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xF0422198A211181C, ped); }
static void _0x97A8B61730D37E1E(Any p0, BOOL p1) { invoke<Void>(0x97A8B61730D37E1E, p0, p1); }
static void SET_PED_BLEND_FROM_PARENTS(Any p0, Any p1, Any p2, float p3, float p4) { invoke<Void>(0x7FD59F0EB86590CF, p0, p1, p2, p3, p4); }
static void REMOVE_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x674BC26E2ECE22FE, asset); }
static BOOL _0x7E6C8BF503BE4E2(Ped ped) { return invoke<BOOL>(0x7E6C8BF503BE4E2, ped); }
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0x61A45E3498B18876, value); }
static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xCC511618A85B589F, ped, toggle); }
static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xBAAFEC31E2044589, ped); }
static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xD59C7C590E43DFAB, x1, y1, z1, x2, y2, z2); }
static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0x8819B196C736F174, ped); }
static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x52AB056B2AF7BB53, ped, boneId, offsetX, offsetY, offsetZ); }
static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0x567A46A50ADA5768, ped); }
static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x56F64CC9254C2E4F, ped, flagId, value); }
static void _0x563214C28EB6BAC2(Any p0, Any p1) { invoke<Void>(0x563214C28EB6BAC2, p0, p1); }
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0x92F67BB2E1FA0129, value); }
static Any ADD_SCENARIO_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<Any>(0x84496C593C3C7F04, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_PED_USING_SCENARIO(Ped ped, char* scenario) { return invoke<BOOL>(0x9BADD14C95599D9B, ped, scenario); }
static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0x75A0E7DE4AC1AECF, ped); }
static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFD8E0CFE2F502749, ped, p1, p2); }
static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<Void>(0x2E24188B390A926D, groupId, p1, p2, p3); }
static Any _0x501A5938D611FF6D(Any p0) { return invoke<Any>(0x501A5938D611FF6D, p0); }
static int _GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0x6973C1A0D719A748, ped); }
static void _0xCBBB08E5E4C3BB67(Any p0, BOOL p1) { invoke<Void>(0xCBBB08E5E4C3BB67, p0, p1); }
static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0x9DDE691A0EB16FCA, ped); }
static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0x1670278C5EA08F0C, ped, bone); }
static void _0x8A3D3E40973625F0(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x8A3D3E40973625F0, ped, p1, p2); }
static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0x66A7BF634524C7AD, ped); }
static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int ignore) { return invoke<int>(0xFCB979DB36343941, ped, sizeAndPeds, ignore); }
static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x27816463A22971A0, ped); }
static Any _0x3710A0BD2BC3679B(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x3710A0BD2BC3679B, p0, p1, p2, p3); }
static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(Any p0) { return invoke<BOOL>(0xC2AE0A979757C34A, p0); }
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0x54B387C9D5F973AC, ped, clipSet); }
static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0x5D927D8655264D6C, ped, componentId, drawableId, textureId, paletteId); }
static void _SET_PED_RAGDOLL_FLAG(Ped ped, int flag) { invoke<Void>(0x2A6C678CAF0EFC72, ped, flag); }
static BOOL _0x47C3863B00C4CAF0(Ped ped) { return invoke<BOOL>(0x47C3863B00C4CAF0, ped); }
static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex) { invoke<Void>(0xDF7F8917FD2F6761, ped, propIndex); }
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0x21092DBB624E6BC2, sceneID, entity, boneIndex); }
static void _0x1E7C064045F5EC47(Any p0, float p1) { invoke<Void>(0x1E7C064045F5EC47, p0, p1); }
static BOOL _GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0x29AEFF36AA8B2489, ped, headBlendData); }
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0x474B3C26E202616D, ped, componentId); }
static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0x566E36AAA584D831, ped, sweat); }
static void _0x5ABF8BB98EC00BD1(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x5ABF8BB98EC00BD1, p0, p1, p2, p3); }
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE2B75F7B1B8A5109, p0, p1, p2, p3, p4); }
static void _0x49F0E1F159312FD0(Any p0, float p1) { invoke<Void>(0x49F0E1F159312FD0, p0, p1); }
static void REQUEST_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x751DD3171B7676E6, asset); }
static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0x5723DA3F8C10C270, ped); }
static void SET_PED_STRAFE_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0xAA9F54C842014A10, ped, clipSet); }
static void REQUEST_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xEA202AF56FB0C28C, asset); }
static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xC04A95B53AD7D88C, ped, toggle); }
static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xE8F4420F45AF0566, ped, groupId); }
static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xC5A79C15662B451D, ped); }
static BOOL _IS_PED_PROP_VALID(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<BOOL>(0x1ECF2D2F72A80E20, ped, componentId, drawableId, TextureId); }
static void _0x621368499F16700B(Any p0, BOOL p1) { invoke<Void>(0x621368499F16700B, p0, p1); }
static void _0xAB396A20E11D44BA(Ped ped, BOOL p1) { invoke<Void>(0xAB396A20E11D44BA, ped, p1); }
static void GET_PED_FLOOD_INVINCIBILITY(Ped ped, BOOL p1) { invoke<Void>(0x11F73254F92FBB7, ped, p1); }
static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0x445B38116AE9B615, ped, weaponHash); }
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0x6F10EAC0F46B369A, ped, value); }
static void _0xC13DB4071F6455E5(float p0, float p1, float p2, float p3, float p4, Any p5, float p6, Any p7) { invoke<Void>(0xC13DB4071F6455E5, p0, p1, p2, p3, p4, p5, p6, p7); }
static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xF557B4BDE99A5E64); }
static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0x804F37BBE1FFE251, ped); }
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xB28F8AFCFB90A3D0, pedHandle, groupHandle, toggle); }
static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xA2430F7F283EC7AC, ped, target); }
static void _0x23E3C2AF28851AAD(Any p0, BOOL p1) { invoke<Void>(0x23E3C2AF28851AAD, p0, p1); }
static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0x3CE75187603652E2, p0, p1); }
static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any* p4) { invoke<Void>(0xE24B9AA8FD1D0507, ped, p1, p2, p3, p4); }
static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x62076137A700BDA9, ped, p1); }
static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x1BF35B861C09AFD7, ped, toggle); }
static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any tintIndex) { invoke<Void>(0x7A1E6E254ABA30DA, ped, tintIndex); }
static Any _0x87FBB4407CFF92C7(Any p0, float p1, float p2, float p3, float p4) { return invoke<Any>(0x87FBB4407CFF92C7, p0, p1, p2, p3, p4); }
static void _0x143F17F5447A7E05(Any p0, BOOL p1) { invoke<Void>(0x143F17F5447A7E05, p0, p1); }
static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xE3972E860E6962F9, ped, value); }
static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0x7C2070521268C99E, ped); }
static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0x613A0049DABAE5CC, ped, value); }
static Any _0x9634295B3209E816(Ped ped, Any p1) { return invoke<Any>(0x9634295B3209E816, ped, p1); }
static void _0xA9B1B2F141B94F93(Any p0) { invoke<Void>(0xA9B1B2F141B94F93, p0); }
static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xD8631147183BA3CB, ped); }
static void _0xEFED6B9FF91F059D(Any p0, BOOL p1) { invoke<Void>(0xEFED6B9FF91F059D, p0, p1); }
static void APPLY_PED_DAMAGE_DECAL(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, char* p9) { invoke<Void>(0xCE899A81F1A4A411, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xFCDED4E4C994AA7A, ped); }
static Any _0x94038B2A28E86EBB(Ped ped, int p1, int drawableId, int textureId) { return invoke<Any>(0x94038B2A28E86EBB, ped, p1, drawableId, textureId); }
static Any RESET_PED_VISIBLE_DAMAGE(Ped ped) { return invoke<Any>(0xBC3595A75AA4DEF8, ped); }
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xCABCE9129F76BDC8, ped, angle); }
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0x172DDFA7E07FD5E2, ped, toggle); }
static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0x96459C0B06F15C92, ped, p1); }
static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { invoke<Void>(0xAFC569EFBB254203, ped, p1); }
static Any _0xD0BF3829C5A8019D() { return invoke<Any>(0xD0BF3829C5A8019D); }
static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xD2B9C1CC6FD508DD, ped, toggle); }
static BOOL _0x5B1D70B852ED7E55(Any p0) { return invoke<BOOL>(0x5B1D70B852ED7E55, p0); }
static BOOL CAN_CREATE_RANDOM_PED(Any p0) { return invoke<BOOL>(0x7D8BE6A73D0BB45B, p0); }
static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0x5C9720EC37666AF2, ped, boneId); }
static int GET_PED_MONEY(Ped ped) { return invoke<int>(0x49908D0549C6BAA3, ped); }
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0x5823CACBF33EDC8B, groupHandle, separationRange); }
static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0x157FE609E7A01FC, ped, p1, p2, p3, p4); }
static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xD006CAD65E68A673, ped, evadingEntity); }
static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0x46E196EF4358E599, startImmediately, messageId); }
static void _0x7B9BCEC04D04056E(Ped ped, BOOL p1) { invoke<Void>(0x7B9BCEC04D04056E, ped, p1); }
static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0x73568DC83C1602A8, ped); }
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0x308B1C8C205F39C8, ped, toggle); }
static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x1535027F70F1EBC7, ped, value); }
static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xD71487833C90B456, ped); }
static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xF802E0DD127B3DE9, ped, value); }
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xE63126DE6350F53B, toggle); }
static Any REGISTER_PEDHEADSHOT(Ped ped) { return invoke<Any>(0x5394435225508C72, ped); }
static Any SET_PED_WETNESS_HEIGHT(Ped ped, float height) { return invoke<Any>(0x13D79BF88A8E76BE, ped, height); }
static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xF39D079F823A61C9, ped); }
static Any _0x43BF0C9BA19003AD(Any p0) { return invoke<Any>(0x43BF0C9BA19003AD, p0); }
static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xB053D88278BC2E02, ped); }
static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0x1F0017B996C78B72, ped); }
static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0x3251F555598BA7A6, ped); }
static void _0x27314B4B7D8FC0F7(Ped ped) { invoke<Void>(0x27314B4B7D8FC0F7, ped); }
static BOOL _0x58AD673E3345D0A(Ped ped, int flag) { return invoke<BOOL>(0x58AD673E3345D0A, ped, flag); }
static void APPLY_PED_DAMAGE_PACK(Ped ped, char* damagePack, float damage, float mult) { invoke<Void>(0xF5512BA4C732798, ped, damagePack, damage, mult); }
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xDAB66D94185286D5); }
static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xA69C0C7F5C633BA7, ped, toggle); }
static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xBB67B2E5F2C691F7, ped); }
static void _0xD6217559B8657592() { invoke<Void>(0xD6217559B8657592); }
static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xBD036012AF60D938, ped); }
static void _0xFBFDE29D7B2B9F91(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xFBFDE29D7B2B9F91, p0, p1, p2, p3); }
static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x55AE67E25C3C8024, ped, target); }
static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xD0E4DF7D18463F18, ped, overlayID, index, opacity); }
static void _SET_PED_HEAD_OVERLAY_COLOR(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0x20E5B0386F553B7E, ped, overlayID, colorType, colorID, secondColorID); }
static void _0xF36D3BF9A77FCAA0(Any p0, BOOL p1) { invoke<Void>(0xF36D3BF9A77FCAA0, p0, p1); }
static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0x707BF5DF799AF9CA, ped); }
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xA6CFC59A03E523D1, ped); }
static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0xAEA5D83005D0367D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0x3664C08808E8D0C1, ped); }
static void _SET_PED_HAIR_COLOR(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0x1161542F1ACAE73D, ped, colorID, highlightColorID); }
static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0x2A3F4ACD0DB18011, ped, combatMovement); }
static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0x1FEDE585C0F25C08, ped); }
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0x28E0F4AF294BAAFF, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x68786B8160C2C249, ped, p1, p2, p3, p4, p5); }
static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0x87500AE0A3B98541, ped, p1); }
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0x4190B5CB74D22B31, x, y, z); }
static void _SET_PED_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xC707A7A553E9C82D, ped, index); }
static Any _0xA131FB812E9F22E3(Any p0) { return invoke<Any>(0xA131FB812E9F22E3, p0); }
static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xF1DBF64D75C8327A, groupID, memberNumber); }
static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xCFC4C24E6205B76E, ped); }
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, char* p2) { invoke<Void>(0x1CE64162224261C8, ped, p1, p2); }
static void _0x22CE155E84E299A3(Ped ped, BOOL p1) { invoke<Void>(0x22CE155E84E299A3, ped, p1); }
static float GET_COMBAT_FLOAT(Ped p0, int p1) { return invoke<float>(0x58456A8BAE2CE6B8, p0, p1); }
static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xC793E1D23F0054CD, ped, context); }
static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xECD82034ED52600B, ped); }
static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x58D91178F8617B11, ped); }
static Any _0xEB8AC4765468F895(Any p0) { return invoke<Any>(0xEB8AC4765468F895, p0); }
static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0x1CCBFFE0FB233004, ped); }
static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xEA9F3D2740164867, ped, cannotRemove, helmetFlag, textureIndex); }
static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0x49F1C6CC1AE1979E, ped); }
static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0x846AF7F4E166B47A, ped, canWearHelmet); }
static void _SET_PED_FACIAL_DECORATION(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0x59738F258F64AB8C, ped, collection, overlay); }
static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x7F9BB1C77787740C, ped, toggle); }
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xF77EF95F299A1617, ped, p1); }
static void _0xF016C821DF3F713B(Any p0) { invoke<Void>(0xF016C821DF3F713B, p0); }
static void _0xD2B07242AF3200BB(Any p0, BOOL p1) { invoke<Void>(0xD2B07242AF3200BB, p0, p1); }
static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xCCA5AB2EE473429A, ped); }
static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x17297F499604E052, ped); }
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Any p0, float p1) { invoke<Void>(0x55B67CF32019C166, p0, p1); }
static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0x7465B6D580C79D8E, ped); }
static void _0x950D045449673D1F() { invoke<Void>(0x950D045449673D1F); }
static void _0xC01454D55709FC80(Any p0) { invoke<Void>(0xC01454D55709FC80, p0); }
static void _0x2C9E4A84B567C3CA(Any p0, BOOL p1) { invoke<Void>(0x2C9E4A84B567C3CA, p0, p1); }
static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0x151E21AE4412E876, ped, amount); }
static Any SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { return invoke<Any>(0xA82663A60582A7D7, ped, toggle); }
static Ped _GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0xC4747B96BEBEC53D, groupID); }
static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xF40DABEAD014F84B, ped1, ped2); }
static void _0xA29CC52434FB61F3(Any p0) { invoke<Void>(0xA29CC52434FB61F3, p0); }
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xC01F2030CB497E4E, relationship, group1, group2); }
static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0x65B91EE8DBE89EE8); }
static int _GET_NUM_PARENT_PEDS_OF_TYPE(int type) { return invoke<int>(0x4FC2B4436DBE300E, type); }
static void _SET_PED_DECORATION(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xA2C98E755CC8640E, ped, collection, overlay); }
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0x125B1765DEEECA45, ped, propId); }
static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xDF29E1AF81C00A22, ped); }
static void _0x8572E749479E2CBB(Any p0) { invoke<Void>(0x8572E749479E2CBB, p0); }
static BOOL _IS_A_VALID_BLUSH_COLOR(int colorID) { return invoke<BOOL>(0x52D025C0C10499EC, colorID); }
static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0x841B76F992C06AAC, ped); }
static BOOL IS_PED_IN_COVER(Ped ped, BOOL p1) { return invoke<BOOL>(0x23221A3A5AF3BD3E, ped, p1); }
static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0x571970CEBABBDB90, ped, shootRate); }
static BOOL _0x951C7A5840DD00F3(Any p0) { return invoke<BOOL>(0x951C7A5840DD00F3, p0); }
static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xF2446D1395E95EE2, sceneID); }
static BOOL IS_PED_RESPONDING_TO_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xA980AFE6217EB6EC, p0, p1); }
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x122397F1DCBE804B, ped, p1, p2); }
static Any _0x72FBD85156EB4635(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0x72FBD85156EB4635, p0, p1, p2, p3, p4); }
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x6B8EBAC1C87F6645, ped, toggle); }
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0x9CED62DA8306182C, ped, toggle); }
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xEB87C3A9560BBE50, groupHandle); }
static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xFFD8329ED7A8E20C, ped, toggle); }
static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xE27A9862A41348B4, ped); }
static Any _0x610378C070EF6FB(Ped ped) { return invoke<Any>(0x610378C070EF6FB, ped); }
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0x1784142B2C36786A, modifier); }
static void _0x6219E651117DF3B6(Any p0, BOOL p1) { invoke<Void>(0x6219E651117DF3B6, p0, p1); }
static BOOL _0xE7259122778F5CE3(Ped p0) { return invoke<BOOL>(0xE7259122778F5CE3, p0); }
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xA80E7A66B1A3A429, ped, player, toggle); }
static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xC72D51D19D0ADB20, ped); }
static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x8E6EAC2226EC1711, ped, componentId); }
static BOOL _0x4FC55004AEAC297(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x4FC55004AEAC297, p0, p1, p2, p3, p4); }
static void _0xB1F57C351B295989(Any p0) { invoke<Void>(0xB1F57C351B295989, p0); }
static int _GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) { return invoke<int>(0xA4DF8E301F3483D5, type); }
static void APPLY_DAMAGE_TO_PED(Ped ped, Any damageAmount, BOOL p2) { invoke<Void>(0x827194AAA60D07BD, ped, damageAmount, p2); }
static BOOL _0xA697B7C52DF0C362(Ped ped) { return invoke<BOOL>(0xA697B7C52DF0C362, ped); }
static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xB5FA8A8345578524, ped); }
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0x7EE04CA306E3AD22, sceneID, x, y, z, roll, pitch, yaw, p7); }
static void _0xED36889A0E944F7A(BOOL p0) { invoke<Void>(0xED36889A0E944F7A, p0); }
static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xC3C2D01A8DFFFA48, ped, toggle); }
static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xE2A9D342771F7499, ped, value); }
static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0x81F3A0A27E0F368D, ped, toggle); }
static void SET_PED_ALTERNATE_WALK_ANIM(Any p0, Any* p1, Any* p2, float p3, BOOL p4) { invoke<Void>(0x1E98D800D52AAD7C, p0, p1, p2, p3, p4); }
static BOOL _0x8B9546E15CCA42CC(Any p0, Any p1) { return invoke<BOOL>(0x8B9546E15CCA42CC, p0, p1); }
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0x2C463497D9FB00B0, sceneID); }
static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xF8E2BA35959FB71C, ped); }
static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0x99A6DF927B71E935, ped); }
static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, char* animDict, char* anim) { return invoke<BOOL>(0xCF0BEB890C823EFC, ped, animDict, anim); }
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xBCCEEB0345559696, ped); }
static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x9E35D835B763A5DA, ped); }
static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x6CD95B747FA6FA3A, ped, p1, p2, p3, p4); }
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0x6DA28A1C8F489423, ped, value); }
static BOOL IS_PEDHEADSHOT_READY(int handle) { return invoke<BOOL>(0x5818D1F68D744B23, handle); }
static void SET_PED_FLEE_ATTRIBUTES(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x1545069170501814, ped, p1, p2); }
static void _SET_PED_FACE_FEATURE(Ped ped, int index, float scale) { invoke<Void>(0xC4B1F326A1EAC982, ped, index, scale); }
static void RESURRECT_PED(Ped ped) { invoke<Void>(0xCD32E2492E7C1E28, ped); }
static Any GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<Any>(0x10E731AEE376DB30, ped); }
static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xED8D6EC585921697, ped, shapeMix, skinMix, thirdMix); }
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0x278D6EE3B6820D9B, ped); }
static void _0x1F06AC9510EB7EF8(Any p0) { invoke<Void>(0x1F06AC9510EB7EF8, p0); }
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0x221689C0DCB71BAA, sceneID, phase); }
static BOOL _0x603A4D5250D0D025(Ped ped) { return invoke<BOOL>(0x603A4D5250D0D025, ped); }
static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xE2692D897E546E8D, ped, toggle); }
static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0x593AF352A63B5E3, ped, toggle); }
static void _0xD0975D55421D1CC2(Any p0, BOOL p1) { invoke<Void>(0xD0975D55421D1CC2, p0, p1); }
static void _0xC85E3ABCFEF8B2CA(Ped p0, char* p1) { invoke<Void>(0xC85E3ABCFEF8B2CA, p0, p1); }
static BOOL _0x3A2AFCF7AE8D8943(Ped ped) { return invoke<BOOL>(0x3A2AFCF7AE8D8943, ped); }
static void _0x17137256D51B8B9A(Any p0, Any p1) { invoke<Void>(0x17137256D51B8B9A, p0, p1); }
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0x3172BBAFAF6F7DD, ped, angle); }
static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x7B15F13B2FC3D21, ped, modelHash); }
static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xF4660FE190F693DA, ped); }
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xC64E1C5E2F98A918, ped, angle); }
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xA47280235DE25745, p0, p1); }
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0x1AD2FE409C8C06B3, ped, state); }
static Any SET_PED_ACCURACY(Ped ped, int accuracy) { return invoke<Any>(0xDAF499362B4CEDC5, ped, accuracy); }
static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xA61FCE3E315489B7, ped); }
static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xBBE78FEF8B7469F, groupId); }
static void _0xF94147623DF44CA7(Any p0) { invoke<Void>(0xF94147623DF44CA7, p0); }
static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xF384805745D7A349, ped); }
static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0x225B3357C492A629, ped); }
static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0x9961770283FB23FE, vehicle, pedType, modelHash, seat, networkHandle, pedHandle); }
static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xDE4E030A141765A2, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xCDA4E7364CE84AA7, ped, flagId, p2); }
static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0x1559785845B4C87A, ped); }
static BOOL _0x68BDC284C5E41123(Any p0) { return invoke<BOOL>(0x68BDC284C5E41123, p0); }
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFD796EB036BFBFAF, ped, toggle); }
static void _0x3B26E7598B15C653(Any p0) { invoke<Void>(0x3B26E7598B15C653, p0); }
static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xFB6EC5803E0147E0, ped, entity); }
static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xFF5AA22D2A190ED8, ped); }
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0x8BD4D3FFE41C61E7, ped, p1, p2, p3, p4); }
static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x57ADE64D2E3798F0, ped); }
static void _0x57004E157E39CBD0(Any p0, Any p1) { invoke<Void>(0x57004E157E39CBD0, p0, p1); }
static void _0x8376D61EBFD33C5E(Any p0, Any p1) { invoke<Void>(0x8376D61EBFD33C5E, p0, p1); }
static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, char* woundType) { invoke<Void>(0x48F6A714E3F58926, ped, boneIndex, xRot, yRot, zRot, woundType); }
static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0x33DE4AEEB98762CB, ped, itemSet); }
static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0x4F91014C2442AD41, ped); }
static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xE4F7206742848BAF, ped); }
static BOOL HAS_PED_RECEIVED_EVENT(Any p0, Any p1) { return invoke<BOOL>(0x3BA391CFC751A0E7, p0, p1); }
static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x6D17D97ECD56074A, ped); }
static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xAD5F4D6E874CA818, ped, posX, posY, posZ); }
static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0x1B84667D03ECBD25, x, y, z, xRadius, yRadius, zRadius, pedType); }
static Any _0x477395658B0860A4() { return invoke<Any>(0x477395658B0860A4); }
static void CLEAR_PED_ALTERNATE_WALK_ANIM(Any p0, float p1) { invoke<Void>(0xF850029DD6E0E72D, p0, p1); }
static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, char* action) { invoke<Void>(0x35E648675FC36FAE, ped, p1, action); }
static int GET_PED_PROP_INDEX(Ped ped, int componentId) { return invoke<int>(0xA0ED5DF8C72F1600, ped, componentId); }
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0x23B52F8FC3218B45, toggle); }
static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xC5167D5B1F042CCB, ped); }
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, Any p6) { return invoke<int>(0x239E9E07DB537DC9, x, y, z, roll, pitch, yaw, p6); }
static Entity _0x16ACD022868EBB9B(Ped ped, BOOL p1, BOOL p2) { return invoke<Entity>(0x16ACD022868EBB9B, ped, p1, p2); }
static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0x7920D71DC1C36AAC, ped); }
static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { invoke<Void>(0xC7251A6679BF9807, groupID, unknown, sizeInMembers); }
static void REMOVE_GROUP(int groupId) { invoke<Void>(0xFDD9D4927F98136D, groupId); }
static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0x94550BBD273C93BA, ped); }
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xF344F658A7AAC33B, ped, componentId, drawableId); }
static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0x2C46DCD160283D58, ped); }
static int CREATE_GROUP(int unused) { return invoke<int>(0x460FE8F6607E780E, unused); }
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, char* animDictionary, char* animationName, float p4, BOOL p5) { invoke<Void>(0x9D11AB3EF79453A7, ped, stance, animDictionary, animationName, p4, p5); }
static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0x8F64F1C94CD1AEE6, ped); }
static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xCBE708DF56FAA8AC, ped); }
static void REMOVE_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xB688D9AC142282E3, asset); }
static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xD7F287B940C58445, ped, radius); }
static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach) { invoke<Void>(0x2F228A16D7B61C5F, ped, componentId, drawableId, TextureId, attach); }
static Entity _GET_PED_KILLER(Ped ped) { return invoke<Entity>(0x2DAFD02C8FD38298, ped); }
static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0x48B1F365C6096B72, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0x40CB4787F2506675, ped); }
static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xD9232E9B5AC5D23, ped); }
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x8208FA9170AC8F43, ped, toggle); }
static void _0x10E92122C6E4F52C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x10E92122C6E4F52C, p0, p1, p2, p3); }
static Any _0x6187C4AA869AFAD2(Any p0) { return invoke<Any>(0x6187C4AA869AFAD2, p0); }
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xD8E0068178711901, multiplier); }
static void DELETE_PED(Ped* ped) { invoke<Void>(0xF6ADC11BDB5ECA41, ped); }
static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xDC4A95CDDF52D358, ped, x, y, z, toggle); }
static void UNREGISTER_PEDHEADSHOT(Ped ped) { invoke<Void>(0xDABE58CCA5E17DDC, ped); }
static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0x94DC76C688E7D222, ped, toggle); }
static Any SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { return invoke<Any>(0x5EA32BD6488CEB01, ped, toggle); }
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0x9E50FB39AACF030B, ped); }
static void SET_PED_NAME_DEBUG(Ped ped, char* name) { invoke<Void>(0x87BC6B9F690D1A6A, ped, name); }
static void _0xF3A49D02209D34B(BOOL p0) { invoke<Void>(0xF3A49D02209D34B, p0); }
static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x9A4E2270C2271219, ped, atGetIn); }
static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0x9426D57129B5B113, ped); }
static void _0x7A824975CD6F9602(Any p0, BOOL p1) { invoke<Void>(0x7A824975CD6F9602, p0, p1); }
static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL getLastVehicle) { return invoke<Vehicle>(0xD9FFE8E1642C81E2, ped, getLastVehicle); }
static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0x226F512FA46B0F22, ped, patternHash); }
static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0x5295192B128E62B1, ped, posX, posY, posZ); }
static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xF12B5F9C73EBD42, ped); }
static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0x2471484212D37548, vehicle, returnHandle); }
static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xCD267261D0845BA, ped, groupId); }
static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0x2C314543415CFDEB, ped); }
static BOOL _0x8FE1360A49205BDB(Ped p0, Any* p1) { return invoke<BOOL>(0x8FE1360A49205BDB, p0, p1); }
static Any CLEAR_PED_WETNESS(Ped ped) { return invoke<Any>(0x29678E81E95BAF2, ped); }
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xC578B8FC686912DD, ped, range); }
static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0x52F8C3B16C0177FB, ped, x, y, z, radius, p5, p6); }
static Any _0xC9033D969FB3E3C6(Any p0) { return invoke<Any>(0xC9033D969FB3E3C6, p0); }
static void _0x15891E6632D6A52F(Any p0, char* p1) { invoke<Void>(0x15891E6632D6A52F, p0, p1); }
static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x27B3DE54D214014B, ped); }
static BOOL _0x62E5FF59F6414D79(Any* p0, Any* p1) { return invoke<BOOL>(0x62E5FF59F6414D79, p0, p1); }
static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0x8B16618F631DB43B, group1, group2); }
static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xB093B8A58F3B8B50, ped); }
static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0x3BD6117D6F00B83F, ped, groupId); }
static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x380ECEEC12864B41, ped); }
static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { invoke<Void>(0x7ED3655E5924C6F4, ped, attributeIndex, enabled); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xA8ED9F72DC442242, ped, toggle); }
static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0x281A7048170E1E0C, ped); }
static int _GET_TATTOO_ZONE(Hash collection, Hash overlay) { return invoke<int>(0x8149A1866EC5EC21, collection, overlay); }
static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0x27E38740C39205B2, ped, toggle); }
static int IS_PEDHEADSHOT_VALID(int handle) { return invoke<int>(0xFA327DED74E597D3, handle); }
static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x47CEE19DCF99F00B, p0, p1, p2, p3, p4, p5, p6, p7); }
static void _0xDAC71AC746E159DE(Any p0) { invoke<Void>(0xDAC71AC746E159DE, p0); }
static void _0x4E639AFF8517C295(Any p0) { invoke<Void>(0x4E639AFF8517C295, p0); }
static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0x1C48F76B3D032074, ped, vehicle, atGetIn); }
static BOOL _0xF02282CED76B9840(Ped ped) { return invoke<BOOL>(0xF02282CED76B9840, ped); }
static void _0xA522391B0E7CB61B(Any p0) { invoke<Void>(0xA522391B0E7CB61B, p0); }
static void SET_PED_COWER_HASH(Any p0, char* p1) { invoke<Void>(0xFFF74BB2B7D5AA42, p0, p1); }
static Any _0xC98399F47A7AC247() { return invoke<Any>(0xC98399F47A7AC247); }
static int _GET_PED_HEAD_OVERLAY_VALUE(Ped ped, int overlayID) { return invoke<int>(0x8EC46028944AF8BE, ped, overlayID); }
static Any _0xED704F01835650FD() { return invoke<Any>(0xED704F01835650FD); }
static void _0x1F2BF4683AE3B3CD(Any p0, BOOL p1) { invoke<Void>(0x1F2BF4683AE3B3CD, p0, p1); }
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0x2D459CD7009DE1D0, ped, propId, drawableId); }
static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xF67BC5E4F1C43A4B, driver, aggressiveness); }
static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0x126149F876BC6432, ped, instantly); }
static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xDD5B7E23D882DABD, ped, vehicle); }
static void _0x3A800D360A20D7E1(Any p0, BOOL p1) { invoke<Void>(0x3A800D360A20D7E1, p0, p1); }
static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0x705DFFD1CB9FCA6, ped, amount); }
static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xE366BAD1FAFB1084, ped, heading); }
static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0x138F835BA3602081, ped, p1); }
static Any _0xEFEAE43769B7311F(Any p0) { return invoke<Any>(0xEFEAE43769B7311F, p0); }
static Any SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<Any>(0xCD1D920D0997D5B2, ped, pinned, i); }
static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xFD1519CAB32C4101, ped); }
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0x443E9B037ABA1FEE, ped, hash); }
static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0x38F6653421072183, ped, time1, time2, ragdollType, p4, p5, p6); }
static void SET_PED_MOVEMENT_CLIPSET(Ped ped, char* clipSet, float p2) { invoke<Void>(0x560D2F1EE11E8AE2, ped, clipSet, p2); }
static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xFDDCAD4A466C9A0B, ped, flagId); }
static void _0xCACD394BAEBE3551(Any p0, BOOL p1) { invoke<Void>(0xCACD394BAEBE3551, p0, p1); }
static void _0x970D3C4279C5B36E(Ped ped) { invoke<Void>(0x970D3C4279C5B36E, ped); }
static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0x64708EB51448F86F, ped, toggle); }
static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0x143BE02A1DE009D0, ped); }
static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0x3D33012BA0FA30D4, driver, ability); }
static void _0x273C7CAA66502CBC(float x, float y, float z, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration) { invoke<Void>(0x273C7CAA66502CBC, x, y, z, p3, p4, p5, p6, interiorFlags, scale, duration); }
static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xB996C7DAF4DC2ABF, ped); }
static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x8E2068F94DCE1271, ped, toggle, p2); }
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0x108DC0626D0C8819); }
static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xB9EECE518D30694B, posX, posY, posZ); }
static void _0x9C504DF0F35225C3(Any p0) { invoke<Void>(0x9C504DF0F35225C3, p0); }
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xB25AD590039882A9, ped); }
static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0x1FCC08AE8E31FD6C, groupHash); }
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0x113D3B13A8AE40CF, sceneID, rate); }
static void _0x1385778FE1237147(Any p0, Any* p1) { invoke<Void>(0x1385778FE1237147, p0, p1); }
static BOOL _0xF2FA72F08C164E(Ped ped) { return invoke<BOOL>(0xF2FA72F08C164E, ped); }
static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xF7012774E82BB77A); }
static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0x61BFD26FA7090CEE, ped); }
static BOOL _0xD556ABD08DA3AC70(Ped ped, BOOL p1) { return invoke<BOOL>(0xD556ABD08DA3AC70, ped, p1); }
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x46B4DE77B65BEF0E, ped, toggle); }
static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0x48048F4A57341FB2, ped, toggle); }
static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xF74EBD810C90005, ped); }
static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0x4209353330BDFE40, ped); }
static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xFA5CB09BC1B8EFDF, ped); }
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xDA128C2F38D83BA1, ped, toggle); }
static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0x14979DF2DB70DB9C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, Any team, BOOL toggle) { invoke<Void>(0x1A10668C21BED3AF, ped, team, toggle); }
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xED5347CD6B7B01FA, relationship, group1, group2); }
static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xBE337854BA3BF02C, ped, value); }
static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xABE2848258482F49, ped); }
static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xB2371DA3E98B71D6, ped, helmetFlag); }
static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0x5115862CDC881210, ped, toggle); }
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Any p0) { invoke<Void>(0x8A58A931DA3C1D32, p0); }
static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0x7D77C969FB817825, ped, toggle); }
static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xC908FA7A5EBB2825, ped, flagId, doReset); }
static void _0x11A17D3B7A7CFCA(Any p0, Any p1) { invoke<Void>(0x11A17D3B7A7CFCA, p0, p1); }
static void _0xC3C7CEC2474A183A(Ped ped) { invoke<Void>(0xC3C7CEC2474A183A, ped); }
static void SET_IK_TARGET(Ped ped, int p1, Ped targetPed, int boneLookAt, float x, float y, float z, Any p7, int duration, int duration1) { invoke<Void>(0xEC5DB1C22ABD5F7C, ped, p1, targetPed, boneLookAt, x, y, z, p7, duration, duration1); }
static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0x7059EB35CC53FFC1, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); }
static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xDE9DAB22C39E49CF, ped, mode); }
static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xE863FAD5F8C955CF, ped); }
static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x6CFB9246FC5E92B, ped, toggle); }
static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0x649D8D25B8BE4809, ped, toggle); }
static Any _0x47879A8258AFE758(Any p0, Any p1, Any p2) { return invoke<Any>(0x47879A8258AFE758, p0, p1, p2); }
static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xB0821632434D6AED, ped); }
static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { invoke<Void>(0xE9DE96E168991F, ped, p1); }
static void _0xDE851BF10C540DB2(Any p0) { invoke<Void>(0xDE851BF10C540DB2, p0); }
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xC34A9BDF0C0FAA4, ped, toggle); }
static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xB4EE7A96F8CEF674, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0x71065DDFF8D7744C, ped, hash); }
static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, BOOL p1) { invoke<Void>(0x49A20F75B1327C29, ped, p1); }
static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xE3219DDF4C6ADC02, ped, modelHash); }
static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xB883249F45BB0312, ped, toggle); }
static void _0x3700E6A63660B466(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0x3700E6A63660B466, p0, p1, p2, p3); }
static void _0xD2BE8E2362458531(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xD2BE8E2362458531, p0, p1, p2, p3, p4); }
static void _0x31DEF73B62E1FEF7(Any p0, BOOL p1) { invoke<Void>(0x31DEF73B62E1FEF7, p0, p1); }
static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0x2994FED10F1CB5BC, ped, lookAt); }
static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0x9EA745D8E133A48, ped, p1, p2); }
static void CLEAR_ALL_PED_PROPS(Ped ped) { invoke<Void>(0xFB3B0074392F6686, ped); }
static void _0x19E194DC29FB665C(Any p0) { invoke<Void>(0x19E194DC29FB665C, p0); }
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xBF08937EF5F49072, groupId, formationType); }
static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0x49992E9E27BFF730, ped, amount); }
static void _0x54CE6ECA3C918E61(Any p0, BOOL p1) { invoke<Void>(0x54CE6ECA3C918E61, p0, p1); }
static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0x2AFB3CDBA55341D, ped); }
static int _GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) { return invoke<int>(0x750D47B0DDAB725E, overlayID); }
static int GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) { return invoke<int>(0xE3D50125FB4DA7C7, ped, sizeAndVehs); }
static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xDAA1E30B3CC41528, ped); }
static BOOL _0xAA5C53D20EC07839(Ped ped) { return invoke<BOOL>(0xAA5C53D20EC07839, ped); }
static int _GET_NUM_MAKEUP_COLORS() { return invoke<int>(0x97388927CA69DF6B); }
static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0x30D50F648FBF2BD0, ped, toggle); }
static void _0x691DC846E0F5E6A4(Any p0) { invoke<Void>(0x691DC846E0F5E6A4, p0); }
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x9383B9CF64BA49DB); }
static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0x91D233CD0204A37F, pedType, modelHash, x, y, z, heading, networkHandle, pedHandle); }
static void _0x3D58CA77B5C5C16B(Ped ped, int p1, int p2, int p3) { invoke<Void>(0x3D58CA77B5C5C16B, ped, p1, p2, p3); }
static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xCB2DB1C60D90A116, ped); }
static BOOL IS_PED_FACING_PED(Ped ped1, Player ped2, float angle) { return invoke<BOOL>(0xB1D18B06E0525A9E, ped1, ped2, angle); }
static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x7A0822365847C989, ped, toggle); }
static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, Any* outBone) { return invoke<BOOL>(0xFC6F313676D600DC, ped, outBone); }
static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, char* action) { invoke<Void>(0x7F4F6E605AAF8691, ped, p1, p2, action); }
static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<BOOL>(0xEC0E869119E880D8, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0x12216B244B5F2F3D, sceneID); }
static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0x5EF000E8611AB6E5, ped); }
static void _SET_PED_RESET_RAGDOLL_FLAG(Ped ped, int flag) { invoke<Void>(0x651094DF2D0042DC, ped, flag); }
static void _0xF96CC6C60A8F0A4B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF96CC6C60A8F0A4B, p0, p1, p2, p3, p4); }
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0x5689F25AA4C2F0C6, ped, stance, p2); }
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL loopedState) { invoke<Void>(0x83F6408A7221E25B, sceneID, loopedState); }
static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xA883E04B85E342DB, ped, toggle); }
static char* GET_PEDHEADSHOT_TXD_STRING(int handle) { return invoke<char*>(0x58CA63150E166003, handle); }
static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0x839EB29ED4FE20AA, ped, value); }
static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0x7E227C9815AD64F, ped, multiplier); }
static BOOL _0x58AAF688E12BE1BC(Any p0) { return invoke<BOOL>(0x58AAF688E12BE1BC, p0); }
static void SET_PED_GESTURE_GROUP(Ped ped, Any* p1) { invoke<Void>(0x1AA1E89D4D4B0268, ped, p1); }
static Any GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<Any>(0x8A9FF86042B19232, ped); }
static void _0x787A8A952EBA4D6F(Ped driver, float p1) { invoke<Void>(0x787A8A952EBA4D6F, driver, p1); }
static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xEDEEAD6EB4769103, ped, toggle); }
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xBD230B2B3B0F4DCC, ped, toggle); }
static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0x4C334C07AF5D51CB, ped); }
static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL p1) { return invoke<Vector3>(0xDCD304CD07DD4BB6, ped, p1); }
static BOOL _IS_A_VALID_HAIR_COLOR(int colorID) { return invoke<BOOL>(0x83C586F806349270, colorID); }
static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0x1061092D9407E81F, ped, componentId); }
static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { invoke<Void>(0xF9867932DC1A555E, ped, toggle); }
static void PLAY_FACIAL_ANIM(Ped ped, char* animName, char* animDict) { invoke<Void>(0xCAB6864BEEC318B, ped, animName, animDict); }
static void _CLEAR_PED_FACIAL_DECORATIONS(Ped ped) { invoke<Void>(0x985E72EB4B8B4EC1, ped); }
static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xA7EEDB617B2F8DF1, ped); }
static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x8EDDCCA11A9F2980, ped, componentId); }
static void _0xABBF186F7D1A4E87(Ped ped, BOOL p1) { invoke<Void>(0xABBF186F7D1A4E87, ped, p1); }
static void _0x772098237DA10381(Ped ped, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0x772098237DA10381, ped, p1, p2, p3, p4, p5, p6); }
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xB3BBF60126795AAD, sceneID); }
static BOOL HAS_ACTION_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0xE5DB771CF704AB85, asset); }
static int _GET_NUM_HAIR_COLORS() { return invoke<int>(0x26ACE4C2BF20ACD6); }
static void _0x47E8519B366F80B5(Any p0) { invoke<Void>(0x47E8519B366F80B5, p0); }
static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0x5FD875D66BFD7612, ped); }
static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xF68FFDB5FC6D2D7E, ped, componentId, drawableId, textureId); }
static void _0xC0D197F89E69B8A1(Any p0, BOOL p1, Any p2) { invoke<Void>(0xC0D197F89E69B8A1, p0, p1, p2); }
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xB2D35C97AFEC854B, p0, p1); }
static Any _0xFEF6579758D883E5() { return invoke<Any>(0xFEF6579758D883E5); }
static void _ASSIGN_PLAYER_TO_PED(Player player, Ped ped) { invoke<Void>(0x778FD434CA9C4CA3, player, ped); }
static BOOL HAS_STEALTH_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0x444778FEA0572965, asset); }
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x274E267BED21DC66); }
static int _0x85AE687C7CC4F5AC(Any p0) { return invoke<int>(0x85AE687C7CC4F5AC, p0); }
static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xDABBF89B5BC1AD1B); }
static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xF60A85A497B8F4, ped, target); }
static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any* outTintIndex) { invoke<Void>(0xD8A1B44D50F195F2, ped, outTintIndex); }
static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0x50622B3E6F0A4231, ped, toggle); }
static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xCBCC76AE00C08C09, ped1, ped2); }
static Any _0x758416A3F908C3B6() { return invoke<Any>(0x758416A3F908C3B6); }
static BOOL _0x2485FD7ED5CCA81(Ped ped) { return invoke<BOOL>(0x2485FD7ED5CCA81, ped); }
static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0x6E980D273FB5EE5F, ped, toggle); }
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xBDBBE2B9920C24A7, ped, toggle); }
static void _0xB52F12B8842936C4(Any p0, float p1) { invoke<Void>(0xB52F12B8842936C4, p0, p1); }
static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xC6DE8AE3E1D78D4C, ped, vehicle); }
static Any _0x4A87B94D3F53886F(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x4A87B94D3F53886F, p0, p1, p2, p3); }
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, char* clipset) { invoke<Void>(0x1DB515E69F4F2B30, ped, clipset); }
static void _0xF9DF699CC3E2444(Any p0) { invoke<Void>(0xF9DF699CC3E2444, p0); }
static BOOL _0xAC856BC571EA8AD7(Any p0) { return invoke<BOOL>(0xAC856BC571EA8AD7, p0); }
static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xBFE5E4F12033E3EF, ped); }
static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xB62D753BB9E0FB7, ped, toggle); }
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0x42CFDB2A4591841, ped, toggle); }
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xE03080E2E83BF49E, x1, y1, z1, x2, y2, z2); }
static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xDE53ED26737ADD2A, ped, toggle); }
static Any _0x98A696343CD14091(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x98A696343CD14091, p0, p1, p2, p3); }
static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { invoke<Void>(0xD728E42852AE3D6E, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static Ped CLONE_PED(Ped ped, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0x4438E5CCCC25A384, ped, heading, networkHandle, pedHandle); }
static Any _0x76DDC315BAEA63BB(Any p0) { return invoke<Any>(0x76DDC315BAEA63BB, p0); }
static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xFF270116CA599369, ped, toggle); }
static BOOL _0xD87771CA2558E697(Any p0) { return invoke<BOOL>(0xD87771CA2558E697, p0); }
static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xE96A631EBD20679C, ped, value); }
static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0x52BA23F588AABDDB, ped, textureIndex); }
static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0x291CF15B59806FBD, ped); }
static void _0x852341ED4384D624(Any p0) { invoke<Void>(0x852341ED4384D624, p0); }
static BOOL _0x1B6D4AEEE04D19D6(Any p0) { return invoke<BOOL>(0x1B6D4AEEE04D19D6, p0); }
static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x9B6055629FB6CC23, ped, motionStateHash, p2, p3, p4); }
static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0x1D3964987BED85C6, ped, value); }
static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0x3FD4A3E765FC585D, ped, toggle); }
static void _0x2032A6C3D9248455(BOOL p0) { invoke<Void>(0x2032A6C3D9248455, p0); }
static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xCE9521447147FEB0, ped); }
static Any ADD_RELATIONSHIP_GROUP(char* name, Hash* groupHash) { return invoke<Any>(0x5974EAB5457E93B2, name, groupHash); }
static BOOL _0x62D1DEDA85529997(Any p0) { return invoke<BOOL>(0x62D1DEDA85529997, p0); }
static Any _0x3D091970DABE4DB3() { return invoke<Any>(0x3D091970DABE4DB3); }
static void _0xAA68D31E6C62BDAB(Any p0, BOOL p1) { invoke<Void>(0xAA68D31E6C62BDAB, p0, p1); }
static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0x3154BBB6A49781EB, ped, value); }
static BOOL _0x9A265F46689F7223(Ped p0, Any* p1, Any* p2) { return invoke<BOOL>(0x9A265F46689F7223, p0, p1, p2); }
static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0x48ADB007554104AD, ped); }
static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xBD875C7680C64C56, ped, vehicle, seatIndex); }
static void _0x1CEBEA5D8FA6521(Ped ped) { invoke<Void>(0x1CEBEA5D8FA6521, ped); }
static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xCCF67C329FCA8BCC, ped, p1, p2); }
static Any SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Ped p0) { return invoke<Any>(0xF67151DFE5F974F3, p0); }
static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0x586F22790D5E436F, ped); }
static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xDAD2D5E345696C13, ped, toggle); }
static void _0x18849C5F9FAFA5B0(Ped ped, BOOL p1) { invoke<Void>(0x18849C5F9FAFA5B0, ped, p1); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0xC5B63C25278ACD5B, ped, p1, p2, p3, p4, p5, p6); }
static Any GET_PED_COMBAT_RANGE(Ped ped) { return invoke<Any>(0x64055265D47474C3, ped); }
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0x54413D10D8D947E3, ped, ms); }
static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0x91C2FD50D18141F4, ped); }
static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xD88A50C7359222FC, ped); }
static BOOL _0x586C5B4EFB499437(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x586C5B4EFB499437, p0, p1, p2, p3, p4); }
static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, BOOL p1) { invoke<Void>(0x5CF8AF07785B77B6, p0, p1); }
static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xDA95459038DD8A59, ped); }
static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0x66C6650029892D05, ped); }
static Any _0xB9BB5F616641AEC1(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xB9BB5F616641AEC1, p0, p1, p2, p3); }
static BOOL _0x83DDDBD6A76CE359(Any p0) { return invoke<BOOL>(0x83DDDBD6A76CE359, p0); }
static void _0xE415370974A8A44B() { invoke<Void>(0xE415370974A8A44B); }
static int GET_PED_TYPE(Ped ped) { return invoke<int>(0x1BB008C5D67BC2F3, ped); }
static void _0x7B79B07CCA861755(Ped ped) { invoke<Void>(0x7B79B07CCA861755, ped); }
static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xF590E3BB5E875E2C, ped, combatType, p2); }
static void _0xE6DC41717F4EFCED(float p0, Any p1) { invoke<Void>(0xE6DC41717F4EFCED, p0, p1); }
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, char* animName, char* animDict) { invoke<Void>(0x454843AF288553D, ped, animName, animDict); }
}



namespace PLAYER
{
static void _0x3B9DAEE051AE5E48() { invoke<Void>(0x3B9DAEE051AE5E48); }
static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0x3590A8146209253C, player, model); }
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xE71148ED586F1ED1, multiplier); }
static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xAA06A27BBDCEA1E0, player, team); }
static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xE30C357F61D580D9); }
static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL b2, BOOL b3) { invoke<Void>(0xF4A044F4A372D1F, player, ped, b2, b3); }
static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xE081805B1043BAAF, player, toggle); }
static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player) { return invoke<BOOL>(0x8CAEFCF14EB90271, player); }
static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0x57E0A43D23101D48, player); }
static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xD10DC1D5A05903A2, player); }
static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0x5EFBB8BAB51409A8, player); }
static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0x702DA8E73909DA0E, player); }
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0x490DBC007B1BAE24, player); }
static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0x83D40CC4E43B3657, player, toggle); }
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0x7D4B54E47678A964, player); }
static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, int flags) { invoke<Void>(0xFD6C2FB51B326EC4, player, flags); }
static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xD6F18B5659C17FD, player, entity); }
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xF931B4F3E35A104E, value); }
static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle) { invoke<Void>(0xBE75D6FA9E2BEE86, player, toggle); }
static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0x84650ABD2D2CD368, player); }
static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0x3B3A583ED56B92E4, player); }
static Cam _0x4ED42D8FD5CFED41(Any p0) { return invoke<Cam>(0x4ED42D8FD5CFED41, p0); }
static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1) { invoke<Void>(0xA7449D0879A84B4D, player, p1); }
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0x41A5874D89CC3DCD); }
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xF9C8589CC0ECFE13, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0x6496E089A686F399, player); }
static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x14B5449970A1C2DA, player, wantedLevel); }
static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0x4056514F44BCBB31, player, toggle); }
static Player GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<Player>(0x8C4BD6734BEF3418, player, entity); }
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xE3C29DD77F1A5735, player, range); }
static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0x5931E8AA04B9DAEB, player); }
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xAF521115BA9B9A74, player, modifier); }
static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x8E06E8DFD2B57A05, player); }
static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2) { invoke<Void>(0x1524290CAC120368, player, p1, p2); }
static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xBD144D96BEDFBE06, player, toggle); }
static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xC18916E1C0863FEE, player); }
static void _0x8A08283BBFE01E6(BOOL p0) { invoke<Void>(0x8A08283BBFE01E6, p0); }
static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x3BC80E39565DA04E, player, toggle); }
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xB2758D8199128B65, player, wantedLevel, p2); }
static void _0xAB89AEC25A4331AF(Player player) { invoke<Void>(0xAB89AEC25A4331AF, player); }
static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xEDB589A956C2855F, player); }
static void SPECIAL_ABILITY_RESET(Player player) { invoke<Void>(0x649F091BB9FDEE22, player); }
static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xA3626A14E36A87F3, player, atArresting); }
static BOOL _0xB6F5FDDA6924D174(Player player) { return invoke<BOOL>(0xB6F5FDDA6924D174, player); }
static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0x97FFE53522693832, player, wantedLevel, disableNoMission); }
static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xC542D24D363306EC, player, entity); }
static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0x60E26EC9FF78681B, player, toggle); }
static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1) { invoke<Void>(0x7CBE2B0F3601C340, player, p1); }
static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke<BOOL>(0x37C10326493962AC, player); }
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xA1821193C9C0E56F, player); }
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x364FBA00F3FF4235); }
static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0x6EED86A16F7EA8F2, value); }
static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xE319A8D4D9264966, player); }
static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0x5EBF3ACA83054065, toggle); }
static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0xC834A7C58DEB59B4, player); }
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0x94DC02313D5ADE); }
static Any _0xBBC617778A2D3CA1(Player player) { return invoke<Any>(0xBBC617778A2D3CA1, player); }
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xDAE452D7515031D9, player); }
static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0x78779DB5F29147EE, player, amount, gaitType, speed, p4, p5); }
static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0x170C6E2649B67440, player); }
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x90C010DB9A27428B, player, modifier); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0x9EA4020E0C47B843, player); }
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x7B10715D622AEBA2, player, modifier); }
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char* name, int cleanupFlags) { invoke<Void>(0x41D39DF330FB6B6A, name, cleanupFlags); }
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xD9CFA86FAED4E6E3, player, value); }
static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xE1446F8D3066B67A, player); }
static Player PLAYER_ID() { return invoke<Player>(0x4D29100D094E5511); }
static void _0xB6E80AB62F5E96DB(float x, float y, float z) { invoke<Void>(0xB6E80AB62F5E96DB, x, y, z); }
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x843A46CEACED9DD7); }
static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xF55C9372B9E63070, player); }
static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, float x, float y, float z) { invoke<Void>(0xF11E247CFF0C93C0, player, x, y, z); }
static void _0x81E4787109BC6546(Any p0) { invoke<Void>(0x81E4787109BC6546, p0); }
static Player _0xDB3C25B506898273(int p0) { return invoke<Player>(0xDB3C25B506898273, p0); }
static void _0x11CAF5CE8DDF7E79(Any p0) { invoke<Void>(0x11CAF5CE8DDF7E79, p0); }
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0x7BFA9BB2861624F0, player, toggle); }
static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0x1E27BE1ABA261726, player, toggle); }
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0x802D1AF31F28C4F8, player); }
static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xDEE9BD76C5A6525E); }
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xCCAF0CF6C7537D8D, player, regenRate); }
static void _0x58781FB2AA2EFC25(BOOL p0, ScrHandle p1) { invoke<Void>(0x58781FB2AA2EFC25, p0, p1); }
static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xCFDFFD81BBAF04EC, player); }
static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0x906ED0BF811E1843, player, toggle); }
static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0x2DB75A8F096AB1F1, player); }
static BOOL _0xDF8EB0F0636FDAAA(Player player) { return invoke<BOOL>(0xDF8EB0F0636FDAAA, player); }
static BOOL _0x53D5992539291BDD(Any p0) { return invoke<BOOL>(0x53D5992539291BDD, p0); }
static BOOL _0x72F49BD8A35C5ED(Any p0) { return invoke<BOOL>(0x72F49BD8A35C5ED, p0); }
static void SPECIAL_ABILITY_LOCK(Hash playerModel) { invoke<Void>(0xD50A37AE4C5C9122, playerModel); }
static char* GET_PLAYER_NAME(Player player) { return invoke<char*>(0xD358A441FAC2240C, player); }
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0x3547B74571AF7A52, player, multiplier); }
static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xA002D18710718AE1, player, toggle); }
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xC5B79244BD0EFDF7, player, tintIndex); }
static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xEFD50B252CFE7490); }
static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, BOOL toggle) { invoke<Void>(0xC6627CD8969F3282, player, toggle); }
static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0x8EC8D24274FA3E5F, player, tintIndex); }
static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xC916EBE8DB03130F, player, toggle); }
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0x18E52E74C89F6CB6, player, toggle); }
static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0x99F8EC7215BAE97, player, value); }
static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x102415F9164597E2, player); }
static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x3FB18423318A562B, player, entity); }
static BOOL _IS_PLAYER_CAM_CONTROL_DISABLED() { return invoke<BOOL>(0x453A4AE5C85107DE); }
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0x6A51DEDAF5DF56E2, player); }
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0x6184C9F0AD33DBEB, player, vehicle); }
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0x599E90364038E0C4, player, r, g, b); }
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0x3A89B31372FE7E40); }
static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0xB0B3AFA733DD5B94, achievement); }
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0x6D19E62B3BFD74CE, player); }
static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0x7DA5060D9E6B91C5, player); }
static void SET_PLAYER_CONTROL(Player player, BOOL toggle, int possiblyFlags) { invoke<Void>(0x9F805E4A6F671CEE, player, toggle, possiblyFlags); }
static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x5D707E54C2359852, player, toggle); }
static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xE14B2E6EB7392B5, player); }
static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0x86D2E07CC8452592, player); }
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFBB873C5819EFE40, player, tintIndex); }
static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL unk) { invoke<Void>(0x60BA1E8578C53222, unk); }
static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0x300FBC9A9F898890, player); }
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0x5052369524928380, player, model); }
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x998ABBAD6623E9BD); }
static void RESERVE_ENTITY_EXPLODES_ON_HIGH_EXPLOSION_COMBO(Player player, int p1) { invoke<Void>(0x810BAE16BFB69127, player, p1); }
static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xBF46735BC3D9C3D9, player, difficulty); }
static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player) { invoke<Void>(0x952A7BA90103950, player); }
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xA9A38637698616EF, value); }
static void _0x3C55FFDCC9510E33(Player player) { invoke<Void>(0x3C55FFDCC9510E33, player); }
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xB189B8BC796B5135, player, toggle); }
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0x22B664F1E1F087EC, index); }
static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xEE2F61FCDE91D6C3, player, toggle); }
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2) { invoke<Void>(0xD6BD0ED08BE6549A, player, normalizedValue, p2); }
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0x5D8EFE8EC839A16, player); }
static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0x8F1161B5FCBE1A83, player, p1); }
static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFA58ED035D25531F, player, tintIndex); }
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0x94C76B64A6EC4BE7, multiplier); }
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0xDBD023BE4199BA6C, player, damageAmount); }
static Player GET_PLAYER_INDEX() { return invoke<Player>(0xB927AFB90873B8C1); }
static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xFE6D8754CF502FB5, player); }
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0x566FCA1039F07179, player, multiplier); }
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0x193107EFB9C9FD44, maxWantedLevel); }
static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x809C16697291E03E, player, x, y, z, heading, p5, p6, p7); }
static Any _0x384BE9B6621F0AE(Player player) { return invoke<Any>(0x384BE9B6621F0AE, player); }
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xD449048B2CA4E19B, player, modifier); }
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0x71C65190FE16F77E); }
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xBC7533E8328E416C, player, index); }
static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xE65F0ADC090F906E, player); }
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0x205E75E26F04ADB3, targetMode); }
static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player) { return invoke<BOOL>(0x59695C68D539B21D, player); }
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xB15DDE17CB281F48, player, multiplier); }
static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0x99542B3CBA8A014E, player); }
static void _0xE836A91EC10899AA(float p0) { invoke<Void>(0xE836A91EC10899AA, p0); }
static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0x70841EC2D20AB5A); }
static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0x5BBA6DD7A2E898D6, player); }
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2) { invoke<Void>(0xC0DFC58A502FC048, player, p1, p2); }
static void _0xD851B383B56CD8FC() { invoke<Void>(0xD851B383B56CD8FC); }
static Any _0xFA8322BDBBA2867F() { return invoke<Any>(0xFA8322BDBBA2867F); }
static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0x2612FD04639C180F, player); }
static BOOL _0x5037901AF02CF137(Player player, int p1, BOOL p2) { return invoke<BOOL>(0x5037901AF02CF137, player, p1, p2); }
static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xB1063C2349425DD1, cleanupFlags); }
static void _0xD0D4327CB5C33C15(Player player) { invoke<Void>(0xD0D4327CB5C33C15, player); }
static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<BOOL>(0xD6FCD24FAC19ACBA, achievement); }
static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0x7D2EAD19B9630AC7, duration); }
static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xD91F510CF8623A08, player); }
static BOOL _0x4BF394A19129A9AD(Any p0, Any p1) { return invoke<BOOL>(0x4BF394A19129A9AD, p0, p1); }
static void SET_AREAS_GENERATOR_ORIENTATION(Player player) { invoke<Void>(0x802C0751D1F2BB56, player); }
static void STOP_PLAYER_TELEPORT() { invoke<Void>(0x30EEC387656DB612); }
static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xCC86975461A65A6B, player, toggle); }
static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0x5BAA60E4D9242337, playerModel); }
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0x13F43DE76F8D191E); }
static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0x524AF15206846700, cleanupFlags); }
static void _0x2FFA718F35114C82(Player player) { invoke<Void>(0x2FFA718F35114C82, player); }
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0x2BC181AECD72749C, player, multiplier); }
static void _0x80456FBC922A95B(Player player, BOOL p1) { invoke<Void>(0x80456FBC922A95B, player, p1); }
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0x640715600B7D533A, player, damageAmount); }
static void _0x75B1E2E6D68231EC(Player player, BOOL p1) { invoke<Void>(0x75B1E2E6D68231EC, player, p1); }
static Any SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { return invoke<Any>(0x83613366BD72230, player, toggle); }
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0x3709CB38CF163ACD, player); }
static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xB0B553DD970F7235, player); }
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xBCF4224167AA9E2, player, index); }
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xF01B842BC072843F, player, toggle); }
static void SPECIAL_ABILITY_DEACTIVATE(Player player) { invoke<Void>(0x69C3634DD9DA38D2, player); }
static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xB9D5C7EC289732F1, player); }
static Ped PLAYER_PED_ID() { return invoke<Ped>(0x27D769C59BC9D030); }
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xBF29A4B4AC2AA24C, player, p1, p2, p3, p4); }
static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x31468B47E750A9D1, player, toggle); }
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0x4A3FB4BE0A14981D, player); }
static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xA0E6CCD4DFBA5CBA, player, multiplier); }
static Any _0x866BEA8368D2411E(Player player) { return invoke<Any>(0x866BEA8368D2411E, player); }
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0x7CF9B7DE0021EE78, player, model); }
static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0x983778BC2A02A2F, player); }
static BOOL _0xD3786E31F911B90D(Player player, float p1) { return invoke<BOOL>(0xD3786E31F911B90D, player, p1); }
static void SET_HUD_ANIM_STOP_LEVEL(Player player, BOOL toggle) { invoke<Void>(0x83C94EE6EFFDE2A6, player, toggle); }
static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0x5E91AC2C8CAC699C, player); }
static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0x774840DEC1F0175E, player, p1); }
static BOOL _HAS_PLAYER_TELEPORT_FINISHED(Player player) { return invoke<BOOL>(0xEEFC934DD28BEAC2, player); }
static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xC6861DC0B749762A, player); }
static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xD32A01C5DB1E536A, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0x404FBCE2E02F3CE, player); }
static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xE9BE7D13FC361B64, player, r, g, b); }
static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xBA253B61EF14050B, player, crimeType, wantedLvlThresh); }
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, BOOL p1) { invoke<Void>(0x6894634D81AE020, player, p1); }
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0x15DE8C5A3F55FE98, p0, p1, p2, p3, p4, p5, p6, p7); }
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0x711FB1DF161F5DEE); }
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xFB93A77D93C1ECF5, player, r, g, b); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xF8BD87F4D1FA0B7B, player); }
static BOOL _0x23F4F52B4191B30B(Player player, int p1) { return invoke<BOOL>(0x23F4F52B4191B30B, player, p1); }
static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xCF686CE5A22A148D, player, p1, p2); }
static void SPECIAL_ABILITY_UNLOCK(Hash playerModel) { invoke<Void>(0xFA2635D63271CFDC, playerModel); }
static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0x5EA3D33CA93D854E); }
static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0x3D36DEF64E43A302, player, ped); }
static Any REMOVE_PLAYER_HELMET(Player player, BOOL p2) { return invoke<Any>(0x6E070B4B131F4DBC, player, p2); }
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xF9EE8158D1C706D, player, enabled); }
static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xABADF6A28AE68FFA, player, p1, p2); }
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xCE4B4FF9BBF75C44, id, cleanupFlags); }
static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0x91384D0CBE5CF867, player); }
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xEB1D8D55B4D82D45, wantedLevel); }
static void _0x421872E2D29A2CEB(Player player, BOOL p1) { invoke<Void>(0x421872E2D29A2CEB, player, p1); }
static void _0xD6433B551AB94403(Player player) { invoke<Void>(0xD6433B551AB94403, player); }
}



namespace ROPE
{
static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xFC7D6B4F25305AF3, object, toggle); }
static void START_ROPE_WINDING(Object rope) { invoke<Void>(0x739E0A0B98A0BC2, rope); }
static Any GET_ROPE_LAST_VERTEX_COORD(Object rope) { return invoke<Any>(0xC9D2DE5B3027BAF4, rope); }
static BOOL _0x18A07674438D4380(Object rope) { return invoke<BOOL>(0x18A07674438D4380, rope); }
static void PIN_ROPE_VERTEX(Object rope, int vertex, float x, float y, float z) { invoke<Void>(0x5FDEF246EA8D8640, rope, vertex, x, y, z); }
static void BREAK_ENTITY_GLASS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xA6F31F9C47FF1ADF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static int GET_ROPE_VERTEX_COUNT(Object rope) { return invoke<int>(0x4EDBA5FEFE0FB5D, rope); }
static void _0xE71036D388210223(Any p0, BOOL p1) { invoke<Void>(0xE71036D388210223, p0, p1); }
static void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0x1F8B2D6B668DFBDF, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
static void ATTACH_ROPE_TO_ENTITY(Object rope, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xDC0722E8F2820656, rope, entity, x, y, z, p5); }
static Any UNPIN_ROPE_VERTEX(Object rope, int vertex) { return invoke<Any>(0x4FDB6EEEBC315D7A, rope, vertex); }
static void DELETE_ROPE(Object* rope) { invoke<Void>(0x77C6339208C16E1E, rope); }
static void ROPE_CONVERT_TO_SIMPLE(Object rope) { invoke<Void>(0x8D5DEF8121FA579A, rope); }
static void START_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0x54E69F02CCCA150C, rope); }
static Any SET_DISABLE_BREAKING(Object rope, BOOL enabled) { return invoke<Any>(0x4503AFA5D15FF269, rope, enabled); }
static Any ROPE_UNLOAD_TEXTURES() { return invoke<Any>(0x1CC4A8AA93F57EF0); }
static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xE7CD799CF8963ACB, entity); }
static float _GET_ROPE_LENGTH(Object rope) { return invoke<float>(0xA9449504CC2BC4C3, rope); }
static Vector3 GET_CGOFFSET(Object rope) { return invoke<Vector3>(0x63FC51FFCC6A6129, rope); }
static BOOL _0xE84B9285B4132C57(Any* p0) { return invoke<BOOL>(0xE84B9285B4132C57, p0); }
static Any ROPE_LOAD_TEXTURES() { return invoke<Any>(0x381F0FC522027C4E); }
static Any DELETE_CHILD_ROPE(Object rope) { return invoke<Any>(0xD56AA57949EF28EA, rope); }
static void _0x4BFF599D6EC3260A(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x4BFF599D6EC3260A, p0, p1, p2); }
static void _0x4DE7569907745A98(Any p0, Any p1) { invoke<Void>(0x4DE7569907745A98, p0, p1); }
static void _0x826DB04F6656BF26(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x826DB04F6656BF26, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void DETACH_ROPE_FROM_ENTITY(Object rope, Entity entity) { invoke<Void>(0xC4266E9DCA192C75, rope, entity); }
static void SET_CG_AT_BOUNDCENTER(Object rope) { invoke<Void>(0xEE2C47ECB90DC6EB, rope); }
static Any ROPE_RESET_LENGTH(Object rope, BOOL length) { return invoke<Any>(0xB6BF77709B7039E5, rope, length); }
static void ROPE_SET_UPDATE_PINVERTS(Object rope) { invoke<Void>(0x5D2982D9B78B6F35, rope); }
static void STOP_ROPE_WINDING(Object rope) { invoke<Void>(0xB4475EB18452397F, rope); }
static Any LOAD_ROPE_DATA(Object rope, char* rope_preset) { return invoke<Any>(0x75FE8A1CFE6141E4, rope, rope_preset); }
static void _0xAF20731F1B597DC2(Any p0) { invoke<Void>(0xAF20731F1B597DC2, p0); }
static Any ROPE_FORCE_LENGTH(Object rope, float length) { return invoke<Any>(0xB6F09757E7DA1081, rope, length); }
static void SET_CGOFFSET(Object rope, float x, float y, float z) { invoke<Void>(0xEE59EF55A60CCA75, rope, x, y, z); }
static void _0xE7290F07813CB5D9(Any p0, Any p1) { invoke<Void>(0xE7290F07813CB5D9, p0, p1); }
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xD9F0D8A7E68AF7FA, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
static Object ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<Object>(0x11204F1C9EABA4AC, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
static Any GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return invoke<Any>(0x5783F55691FE74EB, rope, vertex); }
static void SET_DAMPING(Object rope, int vertex, float value) { invoke<Void>(0xA086476583C2A6AD, rope, vertex, value); }
static void ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) { invoke<Void>(0x4BBC4C93647BEE04, rope, toggle); }
static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0x8708D9B1919C4499); }
static BOOL DOES_ROPE_EXIST(Object* rope) { return invoke<BOOL>(0x14038B5D4F44965E, rope); }
static void STOP_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0xBCECC14D985079A0, rope); }
}



namespace SCRIPT
{
static char* _GET_THREAD_NAME(int threadId) { return invoke<char*>(0xBAF779CD297E4913, threadId); }
static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0x1A08C212D91EA8DE); }
static void TERMINATE_THIS_THREAD() { invoke<Void>(0x7C3AA2D27E16E2AD); }
static BOOL _GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0xEE1EAEC68574EF2D); }
static BOOL GET_EVENT_DATA(int p0, int eventIndex, int* eventData, int p3) { return invoke<BOOL>(0xB03A3CBE4F7737B0, p0, eventIndex, eventData, p3); }
static int _GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(Hash scriptHash) { return invoke<int>(0xD32535FA4397160F, scriptHash); }
static int _GET_ID_OF_NEXT_SCRIPT_IN_ENUMERATION() { return invoke<int>(0x9CC42B25DD74DD86); }
static char* GET_THIS_SCRIPT_NAME() { return invoke<char*>(0x3AA961419D971CB2); }
static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xA6C3B54732ED5989, threadId); }
static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0x334FD925982DE56B, toggle); }
static void TRIGGER_SCRIPT_EVENT(Any p0, int* p1, int p2, int p3) { invoke<Void>(0xCE8ECD07286D394D, p0, p1, p2, p3); }
static BOOL _HAS_STREAMED_SCRIPT_LOADED(Hash scriptHash) { return invoke<BOOL>(0xD4D2A6AF6A1D75DC, scriptHash); }
static int GET_NUMBER_OF_EVENTS(int p0) { return invoke<int>(0xDDC2E48CCBA23C1D, p0); }
static void REQUEST_SCRIPT(char* scriptName) { invoke<Void>(0xA51826E3518111A3, scriptName); }
static Hash _GET_THIS_SCRIPT_HASH() { return invoke<Hash>(0x45755F80A3E63D8B); }
static BOOL GET_EVENT_EXISTS(int p0, int eventIndex) { return invoke<BOOL>(0x9CDCE7BB256E1E4B, p0, eventIndex); }
static void _0x725DEB25EEADECAA() { invoke<Void>(0x725DEB25EEADECAA); }
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xF42B3EF31F918DB2); }
static void _SET_STREAMED_SCRIPT_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xAFF8C9A550BFDAC6, scriptHash); }
static void TERMINATE_THREAD(int threadId) { invoke<Void>(0x7B89588C50DFBA50, threadId); }
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char* scriptName) { invoke<Void>(0xABAEB0389A1F036F, scriptName); }
static void _REQUEST_STREAMED_SCRIPT(Hash scriptHash) { invoke<Void>(0x896F917139316653, scriptHash); }
static int GET_EVENT_AT_INDEX(int p0, int eventIndex) { return invoke<int>(0xD18151DCE3C65E, p0, eventIndex); }
static void _BEGIN_ENUMERATING_SCRIPTS() { invoke<Void>(0x40535A620A8F49F6); }
static BOOL HAS_SCRIPT_LOADED(char* scriptName) { return invoke<BOOL>(0x9A8E9A1E029E9A5A, scriptName); }
static BOOL _IS_STREAMED_SCRIPT_RUNNING(Hash scriptHash) { return invoke<BOOL>(0x53B7AAA2B33E8E11, scriptHash); }
static BOOL DOES_SCRIPT_EXIST(char* scriptName) { return invoke<BOOL>(0x981A9FE62D42A035, scriptName); }
}



namespace SOCIALCLUB
{
static Any _0xAD2F2ABCF97A273() { return invoke<Any>(0xAD2F2ABCF97A273); }
static void _0x5C71CA07A85B4C0B(Any p0, Any p1) { invoke<Void>(0x5C71CA07A85B4C0B, p0, p1); }
static Any _0xD8245746829E5C10(Any p0) { return invoke<Any>(0xD8245746829E5C10, p0); }
static BOOL _0xB1A00BF537BAF378(Any* p0, int* p1) { return invoke<BOOL>(0xB1A00BF537BAF378, p0, p1); }
static void _0x9C89141143E1092(char* p0) { invoke<Void>(0x9C89141143E1092, p0); }
static Any _0x98C55D1BBB98C420() { return invoke<Any>(0x98C55D1BBB98C420); }
static BOOL _0x9E92D1F36F6CE647(Any p0) { return invoke<BOOL>(0x9E92D1F36F6CE647, p0); }
static BOOL _0xC46F092CC9ECDE83(Any p0, Any* p1) { return invoke<BOOL>(0xC46F092CC9ECDE83, p0, p1); }
static BOOL _0x81C8BC3075A9A004(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x81C8BC3075A9A004, p0, p1, p2); }
static char* _SC_GET_NICKNAME() { return invoke<char*>(0xF961404C1C5B418B); }
static Any _0x3A822C651CCA7D8C(Any p0, Any p1) { return invoke<Any>(0x3A822C651CCA7D8C, p0, p1); }
static BOOL _0xBBFEFAB0B67AB79E(Any p0, Any p1) { return invoke<BOOL>(0xBBFEFAB0B67AB79E, p0, p1); }
static BOOL _0x7ECC3DF6DBAEEB2E(int* p0) { return invoke<BOOL>(0x7ECC3DF6DBAEEB2E, p0); }
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Player* player) { invoke<Void>(0x12565E3B916B3502, player); }
static BOOL _0xA20AEED4091D7CED(Any p0, Any* p1) { return invoke<BOOL>(0xA20AEED4091D7CED, p0, p1); }
static BOOL _0xCFD91BD48BC95A79(Any p0) { return invoke<BOOL>(0xCFD91BD48BC95A79, p0); }
static Any _0xF82FC153D1761E96(Any p0, Any p1) { return invoke<Any>(0xF82FC153D1761E96, p0, p1); }
static BOOL _0x966ABB54BC2C4F90() { return invoke<BOOL>(0x966ABB54BC2C4F90); }
static BOOL _0x9D4B1FBAEF508308(int p0) { return invoke<BOOL>(0x9D4B1FBAEF508308, p0); }
static void _0xE307AADB60209612(Any* p0, Any p1) { invoke<Void>(0xE307AADB60209612, p0, p1); }
static BOOL _0xAE7B4E0CE825EE4C(int p0, Any* p1) { return invoke<BOOL>(0xAE7B4E0CE825EE4C, p0, p1); }
static BOOL _0xB37C58AEF856521E(Any p0, float p1) { return invoke<BOOL>(0xB37C58AEF856521E, p0, p1); }
static Any _0x307B55E864D955A3(Any* p0) { return invoke<Any>(0x307B55E864D955A3, p0); }
static void _0x8352CE8B5BF9AE2() { invoke<Void>(0x8352CE8B5BF9AE2); }
static Any _0x824E2EE03354883C(Any p0) { return invoke<Any>(0x824E2EE03354883C, p0); }
static void _0xEC198FE6F0CE3DAA() { invoke<Void>(0xEC198FE6F0CE3DAA); }
static BOOL _0x8B4E15FEB0B264D7(int p0, char* p1, Any* p2) { return invoke<BOOL>(0x8B4E15FEB0B264D7, p0, p1, p2); }
static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any* p1) { return invoke<BOOL>(0xDB8B8D33102D6775, p0, p1); }
static BOOL _0xEE0B60DFCFC430A1(char* p0) { return invoke<BOOL>(0xEE0B60DFCFC430A1, p0); }
static BOOL _0x3545AB3CE95F2696(Any p0) { return invoke<BOOL>(0x3545AB3CE95F2696, p0); }
static Any _0xE28C531B6E50F6F7(Any p0) { return invoke<Any>(0xE28C531B6E50F6F7, p0); }
static BOOL _0xA25C5B18F7A86889(char* p0, Any* p1) { return invoke<BOOL>(0xA25C5B18F7A86889, p0, p1); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x9C438DE5EC21B7A9, p0, p1, p2); }
static Any _0x3563F3550F95A7A5(Any p0) { return invoke<Any>(0x3563F3550F95A7A5, p0); }
static Any _0xDC0C15E96B8CBDF(Any p0) { return invoke<Any>(0xDC0C15E96B8CBDF, p0); }
static BOOL _0xC443A30AA7732B9E(Any* p0) { return invoke<BOOL>(0xC443A30AA7732B9E, p0); }
static Any _0x1247296939C1DE44(Any p0) { return invoke<Any>(0x1247296939C1DE44, p0); }
static BOOL _0x62CD28BCA58E74D8(Any p0, int* p1) { return invoke<BOOL>(0x62CD28BCA58E74D8, p0, p1); }
static BOOL _0xB44824B55C81C950(int p0, char* p1, Any* p2) { return invoke<BOOL>(0xB44824B55C81C950, p0, p1, p2); }
static Any _0x3685C0DEFCD73D5D(Any p0) { return invoke<Any>(0x3685C0DEFCD73D5D, p0); }
static BOOL _0x52AB8B336D1FB3B9(char* p0, int* p1) { return invoke<BOOL>(0x52AB8B336D1FB3B9, p0, p1); }
static BOOL _0x9056DBE6C261FBC9(Any p0) { return invoke<BOOL>(0x9056DBE6C261FBC9, p0); }
static int _0xE3672DF1B98C5E2B(Any p0) { return invoke<int>(0xE3672DF1B98C5E2B, p0); }
static BOOL _0x25C6F5096789762B(Any p0) { return invoke<BOOL>(0x25C6F5096789762B, p0); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x99EE173BCF86797C, p0, p1, p2); }
static void _0x281D101052FBF8F1(char* p0) { invoke<Void>(0x281D101052FBF8F1, p0); }
static Hash _0x17D07D76D17D65C1(int p0) { return invoke<Hash>(0x17D07D76D17D65C1, p0); }
static Any _0xB79D73CA67B40EF3() { return invoke<Any>(0xB79D73CA67B40EF3); }
static void _0xF13DA7EE6C6D4591(BOOL p0) { invoke<Void>(0xF13DA7EE6C6D4591, p0); }
static BOOL _0x8D774F6D23801B23(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x8D774F6D23801B23, p0, p1, p2); }
static Any _0x40D2CEBCA4FF2519(Any p0) { return invoke<Any>(0x40D2CEBCA4FF2519, p0); }
static Any _0x3973711FA9CAD744() { return invoke<Any>(0x3973711FA9CAD744); }
static void _0x3A8A4D2DC3D68FC6(int* p0) { invoke<Void>(0x3A8A4D2DC3D68FC6, p0); }
static Any _0xA7FFF3BF0A10D88E() { return invoke<Any>(0xA7FFF3BF0A10D88E); }
static BOOL _0xDA8F91528461A046(Any p0) { return invoke<BOOL>(0xDA8F91528461A046, p0); }
static Any _0xA578F00C1D1B6C77(Any p0) { return invoke<Any>(0xA578F00C1D1B6C77, p0); }
static BOOL _0x8F2D7A1CEBF7760B(char* p0, int* p1) { return invoke<BOOL>(0x8F2D7A1CEBF7760B, p0, p1); }
static BOOL _0x8D093EFE693EFDB0(Any p0, Any p1) { return invoke<BOOL>(0x8D093EFE693EFDB0, p0, p1); }
static Any _0xDE0343562C74481() { return invoke<Any>(0xDE0343562C74481); }
static float _0x2BA9F3830F4C8C9(Any p0, char* p1) { return invoke<float>(0x2BA9F3830F4C8C9, p0, p1); }
}



namespace STATS
{
static void _0xC20CF19FAA3A8767() { invoke<Void>(0xC20CF19FAA3A8767); }
static void _0x9E6A2CCE0E22F490() { invoke<Void>(0x9E6A2CCE0E22F490); }
static void _0xB06980F13D559D88(Any p0, Any p1, float p2) { invoke<Void>(0xB06980F13D559D88, p0, p1, p2); }
static void _0xAC787725C170AC9F(Any p0, Any p1) { invoke<Void>(0xAC787725C170AC9F, p0, p1); }
static BOOL STAT_SLOT_IS_LOADED(Any p0) { return invoke<BOOL>(0xDE59655A16832466, p0); }
static void PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) { invoke<Void>(0xAC55127F07D6C270, p0, p1); }
static BOOL STAT_GET_BOOL_MASKED(Hash statName, int mask, int p2) { return invoke<BOOL>(0xC9DE55FC72C18349, statName, mask, p2); }
static Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0xB48B17EACBEF26F8, p0, p1); }
static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xA4169622221F92AC, statHash, outValue, p2); }
static void _0x1C7E45166E04C12C(Any p0, Any p1, Any p2) { invoke<Void>(0x1C7E45166E04C12C, p0, p1, p2); }
static void _0xF570B4A65147CC96(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0xF570B4A65147CC96, p0, p1, p2, p3); }
static void _0x411ACE990ACD145C(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x411ACE990ACD145C, p0, p1, p2, p3); }
static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7F4B1DA6529B1031, p0, p1, p2, p3, p4); }
static BOOL STAT_SET_GXT_LABEL(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0x783BA542276957DC, statName, value, save); }
static void _0x61E6C0FDE47E560F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x61E6C0FDE47E560F, p0, p1, p2, p3, p4, p5); }
static char* STAT_GET_USER_ID(Any p0) { return invoke<char*>(0xA4D0CFD6F522033C, p0); }
static void _0x3A18AAE326C93AB4(int p0) { invoke<Void>(0x3A18AAE326C93AB4, p0); }
static Hash _0xA4D5856DC25329B0(int p0, BOOL p1, BOOL p2, Any p3, char* p4) { return invoke<Hash>(0xA4D5856DC25329B0, p0, p1, p2, p3, p4); }
static void _0x81521A5B24D672ED(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x81521A5B24D672ED, p0, p1, p2, p3); }
static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xC222BB3E156E2234, statName, value, numFields, save); }
static int _0x17F5AF0E47AA4F15(Hash statName) { return invoke<int>(0x17F5AF0E47AA4F15, statName); }
static void _0x43119DFA4278D341(Any p0, Any p1, Any p2) { invoke<Void>(0x43119DFA4278D341, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x5452EE114640D501, p0, p1, p2); }
static void _0x3A5F24890DA25C00(Any p0, float p1, Any p2) { invoke<Void>(0x3A5F24890DA25C00, p0, p1, p2); }
static BOOL _0x942835C5761CBAC8(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x942835C5761CBAC8, p0, p1, p2); }
static BOOL _0x9D353CF12D95CA47(Any p0, Any* p1) { return invoke<BOOL>(0x9D353CF12D95CA47, p0, p1); }
static void PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xEF8645C0A07D97D9, p0, p1, p2, p3, p4); }
static BOOL STAT_GET_POS(Any p0, Any* p1, Any* p2, Any* p3, Any p4) { return invoke<BOOL>(0x9F7974BBCF1F0051, p0, p1, p2, p3, p4); }
static float _0x920B93FA9382ED7C(Any p0, Any p1) { return invoke<float>(0x920B93FA9382ED7C, p0, p1); }
static void _0x2EE3E9C8664B93D3(int value) { invoke<Void>(0x2EE3E9C8664B93D3, value); }
static void _0x168E0DD4767568F3(Any p0, float p1) { invoke<Void>(0x168E0DD4767568F3, p0, p1); }
static void _0x5AEA893B2D459C79(Any* p0) { invoke<Void>(0x5AEA893B2D459C79, p0); }
static void PLAYSTATS_AWARD_XP(Any p0, Any p1, Any p2) { invoke<Void>(0x3D7FB311FE0FCB8D, p0, p1, p2); }
static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0x349899F07A0A435F, statName, value, save); }
static Any STAT_DELETE_SLOT(Any p0) { return invoke<Any>(0xF082CE40A7D9BF88, p0); }
static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0x7D67977BA351D3A8, statName, value, save); }
static Any _0xD1E31A8DF145E850() { return invoke<Any>(0xD1E31A8DF145E850); }
static Any _0x57F1AF0E9D0FE79B() { return invoke<Any>(0x57F1AF0E9D0FE79B); }
static void _0x700889882C8FA319(char* p0, Any p1) { invoke<Void>(0x700889882C8FA319, p0, p1); }
static char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<char*>(0xA54335BDB271DDF6, statName); }
static void _0xFA143E4DDE8D9B3F(int value) { invoke<Void>(0xFA143E4DDE8D9B3F, value); }
static Any _0xEB5D3BC13B11AFEB() { return invoke<Any>(0xEB5D3BC13B11AFEB); }
static void _0xB92A20BBFB225B11(Any p0) { invoke<Void>(0xB92A20BBFB225B11, p0); }
static Any _0x1854BC25A8F95790(Any p0) { return invoke<Any>(0x1854BC25A8F95790, p0); }
static BOOL _0x8F339145769901A() { return invoke<BOOL>(0x8F339145769901A); }
static BOOL STAT_SET_BOOL_MASKED(Hash statName, BOOL value, int mask, BOOL save) { return invoke<BOOL>(0x6DC1154549B437EC, statName, value, mask, save); }
static Any _0x8FB93295666813CB(Any p0) { return invoke<Any>(0x8FB93295666813CB, p0); }
static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xB9F4890A2AAD7420, p0, p1, p2); }
static void _0x6BAD68FC06B2D302(Any p0) { invoke<Void>(0x6BAD68FC06B2D302, p0); }
static BOOL _0x53F8AC84992DBCC2() { return invoke<BOOL>(0x53F8AC84992DBCC2); }
static void PLAYSTATS_CHEAT_APPLIED(char* cheat) { invoke<Void>(0xD585FF1465E26743, cheat); }
static Hash _0xC39A166421C618E0(int p0, BOOL p1, BOOL p2, Any p3) { return invoke<Hash>(0xC39A166421C618E0, p0, p1, p2, p3); }
static void _0x5A102FF1D2CA485E() { invoke<Void>(0x5A102FF1D2CA485E); }
static void _0x13A7EA4CDBE8D2D4(Any p0, Any p1, Any p2, Any* p3) { invoke<Void>(0x13A7EA4CDBE8D2D4, p0, p1, p2, p3); }
static BOOL STAT_GET_MASKED_INT(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xB086D355E92A814, p0, p1, p2, p3, p4); }
static void _STAT_SET_PROFILE_SETTING(int profileSetting, int value) { invoke<Void>(0x9473DE61E9DF03A, profileSetting, value); }
static void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { invoke<Void>(0x70474C6AB0E99EB4, p0, p1, p2); }
static BOOL STAT_SET_LICENSE_PLATE(Hash statName, char* str) { return invoke<BOOL>(0xA10D08825EE5CA87, statName, str); }
static BOOL _0xF37879D27F66F1AF(Any* p0, Any* p1) { return invoke<BOOL>(0xF37879D27F66F1AF, p0, p1); }
static void _0xE053651F10866335() { invoke<Void>(0xE053651F10866335); }
static void _0xD644264381925B2A(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD644264381925B2A, p0, p1, p2, p3); }
static void _0xC5ACE007C5DAFB22() { invoke<Void>(0xC5ACE007C5DAFB22); }
static void _0xC4763F0A2FB5B7C1(Any p0, Any p1) { invoke<Void>(0xC4763F0A2FB5B7C1, p0, p1); }
static int _0x9BC92D4D8DBD91CF(Hash statName) { return invoke<int>(0x9BC92D4D8DBD91CF, statName); }
static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xD0D748C6C14C0E92, statHash, outValue, p2); }
static void _0x2E2F89AE75FA5D78(Any p0) { invoke<Void>(0x2E2F89AE75FA5D78, p0); }
static BOOL STAT_SET_MASKED_INT(Hash statName, Any p1, Any p2, int p3, BOOL save) { return invoke<BOOL>(0x8870B9E70F312A20, statName, p1, p2, p3, save); }
static void PLAYSTATS_MISSION_OVER(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x3E945AE78BE77CD8, p0, p1, p2, p3, p4, p5); }
static Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0x54E7F04D5D5DE2E9, p0, p1, p2); }
static Any STAT_SAVE_PENDING() { return invoke<Any>(0x20D4828FD78722C0); }
static BOOL _0x7D347343C06154BB(Any p0) { return invoke<BOOL>(0x7D347343C06154BB, p0); }
static void _0x93F4A4432D0A20A2(Any p0, Any p1, Any p2) { invoke<Void>(0x93F4A4432D0A20A2, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xD0EF6021A986AAA0, p0, p1, p2); }
static BOOL _0xD823101CDCC526E8(Any p0) { return invoke<BOOL>(0xD823101CDCC526E8, p0); }
static Hash _0x93FE57B4BFD543(int p0, BOOL p1, BOOL p2, Any p3) { return invoke<Hash>(0x93FE57B4BFD543, p0, p1, p2, p3); }
static Any _0xD9D1D6608E263AF9(Any p0, Any p1) { return invoke<Any>(0xD9D1D6608E263AF9, p0, p1); }
static Any _0xC9C1249788975810(Any* p0) { return invoke<Any>(0xC9C1249788975810, p0); }
static BOOL STAT_GET_DATE(Hash statHash, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x7D0D56A1AC287E18, statHash, p1, p2, p3); }
static BOOL STAT_SET_USER_ID(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xAFA81A87CF734841, statName, value, save); }
static void _0x466C82380F04527D(Any p0) { invoke<Void>(0x466C82380F04527D, p0); }
static void _0x663191AAFAFC9CF9(Any p0, Any* p1) { invoke<Void>(0x663191AAFAFC9CF9, p0, p1); }
static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xC6B4E0CAEDB5D21, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_NPC_INVITE(Any* p0) { invoke<Void>(0x61B1535A33951B5B, p0); }
static int _0xCE0666B95FEBDB76(int p0) { return invoke<int>(0xCE0666B95FEBDB76, p0); }
static void _0x62ED4F416F0CE6A6() { invoke<Void>(0x62ED4F416F0CE6A6); }
static Any _0x12FAE32722ED3D89() { return invoke<Any>(0x12FAE32722ED3D89); }
static void _0x1EF4DE32077BE989() { invoke<Void>(0x1EF4DE32077BE989); }
static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0x80818680C1FC36F8, statName, value); }
static void PLAYSTATS_RACE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xA95DD835C53DF5EB, p0, p1, p2, p3, p4); }
static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0x25A85AE6051F21F8, p0); }
static void _0xB6E78202CD0489E7(Any p0, Any p1) { invoke<Void>(0xB6E78202CD0489E7, p0, p1); }
static BOOL _0xD5C11C5CC46F40DE(Any* p0) { return invoke<BOOL>(0xD5C11C5CC46F40DE, p0); }
static BOOL STAT_LOAD_PENDING(Any p0) { return invoke<BOOL>(0xAFECAF370EA14295, p0); }
static Any _0x98AC9A92BAC7FC1C() { return invoke<Any>(0x98AC9A92BAC7FC1C); }
static Any LEADERBOARDS_READ_CLEAR_ALL() { return invoke<Any>(0x74ED1264A7EDED78); }
static BOOL _0x589B52DD18FEE72(Any* p0) { return invoke<BOOL>(0x589B52DD18FEE72, p0); }
static BOOL STAT_LOAD(int p0) { return invoke<BOOL>(0xA699EC0453D98908, p0); }
static void _0xB0163D59FAE8355B(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xB0163D59FAE8355B, p0, p1, p2, p3); }
static void _0xB43B2F50D2E29F9A(int p0) { invoke<Void>(0xB43B2F50D2E29F9A, p0); }
static void _0x89BA59C39FEA8F81(Any p0) { invoke<Void>(0x89BA59C39FEA8F81, p0); }
static BOOL STAT_SET_STRING(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xC04DC1EA797A8A85, statName, value, save); }
static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); }
static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xDBEBE4A9DEDFEF4A, p0, p1, p2); }
static void _0x6B7CB02CBD9C0881(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x6B7CB02CBD9C0881, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0x9B04E417FF000F31, p0); }
static void _0xC6D8F5454C0D6D79(float p0, float p1, float p2) { invoke<Void>(0xC6D8F5454C0D6D79, p0, p1, p2); }
static BOOL _0x5CE448E1D55E602F() { return invoke<BOOL>(0x5CE448E1D55E602F); }
static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0xE2A8B026FA4DDFFF, statName, value, save); }
static Any _0x6A2133889DBEDF2C() { return invoke<Any>(0x6A2133889DBEDF2C); }
static void _0xE48A231B73604934() { invoke<Void>(0xE48A231B73604934); }
static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0xB50D63A9966EC48B, p0); }
static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xC63EB20C1C6E82FA, p0, p1, p2); }
static Hash _0xD69CE51110B42B5E(int p0, BOOL p1, BOOL p2, Any p3, char* p4) { return invoke<Hash>(0xD69CE51110B42B5E, p0, p1, p2, p3, p4); }
static void PLAYSTATS_PROP_CHANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4BF69F766037ACA3, p0, p1, p2, p3); }
static Any STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<Any>(0x4DC23284DEB92362); }
static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xB8DBA603F8636507, p0, p1, p2, p3, p4, p5, p6); }
static BOOL _0xA78671906C4C1A0B(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0xA78671906C4C1A0B, statName, p1, outValue); }
static Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0x294E082580EDC7D8, p0, p1, p2); }
static Any _0x4001FADEE538BA5A() { return invoke<Any>(0x4001FADEE538BA5A); }
static void _0x650D93F1A37A8161() { invoke<Void>(0x650D93F1A37A8161); }
static void PLAYSTATS_MISSION_STARTED(Any* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x29DB55F64B471648, p0, p1, p2, p3); }
static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0x699948D3FB4395CA, statName, p1); }
static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0x61341F8378EFA4ED, p0, p1); }
static BOOL _0xFCF98B54199871D1(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xFCF98B54199871D1, p0, p1, p2); }
static Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0x8D188305B2CC825, p0, p1, p2); }
static Hash _0x86AA01B00A711C0B(int p0, BOOL p1, BOOL p2, Any p3) { return invoke<Hash>(0x86AA01B00A711C0B, p0, p1, p2, p3); }
static void _0x4E68C13E989AF425(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4E68C13E989AF425, p0, p1, p2, p3, p4); }
static Any _0x22DAD384A88DFD33() { return invoke<Any>(0x22DAD384A88DFD33); }
static Any _0xF1FE7EB8521A2FA8() { return invoke<Any>(0xF1FE7EB8521A2FA8); }
static void PLAYSTATS_RANK_UP(Any p0) { invoke<Void>(0xC5164E6D4E7782C2, p0); }
static void _0x739476557ECA1E5C() { invoke<Void>(0x739476557ECA1E5C); }
static void PLAYSTATS_MISSION_CHECKPOINT(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7B7705D7B23A4CA, p0, p1, p2, p3); }
static BOOL _0x4ADA07DD2B46A407(Any* p0, Any* p1) { return invoke<BOOL>(0x4ADA07DD2B46A407, p0, p1); }
static void _0x86C9D92F4A1FA8D4(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x86C9D92F4A1FA8D4, p0, p1, p2, p3); }
static Any _0x35588CB9A03B4AFA(Any* p0) { return invoke<Any>(0x35588CB9A03B4AFA, p0); }
static void _0xF6ED927882512586(BOOL p0) { invoke<Void>(0xF6ED927882512586, p0); }
static Hash _0xE1C2CBC9B45C3225(int p0, BOOL p1, BOOL p2, Any p3) { return invoke<Hash>(0xE1C2CBC9B45C3225, p0, p1, p2, p3); }
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0x122833BB56C7D846); }
static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xA97D52B97C2B782F, statHash, outValue, p2); }
static void _0xD020BAA9D2E33978(Any p0) { invoke<Void>(0xD020BAA9D2E33978, p0); }
static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xFEF1088F48FD931E, statName, x, y, z, save); }
static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0x95C466C81B141397, scaleformHash, p1); }
static Any _0x9BE69B15267F0941(Any p0, Any* p1) { return invoke<Any>(0x9BE69B15267F0941, p0, p1); }
static BOOL STAT_SAVE(int p0, BOOL p1, int p2) { return invoke<BOOL>(0x888EF85D0DF3C25F, p0, p1, p2); }
static int _0x7B00F7EE365ECC7F(Hash statName) { return invoke<int>(0x7B00F7EE365ECC7F, statName); }
static Any _0xE07DC4EA9FB292E6(Any p0) { return invoke<Any>(0xE07DC4EA9FB292E6, p0); }
static char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<char*>(0xEA993A0F29125448, statHash, p1); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0x277DEF6CD7C68583, p0, p1, p2); }
static void _0xB45861FD1518FDF7(Any p0, Any p1, Any p2) { invoke<Void>(0xB45861FD1518FDF7, p0, p1, p2); }
static Any STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<Any>(0x7AF56B4557900B, statSlot); }
static Any _0xFDC93CBFAF4566BB() { return invoke<Any>(0xFDC93CBFAF4566BB); }
static Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0x1A99C3558905D6D2, p0); }
static void _0x1F606594444309C2(int value) { invoke<Void>(0x1F606594444309C2, value); }
static BOOL _0x62F5EF9365773A4E(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x62F5EF9365773A4E, p0, p1, p2); }
static int _0xCEC700D0EE0801AF(Hash statName) { return invoke<int>(0xCEC700D0EE0801AF, statName); }
static void _0x73701B2A3B83BC36(BOOL p0) { invoke<Void>(0x73701B2A3B83BC36, p0); }
static int _0xC5B2C78271F9ACBC(int p0) { return invoke<int>(0xC5B2C78271F9ACBC, p0); }
static void _0xA593FD06DEAF41C9(Any p0, Any p1) { invoke<Void>(0xA593FD06DEAF41C9, p0, p1); }
static void _0x3D8A265CB3133046(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x3D8A265CB3133046, p0, p1, p2, p3); }
static void _0x46305159753097FA(Any p0) { invoke<Void>(0x46305159753097FA, p0); }
static void _0x251EE266BED18C37(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x251EE266BED18C37, p0, p1, p2, p3); }
}



namespace STREAMING
{
static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x22AC80586B658378); }
static void REMOVE_CLIP_SET(char* clipSet) { invoke<Void>(0xE582DEA445E4CA1F, clipSet); }
static void _0xDF3566BC6AAD8EE3() { invoke<Void>(0xDF3566BC6AAD8EE3); }
static Any REQUEST_COLLISION_AT_COORD(float x, float y, float z) { return invoke<Any>(0xDE7AAE1778571748, x, y, z); }
static Any _0x13F3737911660436(Any p0) { return invoke<Any>(0x13F3737911660436, p0); }
static void _0x2864B7546C9EC70E(Entity p0) { invoke<Void>(0x2864B7546C9EC70E, p0); }
static Any SET_PLAYER_INVERTED_UP() { return invoke<Any>(0xD0C028F1A1C7DB10); }
static void END_SRL() { invoke<Void>(0x81607667DA73D485); }
static Any _0x82B6528D935648A1(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<Any>(0x82B6528D935648A1, p0, p1, p2, p3, p4, p5, p6); }
static BOOL _0xDF8771E07DD22B9(Any p0) { return invoke<BOOL>(0xDF8771E07DD22B9, p0); }
static Any _0x8AE5366322466232() { return invoke<Any>(0x8AE5366322466232); }
static void _0xEF79B397125853B0(Any* p0) { invoke<Void>(0xEF79B397125853B0, p0); }
static void REMOVE_ANIM_SET(char* animSet) { invoke<Void>(0x94DEFA710C014638, animSet); }
static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0x8016C994AFD32612, entity); }
static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xCCCEEEDD3FD9AA24, model); }
static void _0x1854BCE06715B1AD() { invoke<Void>(0x1854BCE06715B1AD); }
static void _0xDCD7401D95E1DED1(Any p0) { invoke<Void>(0xDCD7401D95E1DED1, p0); }
static Any _0x8168D93673C776F0(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0x8168D93673C776F0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void _0xF7BDF2C2F8CC8B9C(BOOL p0) { invoke<Void>(0xF7BDF2C2F8CC8B9C, p0); }
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x4E162E433226DF06); }
static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return invoke<BOOL>(0x48C2DF809E4EFCA, p0, p1, p2, p3, p4, p5, p6, p7); }
static Any _0x283E37A5D8BBCFBF(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<Any>(0x283E37A5D8BBCFBF, p0, p1, p2, p3, p4, p5); }
static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x845B89176FC66575, model); }
static BOOL DOES_ANIM_DICT_EXIST(char* animDict) { return invoke<BOOL>(0x29B35F8DCF6EDC78, animDict); }
static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x42B571873C8D63A0, entity); }
static BOOL HAS_CLIP_SET_LOADED(char* clipSet) { return invoke<BOOL>(0xE59B2DB198441382, clipSet); }
static void CLEAR_FOCUS() { invoke<Void>(0xFE7F6902788E4A5B); }
static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x88C79A6428D8FF40, model); }
static void PREFETCH_SRL(Any* p0) { invoke<Void>(0xA6622404F825177, p0); }
static Any _0x7A9F442B04509468() { return invoke<Any>(0x7A9F442B04509468); }
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0xA75D45094EE1F1C5); }
static void _0xA15DB0DA73851FF6(BOOL p0) { invoke<Void>(0xA15DB0DA73851FF6, p0); }
static void REQUEST_IPL(char* iplName) { invoke<Void>(0xAE50B46D4D30305D, iplName); }
static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x25E7638265DC752D); }
static void SET_DITCH_POLICE_MODELS(Any p0) { invoke<Void>(0x352F7120C53FE4A0, p0); }
static void _0x458CE133930CDF9D() { invoke<Void>(0x458CE133930CDF9D); }
static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0x1AF09B99D07F3F68, x, y, z); }
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x798D768A589710); }
static void _0xF46D63C60131B2A6() { invoke<Void>(0xF46D63C60131B2A6); }
static void _0x24E23813646DA1D(Any p0) { invoke<Void>(0x24E23813646DA1D, p0); }
static Any _0x1163A177E57AB193() { return invoke<Any>(0x1163A177E57AB193); }
static Any _0x6A9D58230F4F238F() { return invoke<Any>(0x6A9D58230F4F238F); }
static Any DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<Any>(0xD503DF89D6BB3703); }
static void _0x22F9388A70B17922(Any p0) { invoke<Void>(0x22F9388A70B17922, p0); }
static void _REMOVE_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0x26DECA9672903CC5, fxName); }
static void _0x9342B48E8DA717() { invoke<Void>(0x9342B48E8DA717); }
static void NETWORK_STOP_LOAD_SCENE() { invoke<Void>(0xD20249B91BC6CDD); }
static void SET_STREAMING(BOOL toggle) { invoke<Void>(0x806CFEAA76FDFF79, toggle); }
static void REQUEST_ANIM_SET(char* animSet) { invoke<Void>(0x84049AD0DC94D73F, animSet); }
static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0x78F90FB2D9195162, toggle); }
static Any _0xEBB7592B454D8FE7() { return invoke<Any>(0xEBB7592B454D8FE7); }
static void _0x4F4563E2C86B4E5A() { invoke<Void>(0x4F4563E2C86B4E5A); }
static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xDC084B11FCF9ED7F, toggle); }
static Any _0xB10F533F7DB3BE44() { return invoke<Any>(0xB10F533F7DB3BE44); }
static Any _0x9D61F975A337BD83(Any p0) { return invoke<Any>(0x9D61F975A337BD83, p0); }
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xBAE002074A43573C, toggle); }
static BOOL HAS_NAMED_PTFX_ASSET_LOADED(char* fxName) { return invoke<BOOL>(0x1C5E63684D4DB42F, fxName); }
static BOOL IS_IPL_ACTIVE(char* iplName) { return invoke<BOOL>(0xBDA20BD415464BD5, iplName); }
static void REMOVE_PTFX_ASSET() { invoke<Void>(0xFEA2DA05C289B450); }
static void _0x25A7AAD241069CD5(int interiorID, char* roomName) { invoke<Void>(0x25A7AAD241069CD5, interiorID, roomName); }
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0x2C1BE9BE33500278, p0); }
static void _0x5E885928AB75B382() { invoke<Void>(0x5E885928AB75B382); }
static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x3575B0D26426F779, model); }
static Any _0x21E909B774FF4B7B() { return invoke<Any>(0x21E909B774FF4B7B); }
static Any REQUEST_PTFX_ASSET() { return invoke<Any>(0x8E029D91177781A9); }
static void _0x26BDFDC9EEF5F9A4(Any* p0, Any* p1) { invoke<Void>(0x26BDFDC9EEF5F9A4, p0, p1); }
static void STOP_PLAYER_SWITCH() { invoke<Void>(0x4CFEB141278686A3); }
static void REQUEST_MODEL(Hash model) { invoke<Void>(0x97C59C4E8349D15F, model); }
static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x875098323FCA8FE6, model); }
static void BEGIN_SRL() { invoke<Void>(0xD53890AC4CA62CFB); }
static void _REQUEST_MODEL_2(Hash model) { invoke<Void>(0x9C4850C2E2B8710E, model); }
static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0x9A7F0D797C57AC34); }
static void SET_SRL_TIME(float p0) { invoke<Void>(0x215A176025E325F, p0); }
static void _0x68505D89F1A9AC51(float p0) { invoke<Void>(0x68505D89F1A9AC51, p0); }
static void _SWITCH_OUT_PLAYER(Ped ped, int flags, int unknown) { invoke<Void>(0x3CAFA11E84B664FE, ped, flags, unknown); }
static BOOL _NEW_LOAD_SCENE_START_SAFE(float p0, float p1, float p2, float p3, Any p4) { return invoke<BOOL>(0x9BDDAC2B68E13329, p0, p1, p2, p3, p4); }
static void _0x70D92780B713821F() { invoke<Void>(0x70D92780B713821F); }
static void _0xCF018D3547EC2914(char* p0, BOOL p1) { invoke<Void>(0xCF018D3547EC2914, p0, p1); }
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x472A7A9D6102404C); }
static void _0x74AC06C96F11B062() { invoke<Void>(0x74AC06C96F11B062); }
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x54487E8EC8F2F54F, x1, y1, z1, x2, y2, z2); }
static void REQUEST_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0xF2F528B91BF55839, fxName); }
static void SET_HD_AREA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB1D55457E4FF73E9, p0, p1, p2, p3); }
static void _SET_FOCUS_AREA(float x, float y, float z, float p3, float p4, float p5) { invoke<Void>(0x9197C6FFD26BCE7B, x, y, z, p3, p4, p5); }
static Any _0x7F0CFB4637F42851() { return invoke<Any>(0x7F0CFB4637F42851); }
static void _0x461922D7CA9950BC() { invoke<Void>(0x461922D7CA9950BC); }
static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0x7D4BFD4367B656C3); }
static void _0xD88C32277EDFDCD7(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD88C32277EDFDCD7, p0, p1, p2, p3); }
static void _0x5178E38498363194(float p0, float p1, float p2, float p3) { invoke<Void>(0x5178E38498363194, p0, p1, p2, p3); }
static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x9151153185C776B3, model); }
static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0x18F9F40035A8905D); }
static void _0x8296990D88948F20(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x8296990D88948F20, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static Any NETWORK_UPDATE_LOAD_SCENE() { return invoke<Any>(0xFA7FDF1A9A6D50D7); }
static BOOL HAS_ANIM_SET_LOADED(char* animSet) { return invoke<BOOL>(0xC6B754B44AA10031, animSet); }
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float p0, float p1, float p2) { invoke<Void>(0xD2163C096217BF6E, p0, p1, p2); }
static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xD84E191BFE45F102); }
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0x8FE92AC24D9BCDF0, p0); }
static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0x9AD1C0C69D3458A0); }
static void CLEAR_HD_AREA() { invoke<Void>(0xCB7B99E3F7946AE0); }
static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0x9CC0958FCED939CB); }
static BOOL HAS_ANIM_DICT_LOADED(char* animDict) { return invoke<BOOL>(0x482101C9B3483958, animDict); }
static void REQUEST_CLIP_SET(char* clipSet) { invoke<Void>(0x945FF27138DBEABD, clipSet); }
static void REQUEST_ANIM_DICT(char* animDict) { invoke<Void>(0x88172B3983EC5071, animDict); }
static void _0x9964FA9022097FBF() { invoke<Void>(0x9964FA9022097FBF); }
static void _0x5BDFC48B46CC9B95(Any p0) { invoke<Void>(0x5BDFC48B46CC9B95, p0); }
static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0x5D293E404CA20AA5); }
static Any _0x5A97BE6CB3A562EF() { return invoke<Any>(0x5A97BE6CB3A562EF); }
static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0x8E6AE68A8CDF7819, interiorID, toggle); }
static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x49DE0B34213B12, model); }
static void REMOVE_IPL(char* iplName) { invoke<Void>(0x79EE50983E41D399, iplName); }
static void _0xF18676FD0C63DF1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF18676FD0C63DF1, p0, p1, p2, p3, p4, p5); }
static void _0x256F428763300FC4(Any p0) { invoke<Void>(0x256F428763300FC4, p0); }
static void _0xD699B8686EE5C3FC() { invoke<Void>(0xD699B8686EE5C3FC); }
static void REMOVE_ANIM_DICT(char* animDict) { invoke<Void>(0x651E63BA2F4975EC, animDict); }
static void _0x9DF148510E13CD9A(Any p0) { invoke<Void>(0x9DF148510E13CD9A, p0); }
static void START_PLAYER_SWITCH(Ped p0, Ped p1, int p2, int Flags) { invoke<Void>(0xA3785BA43F3F81C4, p0, p1, p2, Flags); }
static Any _0xA94A6433768F5962() { return invoke<Any>(0xA94A6433768F5962); }
}



namespace SYSTEM
{
static float TIMESTEP() { return invoke<float>(0x50597EE2); }
static float SIN(float value) { return invoke<float>(0xFFFFFFFF, value); }
static int CEIL(float value) { return invoke<int>(0xFFFFFFFF, value); }
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xFFFFFFFF, x1, y1, z1, x2, y2, z2); }
static void WAIT(int ms) { invoke<Void>(0xFFFFFFFF, ms); }
static void SETTIMERB(int value) { invoke<Void>(0xFFFFFFFF, value); }
static float VMAG(float p0, float p1, float p2) { return invoke<float>(0xFFFFFFFF, p0, p1, p2); }
static float SQRT(float value) { return invoke<float>(0xFFFFFFFF, value); }
static int TIMERA() { return invoke<int>(0xFFFFFFFF); }
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0xFFFFFFFF, value, bitShift); }
static float VMAG2(float p0, float p1, float p2) { return invoke<float>(0xFFFFFFFF, p0, p1, p2); }
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xFFFFFFFF, x1, y1, z1, x2, y2, z2); }
static int START_NEW_SCRIPT_WITH_ARGS(char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xFFFFFFFF, scriptName, args, argCount, stackSize); }
static float TO_FLOAT(int value) { return invoke<float>(0xFFFFFFFF, value); }
static void SETTIMERA(int value) { invoke<Void>(0xFFFFFFFF, value); }
static int _START_NEW_STREAMED_SCRIPT_WITH_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xFFFFFFFF, scriptHash, args, argCount, stackSize); }
static int TIMERB() { return invoke<int>(0xFFFFFFFF); }
static float COS(float value) { return invoke<float>(0xFFFFFFFF, value); }
static float POW(float base, float exponent) { return invoke<float>(0xFFFFFFFF, base, exponent); }
static int START_NEW_SCRIPT(char* scriptName, int stackSize) { return invoke<int>(0xFFFFFFFF, scriptName, stackSize); }
static int _START_NEW_STREAMED_SCRIPT(Hash scriptHash, int stackSize) { return invoke<int>(0xFFFFFFFF, scriptHash, stackSize); }
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xFFFFFFFF, value, bitShift); }
static int ROUND(float value) { return invoke<int>(0xFFFFFFFF, value); }
static int FLOOR(float value) { return invoke<int>(0xFFFFFFFF, value); }
}



namespace TIME
{
static int GET_CLOCK_MINUTES() { return invoke<int>(0x51C7DC141C5D0E6B); }
static int GET_CLOCK_HOURS() { return invoke<int>(0xEFEADD7EBD01C0A6); }
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x78DA396756A9904E); }
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x388418AD39C0F4DE); }
static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xEAA606B24F2C239A, toggle); }
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xDFF7EDE6E6E3A228, hour, minute, second); }
static int GET_CLOCK_SECONDS() { return invoke<int>(0x2FADF5E93AB8D64B); }
static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xA698DEA75C4658E, year, month, day, hour, minute, second); }
static void _GET_LOCAL_TIME_GMT(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xDC1B7AEF940AFC44, year, month, day, hour, minute, second); }
static int GET_CLOCK_YEAR() { return invoke<int>(0x8FB5B60BC869990E); }
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xD70EC8F4C70E4D12, day, month, year); }
static int GET_CLOCK_MONTH() { return invoke<int>(0xE3911478C9FE04B2); }
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xF56518F3774D236C, hour, minute, second); }
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0x9F2980D2D44D9A4D, hours, minutes, seconds); }
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0x87383C1F246BCAC2); }
static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x19EC0B9D2EBCF186, year, month, day, hour, minute, second); }
}



namespace UI
{
static Any _0x407E39E9713FA44E() { return invoke<Any>(0x407E39E9713FA44E); }
static BOOL HAS_ADDITIONAL_TEXT_LOADED(int p0) { return invoke<BOOL>(0x911CCA58116D31F0, p0); }
static void FLASH_ABILITY_BAR(Any p0) { invoke<Void>(0x98C88762B02798F, p0); }
static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xD2BA1B9D0161173F, p0); }
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0x90805938ADF0F45C, value); }
static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0x8D910E607F73E53D, blip, color); }
static void _0xAD7E29D846C8CBB0(BOOL p0) { invoke<Void>(0xAD7E29D846C8CBB0, p0); }
static BOOL _0x3922F8DB9946FA39(Hash p0, Any* p1) { return invoke<BOOL>(0x3922F8DB9946FA39, p0, p1); }
static void _0xD1DCE9B8D0CC3552(Any p0) { invoke<Void>(0xD1DCE9B8D0CC3552, p0); }
static void _SET_PLAYER_CASH_CHANGE(int cash, int bank) { invoke<Void>(0xA681D346EA0BC370, cash, bank); }
static void SET_TEXT_SCALE(float p0, float size) { invoke<Void>(0xFFA0132BAEE84558, p0, size); }
static void _0xAD74FB8713C36CA9(float x, float y, float z) { invoke<Void>(0xAD74FB8713C36CA9, x, y, z); }
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xE9D9D4FF588F3F31, zoomLevel); }
static BOOL _0x26D88466648F15B7(Any p0) { return invoke<BOOL>(0x26D88466648F15B7, p0); }
static void _0x66F753896FC4EEC3(char* p0) { invoke<Void>(0x66F753896FC4EEC3, p0); }
static void _0x39F39C3457E5942D() { invoke<Void>(0x39F39C3457E5942D); }
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x9839AB32B1FE26C2, id); }
static void _0x69044FC34D5EE0DA(Any p0, BOOL p1) { invoke<Void>(0x69044FC34D5EE0DA, p0, p1); }
static BOOL _0xC5A80A9E096D529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xC5A80A9E096D529, p0, p1, p2, p3, p4, p5); }
static void _0x418033C8CDD1F04B(Any p0) { invoke<Void>(0x418033C8CDD1F04B, p0); }
static void _ADD_TEXT_COMPONENT_SUBSTRING_CASH(int cashAmount, BOOL p1) { invoke<Void>(0x156EDFC2A5E490AA, cashAmount, p1); }
static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0x3B262D6B6F4BEE06, menuHash, p1); }
static BOOL _0xF2DBEB09EBAED1D6(int p0) { return invoke<BOOL>(0xF2DBEB09EBAED1D6, p0); }
static void _0xDBF01C7AD4901C01() { invoke<Void>(0xDBF01C7AD4901C01); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0x633D9F40100E396A, timestamp, flags); }
static Any _0xD81EB89A9BDAFD95() { return invoke<Any>(0xD81EB89A9BDAFD95); }
static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash hash) { return invoke<BOOL>(0x369E6667FA3FCD92, hash); }
static void _0x5D5E962A9A90C31(BOOL p0) { invoke<Void>(0x5D5E962A9A90C31, p0); }
static void RESET_RETICULE_VALUES() { invoke<Void>(0xB826BE0C6DB4E7A9); }
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0x14FD4A9C9AED00A7, x, y); }
static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0x1E22D65345504CAE, blip, player); }
static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle) { invoke<Void>(0x50AFBA179C6427E5, blip, toggle); }
static Any _0xDD4C1BFC77962D6A(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any* p7, Any p8, Any p9, Any p10) { return invoke<Any>(0xDD4C1BFC77962D6A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static Any _0x18DFB723C3EFCDF0() { return invoke<Any>(0x18DFB723C3EFCDF0); }
static void _0xDCBFB2E5A215F767() { invoke<Void>(0xDCBFB2E5A215F767); }
static void SET_BLIP_SECONDARY_COLOUR(Blip blip, float r, float g, float b) { invoke<Void>(0xE859CA17EC50FD34, blip, r, g, b); }
static void _0xBB4028A9010D4C86(BOOL p0) { invoke<Void>(0xBB4028A9010D4C86, p0); }
static Blip GET_NEXT_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0x8C13C3FC602B241D, blip); }
static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x9A8D90020C5C606B); }
static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0x8C79FE8E7B1D3719, ped); }
static char* _GET_TEXT_SUBSTRING(char* text, int position, int length) { return invoke<char*>(0x397AA18A3F2F4F1C, text, position, length); }
static void _0xED9355E3E9FC101D(int r, int g, int b, int a) { invoke<Void>(0xED9355E3E9FC101D, r, g, b, a); }
static void _0x4311EA34A4ACDBBF(BOOL p0) { invoke<Void>(0x4311EA34A4ACDBBF, p0); }
static void _0x26D7B95E9F2ABBD9(Hash inputName) { invoke<Void>(0x26D7B95E9F2ABBD9, inputName); }
static void _SET_NOTIFICATION_FLASH_COLOR(int red, int green, int blue, int alpha) { invoke<Void>(0x15F147EF640A1459, red, green, blue, alpha); }
static void _0xB07EC7F88D5A45B2(Any p0) { invoke<Void>(0xB07EC7F88D5A45B2, p0); }
static int _GET_BLIP_INFO_ID_ITERATOR() { return invoke<int>(0xF07D7181C004903); }
static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xD35FD82F24AC25F); }
static void KEY_HUD_COLOUR(BOOL p0, Any p1) { invoke<Void>(0x858526119A2DFE1E, p0, p1); }
static Any GET_NAMED_RENDERTARGET_RENDER_ID(char* p0) { return invoke<Any>(0x61AE2E76850532C3, p0); }
static void _ABORT_TEXT_CHAT() { invoke<Void>(0x74FA65CA20ACC499); }
static Blip GET_FIRST_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0x1157FC336D2A65E9, blip); }
static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xE8C07B0F72EC8099); }
static BOOL DOES_TEXT_BLOCK_EXIST(char* gxt) { return invoke<BOOL>(0x291E0638573BD4A2, gxt); }
static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0x488CB743AC8003C3); }
static void _0xED1FE9C78E9E7503(Any p0, Any p1) { invoke<Void>(0xED1FE9C78E9E7503, p0, p1); }
static int _SET_NOTIFICATION_MESSAGE(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject) { return invoke<int>(0xE8386CF1E84A5B3D, picName1, picName2, flash, iconType, sender, subject); }
static void _SET_TEXT_CHAT_UNK(BOOL p0) { invoke<Void>(0xF91645DBD0459576, p0); }
static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x56934474FF1DA192); }
static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0x5AE258C455440E0C, blip); }
static int _0x9E75D5719B35DF4E(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration) { return invoke<int>(0x9E75D5719B35DF4E, picName1, picName2, flash, iconType, sender, subject, duration); }
static void _0xBA338C7F05EBC423(BOOL p0) { invoke<Void>(0xBA338C7F05EBC423, p0); }
static void _0x93CF2B04C0344615(Any p0) { invoke<Void>(0x93CF2B04C0344615, p0); }
static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0x2DD0FD059F33CAA3, blip); }
static void _SET_NOTIFICATION_TEXT_ENTRY(char* type) { invoke<Void>(0x5411F6B456B04A6B, type); }
static void _0xDD1F7B6B063C4661() { invoke<Void>(0xDD1F7B6B063C4661); }
static void _0x6AD11A50C819838C() { invoke<Void>(0x6AD11A50C819838C); }
static BOOL _0x84CBCC64B10BC4E9() { return invoke<BOOL>(0x84CBCC64B10BC4E9); }
static void _0x68FA602AD2504E10(Any p0) { invoke<Void>(0x68FA602AD2504E10, p0); }
static void CLEAR_GPS_FLAGS() { invoke<Void>(0xFC464E30B10AFB48); }
static int GET_HUD_COMPONENT_POSITION(Any p0) { return invoke<int>(0x706F97DFCDA9784F, p0); }
static Hash _0xBE36A8E00BE8FD74() { return invoke<Hash>(0xBE36A8E00BE8FD74); }
static void _SET_RADAR_BIGMAP_ENABLED(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0x10F66E1B63DBCEC0, toggleBigMap, showFullMap); }
static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0x84D698C3E25DEB27, blip, index); }
static void _DISPLAY_HELP_TEXT_FROM_STRING_LABEL(Any p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0x9785EE0D78241684, p0, loop, beep, shape); }
static void _0x8D4AF6464928FBD5(Blip blip, BOOL toggle) { invoke<Void>(0x8D4AF6464928FBD5, blip, toggle); }
static void _0xFBD5C5731876BD9(char* p0) { invoke<Void>(0xFBD5C5731876BD9, p0); }
static BOOL _0x3B6CEDDC9D66A2B1(Any p0) { return invoke<BOOL>(0x3B6CEDDC9D66A2B1, p0); }
static BOOL _0x5676B66A49BD3DBC(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x5676B66A49BD3DBC, p0, p1, p2, p3, p4); }
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x7576E8B34AFD9A4B, blip, toggle); }
static void SET_TEXT_OUTLINE() { invoke<Void>(0x95EC1A014D2CDB9F); }
static void _0xB32D46A640D448D0(Any p0, BOOL p1) { invoke<Void>(0xB32D46A640D448D0, p0, p1); }
static void _0x5CAB188C6F4100F3() { invoke<Void>(0x5CAB188C6F4100F3); }
static void _SET_TEXT_ENTRY(char* text) { invoke<Void>(0x16073B7747C188AC, text); }
static void _0x100C85E813497719() { invoke<Void>(0x100C85E813497719); }
static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0x92BB2FCB9BF5C920, blip); }
static void _0x4D0D0735EC61D43E() { invoke<Void>(0x4D0D0735EC61D43E); }
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xE0D1D679E4B5371F); }
static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xE686EB2237063B4C, toggle); }
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xA2D51611CCA4E71D, angle); }
static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0x85DF15590BBEBCCD, p0, p1); }
static Any _0x598A9DFA81948E() { return invoke<Any>(0x598A9DFA81948E); }
static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xFAF32F712EDA1C22, blip, opacity, duration); }
static void _0x5C0241BA03E8223A(Blip blip, BOOL toggle) { invoke<Void>(0x5C0241BA03E8223A, blip, toggle); }
static int _0xA71A37ACCE30D80F(char* p0, int p1, int p2, int p3, BOOL p4, char* picName1, char* picName2) { return invoke<int>(0xA71A37ACCE30D80F, p0, p1, p2, p3, p4, picName1, picName2); }
static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xFDC121045EC09806); }
static Any _0xC8B0CE5298566F1D() { return invoke<Any>(0xC8B0CE5298566F1D); }
static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0x37F3189966B71573, blip, toggle); }
static int _DRAW_NOTIFICATION(BOOL blink, BOOL p1) { return invoke<int>(0xF51DE8AFFD9CC3C9, blink, p1); }
static Any _0x8AB677D60424FF8C() { return invoke<Any>(0x8AB677D60424FF8C); }
static void _0x9BD0D9808029AC1F(Any p0, Any p1, Any p2) { invoke<Void>(0x9BD0D9808029AC1F, p0, p1, p2); }
static void _0x79DA51D4C0180540(int headDisplayId, Any p1) { invoke<Void>(0x79DA51D4C0180540, headDisplayId, p1); }
static void _0x672FCAADAD43EEEB(int headDisplayId) { invoke<Void>(0x672FCAADAD43EEEB, headDisplayId); }
static void _0x2CF7CD0925B8CCF0(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x2CF7CD0925B8CCF0, p0, p1, p2, p3); }
static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xF84F5F7D03DB4E63, toggle); }
static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0x46F94E0B75FDB895); }
static Any _0x2D820B9F979C1EEE(Any p0, Any p1, Any p2) { return invoke<Any>(0x2D820B9F979C1EEE, p0, p1, p2); }
static Any _0x492526F362C74B91() { return invoke<Any>(0x492526F362C74B91); }
static void _0xDA5DDB528AFC5C02() { invoke<Void>(0xDA5DDB528AFC5C02); }
static void _0x24C6805C01C048C9(Any* p0, Any* p1) { invoke<Void>(0x24C6805C01C048C9, p0, p1); }
static int _DRAW_NOTIFICATION_3(BOOL blink, BOOL p1) { return invoke<int>(0x2B7D8573384314C0, blink, p1); }
static void _0xF4D4BFD98B32BF85(int p0) { invoke<Void>(0xF4D4BFD98B32BF85, p0); }
static Any _0x94E3ECE32FD834F9() { return invoke<Any>(0x94E3ECE32FD834F9); }
static void _0xAB2EDE51FFF07D22(BOOL p0) { invoke<Void>(0xAB2EDE51FFF07D22, p0); }
static void _0x53DCA340636E4781(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x53DCA340636E4781, p0, p1, p2); }
static Any _0x8ED8779D25099E8D() { return invoke<Any>(0x8ED8779D25099E8D); }
static void _0x87BCBE1293B3437E(BOOL p0) { invoke<Void>(0x87BCBE1293B3437E, p0); }
static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0x4A5BE08CF6F0AFE0); }
static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(Any p0, BOOL p1) { invoke<Void>(0x62C27D69B2FBBE91, p0, p1); }
static void _0xD6B762AC3DA6D30F(Any p0, Any p1, BOOL p2) { invoke<Void>(0xD6B762AC3DA6D30F, p0, p1, p2); }
static void _0xDB87C46D9AC6DDDC() { invoke<Void>(0xDB87C46D9AC6DDDC); }
static void _0x5DF1FD007A6B72F4(BOOL p0) { invoke<Void>(0x5DF1FD007A6B72F4, p0); }
static BOOL _0x478190CEA6E2024A() { return invoke<BOOL>(0x478190CEA6E2024A); }
static int _0x171888B136481692(char* p0) { return invoke<int>(0x171888B136481692, p0); }
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xF3458F619B910FFD, p0, r, g, b, a); }
static void OBJECT_DECAL_TOGGLE(Hash hash) { invoke<Void>(0xF006BF9DA519F097, hash); }
static int _DRAW_NOTIFICATION_2(BOOL blink, BOOL p1) { return invoke<int>(0xD481E48567D446AE, blink, p1); }
static void RESET_HUD_COMPONENT_VALUES(Any p0) { invoke<Void>(0xFEA003123EAA8CFB, p0); }
static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xB412D79FA1018FF0, blip, alpha); }
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xC3B036EF48873204, distance, r, g, b, a); }
static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xCFE7EAD1241D5643, posX, posY, posZ, radius); }
static void ENABLE_DEATHBLOOD_SEETHROUGH(BOOL p0) { invoke<Void>(0x5B9EBF84C813F80C, p0); }
static void _0xC8FE1660F6B569C4(BOOL p0) { invoke<Void>(0xC8FE1660F6B569C4, p0); }
static int _0x9531B0A727EDF1BF() { return invoke<int>(0x9531B0A727EDF1BF); }
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x5CFE7BBCC87B1CDC); }
static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xDA01DB4DE530A50C, blip); }
static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x46768B1495288824); }
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0x402543D4DFEA2C21, justifyType); }
static Any _0x644B8EEA894D766F() { return invoke<Any>(0x644B8EEA894D766F); }
static BOOL _HAS_HEAD_DISPLAY_LOADED(int headDisplayId) { return invoke<BOOL>(0x33804055E6B1EA0F, headDisplayId); }
static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xAB27F3DE6390C749, blip, enabled); }
static void CLEAR_FLOATING_HELP(Any p0, BOOL p1) { invoke<Void>(0x7CFBFB3D7CFF8D13, p0, p1); }
static void _SET_TEXT_GXT_ENTRY(char* entry) { invoke<Void>(0x9F56B0EEDDCBCEE3, entry); }
static void _0x570B580FBC7B1A05() { invoke<Void>(0x570B580FBC7B1A05); }
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xBB7A8E53D996256C); }
static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(char* picName1, char* picName2, BOOL flash, int iconType1, char* sender, char* subject, float duration, char* clanTag, int iconType2, int p9) { return invoke<int>(0x17283BFA89DE3980, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0x2C91B27406376BD9, blip); }
static void _0x4C661CEFA8CF488C(BOOL p0) { invoke<Void>(0x4C661CEFA8CF488C, p0); }
static void _0x76A4EEDDD5CFA651(Any p0, BOOL p1) { invoke<Void>(0x76A4EEDDD5CFA651, p0, p1); }
static void _SET_TEXT_ENTRY_FOR_WIDTH(char* text) { invoke<Void>(0xA56937B322E371D6, text); }
static Any _0x1EC995BF907C6DC(float p0, float p1, float p2) { return invoke<Any>(0x1EC995BF907C6DC, p0, p1, p2); }
static void _0xD4E4E96CC60AD4AA(float p0) { invoke<Void>(0xD4E4E96CC60AD4AA, p0); }
static Any _0xD856C59050C14C28(Any p0) { return invoke<Any>(0xD856C59050C14C28, p0); }
static void _0xB2F75CAA8AEE653F() { invoke<Void>(0xB2F75CAA8AEE653F); }
static void _0x6A2963743FFA60AC(BOOL p0) { invoke<Void>(0x6A2963743FFA60AC, p0); }
static BOOL REGISTER_NAMED_RENDERTARGET(char* p0, BOOL p1) { return invoke<BOOL>(0x2033498075071A0D, p0, p1); }
static void _0x4A655C86425EFB86() { invoke<Void>(0x4A655C86425EFB86); }
static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0xFB4AA60106DBA831, blip); }
static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xF1F9B5284EE22F54, toggle); }
static Any _0x9105B0F4E26F8EB9() { return invoke<Any>(0x9105B0F4E26F8EB9); }
static BOOL ADD_TREVOR_RANDOM_MODIFIER(int headDisplayId) { return invoke<BOOL>(0x2B92984AA21C053B, headDisplayId); }
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int p4) { invoke<Void>(0x83669CC5BB86BEB3, interior, x, y, z, p4); }
static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0x43B8950858CAD66F, x, y, z); }
static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0x2BE52B558CE18C4F, p0, p1); }
static Vector3 _0xC21DE9A204B9DDD4() { return invoke<Vector3>(0xC21DE9A204B9DDD4); }
static Blip DISABLE_BLIP_NAME_FOR_VAR() { return invoke<Blip>(0xF42746593EBB695); }
static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration, char* clanTag) { return invoke<int>(0xCC21F19977CAD211, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); }
static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xABF4388EB11AD060, entity); }
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xBFAE295BF2A767B3); }
static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0x6989B1F0868251F4, renderId); }
static void SET_MISSION_NAME(BOOL p0, char* name) { invoke<Void>(0xF0476353304C917, p0, name); }
static void _0x182296DAFE790204(char* p0) { invoke<Void>(0x182296DAFE790204, p0); }
static void _DISABLE_RADAR_THIS_FRAME() { invoke<Void>(0x83B3FD216F27C605); }
static void _SET_BLIP_SHOW_HEADING_INDICATOR(Blip blip, BOOL toggle) { invoke<Void>(0xDFBCD5F222D180F2, blip, toggle); }
static BOOL _0x2EF7B63FC9C20E7C(Any p0, Any* p1) { return invoke<BOOL>(0x2EF7B63FC9C20E7C, p0, p1); }
static void _REQUEST_ADDITIONAL_TEXT_2(char* gxt, int slot) { invoke<Void>(0x1DE7DE1986BBED16, gxt, slot); }
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xF0D343C9131A14F2, p0); }
static void _0x78A9E725838E0FF6(BOOL p0) { invoke<Void>(0x78A9E725838E0FF6, p0); }
static void _0xC9121D75670668A2() { invoke<Void>(0xC9121D75670668A2); }
static void _0xA398066C8E9B75E(int headDisplayId, Any p1, int flag) { invoke<Void>(0xA398066C8E9B75E, headDisplayId, p1, flag); }
static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0x904FD725C2A36730); }
static void _0x99BE83D06494845B(BOOL p0) { invoke<Void>(0x99BE83D06494845B, p0); }
static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0x478FAED9828C3447, start, end); }
static BOOL _0xAA80BEB722039E32(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xAA80BEB722039E32, scaleformHandle, p1, p2, p3); }
static void _SET_HEAD_DISPLAY_FLAG(int headDisplayId, int sprite, BOOL enabled) { invoke<Void>(0xB50CA5DA38012552, headDisplayId, sprite, enabled); }
static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xD229AABC4054103, fontType); }
static Any _0x5A3F11ED1E70034A() { return invoke<Any>(0x5A3F11ED1E70034A); }
static void _0xDA8D0EA7732673F0() { invoke<Void>(0xDA8D0EA7732673F0); }
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x28981D48C12CB95E, id); }
static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xA19126BE76D90A7, toggle); }
static void _0xE2855406D0EB12BB(Any p0) { invoke<Void>(0xE2855406D0EB12BB, p0); }
static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0x1ABFA02EFD1F5567, toggle); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(char* text) { invoke<Void>(0xF9E9E11D6DF3EBF8, text); }
static void _CENTER_PLAYER_ON_RADAR_THIS_FRAME() { invoke<Void>(0x4E6E8671AD180531); }
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xC6C77F321F4BFB2C); }
static void _0x69AA1E9FA72486EA(int headDisplayId, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x69AA1E9FA72486EA, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, p6, p7, p8); }
static BOOL _0x28EC683F4D00F902() { return invoke<BOOL>(0x28EC683F4D00F902); }
static BOOL _0x3CFBD7F7C96CA68D(float p0, float p1, float p2) { return invoke<BOOL>(0x3CFBD7F7C96CA68D, p0, p1, p2); }
static void _0xB42A2E4B48D1CF0D() { invoke<Void>(0xB42A2E4B48D1CF0D); }
static void _0x3AB9179C0820B5DE(BOOL p0) { invoke<Void>(0x3AB9179C0820B5DE, p0); }
static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xD1B211F2EB392B46, blip, toggle); }
static Any _0xDA35FEACA354036E() { return invoke<Any>(0xDA35FEACA354036E); }
static void _SET_WARNING_MESSAGE_3(char* entryHeader, char* entryLine1, Any instructionalKey, char* entryLine2, BOOL p4, Any p5, Any p6, Any* p7, Any* p8, BOOL p9) { invoke<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); }
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xC5EB6DE147B611C7); }
static void REQUEST_ADDITIONAL_TEXT(char* gxt, int slot) { invoke<Void>(0x8378AB3CED5FF44A, gxt, slot); }
static void _0xE5BD9B0820A3506B(Any p0) { invoke<Void>(0xE5BD9B0820A3506B, p0); }
static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0x42942960DF287626, blip); }
static void _0xEDA0F470C3945BEF(Any p0) { invoke<Void>(0xEDA0F470C3945BEF, p0); }
static void _0x9E4B2998EC122E02(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0x9E4B2998EC122E02, posX, posY, posZ, radius, p4); }
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0x40181D147927EF9A); }
static void PULSE_BLIP(Blip blip) { invoke<Void>(0x3810955A2D9223D2, blip); }
static void _0xF881F3ACFC4DE82F(Blip blip, BOOL toggle) { invoke<Void>(0xF881F3ACFC4DE82F, blip, toggle); }
static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xFF891783A71C95BD, active); }
static void _0xE7BA3946385B4D19(Any p0, BOOL p1) { invoke<Void>(0xE7BA3946385B4D19, p0, p1); }
static Any SET_MINIMAP_COMPONENT(int p0, BOOL p1, int p2) { return invoke<Any>(0x3571F68DD210386B, p0, p1, p2); }
static void _0xCDC0805A1D7E010C() { invoke<Void>(0xCDC0805A1D7E010C); }
static void _0x832BC45EF0DD5D4A(char* p0, int p1) { invoke<Void>(0x832BC45EF0DD5D4A, p0, p1); }
static void _0x9C9B3139051C9B3A() { invoke<Void>(0x9C9B3139051C9B3A); }
static void _0xB8E675430F88EFE3(Any p0, float p1, float p2) { invoke<Void>(0xB8E675430F88EFE3, p0, p1, p2); }
static void _0xCD8B19CFC0B2701C() { invoke<Void>(0xCD8B19CFC0B2701C); }
static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xC94DAB72E0DE871C, x, y); }
static void _0x90BDFDB3CA998073(Any p0) { invoke<Void>(0x90BDFDB3CA998073, p0); }
static void _0xA8D2C85108F88506(Any p0, float x, float y, float z) { invoke<Void>(0xA8D2C85108F88506, p0, x, y, z); }
static void _0x53B21326D8592A44(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x53B21326D8592A44, p0, p1, p2, p3, p4, p5); }
static BOOL IS_NAMED_RENDERTARGET_REGISTERED(char* p0) { return invoke<BOOL>(0x8B2548A86532AA14, p0); }
static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x45252A58A2BF9751); }
static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0x85D34B9572651DF0); }
static Any _0x397706E00C608A28(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x397706E00C608A28, p0, p1, p2, p3, p4, p5); }
static void SET_WARNING_MESSAGE(char* entryLine1, int instructionalKey, char* entryLine2, BOOL p3, Any p4, Any* p5, Any* p6, BOOL background) { invoke<Void>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); }
static void _0x89AA397C5EE602AF(Any p0) { invoke<Void>(0x89AA397C5EE602AF, p0); }
static char* _GET_LABEL_TEXT(char* labelName) { return invoke<char*>(0xC754513C760635E8, labelName); }
static void _0x1DA11BA69E6FF8B9(int headDisplayId, char* string) { invoke<Void>(0x1DA11BA69E6FF8B9, headDisplayId, string); }
static void GET_HUD_COLOUR(int hudIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0x188B46661C05B1DA, hudIndex, r, g, b, a); }
static Any _0xD42109C080DF92B6(Any p0) { return invoke<Any>(0xD42109C080DF92B6, p0); }
static void _0x35BFD0A3F7CAD931(Any* p0, Any* p1, Any* p2) { invoke<Void>(0x35BFD0A3F7CAD931, p0, p1, p2); }
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char* gxt) { return invoke<int>(0x445997945AF35A6, gxt); }
static void _SHOW_SOCIAL_CLUB_LEGAL_SCREEN() { invoke<Void>(0x40A1DE3C6A3C09F5); }
static void _0x8FAA5B222374D78B(BOOL p0) { invoke<Void>(0x8FAA5B222374D78B, p0); }
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0x876ABC42BEF56D42, blip); }
static void _0xDC8219D1315D37DE() { invoke<Void>(0xDC8219D1315D37DE); }
static void _0x55ECD9D7333BC6A7(BOOL p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8) { invoke<Void>(0x55ECD9D7333BC6A7, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0x511216AE5F1014); }
static void REFRESH_WAYPOINT() { invoke<Void>(0x54C6CA6B895AA9A7); }
static int _GET_CURRENT_NOTIFICATION() { return invoke<int>(0xBA7F19536947C7C8); }
static void _0x461D35C2808CF463(BOOL p0) { invoke<Void>(0x461D35C2808CF463, p0); }
static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0x7A002D0DABB7EDDA, blip, colour); }
static BOOL _0x1E83AF5FFE7732D0(Any p0) { return invoke<BOOL>(0x1E83AF5FFE7732D0, p0); }
static void _SET_TEXT_COMPONENT_FORMAT(char* inputType) { invoke<Void>(0x3432AC8623AF4EAC, inputType); }
static void _0x907B9289657244FB(Any* p0) { invoke<Void>(0x907B9289657244FB, p0); }
static float _GET_TEXT_SCREEN_WIDTH(BOOL p0) { return invoke<float>(0x96CEDAB660C8AD63, p0); }
static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0x9403D0F4C7711241, blip); }
static void _0x85105A11667450C8() { invoke<Void>(0x85105A11667450C8); }
static BOOL _0x7B8D9CA22BFDA75() { return invoke<BOOL>(0x7B8D9CA22BFDA75); }
static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0x6FF350B8CE5C45, p0); }
static void _0x7FC484F9A7BEE63F(Any p0) { invoke<Void>(0x7FC484F9A7BEE63F, p0); }
static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0x5BD150B52CE8D356, toggle); }
static Any _0xB3A703EC940A8280(Any* p0, Any* p1, Any* p2, BOOL p3, BOOL p4) { return invoke<Any>(0xB3A703EC940A8280, p0, p1, p2, p3, p4); }
static BOOL _0x75498485B109BDE4(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x75498485B109BDE4, p0, p1, p2); }
static void _0xFB55FCCBBF89D699(char* p0) { invoke<Void>(0xFB55FCCBBF89D699, p0); }
static void _0xED37EE530ABEACAF(BOOL p0, Any p1, Any p2) { invoke<Void>(0xED37EE530ABEACAF, p0, p1, p2); }
static void SET_BLIP_DISPLAY(Blip blip, int p1) { invoke<Void>(0xC11BDDB34C4D6840, blip, p1); }
static Any _0x29AF3D3BD6530F90(float p0, float p1) { return invoke<Any>(0x29AF3D3BD6530F90, p0, p1); }
static Any _0xF848A39E7E723F2A() { return invoke<Any>(0xF848A39E7E723F2A); }
static BOOL _0x88BE54B62DFE6C81(Any p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x88BE54B62DFE6C81, p0, p1, p2, p3); }
static void _SET_MAP_VISIBLE(BOOL toggle) { invoke<Void>(0x9565AD8C25DBDB4F, toggle); }
static Any _0xB956E7A8A2C81B21() { return invoke<Any>(0xB956E7A8A2C81B21); }
static void _0xED7756B8B9B72A59(BOOL p0) { invoke<Void>(0xED7756B8B9B72A59, p0); }
static void _0x6CA4935D412DFBBB(int p0) { invoke<Void>(0x6CA4935D412DFBBB, p0); }
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(char* website) { invoke<Void>(0x76F70873E860CFC9, website); }
static void _0x6B5560F7720541A3() { invoke<Void>(0x6B5560F7720541A3); }
static void DISPLAY_HELP_TEXT_THIS_FRAME(char* message, BOOL p1) { invoke<Void>(0x55A94E4AE453CFF1, message, p1); }
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xB379050CCC2CBBD3); }
static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xCB6E32D44B686474, toggle); }
static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xD033DA403C7AE3E6, blip); }
static void _0xE8268FAAC52877F0(Any p0) { invoke<Void>(0xE8268FAAC52877F0, p0); }
static void _0xD8FCDA89F7F7CD3E(Any p0, float p1) { invoke<Void>(0xD8FCDA89F7F7CD3E, p0, p1); }
static Any _0xC6B593EB99D2A3BB(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xC6B593EB99D2A3BB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xA49055E74F589B44); }
static void _0xFD524DA72CE899EB(BOOL p0) { invoke<Void>(0xFD524DA72CE899EB, p0); }
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0x17FC24DEA4A29349, p0, p1); }
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0x2AB6ED7BF09C00A0); }
static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0x32B08C9C10285EFE, blip); }
static void CLEAR_BRIEF() { invoke<Void>(0x7BE02F2D6F9172E6); }
static void _DRAW_SUBTITLE_TIMED(int time, BOOL p1) { invoke<Void>(0xB1547516FF59A048, time, p1); }
static void _0x45D516DE51E8760C(char* p0) { invoke<Void>(0x45D516DE51E8760C, p0); }
static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x4863A4D124B7C656); }
static Any DISPLAY_RADAR(BOOL Toggle) { return invoke<Any>(0x83DB85FD25128C55, Toggle); }
static void _0x7E1107991D9B87D4() { invoke<Void>(0x7E1107991D9B87D4); }
static Any _0x2B8F9384E1F00638(Any p0) { return invoke<Any>(0x2B8F9384E1F00638, p0); }
static Any FLASH_WANTED_DISPLAY(BOOL p0) { return invoke<Any>(0x3A6783918488B703, p0); }
static BOOL _0x9E79C6AB04BCE153(int* p0, int* p1, int* p2) { return invoke<BOOL>(0x9E79C6AB04BCE153, p0, p1, p2); }
static Any _0x9C6AC14A0E3FD85E() { return invoke<Any>(0x9C6AC14A0E3FD85E); }
static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0x7019A5479ABD2415, blip, number); }
static Hash _0xEE6AE7A090902579() { return invoke<Hash>(0xEE6AE7A090902579); }
static void _0xB4E3A61EB03642BF() { invoke<Void>(0xB4E3A61EB03642BF); }
static void SET_TEXT_LEADING(BOOL p0) { invoke<Void>(0x575759FE88389115, p0); }
static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0x1007718D43F8FDCC, blip); }
static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xB5159EEA1FF331B7, display); }
static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0x3DFCFAD590F85BF7, toggle); }
static void _0xDC9AD1F6A9099182(int headDisplayId, BOOL p1) { invoke<Void>(0xDC9AD1F6A9099182, headDisplayId, p1); }
static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0x7B4654D62B7E0E9E, blip); }
static void SET_WAYPOINT_OFF() { invoke<Void>(0xA7CBCBC7BA7487B0); }
static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xDCCB9777A11FDC48); }
static void _0xED9BBD613A065B9B(BOOL p0) { invoke<Void>(0xED9BBD613A065B9B, p0); }
static void _0xD14C6D196E70C6B0() { invoke<Void>(0xD14C6D196E70C6B0); }
static void _0x83E63655272CA2FF(float x, float y, float z) { invoke<Void>(0x83E63655272CA2FF, x, y, z); }
static Any _0x40E838A5D85AA99() { return invoke<Any>(0x40E838A5D85AA99); }
static int _0x3A1003023AD50A5B(char* p0, char* p1, int p2, int p3, char* p4) { return invoke<int>(0x3A1003023AD50A5B, p0, p1, p2, p3, p4); }
static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0x3B9B0039AC18FF1C, blip, p1); }
static void SET_HUD_COMPONENT_POSITION(Any p0, float p1, float p2) { invoke<Void>(0x353594586E54859C, p0, p1, p2); }
static void _SHOW_CURSOR_THIS_FRAME() { invoke<Void>(0xB29FFEDC1295422C); }
static void _0x60B08CFC977781CB(char* p0) { invoke<Void>(0x60B08CFC977781CB, p0); }
static BOOL DOES_TEXT_LABEL_EXIST(char* gxt) { return invoke<BOOL>(0x2A19A119886EC3BF, gxt); }
static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0x92B994E6E375301B, ped, p1); }
static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xBCF0E2C57A40A43F); }
static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(char* gxt, int slot) { return invoke<BOOL>(0xCB612AFFB3836CA1, gxt, slot); }
static void _0x6034C488CCB517C9() { invoke<Void>(0x6034C488CCB517C9); }
static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0x1651233EBDC5526E, blip, posX, posY, posZ); }
static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0x1FDCAFA848ABB8FA, blip, priority); }
static Any _0x22412630FE8E77B1() { return invoke<Any>(0x22412630FE8E77B1); }
static BOOL _IS_RADAR_ENABLED() { return invoke<BOOL>(0xE315C97CF2FE60D2); }
static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0x1E114237D972903B); }
static void _0xC2B96F2A3A574181(Any p0, Any p1, float p2, float p3) { invoke<Void>(0xC2B96F2A3A574181, p0, p1, p2, p3); }
static BOOL _IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xC9DB17B3DEEFE72D); }
static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xCB3AA991DE0DE3A6, blip, toggle); }
static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0x6AD0A85C0A947DE, blip, toggle); }
static char* _GET_TEXT_SUBSTRING_SAFE(char* text, int position, int length, int maxLength) { return invoke<char*>(0x4A236FB937A8F71F, text, position, length, maxLength); }
static Any _0x721DABD2FA72108() { return invoke<Any>(0x721DABD2FA72108); }
static void _0x7DAA24C67DFE502F() { invoke<Void>(0x7DAA24C67DFE502F); }
static Any _0x957FC735C07288AF(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5) { return invoke<Any>(0x957FC735C07288AF, p0, p1, p2, p3, p4, p5); }
static void _0xDF027291D2348C85() { invoke<Void>(0xDF027291D2348C85); }
static void _0xCAD0D7DF8CACB3C7(Blip blip, BOOL toggle) { invoke<Void>(0xCAD0D7DF8CACB3C7, blip, toggle); }
static void _SET_TEXT_ENTRY_2(char* p0) { invoke<Void>(0xA1F5C1FF1B6B5069, p0); }
static void _0xF6C1E001BA48C04B(BOOL p0) { invoke<Void>(0xF6C1E001BA48C04B, p0); }
static void _0x32FC20AAC20A8260() { invoke<Void>(0x32FC20AAC20A8260); }
static void _0xE9FCA8C9E2559819(BOOL p0) { invoke<Void>(0xE9FCA8C9E2559819, p0); }
static void _0xAD606E9C5EE4C108(BOOL p0) { invoke<Void>(0xAD606E9C5EE4C108, p0); }
static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0x85E82A3531BB69F1, blip); }
static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0x669A85DE4590FF03, id); }
static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0x946E2000B30012F6, entity); }
static void RESPONDING_AS_TEMP(float p0) { invoke<Void>(0x62DCE1F60435F497, p0); }
static Any _0x28C463CBC3CAAFBE(int p0) { return invoke<Any>(0x28C463CBC3CAAFBE, p0); }
static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xFE20115CD3128010, pickup); }
static void _REMOVE_NOTIFICATION(int handle) { invoke<Void>(0xBCCBEADBD0097C08, handle); }
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0x9FBFA08412B6B1C, red, green, blue, alpha); }
static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xBFAFDBA74467F7B4, blip, toggle); }
static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0x4DE9D61B2E4A3049, blip); }
static void _0x6516E02A6B7081B() { invoke<Void>(0x6516E02A6B7081B); }
static int _CREATE_HEAD_DISPLAY(Ped ped, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5) { return invoke<int>(0x539C217D4361C2EA, ped, username, pointedClanTag, isRockstarClan, clanTag, p5); }
static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xA65B96806AFE1495, align); }
static void _0x35432187949A2CC1() { invoke<Void>(0x35432187949A2CC1); }
static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xF66765686DCFB191, p0); }
static Any _0x58C6D9031C0E5DB7() { return invoke<Any>(0x58C6D9031C0E5DB7); }
static void _0x9DB763A3918C5639(Any p0, BOOL p1) { invoke<Void>(0x9DB763A3918C5639, p0, p1); }
static void _0xCF3FAEAFEE573346(Ped ped) { invoke<Void>(0xCF3FAEAFEE573346, ped); }
static void _ADD_TEXT_COMPONENT_ITEM_STRING(char* labelName) { invoke<Void>(0x2B088D6251C2080D, labelName); }
static void _0xBA866212B73D1B77() { invoke<Void>(0xBA866212B73D1B77); }
static Any _0x41CB076130ACB996(char* picName1, char* picName2, BOOL p2, Any p3, char* p4, char* p5) { return invoke<Any>(0x41CB076130ACB996, picName1, picName2, p2, p3, p4, p5); }
static void _0x131FD2ADD51671B9(BOOL p0, Any p1, Any p2) { invoke<Void>(0x131FD2ADD51671B9, p0, p1, p2); }
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x430648FD5FB3DC6D); }
static BOOL _0xCD6F39CB48F27DAC(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xCD6F39CB48F27DAC, p0, p1, p2); }
static Any _0xAF611F1240731758(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xAF611F1240731758, p0, p1, p2, p3); }
static BOOL _0x122033FC3A01CBCD(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x122033FC3A01CBCD, p0, p1, p2); }
static void _SET_RADAR_ZOOM_LEVEL_THIS_FRAME(float zoomLevel) { invoke<Void>(0x17A5B3507B4BD3D2, zoomLevel); }
static void CLEAR_PRINTS() { invoke<Void>(0x8ACEB4FC9E9EE225); }
static void _0xFC9D2AF4875B85BB() { invoke<Void>(0xFC9D2AF4875B85BB); }
static void _DRAW_TEXT(float x, float y) { invoke<Void>(0x3BB339EA038BF3F, x, y); }
static void _0x9CE2AB1E9A308072() { invoke<Void>(0x9CE2AB1E9A308072); }
static char* _GET_TEXT_SUBSTRING_SLICE(char* text, int startPosition, int endPosition) { return invoke<char*>(0x38274B7A77FE2ABD, text, startPosition, endPosition); }
static void _0x1B38656B135AC0C8(BOOL p0) { invoke<Void>(0x1B38656B135AC0C8, p0); }
static void _SET_HEAD_DISPLAY_WANTED(int headDisplayId, int wantedlvl) { invoke<Void>(0xE02203A89A5D6B92, headDisplayId, wantedlvl); }
static void CLEAR_THIS_PRINT(char* p0) { invoke<Void>(0x9ED24946DD556448, p0); }
static void _0xC86B6AC095F52374(BOOL p0) { invoke<Void>(0xC86B6AC095F52374, p0); }
static char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<char*>(0xE56385C16FE8459F, hash); }
static void _SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(float altitude, BOOL p1) { invoke<Void>(0xAB41D763D062D817, altitude, p1); }
static Any _0x18E3E535CDD6ADCA(int type, int image, char* text) { return invoke<Any>(0x18E3E535CDD6ADCA, type, image, text); }
static void _0x152310A693A9D5B5() { invoke<Void>(0x152310A693A9D5B5); }
static void _0xBDB34BAB0EB9B3A7() { invoke<Void>(0xBDB34BAB0EB9B3A7); }
static void _0x22440CC73AA415DC(Any p0, BOOL p1) { invoke<Void>(0x22440CC73AA415DC, p0, p1); }
static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xC5B4E9487339A2BB, blip, scale); }
static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xE26C5C53C581ABE3, blip, duration); }
static BOOL _0x34701A4F148D7968() { return invoke<BOOL>(0x34701A4F148D7968); }
static void _0x15A17B08294CFA7A() { invoke<Void>(0x15A17B08294CFA7A); }
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0x48900F4DFADD5528); }
static void _0x16A2D48BA07DA8D3(int headDisplayId, Any p1, Any p2) { invoke<Void>(0x16A2D48BA07DA8D3, headDisplayId, p1, p2); }
static void _0xBB4598924FC6E91F(int r, int g, int b, int a) { invoke<Void>(0xBB4598924FC6E91F, r, g, b, a); }
static void _0x19343327AC8343CC() { invoke<Void>(0x19343327AC8343CC); }
static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xDF4AEF2DAF2058ED, blip); }
static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0x164719CB1B4867A4); }
static BOOL _0x5D5331381BBC1DB4(Any p0) { return invoke<BOOL>(0x5D5331381BBC1DB4, p0); }
static void _0x55A25A34368F97B9(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x55A25A34368F97B9, p0, p1, p2); }
static float _GET_TEXT_SCALE_HEIGHT(float size, int font) { return invoke<float>(0x7A6411DA07C45D6F, size, font); }
static void _SET_WARNING_MESSAGE_2(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background) { invoke<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); }
static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0x1A7FD2D8C3A70316); }
static void _0xA7D70800CBB488E(Any p0, BOOL p1) { invoke<Void>(0xA7D70800CBB488E, p0, p1); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xB652D485C2719F66, id); }
static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x6BAB8924A8016B23); }
static BOOL _0xA346AF1B89D5C562(Any p0) { return invoke<BOOL>(0xA346AF1B89D5C562, p0); }
static void _0x3D275368655C2DE8(Hash hash) { invoke<Void>(0x3D275368655C2DE8, hash); }
static Any _0x20772C167FE7E02B(int type, char* button, char* text) { return invoke<Any>(0x20772C167FE7E02B, type, button, text); }
static Any _0x9D701C340F934C2() { return invoke<Any>(0x9D701C340F934C2); }
static void _SET_HEAD_DISPLAY_STRING(int headDisplayId, char* string) { invoke<Void>(0x803176C0B6E124B2, headDisplayId, string); }
static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xCBFEC03859B804B5, toggle); }
static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xB7E794A2C9C2F164, blip); }
static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0x216986E3E3E543F2, blip, spriteId); }
static Any _0x64CD7F935CEE6796() { return invoke<Any>(0x64CD7F935CEE6796); }
static void _0xC24FF75972174905(char* p0) { invoke<Void>(0xC24FF75972174905, p0); }
static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xB5830E534335F40B); }
static void _0xFF2A2F3774F8F7B6() { invoke<Void>(0xFF2A2F3774F8F7B6); }
static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0x8A3A08B6ADFB2936, blip, toggle); }
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF14C70F48493933D, id); }
static Any _0x83480654BB866D35(Any p0) { return invoke<Any>(0x83480654BB866D35, p0); }
static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0x332DCD2995FAD0D9, blip); }
static void _0x322497F9D5BA51B5(BOOL p0, Any* p1) { invoke<Void>(0x322497F9D5BA51B5, p0, p1); }
static void _0x695053617BEDFE08(Any p0, Any p1) { invoke<Void>(0x695053617BEDFE08, p0, p1); }
static void _0xDE14FE7CA67A546(BOOL p0) { invoke<Void>(0xDE14FE7CA67A546, p0); }
static void _0x3F289475894353C1() { invoke<Void>(0x3F289475894353C1); }
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0x40F69525B6A7FC01, value, decimalPlaces); }
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xBC3E0712810291FA); }
static BOOL RELEASE_NAMED_RENDERTARGET(Any* p0) { return invoke<BOOL>(0x508498A0BF4BE26A, p0); }
static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* gxtEntry) { invoke<Void>(0xC5B67A5E18AF2B72, blip, gxtEntry); }
static void _SHOW_WEAPON_WHEEL(BOOL forcedShow) { invoke<Void>(0x3F94FC59F6FA841D, forcedShow); }
static BOOL _0x2ADD3D2281F11C96(int headDisplayId) { return invoke<BOOL>(0x2ADD3D2281F11C96, headDisplayId); }
static void _0xCF741BA9D7F8A4CB() { invoke<Void>(0xCF741BA9D7F8A4CB); }
static void _0x2126A737EE712AA0(BOOL p0) { invoke<Void>(0x2126A737EE712AA0, p0); }
static void _0xA8B486EDFFB2102B() { invoke<Void>(0xA8B486EDFFB2102B); }
static void _0x8C0D10564CA29E91(int headDisplayId, BOOL p1) { invoke<Void>(0x8C0D10564CA29E91, headDisplayId, p1); }
static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL Toggle_Pause, int p2) { invoke<Void>(0xA3F46AEB5F384D1B, menuhash, Toggle_Pause, p2); }
static BOOL SET_USERIDS_UIHIDDEN(Any p0, Any* p1) { return invoke<BOOL>(0x45825BBCE43D8600, p0, p1); }
static int _DRAW_NOTIFICATION_4(BOOL blink, BOOL p1) { return invoke<int>(0x3A093E30B7C93FE1, blink, p1); }
static int GET_LENGTH_OF_LITERAL_STRING(char* string) { return invoke<int>(0x1DA63F254F38C8A7, string); }
static void _0x11A9D33D32C22E7D(BOOL p0) { invoke<Void>(0x11A9D33D32C22E7D, p0); }
static Any _0x3B5C3A9CEED18FA6() { return invoke<Any>(0x3B5C3A9CEED18FA6); }
static void _0x636842707464966D(BOOL p0) { invoke<Void>(0x636842707464966D, p0); }
static Any _0x72B28675D0A1DBDD() { return invoke<Any>(0x72B28675D0A1DBDD); }
static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0x1CD366AAE9844369); }
static void _0x3F73661030057AD6(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x3F73661030057AD6, p0, p1, p2, p3, p4); }
static void LINK_NAMED_RENDERTARGET(Hash hash) { invoke<Void>(0xEC8E255B8B6DD682, hash); }
static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0x3222CC46C8FEEDB3, blip, rotation); }
static void _0x4A92D2BF64AB846E(BOOL p0) { invoke<Void>(0x4A92D2BF64AB846E, p0); }
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(char* gxtentry) { invoke<Void>(0x10D2832C26BEFBED, gxtentry); }
static void _0x82A8E0F06A5F4FF(Any p0, float p1) { invoke<Void>(0x82A8E0F06A5F4FF, p0, p1); }
static Any _0xFEB0FEB5CF2215E9(float x, float y, float z, Any* p3, Any* p4) { return invoke<Any>(0xFEB0FEB5CF2215E9, x, y, z, p3, p4); }
static Vector3 GET_BLIP_INFO_ID_COORD(int p0) { return invoke<Vector3>(0xCDD7198F6C5A296A, p0); }
static void _0x6332DFF0815F4AB7() { invoke<Void>(0x6332DFF0815F4AB7); }
static void SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<Void>(0x3268FBC3FABF6E6D, p0, p1); }
static void _0x7CC7CFD7BFFAAC4C() { invoke<Void>(0x7CC7CFD7BFFAAC4C); }
static void _0xFA25E534CC4FB35B() { invoke<Void>(0xFA25E534CC4FB35B); }
static void _0x93B2C5D9116F64DF() { invoke<Void>(0x93B2C5D9116F64DF); }
static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0x3B9E0F9790F19380, x, y); }
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xFCBA4DF12111DD4C); }
}



namespace UNK
{
static int _GET_UI_LANGUAGE_ID() { return invoke<int>(0xFFFFFFFF); }
static Any _0xB6E106C0406480C4() { return invoke<Any>(0xB6E106C0406480C4); }
static int _GET_USER_LANGUAGE_ID() { return invoke<int>(0xFFFFFFFF); }
static void _GET_BROADCAST_FINSHED_LOS_SOUND(BOOL p0) { invoke<Void>(0x3000D5FFC90FC874, p0); }
static Any _0xE809D86F77755280() { return invoke<Any>(0xE809D86F77755280); }
static void _0x83B9251186509DDF(BOOL p0) { invoke<Void>(0x83B9251186509DDF, p0); }
static BOOL _0x132097FBCEC1ECD5() { return invoke<BOOL>(0x132097FBCEC1ECD5); }
static int _RETURN_ZERO() { return invoke<int>(0xDAF359A0D348E86C); }
static void _0x2430C2E22AE9466F(BOOL p0) { invoke<Void>(0x2430C2E22AE9466F, p0); }
static void _0x1A5340F6661A4B12(BOOL p0) { invoke<Void>(0x1A5340F6661A4B12, p0); }
}



namespace UNK1
{
static void _STOP_RECORDING_AND_SAVE_CLIP() { invoke<Void>(0xFD60997054FB930F); }
static void _0x37BA56EB7F4BA37C() { invoke<Void>(0x37BA56EB7F4BA37C); }
static BOOL _IS_RECORDING() { return invoke<BOOL>(0x49279CC117071237); }
static void _0x14CA049761F06FFB(char* p0, Any p1) { invoke<Void>(0x14CA049761F06FFB, p0, p1); }
static void _0xA0342EB4AE1476FC(float p0, float p1, BOOL p2) { invoke<Void>(0xA0342EB4AE1476FC, p0, p1, p2); }
static BOOL _0x6A7F52DE8FCFDCB7(BOOL p0) { return invoke<BOOL>(0x6A7F52DE8FCFDCB7, p0); }
static Any _0xD3D1D1913A6FA9E6() { return invoke<Any>(0xD3D1D1913A6FA9E6); }
static void _0x8D1A4408D797A1F3(BOOL p0) { invoke<Void>(0x8D1A4408D797A1F3, p0); }
static Any _0xA448B818DABB8AC2() { return invoke<Any>(0xA448B818DABB8AC2); }
static void _0xF967B6F59ECC3FA7(Any p0, Any p1, Any p2) { invoke<Void>(0xF967B6F59ECC3FA7, p0, p1, p2); }
static void _0x51439342AACB44DE() { invoke<Void>(0x51439342AACB44DE); }
static void _STOP_RECORDING_AND_DISCARD_CLIP() { invoke<Void>(0x1EFF8D822E2A2846); }
static void _0xCC361CCCBF63BF9D() { invoke<Void>(0xCC361CCCBF63BF9D); }
static void _SET_RECORDING_MODE(int mode) { invoke<Void>(0x248BC907E88C3263, mode); }
static Any _0xC28503BC157677A() { return invoke<Any>(0xC28503BC157677A); }
static void _0x6E6058A59531550F() { invoke<Void>(0x6E6058A59531550F); }
static void _0x1A78EE2357B90365() { invoke<Void>(0x1A78EE2357B90365); }
}



namespace UNK2
{
static void _0xD9502080F175D35() { invoke<Void>(0xD9502080F175D35); }
static void _0x6ADCD3170F3C14EB() { invoke<Void>(0x6ADCD3170F3C14EB); }
static void _0xFF75A79A08F91F76() { invoke<Void>(0xFF75A79A08F91F76); }
static void _0xD38715F0461E34C7(Any p0, Any p1) { invoke<Void>(0xD38715F0461E34C7, p0, p1); }
static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0x3CB9849EEA4B7BA); }
static void _0xDCC20E330A5D33D2(BOOL p0) { invoke<Void>(0xDCC20E330A5D33D2, p0); }
}



namespace UNK3
{
static BOOL _0x222039F42F5DFBC(Any* p0) { return invoke<BOOL>(0x222039F42F5DFBC, p0); }
static Any _0x24F962FCB1CB35AC() { return invoke<Any>(0x24F962FCB1CB35AC); }
static Any _0xA19F35C7FD0F0DF7() { return invoke<Any>(0xA19F35C7FD0F0DF7); }
static BOOL _0x3CC70B97716E8433(Any* p0) { return invoke<BOOL>(0x3CC70B97716E8433, p0); }
static Any _0xC9FB1BCC4CE30AB() { return invoke<Any>(0xC9FB1BCC4CE30AB); }
static BOOL _NETWORK_SHOP_BASKET_START(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE679F40C47F545E2, p0, p1, p2, p3); }
static Any _0x77935BB74337E9AA() { return invoke<Any>(0x77935BB74337E9AA); }
static Any _0xDB7DEAEB52779BE7() { return invoke<Any>(0xDB7DEAEB52779BE7); }
static BOOL _0xA8A565496ED936A6(Any p0) { return invoke<BOOL>(0xA8A565496ED936A6, p0); }
static Any _0xE2C5AE9E6C5E01FF() { return invoke<Any>(0xE2C5AE9E6C5E01FF); }
static Any _0x747926D48AD5D9D() { return invoke<Any>(0x747926D48AD5D9D); }
static BOOL _0x9189EAF5406F344D(BOOL p0, BOOL p1) { return invoke<BOOL>(0x9189EAF5406F344D, p0, p1); }
static BOOL _0xB4593E48EB78775A(Any p0) { return invoke<BOOL>(0xB4593E48EB78775A, p0); }
static Any _0x638088BF06EEFB2() { return invoke<Any>(0x638088BF06EEFB2); }
static BOOL _0xFF60755759699F54(Any* p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xFF60755759699F54, p0, p1, p2, p3, p4, p5); }
static Any _0x960BD8E4A8782DD8() { return invoke<Any>(0x960BD8E4A8782DD8); }
static BOOL _0xBEFB1EC5BD64484C(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xBEFB1EC5BD64484C, p0, p1, p2); }
static Any _0x5CEBF8A2083AA81A() { return invoke<Any>(0x5CEBF8A2083AA81A); }
static BOOL _0x3BF8E440091BAF1D(Any p0) { return invoke<BOOL>(0x3BF8E440091BAF1D, p0); }
static Any _0xC0EF410FE489E4BC() { return invoke<Any>(0xC0EF410FE489E4BC); }
static Any _0x683A3A75B862B858() { return invoke<Any>(0x683A3A75B862B858); }
static BOOL _0x24E68C42B6D83652(Any* p0, Any* p1) { return invoke<BOOL>(0x24E68C42B6D83652, p0, p1); }
static BOOL _0xBD3E42CFE75329FE(Any p0) { return invoke<BOOL>(0xBD3E42CFE75329FE, p0); }
static BOOL _0xD5F038403B31104A(Any p0) { return invoke<BOOL>(0xD5F038403B31104A, p0); }
static Any _0xCA56FA2B54C5055B() { return invoke<Any>(0xCA56FA2B54C5055B); }
static BOOL _0x6DDA083DB04D1FA1(Any p0) { return invoke<BOOL>(0x6DDA083DB04D1FA1, p0); }
static BOOL _0xFDBEA602AC73DAE9(Any* p0) { return invoke<BOOL>(0xFDBEA602AC73DAE9, p0); }
static int _NETWORK_SHOP_GET_PRICE(Hash hash, Hash hash2, BOOL p2) { return invoke<int>(0xE7971C07ADA0C0F, hash, hash2, p2); }
static BOOL _0x72B2B28F4FDA789C(Any p0, Any p1) { return invoke<BOOL>(0x72B2B28F4FDA789C, p0, p1); }
static BOOL _0x9FE5BE517F50B320(Any* p0) { return invoke<BOOL>(0x9FE5BE517F50B320, p0); }
static BOOL _0xA36680498EC4C1FC(Any p0, Any p1) { return invoke<BOOL>(0xA36680498EC4C1FC, p0, p1); }
static BOOL _0xA484CE83AE967213(Any p0, Any* p1) { return invoke<BOOL>(0xA484CE83AE967213, p0, p1); }
static BOOL _0xA5546C3771405485(Any p0) { return invoke<BOOL>(0xA5546C3771405485, p0); }
static Any _0x3C06DC99916AF315() { return invoke<Any>(0x3C06DC99916AF315); }
static Any _0x305BEAE5B6C15C55(Player p0, Object p1) { return invoke<Any>(0x305BEAE5B6C15C55, p0, p1); }
static char* _GET_ONLINE_VERSION() { return invoke<char*>(0xBE12BB747F0B3476); }
}



namespace VEHICLE
{
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x1605FE88D5A04420, vehicle); }
static float _0x21C425AF9EA319E7(Any p0) { return invoke<float>(0x21C425AF9EA319E7, p0); }
static void _0xBC513CF9473E6605(Any p0, BOOL p1) { invoke<Void>(0xBC513CF9473E6605, p0, p1); }
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* p2) { invoke<Void>(0x330599A967B286B7, p0, modelHash, p2); }
static void _0x4C48F6ABB3D52B89(Any p0, BOOL p1) { invoke<Void>(0x4C48F6ABB3D52B89, p0, p1); }
static void _0xB3B661FBD66D3DB0(Any p0, BOOL p1) { invoke<Void>(0xB3B661FBD66D3DB0, p0, p1); }
static void _SET_VEHICLE_CREATES_MONEY_PICKUPS_WHEN_EXPLODED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1401725898A3B16D, vehicle, toggle); }
static BOOL HAS_PRELOAD_MODS_FINISHED(Any p0) { return invoke<BOOL>(0xE28F9D074D5582FA, p0); }
static void STEER_UNLOCK_BIAS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9DE17AC79173ED6A, vehicle, toggle); }
static Entity GET_TRAIN_CARRIAGE(Vehicle train, int carriage) { return invoke<Entity>(0xE90EA3BF55BFC1C8, train, carriage); }
static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF19EBFFFFB7CEBC7, vehicle, p1); }
static void _0x24E8556191762131() { invoke<Void>(0x24E8556191762131); }
static void _0x659D8201BBDB5207(Vehicle vehicle, BOOL p1) { invoke<Void>(0x659D8201BBDB5207, vehicle, p1); }
static void _0xD3F64DCECC41B167(Any p0, BOOL p1) { invoke<Void>(0xD3F64DCECC41B167, p0, p1); }
static void _0x5585DB21656A92CE(Any p0, BOOL p1) { invoke<Void>(0x5585DB21656A92CE, p0, p1); }
static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x6C2E0C74918E1EBA, vehicle, cargobob); }
static Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Any p0, Any p1) { return invoke<Any>(0xDD032387799D96A8, p0, p1); }
static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xEF90EF7B0A4543EE, vehicle); }
static void _0x1AA05998986E2156(Any p0, BOOL p1) { invoke<Void>(0x1AA05998986E2156, p0, p1); }
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0xF1F429E685708DF1); }
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0x7C898812896A5304, model, suppressed); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(Any p0) { return invoke<float>(0x60374942E3612AB3, p0); }
static BOOL _0xF1834862BAB064ED(Any p0) { return invoke<BOOL>(0xF1834862BAB064ED, p0); }
static void _0x7A52503A7C7068B0(Any p0, Any p1) { invoke<Void>(0x7A52503A7C7068B0, p0, p1); }
static void _0x85B417849F63760E(Any p0, float p1) { invoke<Void>(0x85B417849F63760E, p0, p1); }
static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0x436553F2087E3396, vehicle); }
static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x9BABFB0832EA43CE, vehicle); }
static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xF26C898C74E75680, vehicle, extraId); }
static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x33E99997F2E17EED, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x10BD59A398C824DA, towTruck, vehicle); }
static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0xC37B31D509582703, heli, toggle, canBeUsedByAI); }
static Any SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { return invoke<Any>(0x20A9FA4A7B48AC99, train, speed); }
static void _0x187B38DA489C3A5D(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x187B38DA489C3A5D, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static BOOL _IS_CARGOBOB_HOOK_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0x49DCB5DE283168AD, cargobob); }
static void _0x34DEDE483DD44B05(Vehicle vehicle, float p1) { invoke<Void>(0x34DEDE483DD44B05, vehicle, p1); }
static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0x67E650508213682C, vehicle, friction); }
static void _0x185480333425A565(Vehicle vehicle, BOOL p1) { invoke<Void>(0x185480333425A565, vehicle, p1); }
static void _0xD85EFF58DE44BCB4(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD85EFF58DE44BCB4, vehicle, p1); }
static void _0xB590D238DF748992(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB590D238DF748992, vehicle, p1); }
static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x7F4F64DCC48E87D6, vehicleAsset); }
static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x7E16166EB69398DB, p0); }
static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0xA0FB8E660C30A607, vehicle, trailer); }
static void _0x2B595D4B593AF2BB(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2B595D4B593AF2BB, vehicle, toggle); }
static void _0xE8C20102E099180B(Vehicle vehicle, BOOL p1) { invoke<Void>(0xE8C20102E099180B, vehicle, p1); }
static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0xC2EFA17DB240E433, vehicle); }
static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0x66E8010228AFE795, vehicle, modKit); }
static void _0x24657362AE386E23(Any p0, BOOL p1) { invoke<Void>(0x24657362AE386E23, p0, p1); }
static void _0x1CBA9FEB1EE3D287(Any p0, BOOL p1) { invoke<Void>(0x1CBA9FEB1EE3D287, p0, p1); }
static void _0xE7549DFE804C4455(Vehicle vehicle, int p1) { invoke<Void>(0xE7549DFE804C4455, vehicle, p1); }
static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0x85E88CC5C37A1A11, vehicle, pearlescentColor, wheelColor); }
static int GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<int>(0x220CD338CAA7FBA5, p0, p1, p2); }
static void _0x7C07BAE22A6DCC26(Vehicle vehicle, BOOL p1) { invoke<Void>(0x7C07BAE22A6DCC26, vehicle, p1); }
static void _0x91F9B4824ADB3A67(Any p0, BOOL p1) { invoke<Void>(0x91F9B4824ADB3A67, p0, p1); }
static Any GET_VEHICLE_RECORDING_ID(Any p0, Any* p1) { return invoke<Any>(0x6AAC233AFC1A2D42, p0, p1); }
static Ped _GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doorIndex) { return invoke<Ped>(0xE689157D2C92EF58, vehicle, doorIndex); }
static void _0xC58DFAB7F0CADB91(Any p0, Any p1) { invoke<Void>(0xC58DFAB7F0CADB91, p0, p1); }
static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5357B99A70FE63BD, vehicle, toggle); }
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0xDED5CB06960E4D90, vehicleGenerator); }
static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD4B1A97FE609DF9E, vehicle, toggle); }
static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x32C6487B93CCAF4F, vehicle, seatIndex); }
static void _0xDDA54CBAB917E8CF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDDA54CBAB917E8CF, vehicle, p1); }
static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xF10A3EEF26A8534, vehicle, p1, p2); }
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x41D136A177C3AF5B, multiplier); }
static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL otherwise) { invoke<Void>(0x8BE1AEC303A057F7, vehicle, value, instantly, otherwise); }
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x2013EC2B01A543A2, vehicle); }
static void _0x7CC4EA4FED507D94(Vehicle vehicle, BOOL p1) { invoke<Void>(0x7CC4EA4FED507D94, vehicle, p1); }
static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x977E90DD5881BA08, vehicle); }
static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0x6F990FD97BF2037E, vehicle); }
static void _TASK_BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int killEngine, BOOL unknown) { invoke<Void>(0x29D71D9710F2540E, vehicle, distance, killEngine, unknown); }
static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0x9CD62B814078F66F, toggle); }
static BOOL _GET_BOAT_ANCHOR(Vehicle vehicle) { return invoke<BOOL>(0xF5D3646514A2683A, vehicle); }
static void _0x55A0FC8CC485CF5E(Any p0, BOOL p1) { invoke<Void>(0x55A0FC8CC485CF5E, p0, p1); }
static BOOL _0x26C6FA33EF926593(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x26C6FA33EF926593, vehicle, p1); }
static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0x1DE619339B851266, vehicle); }
static BOOL _0x464DF89C51A470F6(Any p0) { return invoke<BOOL>(0x464DF89C51A470F6, p0); }
static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0xB1C2684846E70456, vehicle); }
static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xFD1103907C4DAA91, vehicle); }
static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0xBE950C829D51F77D, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
static Any SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { return invoke<Any>(0x77C883D95516B566, vehicle, enabled); }
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Any p0, Any p1, Any* p2, float p3, Any p4) { invoke<Void>(0x1AB0478892B37122, p0, p1, p2, p3, p4); }
static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0x31784B1E9A6BDD10, vehicle, modType, toggle); }
static void _0xAE1A93653BAA7D3C(Any p0, float p1) { invoke<Void>(0xAE1A93653BAA7D3C, p0, p1); }
static void _SET_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x1FD802F9308DD553, vehicle, index, toggle); }
static int _GET_VEHICLE_MODEL_MAX_NUMBER_OF_PASSENGERS(Hash modelHash) { return invoke<int>(0xAAD0C2C6698FC5AA, modelHash); }
static Any SET_GARBAGE_TRUCKS(BOOL toggle) { return invoke<Any>(0x1E97BCAA4A027FC2, toggle); }
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x9610B4E7F56D6E8, vehicle, owned); }
static Any _0x292E660CC707615A(Vehicle vehicle, BOOL p1) { return invoke<Any>(0x292E660CC707615A, vehicle, p1); }
static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xC3362AC1471926AA, vehicle); }
static void _0xA319A09EA1E1072B(Any p0, BOOL p1) { invoke<Void>(0xA319A09EA1E1072B, p0, p1); }
static Any _0xD8B8669AF684B128(Any p0) { return invoke<Any>(0xD8B8669AF684B128, p0); }
static Any _0x883F8CC56FCEEB11(float p0, float p1, float p2, float p3, float p4, BOOL p5) { return invoke<Any>(0x883F8CC56FCEEB11, p0, p1, p2, p3, p4, p5); }
static BOOL _IS_ANY_VEHICLE_SEAT_EMPTY(Vehicle vehicle) { return invoke<BOOL>(0x7F56B3C63FB1070E, vehicle); }
static float GET_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0xFDE23E9F25825F78, p0); }
static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0x47AF70B2CA497276, vehicle, ped, toggle); }
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(Any p0) { return invoke<float>(0x7D5F946BC15EF4E0, p0); }
static void _SET_VEHICLE_DOOR_BREAKABLE(Vehicle vehicle, int doorIndex, BOOL isBreakable) { invoke<Void>(0x28F46AE29FA4808C, vehicle, doorIndex, isBreakable); }
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0xB56F2A6AD009D74D, p0, p1, p2, p3, p4, p5, p6); }
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x720A9AC8184DF8D8, vehicle, toggle); }
static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any* p1) { return invoke<BOOL>(0xEBB7C2AE703AC573, p0, p1); }
static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x65EAC7282CD55496, vehicle, p1); }
static void _0x16FB058BC0769D90(Any p0, float p1) { invoke<Void>(0x16FB058BC0769D90, p0, p1); }
static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0xCD83D0B229A931D4, train, toggle); }
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xAF18A34434FDEA9C, vehicle, toggle); }
static void _0xB5199EA86C8BB5AF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB5199EA86C8BB5AF, vehicle, p1); }
static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int numCombos) { invoke<Void>(0xFC5D934CEF290A3E, vehicle, numCombos); }
static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x41EEFFCF5FB2A6E4, vehicle); }
static void _0xF0CA3BE951D0DBEA(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF0CA3BE951D0DBEA, vehicle, p1); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0xC7408073A73BD3B); }
static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int p1) { invoke<Void>(0xB4EBE8F97449D02E, vehicle, p1); }
static void _CLOSE_VEHICLE_BOMB_BAY(Vehicle vehicle) { invoke<Void>(0x2EE2ABCD92682BDF, vehicle); }
static void _0xF6F2F0ED76A972D1(BOOL p0) { invoke<Void>(0xF6F2F0ED76A972D1, p0); }
static Any _0x1A533970696206C9(Any p0) { return invoke<Any>(0x1A533970696206C9, p0); }
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x43EB68B30C2D12B2, vehicle, r, g, b); }
static void _0xFE2D51E7BCD20266(Vehicle p0, Entity p1, float p2) { invoke<Void>(0xFE2D51E7BCD20266, p0, p1, p2); }
static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x69E072E2BFA00412, vehicle, state); }
static Vehicle _0xBC703EB2FE829073(Object object) { return invoke<Vehicle>(0xBC703EB2FE829073, object); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x74AE1C9D05C52F0C, vehicle, toggle); }
static void _0x49E8F69332A3C155(Vehicle vehicle, float p1) { invoke<Void>(0x49E8F69332A3C155, vehicle, p1); }
static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x63BC24621BDD8342, x, y, z, radius, modelHash, flags); }
static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0xF283F0E0B39E6846, model); }
static void _SET_VEHICLE_PAINT_FADE(Vehicle veh, float fade) { invoke<Void>(0x653D5FF464380C4A, veh, fade); }
static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xF9A6D3E93D31D188, vehicle); }
static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0xC780DEE9C0D887BF, vehicle, pearlescentColor, wheelColor); }
static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xFA8B3FAB987D0981, vehicle, trailer, radius); }
static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x7DC8EB593E346DA4, vehicle, toggle); }
static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0x75D8F2D9A47E4AE2, vehicle, doorIndex); }
static BOOL WAS_COUNTER_ACTIVATED(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x5B7F53BCEFB928B3, vehicle, p1); }
static void START_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1, Any* p2, BOOL p3) { invoke<Void>(0x5809312A3DC0ED0D, p0, p1, p2, p3); }
static void _0x4F5ABD24AD076FF5(Any p0, BOOL p1) { invoke<Void>(0x4F5ABD24AD076FF5, p0, p1); }
static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0xCB37FFCADC555468, vehicle, cargobob, p2, x, y, z); }
static BOOL _0x7D5667109E828021(Any p0) { return invoke<BOOL>(0x7D5667109E828021, p0); }
static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Vehicle hash) { return invoke<BOOL>(0x753C14DD45ABE554, vehicle, hash); }
static void _0xC2677E1BE02B1E79(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC2677E1BE02B1E79, vehicle, p1); }
static Any _0x901221DBE5D53CEB(Any p0) { return invoke<Any>(0x901221DBE5D53CEB, p0); }
static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x6041EECCC859EE13, vehicle, value); }
static Any GET_CURRENT_PLAYBACK_FOR_VEHICLE(Any p0) { return invoke<Any>(0x36455DD22C13AD6E, p0); }
static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0x3E5C6F3596BA7A15, vehicle); }
static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int p3) { invoke<Void>(0xB5AD07DFDC37E1F1, vehicle, paintType, color, p3); }
static void RELEASE_PRELOAD_MODS(Any p0) { invoke<Void>(0x73F356B4B85675C8, p0); }
static Any _0xCA0F6B2982A16AED(Any p0, Any p1, Any p2) { return invoke<Any>(0xCA0F6B2982A16AED, p0, p1, p2); }
static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xD3AE48D8EB7DCBE6, model); }
static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x38B4190AFCA07B12, vehicle, health); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9A57A532E2896649, vehicle, toggle); }
static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL front) { return invoke<BOOL>(0xD513DB0A53D1FEF3, vehicle, front); }
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { invoke<Void>(0x2FA9C6D79054F1BE, x1, y1, z1, x2, y2, z2, unk); }
static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x35DBB18680CBB9BD, vehicle, windowIndex); }
static Any SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { return invoke<Any>(0xDB859F5026BDBB0E, vehicle, WheelType); }
static void _0x1706FDF91A29B76C() { invoke<Void>(0x1706FDF91A29B76C); }
static char* _GET_VEHICLE_MOD_COLOR_2_TEXT_LABEL(Vehicle vehicle) { return invoke<char*>(0xF1D505B6D90DEB41, vehicle); }
static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle) { return invoke<BOOL>(0xFA3ED0FFF3FD8F34, vehicle); }
static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0x6509ED7AD3D989FE, vehicle); }
static float GET_VEHICLE_CLASS_MAX_BRAKING(Any p0) { return invoke<float>(0x40CD46AED1E463E7, p0); }
static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xB4DDB992C7BCF57, vehicle, p1); }
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0xDDE375984608ED63); }
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x25992F7526B31C35, vehicle, state); }
static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x340E53D4C85EDB25, vehicle); }
static void _0xF9FA306D791633CA(Any p0, BOOL p1) { invoke<Void>(0xF9FA306D791633CA, p0, p1); }
static void _0xC21A6A5F88385C66(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC21A6A5F88385C66, vehicle, p1); }
static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xEF447B3CD782A277, vehicle, offsetX, offsetY, offsetZ); }
static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0xFD2475756036347D, vehicle, colorPrimary, colorSecondary); }
static float GET_VEHICLE_CLASS_MAX_AGILITY(Any p0) { return invoke<float>(0x4067B773710819E, p0); }
static void _0x41D490FE43009014(Vehicle vehicle, Any p1) { invoke<Void>(0x41D490FE43009014, vehicle, p1); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x85874D3067D4DBBD, vehicle, player, toggle); }
static void _0xB537FCB837C7D735(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB537FCB837C7D735, vehicle, p1); }
static void _0x7CEA7F51F1CF95BE(BOOL p0) { invoke<Void>(0x7CEA7F51F1CF95BE, p0); }
static char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<char*>(0xCD9048D20060015, vehicle, modType); }
static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x4064D85BB691C11B, vehicle, state); }
static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x1BCE164A254176FA, vehicle, p1); }
static float _0x3EFB918FB1A938AB(Hash modelHash) { return invoke<float>(0x3EFB918FB1A938AB, modelHash); }
static float _GET_VEHICLE_SUSPENSION_HEIGHT(Vehicle vehicle) { return invoke<float>(0x434033F8D2280D76, vehicle); }
static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0x86C86C7DC692596E, modelHash); }
static float _0x90262C6E0C8A20BF(Vehicle vehicle) { return invoke<float>(0x90262C6E0C8A20BF, vehicle); }
static void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x6F199D2803D51520, p0); }
static Any _0x92A878E40391805A(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x92A878E40391805A, p0, p1, p2, p3, p4, p5, p6); }
static Any CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { return invoke<Any>(0x260FAF7AD1C9058F, vehicle); }
static void _0xB87075F2743E3697(Any p0, float p1, BOOL p2) { invoke<Void>(0xB87075F2743E3697, p0, p1, p2); }
static void _0x4ED4F6CB193F7177(Any p0, BOOL p1) { invoke<Void>(0x4ED4F6CB193F7177, p0, p1); }
static void _0x8C66EC8B08DBF014(Any p0, BOOL p1) { invoke<Void>(0x8C66EC8B08DBF014, p0, p1); }
static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0xFCFE5DE581193020, vehicle); }
static float GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0xDEC0D741905B6DAE, p0); }
static BOOL SET_PED_ENABLED_BIKE_RINGTONE(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x5E138B0E80F1E8B3, vehicle, p1); }
static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0x15C84F66C4F9715B, vehicle, tint); }
static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0xE52FA253BAE3E498, vehicle); }
static void _0x25717A4256D49B89(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0x25717A4256D49B89, vehicle, x, y, z, p4); }
static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x7C71ACC806E247F2, train, x, y, z); }
static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0xC0D1E1F6B5DA1E54, vehicle, state); }
static BOOL _0x863EEE0D3CF076AB(Any p0) { return invoke<BOOL>(0x863EEE0D3CF076AB, p0); }
static Any SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL Toggle) { return invoke<Any>(0x86F61FD03CB240C0, vehicle, Toggle); }
static float _0x3BEA357D77C00A2E(Hash modelHash) { return invoke<float>(0x3BEA357D77C00A2E, modelHash); }
static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC7B9CDA3DF09731B, vehicle, toggle); }
static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x73A64FC3157DD8A7, train); }
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL p1) { invoke<Void>(0xE93FDB7E72001C70, veh, p1); }
static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0xCC5B4B23D3F759B4, vehicle); }
static void _0x1130D8A708382BED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1130D8A708382BED, vehicle, toggle); }
static BOOL _IS_HEADLIGHT_L_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0x15987892AB20557A, vehicle); }
static Any CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { return invoke<Any>(0x60C7627F18E7E3B5, vehicle); }
static Any ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { return invoke<Any>(0x149D17B5E42356DC, vehicle, windowIndex); }
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0xCE6E1FE959367E6D, active); }
static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0x22302C6C9DC94642, vehicle, livery); }
static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x58784EB5BE12044, x, y, z, radius); }
static BOOL _0x593073D672DC0947(Vehicle vehicle) { return invoke<BOOL>(0x593073D672DC0947, vehicle); }
static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xC3EF4DD17490E8DB, vehicle); }
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x8762E3977922ADCB, p0); }
static BOOL _0x8494858761893077(Vehicle vehicle) { return invoke<BOOL>(0x8494858761893077, vehicle); }
static BOOL _0x70083B21A94A4A8C(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x70083B21A94A4A8C, p0, p1, p2, p3, p4); }
static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction) { return invoke<Vehicle>(0x3320CDE7739E0174, variation, x, y, z, direction); }
static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0xDB3DE7E1A7B673FA, vehicle); }
static float _0x6E74F0BC9AC0B03F(Any p0) { return invoke<float>(0x6E74F0BC9AC0B03F, p0); }
static Any SET_PLAYBACK_SPEED(Any p0, float speed) { return invoke<Any>(0x9301AAD27B1B527B, p0, speed); }
static void _0x7A65B55A0DAE2670(Any p0, float p1) { invoke<Void>(0x7A65B55A0DAE2670, p0, p1); }
static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x480DA4A4EBDCE31C, vehicle); }
static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return invoke<BOOL>(0xE06C11511DE39267, vehicle, p1, p2); }
static Any SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { return invoke<Any>(0x11E91887F8A313B1, vehicle, isStolen); }
static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEAE4266C3A338F8D, vehicle, toggle); }
static void _0xE1D9AA34C37E78A4(Any p0, float p1) { invoke<Void>(0xE1D9AA34C37E78A4, p0, p1); }
static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x5B2F6F1A93CFEB26, vehicle); }
static void _0x140A8A62940C1822(Vehicle vehicle, Any p1) { invoke<Void>(0x140A8A62940C1822, vehicle, p1); }
static Any _0xF1039DE715AF0CDC() { return invoke<Any>(0xF1039DE715AF0CDC); }
static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0x406E9DA605D8FD2B, vehicle, modType, modIndex, customTires); }
static void _DETACH_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0x7659544921DB9D9B, vehicle); }
static void _0x7DA612535CC9EB30(Any p0) { invoke<Void>(0x7DA612535CC9EB30, p0); }
static void _0xEE99319860A58F59(Any p0, float p1) { invoke<Void>(0xEE99319860A58F59, p0, p1); }
static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(Vehicle helicopter, float multiplier) { invoke<Void>(0xBFD5815DE52F6BC6, helicopter, multiplier); }
static BOOL _IS_CARGOBOB_MAGNET_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0x2996064AD3CF7CEA, cargobob); }
static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xD2F1772C968130A, vehicle, tyreIndex); }
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xF44A70E03E12CD06, p0, p1, p2, p3); }
static void _0x70C020513EF092F3(Vehicle vehicle, BOOL p1) { invoke<Void>(0x70C020513EF092F3, vehicle, p1); }
static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float fix) { invoke<Void>(0x3926A2D202D1C474, vehicle, fix); }
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x5F3BFD21D9B2F155, vehicle, r, g, b); }
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF63D1620AD820626, vehicle, toggle); }
static void DELETE_ALL_TRAINS() { invoke<Void>(0x1E0ABBAD9295C341); }
static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0xF18E883F5194D8A4, driver, entity, xTarget, yTarget, zTarget); }
static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xB685879FF3E5ECD, vehicle); }
static BOOL _0xC33E37C6354F5E05(Any p0) { return invoke<BOOL>(0xC33E37C6354F5E05, p0); }
static void PRELOAD_VEHICLE_MOD(Any p0, Any p1, Any p2) { invoke<Void>(0x37E86BE82B987C28, p0, p1, p2); }
static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC23D324D7619A77, vehicle, toggle); }
static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x486F923523D0F4DB, vehicle, r, g, b); }
static Any FIX_VEHICLE_WINDOW(Vehicle vehicle, int index) { return invoke<Any>(0xC8A9FC436D0002A3, vehicle, index); }
static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0xC90889BF6C7006D1, vehicle, modType); }
static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x48C585788C05DB37, vehicle, closeInstantly); }
static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle p0, BOOL p1) { invoke<Void>(0xF03267806723DC68, p0, p1); }
static void _0xC4B673735151DF6B(Any p0, float p1, float p2, float p3) { invoke<Void>(0xC4B673735151DF6B, p0, p1, p2, p3); }
static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x9B3E806EC535DBC3, vehicle, dirtLevel); }
static void _0xD331AEFC9B16F6FC(Any p0, Any p1) { invoke<Void>(0xD331AEFC9B16F6FC, p0, p1); }
static Any ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { return invoke<Any>(0xD619A2EC10223F33, vehicle, windowIndex); }
static void _ENABLE_CARGOBOB_HOOK(Vehicle cargobob, int state) { invoke<Void>(0x38F5387FF19D3B83, cargobob, state); }
static void _0x42FC26A136BA791B(Vehicle vehicle) { invoke<Void>(0x42FC26A136BA791B, vehicle); }
static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { invoke<Void>(0x166C39D9F6B273E0, vehicle, doorIndex, loose, openInstantly); }
static char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<char*>(0x9111F14F8ABAE773, vehicle); }
static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x6749AD8E7CB79ADE, vehicle); }
static void _0xD19C844C2EAA893A(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xD19C844C2EAA893A, vehicle, p1, p2); }
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { invoke<Void>(0xE15514D529A8A805, p0, p1, p2, p3, p4, p5); }
static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, int toggle) { invoke<Void>(0x10CCA34E93B40732, vehicle, extraId, toggle); }
static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x47815B15B45B2F43, x1, x2, y1, y2, z1, z2); }
static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0xA8059F869DFB2747, model); }
static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0x26EBC33DCC570031, toggle); }
static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0x19000717E98F2F50, vehicle, paintType, color); }
static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0x6CAD98E40B90607, vehicle, paintType, color); }
static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0x41D6B0C62443EFBB, vehicleHash, vehicleAsset); }
static void REMOVE_VEHICLE_STUCK_CHECK(Any p0) { invoke<Void>(0x5C439465C03F116C, p0); }
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x477102A8963B16B4, vehicle, r, g, b); }
static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x8704B0F200BD412D, vehicle, seatIndex); }
static Any SET_RANDOM_BOATS(BOOL toggle) { return invoke<Any>(0x3AC8008C6605ABAA, toggle); }
static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x56F45DEAAF97E44B, vehicle, modType); }
static void _0xACBF01532C416D75(float p0) { invoke<Void>(0xACBF01532C416D75, p0); }
static Any ROLL_DOWN_WINDOWS(Vehicle vehicle) { return invoke<Any>(0x83D5F5F7A5D5B8E0, vehicle); }
static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0xC038610ACB5911A8, cargobob); }
static void _SET_CARGOBOB_HOOK_POSITION(Any p0, float p1, float p2, BOOL p3) { invoke<Void>(0x428C32696D60D6EC, p0, p1, p2, p3); }
static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0xC14CF45D822A1BEF, vehicle); }
static void _OPEN_VEHICLE_BOMB_BAY(Vehicle vehicle) { invoke<Void>(0xF19F1008F0D5159F, vehicle); }
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xEA6D2D4773D7E10, p0); }
static void _0xA9D72D93FBF36F41(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA9D72D93FBF36F41, vehicle, p1); }
static char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<char*>(0x42CE83CA72E324C3, vehicle, modType, modValue); }
static BOOL _0xE1F0495E9F9480AC(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xE1F0495E9F9480AC, vehicle, p1); }
static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3D7DA66D38B8663F, vehicle, toggle); }
static void _0xB03661C397AB03CC(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB03661C397AB03CC, vehicle, p1); }
static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3D6B0813889C9DDF, vehicle, toggle); }
static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x741E9FE4E5FE07D8, vehicle); }
static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x32C392F5FD14953C, vehicle, toggle); }
static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, Any p1, Any p2) { return invoke<Any>(0x259CEB8F7994E17B, vehicle, p1, p2); }
static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0x8A8EDD5DBFB78C2B, modelHash); }
static BOOL _IS_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x8A455A983374FA6C, vehicle, index); }
static BOOL _0xA4E0F38525D47268(Any p0) { return invoke<BOOL>(0xA4E0F38525D47268, p0); }
static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x7D1AE670C52C839A, vehicle, r, g, b); }
static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0x6CA4E0CFF9C81970, vehicle); }
static BOOL _GET_VEHICLE_OWNER(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xA2E21A0982832F8E, vehicle, entity); }
static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0x72D8EEFEABAD4CC9, vehicle, instantlyRaise); }
static void _0xD7CF0658A5752676(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD7CF0658A5752676, vehicle, p1); }
static void _0x5979766C983DFF8C(Any p0, float p1) { invoke<Void>(0x5979766C983DFF8C, p0, p1); }
static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0x5BEC9E6C4E1187EE, vehicle); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0x97344EBF9AD0F17F, vehicle, plateIndex); }
static Any GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<Any>(0xECBA3FEAD66F0B3D, vehicle, modType, modIndex); }
static void _0x69E6AC613BB0CF6D(float value) { invoke<Void>(0x69E6AC613BB0CF6D, value); }
static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xE00D5F67AE8F1A68, vehicle); }
static void _0x168A4B6DCF0C467A(Vehicle vehicle, BOOL p1) { invoke<Void>(0x168A4B6DCF0C467A, vehicle, p1); }
static Any _0x13C2F50C8DEB4321() { return invoke<Any>(0x13C2F50C8DEB4321); }
static int _0xE185B1C4FB7C13C3(Any p0, float p1) { return invoke<int>(0xE185B1C4FB7C13C3, p0, p1); }
static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5CD1803153799845, vehicle, toggle); }
static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0x7D3DEE1D65BA1603, vehicle, modType); }
static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1B7FCBF5F0A9F480, vehicle, toggle); }
static void _SET_VEHICLE_ENGINE_POWER_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0x656E2372A9F30448, vehicle, value); }
static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xE640F7052EEB67D9, vehicle, multiplier); }
static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { invoke<Void>(0x3AE146F24A3AEEE0, vehicle, doorIndex, closeInstantly); }
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, float p1) { invoke<Void>(0xDE09FFB26E05B1EC, p0, p1); }
static BOOL _IS_THIS_MODEL_AN_EMERGENCY_BOAT(Hash model) { return invoke<BOOL>(0x7942D30C2A703CD1, model); }
static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0x217A83259AE119F4, vehicle); }
static BOOL DOES_VEHICLE_EXIST_WITH_DECORATOR(char* decorator) { return invoke<BOOL>(0xE2A15A94CDEA698B, decorator); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, char* plateText) { invoke<Void>(0x363CB1E011E73B79, vehicle, plateText); }
static void _0xCAE8C7821E4B33F5(Any p0) { invoke<Void>(0xCAE8C7821E4B33F5, p0); }
static void _0xD68E3DB5A7B827A5(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD68E3DB5A7B827A5, vehicle, toggle); }
static void _RETRACT_CARGOBOB_HOOK(Vehicle cargobob) { invoke<Void>(0xBF0A1806D17063CB, cargobob); }
static void _0xED286B7D3A6E2B07(Vehicle vehicle, BOOL p1) { invoke<Void>(0xED286B7D3A6E2B07, vehicle, p1); }
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3D15AF8126A1ACE2, vehicle, toggle); }
static void _0xA3130400B6D0A6F3(Any p0) { invoke<Void>(0xA3130400B6D0A6F3, p0); }
static void _0xD333E360B0026228(Any p0, BOOL p1) { invoke<Void>(0xD333E360B0026228, p0, p1); }
static void _0xC8B65B9D34491805(Vehicle vehicle, float p1, float p2) { invoke<Void>(0xC8B65B9D34491805, vehicle, p1, p2); }
static void _CARGOBOB_MAGNET_GRAB_VEHICLE(Vehicle cargobob, BOOL Grab) { invoke<Void>(0x495B3273BE518F2C, cargobob, Grab); }
static void _0x5BAF19863E8FFB68(float p0, float p1, float p2, float p3) { invoke<Void>(0x5BAF19863E8FFB68, p0, p1, p2, p3); }
static BOOL _0xF8EDF884AF10995A(Any p0) { return invoke<BOOL>(0xF8EDF884AF10995A, p0); }
static void _0xB8FD157EA994DEAD(Any p0, float p1) { invoke<Void>(0xB8FD157EA994DEAD, p0, p1); }
static int _GET_VEHICLE_LANDING_GEAR(Vehicle vehicle) { return invoke<int>(0xDBA4852736CE4FDB, vehicle); }
static void _0x9AF82A7ACB317574(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x9AF82A7ACB317574, p0, p1, p2); }
static void _0xD105C246B98815D4(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD105C246B98815D4, vehicle, p1); }
static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0x533E03CFA6081F13, vehicle, duration, mode, forever); }
static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0x94BABA50853AE025, vehicle); }
static void _SET_BIKE_LEAN_ANGLE(Vehicle vehicle, float x, float y) { invoke<Void>(0x8FD3D99368034B66, vehicle, x, y); }
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0xBCBCFDF8EE682D7E); }
static void _0x61F9EF7B85C105C(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x61F9EF7B85C105C, vehicle, toggle); }
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0xAF9490931A9DE128, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static Any SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { return invoke<Any>(0xB37271190EC3E4FD, vehicle, index); }
static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x51A640907BDD41BB, vehicle); }
static void _0x19136EAB369B86A9(Vehicle vehicle, BOOL p1) { invoke<Void>(0x19136EAB369B86A9, vehicle, p1); }
static Any _0xDD9F95AFBE655ACF(Vehicle vehicle, int p1) { return invoke<Any>(0xDD9F95AFBE655ACF, vehicle, p1); }
static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xEC6E5897335290DD, model); }
static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0x372D3DD5E1251C3D, vehicle); }
static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0x2251EC5E0EBF14D3, vehicle); }
static void _0x3BAD9B475928788D(Any p0, float p1) { invoke<Void>(0x3BAD9B475928788D, p0, p1); }
static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0x923073D63782E037, vehicle, colorPrimary, colorSecondary); }
static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { invoke<Void>(0x46124CE35D41A91E, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x51BFBBB986477700, vehicle, toggle); }
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF8A4984C09AE4016, vehicle, toggle); }
static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float p1) { invoke<Void>(0x9FF76CA54C88C56D, vehicle, p1); }
static BOOL _0x5E089EED05C0643A(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x5E089EED05C0643A, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int flag) { invoke<Void>(0x8E114748898512A5, vehicle, flag); }
static int GET_NUM_MOD_COLORS(int p0, BOOL p1) { return invoke<int>(0x134BA39413A51575, p0, p1); }
static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x36F1A0B315858E4D, vehicle, doorIndex, p2, p3, p4); }
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0xEA5FA5650C01AFF6, vehicle); }
static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0xC72E18180AE0A1F0, vehicle, windowIndex); }
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x1AEADBB0240E0B51, vehicle); }
static void _0x936D497559CB1999(Vehicle vehicle, BOOL p1) { invoke<Void>(0x936D497559CB1999, vehicle, p1); }
static BOOL _IS_HEADLIGHT_R_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0x663210CA03B4D099, vehicle); }
static float _GET_VEHICLE_PAINT_FADE(Vehicle veh) { return invoke<float>(0x78C5AED1DAFD6F83, veh); }
static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xC45666EE8C73F3BA, vehicle); }
static Any SET_TRAIN_SPEED(Vehicle train, float speed) { return invoke<Any>(0x21BEADDBD02DE004, train, speed); }
static void _0x8B93994E73DF8345(Vehicle vehicle, BOOL p1) { invoke<Void>(0x8B93994E73DF8345, vehicle, p1); }
static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x401417330080163A, vehicle, speed); }
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xF902AEFBA4C91EE0, p0); }
static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x5BFC131B92C92E97, model); }
static float _GET_HELI_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x88D29EA5DBDFA7D8, vehicle); }
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0xEA1867C178F48481, vehicleAsset); }
static void _0x674343DB871D852(Any p0) { invoke<Void>(0x674343DB871D852, p0); }
static void _0x91E01FC2DBBE7623(Any p0, float p1) { invoke<Void>(0x91E01FC2DBBE7623, p0, p1); }
static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xD1F2E380304A5D7E, vehicle); }
static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0x2010D82CCB5C4D47, vehicle); }
static BOOL _IS_VEHICLE_ENGINE_ON(Vehicle vehicle) { return invoke<BOOL>(0x84AEB07678DD6163, vehicle); }
static BOOL _0xF429630F3C392016(Any p0) { return invoke<BOOL>(0xF429630F3C392016, p0); }
static float _GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x96039BF5951C1E3C, vehicle); }
static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0xA01FED9BAADC34B5, p0); }
static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL vehiclehandle) { return invoke<Vehicle>(0x4E76306EE6AE7596, modelHash, x, y, z, heading, networkHandle, vehiclehandle); }
static void REQUEST_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0xA252A3A0F6CD48EC, p0, p1); }
static void _0x6C5AEF9293A0D485(Vehicle vehicle, BOOL p1) { invoke<Void>(0x6C5AEF9293A0D485, vehicle, p1); }
static void _0xF4335EDCEE1A0E72(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF4335EDCEE1A0E72, vehicle, p1); }
static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xC2331082FBFCB35D, vehicle); }
static char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<char*>(0x5FB9F0778C42904D, modelHash); }
static void _0xB7887AA99D422E73(Any p0) { invoke<Void>(0xB7887AA99D422E73, p0); }
static void _0xF2FCE2AAA3B27CBB(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF2FCE2AAA3B27CBB, vehicle, p1); }
static Vehicle _0x1FFC8847914B057() { return invoke<Vehicle>(0x1FFC8847914B057); }
static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x15333062E8216834, vehicle, multiplier); }
static BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<BOOL>(0x334928DD9F6AEB8, vehicle, modType); }
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x62D9D41655E62A, multiplier); }
static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0xA2A724EEE80F007F, vehicle); }
static char* _GET_VEHICLE_MOD_COLOR_1_TEXT_LABEL(Vehicle vehicle, BOOL p1) { return invoke<char*>(0xF2DCE13655EE67D0, vehicle, p1); }
static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x60FBB0737865465C, vehicle); }
static char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<char*>(0x68995B2737B8C80D, vehicle, liveryIndex); }
static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xE9B66E3DEE9F030D, p0, p1, p2, p3, p4, p5, p6); }
static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x6CCC9ABA9456E815, model); }
static void _SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0xC641A4322AF5B3AD, vehicle, value); }
static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x7D42D99B3885D48F, vehicle, r, g, b); }
static void _SET_EXCLUSIVE_DRIVER(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xE69347BC392B03C3, vehicle, p1, p2); }
static BOOL _IS_VEHICLE_SIREN_SOUND_ON(Vehicle vehicle) { return invoke<BOOL>(0xECCD3FAFC9E8ACAA, vehicle); }
static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0xCB5DFB02BA72F726, vehicle, turnSignal, toggle); }
static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xC8CAFCFEDEEF36D, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x3E4DACD1434531DD, vehicle, r, g, b); }
static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x37B592C0F74990D2, vehicle, doorLockStatus); }
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xDD8638B43D499C77, vehicle); }
static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0xD0BC3555421EB89C, vehicle, value); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xD587AC0F212B665D, vehicle, team, toggle); }
static void _SET_PLANE_MIN_HEIGHT_ABOVE_GROUND(Vehicle plane, int height) { invoke<Void>(0xB529167845A24D6D, plane, height); }
static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0x2FD1F57638D94898, veh, doorID); }
static float _GET_VEHICLE_BODY_HEALTH_2(Vehicle vehicle) { return invoke<float>(0x2814F70FE94327F5, vehicle); }
static void _SET_VEHICLE_JET_ENGINE_ON(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE72C8A42E0C54330, vehicle, toggle); }
static Any START_VEHICLE_ALARM(Vehicle vehicle) { return invoke<Any>(0x3162768D9C1B8FFE, vehicle); }
static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0x4288F1979BB7E97F, vehicle, lightsOn, highbeamsOn); }
static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0xAB191CE9D0342508, vehicle, wheelID, completely); }
static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xA56B800D8E15BE98, vehicle, isAudible, isInvisible); }
static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return invoke<Ped>(0x9297C590C99228DC, vehicle, index); }
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0x5E41748614E3D529, train, p1); }
static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x258D8AABAF776C9, vehicle, toggle); }
static void _0x7D412A4FAA06A497(float p0) { invoke<Void>(0x7D412A4FAA06A497, p0); }
static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0x4052879A0438AFD6, vehicle, p1, p2, p3); }
static void _0xB2D11C90092EBAB5(Any p0, float p1) { invoke<Void>(0xB2D11C90092EBAB5, p0, p1); }
static BOOL _IS_VEHICLE_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x233905005AC9235A, vehicle); }
static Any SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { return invoke<Any>(0x277B57E78A110D2C, vehicle); }
static void _0xB1E9C02E102DE8DA(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB1E9C02E102DE8DA, vehicle, p1); }
static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(Vehicle vehicle, int vehicleComponent, int destroyType) { invoke<Void>(0x8AEAC36133A4FF2F, vehicle, vehicleComponent, destroyType); }
static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x9D4118D82F876A81, model); }
static float _0x551FC27FD8BB91C7(Hash modelHash) { return invoke<float>(0x551FC27FD8BB91C7, modelHash); }
static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, char* name) { invoke<Void>(0x8F983AC31B230BDB, vehicle, name); }
static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x480CBEF311EACF9F, vehicle); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { invoke<Void>(0x5B40EC93D0367189, x1, y1, z1, x2, y2, z2, p6, p7); }
static void _0xE8A59E34DAA02501(Any p0, BOOL p1) { invoke<Void>(0xE8A59E34DAA02501, p0, p1); }
static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0x9BA1E49AF5C03635, towTruck, vehicle); }
static void _0x595BD9BFECC969CC(Any p0, BOOL p1) { invoke<Void>(0x595BD9BFECC969CC, p0, p1); }
static void _0x1EF4FF73A52A2C96(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1EF4FF73A52A2C96, vehicle, p1); }
static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xB23CB7DBBE38B63C, vehicle); }
static void _0x2F8B994B3410BC5E(Vehicle vehicle, BOOL p1) { invoke<Void>(0x2F8B994B3410BC5E, vehicle, p1); }
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xDF8D7E186B39E5F5, vehicle); }
static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xDB253BC3BD3902D7, p0, p1, p2, p3, p4, p5, p6); }
static void _JITTER_VEHICLE(Vehicle vehicle, BOOL p1, float yaw, float pitch, float roll) { invoke<Void>(0x442355B7B305D444, vehicle, p1, yaw, pitch, roll); }
static float _0xF83E2BB50B2127B8(Hash modelHash) { return invoke<float>(0xF83E2BB50B2127B8, modelHash); }
static Any SET_NUMBER_OF_PARKED_VEHICLES(int value) { return invoke<Any>(0xF495DCE4EAE016E, value); }
static void _0xF1D8D5F018F2C6A4(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF1D8D5F018F2C6A4, vehicle, p1); }
static Vector3 _GET_CARGOBOB_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0xFC2C8BCF9AEA3408, cargobob); }
static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xFF67B6EC799C2F15, vehicle, state); }
static BOOL IS_VEHICLE_IN_GARAGE_AREA(char* garageName, Vehicle vehicle) { return invoke<BOOL>(0x5659B4CDF2566C, garageName, vehicle); }
static void _0x32C19AB8889C7EE5(Any p0, float p1) { invoke<Void>(0x32C19AB8889C7EE5, p0, p1); }
static void _SET_VEHICLE_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0x4890188915218B70, vehicle, state); }
static void _0x9F79F5C0BA59748C(Vehicle vehicle) { invoke<Void>(0x9F79F5C0BA59748C, vehicle); }
static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x73BEE2C540226170, vehicle); }
static int GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<int>(0x48E574447B994E5E, p0, p1, p2); }
static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x3D866A165E63B4FE, vehicle, extraId); }
static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0x19A55033C9E27A8A, cargobob, vehicleAttached); }
static void _0x74482D7B9EDAF3E3(BOOL toggle) { invoke<Void>(0x74482D7B9EDAF3E3, toggle); }
static BOOL _0xA643F3C02E734942(Vehicle vehicle) { return invoke<BOOL>(0xA643F3C02E734942, vehicle); }
static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL createDoorObject) { invoke<Void>(0x6D9D42DC28CDC51E, vehicle, doorIndex, createDoorObject); }
static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, BOOL nullAttributes) { invoke<Void>(0xB6DDF377B39F96CE, vehicle, nullAttributes); }
static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF6DF04F35E23ACB9, vehicle, toggle); }
static void SET_SCRIPT_VEHICLE_GENERATOR(Any vehicleGenerator, BOOL enabled) { invoke<Void>(0x392ECB608FE23E60, vehicleGenerator, enabled); }
static void _0xC0312A5F70DCF31C(Vehicle vehicle) { invoke<Void>(0xC0312A5F70DCF31C, vehicle); }
static void _0x189621562F2788E6(Vehicle vehicle, BOOL p1) { invoke<Void>(0x189621562F2788E6, vehicle, p1); }
static float GET_VEHICLE_CLASS_MAX_TRACTION(Any p0) { return invoke<float>(0xA888ABBC2ABAD9F5, p0); }
static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0x803AEC9C0326F843, modelHash); }
static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xDBFA5C79D9B3D622, model); }
static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x716DFA30041BE76, vehicle, instantlyLower); }
static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0x21A1DBA8A276DCDE, modelHash); }
static void _0xCEFEA701AC431C75(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0xCEFEA701AC431C75, vehicle, p1, p2); }
static void _0x5E3DEB1EDAAC2924(Any p0, BOOL p1) { invoke<Void>(0x5E3DEB1EDAAC2924, p0, p1); }
static void _0xF56D19E9A59773B9() { invoke<Void>(0xF56D19E9A59773B9); }
static Any SET_ALL_VEHICLES_SPAWN(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0x31378F898A31C1C5, p0, p1, p2, p3); }
static void _0x431269BF7EABE103(Any p0, BOOL p1) { invoke<Void>(0x431269BF7EABE103, p0, p1); }
static void _0x36ACC534DD5BD88E(Any p0, BOOL p1) { invoke<Void>(0x36ACC534DD5BD88E, p0, p1); }
static void _0x490BA9A7C3474CBA(Any p0, Any p1) { invoke<Void>(0x490BA9A7C3474CBA, p0, p1); }
static void _0xA2D4013AD2399487(Any p0) { invoke<Void>(0xA2D4013AD2399487, p0); }
static BOOL _0xBC213853957BBA65(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xBC213853957BBA65, vehicle, p1); }
static void _EJECT_JB700_ROOF(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x636ABDD2268BA0A5, vehicle, x, y, z); }
static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xBBB5FCBC554BAAE8, vehicle, modType); }
static void _0x581522B79DBD4DF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x581522B79DBD4DF, vehicle, p1); }
static void _0x81E3197ED8557BE6(Any p0, Any p1) { invoke<Void>(0x81E3197ED8557BE6, p0, p1); }
static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0x4B2AD71C73207906, vehicle); }
static float _GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF34A67926450046F, vehicle); }
static void _0x16744F7452004203(Vehicle vehicle, float p1) { invoke<Void>(0x16744F7452004203, vehicle, p1); }
static int _0xA76A68D2526E48AA(Vehicle vehicle) { return invoke<int>(0xA76A68D2526E48AA, vehicle); }
static void _0x416D818C49D8B1D2(BOOL p0) { invoke<Void>(0x416D818C49D8B1D2, p0); }
static void _0x9554B1A5D308824A(Vehicle vehicle, float p1) { invoke<Void>(0x9554B1A5D308824A, vehicle, p1); }
static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0x72F060E36BC86756, vehicle); }
static void _0xC3373B431430BA56(Vehicle vehicle, float p1) { invoke<Void>(0xC3373B431430BA56, vehicle, p1); }
static void _0xB7B1B950D738490E(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB7B1B950D738490E, vehicle, p1); }
static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* p3) { invoke<Void>(0x8EC9934D31790C89, vehicle, paintType, color, p3); }
static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0xF6E128C391C16F7C, vehicle); }
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xB6904168E6390E12, multiplier); }
static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5140F895BFA54316, vehicle, toggle); }
static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0xF1C15311C05AFA63, vehicle, index, onRim, p3); }
static void _0x52264E1BBC03A5F3(Any p0, float p1) { invoke<Void>(0x52264E1BBC03A5F3, p0, p1); }
static int _0x641E98BD18F444EB(Any p0) { return invoke<int>(0x641E98BD18F444EB, p0); }
static void _0xFA21D1C51719117B() { invoke<Void>(0xFA21D1C51719117B); }
static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0x3444160A864BC5B2, towTruck); }
static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xFD1E4AF84D93E688, vehicle); }
static void _0xB91D6D11262B7121(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xB91D6D11262B7121, vehicle, p1, p2); }
static Vector3 _0xEE301A2D9AD9433C(Any p0, float p1) { return invoke<Vector3>(0xEE301A2D9AD9433C, p0, p1); }
static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0x1AB756D010D94832, p0, p1); }
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0xC960169422AD5363, vehicle); }
static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0x91BDC6E7612AF977, vehicle, killDriver, explodeOnImpact); }
static void _0x7691F313F455BA9D() { invoke<Void>(0x7691F313F455BA9D); }
static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x144D3CB40DD6CDF1, vehicle); }
static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, int p2, float angle) { invoke<Void>(0x2BD3D3A0F5F16BAD, vehicle, doorIndex, p2, angle); }
static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x9ED6F10213DB8F66, vehicle, p1); }
static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xC92285958130B9AD, vehicle, r, g, b); }
static float _GET_VEHICLE_MODEL_MAX_SPEED(Hash modelHash) { return invoke<float>(0xCCD3117192234E89, modelHash); }
static void _0xD6ADE78CF6F6107C(Any p0, float p1) { invoke<Void>(0xD6ADE78CF6F6107C, p0, p1); }
static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDE7B2357F2C81DE, vehicle, toggle); }
static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0xA0ADAA40264FB4D6, disabled, weaponHash, vehicle, owner); }
static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0xC2FEE95F19F372C, vehicleGenerator); }
static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0xB34F1074D0EA9D95, vehicle, player); }
static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xE02F462DE06D185B, x, y, z, radius, modelHash, flags); }
static BOOL _0x9B998AC56F7CAFD3(Any p0, BOOL p1) { return invoke<BOOL>(0x9B998AC56F7CAFD3, p0, p1); }
static void _DISPLAY_DISTANT_VEHICLES(BOOL toggle) { invoke<Void>(0x8E6160A1436C3930, toggle); }
static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x91A55378A6A1A673, vehicle, state); }
static BOOL _0x7FBD5D953873E41(Vehicle vehicle, BOOL flag) { return invoke<BOOL>(0x7FBD5D953873E41, vehicle, flag); }
static void _0xE5FBEDD6C2EFB7C8(Any p0) { invoke<Void>(0xE5FBEDD6C2EFB7C8, p0); }
static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0xD3A88CAE99C338A3, vehicle); }
static void _0xD53DAC4BCD15E8EB(Any p0, float p1, BOOL p2) { invoke<Void>(0xD53DAC4BCD15E8EB, p0, p1, p2); }
static void _0xB4807DC891396219(Any p0, float p1, float p2, float p3) { invoke<Void>(0xB4807DC891396219, p0, p1, p2, p3); }
static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x41B2D5A9FBCB0239, vehicle, toggle); }
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x53AD5AECCA7836C7, vehicle, toggle); }
static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0x996808FDDACB1D68, vehicle); }
static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x1BA7D35496DC785B, vehicle, speed); }
static Any SWITCH_TRAIN_TRACK(int intersectionId, BOOL state) { return invoke<Any>(0xF246104020396DA6, intersectionId, state); }
static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int door) { return invoke<float>(0x48DBE8310F0EC96A, vehicle, door); }
static void _SET_TOW_TRUCK_CRANE_HEIGHT(Vehicle towTruck, float height) { invoke<Void>(0xAB122802E1FAAA88, towTruck, height); }
}



namespace WATER
{
static float _GET_WAVES_HEIGHT() { return invoke<float>(0xA0EAF5D23FF63EAF); }
static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, Any p3, Any* p4) { return invoke<BOOL>(0xC4B89CAFD04A7181, x, y, z, p3, p4); }
static void _RESET_WAVES_HEIGHT() { invoke<Void>(0xBCF7C8B71B72B8AA); }
static BOOL TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x35FE0DEA67DE410C, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0xEF8364EA408A6714, x, y, z, height); }
static void _0x9571E52CB75258B(int p0) { invoke<Void>(0x9571E52CB75258B, p0); }
static void _SET_WAVES_HEIGHT(float height) { invoke<Void>(0x3340EA9895E9CA93, height); }
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0x441EB6BB61D1A215, x, y, radius, height); }
static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0x4169496828D4D2DA, x, y, z, height); }
static int _0x1E4DFC788F526B2F(float x, float y, float z, float radius, float unk) { return invoke<int>(0x1E4DFC788F526B2F, x, y, z, radius, unk); }
static BOOL TEST_PROBE_AGAINST_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xA211711F686379E, p0, p1, p2, p3, p4, p5, p6); }
}



namespace WEAPON
{
static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0xB88FDA5AF9B0C71D, ped, weaponhash); }
static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x242B732E498C2ED2, ped, visible, deselectWeapon, p3, p4); }
static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x64C8B8C233A429DC, ped); }
static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x17455DBC812E175C, ped, weaponHash, componentHash); }
static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x92A0372C5411D3CC, componentHash); }
static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0x1BA9E75C85C1D2F, ped); }
static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x871A64A5529FA09, ped, weaponHash); }
static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0xFAB8F7346FAFC0EC, ped, animStyle); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x6AE62C1DA604CA92, entity, weaponHash, weaponType); }
static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x39D1730F763F0F7D, ped, weaponHash, ammo); }
static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x92AAFB685A99561F, ped, toggle); }
static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x519FD9D619A1B145, ped, weaponHash, componentHash); }
static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, Any p5) { invoke<Void>(0xE02305AAEF29C55C, ped, weaponHash, xOffset, yOffset, zOffset, p5); }
static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xF214BCB639BC0F35, ped); }
static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xB1E4CC11662FA842, ped, weaponHash); }
static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x9E9ACEFADFDFFEA5, ped, weaponHash, weaponType); }
static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x11C61D6CBB70DA5F, ped, weaponHash, ammo); }
static float _0xB48524446F96BA8D(Any p0, Any p1) { return invoke<float>(0xB48524446F96BA8D, p0, p1); }
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash addonHash) { invoke<Void>(0x7CC49C889B63D0BB, weaponObject, addonHash); }
static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0xFF6542840B510590, weaponHash); }
static int GET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType) { return invoke<int>(0xE1528B31F800A8AC, ped, ammoType); }
static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x4CF6F4DF2C64D299, ped, weaponHash, p2); }
static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped) { return invoke<Entity>(0x23309AF6DD689A2, ped); }
static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x33E3225602B37F79, weaponHash); }
static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0x829CC6F64640A786, ped, toggle, weaponHash); }
static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0x110698A96AE3865B, weaponHash); }
static BOOL IS_PED_ARMED(Ped ped, int p1) { return invoke<BOOL>(0x1D01F222CF5E89FA, ped, p1); }
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x8812BEF3D6E3AB33, ped, toggle); }
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0xD5545FE711520E8, weaponObject); }
static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xB1F866D7C20C5E2D, ped, weaponHash); }
static BOOL SET_WEAPON_SMOKEGRENADE_ASSIGNED(Ped ped) { return invoke<BOOL>(0xF87F7B4AC2CA632F, ped); }
static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int colorIndex) { invoke<Void>(0x998B18DF638662F8, ped, weaponHash, colorIndex); }
static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0x5F3D822D30C421C7, weaponHash, p1, p2); }
static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x702AC1A04280292E, weaponHash); }
static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xEF131AFE6DB793DC, weaponHash, componentHash); }
static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0x4A6A5D9AE6C81FA0, weaponHash); }
static void SET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType, int ammo) { invoke<Void>(0x55F07E558111D23E, ped, ammoType, ammo); }
static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x32A33034ED29B524, ped); }
static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0xB1DA9F4F3E854134, ped); }
static Any GET_PED_LAST_WEAPON_IMPACT_COORD(int ped, Vector3* coord) { return invoke<Any>(0x276FA082671DE0FD, ped, coord); }
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x20D5AEE19ED62C7F, ped, toggle); }
static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weapon, Any p3) { return invoke<BOOL>(0x7CA0301A50EF6F57, driver, vehicle, weapon, p3); }
static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x3AB61754C8347114, ped, weaponHash); }
static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0x46E459C508DC0A0F, weapon, addonHash); }
static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x4EF85779E99AE6D6, ped, weaponHash, ammo); }
static Hash _GET_PED_AMMO_TYPE(Ped ped, Hash weaponHash) { return invoke<Hash>(0x97769411F27FFE3A, ped, weaponHash); }
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x9DD5A1D7E423EA4F, ped); }
static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x41708A9FF57578E, ped, xBias, yBias); }
static float _GET_LOCKON_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x2A0034CB42638CD3, ped); }
static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xDF72CAE6DB3384FF, ped, p1); }
static BOOL _IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x7669215362B6FF09, ped); }
static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x9F1B20B487FAE1CF, ped, weaponHash, p2); }
static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0xEE5564FF8F93832D, weaponHash); }
static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float heading, Any p7) { return invoke<Object>(0xC3EF8DD042F9C929, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7); }
static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0x2764370648A2F474, ped, weaponHash, p2); }
static void SET_PED_AMMO_TO_DROP(Any p0, Any p1) { invoke<Void>(0x6D0779F26D55ADB1, p0, p1); }
static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0x51360EBF81D1CBAE, weaponHash); }
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xEFDDBE1D72250E1B, entity); }
static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow) { invoke<Void>(0xCA26676919C42B5B, ped, weaponHash, equipNow); }
static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0x20BC45257DB52111, weaponObject, ped); }
static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int time, BOOL equipNow) { invoke<Void>(0x19BED2D0C452E293, ped, weaponHash, time, equipNow); }
static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0xE4FE5081915C4AC3, p0, p1); }
static Entity _0xE1B1C0AC96AE7414(Ped ped, float p1) { return invoke<Entity>(0xE1B1C0AC96AE7414, ped, p1); }
static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x591AA4290521ECFC, ped); }
static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0xC3E05BD802724E57, weaponHash); }
static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL p4, BOOL equipNow) { invoke<Void>(0xAC9A80BE63D6295F, ped, weaponHash, ammoCount, p4, equipNow); }
static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0x30ACB8E387E7FB51, weaponHash); }
static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x533B5E3EE659E0D8, ped, weaponHash, componentHash); }
static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0x8626DD9C2F2845CB, toggle); }
static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xD7D32B9A0C94F43A, ped, p1); }
static int GET_WEAPON_OBJECT_TINT_INDEX(Entity weapon) { return invoke<int>(0xD3744C7E6841A2C, weapon); }
static Any SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<Any>(0x729B40290A74F7E7, distance); }
static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xC4C81180774E773D, ped, gadgetHash, p2); }
static BOOL GET_WEAPON_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0x65004265516AEF31, p0, p1); }
static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xA0DEE3AC6AD5EA2, ped, weaponHash, componentHash); }
static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xD480BB70577C9F2A, ped, weaponHash, ammo); }
static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0xE43857E418AFFD92, ped, weaponHash, ammo); }
static void _0x94838C8F51459046(Ped ped) { invoke<Void>(0x94838C8F51459046, ped); }
static void _0x22626E33C6B4F182(float p0) { invoke<Void>(0x22626E33C6B4F182, p0); }
static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0x4411BBC9BC706B88, ped, weaponSlot); }
static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0x2F3C014D9C5C487D, ped, toggle); }
static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0x42CD683647CA9201, weaponHash); }
static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0x397ABA0C937BB0B4, ped, gadgetHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0x11D74F2BA2D6139, p0, p1); }
static void SET_WEAPON_OBJECT_TINT_INDEX(Entity weapon, int tint) { invoke<Void>(0x92E1DA70791934BD, weapon, tint); }
static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0x5BCE4DD7743DD503, ped, weaponHash, p2); }
static void REMOVE_ALL_PROJECTILES_OF_TYPE(Any p0, BOOL p1) { invoke<Void>(0xBA3ECED6D4DF4E5D, p0, p1); }
}



namespace WORLDPROBE
{
static Any _0x232EC9E2CE749A27(Entity entity, int flags1, int flags2) { return invoke<Any>(0x232EC9E2CE749A27, entity, flags1, flags2); }
static int _CAST_3D_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p8) { return invoke<int>(0x7DCC245B514719D3, x1, y1, z1, x2, y2, z2, radius, flags, entity, p8); }
static void _0x281F5848738E6A31(Entity p0) { invoke<Void>(0x281F5848738E6A31, p0); }
static Any _0x794D4CCB52882EF8(Entity entity, int flags1, int flags2) { return invoke<Any>(0x794D4CCB52882EF8, entity, flags1, flags2); }
static int _CAST_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xD38C9722361C5D3E, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int _GET_RAYCAST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0xF196E47C22823C63, rayHandle, hit, endCoords, surfaceNormal, entityHit); }
static int _GET_RAYCAST_RESULT_2(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* _materialHash, Entity* entityHit) { return invoke<int>(0xE9C3B22F9BCE6D2, rayHandle, hit, endCoords, surfaceNormal, _materialHash, entityHit); }
static int _0xE98636CD6C8CB7F8(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0xE98636CD6C8CB7F8, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int _0xD79AADD74A1DA413(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0xD79AADD74A1DA413, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static Any _0xA16180180506377B(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0xA16180180506377B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static Any _0x3FC133C41242A6F8(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x3FC133C41242A6F8, p0, p1, p2, p3, p4); }
}



namespace ZONE
{
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x3951A36C2E308F6E, x, y, z); }
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x5E430BF9C8504231, zoneId); }
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x680E452DFD4DE9A8, scheduleId); }
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0xB9BECE92DFDCEC2A, zoneId); }
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0x884AD1C3529FCB5C, scheduleId, vehicleHash); }
static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x16B79AA9A479C08D, x, y, z); }
static int GET_ZONE_FROM_NAME_ID(char* zoneName) { return invoke<int>(0xCC7D2DA824A07282, zoneName); }
static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0xF770EF93C7FFE519, zoneId, toggle); }
static char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char*>(0x6E6FC26F3BAE53A5, x, y, z); }
}

