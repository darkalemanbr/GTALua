#pragma once

// Generated 27 Jan 2016

#include "types.h"
#include "nativeCaller.h"

namespace PLAYER
{
	static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0x91B73D905EA38F6B, player); } // 0x43A66C31C68491C0 0x6E31E993
	static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0x1BEE8CF6694152F3, player); } // 0x50FAC3A3E030A6E1 0x6AC64990
	static void SET_PLAYER_MODEL(Player Petra, Hash Petra) { invoke<Void>(0x8A348AE8E7B8B8F6, Petra, Petra); } // 0x00A1CADD00108836 0x774A4C54
	static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL p3) { invoke<Void>(0x0BF00EE0AD66EF38, player, ped, p2, p3); } // 0x048189FAC643DEEE 0xBE515485
	static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xB39C2DF927F56300, player, r, g, b); } // 0xE902EF951DCE178F 0x6EF43BBB
	static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x7C48F40870C51605); } // 0x407C7F91DDB46C16 0x4C1B8867
	static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0x2CC717AC6CF51F8F, player); } // 0x37039302F4E0A008 0x9873E404
	static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xA92AE959A9196BDC, player, team); } // 0x0299FA38396A4940 0x725ADCF2
	static char* GET_PLAYER_NAME(Player player) { return invoke<char*>(0x472BC6C9F4FFBA2B, player); } // 0x6D0DE6A7B5DA71F8 0x406B4B20
	static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0x6BA7C95948023E21, player); } // 0x085DEB493BE80812 0x1CF7D7DA
	static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0xF2A8609B446FFC0C, player); } // 0x0C92BA89F1AF26F8 0x821F2D2C
	static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, float x, float y, float z) { invoke<Void>(0x80E754650C3E4863, player, x, y, z); } // 0x520E541A97A13354 0xF261633A
	static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0x04468D705BA193E3, wantedLevel); } // 0xFDD179EAF45B556C 0xD9783F6B
	static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0x1B1CE102A7E7999E, player, wantedLevel, p2); } // 0x39FF19C64EF7DA5B 0xB7A0914B
	static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, Vehicle p2) { invoke<Void>(0xFBDF63459A604D13, player, wantedLevel, p2); } // 0x340E61DE7F471565 0xED6F44F5
	static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0x6FF6F40CA433340F, player, p1); } // 0xE0A7D1E497FFCD6F 0xAF3AFD83
	static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0x59B830D9A1D886A9, player); } // 0xAFAF86043E5874E9 0xE13A71C7
	static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0x97393C1FE8F0D51F, player); } // 0x0A6EB355EE14A2DB 0x5E72AB72
	static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x33E519C1449D7A54, player, toggle); } // 0xDB172424876553F4 0x48A18913
	static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x51AFBB2BC4E2AAFD, player, wantedLevel); } // 0x238DB2A2C23EE9EF 0x589A2661
	static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0x297E769770D04E42, player); } // 0xB302540597885499 0x54EA5BCC
	static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0x9A3F18713F55FCC4, player); } // 0x424D4687FA1E5652 0x140CA5A8
	static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0x3F029B262D36DD77, player); } // 0xFA1E2BF8B10598F9 0xED1D1662
	static void SET_PLAYER_CONTROL(Player player, BOOL toggle, int possiblyFlags) { invoke<Void>(0x8FE59DE2329CBE64, player, toggle, possiblyFlags); } // 0x8D32347D6D4C40A2 0xD17AFCD8
	static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0x44B59DB1458EE8E0, player); } // 0xE28E54788CE8F12D 0xBDCDD163
	static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0x8C1CE4F676968E94, maxWantedLevel); } // 0xAA5F02DB48D704B9 0x665A06F5
	static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xEF0FC4ADE4F52CC4, toggle); } // 0x43286D561B72B8BF 0x8E114B10
	static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x30584A18ECB7ED72, player, toggle); } // 0x32C62AA929C2DA6A 0xE6DE71B7
	static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0x2E6D4A0CE8AD9494, player); } // 0x5E9564D8246B909A 0xE15D777F
	static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x4A4D78D8B7EB34C7, player, toggle); } // 0x8EEDA153AD141BA4 0xC915285E
	static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0x7CBBF6C9E2EED3EA, player, toggle); } // 0x056E0FE8534C2949 0x49EAE968
	static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0x175B431FD44549F5, player); } // 0x471D2FF42A94B4F2 0xBF974891
	static void SET_HUD_ANIM_STOP_LEVEL(Player player, BOOL toggle) { invoke<Void>(0xE360472EAEFBF0A0, player, toggle); } // 0xDE45D1A1EF45EE61 0x274631FE
	static void SET_AREAS_GENERATOR_ORIENTATION(Player player) { invoke<Void>(0x5EBAB4B3B3153030, player); } // 0xC3376F42B1FACCC6 0x02DF7AF4
	static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xEA147A20E77DCE94, player, toggle); } // 0x596976B02B6B5700 0xA3D675ED
	static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0x63EB72E192731928, multiplier); } // 0x020E5F00CDA207BA 0x1359292F
	static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xCCB4EC76BC988F09, player, difficulty); } // 0x9B0BB33B04405E7A 0xB552626C
	static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xBE426BCBF9244EC3, player); } // 0xB9D0DD990DC141DD 0xA64C378D
	static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0x9F8FD6071D5A40B6, duration); } // 0xBF9BD71691857E48 0x5F8A22A6
	static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xABF055A25700D6F5, player, crimeType, wantedLvlThresh); } // 0xE9B09589827545E7 0xD8EB3A44
	static void _0xB67630FD0CAA583D(Player player, int p1) { invoke<Void>(0xB67630FD0CAA583D, player, p1); } // 0x9A987297ED8BD838 0x59B5C2A2
	static void _0x1A18C20425B2A973(Player player) { invoke<Void>(0x1A18C20425B2A973, player); } // 0xBC9490CA15AEA8FB 0x6B34A160
	static void _0x92DFD59D631E4C0B(Player player) { invoke<Void>(0x92DFD59D631E4C0B, player); } // 0x4669B3ED80F24B4E 0xB9FB142F
	static void _0xF9BE442E833C282F(Player player) { invoke<Void>(0xF9BE442E833C282F, player); } // 0xAD73CE5A09E42D12 0x85725848
	static void _0x6CB59CE5FE159A85(Player player) { invoke<Void>(0x6CB59CE5FE159A85, player); } // 0x36F1B38855F2A8DF 0x3A7E5FB6
	static void _0x6028EA1BF6115AEE(Player player) { invoke<Void>(0x6028EA1BF6115AEE, player); } // 0xDC64D2C53493ED12 0xD15C4B1C
	static void _0xBD28DCA910A4C323(float p0) { invoke<Void>(0xBD28DCA910A4C323, p0); } // 0xB45EFF719D8427A6 0xBF6993C7
	static void _0xE59F0F1A9C731E24() { invoke<Void>(0xE59F0F1A9C731E24); } // 0x0032A6DBA562C518 0x47CAB814
	static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0x380205D43AE9485A, player); } // 0xDE7465A27D403C06 0x39E3CB3F
	static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0x69CFD69005B7F5D7, player); } // 0x908CBECC2CAA3690 0xBB77E9CD
	static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x386C3192F791D414, player, entity); } // 0x7912F7FC4F6264B6 0xF3240B77
	static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xEFC54128A3B75702, player, entity); } // 0x13EDE1A5DBF797C9 0xF6AAA2D7
	static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x3EB3CC572EB40155, player); } // 0x2E397FD2ECD37C87 0x1DEC67B7
	static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xBC273BCD46110BE6, player, entity); } // 0x3C06B5C839B38F7B 0x7D80EEAA
	static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xAA0DBF98A1199035, player, entity); } // 0x2975C866E6713290 0x8866D9D0
	static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0x85920386C52E3641, player, range); } // 0x29961D490E5814FD 0x74D42C03
	static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0x91F0593A3B8D1A3F, player, toggle); } // 0x6E8834B52EC20C77 0xF4D99685
	static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0x01C8046CC60A6C7A, player, toggle); } // 0xD5E460AD7020A246 0x71B305BB
	static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xDE8003C714A8F993, player, toggle); } // 0xD465A8599DFF6814 0x13CAFAFA
	static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xF3F3D9078A6EAC3E); } // 0x462E0DB9B137DC5F 0x457F1E44
	static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x21E4A126B001732E, player); } // 0x78CFE51896B6B8A4 0x456DB50D
	static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0x662D26A7E41AD3F1, player, toggle); } // 0xA01B8075D8B92DF4 0x7DD7900C
	static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xE9A32ED07BE142E0, player); } // 0xA6F312FCCE9C1DFE 0xC0445A9C
	static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0x726C5333DE708569, player, p1); } // 0xA352C1B864CAFD33 0x62A93608
	static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0x9E58DAA7718BCECF, player); } // 0x3F9F16F8E65A7ED7 0x47017C90
	static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0x3EB4B9671F0168A5, player); } // 0x1885BC9B108B4C99 0x40E80543
	static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xDDE7A7AA86B76A3D, player); } // 0xA1FCF8E6AF40B731 0x1317125A
	static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xF6138D85451616EC, player); } // 0x0D127585F77030AF 0xA5EDCDE8
	static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xBDB9D94F5A2B314C, player); } // 0x92659B4CE1863CB3 0x02A50657
	static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0x4844BC1882594FDB, player); } // 0x49C32D60007AFA47 0x618857F2
	static Any _0xA3A9A0B4BE7CA799() { return invoke<Any>(0xA3A9A0B4BE7CA799); } // 0x7C814D2FB49F40C0
	static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xC970788FCA6269B6, player); } // 0x8A876A65283DD7D7 0x61B00A84
	static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0x39CB1B5DEC5DD307, player); } // 0x95E8F73DC65EFB9C 0x4A9E9AE0
	static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xA01404E50546EA1D, player, atArresting); } // 0x388A47C51ABDAC8E 0x7F6A60D3
	static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0x731806F86F39C269, player); } // 0x2D03E13C460760D6 0x453C7CAB
	static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xA0B1717D806F4901); } // 0xB6997A7EB3F5C8C0 0xE2757AC1
	static Player GET_PLAYER_INDEX() { return invoke<Player>(0xBFAE5F9DEC53DAE2); } // 0xA5EDC40EF369B48D 0x309BBDC1
	static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0x0F810277E61B87AE, value); } // 0x41BD2A6B006AF756 0x98DD98F1
	static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0x2A0D2AD241778491, value); } // 0x9EC6603812C24710 0x98F3B274
	static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xD93A9316BD22735F, player); } // 0x5D35ECF3A81A0EE0 0x6E9B8B9E
	static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xE9B257BECDDE0AC0, player); } // 0xE36A25322DC35F42 0xB6209195
	static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0x18862BBFC3D2ED50, player); } // 0xD559D2BE9E37853B 0x8836E732
	static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0x58611A5F6463C46E, player); } // 0xDB89591E290D9182 0x9F27D00E
	static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xC6A8D789051EFC78, player); } // 0xDCCFD3F106C36AB4 0x85C7E232
	static Player PLAYER_ID() { return invoke<Player>(0x3F80C6638E3A1A90); } // 0x4F8644AF03D0E0D6 0x8AEA886C
	static Ped PLAYER_PED_ID() { return invoke<Ped>(0xE7869D5D7816A9B6); } // 0xD80958FC74E988A6 0xFA92E226
	static Player NETWORK_PLAYER_ID_TO_INT() { return invoke<Player>(0xA1468451F71B8A98); } // 0xEE68096F9F37341E 0x8DD5B838
	static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0x89522B8E487D4EF9, cleanupFlags); } // 0xC968670BFACE42D9 0x4B37333C
	static void FORCE_CLEANUP(int cleanupType) { invoke<Void>(0x6581912D0AD8605D, cleanupType); } // 0xBC8983F38F78ED51 0xFDAAEA2B
	static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(char* name, int cleanupFlags) { invoke<Void>(0xA8309A8B781C7A81, name, cleanupFlags); } // 0x4C68DDDDF0097317 0x04256C73
	static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0x52AB871AC42D820F, id, cleanupFlags); } // 0xF745B37630DF176B 0x882D3EB3
	static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x185181C1F960F2BD); } // 0x9A41CF4674A12272 0x39AA9FC8
	static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0x731AC362636D72E7, player, vehicle); } // 0x8026FF78F208978A 0xA454DD29
	static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0x7A02BC1E36D10AB4, player); } // 0x1DE37BBF9E9CC14A 0xAF7AFCC4
	static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievement) { return invoke<BOOL>(0x870B558D3473ADCD, achievement); } // 0xBEC7076D64130195 0x822BC992
	static BOOL _0x613BED2AD524D24F(Any p0, Any p1) { return invoke<BOOL>(0x613BED2AD524D24F, p0, p1); } // 0xC2AFFFDABBDC2C5C
	static Cam _0x674FE6A5C8163DA5(Any p0) { return invoke<Cam>(0x674FE6A5C8163DA5, p0); } // 0x1C186837D0619335
	static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievement) { return invoke<BOOL>(0x1F0D90C2E3B3876D, achievement); } // 0x867365E111A3B6EB 0x136A5BE9
	static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xB1FD8B418C765100); } // 0xF25D331DC2627BBC 0x9FAB6729
	static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xB157088133C6E822); } // 0x74556E1420867ECA 0x8F72FAD0
	static void DISPLAY_SYSTEM_SIGNIN_UI(ScrHandle scrHandle) { invoke<Void>(0x67A85C2A5C4D699B, scrHandle); } // 0x94DD7888C10A979E 0x4264CED2
	static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0x4AEDE2EEB4111EC8); } // 0x5D511E3867C87139 0xE495B6DA
	static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xD30CBD7E69615F8C, player, toggle); } // 0x239528EACDC3E7DE 0xDFB9A2A2
	static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xA1349C199F4DC92E, player); } // 0xB721981B2B939E07 0x680C90EE
	static void _0xB1159FE122E7C5B3(Player player, Any p1) { invoke<Void>(0xB1159FE122E7C5B3, player, p1); } // 0xCAC57395B151135F 0x00563E0D
	static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0x0A647A4BB481DF6D, player, p2); } // 0xF3AC26D3CC576528 0x6255F3B4
	static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0x4994D99A6334BA84, player, toggle); } // 0x3C49C870E66F0A28 0xC7B4D7AC
	static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xE8F79740CCF48A55, player, toggle); } // 0x5C8B2F450EE4328E 0x0B270E0F
	static void SET_PLAYER_TARGETING_MODE(Player player) { invoke<Void>(0x9E4CE2B1635D9539, player); } // 0xB1906895227793F3 0x61CAE253
	static void _0xC291032D0BB7D04B(Any p0) { invoke<Void>(0xC291032D0BB7D04B, p0); } // 0x5702B917B99DB1CD
	static Any _0xE40F0F4864A9B72B() { return invoke<Any>(0xE40F0F4864A9B72B); } // 0xB9CF1F793A9F1BF1
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xE03E82B34235FC17, player); } // 0xF0B67A4DE6AB5F98 0x1D31CBBD
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xDB3D41842CEA074F, player); } // 0x20CE80B0C2BF4ACC 0x14F52453
	static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xC14A411C28092BC1, player); } // 0x4AACB96203D11A31 0x7E3BFBC5
	static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xF2F7AD3E628B2DB3, player); } // 0xE4B90F367BD81752 0xA3707DFC
	static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0x357AD83D909BF584, player, multiplier); } // 0xCA7DC8329F0A1E9E 0xF20F72E5
	static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xDA9BBC0FDA1F8EA8, player, multiplier); } // 0xA91C6F0FF7D16A13 0xB986FF47
	static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0x693B2BFE2CFE9453, player, multiplier); } // 0x6DB47AA77FD94E09 0x825423C2
	static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x32D1C5E1B825067C); } // 0x5063F92F07C2A316 0x62824EF4
	static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0x17EB08037247528D); } // 0xC7034807558DDFCA 0x24BC5AC0
	static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xE94EC2D247E37E66); } // 0xAEBF081FFC0A0E5E 0xF23277F3
	static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xA2AFEC21976949E8); } // 0x8621390F0CDCFE1F 0xD04568B9
	static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0x72D4BF9EDE7C7C9F, player, toggle); } // 0x0FEE4F80AC44A726 0x94E42E2E
	static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0x19C05FFDD5308108, player, toggle); } // 0x75E7D505F2B15902 0xB0C576CB
	static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0x1C3002B9EF8B4AAC, player, toggle); } // 0x7651BC64AE59E128 0x374F42F0
	static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0x5D1F106D1E87FF1D, player, toggle); } // 0x5E6CC07646BBEAB8 0x30CB28CB
	static void _0x411E02EDF15A55D4() { invoke<Void>(0x411E02EDF15A55D4); } // 0xB885852C39CC265D
	static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0x06BE0F886195E5BD, player, toggle); } // 0x2E8AABFA40A84F8C 0xCCD937E7
	static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0x63C3A3EF1D98B34C, player, value); } // 0x77DFCCF5948B8C71 0xC6C3C53B
	static void SPECIAL_ABILITY_DEACTIVATE(Player player) { invoke<Void>(0x7BB1D0BBB1E5E5A7, player); } // 0xD6A953C6D1492057 0x80C2AB09
	static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player) { invoke<Void>(0xB14E3E3C57569BDB, player); } // 0x9CB5CE07A3968D5A 0x0751908A
	static void SPECIAL_ABILITY_RESET(Player player) { invoke<Void>(0x70F2581EF8299A4B, player); } // 0x375F0E738F861A94 0xA7D8BCD3
	static void _0xCC01DB5BB34A420E(Player player) { invoke<Void>(0xCC01DB5BB34A420E, player); } // 0xC9A763D8FE87436A 0x4136829A
	static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2) { invoke<Void>(0x6B300F491238CE88, player, p1, p2); } // 0x2E7B9B683481687D 0x6F463F56
	static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2) { invoke<Void>(0x947E97AA04D18CFA, player, p1, p2); } // 0xF113E3AA9BC54613 0xAB55D8F3
	static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2) { invoke<Void>(0xEAE34E731922587E, player, p1, p2); } // 0xF733F45FA4497D93 0xF440C04D
	static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, BOOL p1) { invoke<Void>(0x99BDFF16B446F6D7, player, p1); } // 0xED481732DFF7E997 0x5FEE98A2
	static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2) { invoke<Void>(0x200F582D102735DD, player, p1, p2); } // 0xB7B0870EB531D08D 0x72429998
	static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float p1, BOOL p2) { invoke<Void>(0x2E1593376CEFB157, player, p1, p2); } // 0xA0696A65F009EE18 0x8C7E68C1
	static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1) { invoke<Void>(0x65AA4343427683FD, player, p1); } // 0x3DACA8DDC6FD4980 0xB71589DA
	static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1) { invoke<Void>(0xFA91FFEB7B97CE3F, player, p1); } // 0x1D506DBBBC51E64B 0x9F80F6DF
	static void SPECIAL_ABILITY_LOCK(Hash playerModel) { invoke<Void>(0x45AA485471DFBDF4, playerModel); } // 0x6A09D0D590A47D13 0x1B7BB388
	static void SPECIAL_ABILITY_UNLOCK(Hash playerModel) { invoke<Void>(0xCF26FE3037C153B7, playerModel); } // 0xF145F3BE2EFA9A3B 0x1FDB2919
	static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash modelHash) { return invoke<BOOL>(0x9743CF02E0BECB8C, modelHash); } // 0xC6017F6A6CDFA694 0xC9C75E82
	static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player) { return invoke<BOOL>(0x3CD36EADD6272F29, player); } // 0x3E5F7FC85D854E15 0x1B17E334
	static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player) { return invoke<BOOL>(0xA8482390B8A793B3, player); } // 0x05A1FE504B7F2587 0x2E19D7F6
	static void ENABLE_SPECIAL_ABILITY(Player player, BOOL enabled) { invoke<Void>(0x5AB6EB11BC2C997D, player, enabled); } // 0x181EC197DAEFE121 0xC86C1B4E
	static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player) { return invoke<BOOL>(0x528F86AA358852E8, player); } // 0xB1D200FE26AEF3CB 0xC01238CC
	static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0x773453B6E86FDCF0, multiplier); } // 0xA49C426ED0CA4AB7 0xFF1BC556
	static void _0x019571065F22E6EC(Player player) { invoke<Void>(0x019571065F22E6EC, player); } // 0xFFEE8FA29AB9A18E 0x5D0FE25B
	static BOOL _0x632B5746A575B65A(Player player) { return invoke<BOOL>(0x632B5746A575B65A, player); } // 0x5FC472C501CCADB3 0x46E7E31D
	static BOOL _0xA35D9B8BC99EFE0B(Player player, int p1) { return invoke<BOOL>(0xA35D9B8BC99EFE0B, player, p1); } // 0xF10B44FD479D69F3 0x1E359CC8
	static BOOL _0x967C40EC181E9BF5(Player player, float p1) { return invoke<BOOL>(0x967C40EC181E9BF5, player, p1); } // 0xDD2620B7B9D16FF1 0x8CB53C9F
	static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xB29811DDF1FC30D3, player, x, y, z, heading, p5, p6, p7); } // 0xAD15F075A4DA0FDE 0xC552E06C
	static BOOL _0xDEFD8ACC9486D13D(Player player) { return invoke<BOOL>(0xDEFD8ACC9486D13D, player); } // 0xE23D5873C2394C61
	static void STOP_PLAYER_TELEPORT() { invoke<Void>(0x7E6E6A28A554021B); } // 0xC449EDED9D73009C 0x86AB8DBB
	static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xE1CF0FCC3409EBB7); } // 0x02B15662D7F8886F 0x3A11D118
	static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xA013DCB16B5C917F, player); } // 0x2F395D61F3A1F877 0xC3B02362
	static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0x68EF3FA5D9BD7FBE, player, regenRate); } // 0x5DB660B38DD98A31 0x45514731
	static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0x4E8C0CECF593F87E, player, damageAmount); } // 0xCE07B9F7817AADA3 0xB02C2F39
	static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x54A6C51374C8049B, player, modifier); } // 0x2D83BC011CA14A3C 0xAE446344
	static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x6E3C4BAAD2EF37EA, player, modifier); } // 0x4A3DC7ECCC321032 0x362E69AD
	static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x704EAA059B15E6E2, player, modifier); } // 0xAE540335B4ABC4E2 0x9F3D577F
	static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float damageAmount) { invoke<Void>(0x427B0D73231556B7, player, damageAmount); } // 0xA50E117CDDF82F0C 0x823ECA63
	static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xC3934CF0279767BB, player, modifier); } // 0x4C60E6EFDAFF2462 0xA16626C7
	static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xC201AED4194858A6, player, tintIndex); } // 0xA3D0E54541D9A5E5 0x8EA12EDB
	static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xA93086761A5256D9, player, tintIndex); } // 0x75D3F7A1B0D9B145 0x432B0509
	static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0x9249636FC7C39D4E, player, index); } // 0xAF04C87F5DC1DF38 0x70689638
	static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0x85E5D15BEF0D5729, player, index); } // 0xD5A016BC3C09CF40 0x77B8EF01
	static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0x9B4222807C02EA97, player, tintIndex); } // 0x93B0FB27C9A04060 0xD79D5D1B
	static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xC4EFB6A96FD4EFD7, player, tintIndex); } // 0x6E9C742F340CE5A2 0x4E418E13
	static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0x91B4AD1D4DC29903, player); } // 0x7DDAB28D31FAC363 0xA3E4798E
	static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xFBCA098EF80BF743, player); } // 0x5DDFE2FF727F3CA3 0x30DA1DA1
	static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0x4346863EE8BA72C9, player, enabled); } // 0xF401B182DBA8AF53 0x832DEB7A
	static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0x36744B95210D42F1, player, r, g, b); } // 0x8217FD371A4625CF 0x14FE9264
	static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0x075DB7D2217FB364, player, r, g, b); } // 0xEF56DBABD3CD4887 0xF66E5CDD
	static void SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(Player player, int flags) { invoke<Void>(0x19AD5DAD417BCFA5, player, flags); } // 0x11D5F725F0E780E0 0x725C6174
	static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x88727A27E3B839FB, player, multiplier); } // 0xDB89EF50FF25FCE9 0x15786DD1
	static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xA63F8D074F8B9CCC, player, multiplier); } // 0xB2C1A29588A9F47C 0x8D2D89C4
	static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0x336C780EEEFE4E4B, player, ped); } // 0xF297383AA91DCA29 0x1C70B2EB
	static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0xE441EC6EE6C2D7EB, player, amount, gaitType, speed, p4, p5); } // 0x477D5D63E63ECA5D 0x0D77CC34
	static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0x901D1EF75879064F, player); } // 0x19531C47A2ABD691 0x4A701EE1
	static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0x12DA514664871EF6, player, toggle); } // 0x9F343285A00B4BB6 0xA97C2059
	static void _0x6D60263A05C96638(Player player, BOOL p1) { invoke<Void>(0x6D60263A05C96638, player, p1); } // 0xD2B315B6689D537D 0xA25D767E
	static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0x8C5A6ADF6443F447, player, value); } // 0x4E9021C1FCDD507A 0x3D26105F
	static BOOL _0x350A856108B60663(Any p0) { return invoke<BOOL>(0x350A856108B60663, p0); } // 0x690A61A6D13583F6 0x1D371529
	static void _0x0C6EAA9C8C5F5DEF(Player player) { invoke<Void>(0x0C6EAA9C8C5F5DEF, player); } // 0x9EDD76E87D5D51BA 0xE30A64DC
	static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0x66117B1EC55B5EBF, player, toggle); } // 0xC54C95DA968EC5B5 0xF1E0CAFC
	static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, BOOL toggle) { invoke<Void>(0xA469C5AD8C24F418, player, toggle); } // 0x749FADDF97DFE930 0xF7A0F00F
	static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xEA5D9C006C560FD9, index); } // 0x9F7BBA2EA6372500 0xB8209F16
	static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xE476CC877BC9A8F2, value); } // 0x14D913B777DFF5DA 0x8D9FD4D1
	static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xA2EE6F786076E852, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xED51733DC73AED51 0xECD12E60
	static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xB860F4AFA97C10B5); } // 0x1DD5897E2FA6E7C9 0x96100EA4
	static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0x3E3835DF64C89198, player); } // 0xD705740BB0A1CF4C 0x4A01B76A
	static BOOL _0xAB323B9F1C14A371(Player player) { return invoke<BOOL>(0xAB323B9F1C14A371, player); } // 0x38D28DA81E4E9BF9 0x013B4F72
	static BOOL _0xC6F8086A010484D8(Any p0, int p1, BOOL p2) { return invoke<BOOL>(0xC6F8086A010484D8, p0, p1, p2); } // 0xBC0753C9CA14B506 0x9DF75B2A
	static void _0x4FE49FEDDCD64C8F(Any p0, Any p1, Any p2) { invoke<Void>(0x4FE49FEDDCD64C8F, p0, p1, p2); } // 0x5006D96C995A5827
	static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0x9D853DB5D733D846, player); } // 0x4EC12697209F2196 0x9765E71D
	static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0x9B9365DECA7A2186, player); } // 0xD55DDFB47991A294 0xFEA40B6C
	static void _0xACF247587276E6A6(Player player, BOOL p1) { invoke<Void>(0xACF247587276E6A6, player, p1); } // 0xFF300C7649724A0B 0xAD8383FA
	static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0x72C6BF7E92760C86, player, p1, p2, p3, p4); } // 0xD9284A8C0D48352C 0x9254249D
	static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0x9D9E4A289D56D86F, player); } // 0x0F4CC924CF8C7B21 0xFD60F5AB
	static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xE780FD323393FD9F, player, model); } // 0x977DB4641F6FC3DB 0x5D382498
	static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0x0D69E64DE375CB27, player); } // 0x8753997EB5F6EE3F 0x6FF034BB
	static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0x2EF9EFCC481A7ACA, player, model); } // 0xDC80A4C2F18A2B64 0xA877FF5E
	static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0x0316E95AC57EF8C5, player); } // 0x10C54E4389C12B42 0xBB62AAC5
	static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0x77697330E776A628, player); } // 0xC142BE3BB9CE125F 0x8C6E611D
	static void _0xC26A1D82C12EA0ED(BOOL p0) { invoke<Void>(0xC26A1D82C12EA0ED, p0); } // 0x2F7CEB6520288061 0x2849D4B2
	static void _0x3E79765546C3F18D(BOOL p0, ScrHandle p1) { invoke<Void>(0x3E79765546C3F18D, p0, p1); } // 0x5DC40A8869C22141
	static BOOL _0xFF41D96B9B26FACF(Any p0) { return invoke<BOOL>(0xFF41D96B9B26FACF, p0); } // 0x65FAEE425DE637B0
	static void _0xF3A652ECF892C066(Any p0) { invoke<Void>(0xF3A652ECF892C066, p0); } // 0x5501B7A5CDB79D37
	static Any _0x1D9807FFF1FECF59(Any p0) { return invoke<Any>(0x1D9807FFF1FECF59, p0); } // 0x56105E599CAB0EFA
}

namespace ENTITY
{
	static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xD51CFE69539DB6D8, entity); } // 0x7239B21A38F536BA 0x3AC90869
	static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0x4C5CA989AEF3A14C, entity, p1); } // 0xDDE6DF5AE89981D2 0xACFEB3F9
	static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0x89924B2EE7CFDC4D, entity); } // 0x060D6E96F8B8E48D 0xA5B33300
	static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0x79A9DD868F99D30E, entity); } // 0xDA95EA3317CC5064 0x9BCD2979
	static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, char* Animdict, char* Anim, int p3) { return invoke<BOOL>(0x1B59B67B9DFB09CD, entity, Animdict, Anim, p3); } // 0x20B711662962B472 0x1D9CAB92
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x266A805ED6E2979C, entity); } // 0x95EB9964FF5C5C65 0x6B74582E
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xBE39A9E9E0D434A6, entity); } // 0x605F5A140F202491 0x53FD4A25
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x3B2CF3CC08ABF68C, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0x915685CA559C211B, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, Any traceType) { return invoke<BOOL>(0xF70F7CD913F23E2A, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7
	static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0x3D501875CBE31D51, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8
	static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0x641FE3AF0CF996E3, entity); } // 0x8BAD02F0368D9E14 0x662A2F41
	static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0x8B1115522F036746, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47
	static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0x6031975C708BAD5D, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07
	static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0x891E314FC7867FC8, entity); } // 0x40FDEDB72F8293B2 0x58D9775F
	static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, char* animDict, char* animation) { return invoke<float>(0xCB337035DFE5097C, entity, animDict, animation); } // 0x346D81500D088F42 0x83943F41
	static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, char* animDict, char* animation) { return invoke<float>(0x902D46C63C11D3B6, entity, animDict, animation); } // 0x50BD2730B191E360 0x433A9D18
	static float _GET_ANIM_DURATION(char* animDict, char* animation) { return invoke<float>(0x15614AE4AAAD1D46, animDict, animation); } // 0xFEDDF04D62B8D790
	static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0x009D53DE4C6ABD0D, entity); } // 0x48C2BED9180FE123 0xFE1589F9
	static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0x1141852D07400777, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB
	static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0x5ED441592163C054, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF
	static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xA202B3228B38DCA3, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914
	static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0x589A23D1D8592F27, entity); } // 0x866A4A5FAE349510 0x9E2F917C
	static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0x2CAFFCD9F5E16D2F, entity); } // 0xE83D4F9BA2A38914 0x972CC383
	static float _0x3FBEDB82E1C0FC39(Entity entity) { return invoke<float>(0x3FBEDB82E1C0FC39, entity); } // 0x846BF6291198A71E
	static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0x8219941CC4732B36, entity); } // 0xEEF059FAD016D209 0x8E3222B7
	static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0x7475BB2772D8CC88, entity); } // 0x15D757606D170C3C 0xC7AE6AA1
	static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0x1A1633914959B869, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8
	static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xB5FF9DC9220C75F4, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481
	static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xB3E64F13C3B580C3, entity); } // 0x1DD55701034110E5 0x57F56A4D
	static void GET_ENTITY_MATRIX(Entity entity, Any* p1, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x2C377E20F9838E9D, entity, p1, p2, p3, p4); } // 0xECB2FC7235A7D137 0xEB9EB001
	static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x1B2DC87EFB36DF80, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC
	static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float X, float Y, float Z) { return invoke<Vector3>(0x61CBEF33034AF6B9, entity, X, Y, Z); } // 0x2274BC1C4885E333 0x6477EC9E
	static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xBD306D8AFEF4E078, entity, xOffset, yOffset, zOffset); } // 0x1899F328B0E12848 0xABCF043A
	static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0x07F46F2038B587BE, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5
	static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0x43BD4837BE6F546A, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90
	static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xB24C64718049BB39, entity); } // 0x831E0242595560DF 0x36610842
	static Vector3 GET_ENTITY_ROTATION(Entity entity, int p1) { return invoke<Vector3>(0x18AD8448B5C85E6D, entity, p1); } // 0xAFBD61CC738D9EB9 0x8FF45B04
	static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0x41C0B69A92F889B2, entity); } // 0x213B91045D09B983 0x9BF8A73F
	static char* GET_ENTITY_SCRIPT(Entity entity, Any* script) { return invoke<char*>(0x9C30887BC86FF747, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784
	static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xD4F0FC8FFEDE152B, entity); } // 0xD5037BA82E12416F 0x9E1E4798
	static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x3BB233C973B4C0FC, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997
	static float GET_ENTITY_UPRIGHT_VALUE(Any p0) { return invoke<float>(0x58D00CB831F3E1D3, p0); } // 0x95EED5A694951F9F 0xF4268190
	static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0x834FF019A048DE2C, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B
	static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0x1652DF7B39293553, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58
	static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0x10E754B2E0DF2A70, entity); } // 0x04A2A40C73395041 0xC46F74AC
	static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xE59FAD6B5E1AA42D, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D
	static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0x242AD66021ED4052, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF
	static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0x705D058C8DB2182E, entity); } // 0x7196842CB375CDB3 0xCE17FDEC
	static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xA3400A2CC5F16B5B, entity, team); } // 0x4DC9A62F844D9337 0xB1808F56
	static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xEFB1DE83A1007C1B, entity); } // 0x8ACD366038D14505 0x0B1BD08D
	static int _GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xEE5500E27292D50B, entity); } // 0xF6F5161F4534EDFF
	static BOOL IS_AN_ENTITY(Entity entity) { return invoke<BOOL>(0x8D38859E2F011953, entity); } // 0x731EC8A916BD11A1 0xD4B9715A
	static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x41B17741CACC905E, entity); } // 0x524AC5ECEA15343E 0x55D33EAB
	static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0x28D33422BA6C479D, entity); } // 0x0A7B270912999B3C 0x2632E124
	static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x8C1ED5BB2888BA25, entity); } // 0x6AC7003FA6E5575E 0xBE800B01
	static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xC2F1E05878620398, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561
	static BOOL IS_ENTITY_AT_COORD(Entity entity, float x, float y, float z, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0x3761EA7F8628B81A, entity, x, y, z, xSize, ySize, zSize, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606
	static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0x0E6C083BC5101C8B, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52
	static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xD55D878601C46BA9, entity); } // 0xB346476EF1A64897 0xEC1479D5
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x8F30879099D46766, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0x74A345D6EBF02AD7, entity); } // 0xB1632E9A5F988D11 0x9D7A609C
	static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0x4ADBDB3ACDEB4D8C, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E
	static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x6CE07ABFB69A4990, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8
	static BOOL IS_ENTITY_DEAD(Entity entity) { return invoke<BOOL>(0x76B2D234F1895632, entity); } // 0x5F9532F3B5CC2551 0xB6F7CBAC
	static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0x47EF9ED961F4F559, entity); } // 0x886E37EC497200B6 0xA4157987
	static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL p8, BOOL p9, Any p10) { return invoke<BOOL>(0x22E902D6AF27E232, entity, x1, y1, z1, x2, y2, z2, angle, p8, p9, p10); } // 0x51210CED3DA1C78A 0x883622FA
	static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0x0F72062D79ABA90A, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D
	static BOOL IS_ENTITY_IN_ZONE(Entity entity, char* zone) { return invoke<BOOL>(0x869964D1997FF234, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21
	static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xA7D2A868253353BE, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508
	static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0x9A03E05B8B97666F, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C
	static void _0xC6C38C99998CB7F6(Any p0, BOOL p1) { invoke<Void>(0xC6C38C99998CB7F6, p0, p1); } // 0x694E00132F2823ED 0x40C84A74
	static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xD525F9D50CBB6A5D, entity); } // 0xE659E47AF827484B 0xC1FEC5ED
	static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, char* animGroup, char* animation, int p4) { return invoke<BOOL>(0x23417CDB252083F9, entity, animGroup, animation, p4); } // 0x1F0B79228E461EC9 0x0D130D34
	static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0x001C6BE3BAFF3D86, entity); } // 0x1218E6886D3D8327 0x928E12E9
	static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x3C1B1C07A878AE1D, from, to); } // 0x17FFC1B2BA35A494 0x6B931477
	static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0x2FDA63B4D0688289, entity, modelHash); } // 0x0F42323798A58C8C 0x307E7611
	static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xFEE1AFEF6333581C, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1
	static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xD1ED65515DA55794, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F
	static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xB756E8D139BDE124, entity); } // 0x47D6F43D77935C75 0x120B4ED5
	static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0x715CF32E4ACFA610, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D
	static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0x51AAB57E2FC16B14, entity); } // 0xE31C2C72B8692B64 0x46BC5B40
	static BOOL WOULD_ENTITY_BE_OCCLUDED(Entity entity, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xEFCD862A1C3D0FF2, entity, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC
	static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xED5DA6DD52F21DA6, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A
	static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0x2FD3AA0C3395806A, entity, forceType, x, y, z, p5, p6, p7, p8); } // 0x18FF00FC7EFF559E 0x28924E98
	static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceType, float x, float y, float z, float xRot, float yRot, float zRot, int p8, BOOL isRel, BOOL ignoreUpVec, BOOL p11, BOOL p12, BOOL p13) { invoke<Void>(0x4B89CEB084587C7F, entity, forceType, x, y, z, xRot, yRot, zRot, p8, isRel, ignoreUpVec, p11, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A
	static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, BOOL isRelatve, BOOL collision, BOOL allowRotation, int flag, BOOL p14) { invoke<Void>(0x9E4D318905B670CB, entity1, entity2, boneIndex, x, y, z, xRot, yRot, zRot, p9, isRelatve, collision, allowRotation, flag, p14); } // 0x6B9BBD38AB0796DF 0xEC024237
	static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex, int boneIndex2, float x1, float y1, float z1, float x2, float y2, float z2, float xRot, float yRot, float zRot, float forceToBreak, BOOL p14, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0x5988BA5263C78460, entity1, entity2, boneIndex, boneIndex2, x1, y1, z1, x2, y2, z2, xRot, yRot, zRot, forceToBreak, p14, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F
	static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0x036B69A34116D83E, entity); } // 0xF4080490ADC51C6F 0x6909BA59
	static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, char* boneName) { return invoke<int>(0x56ADDC5BECDDD8A5, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22
	static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0x29FD5B1A4BA65801, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B
	static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xC1706D467A0DDDE1, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236
	static void DETACH_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x27B54A887EC71B05, entity, p1, p2); } // 0x961AC54BF0613F5D 0xC8EFCB41
	static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0x2878EC06B3F897A0, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57
	static void _0xFD092FF761E54535(Entity entity, BOOL p1) { invoke<Void>(0xFD092FF761E54535, entity, p1); } // 0x3910051CCECDB00C 0xD3850671
	static BOOL PLAY_ENTITY_ANIM(Entity entity, char* animation, char* propName, float p3, BOOL p4, BOOL p5, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x25C9465DC63B7255, entity, animation, propName, p3, p4, p5, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5
	static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, Entity syncedScene, char* animation, char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xDE77F887DBEE3953, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA
	static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, Any p5, Any* p6, Any* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xE1E7129E74951639, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xB9C54555ED30FBC4 0xEB4CBA74
	static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float p0, float p1, float p2, float p3, Any p4, float p5) { return invoke<BOOL>(0x7309311AE1B357A9, p0, p1, p2, p3, p4, p5); } // 0x11E79CAB7183B6F5 0x7253D5B2
	static Any STOP_ENTITY_ANIM(Entity entity, char* animation, char* animGroup, float p3) { return invoke<Any>(0xB699CD2B7D14B97D, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830
	static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xB4E40069DFD4B86F, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1
	static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0x8442AE3B8EA7046F, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0
	static BOOL FIND_ANIM_EVENT_PHASE(char* animDict, char* animation, char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xBC72FB156464483D, animDict, animation, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62
	static void SET_ENTITY_ANIM_CURRENT_TIME(Ped ped, char* animdict, char* animName, float time) { invoke<Void>(0xB06129278F33686E, ped, animdict, animName, time); } // 0x4487C259F0F70977 0x99D90735
	static void SET_ENTITY_ANIM_SPEED(Entity entityHandle, char* animationDiction, char* animationName, float speedMultiplier) { invoke<Void>(0x8CAD7018AB2D288A, entityHandle, animationDiction, animationName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A
	static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL value, BOOL p2) { invoke<Void>(0x20BB4B94CC6DDC9A, entity, value, p2); } // 0xAD738C3085FE7E11 0x5D1F9E0F
	static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0x52B01BD1A77FF6DE, entity); } // 0xB736A491E64A32CF 0xADF2267C
	static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0x506D42CB68AE4EA5, ped); } // 0x2595DD4236549CE3 0x9A388380
	static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xC1F2137782A816E9, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE
	static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0x9083C015A6C271BD, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F
	static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xACCAB3093F327084, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744
	static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, BOOL p1, Any p2) { invoke<Void>(0xB23BC3C49C95D714, p0, p1, p2); } // 0xE22D8FDE858B8119 0x34165B5D
	static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Any p0, BOOL p1) { invoke<Void>(0x8493FF6592994620, p0, p1); } // 0xD3997889736FD899 0x3B13797C
	static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0x70EE8EFEE355AD29, entity, toggle, p2); } // 0x1A9205C1B9EE827F 0x139FD37D
	static BOOL _0x2CE1C54846963545(Any p0) { return invoke<BOOL>(0x2CE1C54846963545, p0); } // 0xCCF1E97BEFDAE480
	static void _0x530BEF2114DBC28B(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x530BEF2114DBC28B, p0, p1, p2); } // 0x9EBC85ED0FFFE51C
	static void SET_ENTITY_COORDS(Entity entity, float X, float Y, float Z, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p7) { invoke<Void>(0x88A973CE47FBEF95, entity, X, Y, Z, xAxis, yAxis, zAxis, p7); } // 0x06843DA7060A026B 0xDF70B41B
	static void _SET_ENTITY_COORDS_2(Entity entity, float X, float Y, float Z, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p7) { invoke<Void>(0x2DCFD87100B00AD1, entity, X, Y, Z, xAxis, yAxis, zAxis, p7); } // 0x621873ECE1178967
	static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float X, float Y, float Z, BOOL p4, BOOL p5, BOOL p6) { invoke<Void>(0x9CA89729A675E8FF, entity, X, Y, Z, p4, p5, p6); } // 0x239A3351AC1DA385 0x4C83DE8D
	static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0x504BE965986F581A, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B
	static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0x151F32CB40BE730C, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D
	static void SET_ENTITY_HEALTH(Entity entity, int health) { invoke<Void>(0x09714949CF524B00, entity, health); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831
	static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0x2EF7A8CB89D363F6, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21
	static void SET_ENTITY_IS_TARGET_PRIORITY(Any p0, BOOL p1, float p2) { invoke<Void>(0x5D04A2BDCC04FCAE, p0, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32
	static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0x6A09BD66E55D95B1, entity, toggle); } // 0x7CFBA6A80BDF3874 0xE8FC85AF
	static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xC602CB510D8B9EAE, entity, toggle); } // 0x0DC7CABAB1E9B67E 0xC52F295B
	static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0x0236803891E9901F, entity); } // 0xE9676F61BC0B3321 0x851687F9
	static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xC25B42240F8A31FC, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3
	static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0x059F430B70190AB2, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50
	static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Any p0, BOOL p1, Any p2) { invoke<Void>(0x6129953402621F8B, p0, p1, p2); } // 0x7022BD828FA0B082 0x202237E2
	static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL p6, BOOL p7, BOOL drownProof) { invoke<Void>(0xD39141689169EF06, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, p6, p7, drownProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66
	static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0x1F8CB81CA52CE552, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F
	static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL record) { invoke<Void>(0xB8C9B83D96842A04, entity, record); } // 0x0A50A1EEDAD01E65 0x6B189A1A
	static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int p4, BOOL p5) { invoke<Void>(0x11089405D5CD3FD2, entity, pitch, roll, yaw, p4, p5); } // 0x8524A8B0171D5E07 0x0A345EFE
	static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL unkb) { invoke<Void>(0x60365B5AF8BF1FFA, entity, toggle, unkb); } // 0xEA1C610A04DB6BBB 0xD043E8E1
	static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x1E3A6C6A0B169167, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988
	static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0x6622FEFAC68D8AC9, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF
	static void SET_ENTITY_LOD_DIST(Entity entity, int distance) { invoke<Void>(0x29627C73E3F24F9A, entity, distance); } // 0x5927F96A78577363 0xD7ACC7AD
	static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0x2193D6A2880A5770, entity); } // 0x4159C2762B5791D6 0x4DA3D51F
	static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL p2) { invoke<Void>(0xC19A24F63AF3D606, entity, alphaLevel, p2); } // 0x44A0870B7E92D7C0 0xAE667CB0
	static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0x4BC0079806F764AB, entity); } // 0x5A47B3B5E63E94C6 0x1560B017
	static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0x6A6B5925551290D4, entity); } // 0x9B1E824FFBB7027A 0x8A30761C
	static void _0x21F96AE3F4EBEA54(Any p0, float p1) { invoke<Void>(0x21F96AE3F4EBEA54, p0, p1); } // 0x5C3B791D580E0BC2
	static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0x3405141D0F7FFCEB, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A
	static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0x63CDDAA80D76673A, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B
	static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xA41F3B10D67C151D, entity, state); } // 0x57C5DB656185EAC4 0xC47F5B91
	static void _0x9B2623C5A464D459(Any p0) { invoke<Void>(0x9B2623C5A464D459, p0); } // 0x78E8E3A640178255
	static void CREATE_MODEL_SWAP(float p0, float p1, float p2, float p3, Any p4, Any p5, BOOL p6) { invoke<Void>(0xA9528E0F36FB6110, p0, p1, p2, p3, p4, p5, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E
	static void REMOVE_MODEL_SWAP(float p0, float p1, float p2, float p3, Any p4, Any p5, BOOL p6) { invoke<Void>(0x23E06293EB9505D2, p0, p1, p2, p3, p4, p5, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC
	static void CREATE_MODEL_HIDE(float p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0x8C8B7B919A2D1050, p0, p1, p2, p3, p4, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F
	static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0xCB8BF340172E6F9C, p0, p1, p2, p3, p4, p5); } // 0x3A52AE588830BF7F 0x07AAF22C
	static void REMOVE_MODEL_HIDE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x4D8FEA7BB0E10A53, p0, p1, p2, p3, p4, p5); } // 0xD9E3006FB3CBD765 0x993DBC10
	static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0x215476B2529501A0, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2
	static void REMOVE_FORCED_OBJECT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x6DCF12BC158B36C0, p0, p1, p2, p3, p4); } // 0x61B6775E83C0DB6F 0xAED73ADD
	static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL toggle) { invoke<Void>(0x249A76E7AFBED637, entity1, entity2, toggle); } // 0xA53ED5520C07654A 0x1E11BFE9
	static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0x0642A074BED26F7D, entity, toggle); } // 0x295D82A8559F9150 0xE90005B8
	static void _0x77F1213969A4DF7D(Entity entity, BOOL p1) { invoke<Void>(0x77F1213969A4DF7D, entity, p1); } // 0xE12ABE5E3A389A6C 0x44767B31
	static void _0x1BBFACD953632AAB(Entity entity, BOOL p1) { invoke<Void>(0x1BBFACD953632AAB, entity, p1); } // 0xA80AE305E0A3044F 0xE224A6A5
	static void _0xF7696B7AB48D0D1C(Entity entity, BOOL p1) { invoke<Void>(0xF7696B7AB48D0D1C, entity, p1); } // 0xDC6F8601FAF2E893
	static void _0x0664684998386BCA(Entity entity, BOOL p1) { invoke<Void>(0x0664684998386BCA, entity, p1); } // 0x2C2E3DC128F44309
	static void _0x32868DE5B586E6F9(Entity entity, BOOL p1) { invoke<Void>(0x32868DE5B586E6F9, entity, p1); } // 0x1A092BB0C3808B96
}

namespace PED
{
	static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0xA7F4088D9A2629CC, pedType, modelHash, x, y, z, heading, networkHandle, pedHandle); } // 0xD49F9B0955C367DE 0x0389EF71
	static void DELETE_PED(Ped* ped) { invoke<Void>(0x2C9DDB5306DF417C, ped); } // 0x9614299DCB53E54B 0x13EFB9A0
	static Ped CLONE_PED(Ped ped, float heading, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0x0E84EC7A1286DAC3, ped, heading, networkHandle, pedHandle); } // 0xEF29A16337FACADB 0x8C8A8D6E
	static void _ASSIGN_PLAYER_TO_PED(Player player, Ped ped) { invoke<Void>(0x3B411A42A7D77CED, player, ped); } // 0xE952D6431689AD9A 0xFC70EEC7
	static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0x8AF655CC5761C7A2, ped, vehicle, atGetIn); } // 0xA3EE4A07279BB9DB 0x7DA6BC83
	static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x63E25E4341FF2308, ped, modelHash); } // 0x796D90EFB19AA332 0xA6438D4B
	static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x51374A0BB2871E6E, ped, atGetIn); } // 0x997ABD671D25CA0B 0x3B0171EE
	static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x3498640250A18717, x1, y1, z1, x2, y2, z2); } // 0x16EC4839969F9F5E 0xB98DB96B
	static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xAF437D7C802AB246, ped); } // 0x84A2DD9AC37C35C1 0x2530A087
	static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0x4851701C73D1E9B3, ped); } // 0x5983BB449D7FDB12 0x69DFA0AF
	static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xF81B6A0547AE4030, ped); } // 0xD839450756ED5A80 0xBADA0093
	static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x3816C3BD290334DC, ped, p1); } // 0x3317DEDB88C95038 0xCBDB7739
	static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0x30B9624BD969F89F, ped); } // 0xE0A0AEC214B1FABA 0x1FA39EFE
	static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0x8AEBE9C789B3066F, ped); } // 0x3998B1276A3300E5 0xDEBAB2AF
	static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x24AFC9CE2953B95D, ped); } // 0x24B100C68C645951 0x961E1745
	static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x1415CDB1128C3FBC, ped); } // 0x12534C348C6CB68B 0x404794CA
	static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL networkHandle, BOOL pedHandle) { return invoke<Ped>(0xF430A9686E704FA3, vehicle, pedType, modelHash, seat, networkHandle, pedHandle); } // 0x7DD959874C1FD534 0x3000F092
	static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0x2B92079F1114BDFF, ped, heading); } // 0xAA5A7ECE2AA8FE70 0x961458F9
	static void _0xD26458226AAA6C24(Any p0) { invoke<Void>(0xD26458226AAA6C24, p0); } // 0xFF287323B0E2C69A 0x290421BE
	static BOOL IS_PED_FACING_PED(Ped ped1, Player ped2, float angle) { return invoke<BOOL>(0xFA68268DB708808B, ped1, ped2, angle); } // 0xD71649DB0A545AA3 0x0B775838
	static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xC3AE89795D844EE9, ped); } // 0x4E209B2C1EAD5159 0xFD7814A5
	static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0x960D953E3623A78D, ped); } // 0x530944F6F4B8A214 0xA0DC0B87
	static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0x2A6E6FF76887B96F, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x7E9DFE24AC1E58EF 0x741BF04F
	static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x5E872508EA101E0E, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA0D3D71EA1086C55 0x91833867
	static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xD0C9DCB982CB2D78, ped); } // 0x34616828CD07F1A1 0xE7C3405E
	static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xB161EBD04DDDE4AD, ped, accuracy); } // 0x7AEFB85C1D49DEB6 0x6C17122E
	static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xE4D9D840344173BE, ped); } // 0x37F4AD56ECBC0CD6 0x0A2A0AA0
	static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x39AAA01637173E81, ped, modelHash); } // 0xC9D55B1A358A5BF7 0x5F1DDFCB
	static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0x90C93E6F2AE60A2F, ped, weaponHash); } // 0x2D05CED3A38D0F3A 0x05CC1380
	static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0x49FDB864A81526D1, ped); } // 0xAC6D445B994DF95E 0x4FFB8C6C
	static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xF395F63F6D4D821C, ped, amount); } // 0x5BA652A0CD14DF2F 0xF686B26E
	static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0x08A0DE0E70BBD4C2, ped, amount); } // 0xCEA04D83135264CC 0x4E3A0CC4
	static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0x0CC1C59D57D7212B, ped, vehicle, seatIndex); } // 0xF75B0D629E1C063D 0x07500C79
	static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0x1541B0EC0E023838, ped, toggle); } // 0x3C028C636A414ED9 0x58A80BD5
	static BOOL CAN_CREATE_RANDOM_PED(Any p0) { return invoke<BOOL>(0x5025ADDB98C0478A, p0); } // 0x3E8349C08E4B82E4 0xF9ABE88F
	static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0x1E9F26C09DC24B58, posX, posY, posZ); } // 0xB4AC7D0CF06BFE8F 0x5A949543
	static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0x9B2DD4AED0B6E7E4, vehicle, returnHandle); } // 0x9B62392B474F44A0 0xB927CE9A
	static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0x411E10E414330982); } // 0xB8EB95E5B4E56978 0x99861609
	static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xA422DE4024B0ADE8); } // 0xEACEEDA81751915C 0x7018BE31
	static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0x42431D22973ADC5D, ped); } // 0x9E8C908F41584ECD 0x20E01957
	static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xA57E5D17BDE26B40, ped, toggle); } // 0xC1670E958EEE24E5 0xAA7F1131
	static void _0x2E2D9EE4891771D6(BOOL p0) { invoke<Void>(0x2E2D9EE4891771D6, p0); } // 0xF2BEBCDFAFDAA19E 0x6CD58238
	static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0x0C2FCAD5220719B8, ped); } // 0x6D9F5FAA7488BA46 0x90950455
	static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0x45122B522E773E89, ped); } // 0xB980061DA992779D 0x194BB7B0
	static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL getLastVehicle) { return invoke<Vehicle>(0xF0295FF51F2D7803, ped, getLastVehicle); } // 0x9A9112A0FE9A4713 0xAFE92319
	static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0x2E4D4E5B335FC291, ped); } // 0xBB8DE8CF6A8DD8BB 0x5E3B5942
	static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xB5E760C0C1663A2F, multiplier); } // 0x95E3D6257B166CF2 0x039C82BB
	static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xBB6FF9B404DB66CD, p0, p1); } // 0x7A556143A1C03898 0x2909ABF0
	static void _0x80CB63FDCF422ABF() { invoke<Void>(0x80CB63FDCF422ABF); } // 0x5A7F62FDA59759BD 0xB48C0C04
	static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(Any p0, Any p1, Any p2) { invoke<Void>(0xAC6A5ED380BAF667, p0, p1, p2); } // 0x5086C7843552CF85 0x25EA2AA5
	static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xA30D54731C0AAECF, x1, y1, z1, x2, y2, z2); } // 0xEE01041D559983EA 0x7A97283F
	static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0x1D23906D962EED92); } // 0x2E05208086BA0651 0x6F7043A3
	static void _0xA71C4E5DA851EB0F() { invoke<Void>(0xA71C4E5DA851EB0F); } // 0x4759CC730F947C81 0x8C555ADD
	static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0x0871F70E8573AA53, ped); } // 0x460BC76A0E10655E 0x43103006
	static Any GET_MOUNT(Any p0) { return invoke<Any>(0x5A8F2D9F99D081B1, p0); } // 0xE7E11B8DCBED1058 0xDD31EC4E
	static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0x69698327B40517CD, ped); } // 0x67722AEB798E5FAB 0xA1AE7CC7
	static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0x7216F2326CC6B06A, ped, vehicle); } // 0xEC5F66E459AF3BB2 0x63CB4603
	static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0x82F10D839CF95C09, ped, amount); } // 0xA9C8960E8684C1B5 0x40D90BF2
	static int GET_PED_MONEY(Ped ped) { return invoke<int>(0x76AE74E07EBA0DE3, ped); } // 0x3F69145BBA87BAE7 0xEB3C4C7E
	static void _0x816E8203A6CA6131(float p0, Any p1) { invoke<Void>(0x816E8203A6CA6131, p0, p1); } // 0xFF4803BC019852D9 0xD41C9AED
	static void _0xCA45551E6CC4305D(BOOL p0) { invoke<Void>(0xCA45551E6CC4305D, p0); } // 0x6B0E6172C9A4D902 0x30B98369
	static void _0x9CD0949985A48085(BOOL p0) { invoke<Void>(0x9CD0949985A48085, p0); } // 0x9911F4A24485F653 0x02A080C8
	static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xDEF79D33A50B28A7, ped, toggle); } // 0xEBD76F2359F190AC 0x6F6FC7E6
	static void _0x767EC4A6F52947D1(Any p0, BOOL p1) { invoke<Void>(0x767EC4A6F52947D1, p0, p1); } // 0xAFC976FD0580C7B3 0x1572022A
	static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xF50745B40235B5B8, ped, vehicle); } // 0xA808AA1D79230FC2 0xDDDE26FA
	static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x471E33531AEA977D, ped); } // 0x826AA586EDB9FEF8 0x0EA9CA03
	static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xD33337101FE7D2FE, ped); } // 0x01FEE67DB37F59B2 0xC60D0785
	static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0x83A7252D14019A24, ped); } // 0x94495889E22C6479 0x4D885B2E
	static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xA7AC3687807201B4, ped); } // 0xC70B5FAE151982D8 0x0EDAC574
	static Vector3 GET_DEAD_PED_PICKUP_COORDS(Any p0, float p1, float p2) { return invoke<Vector3>(0x6A3D20C8091811BD, p0, p1, p2); } // 0xCD5003B097200F36 0x129F9DC1
	static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0x8AA6E648EA73FF4C, ped); } // 0x2E0E1C2B4F6CB339 0x1118A947
	static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0x32C78E85F7C35A47, ped); } // 0xFBFC01CCFB35D99E 0xE65F8059
	static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0x523C6F050AF90E4F, ped); } // 0x298B91AE825E5705 0x7AB5523B
	static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0x8BFF7CA791EED675, ped); } // 0x5FFF4CFC74D8FB80 0x51BBCE7E
	static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xC62AC8D7E29686A2, ped); } // 0x9134873537FA419C 0xCA072485
	static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xD03433F048B6A79A, ped, toggle); } // 0x56CEF0AC79073BDE 0x604C872B
	static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x17901D529FAADB78, ped, toggle); } // 0xD718A22995E2B4BC 0x8D4D9ABB
	static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xCF6C3B9035370727, ped); } // 0x9483AF821605B1D8 0x2CE311A7
	static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0x3E8B036C6C9E581C, ped, toggle); } // 0xEDF4079F9D54C9A1 0xB014A09C
	static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x4ECE628F133B6FC9, ped, toggle); } // 0xC7EF1BA83230BA07 0x5DB7B3A9
	static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, Any* outBone) { return invoke<BOOL>(0xAC83D13D757C1460, ped, outBone); } // 0xD75960F6BD9EA49C 0xAB933841
	static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0x3F0A987C8E4B88F1, ped); } // 0x8EF6B7AC68E2F01B 0x56CB715E
	static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xA9FA1248395B0CF9, value); } // 0x1B1E2A40A65B8521 0x516E30EE
	static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x012461D858783BBE); } // 0xEA16670E7BA4743C 0x6E965420
	static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0x7C593F950E8E46A9, modifier); } // 0x66460DEDDD417254 0x0F9A401F
	static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x3E808906E38E6F2E); } // 0x46E56A7CD1D63C3F 0x97886238
	static void _0x2D5B0E9CA65BDF53(Any p0, BOOL p1) { invoke<Void>(0x2D5B0E9CA65BDF53, p0, p1); } // 0x2F3C3D9F50681DE4 0xCC9D7F1A
	static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0x321C1AA209172C00, ped, toggle); } // 0x63F58F7C80513AAD 0x75C49F74
	static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, Any team, BOOL toggle) { invoke<Void>(0xE884EA5BA7338886, ped, team, toggle); } // 0xBF1CA77833E58F2C 0xB103A8E1
	static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0x4D58696AF1A7E839, ped, player, toggle); } // 0x66B57B72E0836A76 0xD050F490
	static void _0x6B21B063B2EB9FDB(Any p0, BOOL p1) { invoke<Void>(0x6B21B063B2EB9FDB, p0, p1); } // 0x061CB768363D6424 0x7DA12905
	static void SET_TIME_EXCLUSIVE_DISPLAY_TEXTURE(Any p0, BOOL p1) { invoke<Void>(0x23D657F1E60645E7, p0, p1); } // 0xFD325494792302D7 0x7F67671D
	static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xCFA5146E8AEF8EB0, ped); } // 0x0BD04E29640C9C12 0x84FA790D
	static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0x6CD9B6E9B45C83C2, ped); } // 0x16E42E800B472221 0xA819680B
	static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0x3A065D524128D33B, ped); } // 0x7DCE8BDA0F1C1200 0xCD71F11B
	static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xA2245114BF58F40D, ped); } // 0xFB92A102F1C4DFA3 0xABF77334
	static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xE9116ECE1C4C9B9D, ped); } // 0xCEDABC5900A0BF97 0x07E5BC0E
	static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x2198CC96FD98B484, ped); } // 0x53E8CB4F48BFE623 0xBCE03D35
	static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0x84C7BFAA93B85D82, ped); } // 0x117C70D1F5730B5E 0xC3169BDA
	static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0x0ED4332F0F542906, ped); } // 0x5527B8246FEF9B11 0x7BC5BF3C
	static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xA49E19CA305DE808, ped); } // 0x433DDFFE2044B636 0xB19215F6
	static BOOL _0x3D1064E6B8746EFB(Any p0) { return invoke<BOOL>(0x3D1064E6B8746EFB, p0); } // 0x26AF0E8E30BD2A2C
	static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0x3CDEA125E379201E, ped); } // 0x79CFD9827CC979B6 0x7D4BC475
	static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xAA3123355744444C, ped); } // 0x8B9F1FC6AE8166C0 0x01F3B035
	static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any tintIndex) { invoke<Void>(0xB48C77E2C497E626, ped, tintIndex); } // 0x333FC8DB079B7186 0x5AEFEC3A
	static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, Any* outTintIndex) { invoke<Void>(0xB9D5D2F504149795, ped, outTintIndex); } // 0xEAF5F7E5AE7C6C9D 0xE9E7FAC5
	static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xC94C24E1903AFCB3, p0, p1); } // 0xE88DA0751C22A2AD 0x177EFC79
	static Any _0x342B1EBA9968D5AE(Any p0, BOOL p1, BOOL p2) { return invoke<Any>(0x342B1EBA9968D5AE, p0, p1, p2); } // 0x8C4F3BF23B6237DB
	static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0x34DCA6051298B2F6, ped, toggle); } // 0x030983CA930B692D 0xB90353D7
	static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xE9A68AC6DAD8AF48, ped); } // 0xD125AE748725C6BC 0x9199C77D
	static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xD7F7FE7C1017323D, ped); } // 0x6E575D6A898AB852 0x16FD386C
	static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xDA2CE8F608C0C0AF, ped, value); } // 0xF107E836A70DCE05 0xEF3B4ED9
	static void _0x0F1ED7898CB291B2(Ped ped, BOOL p1) { invoke<Void>(0x0F1ED7898CB291B2, ped, p1); } // 0x52D59AB61DDC05DD 0x9A2180FF
	static void _0xD9830CE88D55CCD0(Any p0, float p1) { invoke<Void>(0xD9830CE88D55CCD0, p0, p1); } // 0xEC4B4B3B9908052A 0xF30658D2
	static void _0x851A5B1347F186F0(Any p0) { invoke<Void>(0x851A5B1347F186F0, p0); } // 0x733C87D4CE22BEA2 0x43709044
	static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0x07B8B2D4A37EF139, ped, value); } // 0xF29CF591C4BF6CEE 0x4BD72FE8
	static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0x13866008405A72EE, ped, value); } // 0x33A8F7F7D5F7F33C 0xB32087E0
	static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xC8C98616330C2235, ped, value); } // 0x2DB492222FB21E26 0x72E2E18B
	static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xAD3898EC342785E7, ped, value); } // 0x70793BDCA1E854D4 0x0CEA0F9A
	static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xC6E455D301AD8F7F, ped, angle); } // 0x7A276EB2C224D70F 0x5CC2F1B8
	static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xE9C5AFC163F38B53, ped, angle); } // 0x78D0B67629D75856 0x39D9102F
	static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0x2AA3F7975F22D83C, ped, range); } // 0x9C74B0BC831B753A 0xFDF2F7C2
	static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xA792FC945D14FB8E, ped, angle); } // 0x3B6405E8AB34A907 0xE57202A1
	static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, char* action) { invoke<Void>(0xA3A83FA0784C86DE, ped, p1, action); } // 0x88CBB5CEB96B7BD2 0x67E28E1D
	static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0x9FB2F45912EB7218, ped); } // 0x7C2AC9CA66575FBF 0x40321B83
	static int CREATE_GROUP(int unused) { return invoke<int>(0x3CEE64591222DD1D, unused); } // 0x90370EBE0FEE1A3D 0x8DC0368D
	static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0x77E8BA4EA7D34446, ped, groupId); } // 0x2A7819605465FBCE 0x7265BEA2
	static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0x560F88FE1A93011B, ped, groupId); } // 0x9F3480FE65DB31B5 0x0EE13F92
	static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL p2) { invoke<Void>(0xC2FEF04DA429A001, pedHandle, groupHandle, p2); } // 0x2E2F4240B3F24647 0xD0D8BDBC
	static void REMOVE_GROUP(int groupId) { invoke<Void>(0xE1E9FD569CA77A19, groupId); } // 0x8EB2F69076AF7053 0x48D72B88
	static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0x46D4C1D7588933FB, ped); } // 0xED74007FFB146BC2 0x82697713
	static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xCA9354733F0AE57E, ped, groupId); } // 0x9BB01E3834671191 0x876D5363
	static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0x9E8DC7839B6000A3, ped); } // 0x1C86D8AEF8254B78 0x9678D4FF
	static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0x03E55D89BC1D3144, groupHandle, separationRange); } // 0x4102C7858CFEE4E4 0x7B820CD5
	static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xB15CBEAACA82A19F, ped, ms); } // 0xFA0675AB151073FA 0x2F0D0973
	static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0x2F0EE2782A6E3DF7, ped); } // 0xD6A86331A537A7B9 0x02C2A6C3
	static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x0930CF2B56CCE2B8, ped, target); } // 0x4859F1FC66A6278E 0xFE027CB5
	static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0x53509FF44802E2E2, ped, target); } // 0xEAD42DE3610D0721 0xCCD525E1
	static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xD3722F3F6A62C53F, ped); } // 0xB2C086CC1BF8F2BF 0xAC3CEB9C
	static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0x5DD29D700F7A48AB, ped); } // 0x4AE4FF911DFB61DA 0x3B321816
	static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0x4231F56FA5885AE9, ped); } // 0x9A497FE2DF198913 0xD45D605C
	static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0x910C31F2C06B61D5, ped, p1); } // 0x4FBACCE3B4138EE8 0x0A66CE30
	static Any GET_PEDS_JACKER(Any p0) { return invoke<Any>(0x9D84FB8703BD7832, p0); } // 0x9B128DC36C1E04CF 0xDE1DBB59
	static Any GET_JACK_TARGET(Any p0) { return invoke<Any>(0x8B97E45178CE6EE4, p0); } // 0x5486A79D9FBD342D 0x1D196361
	static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xF05AC1C00BC1230B, ped); } // 0xBBCCE00B381F8482 0x85D813C6
	static BOOL IS_PED_IN_COVER(Ped ped, BOOL p1) { return invoke<BOOL>(0x121E5731B289F6E9, ped, p1); } // 0x60DFD0691A170B88 0x972C5A8B
	static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0x633D3F5FD2155845, ped); } // 0x845333B3150583AB 0xB89DBB80
	static BOOL _0x7277423AA2DC28BC(Any p0) { return invoke<BOOL>(0x7277423AA2DC28BC, p0); } // 0x6A03BF943D767C93
	static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x73D23B623CFE7F87, ped); } // 0x9F65DBC537E59AD5 0xA3589628
	static Any SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<Any>(0xDF5833513B132357, ped, pinned, i); } // 0xAAD6D1ACF08F4612 0xCC78999D
	static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xC5AF8A7AD9B775D0, ped); } // 0x6F4C85ACD641BCD2 0xACF162E0
	static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0x6619B1B2C971FE10, ped); } // 0x814FA8BE5449445D 0x99968B37
	static Entity _GET_PED_KILLER(Ped ped) { return invoke<Entity>(0xA4B928C90A3BEC26, ped); } // 0x93C8B64DEB84728C 0x84ADF9EB
	static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xD0A47184F3928F62, ped); } // 0x16FFE42AB2D2DC59 0x63458C27
	static int _GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xD30D9F40AB06BA20, ped); } // 0x1E98817B311AE98A
	static Any _0x8F4395E832F66DDF(Any p0) { return invoke<Any>(0x8F4395E832F66DDF, p0); } // 0x5407B7288D0478B7 0xEF0B78E6
	static Any _0x9A75BFB6043190AE(Any p0, float p1, float p2, float p3, float p4) { return invoke<Any>(0x9A75BFB6043190AE, p0, p1, p2, p3, p4); } // 0x336B3D200AB007CB 0xFB18CB19
	static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xB3830F13F07D43CA, ped, hash); } // 0xADB3F206518799E8 0x423B7BA2
	static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0x690C5239500171FE, ped, hash); } // 0xC80A74AC829DDD92 0x79F8C18C
	static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xA9CA101B50B90993, relationship, group1, group2); } // 0xBF25EB89375A37AD 0xD4A215BA
	static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0x0BC9F7BA2AD16D6D, relationship, group1, group2); } // 0x5E29243FB56FC6D4 0x994B8C2D
	static Any ADD_RELATIONSHIP_GROUP(char* name, Hash* groupHash) { return invoke<Any>(0x103FCC2BD24292A3, name, groupHash); } // 0xF372BC22FCB88606 0x8B635546
	static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xF6231EA8B0BD197C, groupHash); } // 0xB6BA2444AB393DA2 0x4A1DC59A
	static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0x894783E59F475DB1, ped1, ped2); } // 0xEBA5AD3A0EAF7121 0xE254C39C
	static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0x0F435328E7A44ADB, ped); } // 0x42FDD0F017B1E38E 0x714BD6E4
	static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0x1EB88099AAF24BDE, ped); } // 0x7DBDD04862D95F04 0x354F283C
	static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0x71EF2827C4AC5DD9, group1, group2); } // 0x9E6B70061662AE5C 0x4E372FE2
	static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0x45C1EE33E8275619, ped, toggle); } // 0x4328652AE5769C71 0x7FDDC0A6
	static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, Any maxFriends) { invoke<Void>(0x62613A8BF7D07461, ped, radius, maxFriends); } // 0x112942C6E708F70B 0xD78AC46C
	static BOOL IS_PED_RESPONDING_TO_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xBAB726BD47F3EA9C, p0, p1); } // 0x625B774D75C87068 0x7A877554
	static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0x82FABE826A707A5D, ped, patternHash); } // 0x9AC577F5A12AD8A9 0xB4629D66
	static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0x64E0FC912F0D2D42, ped, shootRate); } // 0x614DA022990752DC 0xFB301746
	static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0x191E9538011889C9, ped, combatType, p2); } // 0xFF41B4B141ED981C 0xD8B7637C
	static float GET_COMBAT_FLOAT(Any p0, Any p1) { return invoke<float>(0x373E3FAFAC235F27, p0, p1); } // 0x52DFF8A10508090A 0x511D7EF8
	static void GET_GROUP_SIZE(int groupID, Any* unknown, int* sizeInMembers) { invoke<Void>(0x42A3E0C3074B8A8B, groupID, unknown, sizeInMembers); } // 0x8DE69FE35CA09A45 0xF7E1A691
	static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0x408CEC2E56F55CDC, groupId); } // 0x7C6B0C22F9F40BBE 0x935C978D
	static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0x9E9E5E02C8D4EF68, ped); } // 0xF162E133B4E7A675 0x134E0785
	static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x6CCCE00683E8FD6D, ped); } // 0x5891CAC5D4ACFF74 0x836D9795
	static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0x0975B24B4D392596, ped); } // 0x6A3975DEA89F9A17 0xDE7442EE
	static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0x6C7F909C6CF508B4, groupId, formationType); } // 0xCE2F5FC3AF7E8C1E 0x08FAC739
	static void SET_GROUP_FORMATION_SPACING(int groupId, float p1, float p2, float p3) { invoke<Void>(0xADF490FA77F7E661, groupId, p1, p2, p3); } // 0x1D9D45004C28C916 0xB1E086FF
	static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xFDE188779D02B996, groupHandle); } // 0x63DAB4CCB3273205 0x267FCEAD
	static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0x03291915DC767232, ped); } // 0x6094AD011A2EA87D 0x6DE3AADA
	static Any SET_EXCLUSIVE_PHONE_RELATIONSHIPS(Any p0) { return invoke<Any>(0x811668789F0F4837, p0); } // 0xF92691AED837A5FC 0x56E0C163
	static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0x3E86C579A2BCB395, ped, toggle); } // 0x9FF447B6B6AD960A 0x3CA16652
	static void APPLY_DAMAGE_TO_PED(Ped ped, Any damageAmount, BOOL p2) { invoke<Void>(0xF35E9C82246B2BAD, ped, damageAmount, p2); } // 0x697157CED63F18D4 0x4DC27FCF
	static Any _0xADD582A4974FB0D5(Any p0, Any p1) { return invoke<Any>(0xADD582A4974FB0D5, p0, p1); } // 0x36B77BB84687C318
	static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xA8B169A00C3D855A, ped, toggle); } // 0xDA1F1B7BE1A8766F 0xC4D122F8
	static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0x0B3D58B4B3F33CE5, ped, toggle); } // 0x3DBFC55D5C9BB447 0x0E038813
	static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xA4FAAECD4F28D297, ped); } // 0xFF059E1E4C01E63C 0xB1460D43
	static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xC3BF4FACB3821EC2, ped, toggle); } // 0xBB03C38DD3FB7FFD 0x84E7DE9F
	static void SET_PED_MAX_HEALTH(Ped ped, Any value) { invoke<Void>(0xEFEED5D1AC8E24F1, ped, value); } // 0xF5F6378C4F3419D3 0x5533F60B
	static Any GET_PED_MAX_HEALTH(Ped ped) { return invoke<Any>(0xFEF5115F73820565, ped); } // 0x4700A416E8324EF3 0xA45B6C8D
	static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xE9CBD23F600D141C, ped, value); } // 0x43C851690662113D 0xFE0A106B
	static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xFF2B2D5FC8899325, ped, value); } // 0x6BA428C528D9E522 0x082EF240
	static void _0xB628385F9F755F77(Any p0, float p1) { invoke<Void>(0xB628385F9F755F77, p0, p1); } // 0x2735233A786B1BEF 0x373CC405
	static void _0x6596937694F41D5E(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6596937694F41D5E, p0, p1, p2, p3); } // 0x952F06BEECD775CC
	static void _0x4262B78845714EE8(Any p0) { invoke<Void>(0x4262B78845714EE8, p0); } // 0xE6CA85E7259CE16B
	static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0x5AD8036BAC7AF207, ped, state); } // 0x7A6535691B477C48 0x8A251612
	static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xEF9966B87781BAEA, ped); } // 0x51AC07A44D4F5B8A 0xC9D098B3
	static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0x5A68FA42DCD8F728, ped); } // 0x45BBCBA77C29A841 0xACDD0674
	static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0x8C53C3BEA5BFB3C9, ped, posX, posY, posZ); } // 0x87052FE446E07247 0x9561AD98
	static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0x4CEF23C83C8E63F9, groupID, memberNumber); } // 0x51455483CF23ED97 0x9AA3CC8C
	static Ped _GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0x7E47936928BA5A28, groupID); } // 0x5CCE68DBD5FE93EC
	static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0x8D6671D78D1F569B, ped, toggle); } // 0x971D38760FBC02EF 0xA7EC79CE
	static void _0x95FBF68F793EBB36(Any p0, BOOL p1) { invoke<Void>(0x95FBF68F793EBB36, p0, p1); } // 0x49E50BDB8BA4DAB2 0x397F06E3
	static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x43F528FB3D5E9B0F, ped); } // 0x9DE327631295B4C2 0x7AB43DB8
	static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0x317621AF5DB7A5FF, ped); } // 0xC024869A53992F34 0x0E8D524F
	static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xC460EB4DE5C459DC, ped, posX, posY, posZ); } // 0x9AFEFF481A85AB2E 0xD66AE1D3
	static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x89899508226BF8ED, ped, toggle); } // 0x2A30922C90C9B42C 0x6FE1E440
	static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0x0DC2F8EF73751B15, toggle); } // 0x102E68B2024D536D 0x23441648
	static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xF1FC165B08926D30, toggle); } // 0x8A4986851C4EF6E7 0x82E548CC
	static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0x5D731AEA601DD453, toggle); } // 0x444CB7D7DBE6973D 0xEDC31475
	static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xDC3214EEDDDE83B0); } // 0x5EE2CAFF7F17770D 0xAA73DAD9
	static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0x84D30AE13C5F7CD6, ped, toggle); } // 0x02A0C9720B854BFA 0xAE620A1B
	static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x676B6F3C4441F2D8, ped, p1, p2); } // 0x1CCE141467FF42A2 0x149C60A8
	static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x7D1C9ABC64D56FA0, ped); } // 0x6F972C1AB75A1ED0 0x759EF63A
	static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xF3140D055686CF79, ped); } // 0xBB062B2B5722478E 0x90E805AC
	static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0x877B876764DA7148, ped); } // 0x44D28D5DDFE5F68C 0x46828B4E
	static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0x2D1354B0E8950377, ped, toggle); } // 0xDF1AF8B5D56542FA 0xAC9BBA23
	static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0x32049A8CE4CE52AA, ped, toggle); } // 0xC52E0F855C58FC2E 0x9208D689
	static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0x205C0239DDDD338A, ped, toggle); } // 0xF99F62004024D506 0x7BF61471
	static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x2F82DFE033B2E30B, ped, toggle, p2); } // 0xB3B1CB349FF9C75D 0x47C60963
	static Any GET_PED_ALERTNESS(Ped ped) { return invoke<Any>(0x0EB667229A87EB19, ped); } // 0xF6AA118530443FD2 0xF83E4DAF
	static void SET_PED_ALERTNESS(Ped ped, Any value) { invoke<Void>(0x59BC42324B2966AD, ped, value); } // 0xDBA71115ED9941A6 0x2C32D9AE
	static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x97432097EDCCE1DF, ped, toggle); } // 0xBC0ED94165A48BC2 0x89AD49FF
	static void SET_PED_MOVEMENT_CLIPSET(Ped ped, char* clipSet, float p2) { invoke<Void>(0xA8BB37BC9C4A95D4, ped, clipSet, p2); } // 0xAF8A94EDE7712BEF 0xA817CDEB
	static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xC456353A87F0538B, ped, p1); } // 0xAA74EC0CB0AAEA2C 0xB83CEE93
	static void SET_PED_STRAFE_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0xFB6719329FB71C7D, ped, clipSet); } // 0x29A28F3F8CF6D854 0x0BACF010
	static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0x31571B9851A59054, ped); } // 0x20510814175EA477 0xF1967A12
	static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, char* clipSet) { invoke<Void>(0x221855D40AA0FC73, ped, clipSet); } // 0x2622E35B77D3ACA2 0xF8BE54DC
	static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0x1E4330D1AF23718F, ped); } // 0x97B0DB5B4AA74E77 0xC60C9ACD
	static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, char* clipset) { invoke<Void>(0x3F3A1241200923CD, ped, clipset); } // 0xED34AB6C5CB36520 0xD4C73595
	static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0x1566A618AF8396C0, ped); } // 0x4AFE3690D7E0B5AC 0xAEC9163B
	static void _0xE3E53D881B576A18(Any p0, Any* p1) { invoke<Void>(0xE3E53D881B576A18, p0, p1); } // 0x9DBA107B4937F809
	static void _0x570F54FB032B1902(Any p0) { invoke<Void>(0x570F54FB032B1902, p0); } // 0xC79196DCB36F6121
	static void _0x304EE6972A9F81D0(Any p0) { invoke<Void>(0x304EE6972A9F81D0, p0); } // 0x80054D7FCC70EEC6
	static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xD011E08910783567, ped, context); } // 0x530071295899A8C6 0x27F25C0E
	static void RESET_PED_IN_VEHICLE_CONTEXT(Any p0) { invoke<Void>(0x26CBEA3336FB494C, p0); } // 0x22EF8FF8778030EB 0x3C94D88A
	static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, char* animDict, char* anim) { return invoke<BOOL>(0xF07E123A739385B6, ped, animDict, anim); } // 0x6EC47A344923E1ED 0x3C30B447
	static void SET_PED_ALTERNATE_WALK_ANIM(Any p0, Any* p1, Any* p2, float p3, BOOL p4) { invoke<Void>(0x26188BD23E677A41, p0, p1, p2, p3, p4); } // 0x6C60394CB4F75E9A 0x895E1D67
	static void CLEAR_PED_ALTERNATE_WALK_ANIM(Any p0, float p1) { invoke<Void>(0x0601D561DB3882B4, p0, p1); } // 0x8844BBFCE30AA9E9 0x5736FB23
	static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, char* animDictionary, char* animationName, float p4, BOOL p5) { invoke<Void>(0x398E777BCA3D5CD6, ped, stance, animDictionary, animationName, p4, p5); } // 0x90A43CC281FFAB46 0xBA84FD8C
	static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xB1FD413192DFB74F, ped, stance, p2); } // 0xD8D19675ED5FBDCE 0x7A7F5BC3
	static void SET_PED_GESTURE_GROUP(Ped ped, Any* p1) { invoke<Void>(0x7B1263B55D93DE04, ped, p1); } // 0xDDF803377F94AAA8 0x170DA109
	static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0x485562BFEB1B08F9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xBE22B26DD764C040 0xC59D4268
	static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(Any* p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9) { return invoke<Vector3>(0x1F32EC24F499C0FC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x4B805E6046EE9E47 0x5F7789E6
	static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x0CBEED266436AEFF, ped, componentId); } // 0x67F3780DD425D4FC 0x29850FE2
	static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0x493912FE8AE9CD66, ped, componentId); } // 0x27561561732A7842 0x9754C27D
	static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xB9111DA78E2971F6, ped, componentId); } // 0x04A355E041E004E6 0xC0A8590A
	static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0x87E8ECA90D44696A, ped, componentId, drawableId); } // 0x8F7156A3142A6BAD 0x83D9FBE7
	static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xBC853F0C96DDDC2B, ped, propId); } // 0x5FAF9754E789FB47 0xC9780B95
	static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0x163448612A4F0678, ped, propId, drawableId); } // 0xA6E7F1CEB523E171 0x4892B882
	static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0x5B56B32E043336F7, ped, componentId); } // 0xE3DD5F2A84B42281 0xEF1BC082
	static BOOL _0xD75BD3F3542F26E7(Any* p0, Any* p1) { return invoke<BOOL>(0xD75BD3F3542F26E7, p0, p1); } // 0x9E30E91FB03A2CAF
	static Any _0xCEB4767CDC093F21(Any p0) { return invoke<Any>(0xCEB4767CDC093F21, p0); } // 0x1E77FA7A62EE6C4C
	static Any _0x8E1DAD93C13DBA4D(Any p0) { return invoke<Any>(0x8E1DAD93C13DBA4D, p0); } // 0xF033419D1B81FAE8
	static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xE3CCC72BD6BC23AE, ped, componentId, drawableId, textureId); } // 0xE825F6B6CEA7671D 0x952ABD9A
	static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0x497AFDFE79EEFE4F, ped, componentId, drawableId, textureId, paletteId); } // 0x262B14F48D29DE80 0xD4F7B05C
	static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, BOOL p1) { invoke<Void>(0xE88E7BF4F83B5AAC, ped, p1); } // 0xC8A9481A01E63C28 0x4111BA46
	static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0x94F44AF57BD6B5FC, ped); } // 0xC44AA05345C992C6 0xE3318E0E
	static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0x659DCAE2E07E7AC2, ped); } // 0x45EEE61580806D63 0xC866A984
	static void SET_PED_BLEND_FROM_PARENTS(Any p0, Any p1, Any p2, float p3, float p4) { invoke<Void>(0x129ABE389922F2E9, p0, p1, p2, p3, p4); } // 0x137BBD05230DB22D 0x837BD370
	static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xF892390EA2D69431, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); } // 0x9414E18B9434C2FE 0x60746B88
	static BOOL _GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0x851519CC02A0CD60, ped, headBlendData); } // 0x2746BD9D88C5C5D0
	static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0x77D6F38FE9561745, ped, shapeMix, skinMix, thirdMix); } // 0x723538F61C647C5A 0x5CB76219
	static void _SET_PED_EYE_COLOR(Ped ped, int index) { invoke<Void>(0x9DAF6D6D7E7BF766, ped, index); } // 0x50B56988B170AFDF
	static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xF765C6FC36CF7B89, ped, overlayID, index, opacity); } // 0x48F44967FA05CC1E 0xD28DBA90
	static int _GET_PED_HEAD_OVERLAY_VALUE(Ped ped, int overlayID) { return invoke<int>(0x91BFC4522DFCB1C2, ped, overlayID); } // 0xA60EF3B6461A4D43
	static int _GET_NUM_HEAD_OVERLAY_VALUES(int overlayID) { return invoke<int>(0x5D90DA5E7CC34280, overlayID); } // 0xCF1CE768BB43480E 0xFF43C18D
	static void _SET_PED_HEAD_OVERLAY_COLOR(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xC72383754F110055, ped, overlayID, colorType, colorID, secondColorID); } // 0x497BF74A7B9CB952
	static void _SET_PED_HAIR_COLOR(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0x9DB00901BFAF1780, ped, colorID, highlightColorID); } // 0x4CFFC65454C93A49
	static int _GET_NUM_HAIR_COLORS() { return invoke<int>(0x95845F8BB02A25D0); } // 0xE5C0CF872C2AD150
	static int _0x86205FEE14F9AE49() { return invoke<int>(0x86205FEE14F9AE49); } // 0xD1F7CA1535D22818
	static void _0xBD35C46DE9847AAD(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xBD35C46DE9847AAD, p0, p1, p2, p3); } // 0x4852FC386E2E1BB5
	static void _0x60F63302116E50FA(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x60F63302116E50FA, p0, p1, p2, p3); } // 0x013E5CFC38CD5387
	static BOOL _0xAEB4BEEAF1A774C1(Any p0) { return invoke<BOOL>(0xAEB4BEEAF1A774C1, p0); } // 0xED6D8E27A43B8CDE
	static int _0x1E8EF31AAF0175C2(Any p0) { return invoke<int>(0x1E8EF31AAF0175C2, p0); } // 0xEA9960D07DADCF10
	static BOOL _0xE4164A8D226C5E85(Any p0) { return invoke<BOOL>(0xE4164A8D226C5E85, p0); } // 0x3E802F11FBE27674
	static BOOL _0x61468E8D0B7C3915(Any p0) { return invoke<BOOL>(0x61468E8D0B7C3915, p0); } // 0xF41B5D290C99A3D6
	static BOOL _0xDFD4BED32C16103D(Any p0) { return invoke<BOOL>(0xDFD4BED32C16103D, p0); } // 0xE0D36E5D9E99CC21
	static Any _0x0C091C8043727F75(Any p0) { return invoke<Any>(0x0C091C8043727F75, p0); } // 0xAAA6A3698A69E048
	static BOOL _0x9C8691B14FC064ED(Any p0) { return invoke<BOOL>(0x9C8691B14FC064ED, p0); } // 0x0525A2C2562F3CD4
	static BOOL _0x8C1E25FD23613A34(Any p0) { return invoke<BOOL>(0x8C1E25FD23613A34, p0); } // 0x604E810189EE3A59
	static Any _0x1CFA3CA66272E411(Any p0, Any p1, Any p2) { return invoke<Any>(0x1CFA3CA66272E411, p0, p1, p2); } // 0xC56FBF2F228E1DAC
	static void _SET_PED_FACE_FEATURE(Ped ped, int index, float scale) { invoke<Void>(0x9847E73CE5C4FBEB, ped, index, scale); } // 0x71A5C1DBA060049E
	static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xE7FACFE1D1BC6BCE, ped); } // 0x654CD0A825161131 0x2B1BD9C5
	static void _0x3884CEFF6ADEBA7D(Ped ped) { invoke<Void>(0x3884CEFF6ADEBA7D, ped); } // 0x4668D80430D6C299 0x894314A4
	static void _0x891ECA275FAAEE1B(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x891ECA275FAAEE1B, p0, p1, p2, p3, p4); } // 0xCC9682B8951C5229 0x57E5B3F9
	static void _0xBA7C61654B465E8F(Any p0) { invoke<Void>(0xBA7C61654B465E8F, p0); } // 0xA21C118553BBDF02 0xC6F36292
	static int _GET_FIRST_PARENT_ID_FOR_PED_TYPE(int type) { return invoke<int>(0xAC5EDC19B03D7BC4, type); } // 0x68D353AB88B97E0C 0x211DEFEC
	static int _GET_NUM_PARENT_PEDS_OF_TYPE(int type) { return invoke<int>(0x6A847DD03A7DCA86, type); } // 0x5EF37013A6539C9D 0x095D3BD8
	static Any _0x71E0E69731604839(Ped ped, int p1, int drawableId, int textureId) { return invoke<Any>(0x71E0E69731604839, ped, p1, drawableId, textureId); } // 0x39D55A620FCB6A3A 0x45F3BDFB
	static BOOL _0x632908F741F0FEA6(Ped p0) { return invoke<BOOL>(0x632908F741F0FEA6, p0); } // 0x66680A92700F43DF 0xC6517D52
	static void _0xC0AC6716EE5A4FE8(Any p0) { invoke<Void>(0xC0AC6716EE5A4FE8, p0); } // 0x5AAB586FFEC0FD96 0x6435F67F
	static Any _0xCCB434180892A881(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<Any>(0xCCB434180892A881, ped, componentId, drawableId, TextureId); } // 0x2B16A3BFF1FBCE49 0xC0E23671
	static BOOL _0x1353F2596AFBAC1D(Ped ped) { return invoke<BOOL>(0x1353F2596AFBAC1D, ped); } // 0x784002A632822099 0x3B0CA391
	static void _0x5A66B2A6929C684B(Ped ped) { invoke<Void>(0x5A66B2A6929C684B, ped); } // 0xF79F9DEF0AADE61A 0xFD103BA7
	static int GET_PED_PROP_INDEX(Ped ped, int componentId) { return invoke<int>(0x83058EDD668C4856, ped, componentId); } // 0x898CC20EA75BACD8 0x746DDAC0
	static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach) { invoke<Void>(0x15761A8A11C7E0AB, ped, componentId, drawableId, TextureId, attach); } // 0x93376B65A266EB5F 0x0829F2E2
	static void KNOCK_OFF_PED_PROP(int propIndex, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xF537C143F6CDAE65, propIndex, p1, p2, p3, p4); } // 0x6FD7816A36615F48 0x08D8B180
	static void CLEAR_PED_PROP(Ped ped, int propId) { invoke<Void>(0xAE2E2476C9353748, ped, propId); } // 0x0943E5B8E078E76E 0x2D23D743
	static void CLEAR_ALL_PED_PROPS(Ped ped) { invoke<Void>(0x6419413769A1465B, ped); } // 0xCD8A7537A9B52F06 0x81DF8B43
	static void _0x64BB9A945EA60625(Any p0) { invoke<Void>(0x64BB9A945EA60625, p0); } // 0xAFF4710E2A0A6C12
	static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0x377FCFBE04F73608, ped, componentId); } // 0xE131A28626F81AB2 0x922A6653
	static void _0xFE69628C19D27AF4(Any p0) { invoke<Void>(0xFE69628C19D27AF4, p0); } // 0x1280804F7CFD2D6C 0x7BCD8991
	static void _0x92E78B13A2895E39(Any p0) { invoke<Void>(0x92E78B13A2895E39, p0); } // 0x36C6984C3ED0C911
	static void _0xA9CB048D9F92B833(Any p0) { invoke<Void>(0xA9CB048D9F92B833, p0); } // 0xB50EB4CCB29704AC 0x080275EE
	static BOOL _0x35732D254DDD1582(Any p0) { return invoke<BOOL>(0x35732D254DDD1582, p0); } // 0xFEC9A3B1820F3331
	static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x9BEE7E791BC4D38B, ped, toggle); } // 0x9F8AA94D6D97DBF4 0xDFE34E4A
	static void SET_PED_BOUNDS_ORIENTATION(Any p0, float p1, float p2, float p3, float p4, float p5) { invoke<Void>(0xAA26B0DFFF66A119, p0, p1, p2, p3, p4, p5); } // 0x4F5F651ACCC9C4CF 0xCFA20D68
	static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xC7EA2DBBD6D17431, ped, target); } // 0x2F25D9AEFA34FBA2 0x50A95442
	static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float areaToAttack) { invoke<Void>(0xDB2E54AC34FA2D70, ped, areaToAttack); } // 0x9222F300BF8354FE 0x7F87559E
	static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0x421E6299B34E6001, x, y, z, xRadius, yRadius, zRadius, pedType); } // 0x876046A8E3A4B71C 0xDC8239EB
	static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0x5353F70F9BA66F4D, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); } // 0xC33AB876A77F8164 0x8F6C1F55
	static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0x85D45341F4F5F16A, value); } // 0x14F19A8782C8071E 0x85615FD0
	static BOOL _0x044D560564E9BD16(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0x044D560564E9BD16, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x03EA03AF85A85CB7 0x18DD76A1
	static void _0xD91F1EE796A923F6(Any p0, float p1) { invoke<Void>(0xD91F1EE796A923F6, p0, p1); } // 0xDED5AF5A0EA4B297 0x6D55B3B3
	static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xE01CB20E43291B7D, driver, ability); } // 0xB195FFA8042FC5C3 0xAAD4012C
	static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0x4BAA830483677BDC, driver, aggressiveness); } // 0xA731F608CA104E3C 0x8B02A8FB
	static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xA2E7A55E315E6B7C, ped); } // 0x128F79EDCECE4FD5 0xC0EFB7A3
	static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0x5F0FEFB9EF0F238E, ped, time1, time2, ragdollType, p4, p5, p6); } // 0xAE99FB955581844A 0x83CB5052
	static Any SET_PED_TO_RAGDOLL_WITH_FALL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<Any>(0xEDD51E0ADB2841F3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xD76632D99E4966C8 0xFA12E286
	static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0x3FEE1DD094C7C993, ped, toggle); } // 0xF0A4F1BBF4FA7497 0x2654A0F4
	static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x8E2CF6ACCED3BD0F, ped); } // 0x47E4E977581C5B55 0xC833BBE1
	static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xE47BD1403D4D87E3, ped); } // 0xE3B6097CC25AA69E 0x44A153F2
	static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xCD1BA5943AF6E6AD, ped); } // 0x01F6594B923B9251 0x20A5BDE0
	static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0x3E356280D0BD277C, ped); } // 0x9FA4664CF62E47E8 0xF2865370
	static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xC16A68A8424A0340, ped, toggle); } // 0xB128377056A54E2A 0xCF1384C4
	static BOOL _0xC491719110C5133E(Any p0) { return invoke<BOOL>(0xC491719110C5133E, p0); } // 0xD1871251F3B5ACD7
	static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0x5CA8D250ACEFC38A, ped); } // 0x2AFE52F782F25775 0xFB2AFED1
	static BOOL _0x3C0567D9681A0529(Any p0) { return invoke<BOOL>(0x3C0567D9681A0529, p0); } // 0xA3F3564A5B3646C0 0x97353375
	static void _SET_PED_RAGDOLL_BLOCKING_FLAGS(Ped ped, Any p1) { invoke<Void>(0x6D0CE8888415DDF3, ped, p1); } // 0x26695EC767728D84 0x9C8F830D
	static void _0x94E1D3B9765269F8(Any p0, Any p1) { invoke<Void>(0x94E1D3B9765269F8, p0, p1); } // 0xD86D101FCFD00A4B 0x77CBA290
	static void SET_PED_ANGLED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xDC047AF82AD47415, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC7F76DF27A5045A1 0x3EFBDD9B
	static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xCDB54400CEA326E7, ped, x, y, z, radius, p5, p6); } // 0x9D3151A373974804 0xBD96D8E8
	static void _0x1AC4F785692B7822(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0x1AC4F785692B7822, p0, p1, p2, p3, p4, p5, p6); } // 0xF9B8F91AAD3B953E 0x40638BDC
	static void _0x936BF7C227A586D6(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6) { invoke<Void>(0x936BF7C227A586D6, p0, p1, p2, p3, p4, p5, p6); } // 0xE4723DB6E736CCFF 0x4763B2C6
	static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xD5311B07259F3799, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4EF47FE21698A8B6 0x74BDA7CE
	static void SET_PED_DEFENSIVE_AREA_DIRECTION(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xA1E995DE8BEF5AC0, p0, p1, p2, p3, p4); } // 0x413C6C763A4AFFAD 0xB66B0C9A
	static void REMOVE_PED_DEFENSIVE_AREA(Any p0, BOOL p1) { invoke<Void>(0xAA81E2AAFBAC5009, p0, p1); } // 0x74D4E028107450A9 0x34AAAFA5
	static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Any p0, BOOL p1) { return invoke<Vector3>(0xEE3E2A9FECAC72F4, p0, p1); } // 0x3C06B8786DD94CD1 0xCB65198D
	static BOOL _0x289C631A0858B338(Any p0, BOOL p1) { return invoke<BOOL>(0x289C631A0858B338, p0, p1); } // 0xBA63D9FE45412247
	static void SET_PED_PREFERRED_COVER_SET(Any p0, Any p1) { invoke<Void>(0x0B9AFB350D90141E, p0, p1); } // 0x8421EB4DA7E391B9 0xF3B7EFBF
	static void REMOVE_PED_PREFERRED_COVER_SET(Any p0) { invoke<Void>(0x513B24366EF7E15F, p0); } // 0xFDDB234CF74073D9 0xA0134498
	static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xC9D10225973751EE, ped); } // 0x8D8ACD8388CD99CE 0x14D3E6E3
	static void RESURRECT_PED(Ped ped) { invoke<Void>(0x8D8EC579D7BA3668, ped); } // 0x71BC8E838B9C6035 0xA4B82097
	static void SET_PED_NAME_DEBUG(Ped ped, char* name) { invoke<Void>(0x4C6DD31AB89A02B8, ped, name); } // 0x98EFA132A4117BE1 0x20D6273E
	static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL p1) { return invoke<Vector3>(0x8B8B77B97783E267, ped, p1); } // 0xE0AF41401ADF87E3 0x5231F901
	static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0x29A570418FD8F6FE, ped, toggle); } // 0x5BA7919BED300023 0xE94E24D4
	static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0x10DBC4D86663304F, ped, toggle); } // 0x97A790315D3831FD 0x4CAD1A4A
	static void _0xE6F6461BFFCDEEFA(Any p0, BOOL p1) { invoke<Void>(0xE6F6461BFFCDEEFA, p0, p1); } // 0xF9ACF4A08098EA25 0x141CC936
	static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0x3AD329DE11B91356, ped); } // 0x3AC1F7B898F30C05 0xC4BC4841
	static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Any p0, Any p1, float p2, float p3, Any p4) { invoke<Void>(0x37901D9B856656B9, p0, p1, p2, p3, p4); } // 0x816F6981C60BF53B 0x1E54DB12
	static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, char* woundType) { invoke<Void>(0x1C3CB5BECD739430, ped, boneIndex, xRot, yRot, zRot, woundType); } // 0x83F7E01C7B769A26 0x376CE3C0
	static void APPLY_PED_BLOOD_BY_ZONE(Any p0, Any p1, float p2, float p3, Any* p4) { invoke<Void>(0xA633D387C551DC7F, p0, p1, p2, p3, p4); } // 0x3311E47B91EDCBBC 0x8F3F3A9C
	static void APPLY_PED_BLOOD_SPECIFIC(Any p0, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { invoke<Void>(0x8A0F244B7BEAC4AC, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xEF0D582CBF2D9B0F 0xFC13CE80
	static void APPLY_PED_DAMAGE_DECAL(Ped p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, BOOL p8, char* p9) { invoke<Void>(0x477B3E0DE3D2F351, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x397C38AA7B4A5F83 0x8A13A41F
	static void APPLY_PED_DAMAGE_PACK(Ped ped, char* damagePack, float damage, float mult) { invoke<Void>(0xF4FC0F4341A0A5C4, ped, damagePack, damage, mult); } // 0x46DF918788CB093F 0x208D0CB8
	static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0x7F23A2D4447DE514, ped); } // 0x8FE22675A5A45817 0xF7ADC960
	static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped p0, int p1) { invoke<Void>(0xEE297E6B23A2130E, p0, p1); } // 0x56E3B78C5408D9F4 0xF210BE69
	static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Any p0, Any p1, BOOL p2) { invoke<Void>(0x59BA02F12EA566EE, p0, p1, p2); } // 0x62AB793144DE75DC 0x0CB6C4ED
	static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Any p0, Any p1, Any* p2) { invoke<Void>(0x85AED8E25EBAD1A3, p0, p1, p2); } // 0x523C79AEEFCC4A2A 0x70AA5B7D
	static Any GET_PED_DECORATIONS_STATE(Any p0) { return invoke<Any>(0x840455C83F849A68, p0); } // 0x71EAB450D86954A1 0x47187F7F
	static void _0xA7878C01CC834877(Any p0, BOOL p1) { invoke<Void>(0xA7878C01CC834877, p0, p1); } // 0x2B694AFCF64E6994
	static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0x1E08281A4D8EAD3C, ped); } // 0x9C720776DAA43E7E 0x629F15BD
	static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xE1960EE2F5A21E8E, ped, height); } // 0x44CB6447D2571AA0 0x7B33289A
	static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xC6C49D983B3F3353, ped); } // 0xB5485E4907B53019 0xBDE749F7
	static void _0x6EFF17AB23A1A405(Ped ped) { invoke<Void>(0x6EFF17AB23A1A405, ped); } // 0x6585D955A68452A5 0xA993915F
	static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0x180D85647F6DB145, ped, sweat); } // 0x27B0405F59637D1F 0x76A1DB9F
	static void _APPLY_PED_OVERLAY(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xCBF40D7785143A5D, ped, collection, overlay); } // 0x5F5D1665E352A839 0x70559AC7
	static void _0x6444CCBCA1B046F6(Any p0, Any p1, Any p2) { invoke<Void>(0x6444CCBCA1B046F6, p0, p1, p2); } // 0x5619BFA07CFD7833
	static int _GET_TATTOO_ZONE(Hash collection, Hash overlay) { return invoke<int>(0xCB3255905203B86A, collection, overlay); } // 0x9FD452BFBE7A7A8B 0x3543019E
	static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0x25755D8104D8FED2, ped); } // 0x0E5173C163976E38 0xD4496BF3
	static void _0x2B47384C82EB8D35(Any p0) { invoke<Void>(0x2B47384C82EB8D35, p0); } // 0xE3B27E70CEAB9F0C 0xEFD58EB9
	static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xAB83CBEA95AD83FB, ped); } // 0x11B499C1E0FF8559 0xF7E2FBAD
	static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x5D551231E967CD2B, ped, boneId, offsetX, offsetY, offsetZ); } // 0x17C07FC640E86B4E 0x4579CAB1
	static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0x5B7BAA5FD9943ED4, startImmediately, messageId); } // 0x418EF2A1BCE56685 0x1CFBFD4B
	static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xCCC8BA2E99EE23ED, ped); } // 0xB158DFCCC56E5C5B 0x737C3689
	static Any ADD_SCENARIO_BLOCKING_AREA(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<Any>(0x8668A841B325FF16, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x1B5C85C612E5256E 0xA38C0234
	static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x213FA0896D2B70DA); } // 0xD37401D78A929A49 0x4DDF845F
	static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0x3AD14BFC20FCADDB, p0, p1); } // 0x31D16B74C6E29D66 0x4483EF06
	static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x134BCFF4731748F3, p0, p1, p2, p3, p4); } // 0x28157D43CF600981 0x80EAD297
	static BOOL IS_PED_USING_SCENARIO(Ped ped, char* scenario) { return invoke<BOOL>(0x4C4A0E641CC945C2, ped, scenario); } // 0x1BF094736DD62C2E 0x0F65B0D4
	static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xD8804190DA3C08E5, ped); } // 0x57AB4A3080F85143 0x195EF5B7
	static Any _0xC654E41903DC8C4D(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xC654E41903DC8C4D, p0, p1, p2, p3); } // 0xFE07FF6495D52E2A 0x59DE73AC
	static void _0x157ADB2A8CA37E4B(Any p0, BOOL p1) { invoke<Void>(0x157ADB2A8CA37E4B, p0, p1); } // 0x9A77DFD295E29B09 0xC08FE5F6
	static Any _0xDEE7DCC48E36D90C(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xDEE7DCC48E36D90C, p0, p1, p2, p3); } // 0x25361A96E0F7E419 0x58C0F6CF
	static Any _0x97DEEBB73135D750(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x97DEEBB73135D750, p0, p1, p2, p3); } // 0xEC6935EBE0847B90 0x761F8F48
	static void _0xFAF3B8EBDDD84CD6(Any p0) { invoke<Void>(0xFAF3B8EBDDD84CD6, p0); } // 0xA3A9299C4F2ADB98 0x033F43FA
	static void _0x8F575FC0497CAD6C(Any p0) { invoke<Void>(0x8F575FC0497CAD6C, p0); } // 0xF1C03A5352243A30 0x4C684C81
	static Any _0x6847DA91557E65F1(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x6847DA91557E65F1, p0, p1, p2, p3); } // 0xEEED8FAFEC331A70 0x7B4C3E6F
	static void _0x46C1C39B755B442D(Ped ped, BOOL p1) { invoke<Void>(0x46C1C39B755B442D, ped, p1); } // 0x425AECF167663F48 0x5BC276AE
	static void _0xB1FE64038DD8F058(Any p0, BOOL p1) { invoke<Void>(0xB1FE64038DD8F058, p0, p1); } // 0x5B6010B3CBC29095
	static void _0x26BAB4C2D2009AAB(Any p0, BOOL p1) { invoke<Void>(0x26BAB4C2D2009AAB, p0, p1); } // 0xCEDA60A74219D064
	static void PLAY_FACIAL_ANIM(Ped ped, char* animName, char* animDict) { invoke<Void>(0x5280F0A4BBE8DF1A, ped, animName, animDict); } // 0xE1E65CA8AC9C00ED 0x1F6CCDDE
	static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, char* facialAnim, Any* p2) { invoke<Void>(0xCE6642454B80EBC8, ped, facialAnim, p2); } // 0xFFC24B988B938B38 0x9BA19C13
	static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xB0A8FA9FE09B26AE, ped); } // 0x726256CC1EEB182F 0x5244F4E2
	static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x8B575127AEB00449, ped, toggle); } // 0xBAF20C5432058024 0xE131E3B3
	static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x80FAE36B81B66A66, ped, p1, p2); } // 0xF833DDBA3B104D43 0xA2FDAF27
	static void _0xCAE039511F45541C(Any p0, BOOL p1) { invoke<Void>(0xCAE039511F45541C, p0, p1); } // 0x33A60D8BDD6E508C 0xADB2511A
	static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xA6ED3077A967AC63, ped, toggle); } // 0x6373D1349925A70E 0xF8053081
	static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD9404A1491ECECC4, ped, toggle); } // 0x0EB0585D15254740 0x5720A5DD
	static void _0xBF08DB5FC144AF1D(Any p0) { invoke<Void>(0xBF08DB5FC144AF1D, p0); } // 0xC2EE020F5FB4DB53 0xB7CD0A49
	static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xBB43B0481E307BB7, ped, toggle); } // 0x6C3B4D6D13B4C841 0x343B4DE0
	static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0x404FF6486E7FF873, ped, toggle); } // 0xC11C18092C5530DC 0xD3B04476
	static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xDCF85327DFF71610, ped, toggle); } // 0x73518ECE2485412B 0x9955BC6F
	static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFD83DF1AACD67224, ped, toggle); } // 0xF2B7106D37947CE0 0x8E5D4EAB
	static void _0xD786EB34DC4E3D18(Any p0, BOOL p1) { invoke<Void>(0xD786EB34DC4E3D18, p0, p1); } // 0xF5846EDB26A98A24 0x7B0040A8
	static void _0x2D7B8B7E9AF4F2A8(Any p0, BOOL p1) { invoke<Void>(0x2D7B8B7E9AF4F2A8, p0, p1); } // 0x6647C5F6F5792496 0x0FDA62DE
	static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0x7294CF31F80E052D, ped, toggle); } // 0xEC4686EC06434678 0x584C5178
	static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x1022821BCC621056, ped1, ped2); } // 0x5CD3CB88A7F8850D 0x2A5DF721
	static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0x7E7AFACA1C744410, ped, entity); } // 0x813A0A7C9D2E831F 0x233C9ACF
	static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xE946903AB31FE5D5, ped, lookAt); } // 0xCD17B554996A8D9E 0x6DEF6F1C
	static void _0xA0A885C5BF1C62EB(Any p0, Any p1) { invoke<Void>(0xA0A885C5BF1C62EB, p0, p1); } // 0x78C4E9961DB3EB5B 0xFC942D7C
	static void _0xB5034A124B7FF1B7(Any p0, Any p1) { invoke<Void>(0xB5034A124B7FF1B7, p0, p1); } // 0x82A3D6D9CC2CB8E3 0x89EEE07B
	static void _0x1561A6F16EB0CD0E(Any p0, BOOL p1) { invoke<Void>(0x1561A6F16EB0CD0E, p0, p1); } // 0xA660FAF550EB37E5
	static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x1C26C4B0DAB91B21, ped, flagId, value); } // 0x1913FE4CBF41C463 0x9CFBE10D
	static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xC31A3F1982C7B12B, ped, flagId, doReset); } // 0xC1E8A365BF3B29F2 0xCFF6FF66
	static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0x9699041CFA6517D2, ped, flagId, p2); } // 0x7EE53118C892B513 0xABE98267
	static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xEE5BA9B7FD30DE31, ped, flagId); } // 0xAF9E59B1B1FBF2A0 0x2FC10D11
	static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xD8F094CB1BFE6F88, ped, index); } // 0x0BDDB8D9EC6BCF3C 0x2AB3670B
	static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xE6477A3B073FCBD0, ped, toggle); } // 0x6B7A646C242A7059 0x542FEB4D
	static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xCFFDFEC8304750E0, ped, evadingEntity); } // 0x414641C26E105898 0xD82829DC
	static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0x6E7E8A912D59521E, ped, x, y, z, toggle); } // 0x96A05E4FB321B1BA 0xFD64EAE5
	static void SET_PED_MODEL_IS_SUPPRESSED(Ped ped, BOOL toggle) { invoke<Void>(0xFF62B65EADC282A7, ped, toggle); } // 0xE163A4BCE4DE6F11 0x7820CA43
	static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0x5E1F2B37DB489D33); } // 0xB47BD05FA66B40CF 0x5AD7DC55
	static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xD0CF3FE8F7762BAA, ped, toggle); } // 0x638C03B0F9878F57 0x6FD9A7CD
	static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x016A58154FE74E92, ped, toggle); } // 0x7FB17BA2E7DECA5B 0xE9B97A2B
	static void _0xA2492AFA81E07128(Any p0, BOOL p1) { invoke<Void>(0xA2492AFA81E07128, p0, p1); } // 0xE43A13C9E4CCCBCF 0xFF1F6AEB
	static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xD4F6D0E03264EEDA, ped, toggle); } // 0xDF993EE5E90ABA25 0xE9BD733A
	static void GIVE_PED_HELMET(Ped ped, BOOL p1, int helmetFlag, Any p3) { invoke<Void>(0xF9333020973682B9, ped, p1, helmetFlag, p3); } // 0x54C7C4A94367717E 0x1862A461
	static void REMOVE_PED_HELMET(Ped ped, BOOL p1) { invoke<Void>(0x60F73C5C71B102FE, ped, p1); } // 0xA7B2458D0AD6DED8 0x2086B1F0
	static BOOL _0x5680668975B62CF6(Any p0) { return invoke<BOOL>(0x5680668975B62CF6, p0); } // 0x14590DDBEDB1EC85
	static void SET_PED_HELMET(Ped ped, BOOL p1) { invoke<Void>(0xDEDF1A35D80AE74D, ped, p1); } // 0x560A43136EB58105 0xED366E53
	static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0x6B4F3DD200C10B48, ped, helmetFlag); } // 0xC0E78D5C2CE3EB25 0x12677780
	static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex) { invoke<Void>(0xAB8E4948FAC7F9C9, ped, propIndex); } // 0x26D83693ED99291C 0xA316D13F
	static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xCB070D1C1528B98F, ped, textureIndex); } // 0xF1550C4BD22582E2 0x5F6C3328
	static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xAD7645F387EFDC15, ped); } // 0xF33BDFE19B309B19 0x0D680D49
	static void _0x36C8C675D6996B0F(Any p0) { invoke<Void>(0x36C8C675D6996B0F, p0); } // 0x687C0B594907D2E8 0x24A1284E
	static Any _0x0B3E0BA36394B459(Any p0) { return invoke<Any>(0x0B3E0BA36394B459, p0); } // 0x451294E859ECC018 0x8A3A3116
	static Any _0x4F862D22CA6059E9(Any p0) { return invoke<Any>(0x4F862D22CA6059E9, p0); } // 0x9D728C1E12BF5518 0x74EB662D
	static BOOL _0x99980947F0E654BD(Any p0) { return invoke<BOOL>(0x99980947F0E654BD, p0); } // 0xF2385935BFFD4D92 0xFFF149FE
	static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xB5CF70630334834A, ped, toggle); } // 0x332B562EEDA62399 0xCF94BA97
	static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x56C614133356B8E9, ped, toggle); } // 0xCB7553CDCEF4A735 0x5194658B
	static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x7527CCDDCB86339E, ped, toggle); } // 0xC514825C507E3736 0xC1DAE216
	static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD7A3D89A53B60C9C, ped, toggle); } // 0x94D94BF1A75AED3D 0x7C563CD2
	static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xC6D53FE8DEBDCBD4, ped, mode); } // 0xC396F5B86FF9FEBD 0xFDDB042E
	static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xF9349214E9C52085, ped, toggle); } // 0x0A986918B102B448 0xA211A128
	static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xD837C733ED2FF422, ped, toggle); } // 0xED7F7EFE9FABF340 0xB5F8BA28
	static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xD5C8E10F3B45E359, ped, toggle); } // 0xEEB64139BA29A7CF 0xFE2554FC
	static void _0x0FED1F8FC01E0918(Any p0, Any p1) { invoke<Void>(0x0FED1F8FC01E0918, p0, p1); } // 0x1A330D297AAC6BC1 0x77BB7CB8
	static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Any p0) { invoke<Void>(0x27A9A2992D1A0294, p0); } // 0xC158D28142A34608 0x4AC3421E
	static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Any p0, float p1) { invoke<Void>(0xE7DDB5A4122B73D6, p0, p1); } // 0x5917BBA32D06C230 0x7CEFFA45
	static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0x79EE909282B7E387, ped, combatMovement); } // 0x4D9CA1009AFBD057 0x12E62F9E
	static Any GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<Any>(0x2C0EA181EDD411E6, ped); } // 0xDEA92412FCAEB3F5 0xF3E7730E
	static void SET_PED_COMBAT_ABILITY(Ped ped, int p1) { invoke<Void>(0x4C7F1913EEA14A44, ped, p1); } // 0xC7622C0D36B2FDA8 0x6C23D329
	static void SET_PED_COMBAT_RANGE(Ped ped, int p1) { invoke<Void>(0x45AC72BF50E50EFE, ped, p1); } // 0x3C606747B23E497B 0x8818A959
	static Any GET_PED_COMBAT_RANGE(Ped ped) { return invoke<Any>(0x67FC7BB46C1AD63A, ped); } // 0xF9D9F7F2DB8E2FA0 0x9B9B7163
	static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeIndex, BOOL enabled) { invoke<Void>(0x7E3DC7ED30B648F0, ped, attributeIndex, enabled); } // 0x9F7794730795E019 0x81D64248
	static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0x20A7731B1904C2E6, ped, responseType); } // 0x0703B9079823DA4A 0xCFA613FF
	static BOOL _0x4DAD36A1AB1C155F(Any p0) { return invoke<BOOL>(0x4DAD36A1AB1C155F, p0); } // 0xDCCA191DF9980FD7 0x139C0875
	static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xAA6E5BDAAA361C61, ped); } // 0xFD4CCDBCC59941B7 0x9ADD7B21
	static BOOL _0xB628E806C1FF216D(Ped ped) { return invoke<BOOL>(0xB628E806C1FF216D, ped); } // 0xEBD0EDBA5BE957CF 0x9BE7C860
	static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x79AE97CBAC3A4914, ped); } // 0x863B23EFDE9C5DF2 0xD044C8AF
	static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0x195FBAA28ED80528, ped); } // 0x18A3E9EE1297FD39 0xAFEC26A4
	static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0x7048B4332456CDFF, ped); } // 0xF9800AA1A771B000 0x2EA4B54E
	static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xA52FCB93E36A6043, ped); } // 0x7F08E26039C7347C 0xBDD3CE69
	static BOOL _0xDB2E6DEC9EB7632B(Any p0) { return invoke<BOOL>(0xDB2E6DEC9EB7632B, p0); } // 0x61767F73EACEED21 0x3993092B
	static void SET_PED_FLEE_ATTRIBUTES(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x7346544C767CFCBF, ped, p1, p2); } // 0x70A2D1137C8ED7C9 0xA717A875
	static void SET_PED_COWER_HASH(Any p0, Any* p1) { invoke<Void>(0x0362DEBB30F139EA, p0, p1); } // 0xA549131166868ED3 0x16F30DF4
	static void _0x07AE4CD72FB738BE(Any p0, BOOL p1) { invoke<Void>(0x07AE4CD72FB738BE, p0, p1); } // 0x2016C603D6B8987C 0xA6F2C057
	static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0x7564D5E30A517255, ped, toggle); } // 0x46F2193B3AD1D891 0x797CAE4F
	static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0x625822807B5AF963, ped, toggle); } // 0x1509C089ADC208BF 0x3BD9B0A6
	static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0x3B4D04D8A78F405F, ped, toggle); } // 0xEB6FB9D48DDE23EC 0x533C0651
	static void _0xEAFE5B14B2110CFE(Any p0, BOOL p1) { invoke<Void>(0xEAFE5B14B2110CFE, p0, p1); } // 0xA9B61A329BFDCBEA 0x2276DE0D
	static void _0xB3B7290E7F960AFC(Any p0) { invoke<Void>(0xB3B7290E7F960AFC, p0); } // 0x570389D1C3DE3C6B 0x59C52BE6
	static void _0xFC32B04FB6B2F5D7(Any p0, BOOL p1) { invoke<Void>(0xFC32B04FB6B2F5D7, p0, p1); } // 0x576594E8D64375E2 0x1D87DDC1
	static void _0x4117FA8A5E385F05(Any p0) { invoke<Void>(0x4117FA8A5E385F05, p0); } // 0xA52D5247A4227E14 0xB52BA5F5
	static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xF0CC6299CE9D9124, x, y, z, radius); } // 0x083961498679DC9F 0xFBD9B050
	static void _0xA573D5E64CDFAF83(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xA573D5E64CDFAF83, ped, p1, p2); } // 0x2208438012482A1A 0x187B9070
	static BOOL _0x50D7BCB98D6E1BFA(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x50D7BCB98D6E1BFA, p0, p1, p2, p3, p4); } // 0xFCF37A457CB96DC0 0x45037B9B
	static void _0xBF4FEE4E9AAA57D3(Any p0) { invoke<Void>(0xBF4FEE4E9AAA57D3, p0); } // 0x7D7A2E43E74E2EB8 0x840D24D3
	static void GET_PED_FLOOD_INVINCIBILITY(Any p0, BOOL p1) { invoke<Void>(0x85E578E9EDFAA283, p0, p1); } // 0x2BC338A7B21F4608 0x31C31DAA
	static void _0xDC2D9F03C8BCABF9(Any p0, BOOL p1) { invoke<Void>(0xDC2D9F03C8BCABF9, p0, p1); } // 0xCD018C591F94CB43
	static void _0xADE9785A07736342(Any p0, BOOL p1) { invoke<Void>(0xADE9785A07736342, p0, p1); } // 0x75BA1CB3B7D40CAF 0x9194DB71
	static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xB7FBD067DCB72466, ped); } // 0x91C8E617F64188AC 0x33248CC1
	static Any _0x24A8938ABD452D88(Any p0) { return invoke<Any>(0x24A8938ABD452D88, p0); } // 0x511F1A683387C7E2 0x5B1B70AA
	static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xFA69FB32D97CB674, ped); } // 0x4C5E1F087CD10BB7 0x7EB613D9
	static BOOL HAS_PED_RECEIVED_EVENT(Any p0, Any p1) { return invoke<BOOL>(0xC06784B4179CA473, p0, p1); } // 0x8507BCB710FA6DC0 0xECD73DB0
	static BOOL _0x7F895384D1330018(Any p0, Any p1) { return invoke<BOOL>(0x7F895384D1330018, p0, p1); } // 0x6CD5A433374D4CFB 0x74A0F291
	static BOOL _0xF82BF4CEF8FE05B8(Any p0, Any* p1) { return invoke<BOOL>(0xF82BF4CEF8FE05B8, p0, p1); } // 0x9C6A6C19B6C0C496
	static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0x206A9EC63F98F19D, ped, boneId); } // 0x3F428D08BE5AAE31 0x259C6BA2
	static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int p1) { return invoke<int>(0x2D17D7FDA72BC76E, ped, p1); } // 0x2057EF813397A772 0x849F0716
	static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xD3E127A2463851F8, ped, value); } // 0xBF29516833893561 0xFC1CFC27
	static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0x9B81CC5152E6FEB1, ped); } // 0x9C14D30395A51A3C 0xA3421E39
	static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xFE5706A379A1ABBB, ped, toggle); } // 0xD2C5AA0C0E8D0F1E 0xC70F4A84
	static void _0x0964A6CC89A6F3F7(Ped ped, float p1) { invoke<Void>(0x0964A6CC89A6F3F7, ped, p1); } // 0x110F526AB784111F 0x3B882533
	static void _0xC108B0BD5290976E(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xC108B0BD5290976E, ped, p1, p2, p3); } // 0xD69411AA0CEBF9E9 0x87A0C174
	static void _0xC0CA46825FF5FE37(Any p0, Any p1) { invoke<Void>(0xC0CA46825FF5FE37, p0, p1); } // 0x1216E0BFA72CC703 0x7BD26837
	static void _0x668CF79D2BA8AC8C(Any p0, BOOL p1) { invoke<Void>(0x668CF79D2BA8AC8C, p0, p1); } // 0x2B5AA717A181FB4C 0x98E29ED0
	static BOOL _0x0E2EEEAECD9714FE(Ped ped) { return invoke<BOOL>(0x0E2EEEAECD9714FE, ped); } // 0xB8B52E498014F5B0
	static Any CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float p3, float p4, float p5, Any p6) { return invoke<Any>(0xB839A1C489B63ACC, x, y, z, p3, p4, p5, p6); } // 0x8C18E0F9080ADD73 0xFFDDF8FA
	static Any _0x6969D314807D6CFF(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0x6969D314807D6CFF, p0, p1, p2, p3, p4); } // 0x62EC273D00187DCA 0xF3876894
	static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(Any p0) { return invoke<BOOL>(0x47B2F09FC779F5CD, p0); } // 0x25D39B935A038A26 0x57A282F1
	static void SET_SYNCHRONIZED_SCENE_ORIGIN(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { invoke<Void>(0xB03FD8132C75E089, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x6ACF6B7225801CD7 0x2EC2A0B2
	static void SET_SYNCHRONIZED_SCENE_PHASE(Any p0, float p1) { invoke<Void>(0x20679FECEB6BF5E3, p0, p1); } // 0x734292F4F0ABF6D0 0xF5AB0D98
	static float GET_SYNCHRONIZED_SCENE_PHASE(Any scene) { return invoke<float>(0x4D221DFBB84DCF0B, scene); } // 0xE4A310B1D7FA73CC 0xB0B2C852
	static void SET_SYNCHRONIZED_SCENE_RATE(Any p0, float p1) { invoke<Void>(0xD21D1CDEFEAA7FA8, p0, p1); } // 0xB6C49F8A5E295A5D 0xF10112FD
	static float GET_SYNCHRONIZED_SCENE_RATE(Any p0) { return invoke<float>(0x2D428F1A10E85B0D, p0); } // 0xD80932D577274D40 0x89365F0D
	static void SET_SYNCHRONIZED_SCENE_LOOPED(Any p0, BOOL p1) { invoke<Void>(0x3A7DEF86891D2891, p0, p1); } // 0xD9A897A4C6C2974F 0x32ED9F82
	static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(Any p0) { return invoke<BOOL>(0xAAB3B38701388311, p0); } // 0x62522002E0C391BA 0x47D87A84
	static void _0xDB14F40E3E8CB36F(Any p0, BOOL p1) { invoke<Void>(0xDB14F40E3E8CB36F, p0, p1); } // 0x394B9CD12435C981 0x2DE48DA1
	static BOOL _0x4E1495C02927EAC4(Any p0) { return invoke<BOOL>(0x4E1495C02927EAC4, p0); } // 0x7F2F4F13AC5257EF 0x72CF2514
	static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Any scene, Any entity, Any boneIndex) { invoke<Void>(0x50316D6F55CBD74A, scene, entity, boneIndex); } // 0x272E4723B56A3B96 0xE9BA6189
	static void DETACH_SYNCHRONIZED_SCENE(Any p0) { invoke<Void>(0x57F365E25D632211, p0); } // 0x6D38F1F04CBB37EA 0x52A1CAB2
	static void _0x4E64984D504E224D(Any p0) { invoke<Void>(0x4E64984D504E224D, p0); } // 0xCD9CC7E200A52A6F 0xBF7F9035
	static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0x29F3FAC40F745C80, ped, motionStateHash, p2, p3, p4); } // 0xF28965D04F570DCA 0x164DDEFF
	static BOOL _0x28FB8B15767100C1(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x28FB8B15767100C1, p0, p1, p2); } // 0xF60165E1D2C5370B
	static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x97A05AC1E676667E, ped, value); } // 0x433083750C5E064A 0xEAD0269A
	static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x9DD3EE7BCB7B0EEB, ped, value); } // 0x01A898D26E2333DD 0x383EC364
	static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0x26E283CE644BEBB1, ped, value); } // 0x085BF80FA50A39D1 0x900008C6
	static BOOL _0x86C17B0B655F8066(Ped ped, int flag) { return invoke<BOOL>(0x86C17B0B655F8066, ped, flag); } // 0x46B05BCAE43856B0 0x79543043
	static int GET_PED_NEARBY_VEHICLES(Ped ped, int* sizeAndVehs) { return invoke<int>(0x03FA0C4EFCD138FB, ped, sizeAndVehs); } // 0xCFF869CBFA210D82 0xCB716F68
	static int GET_PED_NEARBY_PEDS(Ped ped, int* sizeAndPeds, int p2) { return invoke<int>(0x312FA2EB3948B47C, ped, sizeAndPeds, p2); } // 0x23F8F5FC7E8C4A6B 0x4D3325F4
	static BOOL _0xD0293E063D198E46(Ped ped) { return invoke<BOOL>(0xD0293E063D198E46, ped); } // 0x7350823473013C02 0xF9FB4B71
	static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0x1B05E233D46A2507, ped); } // 0x00E73468D085F745 0x5AE7EDA2
	static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, Any p2, char* action) { invoke<Void>(0x0C8881432DA64087, ped, p1, p2, action); } // 0xD75ACCF5E0FB5367 0x8802F696
	static void _0x73D004492DC79BA1(Any p0, Any* p1) { invoke<Void>(0x73D004492DC79BA1, p0, p1); } // 0x781DE8FA214E87D2
	static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0x2184527A517352FE, ped, value); } // 0x364DF566EC833DE2 0xB153E1B9
	static Any REGISTER_PEDHEADSHOT(Ped ped) { return invoke<Any>(0x8A014D6D244B8518, ped); } // 0x4462658788425076 0xFFE2667B
	static Any _0x3312B5A93085B0A7(Any p0) { return invoke<Any>(0x3312B5A93085B0A7, p0); } // 0x953563CE563143AF 0x4DD03628
	static void UNREGISTER_PEDHEADSHOT(Ped ped) { invoke<Void>(0xE36012B1FBCCD792, ped); } // 0x96B1361D9B24C2FF 0x0879AE45
	static int IS_PEDHEADSHOT_VALID(int handle) { return invoke<int>(0x1F16BC0435F2402B, handle); } // 0xA0A9668F158129A2 0x0B1080C4
	static BOOL IS_PEDHEADSHOT_READY(int handle) { return invoke<BOOL>(0xD0847D6ED75AB1EB, handle); } // 0x7085228842B13A67 0x761CD02E
	static char* GET_PEDHEADSHOT_TXD_STRING(int handle) { return invoke<char*>(0xB55AA813D58C592E, handle); } // 0xDB4EACD4AD0A5D6B 0x76D28E96
	static BOOL _0xAE9A063D628B1664(Any p0) { return invoke<BOOL>(0xAE9A063D628B1664, p0); } // 0xF0DAEF2F545BEE25 0x10F2C023
	static void _0xFF373B5075CE1897(Any p0) { invoke<Void>(0xFF373B5075CE1897, p0); } // 0x5D517B27CF6ECD04 0x0DBB2FA7
	static Any _0xA753E663BF787E97() { return invoke<Any>(0xA753E663BF787E97); } // 0xEBB376779A760AA8 0x810158F8
	static Any _0xB1EE50D8F3C318E5() { return invoke<Any>(0xB1EE50D8F3C318E5); } // 0x876928DDDFCCC9CD 0x05023F8F
	static Any _0x092CD6B11F36D6F0() { return invoke<Any>(0x092CD6B11F36D6F0); } // 0xE8A169E666CBC541 0xAA39FD6C
	static void _0xE29364BD6861FEA8(Any p0, Any p1) { invoke<Void>(0xE29364BD6861FEA8, p0, p1); } // 0xC1F6EBF9A3D55538 0xEF9142DB
	static void _0x4348309FDD24571B(Any p0) { invoke<Void>(0x4348309FDD24571B, p0); } // 0x600048C60D5C2C51 0x0688DE64
	static void _0xD5F6ED88ED88E952(float p0, float p1, float p2, float p3, float p4, Any p5, float p6, Any p7) { invoke<Void>(0xD5F6ED88ED88E952, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x2DF9038C90AD5264 0x909A1D76
	static void _0x96657D86D8FFAA3F(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, float p8, Any p9) { invoke<Void>(0x96657D86D8FFAA3F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xB2AFF10216DEFA2F 0x4AAD0ECB
	static void _0xA8846F47ACD0A472() { invoke<Void>(0xA8846F47ACD0A472); } // 0xFEE4A5459472A9F8 0x492C9E46
	static Any _0xBB22A67725D9B946() { return invoke<Any>(0xBB22A67725D9B946); } // 0x3C67506996001F5E 0x814A28F4
	static Any _0x7635A495A644C07D() { return invoke<Any>(0x7635A495A644C07D); } // 0xA586FBEB32A53DBB 0x0B60D2BA
	static Any _0xC8C27FAF299F4354() { return invoke<Any>(0xC8C27FAF299F4354); } // 0xF445DE8DA80A1792 0x6B83ABDF
	static Any _0x26BA5A4FA4A587D6() { return invoke<Any>(0x26BA5A4FA4A587D6); } // 0xA635C11B8C44AFC2 0xF46B4DC8
	static void _0xBE72992FED6055C5(Any p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xBE72992FED6055C5, p0, p1, p2, p3); } // 0x280C7E3AC7F56E90 0x36A4AC65
	static void _0x3687751804ECB7AE(Any p0, Any* p1) { invoke<Void>(0x3687751804ECB7AE, p0, p1); } // 0xB782F8238512BAD5 0xBA699DDF
	static void SET_IK_TARGET(Any p0, Any p1, Any p2, Any p3, float p4, float p5, float p6, Any p7, Any p8, Any p9) { invoke<Void>(0x8207E3ADD67AFA6E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xC32779C16FCEECD9 0x6FE5218C
	static void _0xD203F7ABAE4DB269(Any p0) { invoke<Void>(0xD203F7ABAE4DB269, p0); } // 0xED3C76ADFA6D07C4 0xFB4000DC
	static void REQUEST_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x05B5DC6DD4089D40, asset); } // 0x290E2780BB7AA598 0x572BA553
	static BOOL HAS_ACTION_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0x87A2A352F141F67C, asset); } // 0xE4B5F4BF2CB24E65 0xF7EB2BF1
	static void REMOVE_ACTION_MODE_ASSET(char* asset) { invoke<Void>(0x904D80099A5679CE, asset); } // 0x13E940F88470FA51 0x3F480F92
	static void REQUEST_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xA5857B8415EC22D3, asset); } // 0x2A0A62FCDEE16D4F 0x280A004A
	static BOOL HAS_STEALTH_MODE_ASSET_LOADED(char* asset) { return invoke<BOOL>(0x214FDA37AF4EEA86, asset); } // 0xE977FC5B08AF3441 0x39245667
	static void REMOVE_STEALTH_MODE_ASSET(char* asset) { invoke<Void>(0xDB1A020E13361C30, asset); } // 0x9219857D21F0E842 0x8C0B243A
	static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0x4CF93401368188F2, ped, multiplier); } // 0xDC2C5C242AAC342B 0x1D2B5C70
	static void _0x976A2F837BACF0E2(Any p0, BOOL p1, Any p2) { invoke<Void>(0x976A2F837BACF0E2, p0, p1, p2); } // 0xE861D0B05C7662B8 0x2F9550C2
	static void _0x187F7608BA81D7D9(Any p0, BOOL p1) { invoke<Void>(0x187F7608BA81D7D9, p0, p1); } // 0x129466ED55140F8D 0x37DBC2AD
	static void _0x702A631C5B2A3D34(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0x702A631C5B2A3D34, p0, p1, p2, p3); } // 0xCB968B53FC7F916D 0xC0F1BC91
	static BOOL _0x8F6FE79D52C51E99(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x8F6FE79D52C51E99, p0, p1, p2, p3, p4); } // 0x68772DB2B2526F9F 0x1A464167
	static BOOL _0x6C4EB72870245A4F(Any p0, Any p1, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0x6C4EB72870245A4F, p0, p1, p2, p3, p4, p5); } // 0x06087579E7AA85A9 0xD0567D41
	static void _0x3DE192ED26102134(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x3DE192ED26102134, p0, p1, p2, p3, p4); } // 0xD8C3BE3EE94CAF2D 0x4BBE5E2C
	static void _0xDC721A5CBFFBD535(Any p0) { invoke<Void>(0xDC721A5CBFFBD535, p0); } // 0xD33DAA36272177C4 0xA89A53F2
	static void _0x4D231C70D5CAD82A(Any p0, Any p1) { invoke<Void>(0x4D231C70D5CAD82A, p0, p1); } // 0x83A169EABCDB10A2
	static void _0x891E5B6EFE1D2B7B(Any p0, float p1) { invoke<Void>(0x891E5B6EFE1D2B7B, p0, p1); } // 0x288DF530C92DAD6F
}

namespace VEHICLE
{
	static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL networkHandle, BOOL vehiclehandle) { return invoke<Vehicle>(0xD504D1FF5DD2FFD7, modelHash, x, y, z, heading, networkHandle, vehiclehandle); } // 0xAF35D0D2583051B0 0xDD75460A
	static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x9E55BD45B84E7BDC, vehicle); } // 0xEA386986E786A54F 0x9803AF60
	static void _0x5959153FA05818C3(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x5959153FA05818C3, vehicle, p1, p2); } // 0x7D6F9A3EF26136A0 0xBB54ECCA
	static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL p1) { invoke<Void>(0xD22137356DDC2D0F, veh, p1); } // 0x5D14D4154BFE7B2C 0x8BAAC437
	static int _0x57B6B7B91BC73EEC(Vehicle vehicle) { return invoke<int>(0x57B6B7B91BC73EEC, vehicle); } // 0xE6B0E8CFC3633BF0 0xFBDE9FD8
	static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash hash) { return invoke<BOOL>(0x7579897B912B3328, vehicle, hash); } // 0x423E8DE37D934D89 0x013B10B6
	static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(Any vehicleGenerator) { return invoke<BOOL>(0xC15055C9A9A48DD9, vehicleGenerator); } // 0xF6086BC836400876 0xF6BDDA30
	static Any CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<Any>(0xF4CBF95F804D5F92, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x9DEF883114668116 0x25A9A261
	static void DELETE_SCRIPT_VEHICLE_GENERATOR(Any vehicleGenerator) { invoke<Void>(0xD59E53AE790E1D7A, vehicleGenerator); } // 0x22102C9ABFCF125D 0xE4328E3F
	static void SET_SCRIPT_VEHICLE_GENERATOR(Any vehicleGenerator, BOOL enabled) { invoke<Void>(0x767BD5F10E3857DD, vehicleGenerator, enabled); } // 0xD9D620E0AC6DC4B0 0x40D73747
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { invoke<Void>(0xBDF0A810DD6A47D3, x1, y1, z1, x2, y2, z2, p6, p7); } // 0xC12321827687FE4D 0xB4E0E69A
	static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0x666CB64FA00E0CF6); } // 0x34AD89078831A4BC 0xAB1FDD76
	static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0x1E448CAD2CCD4493, active); } // 0x608207E7A8FB787C 0x87F767F2
	static void _0x40AF4AD2DEEED3E6(float p0, float p1, float p2, float p3) { invoke<Void>(0x40AF4AD2DEEED3E6, p0, p1, p2, p3); } // 0x9A75585FB2E54FAD 0x935A95DA
	static void _0x4AF4E0EC167101AE() { invoke<Void>(0x4AF4E0EC167101AE); } // 0x0A436B8643716D14 0x6C73E45A
	static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle) { return invoke<BOOL>(0xC9CEB5227A733CE6, vehicle); } // 0x49733E92263139D1 0xE14FDBA6
	static Any SET_ALL_VEHICLES_SPAWN(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0xFB2CCD22E3A75832, p0, p1, p2, p3); } // 0xE023E8AC4EF7C117 0xA0909ADB
	static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x082AD235E40A8FDE, vehicle); } // 0xB497F06B288DCFDF 0x18D07C6C
	static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x2EA9D513624CAB16, vehicle); } // 0xB72E26D81006005B 0x3A13D384
	static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x814812A00D591F4F, vehicle); } // 0xC53EB42A499A7E90 0xF390BA1B
	static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x6D30046757C9C4F9, vehicle); } // 0x5721B434AD84D57A 0x655F072C
	static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x34B3E2C1CD1929BF, vehicle); } // 0x24CB2137731FFE89 0x1EF20849
	static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x25ECA1DD55F6CB7F, vehicle); } // 0xA7C4F2C6E744A550 0x0A2FC08C
	static int _GET_VEHICLE_MODEL_MAX_NUMBER_OF_PASSENGERS(Hash VehicleModel) { return invoke<int>(0x8B25BC50161AD227, VehicleModel); } // 0x2AD93716F184EDA4 0x838F7BF7
	static BOOL _0x8AEBD01597B5BA5E(Vehicle vehicle, BOOL flag) { return invoke<BOOL>(0x8AEBD01597B5BA5E, vehicle, flag); } // 0xF7F203E31F96F6A1 0x769E5CF2
	static BOOL _0xBAE27CB735636B70(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xBAE27CB735636B70, vehicle, p1); } // 0xE33FFA906CE74880
	static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x6423C366AD1DAA00, multiplier); } // 0x245A6883D966D537 0xF4187E51
	static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xCE8A419ECD46FA8F, multiplier); } // 0xB3B3359379FE77D3 0x543F712B
	static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x5CE96A8014264740, multiplier); } // 0xEAE6DCC7EEE3DB1D 0xDD46CEBE
	static void _0x6F43390FE72C15D8(BOOL p0) { invoke<Void>(0x6F43390FE72C15D8, p0); } // 0xD4B8E3D1917BC86B 0x09462665
	static void _0x2C52BA387634C1DD(float p0) { invoke<Void>(0x2C52BA387634C1DD, p0); } // 0x90B6DA738A9A25DA 0xDAE2A2BE
	static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0x85352921D4F648A1, toggle); } // 0x26324F33423F3CC3 0x9F019C49
	static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0x4BAFD83665B00619, value); } // 0xCAA15F13EBD417FF 0x206A58E8
	static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x18F90CF5D756C783, vehicle, doorLockStatus); } // 0xB664292EAECF7FA6 0x4CDD35D0
	static void SET_PED_TARGETTABLE_VEHICLE_DESTROY(Vehicle vehicle, int vehicleComponent, int destroyType) { invoke<Void>(0xA464B3B618A04EF3, vehicle, vehicleComponent, destroyType); } // 0xBE70724027F85BCD 0xD61D182D
	static void DISABLE_VEHICLE_IMPACT_EXPLOSION_ACTIVATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE60F3B685E34342B, vehicle, toggle); } // 0xD8050E0EB60CF274 0xC54156A9
	static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x973268FD41F2612F, vehicle, player, toggle); } // 0x517AAF684BB50CD1 0x49829236
	static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0x9A5EFE3AD2EF252A, vehicle, player); } // 0xF6AF6CB341349015 0x1DC50247
	static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x21E18A9362DEB4CD, vehicle, toggle); } // 0xA2F80B8D040727CC 0x891BA8A4
	static void _0xBD92BE782DEF3B1F(Vehicle veh, BOOL p1) { invoke<Void>(0xBD92BE782DEF3B1F, veh, p1); } // 0x9737A37136F07E75 0xE4EF6514
	static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0x4A326C509730FABC, vehicle, team, toggle); } // 0xB81F6D4A8F5EEBA8 0x4F85E783
	static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xCF219408C2548110, vehicle, isAudible, isInvisible); } // 0xBA71116ADF5B514C 0xBEDEACEB
	static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0x9581B15DD6878B2B, vehicle, killDriver, explodeOnImpact); } // 0xF19D095E42D430CC 0x3764D734
	static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0xC8EC7840AADDB1A8, vehicle, ped, toggle); } // 0x2E0A74E1002380B1 0xDB8CB8E2
	static void _0x91EAD3F53E2C881B(Any p0) { invoke<Void>(0x91EAD3F53E2C881B, p0); } // 0x99AD4CCCB128CBC9 0x811373DE
	static Any _0x32A07F9B4F217D00() { return invoke<Any>(0x32A07F9B4F217D00); } // 0x6ADAABD3068C5235 0xA4E69134
	static void _0xC853988FDFFB7266() { invoke<Void>(0xC853988FDFFB7266); } // 0xEF49CF0270307CBE 0x65255524
	static BOOL _0x6CE529E18C2157A0(Any p0) { return invoke<BOOL>(0x6CE529E18C2157A0, p0); } // 0xAE3FEE8709B39DCB 0xE39DAF36
	static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0x303521F872171944, vehicle, state); } // 0x598803E85E8448D9 0x68639D85
	static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x98FD18022CAD5333, vehicle); } // 0x7504C0F113AB50FC 0x6FC4924A
	static BOOL IS_VEHICLE_IN_GARAGE_AREA(char* garageName, Vehicle vehicle) { return invoke<BOOL>(0x56C8E476471194F1, garageName, vehicle); } // 0xCEE4490CD57BB3C2 0xA90EC257
	static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0x408AD7E5AD0BB545, vehicle, colorPrimary, colorSecondary); } // 0x4F1D4BE3A7F24601 0x57F24253
	static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x848C2F6D12D8AAF7, vehicle, toggle); } // 0x8B7FD87F0DDB421E 0x9C49CC15
	static void STEER_UNLOCK_BIAS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x950D96EF6D2E1C13, vehicle, toggle); } // 0x07116E24E9D1929D 0xA59E3DCD
	static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x145645B37AE71EFB, vehicle, r, g, b); } // 0x7141766F91D15BEA 0x8DF9F9BC
	static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x6A5331108E27160A, vehicle, r, g, b); } // 0xB64CF2CCA9D95F52 0x1C2B9FEF
	static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0xA2F299A29CED1AB0, vehicle); } // 0x55E1D2758F34E437 0x51E1E33D
	static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x22929DCF418D8AAF, vehicle); } // 0xF095C0405307B21B 0xD7EC8760
	static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x2CF4F678CED1EB9D, vehicle, r, g, b); } // 0x36CED73BFED89754 0x9D77259E
	static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xCCD9F17DFC40BAE7, vehicle, r, g, b); } // 0x8389CD56CA8072DC 0x3FF247A2
	static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x50BBB995D0E3481E, vehicle); } // 0x5FFBDEEC3E8E2009 0x7CE00B29
	static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x3781B3A8FED51121, vehicle); } // 0x910A32E7AAD2656C 0x288AD228
	static void _SET_VEHICLE_PAINT_FADE(Vehicle veh, float fade) { invoke<Void>(0x270D1E5D25C8646A, veh, fade); } // 0x3AFDC536C3D01674 0x8332730C
	static float _GET_VEHICLE_PAINT_FADE(Vehicle veh) { return invoke<float>(0x6B8411214AD72177, veh); } // 0xA82819CAC9C4C403 0xD5F1EEE1
	static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x883DA07E00F20460, vehicle, state); } // 0x52BBA29D5EC69356 0x37677590
	static void _0x80F34B4CC91E2724(Vehicle vehicle, BOOL p1) { invoke<Void>(0x80F34B4CC91E2724, vehicle, p1); } // 0x33506883545AC0DF 0x54E9EE75
	static void _JITTER_VEHICLE(Vehicle vehicle, BOOL p1, float yaw, float pitch, float roll) { invoke<Void>(0x254D75BF2DCF9E1B, vehicle, p1, yaw, pitch, roll); } // 0xC59872A5134879C7 0x4A46E814
	static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8404DB71FD2DB229, vehicle, toggle); } // 0x75DBEC174AEEAD10 0xA3906284
	static BOOL _GET_BOAT_ANCHOR(Vehicle vehicle) { return invoke<BOOL>(0x154FA3377A44E106, vehicle); } // 0x26C10ECBDA5D043B
	static void _0xE2F6B4E2B9E9E2EB(Vehicle vehicle, BOOL p1) { invoke<Void>(0xE2F6B4E2B9E9E2EB, vehicle, p1); } // 0xE3EBAAE484798530 0x0ED84792
	static void _0x3995E89AFB8B721E(Vehicle vehicle, BOOL p1) { invoke<Void>(0x3995E89AFB8B721E, vehicle, p1); } // 0xB28B1FE5BFADD7F5 0xA739012A
	static void _0x0F4A2B98C114A851(Vehicle vehicle, float p1) { invoke<Void>(0x0F4A2B98C114A851, vehicle, p1); } // 0xE842A9398079BD82 0x66FA450C
	static void _0xC5D2B4CCBF81054D(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC5D2B4CCBF81054D, vehicle, p1); } // 0x8F719973E1445BA2 0x35614622
	static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x821446383BC10D9B, vehicle, toggle); } // 0xF4924635A19EB37D 0x4AC1EFC7
	static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0xB24099FCD7E05D26, vehicle); } // 0x4C9BF537BE2634B2 0x25EB5873
	static BOOL _0xA13AC2B3D46B3527(Vehicle vehicle) { return invoke<BOOL>(0xA13AC2B3D46B3527, vehicle); } // 0xB5CC40FBCB586380
	static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9DB0432DBE539D98, vehicle, toggle); } // 0x3E8C8727991A8A0B 0xC758D19F
	static void REMOVE_VEHICLE_STUCK_CHECK(Any p0) { invoke<Void>(0xFA1A9835C7DE4F2A, p0); } // 0x8386BFB614D06749 0x81594917
	static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0x95C00B12C5FCA494, vehicle, colorPrimary, colorSecondary); } // 0xA19435F193E081AC 0x40D82D88
	static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0xD12071DBE8393EC8, vehicle, seatIndex); } // 0x22AC59A870E6A669 0xDAF42B02
	static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int index) { return invoke<Ped>(0xBD6B21D725712BDE, vehicle, index); } // 0xBB40DD2270B65366 0x388FDE9A
	static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0xFC6351163F828F49, vehicle, seatIndex); } // 0x83F969AA1EE2A664 0xF7C6792D
	static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, int* lightsOn, int* highbeamsOn) { return invoke<BOOL>(0xD0D76830C836D1C8, vehicle, lightsOn, highbeamsOn); } // 0xB91B4C20085BD12F 0x7C278621
	static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0x3F916E486684A3A8, vehicle, wheelID, completely); } // 0xBA291848A0815CA9 0x48C80210
	static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xA299DFC4364AB573, vehicle, speed); } // 0xAB54A438726D25D5 0x69880D14
	static void _TASK_BRING_VEHICLE_TO_HALT(Vehicle vehicle, float p1, Any p2, BOOL p3) { invoke<Void>(0x1B9F8E5CCC384F1E, vehicle, p1, p2, p3); } // 0x260BE8F09E326A20 0xCBC7D3C8
	static void _0xA9258113A772D982(Vehicle vehicle, float p1) { invoke<Void>(0xA9258113A772D982, vehicle, p1); } // 0x37EBBF3117BD6A25 0x943A6CFC
	static BOOL SET_PED_ENABLED_BIKE_RINGTONE(Vehicle vehicle, int ringtone) { return invoke<BOOL>(0x031A48640D6111FC, vehicle, ringtone); } // 0x57715966069157AD 0x7FB25568
	static BOOL _0x35EFBE021B77C59E(Any p0) { return invoke<BOOL>(0x35EFBE021B77C59E, p0); } // 0x62CA17B74C435651 0x593143B9
	static Any _0x9403108EFC5517A2(Any p0) { return invoke<Any>(0x9403108EFC5517A2, p0); } // 0x375E7FC44F21C8AB 0x70DD5E25
	static BOOL _0xC0D0393EF2D569B1(Any p0, Any p1) { return invoke<BOOL>(0xC0D0393EF2D569B1, p0, p1); } // 0x89D630CF5EA96D23 0xFBF5536A
	static void _0xBC5019BA734D8781(Any p0, Any p1) { invoke<Void>(0xBC5019BA734D8781, p0, p1); } // 0x6A98C2ECF57FA5D4 0x20AB5783
	static void _0x5096E83A9C54B6FC(Any p0) { invoke<Void>(0x5096E83A9C54B6FC, p0); } // 0x7C0043FDFF6436BC 0x0F11D01F
	static void _0xAF9D11DD6E32874C(Any p0, BOOL p1) { invoke<Void>(0xAF9D11DD6E32874C, p0, p1); } // 0x8AA9180DE2FEDD45 0xAE040377
	static void _0x158646D1BCB66777(Any p0, BOOL p1) { invoke<Void>(0x158646D1BCB66777, p0, p1); } // 0x0A6A279F3AA4FD70 0x4C0E4031
	static BOOL _0x5B267B4BC94D1494(Any p0) { return invoke<BOOL>(0x5B267B4BC94D1494, p0); } // 0x634148744F385576 0x6346B7CC
	static void _0x86F5B6D879B861CF(Any p0, float p1) { invoke<Void>(0x86F5B6D879B861CF, p0, p1); } // 0xE6F13851780394DA 0xCCB41A55
	static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL on_rim, float p3) { invoke<Void>(0x102F5B8556B83EED, vehicle, index, on_rim, p3); } // 0xEC6A202EE4960385 0x89D28068
	static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x32C67B8F6CBD9B6A, vehicle, closeInstantly); } // 0x781B3D62BB013EF5 0xBB1FF6E7
	static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL value) { invoke<Void>(0x0C27C841171728F7, vehicle, value); } // 0xEB9DC3C7D8596C46 0xA198DB54
	static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x54AAF075A06F73AA, vehicle); } // 0x678B9BB8C3F58FEB 0x4D76CD2F
	static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x785022A7B4E28C03, vehicle, enabled); } // 0x29B18B4FD460CA8F 0x829ED654
	static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorIndex, BOOL loose, BOOL openInstantly) { invoke<Void>(0xDBF2D7502C37C299, vehicle, doorIndex, loose, openInstantly); } // 0x7C65DAC73C35C862 0xBB75D38B
	static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x2C47D40CD2967A44, vehicle, windowIndex); } // 0xA711568EEDB43069 0xBB8104A3
	static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0x0ED8A72952C89C89, vehicle); } // 0x85796B0549DDE156 0x51A16DC6
	static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x98FFAB6ECC163C61, vehicle, windowIndex); } // 0x7AD9E6CE657D69E3 0xF840134C
	static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x02AC597957E489D5, vehicle, windowIndex); } // 0x602E548F46E24D59 0x83B7E06A
	static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0x56A3692FF876C70E, vehicle, index); } // 0x9E5B5E4D2CCD2259 0xDDD9A8C2
	static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int index) { invoke<Void>(0xF51286CBF8DC9D4E, vehicle, index); } // 0x772282EBEB95E682 0x6B8E990D
	static void _DETACH_VEHICLE_WINDSCREEN(Vehicle vehicleHandle) { invoke<Void>(0x3AD5B55509DFFE9B, vehicleHandle); } // 0x6D645D59FB5F5AD3 0xCC95C96B
	static void _EJECT_JB700_ROOF(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xA1B2B7B5382E31AB, vehicle, x, y, z); } // 0xE38CB9D7D39FDBCC 0xFDA7B6CA
	static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int p1) { invoke<Void>(0x01A5F35B4016EFD8, vehicle, p1); } // 0x34E710FF01247C5A 0xE8930226
	static void _0x2FD1BE2FC1A3273C(Any p0, BOOL p1) { invoke<Void>(0x2FD1BE2FC1A3273C, p0, p1); } // 0xC45C27EF50F36ADC 0x4221E435
	static void _0x901E46666743E993(Any vehicle, int p1) { invoke<Void>(0x901E46666743E993, vehicle, p1); } // 0x1FD09E7390A74D54
	static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0x174FED9630483D03, vehicle, state); } // 0xCDE5E70C1DDB954C 0x24877D84
	static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x2353C91EDB180C65, vehicle); } // 0xB8FF7AB45305C345 0x5B451FF7
	static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0x4E3A17D3771C1678, vehicle); } // 0x4319E335B71FFF34 0xF2630A4C
	static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x922FEC7F32BC972D, vehicle, toggle); } // 0xBC2042F090AF6AD3 0x9AD1FE1E
	static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x25D4BC9A89934F1D, vehicle, multiplier); } // 0xB385454F8791F57C 0x48039D6A
	static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0x64016D4B11327EF1, vehicle, trailer, radius); } // 0x3C7D42D58F770B54 0x2133977F
	static void _0xDA9FE2351EFB07CB(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0xDA9FE2351EFB07CB, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x16B5E274BDE402F8 0x12AC1A16
	static void _0xF79B732FB6D69234(Vehicle p0, Entity p1, float p2) { invoke<Void>(0xF79B732FB6D69234, p0, p1, p2); } // 0x374706271354CB18 0x40C4763F
	static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0x8DA4F8EFE4B08476, vehicle); } // 0x90532EDF0D2BDD86 0xB5DBF91D
	static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0x62A80FFAACC757A8, vehicle); } // 0xE7CF3C4F9F489F0C 0xE142BBCC
	static void _0x9B0241630AE1B5C1(Any p0, float p1) { invoke<Void>(0x9B0241630AE1B5C1, p0, p1); } // 0x2A8F319B392E7B3F 0xE74E85CE
	static void _0x242AD77927B8E1C9(Any p0) { invoke<Void>(0x242AD77927B8E1C9, p0); } // 0x95CF53B3D687F9FA 0x06C47A6F
	static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0x3A8C07A85713A71E, vehicle, tyreIndex); } // 0x6E13FC662B882D1D 0xA42EFA6B
	static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, char* plateText) { invoke<Void>(0xAA38ABB77E443507, vehicle, plateText); } // 0x95A88F0B409CDA47 0x400F9556
	static char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<char*>(0xC2421167AF5744AC, vehicle); } // 0x7CE1CCB9B293020E 0xE8522D58
	static Any GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<Any>(0x93CF2A62AE3C8085); } // 0x4C4D6B2644F458CB 0xD24BC1AE
	static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0x0E88E3FDED7F6766, vehicle, plateIndex); } // 0x9088EB5A43FFB0A1 0xA1A1890E
	static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0x0FD17058EC3E1147, vehicle); } // 0xF11BC2DD9A3E7195 0x499747B6
	static void SET_RANDOM_TRAINS(BOOL unk) { invoke<Void>(0x21D223E79BE76031, unk); } // 0x80D9F74197EA47D9 0xD461CA7F
	static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction) { return invoke<Vehicle>(0x542B212BFCD0CB0B, variation, x, y, z, direction); } // 0x63C6CCA8E68AE8C8 0xD4C2EAFD
	static void SWITCH_TRAIN_TRACK(int intersectionId, BOOL state) { invoke<Void>(0x10CE92D4DE1AAD13, intersectionId, state); } // 0xFD813BB7DB977F20 0x68BFDD61
	static void _0x3DF375A412873EDE(Any p0, Any p1) { invoke<Void>(0x3DF375A412873EDE, p0, p1); } // 0x21973BBF8D17EDFA 0xD5774FB7
	static void DELETE_ALL_TRAINS() { invoke<Void>(0xA5381F0DD8AC529F); } // 0x736A718577F39C7D 0x83DE7ABF
	static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0xA551D9766E783D40, train, speed); } // 0xAA0BC91BE0B796E3 0xDFC35E4D
	static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0x1A7DFECB87D16C8E, train, speed); } // 0x16469284DB8C62B5 0xB507F51D
	static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0x1529CF993C3FC146, toggle); } // 0x84436EC293B1415F 0xB505BD89
	static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0x860964F2A77E1393, toggle); } // 0x2AFD795EEAC8D30D 0xD9ABB0FF
	static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Any p0) { return invoke<BOOL>(0xFA7BE9A102B98E76, p0); } // 0x57E4C39DE5EE8470 0x5D91D9AC
	static Any GET_VEHICLE_RECORDING_ID(Any p0, Any* p1) { return invoke<Any>(0x4F804572A750487C, p0, p1); } // 0x21543C612379DB3C 0x328D601D
	static void REQUEST_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0xDBDFBE5906702D9E, p0, p1); } // 0xAF514CABE74CBF15 0x91AFEFD9
	static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(Any p0, Any* p1) { return invoke<BOOL>(0x08F84BB137ADEE81, p0, p1); } // 0x300D614A4C785FC4 0xF52CD7F5
	static void REMOVE_VEHICLE_RECORDING(Any p0, Any* p1) { invoke<Void>(0xFC8E26A6FE4C2E54, p0, p1); } // 0xF1160ACCF98A3FC8 0xD3C05B00
	static Vector3 _0x232293F1B0A3E165(Any p0, float p1) { return invoke<Vector3>(0x232293F1B0A3E165, p0, p1); } // 0x92523B76657A517D 0xF31973BB
	static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<Vector3>(0x628822AEBDA1B8F8, p0, p1, p2); } // 0xD242728AA6F0FBA2 0x7178558D
	static Vector3 _0x24D6943BFE0EE704(Any p0, float p1) { return invoke<Vector3>(0x24D6943BFE0EE704, p0, p1); } // 0xF0F2103EFAF8CBA7 0x4D1C15C2
	static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(Any p0, float p1, Any* p2) { return invoke<Vector3>(0xBD87ACE606C2EA19, p0, p1, p2); } // 0x2058206FBE79A8AD 0xD96DEC68
	static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(Any p0) { return invoke<float>(0x0A38D50B20A3D44E, p0); } // 0x102D125411A7B6E6 0x7116785E
	static Any GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Any p0, Any p1) { return invoke<Any>(0x686986496F16B625, p0, p1); } // 0x0E48D1C262390950 0x5B35EEB7
	static float GET_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0x91594466EA2D3AF4, p0); } // 0x2DACD605FC681475 0x7DCD644C
	static float GET_TIME_POSITION_IN_RECORDING(Any p0) { return invoke<float>(0x97DF87DF18B03512, p0); } // 0x5746F3A7AB7FE544 0xF8C3E4A2
	static void START_PLAYBACK_RECORDED_VEHICLE(Any p0, Any p1, Any* p2, BOOL p3) { invoke<Void>(0x23F0735A27D6F6B3, p0, p1, p2, p3); } // 0x3F878F92B3A7A071 0xCF614CA8
	static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { invoke<Void>(0xD7D06DA6B376A8F9, p0, p1, p2, p3, p4, p5); } // 0x7D80FD645D4DA346 0x4E721AD2
	static void _0x46B4C9B6A12598D1(Any p0, BOOL p1) { invoke<Void>(0x46B4C9B6A12598D1, p0, p1); } // 0x1F2E4E06DEA8992B 0x01B91CD0
	static void STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x6035B71FBC2881EC, p0); } // 0x54833611C17ABDEA 0xAE99C57C
	static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xEF82FB00A18B97AA, p0); } // 0x632A689BF42301B1 0xCCF54912
	static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0x23204F76245FEEA8, p0); } // 0x8879EE09268305D5 0x59060F75
	static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x05BA2AC20921A37E, p0); } // 0x1C8A4C2C19E68EEC 0x61F7650D
	static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x10AB6CE405F2016C, p0); } // 0xAEA8FD591FAD4106 0x63022C58
	static Any GET_CURRENT_PLAYBACK_FOR_VEHICLE(Any p0) { return invoke<Any>(0x088A0569FB43960B, p0); } // 0x42BC05C27A946054 0xA3F44390
	static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Any p0) { invoke<Void>(0xECFE384DA04A6E1B, p0); } // 0xAB8E2EDA0C0A5883 0x8DEA18C8
	static void SET_PLAYBACK_SPEED(Any p0, float speed) { invoke<Void>(0xEB35A2486E0DCF8F, p0, speed); } // 0x6683AB880E427778 0x684E26E4
	static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Any p0, Any p1, Any* p2, float p3, Any p4) { invoke<Void>(0x1F15ABFC77091A59, p0, p1, p2, p3, p4); } // 0x29DE5FA52D00428C 0x8DE8E24E
	static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Any p0, float p1) { invoke<Void>(0x00E52220EE436481, p0, p1); } // 0x9438F7AD68771A20 0xCF3EFA4B
	static void SET_PLAYBACK_TO_USE_AI(Any p0, Any p1) { invoke<Void>(0x649BAA01CD9AFFC1, p0, p1); } // 0xA549C3B37EA28131 0xB536CCD7
	static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x99534DD8ABAD9DF2, p0, p1, p2, p3); } // 0x6E63860BBB190730 0x0C8ABAA4
	static void _0xCE75C11B2E625595(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0xCE75C11B2E625595, vehicle, x, y, z, p4); } // 0x5845066D8A1EA7F7 0x943A58EB
	static void _0x7D9CB73E9BF1F784(Any p0, float p1, float p2, float p3) { invoke<Void>(0x7D9CB73E9BF1F784, p0, p1, p2, p3); } // 0x796A877E459B99EA 0x5C9F477C
	static void _0xD1380D03215B4810(Any p0, float p1, float p2, float p3) { invoke<Void>(0xD1380D03215B4810, p0, p1, p2, p3); } // 0xFAF2A78061FD9EF4 0xCD83C393
	static void _0x93E81F082E50D2FF(Any p0, BOOL p1) { invoke<Void>(0x93E81F082E50D2FF, p0, p1); } // 0x063AE2B2CC273588 0x2EF8435C
	static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle p0, BOOL p1) { invoke<Void>(0x1F940C3ECE6F758E, p0, p1); } // 0x786A4EB67B01BF0B 0xA85207B5
	static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0x091F358DDF2DE922, p0, p1, p2, p3, p4, p5, p6); } // 0x2FA9923062DD396C 0xC8B789AD
	static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0x7E38E815EF844C74, model, suppressed); } // 0x0FC2D89AC25A5814 0x42A08C9B
	static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x11EF3EB1EF47F297, x, y, z, radius, modelHash, flags); } // 0x386F6CE5BAF6091C 0x57216D03
	static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x66232F399D07BA72, p0, p1, p2, p3, p4, p5, p6); } // 0xC5574E0AEB86BA68 0xDCADEB66
	static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xD291EAC3332681B0, p0, p1, p2, p3, p4, p5, p6); } // 0xB50807EABE20A8DC 0xD6343F6B
	static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x46B0F3CB5DC1CDFC, x, y, z, radius, modelHash, flags); } // 0xF73EB622C4F1689B 0xD7E26B2C
	static Entity GET_TRAIN_CARRIAGE(Vehicle train, int carriage) { return invoke<Entity>(0x65E44962729532D9, train, carriage); } // 0x08AAFD0814722BC3 0x2544E7A6
	static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x4B80345A14FB3DBF, train); } // 0x5B76B14AE875C795 0x86C9497D
	static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xFE6C5B83BE43DA1C, train, p1); } // 0xBBE7648349B49BE8 0x19808560
	static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0xCCD6F014A6719618, train, x, y, z); } // 0x591CA673AA6AB736 0xD6D70803
	static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xAA65D1F2BF4AAFFB, model); } // 0x45A9187928F4B9E3 0x10F6085C
	static BOOL _IS_THIS_MODEL_A_SUBMERSIBLE(Hash model) { return invoke<BOOL>(0xD4023077B0753359, model); } // 0x9537097412CF75FE
	static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0xD1C57B32C6DE7BB6, model); } // 0xA0948AB42D7BA0DE 0x3B3907BB
	static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xFFD2CE10E8C7E77F, model); } // 0xDCE4334788AF94EA 0x8AF7F568
	static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x3937C84F74FAABA4, model); } // 0x7F6DB52EEFC96DF8 0x60E4C22F
	static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x437C3632DA4A7584, model); } // 0xAB935175B22E822B 0xF87DCFFD
	static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x07C6F7E084F6A97E, model); } // 0xB50C0B0CEDC6CE84 0x7E702CDD
	static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x48E903ADD98A5FDD, model); } // 0xBF94DD42F63BDED2 0x328E6FF5
	static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0x7BB0AC45FF0A3A28, model); } // 0x39DAC362EE65FA28 0xC1625277
	static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0x1C2B331EA00BB294, vehicle); } // 0xA178472EBB8AE60D 0x033A9408
	static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x70C197934139B0C3, vehicle, speed); } // 0xFD280B4D7F3ABC4D 0x5C7D4EA9
	static void _0x157CADC9F55F828C(Any p0, float p1, float p2) { invoke<Void>(0x157CADC9F55F828C, p0, p1, p2); } // 0x99CAD8E7AFDB60FA 0x1128A45B
	static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x82812F228B95D580, vehicle, state); } // 0x3750146A28097A82 0x64B70B1D
	static void _0xF93FDFC23C2AC69F(Any p0, BOOL p1) { invoke<Void>(0xF93FDFC23C2AC69F, p0, p1); } // 0xDBC631F109350B8C 0x486C1280
	static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x954AB0167F3D96AE, vehicle, state); } // 0x4C7028F78FFD3681 0xC5D94017
	static void _0x76C6D787F06AF224(Any p0, BOOL p1) { invoke<Void>(0x76C6D787F06AF224, p0, p1); } // 0x1AA8A837D2169D94 0x009AB49E
	static void _0x5C354FE965B647A9(Any p0, BOOL p1) { invoke<Void>(0x5C354FE965B647A9, p0, p1); } // 0x2311DD7159F00582 0x758C5E2E
	static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0x883710067624C09C, vehicle); } // 0x8F17BC8BA08DA62B 0xFD15C065
	static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0xB4446F1B3498926D, vehicle, dirtLevel); } // 0x79D3B596FE44EE8B 0x2B39128B
	static BOOL _IS_VEHICLE_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xDD78A3FCEED5C9DD, vehicle); } // 0xBCDC5017D3CE1E9E 0xDAC523BC
	static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorIndex) { return invoke<BOOL>(0x847C57A0E5593E07, vehicle, doorIndex); } // 0x3E933CFF7B111C22 0xC2385B6F
	static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL unkb) { invoke<Void>(0xE9A614E9191BFB4A, vehicle, value, instantly, unkb); } // 0x2497C4717C8B881E 0x7FBC86F1
	static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x336384ED9A73289A, vehicle, toggle); } // 0x8ABA6AF54B942B95 0x48D02A4E
	static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xFF1E0699E98EFE55, vehicle, toggle); } // 0x5AFEEDD9BB2899D7 0xEFC01CA9
	static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorIndex, Any p2, float p3) { invoke<Void>(0x6A7A2A686DF429B7, vehicle, doorIndex, p2, p3); } // 0xF2BFA0430F0A0FCB 0x572DD360
	static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorIndex, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x82AD6265A8FA7C49, vehicle, doorIndex, p2, p3, p4); } // 0xA5A9653A8D2CAF48 0x4EB7BBFC
	static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int door) { return invoke<float>(0x3334247FF7988DFA, vehicle, door); } // 0xFE3F9C29F7B32BD5 0x0E399C26
	static Ped _GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doorIndex) { return invoke<Ped>(0xA9A35C9ACE08333D, vehicle, doorIndex); } // 0x218297BF0CFD853B
	static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorIndex, BOOL closeInstantly) { invoke<Void>(0x64BC661927CC9D64, vehicle, doorIndex, closeInstantly); } // 0x93D9BD300D7789E5 0x142606BD
	static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorIndex, BOOL toggle) { invoke<Void>(0x0FAB2ABDF190DBF3, vehicle, doorIndex, toggle); } // 0xD4D4F6A4AB575A33 0x8147FEA7
	static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x2363D576670633B2, vehicle, Toggle); } // 0x59BF8C3D52C92F66 0x90A810D1
	static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x3884F6A34F9B8387, vehicle); } // 0x8AC862B0B32C5B80 0xDB817403
	static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xF54ECC20AEF6A194, vehicle); } // 0x9F243D3919F442FE 0x9CDBA8DE
	static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0xEB045514FFA29A57, vehicle); } // 0x3B963160CD65D41E 0xF2442EE2
	static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int numCombos) { invoke<Void>(0x25E63F00F88CF099, vehicle, numCombos); } // 0x33E8CD3322E2FE31 0xA557AEAD
	static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x34C63E80D0A793FC, vehicle); } // 0x6A842D197F845D56 0x77AC1B4C
	static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x4F6C6B452FA34B13, vehicle, toggle); } // 0x31B927BBC44156CD 0x14413319
	static void _0x934B5D681061E394(Any p0, BOOL p1) { invoke<Void>(0x934B5D681061E394, p0, p1); } // 0xBE5C1255A1830FF5 0xA6D8D7A5
	static void _0x96A5A2704828D573(Any p0, BOOL p1) { invoke<Void>(0x96A5A2704828D573, p0, p1); } // 0x9BECD4B9FEF3F8A6 0xACAB8FF3
	static void _0xBDAEFD7DF53D6D9C(Any p0, BOOL p1) { invoke<Void>(0xBDAEFD7DF53D6D9C, p0, p1); } // 0x88BC673CA9E0AE99 0xF0E5C41D
	static void _0xDD6D96025802BEBA(Any p0, BOOL p1) { invoke<Void>(0xDD6D96025802BEBA, p0, p1); } // 0xE851E480B814D4BA 0x2F98B4B7
	static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* p2) { invoke<Void>(0x95D0AB0DA465AB7B, p0, modelHash, p2); } // 0x055BF0AC0C34F4FD 0xE2C45631
	static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0xF222368EEA38E69D, vehicle); } // 0x25BC98A59C2EA962 0x0D72CEF2
	static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0x087B4B9B00A33D4D, veh, doorID); } // 0xB8E181E559464527 0x4999E3C3
	static void _SET_VEHICLE_DOOR_BREAKABLE(Vehicle vehicle, int doorIndex, BOOL isBreakable) { invoke<Void>(0xD09991316D3221AD, vehicle, doorIndex, isBreakable); } // 0x2FA133A4A9D37ED8 0x065B92B3
	static BOOL _0x0EDEC8CCB9AC20B8(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x0EDEC8CCB9AC20B8, vehicle, p1); } // 0x27B926779DEB502D 0xB3A2CC4F
	static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xF02E25FF3A8188F4, vehicle, p1); } // 0x468056A6BB6F3846 0xAF25C027
	static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x9C591E519D409699, x1, x2, y1, y2, z1, z2); } // 0x7EEF65D5F153E26A 0xFB16C6D1
	static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x0E9BAAAE8317091B, vehicle); } // 0xB104CD1BABF302E2 0x10089F8E
	static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0xEC3733C97602ACFD, vehicle); } // 0x28D37D4F71AC5C58 0xE0B35187
	static Any _0x49B87CCC153D81C1(Vehicle vehicle, Any p1) { return invoke<Any>(0x49B87CCC153D81C1, vehicle, p1); } // 0xA01BC64DD4BFBBAC
	static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0x81EFDBD34CCE5214, train, toggle); } // 0x317B11A312DF5534 0x899D9092
	static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xC5F406A695E19D8A, vehicle, pearlescentColor, wheelColor); } // 0x2036F561ADD12E33 0x515DB2A0
	static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0xCFEF2B49C7ED1A18, vehicle, pearlescentColor, wheelColor); } // 0x3BC4245933A166F7 0x80E4659B
	static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0x35A723E71D33A00F); } // 0x0F87E938BDF29D66 0x17A0BCE5
	static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0x8C0100931D16FCD7, vehicle); } // 0x115722B1B9C14C1C 0x17469AA1
	static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0x50F14B4045D8859F, vehicle); } // 0x953DA1E1B12C0491 0xDD2920C8
	static void _0x4D859B1409041A69(Vehicle vehicle, BOOL p1) { invoke<Void>(0x4D859B1409041A69, vehicle, p1); } // 0x206BC5DC9D1AC70A
	static void _0xDE0CF61779B63045(Vehicle vehicle, BOOL p1) { invoke<Void>(0xDE0CF61779B63045, vehicle, p1); } // 0x51BB2D88D31A914B 0x88F0F7E7
	static void _0x79CA1891F45A343F(Vehicle vehicle, BOOL p1) { invoke<Void>(0x79CA1891F45A343F, vehicle, p1); } // 0x192547247864DFDD 0x90D6EE57
	static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDB366A9E771AD951, vehicle, toggle); } // 0x465BF26AB9684352 0xC40192B5
	static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1AE9D833CF3927C7, vehicle, toggle); } // 0x37C8252A7C92D017 0xAD3E05F2
	static void _0x699C9EDEB7D59CCF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x699C9EDEB7D59CCF, vehicle, p1); } // 0x91A0BD635321F145 0x1784BA1A
	static void _0x51C73F0B71170337(Vehicle vehicle, BOOL p1) { invoke<Void>(0x51C73F0B71170337, vehicle, p1); } // 0xC50CE861B55EAB8B 0x40C323AE
	static void _0xA425B7C93E04C684(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA425B7C93E04C684, vehicle, p1); } // 0x6EBFB22D646FFC18 0x847F1304
	static void _0x8734A10B003ED2B6(Vehicle vehicle, BOOL p1) { invoke<Void>(0x8734A10B003ED2B6, vehicle, p1); } // 0x25367DE49D64CF16 0xCBD98BA1
	static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { invoke<Void>(0x98ED910C6513D537, x1, y1, z1, x2, y2, z2, unk); } // 0x46A1E1A299EC4BBA 0x42CC15E0
	static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x8B0B2B109668AA4F, vehicle, value); } // 0x42A8EC77D5150CBE 0x7357C1EB
	static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xDF705551345526F6, vehicle, extraId); } // 0xD2E6822DBFD6C8BD 0x042098B5
	static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, int toggle) { invoke<Void>(0xC1DD29CFE93055E7, vehicle, extraId, toggle); } // 0x7EE3A3C5E4A40CC9 0x642D065C
	static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x4CFE54E52EE9F8DB, vehicle, extraId); } // 0x1262D55792428154 0x409411CC
	static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x6C26738F49379AC0, vehicle, p1); } // 0xF39C4F538B5124C2 0xC87B6A51
	static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x38FE2C5E44C306D8, vehicle, instantlyLower); } // 0xDED51F703D0FA83D 0xC5F72EAE
	static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0xD0005B9DEEF3CBA9, vehicle, instantlyRaise); } // 0x8F5FB35D7E88FC70 0xA4E4CBA3
	static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0x96616C6B22C7747D, vehicle); } // 0xF8C397922FC03F41 0x1B09714D
	static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x657F8DC28088EB36, vehicle, p1); } // 0x52F357A30698BCCE 0x6EF54490
	static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0x9265800260518275, vehicle); } // 0x2959F696AE390A99 0x69200FA4
	static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL p6) { invoke<Void>(0x77EF7A0E549D3126, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); } // 0xA1DD317EA8FD4F29 0x21B458B2
	static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xF4E8009A18C52112, vehicle); } // 0xC45D23BAF168AAB8 0x8880038A
	static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x07C7B5F986353F8B, vehicle, health); } // 0x45F6D8EEF34ABEF1 0x1B760FB5
	static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x28E83575387AA2B1, vehicle); } // 0x7D5DABE888D2D074 0xE41595CE
	static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xD1869FA90CC61334, vehicle, health); } // 0x70DB57649FA8D0D8 0x660A3692
	static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int p2) { return invoke<BOOL>(0xF675ACE4149620B8, vehicle, p1, p2); } // 0x679BE1DAF71DA874 0x2FCF58C1
	static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, BOOL nullAttributes) { invoke<Void>(0x77498BD6C043E153, vehicle, nullAttributes); } // 0xD7591B0065AFAA7A 0xEF2A6016
	static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xC45A34912542C4EB, vehicle, p1); } // 0x4C241E39B23DF959 0x41A7267A
	static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0xD4506FB3F348CB1B, vehicle, owned); } // 0x2B5F9D2AF1F1722D 0xB4D3DBFB
	static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5E4252FA6689C3E4, vehicle, toggle); } // 0xFBA550EA44404EE6 0xD8260751
	static void _0x8CE32A27933E6A15(Any p0, BOOL p1) { invoke<Void>(0x8CE32A27933E6A15, p0, p1); } // 0x9F3F689B814F2599
	static void _0x89B0DBFC8DE8B3D2(Any p0, BOOL p1) { invoke<Void>(0x89B0DBFC8DE8B3D2, p0, p1); } // 0x4E74E62E0A97E901
	static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL p3) { invoke<Void>(0xF67C39F4C9279042, vehicle, duration, mode, p3); } // 0x9C8C6504B5B63D2C 0x0DF5ADB3
	static void _0xE257BAE2E9B91FDA(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE257BAE2E9B91FDA, vehicle, toggle); } // 0x9D44FCCE98450843 0x968E5770
	static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8100F8AA27EE924B, vehicle, toggle); } // 0x92F0CF722BC4202F 0x0D1CBC65
	static char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<char*>(0x06724AA1519336EF, modelHash); } // 0xB215AAC32D25D019 0xEC86DF39
	static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float position1, float position2, float position3) { return invoke<Vector3>(0x90533815E952CBE6, vehicle, position1, position2, position3); } // 0x4EC6CFBC7B2E9536 0xABF02075
	static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xED6BC33BD669B45F, vehicle, livery); } // 0x60BF608F1B8CD1B6 0x7AD87059
	static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0x90DC8CCD4852ECAA, vehicle); } // 0x2BB9230590DA5E8A 0xEC82A51D
	static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x5349DE586C4C8ACB, vehicle); } // 0x87B63E25A529D526 0xFB0CA947
	static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x7DF549E9DDE0A2CE, vehicle, windowIndex); } // 0x46E571A0E20D01F1 0xAC4EF23D
	static BOOL _ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x8BB2F55B762C91D6, vehicle); } // 0x11D862A3E977A9EF 0xBB619744
	static BOOL _IS_ANY_VEHICLE_SEAT_EMPTY(Vehicle veh) { return invoke<BOOL>(0x9E152A78A0E41315, veh); } // 0x2D34FC3BC4ADB780 0x648E685A
	static void RESET_VEHICLE_WHEELS(Any p0, BOOL p1) { invoke<Void>(0x05C9D820DEFD9A16, p0, p1); } // 0x21D2E5662C1F6FED 0xD5FFE779
	static BOOL IS_HELI_PART_BROKEN(Any p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xA20B14C5D28FADC3, p0, p1, p2, p3); } // 0xBC74B4BE25EB6C8A 0xF4E4C439
	static float _GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF92CFD18202B91B5, vehicle); } // 0xE4CB7541F413D2C5 0xF01E2AAB
	static float _GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0xF65E45970344CCBB, vehicle); } // 0xAE8CE82A4219AC8C 0xA41BC13D
	static float _GET_HELI_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0xE0BCF6002F1EFEBE, vehicle); } // 0xAC51915D27E4A5F7 0x8A68388F
	static BOOL WAS_COUNTER_ACTIVATED(Any p0, Any p1) { return invoke<BOOL>(0x8DA9E204B604F0A7, p0, p1); } // 0x3EC8BF18AA453FE9 0x2916D69B
	static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, char* name) { invoke<Void>(0x312643ADD8F2A0B4, vehicle, name); } // 0xBFDF984E2C22B94F 0xA712FF5C
	static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xBD5F605A5856F2A8, vehicle, toggle); } // 0x71B0892EC081D60A 0x38CC692B
	static void _0x2BE34803E90959F1(Any p0, BOOL p1) { invoke<Void>(0x2BE34803E90959F1, p0, p1); } // 0x3441CAD2F2231923 0xC306A9A3
	static void _0x12F88FDE652A5758(Vehicle vehicle, BOOL p1) { invoke<Void>(0x12F88FDE652A5758, vehicle, p1); } // 0x2B6747FAA9DB9D6B 0x95A9ACCB
	static void _SET_VEHICLE_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0xD390C3A4EAD66C38, vehicle, state); } // 0xCFC8BE9A5E1FE575 0x24F873FB
	static int _GET_VEHICLE_LANDING_GEAR(Vehicle vehicle) { return invoke<int>(0x97AE2442D106D426, vehicle); } // 0x9B0F3DCA3DB0F4CD 0xA6F02670
	static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xEEC849D5E3FC13E0, x, y, z, radius); } // 0x61E1DD6125A3EEE6 0x2867A834
	static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x1E983D1C62BA179E, p0); } // 0xA6E9FDCB2C76785E 0x9DA21956
	static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Any p0) { invoke<Void>(0x8488FB515DD3FDAF, p0); } // 0x00689CDE5F7C6787 0x382BE070
	static BOOL IS_VEHICLE_HIGH_DETAIL(Any p0) { return invoke<BOOL>(0xFA0698DAF4F7F98C, p0); } // 0x1F25887F3C104278 0x55D41928
	static void REQUEST_VEHICLE_ASSET(Hash VehicleHash, int vehicleAsset) { invoke<Void>(0xD016326278B5D42B, VehicleHash, vehicleAsset); } // 0x81A15811460FAB3A 0x902B4F06
	static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0xE5ED4BE9950F1B30, vehicleAsset); } // 0x1BBE0523B8DB9A21 0x8DAAC3CB
	static void REMOVE_VEHICLE_ASSET(Any p0) { invoke<Void>(0x22CA804442E37496, p0); } // 0xACE699C71AB9DEB5 0x9620E9C6
	static void _SET_TOW_TRUCK_CRANE_RAISED(Vehicle towTruck, float state) { invoke<Void>(0x794711786A3E75BD, towTruck, state); } // 0xFE54B92A344583CA 0x88236E22
	static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, int p2, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0x8A05C10174AB919E, towTruck, vehicle, p2, hookOffsetX, hookOffsetY, hookOffsetZ); } // 0x29A16F8D621C4508 0x8151571A
	static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xAD21FB183883C51A, towTruck, vehicle); } // 0xC2DB6B6708350ED8 0xC666CF33
	static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x88FD9923BDF55C95, vehicle); } // 0xD0E9CE05A1E68CD8 0x3BF93651
	static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x3E29DD6D10980B6B, towTruck, vehicle); } // 0x146DF9EC4C4B9FD4 0x9699CFDC
	static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0x2C8FCD278A247AE4, towTruck); } // 0xEFEA18DCF10F8F75 0x11EC7844
	static Any SET_VEHICLE_AUTOMATICALLY_ATTACHES(Any p0, Any p1, Any p2) { return invoke<Any>(0x742E15B6989E356E, p0, p1, p2); } // 0x8BA6F76BC53A1493 0x4273A8D3
	static void _0x38353C206C3170FC(Any p0, float p1, BOOL p2) { invoke<Void>(0x38353C206C3170FC, p0, p1, p2); } // 0xF8EBCCC96ADB9FB7 0xED23C8A3
	static void _0x95CD2597EB768688(Any p0, float p1, BOOL p2) { invoke<Void>(0x95CD2597EB768688, p0, p1, p2); } // 0x56B94C6D7127DFBA 0xB1A52EF7
	static void _0x659C8C25B2A53FF6(Any p0, float p1) { invoke<Void>(0x659C8C25B2A53FF6, p0, p1); } // 0x1093408B4B9D1146 0xF30C566F
	static void _0xCEAECA0EA263DF86(Any p0, float p1) { invoke<Void>(0xCEAECA0EA263DF86, p0, p1); } // 0x30D779DE7C4F6DD3 0xA7DF64D7
	static void _0x7A802BCA40D0594F(Any p0, float p1) { invoke<Void>(0x7A802BCA40D0594F, p0, p1); } // 0x9AA47FFF660CB932 0xDD7936F5
	static BOOL _0xD8D6AD49486DB74C(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0xD8D6AD49486DB74C, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); } // 0xA4822F1CF23F4810 0x34E02FCD
	static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x35E416BB86DF841A, vehicle, toggle); } // 0xFB8794444A7D60FB 0x9B6EF0EA
	static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x76335E720D4B75A7, vehicle); } // 0x1297A88E081430EB 0x6632BC12
	static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5FD4A47136EC4BA3, vehicle, toggle); } // 0x222FF6A823D122E2 0x90D3A0D9
	static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0xAE1C23F7F7C0BEF3, vehicle, turnSignal, toggle); } // 0xB5D45264751B7DF0 0xA6073B5D
	static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0x5A4DA86F0AB35256, vehicle, Toggle); } // 0x92B35082E0B42F66 0x6D9BA11E
	static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xB356E3F8BEC5CE2B, vehicle, Toggle); } // 0x684785568EF26A22 0xBA729A25
	static void _0xE9F9327E769DB14E() { invoke<Void>(0xE9F9327E769DB14E); } // 0x48ADC8A773564670 0x37BC6ACB
	static Any _0xE270C3BE3AA1A862() { return invoke<Any>(0xE270C3BE3AA1A862); } // 0x91D6DD290888CBAB 0x71D898EF
	static void _0xA46D749E8524F31A(BOOL p0) { invoke<Void>(0xA46D749E8524F31A, p0); } // 0x51DB102F4A3BA5E0 0x0B0523B0
	static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x3567DD6AFD1905FD, vehicle, trailer); } // 0x1CDD6BADC297830D 0xAE84D758
	static void _0x18B65BB3E1532C9D(Vehicle vehicle, BOOL p1) { invoke<Void>(0x18B65BB3E1532C9D, vehicle, p1); } // 0xCAC66558B944DA67 0x0B200CE2
	static void SET_VEHICLE_RUDDER_BROKEN(Any p0, BOOL p1) { invoke<Void>(0x400C64DDA7099A3F, p0, p1); } // 0x09606148B6C71DEF 0x3FAC3CD4
	static void _0xE78A2769C078477C(Vehicle vehicle, BOOL p1) { invoke<Void>(0xE78A2769C078477C, vehicle, p1); } // 0x1A78AD3D8240536F 0x0858678C
	static float _GET_VEHICLE_SPEED(Vehicle vehicle) { return invoke<float>(0x94DAC33E95329409, vehicle); } // 0x53AF99BAA671CA47 0x7D1A0616
	static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0x34EE3D0ED7FD0A06, vehicle); } // 0xAD7E85FC227197C4 0x03B926F6
	static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0x4D10FF32809EA1F4, vehicle); } // 0xA132FB5370554DB0 0x7E5A1587
	static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0xCE869033F8E1FDFB, vehicle); } // 0x5DD35C8D074E57AE 0x00478321
	static float _GET_VEHICLE_MAX_SPEED(Hash modelHash) { return invoke<float>(0xD0AB97395B52F80E, modelHash); } // 0xF417C2502FFFED43 0x8F291C4A
	static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0xC82C69F46D6E0F79, modelHash); } // 0xDC53FD41B4ED944C 0x7EF02883
	static float _0xED45BDE14BA522E0(Hash modelHash) { return invoke<float>(0xED45BDE14BA522E0, modelHash); } // 0xBFBA3BA79CFF7EBF 0xF3A7293F
	static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0xFFF9A221C901AC55, modelHash); } // 0x539DE94D44FDFD0D 0x7F985597
	static float GET_VEHICLE_MODEL_ACCELERATION(Any p0) { return invoke<float>(0xAB90D382B60E4209, p0); } // 0x8C044C5C84505B6A 0x29CB3537
	static float _0xD8FFA6675E3CF3DB(Hash modelHash) { return invoke<float>(0xD8FFA6675E3CF3DB, modelHash); } // 0x53409B5163D5B846 0x37FBA7BC
	static float _0x5AD479F7C6F14342(Hash modelHash) { return invoke<float>(0x5AD479F7C6F14342, modelHash); } // 0xC6AD107DDC9054CC 0x95BB67EB
	static float _0x50738299059F901F(Any p0) { return invoke<float>(0x50738299059F901F, p0); } // 0x5AA3F878A178C4FC 0x87C5D271
	static Any _0x6EA9D66F5EB7E9B4(Any p0) { return invoke<Any>(0x6EA9D66F5EB7E9B4, p0); } // 0x00C09F246ABEDD82 0xCE67162C
	static float GET_VEHICLE_CLASS_MAX_TRACTION(Any p0) { return invoke<float>(0xC49947DEF69C0B52, p0); } // 0xDBC86D85C5059461 0x5B4FDC16
	static float GET_VEHICLE_CLASS_MAX_AGILITY(Any p0) { return invoke<float>(0xEB999CAD7B0B929A, p0); } // 0x4F930AD022D6DE3B 0x45F2BD83
	static float GET_VEHICLE_CLASS_MAX_ACCELERATION(Any p0) { return invoke<float>(0xE31F703E8AD684CE, p0); } // 0x2F83E7E45D9EA7AE 0x3E220A9B
	static float GET_VEHICLE_CLASS_MAX_BRAKING(Any p0) { return invoke<float>(0xFC7AFFE641C095A6, p0); } // 0x4BF54C16EC8FEC03 0xD08CC1A5
	static Any _0xF68E25367BD354F6(float p0, float p1, float p2, float p3, float p4, BOOL p5) { return invoke<Any>(0xF68E25367BD354F6, p0, p1, p2, p3, p4, p5); } // 0x2CE544C68FB812A0 0xD6685803
	static BOOL _0x4C17FD5BCB6C8DDD(Any p0) { return invoke<BOOL>(0x4C17FD5BCB6C8DDD, p0); } // 0x1033371FC8E842A7 0x0C0332A6
	static void _OPEN_VEHICLE_BOMB_BAY(Any p0) { invoke<Void>(0x93873BE565C58984, p0); } // 0x87E7F24270732CB1 0x6574041D
	static void _0x5D629DC756AC66EF(Any p0) { invoke<Void>(0x5D629DC756AC66EF, p0); } // 0x3556041742A0DC74 0xF8EC5751
	static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x9C0CB26F7DD24008, vehicle); } // 0xC0F97FCE55094987 0xADAF3513
	static void SET_VEHICLE_SEARCHLIGHT(Vehicle vehicle, BOOL duskLight, BOOL p2) { invoke<Void>(0x76B062E3214D3F8D, vehicle, duskLight, p2); } // 0x14E85C5EE7A4D542 0xE2C0DD8A
	static BOOL _0xE8C390D56BE854E1(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { return invoke<BOOL>(0xE8C390D56BE854E1, p0, p1, p2, p3, p4); } // 0x639431E895B9AA57 0xAB0E79EB
	static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, Any p1) { return invoke<BOOL>(0xEE35C6E05891AA57, vehicle, p1); } // 0x30785D90C956BF35 0xB3EB01ED
	static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0xA9D3956F42AEC644, vehicle); } // 0x33F2E3FE70EAAE1D 0xE4903AA0
	static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0x5DAB69BA0BF447FC, vehicle, modKit); } // 0x1F2AA07F00B3217A 0xB8132158
	static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xEF4B592D4E2621FD, vehicle); } // 0x6325D1A044AE510D 0x9FE60927
	static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xBD0E993059D2FD8E, vehicle); } // 0xFC058F5121E54C32 0xE5F76765
	static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0x31211750BC54126F, vehicle); } // 0xB3ED1BFB4BE636DC 0xDA58D7AE
	static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xE9ECD7D720B42CB4, vehicle, WheelType); } // 0x487EB21CC7295BA1 0x64BDAAAD
	static Any GET_NUM_MOD_COLORS(Any p0, BOOL p1) { return invoke<Any>(0xE5ED540AC6D5B6DB, p0, p1); } // 0xA551BE18C11A476D 0x73722CD9
	static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int p3) { invoke<Void>(0x040CEEE9AF27BA93, vehicle, paintType, color, p3); } // 0x43FEB945EE7F85B8 0xCBE9A54D
	static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0x59A5231FE44E902D, vehicle, paintType, color); } // 0x816562BADFDEC83E 0xC32613C2
	static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* p3) { invoke<Void>(0x18D188A2DF68996F, vehicle, paintType, color, p3); } // 0xE8D65CA700C9A693 0xE625510A
	static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0xA60CA83C42E3C0B0, vehicle, paintType, color); } // 0x81592BE4E3878728 0x9B76BB8E
	static Any _0x31F70DDE223E2B73(Any p0, BOOL p1) { return invoke<Any>(0x31F70DDE223E2B73, p0, p1); } // 0xB45085B721EFD38C 0x9A0840FD
	static Any _0x7585D9D5F064F72D(Any p0) { return invoke<Any>(0x7585D9D5F064F72D, p0); } // 0x4967A516ED23A5A1 0x9BDC0B49
	static BOOL _0xD292A8DBDEEF1AE0(Any p0) { return invoke<BOOL>(0xD292A8DBDEEF1AE0, p0); } // 0x9A83F5F9963775EF 0x112D637A
	static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0x16580F6E093503C8, vehicle, modType, modIndex, customTires); } // 0x6AF0636DDEDCB6DD 0xB52E5ED5
	static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0x1C8AF615CFEF2FE5, vehicle, modType); } // 0x772960298DA26FDB 0xDC520069
	static BOOL GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<BOOL>(0xB4686A5F9149447D, vehicle, modType); } // 0xB3924ECD70E095DC 0xC1B92003
	static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0xBAA70A4A1B1A59C8, vehicle, modType); } // 0xE38E9162A2500646 0x8A814FF9
	static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0x91C889C88C57B287, vehicle, modType); } // 0x92D619E420858204 0x9CC80A43
	static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0xFB0870DB05D28CB1, vehicle, modType, toggle); } // 0x2A1F4F37F95BAD08 0xD095F811
	static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x44EF52A7698B3306, vehicle, modType); } // 0x84B233A8C8FC8AE7 0xF0E1689F
	static char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<char*>(0x84501D0C09CEA717, vehicle, modType, modValue); } // 0x8935624F8C5592CC 0x0BA39CA7
	static char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<char*>(0xB1B69980EC5F2DD3, vehicle, modType); } // 0x51F0FEB9F6AE98C0 0x5E113483
	static char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<char*>(0x533993B0B5E501C8, vehicle, liveryIndex); } // 0xB4C7A93837C91A1F 0xED80B5BE
	static Any GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<Any>(0x85D58F849AF83046, vehicle, modType, modIndex); } // 0x90A38E9838E0A8C1 0x73AE5505
	static Any _0x69EC826DEA3284E6(Any p0, Any p1, Any p2) { return invoke<Any>(0x69EC826DEA3284E6, p0, p1, p2); } // 0x4593CF82AA179706 0x94850968
	static void PRELOAD_VEHICLE_MOD(Any p0, Any p1, Any p2) { invoke<Void>(0xD17C6050CB59B13B, p0, p1, p2); } // 0x758F49C24925568A 0x6EA5F4A8
	static BOOL HAS_PRELOAD_MODS_FINISHED(Any p0) { return invoke<BOOL>(0x70CEE49E13074E60, p0); } // 0x06F43E5175EB6D96 0xA8A0D246
	static void RELEASE_PRELOAD_MODS(Any p0) { invoke<Void>(0x8A6268CE6721C129, p0); } // 0x445D79F995508307 0xD442521F
	static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x2AA0B1D3DB2C3E10, vehicle, r, g, b); } // 0xB5BA80F839791C0F 0x3EDEC0DB
	static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x8062A8ED0C7F4651, vehicle, r, g, b); } // 0xB635392A4938B3C3 0x75280015
	static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0x40B9990275E6AD59, vehicle, tint); } // 0x57C51E6BAD752696 0x497C8787
	static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0x71D4F790860F6A5A, vehicle); } // 0x0EE21293DAD47C95 0x13D53892
	static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x95D81D340DBD4B73); } // 0x9D1224004B3A6707 0x625C7B66
	static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xD0473E5605044DD0, vehicle, r, g, b); } // 0xF3CC740D36221548 0x03BC8F1B
	static int _0x6B23426175DF351C(Any p0) { return invoke<int>(0x6B23426175DF351C, p0); } // 0xEEBFC7A7EFDC35B4 0x749DEEA2
	static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xF40697C11608BC1B, vehicle); } // 0xE495D1EF4C91FD20 0x7F8C20DD
	static BOOL _IS_HEADLIGHT_L_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0xAD1C68DAB94FC3DE, vehicle); } // 0x5EF77C9ADD3B11A3 0xA0777943
	static BOOL _IS_HEADLIGHT_R_BROKEN(Vehicle vehicle) { return invoke<BOOL>(0x31A2801C8C55F5A8, vehicle); } // 0xA7ECB73355EB2F20 0xF178390B
	static void _SET_VEHICLE_ENGINE_POWER_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0xD4A0F0F3836A6D73, vehicle, value); } // 0x93A3996368C94158 0xE943B09C
	static void _0xA4CB440834862160(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA4CB440834862160, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D
	static void _0x4DBBB0A855035FEA(Any p0, BOOL p1) { invoke<Void>(0x4DBBB0A855035FEA, p0, p1); } // 0x1F9FB66F3A3842D2 0x4D840FC4
	static Any _0x1D55328B22C1EF02(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x1D55328B22C1EF02, p0, p1, p2, p3, p4, p5, p6); } // 0x54B0F614960F4A5F 0x5AB26C2B
	static void _0xA377DE836CDBE600(Any p0) { invoke<Void>(0xA377DE836CDBE600, p0); } // 0xE30524E1871F481D 0xEF05F807
	static BOOL _0x380410BFAE76AC24(Any p0) { return invoke<BOOL>(0x380410BFAE76AC24, p0); } // 0x291E373D483E7EE7 0xD656E7E5
	static void _SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(Vehicle vehicle, float value) { invoke<Void>(0x944F20E9F10F287A, vehicle, value); } // 0xB59E4BD37AE292DB 0x642DA5AA
	static void _0x4E692C03947D9BCE(Any p0, BOOL p1) { invoke<Void>(0x4E692C03947D9BCE, p0, p1); } // 0x0AD9E8F87FF7C16F 0x04F5546C
	static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xDB02B6E5670FE719, vehicle, state); } // 0xF7EC25A3EBEEC726 0xDAA388E8
	static void _0x06B4BEF074EDABFF(Any p0, float p1) { invoke<Void>(0x06B4BEF074EDABFF, p0, p1); } // 0xF488C566413B4232 0xA25CCB8C
	static void _0x3412E121EC9BF967(Any p0, BOOL p1) { invoke<Void>(0x3412E121EC9BF967, p0, p1); } // 0xC1F981A6F74F0C23 0x00966934
	static void _0xB8DF3E92240D9B10(Any p0, BOOL p1) { invoke<Void>(0xB8DF3E92240D9B10, p0, p1); } // 0x0F3B4D4E43177236 0x113DF5FD
	static float _0x8F66C82B6380FFE7(Any p0) { return invoke<float>(0x8F66C82B6380FFE7, p0); } // 0x6636C535F6CC2725 0x7C8D6464
	static void DISABLE_PLANE_AILERON(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x284DE950327AC39F, p0, p1, p2); } // 0x23428FC53C60919C 0x7E84C45C
	static BOOL _IS_VEHICLE_ENGINE_ON(Vehicle vehicle) { return invoke<BOOL>(0x66697A81EB591EA3, vehicle); } // 0xAE31E7DF9B5B132E 0x7DC6D022
	static void _0x70F11A3E5C119FFF(Any p0, BOOL p1) { invoke<Void>(0x70F11A3E5C119FFF, p0, p1); } // 0x1D97D1E3A70A649F 0xA03E42DF
	static void _SET_BIKE_LEAN_ANGLE(Vehicle vehicle, float x, float y) { invoke<Void>(0xC04D273AF556A363, vehicle, x, y); } // 0x9CFA4896C3A53CBB 0x15D40761
	static void _0xE07FEB47C3650425(Any p0, BOOL p1) { invoke<Void>(0xE07FEB47C3650425, p0, p1); } // 0xAB04325045427AAE 0x1984F88D
	static void _0x1FD3FAFE8FB39830(Any p0) { invoke<Void>(0x1FD3FAFE8FB39830, p0); } // 0xCFD778E7904C255E 0x3FBE904F
	static void _0x4C32D2BF4B899EE1(Any p0) { invoke<Void>(0x4C32D2BF4B899EE1, p0); } // 0xACFB2463CC22BED2 0xD1B71A25
	static Any _0xB45FF62F157332B7() { return invoke<Any>(0xB45FF62F157332B7); } // 0xB2D06FAEDE65B577 0xFEB0C0C8
	static void _0x7DDF374B658064C0() { invoke<Void>(0x7DDF374B658064C0); } // 0xE01903C47C7AC89E
	static void _0x9A9D0A2760186597(Any p0, BOOL p1) { invoke<Void>(0x9A9D0A2760186597, p0, p1); } // 0x02398B627547189C 0x08CD58F9
	static void _SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Any p0, Any p1) { invoke<Void>(0x90023EF3FF099741, p0, p1); } // 0xB893215D8D4C015B 0x8C4B63E2
	static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x40F035E4BB4F5465, vehicle, multiplier); } // 0x93AE6A61BE015BF1 0x569E5AE3
	static void _0xC0C7A9F655DB1456(Any p0, BOOL p1) { invoke<Void>(0xC0C7A9F655DB1456, p0, p1); } // 0x428BACCDF5E26EAD 0x1604C2F5
	static Any _0x5FA9E63D904856AA(Any p0) { return invoke<Any>(0x5FA9E63D904856AA, p0); } // 0x42A4BEB35D372407 0x8CDB0C09
	static Any _0xFCD8222662B249DA(Any p0) { return invoke<Any>(0xFCD8222662B249DA, p0); } // 0x2C8CBFE1EA5FC631 0xABC99E21
	static void _0xF67CE96A454B9E18(Any p0, BOOL p1) { invoke<Void>(0xF67CE96A454B9E18, p0, p1); } // 0x4D9D109F63FEE1D4 0x900C878C
	static void _0x6F61D61AC14DC671(Any p0, BOOL p1) { invoke<Void>(0x6F61D61AC14DC671, p0, p1); } // 0x279D50DE5652D935 0xB3200F72
	static void _0x7C10EBEFB76822D8(Any p0, Any p1) { invoke<Void>(0x7C10EBEFB76822D8, p0, p1); } // 0xE44A982368A4AF23 0xBAE491C7
	static void _0xDAEC2574847445CD() { invoke<Void>(0xDAEC2574847445CD); } // 0xF25E02CB9C5818F8 0xF0E59BC1
	static void _0xA33CFA13B91FFCF7(float p0) { invoke<Void>(0xA33CFA13B91FFCF7, p0); } // 0xBC3CCA5844452B06 0x929801C6
	static void SET_VEHICLE_SHOOT_AT_TARGET(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0xCE0AE0BA5882BDA7, p0, p1, p2, p3, p4); } // 0x74CD9A9327A282EA 0x2343FFDF
	static BOOL _GET_VEHICLE_OWNER(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xC2A3641F9F5120FD, vehicle, entity); } // 0x8F5EBAB1F260CFCE 0x4A557117
	static void _0xB445C1FC8560CB33(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB445C1FC8560CB33, vehicle, p1); } // 0x97CE68CB032583F0 0xE0FC6A32
	static void _0x9A64C27FD8BFC897(Any p0, float p1) { invoke<Void>(0x9A64C27FD8BFC897, p0, p1); } // 0x182F266C2D9E2BEB 0x7D0DE7EA
	static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0xA31761A8F0E32B9D, vehicle); } // 0x9CCC9525BF2408E0 0x65CA9286
	static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x62580637CC8C1B3F, vehicle); } // 0x64473AEFDCF47DCA 0x78122DC1
	static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0xF4CAF05E946FAF1C, vehicle); } // 0xAA0A52D24FB98293 0x7E0D6056
	static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xB38B92302334D84F, vehicle, Toggle); } // 0x89F149B6131E57DA 0x07B2A6DC
	static void _0xF0AA985C2B1AB6F2(BOOL p0) { invoke<Void>(0xF0AA985C2B1AB6F2, p0); } // 0xE6C0C80B8C867537 0xD2B8ACBD
	static Any _0x997D2C90EF8BD862(Any p0) { return invoke<Any>(0x997D2C90EF8BD862, p0); } // 0x36492C2F0D134C56 0xA4A75FCF
	static void _0x3A1062BD6669D40A(Any p0, BOOL p1) { invoke<Void>(0x3A1062BD6669D40A, p0, p1); } // 0x06582AFF74894C75 0x50F89338
	static void _0xCC2960D8DCD2D7E7(Any p0, BOOL p1) { invoke<Void>(0xCC2960D8DCD2D7E7, p0, p1); } // 0xDFFCEF48E511DB48 0xEB7D7C27
	static BOOL _0xA12AF53B37E346C9(Any p0) { return invoke<BOOL>(0xA12AF53B37E346C9, p0); } // 0x8D474C8FAEFF6CDE 0x5EB00A6A
	static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8F4F934F83C7E035, vehicle, toggle); } // 0x983765856F2564F9 0x081DAC12
	static void _0x1E621C51162D89D4(Vehicle vehicle, int p1, int p2) { invoke<Void>(0x1E621C51162D89D4, vehicle, p1, p2); } // 0xF0E4BA16D1DB546C 0x5BD8D82D
	static void _0xA3F0CB9A899FA1EF(Any p0) { invoke<Void>(0xA3F0CB9A899FA1EF, p0); } // 0xF87D9F2301F7D206 0x450AD03A
	static BOOL _0x852BA91F4F2922FF(Any p0) { return invoke<BOOL>(0x852BA91F4F2922FF, p0); } // 0x4198AB0022B15F87 0xBD085DCA
	static BOOL _0x51A83A11622013E5(Any p0) { return invoke<BOOL>(0x51A83A11622013E5, p0); } // 0x755D6D5267CBBD7E 0xABBDD5C6
	static void _0x0905AF570F70C5AF(Any p0, BOOL p1) { invoke<Void>(0x0905AF570F70C5AF, p0, p1); } // 0x0CDDA42F9E360CA6 0x9B581DE7
	static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0xB1748D5D7F598D5E, vehicle); } // 0x4AF9BD80EEBEB453 0x20B61DDE
	static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0xB862D2A317F182C4, vehicle, isStolen); } // 0x67B2C79AA7FF5738 0x70912E42
	static void _0xA40C73E4F5016481(Any p0, float p1) { invoke<Void>(0xA40C73E4F5016481, p0, p1); } // 0xAD2D28A1AFDFF131 0xED159AE6
	static BOOL _0xC4849E7AD5CB8088(Any p0) { return invoke<BOOL>(0xC4849E7AD5CB8088, p0); } // 0x5991A01434CE9677 0xAF8CB3DF
	static void _0xF04AE5003DE2D48B(Any p0) { invoke<Void>(0xF04AE5003DE2D48B, p0); } // 0xB264C4D2F2B0A78B 0x45F72495
	static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x66C04FBB440CD496, vehicle, cargobob); } // 0x0E21D3DF1051399D 0x83D3D331
	static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0x5EFFEB9E410B785A, vehicle); } // 0xADF7BE450512C12F 0x50E0EABE
	static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { return invoke<BOOL>(0xC4273BA868B55B6F, vehicle, cargobob); } // 0xD40148F22E81A1D9 0x5DEEC76C
	static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0xAB5158711CF6B132, cargobob); } // 0x873B82D42AC2B9E5 0x301A1D24
	static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0x55D7217DFAB1BCF5, vehicle, cargobob, p2, x, y, z); } // 0x4127F1D84E347769 0x607DC9D5
	static void _0x2CB99BC846028014(Any p0, BOOL p1) { invoke<Void>(0x2CB99BC846028014, p0, p1); } // 0x571FEB383F629926
	static Vector3 _0x71082BC3E561BDBF(Any p0) { return invoke<Vector3>(0x71082BC3E561BDBF, p0); } // 0xCBDB9B923CACC92D
	static BOOL _IS_CARGOBOB_HOOK_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0x2CEA05E9BFD176CB, cargobob); } // 0x1821D91AD4B56108 0xAF769B81
	static void _ENABLE_CARGOBOB_HOOK(Vehicle cargobob, int state) { invoke<Void>(0x2A1B9ED42C98D332, cargobob, state); } // 0x7BEB0C7A235F6F3B 0x4D3C9A99
	static void _RETRACT_CARGOBOB_HOOK(Vehicle cargobob) { invoke<Void>(0x656DA642D4934FEB, cargobob); } // 0x9768CF648F54C804 0xA8211EE9
	static void _0x9D2B2C963B5694E2(Any p0, float p1, float p2, BOOL p3) { invoke<Void>(0x9D2B2C963B5694E2, p0, p1, p2, p3); } // 0x877C1EAEAC531023 0x3A8AB081
	static void _0x2B28AB8AE11EA232(Any p0, float p1) { invoke<Void>(0x2B28AB8AE11EA232, p0, p1); } // 0xCF1182F682F65307
	static BOOL _IS_CARGOBOB_MAGNET_ACTIVE(Vehicle cargobob) { return invoke<BOOL>(0x19E97C9ED3C171A0, cargobob); } // 0x6E08BF5B3722BAC9
	static void _CARGOBOB_MAGNET_GRAB_VEHICLE(Vehicle cargobob, BOOL Grab) { invoke<Void>(0x6F159F854E468C7B, cargobob, Grab); } // 0x9A665550F8DA349B
	static void _0x182BBAF16B1644AB(Any p0, float p1) { invoke<Void>(0x182BBAF16B1644AB, p0, p1); } // 0xBCBFCD9D1DAC19E2
	static void _0xC02FF34D1789AD61(Any p0, float p1) { invoke<Void>(0xC02FF34D1789AD61, p0, p1); } // 0xA17BAD153B51547E
	static void _0x55637CD2F2E9A881(Any p0, float p1) { invoke<Void>(0x55637CD2F2E9A881, p0, p1); } // 0x66979ACF5102FD2F
	static void _0xB3738CB480FB1946(Any p0, float p1) { invoke<Void>(0xB3738CB480FB1946, p0, p1); } // 0x6D8EAC07506291FB
	static void _0x677251E7D7014519(Any p0, float p1) { invoke<Void>(0x677251E7D7014519, p0, p1); } // 0xED8286F71A819BAA
	static void _0x82E74F95E3AD3BD0(Any p0, float p1) { invoke<Void>(0x82E74F95E3AD3BD0, p0, p1); } // 0x685D5561680D088B
	static void _0x1187CF40C6EE42DC(Any p0, Any p1) { invoke<Void>(0x1187CF40C6EE42DC, p0, p1); } // 0xE301BD63E9E13CF0
	static void _0xA184CACA291E5711(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xA184CACA291E5711, p0, p1, p2); } // 0x9BDDC73CC6A115D4
	static void _0xF9DC93368262380D(Any p0, BOOL p1) { invoke<Void>(0xF9DC93368262380D, p0, p1); } // 0x56EB5E94318D3FB6
	static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0x76DF510F297CBDFF, vehicle); } // 0x25ECB9F8017D98E0 0xB2E1E1FB
	static void _0x93094DE94E79FC40(Any p0, BOOL p1) { invoke<Void>(0x93094DE94E79FC40, p0, p1); } // 0x2C4A1590ABF43E8B 0x2EC19A8B
	static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x91A62B40FF361CB9, disabled, weaponHash, vehicle, owner); } // 0xF4FC6A6F67D8D856 0xA688B7D1
	static void _0x957B00CE7A591213(Any p0, BOOL p1) { invoke<Void>(0x957B00CE7A591213, p0, p1); } // 0xE05DD0E9707003A3 0x123E5B90
	static void _0x1AA196C9F812B1A2(Any p0, BOOL p1) { invoke<Void>(0x1AA196C9F812B1A2, p0, p1); } // 0x21115BCD6E44656A 0xEBC225C1
	static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0x4B3E5A1788E16496, vehicle); } // 0x29439776AAA00A62 0xC025338E
	static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xE323FBF00D4F7C8F, modelHash); } // 0xDEDF1C8BD47C2200 0xEA469980
	static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0x52BD7115F4A47CE3, vehicle); } // 0xBCDF8BAF56C87B6A 0xDE86447D
	static void _0x4DF5C4A805B59F5D(Any p0, BOOL p1) { invoke<Void>(0x4DF5C4A805B59F5D, p0, p1); } // 0x300504B23BD3B711 0x5130DB1E
	static void _0x97C0FF7E9EACBB6D(Any p0, float p1) { invoke<Void>(0x97C0FF7E9EACBB6D, p0, p1); } // 0xE5810AC70602F2F5 0xB6BE07E0
	static void _0x32A9165DBB8D795A(Any p0, BOOL p1) { invoke<Void>(0x32A9165DBB8D795A, p0, p1); } // 0x068F64F2470F9656 0x4BB5605D
	static void _0x947A1DA90E304FF3(Any p0, BOOL p1) { invoke<Void>(0x947A1DA90E304FF3, p0, p1); } // 0xB8FBC8B1330CA9B4 0x51E0064F
	static void _0x1C2B640A8809D6DB(Any p0, Any p1) { invoke<Void>(0x1C2B640A8809D6DB, p0, p1); } // 0x10655FAB9915623D
	static void _0xDB79306F3C2639F3(Any p0, Any p1) { invoke<Void>(0xDB79306F3C2639F3, p0, p1); } // 0x79DF7E806202CE01 0xAEF9611C
	static void _0xF0D840D873C43572(Any p0, float p1) { invoke<Void>(0xF0D840D873C43572, p0, p1); } // 0x9007A2F21DC108D4 0x585E49B6
	static void _SET_HELICOPTER_ROLL_PITCH_YAW_MULT(Vehicle helicopter, float multiplier) { invoke<Void>(0x257EEB9C5FACBEDD, helicopter, multiplier); } // 0x6E0859B530A365CC 0x6E67FD35
	static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0x5ACBC81E60CDE51D, vehicle, friction); } // 0x1837AF7C627009BA 0x32AFD42E
	static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Any p0, BOOL p1) { invoke<Void>(0xE59575A9A48238B0, p0, p1); } // 0xA37B9A517B133349 0x670913A4
	static BOOL _0x154698E8DBB92D7B(Any p0, BOOL p1) { return invoke<BOOL>(0x154698E8DBB92D7B, p0, p1); } // 0xF78F94D60248C737
	static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float p1) { invoke<Void>(0x9026B3F5F52ECFAF, vehicle, p1); } // 0xA46413066687A328 0x98A10A86
	static void _0x4E009986B6954292(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x4E009986B6954292, vehicle, toggle); } // 0x5E569EC46EC21CAE 0xBC649C49
	static void _0x8C8168AA84E0F45E(Any p0) { invoke<Void>(0x8C8168AA84E0F45E, p0); } // 0x6D6AF961B72728AE 0x8DD9AA0C
	static BOOL DOES_VEHICLE_EXIST_WITH_DECORATOR(char* decorator) { return invoke<BOOL>(0xFB21CC81CC5D4FB5, decorator); } // 0x956B409B984D9BF7 0x39E68EDD
	static void _0xCB8408E5403AACC4(Any p0, BOOL p1) { invoke<Void>(0xCB8408E5403AACC4, p0, p1); } // 0x41062318F23ED854 0xAA8BD440
	static void _SET_EXCLUSIVE_DRIVER(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0x9791491B4676D938, vehicle, p1, p2); } // 0xB5C51B5502E85E83
	static void _0x838E4039465E2173(Vehicle vehicle, Any p1) { invoke<Void>(0x838E4039465E2173, vehicle, p1); } // 0x500873A45724C863
	static void _0x28AA9A15D099EF19(Vehicle vehicle, BOOL p1) { invoke<Void>(0x28AA9A15D099EF19, vehicle, p1); } // 0xB055A34527CB8FD7
	static void _0x2D04AC5E0002FE53(BOOL p0) { invoke<Void>(0x2D04AC5E0002FE53, p0); } // 0xF796359A959DF65D 0xB5CC548B
	static void _SET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x4FD36E73DE133D3F, vehicle, r, g, b); } // 0x8E0A582209A62695
	static void _GET_VEHICLE_NEON_LIGHTS_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x7C2F17D7A0663F15, vehicle, r, g, b); } // 0x7619EEE8C886757F
	static void _SET_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x2706D464EB8463E7, vehicle, index, toggle); } // 0x2AA720E4287BF269
	static BOOL _IS_VEHICLE_NEON_LIGHT_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x2C876F34337848DC, vehicle, index); } // 0x8C4B92553E4766A5
	static void _0xE83D02082B819FE8(BOOL p0) { invoke<Void>(0xE83D02082B819FE8, p0); } // 0x35E0654F4BAD7971
	static void _0xE5690025563A69CF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xE5690025563A69CF, vehicle, p1); } // 0xB088E9A47AE6EDD5
	static void _0xF494CD83220F62B6(Vehicle vehicle) { invoke<Void>(0xF494CD83220F62B6, vehicle); } // 0xDBA3C090E3D74690
	static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x0E4A675C772CB8F4, vehicle); } // 0xF271147EB7B40F12 0x2B2FCC28
	static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0xF0EC914051EF39CF, vehicle, value); } // 0xB77D05AC8C78AADB 0x920C2517
	static void _0x89AAD03835350357(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0x89AAD03835350357, vehicle, p1, p2); } // 0xDF7E3EEB29642C38
	static float _GET_VEHICLE_SUSPENSION_HEIGHT(Vehicle vehicle) { return invoke<float>(0xA6D729887378D145, vehicle); } // 0x53952FD2BAA19F17 0xB73A1486
	static void _0x20A7A6EA37266FD8(float p0) { invoke<Void>(0x20A7A6EA37266FD8, p0); } // 0x84FD40F56075E816
	static void _0xC57FA05DCBAF7CD9(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC57FA05DCBAF7CD9, vehicle, p1); } // 0xA7DCDF4DED40A8F4
	static float _GET_VEHICLE_BODY_HEALTH_2(Any p0) { return invoke<float>(0xE45AA36AB399E8E7, p0); } // 0xB8EF61207C2393A9
	static BOOL _0xAFE27CAFFE8ADAC7(Any p0) { return invoke<BOOL>(0xAFE27CAFFE8ADAC7, p0); } // 0xD4C4642CB7F50B5D
	static void _0x99B8C3173B55EC20(Any p0, BOOL p1) { invoke<Void>(0x99B8C3173B55EC20, p0, p1); } // 0xC361AA040D6637A8
	static void _0x2C68EC55C7EFE6F6(Any p0, BOOL p1) { invoke<Void>(0x2C68EC55C7EFE6F6, p0, p1); } // 0x99C82F8A139F3E4E
	static void _0xB6667017F1D97385(Any p0, BOOL p1) { invoke<Void>(0xB6667017F1D97385, p0, p1); } // 0xE16142B94664DEFD
}

namespace OBJECT
{
	static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0x8C15E6EC0BC9B4BE, modelHash, x, y, z, networkHandle, createHandle, dynamic); } // 0x509D5878EB39E842 0x2F7AA05C
	static Object CREATE_OBJECT_NO_OFFSET(Hash objectHash, float posX, float posY, float posZ, BOOL networkHandle, BOOL createHandle, BOOL dynamic) { return invoke<Object>(0x9F532DC7E7245BF9, objectHash, posX, posY, posZ, networkHandle, createHandle, dynamic); } // 0x9A294B2138ABB884 0x58040420
	static void DELETE_OBJECT(Object* object) { invoke<Void>(0xD4E454973E16D31B, object); } // 0x539E0AE3E6634B9F 0xD6EF9DA7
	static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Any object) { return invoke<BOOL>(0x2362E566202FE802, object); } // 0x58A850EAEE20FAA3 0x8F95A20B
	static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collisionCheck) { return invoke<BOOL>(0x8C42214330E3CD97, object, toX, toY, toZ, speedX, speedY, speedZ, collisionCheck); } // 0x2FDFF4107B8C1147 0x63BFA7A0
	static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0x3E6AED30E1261C44, object, targettable); } // 0x8A7391690F5AFD81 0x3F88CD86
	static void _0xCEA4A8A8B0373083(Any p0, BOOL p1) { invoke<Void>(0xCEA4A8A8B0373083, p0, p1); } // 0x77F33F2CCF64B3AA 0x483C5C88
	static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL p5, BOOL p6, BOOL p7) { return invoke<Object>(0xEE756BAA02761E84, x, y, z, radius, modelHash, p5, p6, p7); } // 0xE143FA2249364369 0x45619B33
	static BOOL HAS_OBJECT_BEEN_BROKEN(Object object) { return invoke<BOOL>(0x446519DBCF76642D, object); } // 0x8ABFB70C49CC43E2 0xFE21F891
	static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<BOOL>(0x00C8DB6A5EC381C7, p0, p1, p2, p3, p4, p5); } // 0x761B0E69AC4D007E 0x6FC0353D
	static BOOL _0x50A7AF984ABB9090(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<BOOL>(0x50A7AF984ABB9090, p0, p1, p2, p3, p4, p5); } // 0x46494A2475701343 0x7DB578DD
	static Vector3 _GET_OBJECT_OFFSET_FROM_COORDS(float x, float y, float z, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xF919633EBD0639D0, x, y, z, heading, xOffset, yOffset, zOffset); } // 0x163E252DE035A133 0x87A42A12
	static Any _0xCC9A6B9085D31C27(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return invoke<Any>(0xCC9A6B9085D31C27, coords, radius, modelHash, x, y, z, p6, p7); } // 0x163F8B586BC95F2A 0x65213FC3
	static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0x57196288096F5B83, type, x, y, z, locked, heading, p6); } // 0xF82D8F1926A02C3D 0x38C951A4
	static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xA6937686FC4EB3E2, type, x, y, z, locked, heading); } // 0xEDC1A5B84AEF33FF 0x4B44A83D
	static void _DOOR_CONTROL(Hash doorHash, float x, float y, float z, BOOL locked, float p5, float p6, float p7) { invoke<Void>(0x0A68276D9EBE091F, doorHash, x, y, z, locked, p5, p6, p7); } // 0x9B12F9A24FABEDB0 0x4E0A260B
	static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x9053753949C172D6, doorHash, modelHash, x, y, z, p5, p6, p7); } // 0x6F8838D03D1DC226 0x9D2D778D
	static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash) { invoke<Void>(0x0F0E3F0F32F8E90E, doorHash); } // 0x464D8E1427156FE4 0x00253286
	static void _0x31DB7F67CAF7CCFA(Hash doorHash, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x31DB7F67CAF7CCFA, doorHash, p1, p2, p3); } // 0x6BAB9442830C7F53 0xDF83DB47
	static Any _0xD0B2BAA0C5BEC749(Hash doorHash) { return invoke<Any>(0xD0B2BAA0C5BEC749, doorHash); } // 0x160AA1B32F6139B8 0xD42A41C2
	static Any _0x83054FDFB4CC550F(Any p0) { return invoke<Any>(0x83054FDFB4CC550F, p0); } // 0x4BC2854478F3A749 0xD649B7E1
	static void _0x08333ABD231888C2(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0x08333ABD231888C2, doorHash, p1, p2, p3); } // 0x03C27E13B42A0E82 0x4F44AF21
	static void _0x6079537D3C03C964(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0x6079537D3C03C964, doorHash, p1, p2, p3); } // 0x9BA001CB45CBF627 0x47531446
	static void _0xDDAACCFB9CA1B68D(Hash doorHash, float p1, BOOL p2, BOOL p3) { invoke<Void>(0xDDAACCFB9CA1B68D, doorHash, p1, p2, p3); } // 0xB6E6FBA95C7324AC 0x34883DE3
	static float _0x53619EEB264FC781(Hash doorHash) { return invoke<float>(0x53619EEB264FC781, doorHash); } // 0x65499865FCA6E5EC 0xB74C3BD7
	static void _0xD4E630BC30D1EC38(Hash doorHash, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xD4E630BC30D1EC38, doorHash, p1, p2, p3); } // 0xC485E07E4F0B7958 0xB4A9A558
	static void _0x7CE752226FD02AE0(Hash doorHash, BOOL p1) { invoke<Void>(0x7CE752226FD02AE0, doorHash, p1); } // 0xD9B71952F78A2640 0xECE58AE0
	static void _0x945A4E0EA391CBFF(Hash doorHash, BOOL p1) { invoke<Void>(0x945A4E0EA391CBFF, doorHash, p1); } // 0xA85A21582451E951 0xF736227C
	static BOOL _0x17C7D2D5A8AF4A62(Hash doorHash) { return invoke<BOOL>(0x17C7D2D5A8AF4A62, doorHash); } // 0xC153C43EA202C8C1 0x5AFCD8A1
	static BOOL IS_DOOR_CLOSED(Hash door) { return invoke<BOOL>(0x433D912D5FF4E875, door); } // 0xC531EE8A1145A149 0x48659CD7
	static void _0xE129747F856874C7(BOOL p0) { invoke<Void>(0xE129747F856874C7, p0); } // 0xC7F29CA00F46350E 0x9BF33E41
	static void _0x6A4F3AA913BBC5B8() { invoke<Void>(0x6A4F3AA913BBC5B8); } // 0x701FDA1E82076BA4 0xF592AD10
	static BOOL _0x3FA88A2FF1FB78EC(Any p0) { return invoke<BOOL>(0x3FA88A2FF1FB78EC, p0); } // 0xDF97CDD4FC08FD34 0x17FF9393
	static BOOL _0xF8EAFE0B753C400D(float p0, float p1, float p2, Any p3, Any* p4) { return invoke<BOOL>(0xF8EAFE0B753C400D, p0, p1, p2, p3, p4); } // 0x589F80B325CC82C5 0xE9AE494F
	static BOOL IS_GARAGE_EMPTY(Any garage, BOOL p1, int p2) { return invoke<BOOL>(0xEF9C07A133918E25, garage, p1, p2); } // 0x90E47239EA1980B8 0xA8B37DEA
	static BOOL _0x5559EA6A6D952A7A(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0x5559EA6A6D952A7A, p0, p1, p2, p3); } // 0x024A60DEB0EA69F0 0xC33ED360
	static BOOL _0x13001F98083422CF(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x13001F98083422CF, p0, p1, p2); } // 0x1761DC5D8471CBAA 0x41924877
	static BOOL _0x451ADA2E1F8552B3(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x451ADA2E1F8552B3, p0, p1, p2, p3, p4); } // 0x85B6C850546FDDE2 0x4BD59750
	static BOOL _0x06F0EBFDF2BE4E57(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x06F0EBFDF2BE4E57, p0, p1, p2, p3, p4); } // 0x673ED815D6E323B7 0x7B44D659
	static BOOL _0xCEEBEA8499C0B857(Any p0, Any p1, float p2, Any p3) { return invoke<BOOL>(0xCEEBEA8499C0B857, p0, p1, p2, p3); } // 0x372EF6699146A1E4 0x142C8F76
	static BOOL _0x3B5EFF5EF6E43E68(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x3B5EFF5EF6E43E68, p0, p1, p2); } // 0xF0EED5A6BC7B237A 0x95A9AB2B
	static void _0x622B65420EF2555F(Any p0, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x622B65420EF2555F, p0, p1, p2, p3, p4); } // 0x190428512B240692 0xA565E27E
	static void _0x53FA0D2B5A184D33(Any p0, BOOL p1) { invoke<Void>(0x53FA0D2B5A184D33, p0, p1); } // 0xF2E1A7133DD356A6 0x43BB7E48
	static void _0x7A5C4394D364F0AE() { invoke<Void>(0x7A5C4394D364F0AE); } // 0x66A49D021870FE88 0x6158959E
	static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0x3CADAC7418851926, x, y, z, radius, hash, p5); } // 0xBFA48E2FF417213F 0x23FF2BA4
	static BOOL IS_POINT_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xB84E12C6EBFF63A4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x2A70BAE8883E4C81 0x73BCFFDC
	static void _0x33897F1660BD1703(Any p0, BOOL p1) { invoke<Void>(0x33897F1660BD1703, p0, p1); } // 0x4D89D607CB3DD1D2 0x19B17769
	static void SET_OBJECT_PHYSICS_PARAMS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { invoke<Void>(0x94D1E7548565F807, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xF6DF6E90DE7DF90F 0xE8D11C58
	static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0x335DD31857F9D599, p0, p1); } // 0xB6FBFD079B8D0596 0xF0B330AD
	static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Any p0, BOOL p1) { invoke<Void>(0x351E04F63B74E221, p0, p1); } // 0x406137F8EF90EAF5 0x3E263AE1
	static BOOL IS_ANY_OBJECT_NEAR_POINT(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xDADCC8A8DA94F002, p0, p1, p2, p3, p4); } // 0x397DC58FF00298D1 0xE9E46941
	static BOOL IS_OBJECT_NEAR_POINT(Hash p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xC5675411BBF3198A, p0, p1, p2, p3, p4); } // 0x8C90FE4B381BA60A 0x50A62C43
	static void _0xA5D9C54FEE9D6303(Any p0) { invoke<Void>(0xA5D9C54FEE9D6303, p0); } // 0x4A39DB43E47CF3AA 0xE3261B35
	static void _0x2430A5958C9B6F86(Object p0, Any p1, BOOL p2) { invoke<Void>(0x2430A5958C9B6F86, p0, p1, p2); } // 0xE7E4C198B0185900 0x1E82C2AE
	static void _0xA6AAAD4EAC56D826(Object object) { invoke<Void>(0xA6AAAD4EAC56D826, object); } // 0xF9C1681347C8BD15
	static void TRACK_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xD033824AEAC999BE, p0); } // 0xB252BC036B525623 0x46D06B9A
	static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0x1B93A6975F1736AC, object); } // 0x8B32ACE6326A7546 0xF4FD8AE4
	static void _0x7B498ADFE4D737C2(Any p0, BOOL p1) { invoke<Void>(0x7B498ADFE4D737C2, p0, p1); } // 0xC6033D32241F6FB5 0xF4A1A14A
	static void _0xE9B70141E62151B0(Any p0, BOOL p1) { invoke<Void>(0xE9B70141E62151B0, p0, p1); } // 0xEB6F1A9B5510A5D2 0xAF016CC1
	static void _0x20E5BC7E74051A87(Any p0, BOOL p1) { invoke<Void>(0x20E5BC7E74051A87, p0, p1); } // 0xBCE595371A5FBAAF 0x3A68AA46
	static Any _0x91C430098CF0ECF4(float x, float y, float z, float p3, char* p4) { return invoke<Any>(0x91C430098CF0ECF4, x, y, z, p3, p4); } // 0xB48FCED898292E52 0xA286DE96
	static void _0x155484DD85F33A5A(Any p0, Any p1) { invoke<Void>(0x155484DD85F33A5A, p0, p1); } // 0x5C29F698D404C5E1 0x21F51560
	static Any _0x9BD984EF5AC08BF0(Any p0) { return invoke<Any>(0x9BD984EF5AC08BF0, p0); } // 0x899BA936634A322E 0xF1B8817A
	static BOOL _0xCEE59076320AEF0B(Any p0) { return invoke<BOOL>(0xCEE59076320AEF0B, p0); } // 0x52AF537A0C5B8AAD 0xE08C834D
	static float _0xE0BAFCDAA6B3A7AD(Any p0) { return invoke<float>(0xE0BAFCDAA6B3A7AD, p0); } // 0x260EE4FDBDF4DB01 0x020497DE
	static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0x9052F866958BB3C9, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); } // 0xFBA08C503DD5FA58 0x5E14DF68
	static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int p7, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xACF3D40E8871C5BF, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, p7, amount, p9, p10, modelHash); } // 0x891804727E0A98B7 0xF015BFE2
	static Pickup CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Pickup>(0x9A2A0A6F8D313E19, pickupHash, posX, posY, posZ, p4, value, modelHash, p7, p8); } // 0x673966A0C0FD7171 0x17B99CE7
	static Pickup CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Any p5) { return invoke<Pickup>(0x914CCD68BC9B3DF2, pickupHash, x, y, z, placeOnGround, p5); } // 0x2EAF1FDB2FB55698 0x8C886BE5
	static Pickup _CREATE_UNK1_PICKUP(Hash pickupType, float x, float y, float z, BOOL p4, Hash modelHash) { return invoke<Pickup>(0x85232352456CECC0, pickupType, x, y, z, p4, modelHash); } // 0x125494B98A21AAF7 0x56A02502
	static void ATTACH_PORTABLE_PICKUP_TO_PED(Ped ped, Any p1) { invoke<Void>(0x41900E3C3F9226E1, ped, p1); } // 0x8DC39368BDD57755 0x184F6AB3
	static void DETACH_PORTABLE_PICKUP_FROM_PED(Ped ped) { invoke<Void>(0x3B234E6141C7F6C3, ped); } // 0xCF463D1E9A0AECB1 0x1D094562
	static void _0x3C4B79CAC07FF64D(Any p0, Any p1) { invoke<Void>(0x3C4B79CAC07FF64D, p0, p1); } // 0x0BF3B3BD47D79C08 0x7EFBA039
	static void _0x2BC407182CE3542C(BOOL p0) { invoke<Void>(0x2BC407182CE3542C, p0); } // 0x78857FC65CADB909 0xA3CDF152
	static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, Any p3, Any p4) { return invoke<Vector3>(0x3DBD622A19621A7A, x, y, z, p3, p4); } // 0x6E16BC2503FF1FF0 0x618B5F67
	static Vector3 GET_PICKUP_COORDS(Any p0) { return invoke<Vector3>(0x53F6B08EB743B23F, p0); } // 0x225B8B35C88029B3 0xC2E1E2C5
	static void REMOVE_ALL_PICKUPS_OF_TYPE(Any p0) { invoke<Void>(0x3C6BA20583DB41EE, p0); } // 0x27F9D613092159CF 0x40062C53
	static BOOL HAS_PICKUP_BEEN_COLLECTED(Any p0) { return invoke<BOOL>(0x1F98901CBCC9CE78, p0); } // 0x80EC48E6679313F9 0x0BE5CCED
	static void REMOVE_PICKUP(Any p0) { invoke<Void>(0x55E35CCCD4847E94, p0); } // 0x3288D8ACAECD2AB2 0x64A7A0E0
	static void CREATE_MONEY_PICKUPS(float xCoord, float yCoord, float zCoord, int value, int p4, Any p5) { invoke<Void>(0xAA5367117911FD13, xCoord, yCoord, zCoord, value, p4, p5); } // 0x0589B5E791CE9B2B 0x36C9A5EA
	static BOOL DOES_PICKUP_EXIST(Any p0) { return invoke<BOOL>(0xA2BDDAEAA1C5ED8F, p0); } // 0xAFC1CA75AD4074D1 0x9C6DA0B3
	static BOOL DOES_PICKUP_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xBB5E1546507633BF, p0); } // 0xD9EFB6DBF7DAAEA3 0xE0B32108
	static Any GET_PICKUP_OBJECT(Any p0) { return invoke<Any>(0xCC6AF77F177139B9, p0); } // 0x5099BC55630B25AE 0x6052E62E
	static BOOL _0x55481BFB341912B4(Any p0) { return invoke<BOOL>(0x55481BFB341912B4, p0); } // 0x0378C08504160D0D
	static BOOL _IS_PICKUP_WITHIN_RADIUS(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0x3619398AF98BDC4C, pickupHash, x, y, z, radius); } // 0xF9C36251F6E48E33 0xF139681B
	static void SET_PICKUP_REGENERATION_TIME(Any p0, Any p1) { invoke<Void>(0x8DED98FE3110065B, p0, p1); } // 0x78015C9B4B3ECC9D 0xAB11267D
	static void _0x2E6B496CAB0B78B3(Any p0, Any p1, BOOL p2) { invoke<Void>(0x2E6B496CAB0B78B3, p0, p1, p2); } // 0x616093EC6B139DD9 0x7FADB4B9
	static void _0x8A3613525FEE0E3F(Any p0, BOOL p1) { invoke<Void>(0x8A3613525FEE0E3F, p0, p1); } // 0x88EAEC617CD26926 0x3A8F1BF7
	static void SET_TEAM_PICKUP_OBJECT(Any p0, Any p1, BOOL p2) { invoke<Void>(0x63BEEF02C62979A6, p0, p1, p2); } // 0x53E0DF1A2A3CF0CA 0x77687DC5
	static void _0x2E9DAE56D293B951(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x2E9DAE56D293B951, p0, p1, p2); } // 0x92AEFB5F6E294023 0xCBB5F9B6
	static void _0xE9AB8A0855082C3D(Any p0, float p1, BOOL p2) { invoke<Void>(0xE9AB8A0855082C3D, p0, p1, p2); } // 0xA08FE5E49BDC39DD 0x276A7807
	static Any _0xEDAF994400614226(Any p0) { return invoke<Any>(0xEDAF994400614226, p0); } // 0xDB41D07A45A6D4B7 0x000E92DC
	static void _0xCFBA4D985969F20C(float p0) { invoke<Void>(0xCFBA4D985969F20C, p0); } // 0x318516E02DE3ECE2 0x9879AC51
	static void _0x7383F8E1F93C2931(BOOL p0) { invoke<Void>(0x7383F8E1F93C2931, p0); } // 0x31F924B53EADDF65 0xDB18FA01
	static void _0xB6CA9CC6B6A2DB54(Any p0, Any p1) { invoke<Void>(0xB6CA9CC6B6A2DB54, p0, p1); } // 0xF92099527DB8E2A7 0xA7E936FD
	static void _0x8038163D2EFF46BB() { invoke<Void>(0x8038163D2EFF46BB); } // 0xA2C1F5E92AFE49ED 0xB241806C
	static void _0xA4E49B1E5C38FDF1(Any p0) { invoke<Void>(0xA4E49B1E5C38FDF1, p0); } // 0x762DB2D380B48D04 0xD1BAAFB7
	static void _0x5A180883AA43E368(float x, float y, float z, Any p3) { invoke<Void>(0x5A180883AA43E368, x, y, z, p3); } // 0x3430676B11CDF21D 0x63B02FAD
	static void _0x7603F0AA56AF9F4E(Any p0, BOOL p1) { invoke<Void>(0x7603F0AA56AF9F4E, p0, p1); } // 0xB2D0BDE54F0E8E5A 0x132B6D92
	static Hash _0xED83F36A80837F09(Any p0) { return invoke<Hash>(0xED83F36A80837F09, p0); } // 0x08F96CA6C551AD51 0xEDD01937
	static BOOL _0x68E810C61B9EA43A(Any p0) { return invoke<BOOL>(0x68E810C61B9EA43A, p0); } // 0x11D1E53A726891FE
	static void _0xC458A08CD3A1B8FB(Any p0, Any p1) { invoke<Void>(0xC458A08CD3A1B8FB, p0, p1); } // 0x971DA0055324D033
	static Any _0x90221F8831C7F753(Any p0) { return invoke<Any>(0x90221F8831C7F753, p0); } // 0x5EAAD83F8CFB4575 0x6AE36192
	static void SET_FORCE_OBJECT_THIS_FRAME(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDC796175F9A3EDD1, p0, p1, p2, p3); } // 0xF538081986E49E9D 0x3DA41C1A
	static void _MARK_OBJECT_FOR_DELETION(Object object) { invoke<Void>(0x2B23A4981329400D, object); } // 0xADBE4809F19F927A 0x2048A7DD
}

namespace AI
{
	static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0x82606438816C878C, ped, ms); } // 0xE73A266DB0CA9042 0x17A64668
	static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x39FD98334BDB065B, ped, time); } // 0x919BE13EED931959 0x6F80965D
	static void TASK_JUMP(Ped ped, BOOL p1) { invoke<Void>(0xC7B047BE0D84BCBD, ped, p1); } // 0x0AE4086104E067B1 0x0356E3CE
	static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xC2EA5B4B2052D2F1, ped, duration); } // 0x3EB1FE9E8E908E15 0x9CF1C19B
	static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, Any p3, Any p4) { invoke<Void>(0xF504D2C6A132D1E5, ped, duration, facingPed, p3, p4); } // 0xF2EAB31979A7F910 0x8DCC19C5
	static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xF635FDC99B9EDCFD, ped, duration); } // 0xA98FCAFD7893C834 0x3AA39BE9
	static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int doorIndex, float speed) { invoke<Void>(0x414F8CCF85A62A2F, ped, vehicle, timeOut, doorIndex, speed); } // 0x965791A9A488A062 0x8EE06BF4
	static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int p5, Any* p6) { invoke<Void>(0x65682335D54DEA1C, ped, vehicle, timeout, seat, speed, p5, p6); } // 0xC20E50AA46D09CA8 0xB8689B4E
	static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0x663F1B23D2C4D20A, ped, vehicle, flags); } // 0xD3DBCE61A490BE02 0x7B1141C6
	static void _TASK_GET_OFF_BOAT(Ped ped, Any p1) { invoke<Void>(0x9B07F08A0B7B481B, ped, p1); } // 0x9C00E77AF14B2DFF
	static void TASK_SKY_DIVE(Ped ped) { invoke<Void>(0x3DA131D879A18456, ped); } // 0x601736CFE536B0A0 0xD3874AFA
	static void TASK_PARACHUTE(Ped ped, BOOL p1) { invoke<Void>(0x553FB3C497C7A0D3, ped, p1); } // 0xD2F1C53C97EE81AB 0xEC3060A2
	static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x939DB0E588B9D9E5, ped, x, y, z); } // 0xB33E291AFA6BD03A 0xE0104D6C
	static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xD4887516CA6F35D4, ped, x, y, z); } // 0xC313379AF0FCEDA7 0x6ED3AD81
	static void SET_PARACHUTE_TASK_THRUST(Any p0, float p1) { invoke<Void>(0x0C3BEDE0C197564E, p0, p1); } // 0x0729BAC1B8C64317 0xD07C8AAA
	static void TASK_RAPPEL_FROM_HELI(Ped ped, float p1) { invoke<Void>(0xB2809B0441EEB152, ped, p1); } // 0x09693B0312F91649 0x2C7ADB93
	static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float p10) { invoke<Void>(0x8543F365CDBCAAAD, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, p10); } // 0xE2A2AA2F659D77A7 0xE4AC0387
	static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0x539625713B296D81, ped, vehicle, x, y, z, speed, driveMode, stopRange); } // 0x158BB33F920D360C 0x1490182A
	static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0xE81313E76FEC1E97, ped, vehicle, speed, drivingStyle); } // 0x480142959D337D00 0x36EC0EB0
	static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int p6, float stoppingRange, BOOL p8) { invoke<Void>(0xE0B41A177C6DAB44, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, p6, stoppingRange, p8); } // 0x304AE42E357B8C7E 0x2DF5A6AC
	static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0x34912824AE482D65, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); } // 0xD76B57B44F1E6F8B 0x80A9E7A7
	static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Entity entity1, Entity entity2, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xF229DE181A594390, entity1, entity2, p2, p3, p4, p5, p6); } // 0x61E360B7E040D12E 0xD26CAC68
	static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0xF78809EA8A08F2D1, ped, heading, timeout); } // 0x93B93A37987F1F3D 0x0A0E9B42
	static void TASK_FLUSH_ROUTE() { invoke<Void>(0xC81BEAB2424612F7); } // 0x841142A1376E9006 0x34219154
	static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0xB7E31A9045BFBB05, x, y, z); } // 0x1E7889778264843A 0x43271F69
	static void TASK_FOLLOW_POINT_ROUTE(Any p0, float p1, Any p2) { invoke<Void>(0x1872D2767A453D21, p0, p1, p2); } // 0x595583281858626E 0xB837C816
	static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float speed, float p5, int p6) { invoke<Void>(0xD0153915878AE371, entity, target, duration, distance, speed, p5, p6); } // 0x6A071245EB0D1882 0x374827C2
	static void TASK_SMART_FLEE_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0x29F2993666F68F46, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x94587F17E9C365D5 0xB2E686FC
	static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float distance, Any fleeTime, BOOL p4, BOOL p5) { invoke<Void>(0x4B79E06845D63B96, ped, fleeTarget, distance, fleeTime, p4, p5); } // 0x22B0D0E37CCB840D 0xE52EB560
	static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0x2503D41AAE96ADAF, ped, fleeTarget); } // 0x72C896464915D1B1 0x8A632BD8
	static void TASK_SHOCKING_EVENT_REACT(Ped ped, Any event) { invoke<Void>(0xD7429AD491051D0D, ped, event); } // 0x452419CBD838065B 0x9BD00ACF
	static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLenght, float timeBetweenWalks) { invoke<Void>(0xA2D63849729F3A91, ped, x, y, z, radius, minimalLenght, timeBetweenWalks); } // 0xE054346CA3A0F315 0xC6981FB9
	static void TASK_WANDER_STANDARD(Ped ped, float p1, int p2) { invoke<Void>(0x5EE92E5069683596, ped, p1, p2); } // 0xBB9CE077274F6A1B 0xAF59151A
	static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0x638E5A39639FFC7F, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); } // 0x0F3E34E968EA374E 0x5C85FF90
	static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash killType, float p3, BOOL p4) { invoke<Void>(0x5094B5CD44B9DED4, killer, target, killType, p3, p4); } // 0xAA5DC05579D60BD9 0x0D64C2FA
	static void TASK_PLANT_BOMB(Ped p0, float x, float y, float z, float degreeAngle) { invoke<Void>(0xE6A0830212441D53, p0, x, y, z, degreeAngle); } // 0x965FEC691D55E9BF 0x33457535
	static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float zeroFloat, int zeroInt, float zeroFloat2) { invoke<Void>(0x33E113E52A91C5C3, ped, x, y, z, speed, timeout, zeroFloat, zeroInt, zeroFloat2); } // 0x15D3A79D4E44B913 0xFE4A10D9
	static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Any p0, float p1, float p2, float p3, float p4, Any p5, float p6, Any p7, float p8, float p9, float p10, float p11) { invoke<Void>(0xEF557F8B8E594B2F, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x17F58B88D085DBAC 0x6BF6E296
	static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0x062FDBC4553DF5FC, ped, Toggle); } // 0x8E06A6FE76C9EFF4 0xB7B7D442
	static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0x61DB2B9143AEF4B7, ped, Toggle); } // 0x77A5B103C87F476E 0x53A879EE
	static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0x02E6BB9727923F46, ped, Toggle); } // 0xE361C5C71C431A4F 0x394B7AC9
	static void _0x8445F407A39AA213(Ped p0, float p1) { invoke<Void>(0x8445F407A39AA213, p0, p1); } // 0x88E32DB8C1A4AA4B 0x55E06443
	static void SET_PED_PATHS_WIDTH_PLANT(Any p0, BOOL p1) { invoke<Void>(0xD8C79D1779A9ECED, p0, p1); } // 0xF35425A4204367EC 0x9C606EE3
	static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x7DAFFA86FFBA209F, ped, toggle); } // 0x38FE1EC73743793C 0x0EA39A29
	static void SET_PED_PATH_AVOID_FIRE(Any p0, BOOL p1) { invoke<Void>(0xE28F94111F2947EA, p0, p1); } // 0x4455517B28441E60 0xDCC5B934
	static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0x42B8ECD694E8A17D, height); } // 0x6C6B148586F934F7 0x2AFB14B8
	static Any GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Any p0, Any* p1, Any* p2) { return invoke<Any>(0xBB6EDE4D8F66A4BB, p0, p1, p2); } // 0xC6F5C0BCDC74D62D 0xD9281778
	static Any GET_NAVMESH_ROUTE_RESULT(Any p0) { return invoke<Any>(0xB2DCBB6150EDACED, p0); } // 0x632E831F382A0FA8 0x96491602
	static BOOL _0x26015B26B8D9B15A(Any p0) { return invoke<BOOL>(0x26015B26B8D9B15A, p0); } // 0x3E38E28A1D80DDF6
	static void TASK_GO_TO_COORD_ANY_MEANS(Any p0, float p1, float p2, float p3, float p4, Any p5, BOOL p6, Any p7, float p8) { invoke<Void>(0x338CE2D3EAA1E395, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x5BC448CB78FA3E88 0xF91DF93B
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped p0, float x, float y, float z, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x451004AE6A7C7F2F, p0, x, y, z, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x1DD45F9ECFDB1BC9 0x094B75EF
	static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, Vector3* position, Any p2, Any p3, Any p4, int drivingStyle, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x5E283DFDBC08291E, ped, position, p2, p3, p4, drivingStyle, p6, p7, p8, p9, p10, p11, p12); } // 0xB8ECD61F531A7B02 0x86DC03F9
	static void TASK_PLAY_ANIM(Ped ped, char* animDictionary, char* animationName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0xDCF460AE46C9489C, ped, animDictionary, animationName, speed, speedMultiplier, duration, flag, playbackRate, lockX, lockY, lockZ); } // 0xEA47FE3719165B94 0x5AB552C6
	static void TASK_PLAY_ANIM_ADVANCED(Ped ped, char* animDict, char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float speed, float speedMultiplier, int duration, Any flag, float animTime, Any p14, Any p15) { invoke<Void>(0xCECFBDAE08977579, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, speed, speedMultiplier, duration, flag, animTime, p14, p15); } // 0x83CDB10EA29B370B 0x3DDEB0E6
	static void STOP_ANIM_TASK(Ped ped, char* animDictionary, char* animationName, float p3) { invoke<Void>(0x91BC1C1D86377CB9, ped, animDictionary, animationName, p3); } // 0x97FF36A1D40EA00A 0x2B520A57
	static void TASK_SCRIPTED_ANIMATION(Ped ped, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0x260577C35A7A710E, ped, p1, p2, p3, p4, p5); } // 0x126EF75F1E17ABE5 0xFC2DCF47
	static void PLAY_ENTITY_SCRIPTED_ANIM(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5) { invoke<Void>(0xBB5E363AA915E3F0, p0, p1, p2, p3, p4, p5); } // 0x77A1EEC547E7FCF1 0x02F72AE5
	static void STOP_ANIM_PLAYBACK(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x94C68C807E25D4C1, ped, p1, p2); } // 0xEE08C992D238C5D1 0xE5F16398
	static void SET_ANIM_WEIGHT(Any p0, float p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0x3E07473DE5E8C444, p0, p1, p2, p3, p4); } // 0x207F1A47C0342F48 0x17229D98
	static void SET_ANIM_RATE(Any p0, float p1, Any p2, BOOL p3) { invoke<Void>(0x00B5E129E6F1D899, p0, p1, p2, p3); } // 0x032D49C5E359C847 0x6DB46584
	static void SET_ANIM_LOOPED(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x4A6FE910D992C6EE, p0, p1, p2, p3); } // 0x70033C3CC29A1FF4 0x095D61A4
	static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Any p0, Any* p1, Any* p2, Any* p3, float p4, float p5, BOOL p6, BOOL p7) { invoke<Void>(0x835DDE403031C6BF, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8FBB6758B3B3E9EC 0x1582162C
	static void _TASK_STOP_PHONE_GESTURE_ANIMATION(Any p0) { invoke<Void>(0x19A253381C343DD6, p0); } // 0x3FA00D4F4641BFAE
	static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0xA93716E70D88F50A, ped); } // 0xB8EBB1E9D3588C10 0x500B6805
	static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Any p0) { return invoke<float>(0x675F6E8725FE2774, p0); } // 0x47619ABE8B268C60 0x7B72AFD1
	static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Any p0) { return invoke<float>(0x16EFF9102AA8054F, p0); } // 0x1EE0F68A7C25DEC6 0xEF8C3959
	static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, char* animation_set, char* animation_name) { invoke<Void>(0x043E405839743CA2, vehicle, animation_set, animation_name); } // 0x69F5C3BD0F3EBD89 0x2B28F598
	static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, float duration, Any p5, Any p6) { invoke<Void>(0x27ADB0309A9865E0, entity, x, y, z, duration, p5, p6); } // 0x6FA46612594F7973 0x7B784DD8
	static void TASK_LOOK_AT_ENTITY(Ped pedHandle, Entity lookAt, int duration, int unknown1, int unknown2) { invoke<Void>(0x6A8BCE61F660B8D0, pedHandle, lookAt, duration, unknown1, unknown2); } // 0x69F4BE8C8CC4796C 0x991D6619
	static void TASK_CLEAR_LOOK_AT(Ped playerPed) { invoke<Void>(0x44C7AD5B54E267EE, playerPed); } // 0x0F804F1DB19B9689 0x60EB4054
	static void OPEN_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0x94026C1D1DB14225, taskSequence); } // 0xE8854A4326B9E12B 0xABA6923E
	static void CLOSE_SEQUENCE_TASK(Object taskSequence) { invoke<Void>(0x911ECBCE73F8EC3F, taskSequence); } // 0x39E72BC99E6360CB 0x1A7CEBD0
	static void TASK_PERFORM_SEQUENCE(Ped ped, Object taskSequence) { invoke<Void>(0xC2C4A3A9FF2FBFFF, ped, taskSequence); } // 0x5ABA3986D90D8A3B 0x4D9FBD11
	static void CLEAR_SEQUENCE_TASK(Object* taskSequence) { invoke<Void>(0x33A90AD8FA327B72, taskSequence); } // 0x3841422E9C488D8C 0x47ED03CE
	static void SET_SEQUENCE_TO_REPEAT(Object taskSequence, BOOL repeat) { invoke<Void>(0x1A13F6831AEE500F, taskSequence, repeat); } // 0x58C70CF3A41E4AE7 0xCDDF1508
	static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x229936D409069998, ped); } // 0x00A9010CFE1E3533 0xA3419909
	static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskNumber) { return invoke<BOOL>(0xA93197082225A470, ped, taskNumber); } // 0xB0760331C7AA4155 0x86FDDF55
	static int GET_SCRIPT_TASK_STATUS(Ped targetPed, Hash taskHash) { return invoke<int>(0xC47857E5E74EA5AF, targetPed, taskHash); } // 0x77F1BEB8863288D5 0xB2477B23
	static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle veh) { return invoke<int>(0x26AA4E2619871B66, veh); } // 0x534AEBA6E5ED4CAB 0xAFA914EF
	static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int p1, int p2) { invoke<Void>(0xCD7A5BCC47D00FB2, ped, p1, p2); } // 0x504D54DF3F6F2247 0xDBDD79FA
	static void TASK_AIM_GUN_SCRIPTED(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x496B5BFF355FB854, p0, p1, p2, p3); } // 0x7A192BE16D373D00 0x9D296BCD
	static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6, BOOL p7) { invoke<Void>(0x55DD1B30B4C2A3C8, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8605AF0DE8B3A5AC 0xFD517CE3
	static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped p0, Ped p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xA8C2282031199468, p0, p1, p2, p3, p4, p5); } // 0x9724FB59A3E72AD0 0x67E73525
	static Any GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(Any p0) { return invoke<Any>(0x8CEAB7A09F010FA0, p0); } // 0x3A8CADC7D37AACC5 0x249EB4EB
	static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL p3) { invoke<Void>(0xA02736B50802C8BB, ped, entity, duration, p3); } // 0x9B53BB6E8943AF53 0xBE32B3B6
	static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0x58F62EDF6111D598, ped, entity, duration); } // 0x5AD23D40115353AC 0x3C37C767
	static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL p5, BOOL p6) { invoke<Void>(0x90B6E77A0795E4C0, ped, x, y, z, time, p5, p6); } // 0x6671F3EEC681BDA1 0xFBF44AD3
	static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0x17CB02C811BE994D, ped, x, y, z, duration, firingPattern); } // 0x46A6CC01E0826106 0x601C22E3
	static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle) { invoke<Void>(0xC2A2954BCE7E747B, ped, vehicle); } // 0x7AA80209BDA643EB 0xBEAF8F67
	static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0xFA2C5C2D054C888E, ped); } // 0xE1EF3C1216AFF2CD 0xDE3316AB
	static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xAA6742AEFA0B2BC4, ped); } // 0x176CECF6F920D707 0xA635F451
	static void TASK_EVERYONE_LEAVE_VEHICLE(Any p0) { invoke<Void>(0x3F601C0D5337A88F, p0); } // 0x7F93691AB4B92272 0xC1971F30
	static void TASK_GOTO_ENTITY_OFFSET(Any p0, Any p1, Any p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x0F600EFBA9B18BAD, p0, p1, p2, p3, p4, p5, p6); } // 0xE39B4FF4FDEBDE27 0x1A17A85E
	static void TASK_GOTO_ENTITY_OFFSET_XY(Any p0, Any p1, Any p2, float p3, float p4, float p5, float p6, Any p7) { invoke<Void>(0xFBBCDB428409716C, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x338E7EF52B6095A9 0xBC1E3D0A
	static void TASK_TURN_PED_TO_FACE_COORD(Any p0, float p1, float p2, float p3, Any p4) { invoke<Void>(0xDE6D5CD5475B6C9F, p0, p1, p2, p3, p4); } // 0x1DDA930A0AC38571 0x30463D73
	static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0x94EB3B5D2CDEC0CD, driver, vehicle, action, time); } // 0xC429DCEEB339E129 0x0679DFB8
	static void TASK_VEHICLE_MISSION(Any p0, Any p1, Any p2, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0x03C1B195D300CB1D, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x659427E0EF36BCDE 0x20609E56
	static void TASK_VEHICLE_MISSION_PED_TARGET(Any p0, Any p1, Any p2, Any p3, float p4, Any p5, float p6, float p7, BOOL p8) { invoke<Void>(0x547730440687D355, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x9454528DF15D657A 0xC81C4677
	static void TASK_VEHICLE_MISSION_COORS_TARGET(Any p0, Any p1, float p2, float p3, float p4, Any p5, float p6, Any p7, float p8, float p9, BOOL p10) { invoke<Void>(0x6187AAA1BF80C7C3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xF0AF20AA7731F8C3 0x6719C109
	static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int p3, float speed, int drivingStyle, float minDistance, int p7, float noRoadsDistance) { invoke<Void>(0xB1DFD431371D7CE9, ped, vehicle, targetVehicle, p3, speed, drivingStyle, minDistance, p7, noRoadsDistance); } // 0x0FA6E4B75F302400 0x9FDCB250
	static void _TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, int drivingStyle, float speed, float minDistance) { invoke<Void>(0x89899B66623ED7D2, driver, vehicle, targetEntity, drivingStyle, speed, minDistance); } // 0xFC545A9F0626E3B6
	static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xDB2C416809306C42, driver, targetEnt); } // 0x3C08A8E30363B353 0x55634798
	static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int p4, float radius, int altitude, int p7) { invoke<Void>(0xB46C07E9AA4F47F6, pilot, vehicle, entityToFollow, targetSpeed, p4, radius, altitude, p7); } // 0x1E09C32048FEFD1C 0x0CB415EE
	static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0xC33C6138F75D7C68, ped, flag, set); } // 0xCC665AAC360D31E7 0x2A83083F
	static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Any p0, float p1) { invoke<Void>(0x1674DDBBE21C5E13, p0, p1); } // 0x639B642FACBE4EDD 0x04FD3EE7
	static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x24F4587633BA4D62, pilot, entityToFollow, x, y, z); } // 0xAC83B1DB38D0ADA0 0xAC290A21
	static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x3E2F69483BCB8C96, pilot, entityToFollow, x, y, z); } // 0x2D2386F273FF7A25 0x12FA1C28
	static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0x827D9890BB5CFBA4, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); } // 0xBF19721FA34D32C0 0x5F7E23EA
	static void TASK_HELI_MISSION(Ped pilot, Vehicle vehicle, Any p2, Ped pedToFollow, float posX, float posY, float posZ, int flag, float speed, float p9, float p10, int p11, int p12, float p13, int p14) { invoke<Void>(0x2E01C97C73197689, pilot, vehicle, p2, pedToFollow, posX, posY, posZ, flag, speed, p9, p10, p11, p12, p13, p14); } // 0xDAD029E187A2BEB4 0x0C143E97
	static void TASK_PLANE_MISSION(Ped pilot, Vehicle plane, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int p7, float physicsSpeed, float p9, float p10, float maxAltitude, float minAltitude) { invoke<Void>(0x55DECB7EAA8B4DEF, pilot, plane, targetVehicle, targetPed, destinationX, destinationY, destinationZ, p7, physicsSpeed, p9, p10, maxAltitude, minAltitude); } // 0x23703CD154E83B88 0x1D007E65
	static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle boat, Any p2, Any p3, float x, float y, float z, Any p7, float maxSpeed, Any p9, float p10, Any p11) { invoke<Void>(0x7B6FD67DCDF242C7, pedDriver, boat, p2, p3, x, y, z, p7, maxSpeed, p9, p10, p11); } // 0x15C86013127CE63F 0x5865B031
	static void TASK_DRIVE_BY(Ped p0, Ped targetPed, Any p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8, Hash firingPattern) { invoke<Void>(0x66D2B52327C9F60D, p0, targetPed, p2, p3, p4, p5, p6, p7, p8, firingPattern); } // 0x2F8AF0E82773A171 0x2B84D1C4
	static void SET_DRIVEBY_TASK_TARGET(Any p0, Any p1, Any p2, float p3, float p4, float p5) { invoke<Void>(0xF3B142B7BFA6A916, p0, p1, p2, p3, p4, p5); } // 0xE5B302114D8162EE 0xDA6A6FC1
	static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0x2AF72FDC86E8A4E5, ped); } // 0xC35B5CDB2824CF69 0x9B76F7E6
	static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x988161BB78EEE9AD, ped); } // 0x8785E6E40C7A8818 0xB23F46E6
	static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0x529D98EC98E57B4F, ped); } // 0xDCFE42068FE0135A 0x500D9244
	static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Entity targetEntity, Any p2, float x, float y, float z) { invoke<Void>(0xDE1BBC0B532728D8, shootingPed, targetEntity, p2, x, y, z); } // 0xCCD892192C6D2BB9 0x98713C68
	static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Any p0) { return invoke<BOOL>(0xA26CD05A63CC89BD, p0); } // 0xA320EF046186FA3B 0x291E938C
	static void TASK_USE_MOBILE_PHONE(Ped ped, int p1) { invoke<Void>(0x6FD4DE4DAEA4ED56, ped, p1); } // 0xBD2A8EC3AF4DE7DB 0x225A38C8
	static void TASK_USE_MOBILE_PHONE_TIMED(Any p0, Any p1) { invoke<Void>(0x03D362DF027AD9D7, p0, p1); } // 0x5EE02954A14C69DB 0xC99C19F5
	static void TASK_CHAT_TO_PED(Ped ped, Ped target, Any p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xA63704B5E5675DBB, ped, target, p2, p3, p4, p5, p6, p7); } // 0x8C338E0263E4FD19 0xA2BE1821
	static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0x3CEEFEA0208652C2, ped, vehicle, seat); } // 0x9A7D091411C5F684 0x65D4A35D
	static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0x56421AD67F716D1C, entity, target, duration, firingPattern); } // 0x08DA95E8298AE772 0xAC0631C9
	static void TASK_CLIMB(Ped ped, BOOL p1) { invoke<Void>(0xEF573EA6A98F3E0C, ped, p1); } // 0x89D9FCC2435112F1 0x90847790
	static void TASK_CLIMB_LADDER(Any p0, BOOL p1) { invoke<Void>(0x236D757920F01F00, p0, p1); } // 0xB6C987F9285A3814 0x35BB4EE0
	static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0xDE31B2587775EDAD, ped); } // 0xAAA34F8A7CB32098 0xBC045625
	static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x43D5315D38FFF6F8, p0, p1, p2, p3); } // 0x89221B16730234F0 0xFA60601B
	static void SET_NEXT_DESIRED_MOVE_STATE(Any p0) { invoke<Void>(0xAA15E64CA59CDD9A, p0); } // 0xF1B9F16E89E2C93A 0x4E937D57
	static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0, float p1) { invoke<Void>(0x61E707C43D68FA9C, p0, p1); } // 0x1E982AC8716912C5 0xC65FC712
	static Any GET_PED_DESIRED_MOVE_BLEND_RATIO(Any p0) { return invoke<Any>(0xF0578CB5A09F8398, p0); } // 0x8517D4A6CA8513ED 0x5FEFAB72
	static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0x333EB13A84D3956E, ped, target, distanceToStopAt, StartAimingDist); } // 0xA9DA48FAB8A76C12 0xF1C493CF
	static void TASK_SET_DECISION_MAKER(Ped p0, Hash p1) { invoke<Void>(0x3D268E7250C1ECDF, p0, p1); } // 0xEB8517DDA73720DA 0x830AD50C
	static void TASK_SET_SPHERE_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x0B73A81DBC82F5F0, p0, p1, p2, p3, p4); } // 0x933C06518B52A9A4 0x9F3C5D6A
	static void TASK_CLEAR_DEFENSIVE_AREA(Any p0) { invoke<Void>(0xD08FBEBBD1CB5A29, p0); } // 0x95A6C46A31D1917D 0x7A05BF0D
	static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float p5) { invoke<Void>(0x4E612CEA7394CF65, ped, x, y, z, heading, p5); } // 0xD04FE6765D990A06 0x225380EF
	static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float p5, float p6) { invoke<Void>(0x34A2891382794419, ped, x, y, z, heading, p5, p6); } // 0x5A4A6A6D3DC64F52 0x38A995C1
	static ScrHandle ADD_COVER_POINT(float p0, float p1, float p2, float p3, Any p4, Any p5, Any p6, BOOL p7) { return invoke<ScrHandle>(0xDEA7132C4911B866, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD5C12A75C7B9497F 0xA0AF0B98
	static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0xF68A9E20F14B0089, coverpoint); } // 0xAE287C923D891715 0x0776888B
	static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0x243EF3049C9C9361, x, y, z); } // 0xA98B8E3C088E5A31 0x29F97A71
	static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x1F6C58229D9F4623, coverpoint); } // 0x594A1028FC2A3E85 0xC6B6CCC1
	static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int p2, int p3) { invoke<Void>(0x13C351F151D49F89, ped, targetPed, p2, p3); } // 0xF166E48407BAC484 0xCB0D8932
	static void TASK_COMBAT_PED_TIMED(Any p0, Ped ped, int p2, Any p3) { invoke<Void>(0x7B62ECFC9D8F21F0, p0, ped, p2, p3); } // 0x944F30DCB7096BDE 0xF5CA2A45
	static void TASK_SEEK_COVER_FROM_POS(Any p0, float p1, float p2, float p3, Any p4, BOOL p5) { invoke<Void>(0xC8818A3A547EEE56, p0, p1, p2, p3, p4, p5); } // 0x75AC2B60386D89F2 0x83F18EE9
	static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL p3) { invoke<Void>(0x3E92A38A135CF88A, ped, target, duration, p3); } // 0x84D32B3BEC531324 0xC1EC907E
	static void TASK_SEEK_COVER_TO_COVER_POINT(Any p0, Any p1, float p2, float p3, float p4, Any p5, BOOL p6) { invoke<Void>(0x5653F6EFB4391A44, p0, p1, p2, p3, p4, p5, p6); } // 0xD43D95C7A869447F 0x3D026B29
	static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, Any p7, BOOL p8) { invoke<Void>(0x954110C4555852C0, ped, x1, y1, z1, x2, y2, z2, p7, p8); } // 0x39246A6958EF072C 0xFFFE754E
	static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Any p0, float p1, float p2, float p3, Any p4, BOOL p5, float p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { invoke<Void>(0x9F2E5A53732EE4C2, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x4172393E6BE1FECE 0xC9F00E68
	static void TASK_EXIT_COVER(Any p0, Any p1, float p2, float p3, float p4) { invoke<Void>(0x23FF2EEA8601949E, p0, p1, p2, p3, p4); } // 0x79B258E397854D29 0xC829FAC9
	static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x506C3CF53904596F, ped, meleeTarget, p2, p3, p4, p5); } // 0x1C6CD14A876FFE39 0x79E1D27D
	static void TASK_TOGGLE_DUCK(BOOL p0, BOOL p1) { invoke<Void>(0x85FB0133B5D4B320, p0, p1); } // 0xAC96609B9995EDF8 0x61CFBCBF
	static void TASK_GUARD_CURRENT_POSITION(Ped p0, float p1, float p2, BOOL p3) { invoke<Void>(0xDE3527CEB941A2A7, p0, p1, p2, p3); } // 0x4A58A47A72E3FCB4 0x2FB099E9
	static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Any p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x53AED8230478FEAA, p0, p1, p2, p3, p4, p5, p6); } // 0xD2A207EEBDF9889B 0x7AF0133D
	static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped p0, float p1, float p2, float p3, float p4, float p5, Any p6, float p7, float p8, float p9, float p10) { invoke<Void>(0xE473D86FD7FF1158, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xC946FE14BE0EB5E2 0x86B76CB7
	static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, char* scenarioName) { invoke<Void>(0x740AF89F97913B59, ped, x, y, z, heading, scenarioName); } // 0xAE032F8BBA959E90 0xD130F636
	static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x3293DD7EB0BC0756, driver, cruiseSpeed); } // 0x5C9B84BD7D31D908 0x3CEC07B1
	static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Any p0, float p1) { invoke<Void>(0xBD2E398893922881, p0, p1); } // 0x404A5AA9B9F0B746 0x7FDF6131
	static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0xE054F333B0F52B61, ped, drivingStyle); } // 0xDACE1BE37D88AF67 0x59C5FAD7
	static void ADD_COVER_BLOCKING_AREA(float playerX, float playerY, float playerZ, float radiusX, float radiusY, float radiusZ, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { invoke<Void>(0xC681CD4C2E48AA94, playerX, playerY, playerZ, radiusX, radiusY, radiusZ, p6, p7, p8, p9); } // 0x45C597097DD7CB81 0x3536946F
	static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0x4089891570C00AE1); } // 0xDB6708C0B46F56D8 0xCF9221A7
	static void TASK_START_SCENARIO_IN_PLACE(Ped ped, char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0x7D786F4317F35B2E, ped, scenarioName, unkDelay, playEnterAnim); } // 0x142A02425FF02BD9 0xE50D6DDE
	static void TASK_START_SCENARIO_AT_POSITION(Ped ped, char* scenarioName, float x, float y, float z, float heading, Any p6, BOOL p7, BOOL p8) { invoke<Void>(0x6F6F6F5505A94576, ped, scenarioName, x, y, z, heading, p6, p7, p8); } // 0xFA4EFC79F69D4F07 0xAA2C4AC2
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0xA3A25B3BCF95E908, p0, p1, p2, p3, p4, p5); } // 0x277F471BA9DB000B 0x9C50FBF0
	static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0x73EC55664EBF47A7, ped, x, y, z, radius, p5); } // 0x58E2E0F23F6B76C3 0x1BE9D65C
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x92F37D77F0154C31, p0, p1, p2, p3, p4, p5); } // 0x9FDA1B3D7E7028B3 0xE32FFB22
	static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Any p0, float p1, float p2, float p3, float p4, Any p5) { invoke<Void>(0x2180C35C80AFB905, p0, p1, p2, p3, p4, p5); } // 0x97A28E63F0BA5631 0xBAB4C0AE
	static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL b) { return invoke<BOOL>(0x22E8CF9DF233BFE5, x, y, z, radius, b); } // 0x5A59271FFADD33C1 0xFA7F5047
	static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float p0, float p1, float p2, Any* p3, float p4, BOOL p5) { return invoke<BOOL>(0x2EAC68D550960C3C, p0, p1, p2, p3, p4, p5); } // 0x0A9D0C2A3BBC86C1 0x0FB138A5
	static BOOL IS_SCENARIO_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0xD15CE4D251EA2EEC, p0, p1, p2, p3, p4); } // 0x788756D73AC2E07C 0x697FC008
	static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0x4ADA7967585FA951, ped); } // 0x295E3CCEC879CCD7 0x9BE9C691
	static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, char* animDict, char* animName) { invoke<Void>(0x8F0AB3BBF24BF35F, ped, animDict, animName); } // 0x748040460F8DF5DC 0x1984A5D1
	static BOOL DOES_SCENARIO_GROUP_EXIST(Any* p0) { return invoke<BOOL>(0x537E0990883A9EFC, p0); } // 0xF9034C136C9E00D3 0x5F072EB9
	static BOOL IS_SCENARIO_GROUP_ENABLED(Any* p0) { return invoke<BOOL>(0x5E67A92FC1C4AFCB, p0); } // 0x367A09DED4E05B99 0x90991122
	static void SET_SCENARIO_GROUP_ENABLED(Any* p0, BOOL p1) { invoke<Void>(0x34889147FAD10C2C, p0, p1); } // 0x02C8E5B49848664E 0x116997B1
	static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xD9466A8DD18F358E); } // 0xDD902D0349AFAD3A 0xBF55025D
	static void SET_EXCLUSIVE_SCENARIO_GROUP(Any* p0) { invoke<Void>(0x82BA881E0D81BA5C, p0); } // 0x535E97E1F7FC0C6A 0x59DB8F26
	static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x26ECB20FA78D6B0E); } // 0x4202BBCB8684563D 0x17F9DFE8
	static BOOL IS_SCENARIO_TYPE_ENABLED(Any* p0) { return invoke<BOOL>(0xDCB2484D478483C6, p0); } // 0x3A815DB3EA088722 0xAE37E969
	static void SET_SCENARIO_TYPE_ENABLED(char* scenarioType, BOOL toggle) { invoke<Void>(0x7146F608C2C17ACC, scenarioType, toggle); } // 0xEB47EC4E34FB7EE1 0xDB18E5DE
	static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xB6CF0AE8486F3BEC); } // 0x0D40EE2A7F2B2D6D 0xF58FDEB4
	static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0xDE5F6E7A8F69ECA1, ped); } // 0xAA135F9482C82CC3 0x05038F1A
	static BOOL _0x877A89825E9C6422(Any p0) { return invoke<BOOL>(0x877A89825E9C6422, p0); } // 0x621C6E4729388E41
	static void _0x903A6F14EEDA7B22(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x903A6F14EEDA7B22, p0, p1, p2); } // 0x8FD89A6240813FD0
	static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, Any p5) { invoke<Void>(0x6E6C6BED79E5A215, ped, x, y, z, radius, p5); } // 0x4CF5F55DAC3280A0 0xDF099E18
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int p2) { invoke<Void>(0xE8EC59D96A176616, ped, radius, p2); } // 0x7BF835BB9E2698C8 0x2E7064E4
	static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Any p0, float p1, Any p2, Any p3) { invoke<Void>(0xAC8871CE9F3483FE, p0, p1, p2, p3); } // 0x2BBA30B854534A0C 0xF127AD6A
	static void TASK_THROW_PROJECTILE(Any p0, float x, float y, float z) { invoke<Void>(0x0394D7C86C07112C, p0, x, y, z); } // 0x7285951DBF6B5A51 0xF65C20A7
	static void TASK_SWAP_WEAPON(Ped ped, BOOL p1) { invoke<Void>(0x0A4F47B84A5F0258, ped, p1); } // 0xA21C51255B205245 0xDAF4F8FC
	static void TASK_RELOAD_WEAPON(Ped ped, BOOL doReload) { invoke<Void>(0x44931B3ECB08A7F6, ped, doReload); } // 0x62D2916F56B9CD2D 0xCA6E91FD
	static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x0BEB89C5B6DBEA8E, ped); } // 0x2A74E1D5F2F00EEC 0x320813E6
	static void TASK_WRITHE(Ped ped, Ped target, int time, BOOL p3) { invoke<Void>(0x48841CE71752145B, ped, target, time, p3); } // 0xCDDC2B77CE54AC6E 0x0FDC54FC
	static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xB35891975D7F92C3, ped); } // 0xDEB6D52126E7D640 0x09E61921
	static void OPEN_PATROL_ROUTE(Any* p0) { invoke<Void>(0xD878FD1FA18A98AD, p0); } // 0xA36BFB5EE89F3D82 0xF33F83CA
	static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xDB43347D18BA28E5); } // 0xB043ECA801B8CBC1 0x67305E59
	static void ADD_PATROL_ROUTE_NODE(Any p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x0FD0638BBC5C57E2, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x8EDF950167586B7C 0x21B48F10
	static void ADD_PATROL_ROUTE_LINK(Any p0, Any p1) { invoke<Void>(0x4D8C9126E7957639, p0, p1); } // 0x23083260DEC3A551 0xD8761BB3
	static void CREATE_PATROL_ROUTE() { invoke<Void>(0xDB1A8148090E3680); } // 0xAF8A443CCC8018DC 0x0A6C7864
	static void DELETE_PATROL_ROUTE(Any* p0) { invoke<Void>(0x4C06329BC4CEFE8A, p0); } // 0x7767DD9D65E91319 0x2A4E6706
	static void TASK_PATROL(Ped ped, char* p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xA3907FC583768EFE, ped, p1, p2, p3, p4); } // 0xBDA5DF49D080FE4E 0xB92E5AF6
	static void TASK_STAY_IN_COVER(Any p0) { invoke<Void>(0x0208E1C75CBB6390, p0); } // 0xE5DA8615A6180789 0xA27A9413
	static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0x544DB0F8C779D1AD, ped, x, y, z); } // 0x5CF0D8F9BBA0DD75 0x50779A2C
	static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped ped2) { invoke<Void>(0xA66F7A0070E2BD6E, ped, ped2); } // 0x85F462BADC7DA47F 0x80461113
	static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float p2) { invoke<Void>(0x0C8D0E8887A54F4F, ped, target, p2); } // 0x10AB107B887214D8 0x59677BA0
	static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0x7648CE813E81B32A, ped, target); } // 0xE41885592B08B097 0x920AE6DB
	static void TASK_VEHICLE_SHOOT_AT_COORD(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0xD756DD58B9A34169, vehicle, x, y, z, p4); } // 0x5190796ED39C9B6D 0xA7AAA4D6
	static void TASK_VEHICLE_AIM_AT_COORD(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0xA0FD2F496F779DA5, vehicle, x, y, z); } // 0x447C1E9EF844BC0F 0x010F47CE
	static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0xC961CB8769A9CBEE, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); } // 0x195AEEB13CEFE2EE 0x55CF3BCD
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveSpeed, BOOL p8, float p9, float p10, BOOL p11, Any flags, BOOL p13, Hash firingPattern) { invoke<Void>(0x0EAE2310430BFACE, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveSpeed, p8, p9, p10, p11, flags, p13, firingPattern); } // 0x11315AB3385B8AC0 0x1552DC91
	static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Any p0, float p1, float p2, float p3, Any p4, float p5, BOOL p6, float p7, float p8, BOOL p9, Any p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xBE9AFED5018B4A06, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xB2A16444EAD9AE47 0x9BD52ABD
	static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped ped, float gotoX, float gotoY, float gotoZ, float aimNearX, float aimNearY, float aimNearZ, float speed, BOOL shoot, float unknown1, float unknown2, BOOL unkTrue, int unknown3, BOOL heading, Hash firingPattern) { invoke<Void>(0x9EB82ED4B089579E, ped, gotoX, gotoY, gotoZ, aimNearX, aimNearY, aimNearZ, speed, shoot, unknown1, unknown2, unkTrue, unknown3, heading, firingPattern); } // 0xA55547801EB331FC 0x3F91358E
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Any p0, Any p1, float p2, float p3, float p4, float p5, BOOL p6, float p7, float p8, BOOL p9, BOOL p10, Any p11) { invoke<Void>(0x908BF9F65231A2D9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x04701832B739DCE5 0xD896CD82
	static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float p5, float p6, BOOL p7, BOOL p8, Hash firingPattern) { invoke<Void>(0x8C2752F3FF55C28A, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, p5, p6, p7, p8, firingPattern); } // 0x97465886D35210E9 0x68E36B7A
	static void SET_HIGH_FALL_TASK(Ped p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF97CE08CE50BDBE6, p0, p1, p2, p3); } // 0x8C825BDC7741D37C 0xBBB26172
	static void REQUEST_WAYPOINT_RECORDING(char* name) { invoke<Void>(0xCBEB830866A6963D, name); } // 0x9EEFB62EB27B5792 0xAFABFB5D
	static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(char* name) { return invoke<BOOL>(0x729A24E50365D07B, name); } // 0xCB4E8BE8A0063C5D 0x87125F5D
	static void REMOVE_WAYPOINT_RECORDING(char* name) { invoke<Void>(0x4C5B723663B8F630, name); } // 0xFF1B8B4AA1C25DC8 0x624530B0
	static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(Any* p0, Any* p1) { return invoke<BOOL>(0x55BF5703190276B4, p0, p1); } // 0x5343532C01A07234 0xF5F9B71E
	static Any WAYPOINT_RECORDING_GET_COORD(Any p0, Any p1, Any p2) { return invoke<Any>(0x0A4FE71EF333549B, p0, p1, p2); } // 0x2FB897405C90B361 0x19266913
	static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(Any* p0, Any p1) { return invoke<float>(0xD2F88E58F32F148A, p0, p1); } // 0x005622AEBC33ACA9 0xC765633A
	static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Any* p0, float p1, float p2, float p3, Any* p4) { return invoke<BOOL>(0x2BA39B916A61E352, p0, p1, p2, p3, p4); } // 0xB629A298081F876F 0xC4CD35AF
	static void TASK_FOLLOW_WAYPOINT_RECORDING(Any p0, Any* p1, Any p2, Any p3, Any p4) { invoke<Void>(0x634CF9AFCB879C0D, p0, p1, p2, p3, p4); } // 0x0759591819534F7B 0xADF9904D
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Any p0) { return invoke<BOOL>(0x84ABD5D965FE0C04, p0); } // 0xE03B3F2D3DC59B64 0x85B7725F
	static Any GET_PED_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0xA31041E73957A31E, p0); } // 0x2720AAA75001E094 0x3595B104
	static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0x5A57ECE44C3AFA0B, p0); } // 0xE6A877C64CAF1BC5 0x084B35B0
	static Any SET_PED_WAYPOINT_ROUTE_OFFSET(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xDA77194F209ECB8B, p0, p1, p2, p3); } // 0xED98E10B0AFCE4B4 0xF867F747
	static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(Any* p0, Any p1) { return invoke<float>(0xC0199718A01FD818, p0, p1); } // 0xA5B769058763E497 0xE8422AC4
	static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xDA43D13208B2527A, p0); } // 0x701375A7D43F01CB 0xA6BB5717
	static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x7E6CE82336AE3E8F, p0, p1, p2); } // 0x0F342546AA06FED5 0xFE39ECF8
	static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xE731082E65A0CB51, p0, p1, p2, p3); } // 0x244F70C84C547D2D 0x50F392EF
	static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0x17BE705C82F0754A, p0, p1, p2); } // 0x7D7D2B47FA788E85 0x23E6BA96
	static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x5228BC731F71ECF6, p0); } // 0x6599D834B12D0800 0x1BBB2CAC
	static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(Any* p0, BOOL p1, float p2, float p3) { invoke<Void>(0xAD0C8ABDA1A371CA, p0, p1, p2, p3); } // 0x5A353B8E6B1095B5 0x4DFD5FEC
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Any p0, Any p1, BOOL p2) { invoke<Void>(0x0F8F5C777F7653F4, p0, p1, p2); } // 0x20E330937C399D29 0x75E60CF6
	static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0x9EDBDB59E21450AF, p0, p1, p2, p3, p4); } // 0x8968400D900ED8B3 0xF120A34E
	static void _0xBE4F5E0BC62495A8(Any p0, Any p1, BOOL p2, Any p3) { invoke<Void>(0xBE4F5E0BC62495A8, p0, p1, p2, p3); } // 0xE70BA7B90F8390DC
	static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Any p0, float p1, float p2, float p3, BOOL p4, Any p5) { invoke<Void>(0x721F1C077E0581FB, p0, p1, p2, p3, p4, p5); } // 0x057A25CFCC9DB671 0xCDDB44D5
	static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Any p0) { invoke<Void>(0xDC84450356ED6CBE, p0); } // 0x47EFA040EBB8E2EA 0x6D7CF40C
	static void ASSISTED_MOVEMENT_REQUEST_ROUTE(char* route) { invoke<Void>(0x513B0F727F73FFFC, route); } // 0x817268968605947A 0x48262EDA
	static void ASSISTED_MOVEMENT_REMOVE_ROUTE(char* route) { invoke<Void>(0xA29AC749499D846D, route); } // 0x3548536485DD792B 0xB3CEC06F
	static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(char* route) { return invoke<BOOL>(0x877A3342F85192B1, route); } // 0x60F9A4393A21F741 0x79B067AF
	static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(char* route, int props) { invoke<Void>(0xC52633C7708D303E, route, props); } // 0xD5002D78B7162E1B 0x01CAAFCC
	static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0x893246AED8BC02E5, dist); } // 0x13945951E16EF912 0x8FB923EC
	static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5, Any p6, float p7, BOOL p8, float p9) { invoke<Void>(0x8856EDD9AA658EC6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x3123FAA6DB1CF7ED 0x959818B6
	static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Any p0) { return invoke<BOOL>(0x185BA6124B348CFF, p0); } // 0xF5134943EA29868C 0x80DD15DB
	static Any GET_VEHICLE_WAYPOINT_PROGRESS(Any p0) { return invoke<Any>(0x9BF7814E5426D763, p0); } // 0x9824CFF8FC66E159 0xD3CCF64E
	static Any GET_VEHICLE_WAYPOINT_TARGET_POINT(Any p0) { return invoke<Any>(0x15905987CEA677CA, p0); } // 0x416B62AC8B9E5BBD 0x81049608
	static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Any p0) { invoke<Void>(0xF838FEA503BBADBE, p0); } // 0x8A4E6AC373666BC5 0x7C00B415
	static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Any p0) { invoke<Void>(0x324E39E62BBCEBF9, p0); } // 0xDC04FCAA7839D492 0xBEB14C82
	static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x1AE55E64570A8369, p0); } // 0x5CEB25A7D2848963 0x923C3AA4
	static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1) { invoke<Void>(0x4832B83974CC6744, p0, p1); } // 0x121F0593E0A431D7 0xBE1E7BB4
	static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x732BBAB72712004C, ped, toggle); } // 0x90D2156198831D69 0x1B54FB6B
	static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL p2) { invoke<Void>(0xF3CA309478CD9721, ped, state, p2); } // 0x4F056E1AFFEF17AB 0xCAD2EF77
	static void _0x15E46A8BDA164E1C(Any p0, Any* p1, float p2, BOOL p3, Any* p4, Any p5) { invoke<Void>(0x15E46A8BDA164E1C, p0, p1, p2, p3, p4, p5); } // 0x2D537BA194896636 0x6F5D215F
	static void _0xDD65B85C555DC644(Any p0, Any* p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, float p9, BOOL p10, Any* p11, Any p12) { invoke<Void>(0xDD65B85C555DC644, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xD5B35BEA41919ACB 0x71A5C5DB
	static BOOL _0xD79474D58E3269A6(int PlayerID) { return invoke<BOOL>(0xD79474D58E3269A6, PlayerID); } // 0x921CE12C489C4C41 0x902656EB
	static BOOL _0xBCE795AD78994502(Any p0) { return invoke<BOOL>(0xBCE795AD78994502, p0); } // 0x30ED88D5E0C56A37 0x92FDBAE6
	static Any _0x6F955687034AC082(Any p0, Any p1) { return invoke<Any>(0x6F955687034AC082, p0, p1); } // 0xD01015C7316AE176 0x885724DE
	static Any _0x4F238F56310343DD(Any p0, Any p1) { return invoke<Any>(0x4F238F56310343DD, p0, p1); } // 0xAB13A5565480B6D9
	static char* _0x773774E2A58AFCA9(Ped p0) { return invoke<char*>(0x773774E2A58AFCA9, p0); } // 0x717E4D1F2048376D 0x96C0277B
	static void _0x611750C714C68DDE(Player p0, char* p1, float p2) { invoke<Void>(0x611750C714C68DDE, p0, p1, p2); } // 0xD5BB4025AE449A4E 0xA79BE783
	static void _0xB31B6E3220CC4A92(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xB31B6E3220CC4A92, p0, p1, p2); } // 0xB0A6CFD2C69C1088 0xF3538041
	static BOOL _0x9064B8D7909B3290(Any p0, Any* p1) { return invoke<BOOL>(0x9064B8D7909B3290, p0, p1); } // 0xA7FFBA498E4AAF67 0x1EBB6F3D
	static BOOL _0x2B77775B8D2410B0(Any p0, Any* p1) { return invoke<BOOL>(0x2B77775B8D2410B0, p0, p1); } // 0xB4F47213DF45A64C 0x72FA5EF2
	static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xA5CAE804789A345C, ped); } // 0x349CE7B56DAFD95C 0xE9DAF877
	static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0x6F1CD56D0B2FB6E3, ped); } // 0xF133BBBE91E1691F 0xD21639A8
	static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x0A4EF1E847921EE9, ped); } // 0xD4D8636C0199A939 0xE76A2353
	static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x4B763EC470E69C0C, ped); } // 0x24A2AD74FA9814E2 0xDD616893
	static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x4BF1843159BD9367, ped); } // 0xAC29253EEF8F0180 0x09E3418D
	static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x47CE11C433FA9E79, ped); } // 0xDE4C184B2B9B071A 0x4B865C4A
	static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x32CB82F773482629, ped); } // 0xC5286FFC176F28A2 0xE9A5578F
	static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x25AE83AAAFB359D8, ped); } // 0x57E457CD2C0FC168 0x4F3E0633
	static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0xE46E1B8F4C945D2D, ped); } // 0xE45B7F222DE47E09 0xEFEED13C
	static void TASK_SYNCHRONIZED_SCENE(Ped ped, Any scene, char* animDictionary, char* animationName, float p4, float p5, Any p6, Any p7, float p8, Any p9) { invoke<Void>(0x360F0D01112F8AD0, ped, scene, animDictionary, animationName, p4, p5, p6, p7, p8, p9); } // 0xEEA929141F699854 0x4F217E7B
	static void TASK_SWEEP_AIM_ENTITY(Ped ped, char* anim, char* p2, char* p3, char* p4, int p5, Vehicle vehicle, float p7, float p8) { invoke<Void>(0x5242FCE62371C98D, ped, anim, p2, p3, p4, p5, vehicle, p7, p8); } // 0x2047C02158D6405A 0x4D210467
	static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0xF3AA497F394867DB, ped, entity); } // 0xE4973DBDBE6E44B3 0xF65F0F4F
	static void TASK_SWEEP_AIM_POSITION(Any p0, Any* p1, Any* p2, Any* p3, Any* p4, Any p5, float p6, float p7, float p8, float p9, float p10) { invoke<Void>(0x93BBB6D882D51FAC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x7AFE8FDC10BC07D2 0x1683FE66
	static void UPDATE_TASK_SWEEP_AIM_POSITION(Any p0, float p1, float p2, float p3) { invoke<Void>(0x5DBCD9D3B6172BE7, p0, p1, p2, p3); } // 0xBB106883F5201FC4 0x6345EC80
	static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0xF174FDF3B9BA09A3, ped, target); } // 0xF3B9A78A178572B1 0xBC0F153D
	static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x56EC82A742FF9EA5, ped); } // 0x3DC52677769B4AE0 0x6942DB7A
	static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x3EA3ED8AC67138E0, ped); } // 0x90A09F3A45FED688 0x5FF6C2ED
	static void UNCUFF_PED(Ped ped) { invoke<Void>(0xA2A676B206D80C35, ped); } // 0x67406F2C8F87FC4F 0xA23A1D61
	static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0x86A2B7CBEB83616A, ped); } // 0x74E559B3BC910685 0x511CE741
}

namespace GAMEPLAY
{
	static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0x9BE9150B55C93A97); } // 0x8B3CA62B1EF19B62 0x4E9CA30A
	static int _GET_FREE_STACK_SLOTS_COUNT(int stackSize) { return invoke<int>(0x233B3DB1183A76B3, stackSize); } // 0xFEAD16FC8F9DFC0F 0x11A178B8
	static void SET_RANDOM_SEED(int time) { invoke<Void>(0x7615D1186F16314D, time); } // 0x444D98F98C11F3EC 0xDB3FEB5C
	static void SET_TIME_SCALE(float time) { invoke<Void>(0xC34D34ABA99A6872, time); } // 0x1D408577D440E81E 0xA7F84694
	static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0x3F95CDEE236B6AD7, toggle); } // 0xC4301E5121A0ED73 0x57592D52
	static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xFCD171641347C2B0); } // 0xA33CDCCDA663159E 0x95115F97
	static void SET_RANDOM_EVENT_FLAG(BOOL p0) { invoke<Void>(0x51FBA873FE592D01, p0); } // 0x971927086CFD2158 0xA77F31E8
	static Any GET_RANDOM_EVENT_FLAG() { return invoke<Any>(0x4341FD2C227CC4C0); } // 0xD2D57F1D764117B1 0x794CC92C
	static Any _0xE1B670F16A6BC8ED() { return invoke<Any>(0xE1B670F16A6BC8ED); } // 0x24DA7D7667FD7B09
	static void _0xBBCF9397D0CC1FAF(Any p0, Any p1) { invoke<Void>(0xBBCF9397D0CC1FAF, p0, p1); } // 0x4DCDF92BF64236CD
	static void _0x86D5B30FD88F4969(Any p0) { invoke<Void>(0x86D5B30FD88F4969, p0); } // 0x31125FD509D9043F
	static void _0x008527F0710BBB58(Any p0) { invoke<Void>(0x008527F0710BBB58, p0); } // 0xEBD3205A207939ED
	static void _0x28BE487F1E29FB6C(Any p0) { invoke<Void>(0x28BE487F1E29FB6C, p0); } // 0x97E7E2C04245115B
	static void _0x1FD9BEFA3985280E(Any p0, Any p1) { invoke<Void>(0x1FD9BEFA3985280E, p0, p1); } // 0xEB078CA2B5E82ADD
	static void _0x4D8784BCAC168DFC(Any p0) { invoke<Void>(0x4D8784BCAC168DFC, p0); } // 0x703CC7F60CBB2B57
	static void _0x00CE0A524B98C1ED() { invoke<Void>(0x00CE0A524B98C1ED); } // 0x8951EB9C6906D3C8
	static void _0xC5FFB4F535DA5451(Any p0) { invoke<Void>(0xC5FFB4F535DA5451, p0); } // 0xBA4B8D83BDC75551
	static Any _0x2015EF0CE28B66D2() { return invoke<Any>(0x2015EF0CE28B66D2); } // 0xE8B9C0EC9E183F35
	static void _0xCC7B0EAA74A0A981(BOOL p0) { invoke<Void>(0xCC7B0EAA74A0A981, p0); } // 0x65D2EBB47E1CEC21
	static void _0x21B58370C1A6C16E(BOOL p0) { invoke<Void>(0x21B58370C1A6C16E, p0); } // 0x6F2135B6129620C1 0x8B2DE971
	static void _0x287D973F5A1C8DEA(Any* p0) { invoke<Void>(0x287D973F5A1C8DEA, p0); } // 0x8D74E26F54B4E5C3 0xE77199F7
	static BOOL _0xE1BCBA6A0A8D7A28(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xE1BCBA6A0A8D7A28, p0, p1, p2, p3); } // 0xB335F761606DB47C
	static Hash _GET_CURRENT_WEATHER_TYPE() { return invoke<Hash>(0xF514CE124BE55E04); } // 0x564B884A05EC45A3 0xA8171E9E
	static Hash _GET_NEXT_WEATHER_TYPE() { return invoke<Hash>(0xF19D1C50D884B948); } // 0x711327CD09C8F162 0x353E8056
	static BOOL IS_PREV_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0x47EE49A81214A0DF, weatherType); } // 0x44F28F86433B10A9 0x250ADA61
	static BOOL IS_NEXT_WEATHER_TYPE(char* weatherType) { return invoke<BOOL>(0xBFFF44F1F26F9812, weatherType); } // 0x2FAA3A30BEC0F25D 0x99CB167F
	static void SET_WEATHER_TYPE_PERSIST(char* weatherType) { invoke<Void>(0xD71419752AE9457E, weatherType); } // 0x704983DF373B198F 0xC6C04C75
	static void SET_WEATHER_TYPE_NOW_PERSIST(char* weatherType) { invoke<Void>(0x192791C0D1D28BD9, weatherType); } // 0xED712CA327900C8A 0xC869FE97
	static void SET_WEATHER_TYPE_NOW(char* weatherType) { invoke<Void>(0x2343850214D9442C, weatherType); } // 0x29B487C359E19889 0x361E9EAC
	static void _SET_WEATHER_TYPE_OVER_TIME(char* weatherType, float time) { invoke<Void>(0xD20ADBE7BCFF20AB, weatherType, time); } // 0xFB5045B7C42B75BF 0x386F0D25
	static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0x4CC01C81AEFDB403); } // 0x8B05F884CF7E8020 0xE7AA1BC9
	static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xDAA8F2B657E22E0E); } // 0xCCC39339BEF76CF5 0x6AB757D8
	static void _GET_WEATHER_TYPE_TRANSITION(Any* p0, Any* p1, float* progress_or_time) { invoke<Void>(0x8F305E87CAD8DE0B, p0, p1, progress_or_time); } // 0xF3BBE884A14BB413 0x9A5C1D56
	static void _SET_WEATHER_TYPE_TRANSITION(Hash sourceWeather, Hash targetWeather, float transitionTime) { invoke<Void>(0xA17968FCBF2E3A9A, sourceWeather, targetWeather, transitionTime); } // 0x578C752848ECFA0C 0x5CA74040
	static void SET_OVERRIDE_WEATHER(char* weatherType) { invoke<Void>(0x6EE2E20A0E788065, weatherType); } // 0xA43D5C6FE51ADBEF 0xD9082BB5
	static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xE0C201E21E7EC346); } // 0x338D2E3477711050 0x7740EA4E
	static void _0x21B668750611667C(float p0) { invoke<Void>(0x21B668750611667C, p0); } // 0xB8F87EAD7533B176 0x625181DC
	static void _0xA2AC80A1C7E9E5CC(float p0) { invoke<Void>(0xA2AC80A1C7E9E5CC, p0); } // 0xC3EAD29AB273ECE8 0xBEBBFDC8
	static void _0xD7F8D2B2CACAFF13(float p0) { invoke<Void>(0xD7F8D2B2CACAFF13, p0); } // 0xA7A1127490312C36 0x6926AB03
	static void _0xDF8665B01D80F1FC(float p0) { invoke<Void>(0xDF8665B01D80F1FC, p0); } // 0x31727907B2C43C55 0xD447439D
	static void _0x2CB951DFD6866A18(float p0) { invoke<Void>(0x2CB951DFD6866A18, p0); } // 0x405591EC8FD9096D 0x584E9C59
	static void _0x2E2C3D73182F3DE6(float p0) { invoke<Void>(0x2E2C3D73182F3DE6, p0); } // 0xF751B16FB32ABC1D 0x5656D578
	static void _0x24CBC805941EC2E7(float p0) { invoke<Void>(0x24CBC805941EC2E7, p0); } // 0xB3E6360DDE733E82 0x0DE40C28
	static void _0x05D47BB2E5AA18A8(float p0) { invoke<Void>(0x05D47BB2E5AA18A8, p0); } // 0x7C9C0B1EEB1F9072 0x98C9138B
	static void _0xD00A4234E9AD45F3(float p0) { invoke<Void>(0xD00A4234E9AD45F3, p0); } // 0x6216B116083A7CB4 0xFB1A9CDE
	static void _0xF434E732E9E40344(float p0) { invoke<Void>(0xF434E732E9E40344, p0); } // 0x9F5E6BB6B34540DA 0x1C0CAE89
	static void _0xF9CFF451DC34B94F(float p0) { invoke<Void>(0xF9CFF451DC34B94F, p0); } // 0xB9854DFDE0D833D6 0x4671AC2E
	static void _0x20FA16787985877D(float p0) { invoke<Void>(0x20FA16787985877D, p0); } // 0xC54A08C85AE4D410 0xDA02F415
	static void _0x1A686CBF662AC5E6(float p0) { invoke<Void>(0x1A686CBF662AC5E6, p0); } // 0xA8434F1DFF41D6E7 0x5F3DDEC0
	static void _0x84ABF27CB068CFE6(float p0) { invoke<Void>(0x84ABF27CB068CFE6, p0); } // 0xC3C221ADDDE31A11 0x63A89684
	static void SET_WIND(float p0) { invoke<Void>(0x563D6DED817896D0, p0); } // 0xAC3A74E8384A9919 0xC6294698
	static void SET_WIND_SPEED(float speed) { invoke<Void>(0x849553FAFC9FC74B, speed); } // 0xEE09ECEDBABE47FC 0x45705F94
	static float GET_WIND_SPEED() { return invoke<float>(0x05C931CADD0B8298); } // 0xA8CF1CC0AFCD3F12 0x098F0F3C
	static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0x4030D8E5DC308359, direction); } // 0xEB0F4468467B4528 0x381AEEE9
	static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0x3AE211EE2A139B17); } // 0x1F400FEF721170DA 0x89499A0D
	static void _SET_RAIN_FX_INTENSITY(float intensity) { invoke<Void>(0x088AD3E237704DA0, intensity); } // 0x643E26EA6E024D92
	static Any GET_RAIN_LEVEL() { return invoke<Any>(0x58001D2646FF48DA); } // 0x96695E368AD855F3 0xC9F67F28
	static Any GET_SNOW_LEVEL() { return invoke<Any>(0xE9007DE66CEEC0CD); } // 0xC5868A966E5BE3AE 0x1B09184F
	static void _CREATE_LIGHTNING_THUNDER() { invoke<Void>(0xFAACC9AE59B4C1DD); } // 0xF6062E089251C898 0xDF38165E
	static void _0xE18D3B211A78AFB6(Any* p0) { invoke<Void>(0xE18D3B211A78AFB6, p0); } // 0x02DEAAC8F8EA7FE7
	static void _0x18B0F0D55CDF5DF2(Any* p0) { invoke<Void>(0x18B0F0D55CDF5DF2, p0); } // 0x11B56FBBF7224868 0x8727A4C5
	static void _SET_CLOUD_HAT_TRANSITION(char* type, float transitionTime) { invoke<Void>(0xCEDCF6C5D6C7558C, type, transitionTime); } // 0xFC4842A34657BFCB 0xED88FC61
	static void _0xDE6ACD10E6EDB353(Any* p0, float p1) { invoke<Void>(0xDE6ACD10E6EDB353, p0, p1); } // 0xA74802FB8D0B7814 0xC9FA6E07
	static void _CLEAR_CLOUD_HAT() { invoke<Void>(0xCABE4CA5584B9ED9); } // 0x957E790EA1727B64 0x2D7787BC
	static void _0xCD249EB4F9A4FA90(float p0) { invoke<Void>(0xCD249EB4F9A4FA90, p0); } // 0xF36199225D6D8C86
	static float _0x35A358AEF3FF5852() { return invoke<float>(0x35A358AEF3FF5852); } // 0x20AC25E781AE4A84
	static Any GET_GAME_TIMER() { return invoke<Any>(0x9D40BBF80D8F5E8A); } // 0x9CD27B0045628463 0xA4EA0691
	static float GET_FRAME_TIME() { return invoke<float>(0x3B75450B0AEE5786); } // 0x15C40837039FFAF7 0x96374262
	static float _0xFF60A48B248E0F34() { return invoke<float>(0xFF60A48B248E0F34); } // 0xE599A503B3837E1B
	static int GET_FRAME_COUNT() { return invoke<int>(0x9698C5C67A3BBE47); } // 0xFC8202EFC642E6F2 0xB477A015
	static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0x8AF26D6D6BBE6931, startRange, endRange); } // 0x313CE5879CEB6FCD 0x0562C4D0
	static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0x0ADD324BC46177EF, startRange, endRange); } // 0xD53343AA4FB7DD28 0x4051115B
	static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, Any b) { return invoke<BOOL>(0xC4A43A7E257E1FD9, x, y, z, groundZ, b); } // 0xC906A7DAB05C8D2B 0xA1BFD5E0
	static BOOL _0x9A7D0B2F6566231C(float X, float Y, float Z, float* p3, Vector3* p4) { return invoke<BOOL>(0x9A7D0B2F6566231C, X, Y, Z, p3, p4); } // 0x8BDC7BFC57A81E76 0x64D91CED
	static float ASIN(float p0) { return invoke<float>(0x1BE4E73DEEAFCE98, p0); } // 0xC843060B5765DCE7 0x998E5CAD
	static float ACOS(float p0) { return invoke<float>(0x64EBDBD74E9DA578, p0); } // 0x1D08B970013C34B6 0xF4038776
	static float TAN(float p0) { return invoke<float>(0x832FE1C1D36D60C6, p0); } // 0x632106CC96E82E91 0xD320CE5E
	static float ATAN(float p0) { return invoke<float>(0x71E93BDB8B95660C, p0); } // 0xA9D1795CD5043663 0x7A03CC8E
	static float ATAN2(float p0, float p1) { return invoke<float>(0x891E2ECBAA111C66, p0, p1); } // 0x8927CBF9D22261A4 0x2508AC81
	static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6) { return invoke<float>(0xF18329472591CFE6, x1, y1, z1, x2, y2, z2, p6); } // 0xF1B760881820C952 0xF698765E
	static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x36C9BE33708F029F, x1, y1, x2, y2); } // 0x186FC4BE848E1C92 0xDBF75E58
	static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0x2C393A56EDEECDE4, dx, dy); } // 0x2FFB6B224F4B2926 0xD209D52B
	static float _0x9EC422609394CCD1(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<float>(0x9EC422609394CCD1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7F8F6405F4777AF6 0x89459F0A
	static Vector3 _0xF7D483ACEC2C4092(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { return invoke<Vector3>(0xF7D483ACEC2C4092, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x21C235BC64831E5A 0xCAECF37E
	static BOOL _0x6CF5B4D842DA6132(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) { return invoke<BOOL>(0x6CF5B4D842DA6132, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF56DFB7B61BE7276 0xC6CC812C
	static void SET_BIT(int* var, int bit) { invoke<Void>(0x9956FB0E4B50ECB8, var, bit); } // 0x933D6A9EEC1BACD0 0x4EFE7E6B
	static void CLEAR_BIT(int* var, int bit) { invoke<Void>(0x73817D396768E4C6, var, bit); } // 0xE80492A9AC099A93 0x8BC9E618
	static Hash GET_HASH_KEY(char* value) { return invoke<Hash>(0xC7C6DDDE84A8E734, value); } // 0xD24D37CC275948CC 0x98EFF6F1
	static void _0x8AC652E645CB769A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) { invoke<Void>(0x8AC652E645CB769A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xF2F6A2FA49278625 0x87B92190
	static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0x989F26E330A31BF7, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xA61B4DF533DCB56E 0xC013972F
	static BOOL IS_POSITION_OCCUPIED(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10) { return invoke<BOOL>(0xED2B37E48AC9BA42, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0xADCDE75E1C60F32D 0x452E8D9E
	static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0x1C0F4EEEC17673E5, p0, p1, p2, p3, p4, p5, p6); } // 0xE54E209C35FFA18D 0xC161558D
	static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xB86B1248EA9B87EA, X, Y, Z, radius, p4, p5, p6, p7); } // 0xA56F01F3765B93A0 0x854E9AB8
	static void _0x73EDB2D07DD56E87(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x73EDB2D07DD56E87, x, y, z, radius, p4, p5, p6, p7); } // 0x957838AAF91BD12D 0x20E4FFD9
	static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8) { invoke<Void>(0xC797AB6C3A6482E1, x, y, z, radius, p4, p5, p6, p7, p8); } // 0x01C7B9B38428AEB6 0x63320F3C
	static void CLEAR_ANGLED_AREA_OF_VEHICLES(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { invoke<Void>(0xF8ACB2F30B3987CD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x11DB3500F042A8AA 0xF11A3018
	static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flag) { invoke<Void>(0xFF08C54E7EC23A77, x, y, z, radius, flag); } // 0xDD9B9B385AAC7F5B 0xBB720FE7
	static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0xB0A7E0A62FB61A06, x, y, z, radius, unk); } // 0xBE31FD6CE464AC59 0x25BE7FA8
	static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0x9A48C517359EE773, x, y, z, radius, unk); } // 0x04F8FC8FCF58F88D 0x95C53824
	static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, BOOL unk) { invoke<Void>(0x28705A5E63C175CC, x, y, z, radius, unk); } // 0x0A1CB9094635D1A6 0x18DB5434
	static void _0x8C352D8FF23C886D() { invoke<Void>(0x8C352D8FF23C886D); } // 0x7EC6F9A478A6A512
	static void SET_SAVE_MENU_ACTIVE(BOOL p0) { invoke<Void>(0xFDE463C6A372C576, p0); } // 0xC9BF75D28165FF77 0xF5CCF164
	static Any _0x73C4B9ECB2EDB950() { return invoke<Any>(0x73C4B9ECB2EDB950); } // 0x397BAA01068BAA96 0x39771F21
	static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0x812395BCE95289CD, toggle); } // 0xB938B7E6D3C0620C 0xEC2A0ECF
	static void _0x3E61D4E5A6909562(BOOL p0) { invoke<Void>(0x3E61D4E5A6909562, p0); } // 0xB51B9AB9EF81868C 0x75B06B5A
	static Any _0x025B62D3FAE6A933() { return invoke<Any>(0x025B62D3FAE6A933); } // 0x075F1D57402C93BA 0x2569C9A7
	static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(char* scriptName) { invoke<Void>(0xCA3345CE8849CB88, scriptName); } // 0x9DC711BC69C548DF 0x9F861FD4
	static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xBD9A2AF38E96A0ED); } // 0x9243BAC96D64C050 0x878486CE
	static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0x8D9DA7993C712026, x, y, z, p3, p4); } // 0x1F464EF988465A81 0x4F3E3104
	static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0x3C9493E26CA77A59, hospitalIndex, toggle); } // 0xC8535819C450EBA8 0x09F49C72
	static Any ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<Any>(0xD0335D6D674EFF16, p0, p1, p2, p3, p4); } // 0x452736765B31FC4B 0xE96C29FE
	static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0x8A3C6C451093C6A2, policeIndex, toggle); } // 0x23285DED6EBD7EA3 0x0A280324
	static void _0xC9C7360EBBA7834D(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC9C7360EBBA7834D, p0, p1, p2, p3); } // 0x706B5EDCAA7FA663
	static void _0x09C861EEE0DD41F7() { invoke<Void>(0x09C861EEE0DD41F7); } // 0xA2716D40842EAF79
	static void _DISABLE_AUTOMATIC_RESPAWN(BOOL disableRespawn) { invoke<Void>(0xB2F50649D78A758A, disableRespawn); } // 0x2C2B3493FBF51C71 0x296574AE
	static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0x753875ECA9A6014E, toggle); } // 0x21FFB63D8C615361 0xDA13A4B6
	static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0x411F5C5856A421B7, toggle); } // 0x4A18E01DF2C87B86 0xC9F6F0BC
	static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0x3795BAD74B7A7E52, toggle); } // 0x1E0B4DC0D990A4E7 0xCB074B9D
	static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xBE3A91305A4366F2, toggle); } // 0xDA66D2796BA33F12 0xACDE6985
	static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xCD2EB6E5576B3C63, toggle); } // 0xF3D78F59DFE18D79 0x6E00EB0B
	static Any REGISTER_SAVE_HOUSE(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) { return invoke<Any>(0xBA815CF035FEEDBB, p0, p1, p2, p3, p4, p5, p6); } // 0xC0714D0A7EEECA54 0x39C1849A
	static void SET_SAVE_HOUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xED79690A62900869, p0, p1, p2); } // 0x4F548CABEAE553BC 0xC3240BB4
	static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xC6B46B235F10CD61, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1162EA8AE9D24EEA 0x47436C12
	static Any _0xE7654DC32200CCDB(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0xE7654DC32200CCDB, p0, p1, p2, p3); } // 0xA4A0065E39C9F25C 0xC4D71AB4
	static void DO_AUTO_SAVE() { invoke<Void>(0x893F59D532C06630); } // 0x50EEAAD86232EE55 0x54C44B1A
	static Any _0xE74C122543876846() { return invoke<Any>(0xE74C122543876846); } // 0x6E04F06094C87047 0xA8546914
	static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0x4650ED1E44B3751F); } // 0x69240733738C19A0 0x36F75399
	static Any _0x261949D2FA148081() { return invoke<Any>(0x261949D2FA148081); } // 0x2107A3773771186D 0x78350773
	static void _0x1C9AB67564742211() { invoke<Void>(0x1C9AB67564742211); } // 0x06462A961E94B67C 0x5A45B11A
	static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0x22497115C9756990, p0, p1); } // 0xE0E500246FF73D66 0x17F4F44D
	static void _0x86C26BDCCA47880E(Any p0) { invoke<Void>(0x86C26BDCCA47880E, p0); } // 0x69FE6DC87BD2A5E9 0x81216EE0
	static void END_REPLAY_STATS() { invoke<Void>(0x5FE1604C70A207C6); } // 0xA23E821FBDF8A5F2 0xCB570185
	static Any _0x30D24EC0E80325A5() { return invoke<Any>(0x30D24EC0E80325A5); } // 0xD642319C54AADEB6 0xC58250F1
	static Any _0x9007A80DE97F6713() { return invoke<Any>(0x9007A80DE97F6713); } // 0x5B1F2E327B6B6FE1 0x50C39926
	static Any _0x5F06A766A283EFD4() { return invoke<Any>(0x5F06A766A283EFD4); } // 0x2B626A0150E4D449 0x710E5D1E
	static Any _0x47C64C0C85190E5B() { return invoke<Any>(0x47C64C0C85190E5B); } // 0xDC9274A7EF6B2867 0xC7BD1AF0
	static Any _0xB819CE6EBF643E39(Any p0) { return invoke<Any>(0xB819CE6EBF643E39, p0); } // 0x8098C8D6597AAE18 0x22BE2423
	static void CLEAR_REPLAY_STATS() { invoke<Void>(0x48E7D0C61210F4A5); } // 0x1B1AB132A16FDA55 0xC47DFF02
	static Any _0xA3A1573B235D9CB0() { return invoke<Any>(0xA3A1573B235D9CB0); } // 0x72DE52178C291CB5 0xF62B3C48
	static Any _0x79E8CBF8383FCE13() { return invoke<Any>(0x79E8CBF8383FCE13); } // 0x44A0BDC559B35F6E 0x3589452B
	static Any _0xD126BECAFC9B1B0B() { return invoke<Any>(0xD126BECAFC9B1B0B); } // 0xEB2104E905C6F2E9
	static Any _0xDF24C1C5EE49D2E9() { return invoke<Any>(0xDF24C1C5EE49D2E9); } // 0x2B5E102E4A42F2BF 0x144AAF22
	static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x4985550CA3D5CAE5); } // 0x8A75CE2956274ADD 0x40CE4DFD
	static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0x93B861AEF23C1C4C, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); } // 0x867654CBC7606F2C 0xCB7415AC
	static void _0x870B7D0A65A3A117(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isNotAudible, BOOL isInVisible, float speed, Entity entity) { invoke<Void>(0x870B7D0A65A3A117, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isNotAudible, isInVisible, speed, entity); } // 0xE3A7742E0B7A2F8B 0x52ACCB7B
	static void _0xE7C0F3431196ABA9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13, Any p14, Any p15, Any p16, Any p17) { invoke<Void>(0xE7C0F3431196ABA9, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); } // 0xBFE5756E7407064A
	static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0x67060D73A7F90F25, modelHash, minimum, maximum); } // 0x03E8D3D5F549087A 0x91ABB8E0
	static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0x510705DAE0A8BF53, fakeWantedLevel); } // 0x1454F2448DE30163 0x85B1C9FA
	static Any _0xBA47EF26162D30B0() { return invoke<Any>(0xBA47EF26162D30B0); } // 0x4C9296CBCD1B971E 0x0022A430
	static BOOL IS_BIT_SET(int value, int bit) { return invoke<BOOL>(0xB519E5386FBF69E5, value, bit); } // 0xA921AA820C25702F 0x902E26AC
	static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0x84F8E14E5599C7BF, toggle); } // 0xF14878FC50BEC6EE 0x20AB0B6B
	static void _0x4417CDCAE595E404(BOOL p0) { invoke<Void>(0x4417CDCAE595E404, p0); } // 0xDEA36202FC3382DF 0x082BA6F2
	static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xB203AD190D025841, toggle); } // 0x19E00D7322C6F85B 0x348B9046
	static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x9DAD36BD64512352); } // 0x2B4A15E44DE0F478 0x53A95E13
	static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0x6FEE01121BB93289); } // 0x7B30F65D7B710098 0x7605EF6F
	static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xD08316D59E3C1DC3); } // 0x61A23B7EDA9BDA24 0x5C3BF51B
	static Any _0xBB562C2C7F51D9EC() { return invoke<Any>(0xBB562C2C7F51D9EC); } // 0xD3D15555431AB793 0xBAF17315
	static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0x623F98022BC99367, profileSetting); } // 0xC488FF2356EA7791 0xD374BEBC
	static BOOL ARE_STRINGS_EQUAL(char* string1, char* string2) { return invoke<BOOL>(0x04E7E853E31F41A3, string1, string2); } // 0x0C515FAB3FF9EA92 0x877C0BC5
	static int COMPARE_STRINGS(char* str1, char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0x45145805A95E6CC4, str1, str2, matchCase, maxLength); } // 0x1E34710ECD4AB0EB 0xFE25A58F
	static int ABSI(int value) { return invoke<int>(0xF073E12B43682F7D, value); } // 0xF0D31AD191A74F87 0xB44677C5
	static float ABSF(float value) { return invoke<float>(0x7F38A542899D217A, value); } // 0x73D57CFFDD12C355 0xAF6F6E0B
	static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x3323FE8B6711FC4E, x1, y1, z1, x2, y2, z2); } // 0xFEFCF11B01287125 0x0483715C
	static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { return invoke<BOOL>(0xC77E15B3AC49D8CF, x1, y1, z1, x2, y2, z2, unknown); } // 0x5270A8FBC098C3F8 0x78E1A557
	static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL p7) { return invoke<BOOL>(0xE31E0B1502061553, x1, y1, z1, x2, y2, z2, type, p7); } // 0x2E0DC353342C4A6D 0x2B73BCF6
	static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, BOOL p8) { return invoke<BOOL>(0x1D62E839BC1223D9, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xF0BC12401061DEA0 0xD1AE2681
	static BOOL _0xC1D1BBC7E173C798(float p0, float p1, float p2, Any p3, float p4, BOOL p5) { return invoke<BOOL>(0xC1D1BBC7E173C798, p0, p1, p2, p3, p4, p5); } // 0x34318593248C8FB2 0xBE81F1E2
	static Any _0x3E70A25B2E771F9F(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0x3E70A25B2E771F9F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x8D7A43EC6A5FEA45 0x1A40454B
	static Any _0x0AA46CCD16B46592(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0AA46CCD16B46592, p0, p1, p2, p3, p4); } // 0xDFB4138EEFED7B81 0x6BDE5CE4
	static Any _0xAC4A06357AE3A443(Ped ped, Hash weaponhash, float p2, float p3, float p4, float p5) { return invoke<Any>(0xAC4A06357AE3A443, ped, weaponhash, p2, p3, p4, p5); } // 0x82FDE6A57EE4EE44 0x507BC6F7
	static BOOL IS_BULLET_IN_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7) { return invoke<BOOL>(0x6018DB69EB3D81CB, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x1A8B5F3C01E2B477 0xE2DB58F7
	static BOOL IS_BULLET_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4) { return invoke<BOOL>(0x742CA22C114D89E4, p0, p1, p2, p3, p4); } // 0x3F2023999AD51C1F 0xB54F46CA
	static BOOL IS_BULLET_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6) { return invoke<BOOL>(0x9FC47846E4976C2A, p0, p1, p2, p3, p4, p5, p6); } // 0xDE0F6D7450D37351 0xAB73ED26
	static BOOL HAS_BULLET_IMPACTED_IN_AREA(float p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x8B527A53714D07F2, p0, p1, p2, p3, p4, p5); } // 0x9870ACFB89A90995 0x902BC7D9
	static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0x785B0F6DB3FAA322, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xDC8C5D7CFEAB8394 0x2C2618CC
	static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0x7ECD3D8283875DD1); } // 0xA72BC0B675B1519E 0x40282018
	static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xFD563D1BF81A2CB8); } // 0x4D982ADB1978442D 0x46FB06A5
	static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xA4844394CE04D85D); } // 0xF6201B4DAF662A9D 0x24005CC8
	static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0x26A43F8C0E764E33); } // 0xCCA1072C29D096C2 0x4C0D5303
	static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xA78EA29AC2FFBADE); } // 0x48AF36444B965238 0x4D5D9EE3
	static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0x07D34705DA95B399); } // 0x9F1935CA1F724008 0x944BA1DC
	static BOOL IS_STRING_NULL(char* string) { return invoke<BOOL>(0x356491C12DAD1A37, string); } // 0xF22B6C47C6EAB066 0x8E71E00F
	static BOOL IS_STRING_NULL_OR_EMPTY(char* string) { return invoke<BOOL>(0xF6917DE0E003509D, string); } // 0xCA042B6957743895 0x42E9F2CA
	static BOOL STRING_TO_INT(char* string, int* outInteger) { return invoke<BOOL>(0xA251EC026A94C9C2, string, outInteger); } // 0x5A5F40FE637EB584 0x590A8160
	static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0x68E79DE01AE19A63, var, rangeStart, rangeEnd, p3); } // 0x8EF07E15701D61ED 0x32094719
	static Any GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<Any>(0x10157A1031EA65C7, var, rangeStart, rangeEnd); } // 0x53158863FCC0893A 0xCA03A1E5
	static Any ADD_STUNT_JUMP(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16) { return invoke<Any>(0x00BF22B5FAEE1971, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); } // 0x1A992DA297A4630C 0xB630E5FF
	static Any ADD_STUNT_JUMP_ANGLED(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18) { return invoke<Any>(0x6FF9921C75C2CAF1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); } // 0xBBE5D803A5360CBF 0xB9B7E777
	static void DELETE_STUNT_JUMP(Any p0) { invoke<Void>(0x36AB544C8307FA95, p0); } // 0xDC518000E39DAE1F 0x840CB5DA
	static void ENABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0xDEAD48CCFDD9059B, p0); } // 0xE369A5783B866016 0x9D1E7785
	static void DISABLE_STUNT_JUMP_SET(Any p0) { invoke<Void>(0x94F44CE6FEFB42A5, p0); } // 0xA5272EBEDD4747F6 0x644C9FA4
	static void _0x741A37BC3BBF8782(BOOL p0) { invoke<Void>(0x741A37BC3BBF8782, p0); } // 0xD79185689F8FD5DF 0x3C806A2D
	static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0x7C93CEC4318F368C); } // 0x7A3F19700A4D0525 0xF477D0B1
	static BOOL _0xBDE973DE3656A03F() { return invoke<BOOL>(0xBDE973DE3656A03F); } // 0x2272B0A1343129F4 0x021636EE
	static Any _0x8B7B48C3038FB067() { return invoke<Any>(0x8B7B48C3038FB067); } // 0x996DD1E1E02F1008 0x006F9BA2
	static Any _0xA8065FF111C3CE17() { return invoke<Any>(0xA8065FF111C3CE17); } // 0x6856EC3D35C81EA4
	static void CANCEL_STUNT_JUMP() { invoke<Void>(0xD50DCE28F8A47847); } // 0xE6B7B0ACD4E4B75E 0xF43D9821
	static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0x307133C47B1565B0, toggle); } // 0x577D1284D6873711 0x8230FF6C
	static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0x8A10FCF639EC0104, toggle); } // 0xAA391C728106F7AF 0xA0C3CE29
	static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xC1F0511236455569, toggle); } // 0xB98236CAAECEF897 0xD06F1720
	static BOOL _0x5060C554F558CA70(Any p0, Any p1) { return invoke<BOOL>(0x5060C554F558CA70, p0, p1); } // 0x071E2A839DE82D90 0xFF6191E1
	static BOOL _0xD36263E99066A844(Any p0) { return invoke<BOOL>(0xD36263E99066A844, p0); } // 0x557E43C447E700A8
	static void _ENABLE_MP_DLC_MAPS(BOOL toggle) { invoke<Void>(0xAE2D30CE150F0907, toggle); } // 0x9BAE5AD2508DF078 0x721B2492
	static void _SET_UNK_MAP_FLAG(int flag) { invoke<Void>(0x515F66600A2670E2, flag); } // 0xC5F0A8EBD3F361CE 0xE202879D
	static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x35F24F762994A85A); } // 0x7EA2B6AF97ECA6ED 0x8FF6232C
	static void POPULATE_NOW() { invoke<Void>(0x0A2787ABCADFF64B); } // 0x7472BB270D7B4F3E 0x72C20700
	static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xA1343A2A909307D0); } // 0xCBAD6729F7B1F4FC 0x6F203C6E
	static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xA5752519E068F0C3, level); } // 0x740E14FAD5842351 0x2D833F4A
	static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xE838C8466BD0AA3F, p0, p1, p2); } // 0xA9575F812C6A7997 0x881A694D
	static void STOP_SAVE_DATA() { invoke<Void>(0x099FA28A49395A50); } // 0x74E20C9145FB66FD 0x3B1C07C8
	static Any _0xFAEC2D6E18F60333(BOOL p0) { return invoke<Any>(0xFAEC2D6E18F60333, p0); } // 0xA09F896CE912481F 0x9EF0BC64
	static void REGISTER_INT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x172AECEDC76A1D63, p0, name); } // 0x34C9EE5986258415 0xB930956F
	static void _0x66BE1C01749ECE5A(Any* p0, Any* p1) { invoke<Void>(0x66BE1C01749ECE5A, p0, p1); } // 0xA735353C77334EA0
	static void REGISTER_ENUM_TO_SAVE(Any* p0, char* name) { invoke<Void>(0x1A26567E6FED4266, p0, name); } // 0x10C2FA78D0E128A1 0x9B38374A
	static void REGISTER_FLOAT_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xE62830351C386B2C, p0, name); } // 0x7CAEC29ECB5DFEBB 0xDB06F7AD
	static void REGISTER_BOOL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xF3EBA3F2A9560EB5, p0, name); } // 0xC8F4131414C835A1 0x5417E0E0
	static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, char* name) { invoke<Void>(0xEDEE88F170E72583, p0, name); } // 0xEDB1232C5BEAE62F 0x284352C4
	static void _0xE5CDC269D9917341(Any* p0, char* name) { invoke<Void>(0xE5CDC269D9917341, p0, name); } // 0x6F7794F28C6B2535 0xE2089749
	static void _0x59EA3AA7756AB6C1(Any* p0, char* name) { invoke<Void>(0x59EA3AA7756AB6C1, p0, name); } // 0x48F069265A0E4BEC 0xF91B8C33
	static void _0x2086E5D8B2286005(Any* p0, char* name) { invoke<Void>(0x2086E5D8B2286005, p0, name); } // 0x8269816F6CFD40F8 0x74E8FAD9
	static void _0x4FB577DCC6D9501F(Any* p0, char* name) { invoke<Void>(0x4FB577DCC6D9501F, p0, name); } // 0xFAA457EF263E8763 0x6B4335DD
	static void _START_SAVE_STRUCT(Any* p0, int p1, char* structName) { invoke<Void>(0xA4C8238928F57A84, p0, p1, structName); } // 0xBF737600CDDBEADD 0xFB45728E
	static void STOP_SAVE_STRUCT() { invoke<Void>(0xD104A14B4DFCDCC9); } // 0xEB1774DF12BB9F12 0xC2624A28
	static void _START_SAVE_ARRAY(Any* p0, int p1, char* arrayName) { invoke<Void>(0x4C36C6971FA7F742, p0, p1, arrayName); } // 0x60FE567DF1B1AF9D 0x893A342C
	static void STOP_SAVE_ARRAY() { invoke<Void>(0x0C988706492A3344); } // 0x04456F95153C6BE4 0x0CAD8217
	static void _0xC2D151904C72E95F(Any p0, Any p1) { invoke<Void>(0xC2D151904C72E95F, p0, p1); } // 0xDC0F817884CDD856 0x0B710A51
	static void _0x3669C8CA8EF6ED20(Any p0, Any p1) { invoke<Void>(0x3669C8CA8EF6ED20, p0, p1); } // 0x9B2BD3773123EA2F 0xE0F0684F
	static int _0x186EE8D39AA494FF(int p0) { return invoke<int>(0x186EE8D39AA494FF, p0); } // 0xEB4A0C2D56441717 0x3CE5BF6B
	static Any CREATE_INCIDENT(Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<Any>(0xB966431F1A283F6B, p1, p2, p3, p4, p5, p6, p7); } // 0x3F892CAF67444AE7 0xFC5FF7B3
	static BOOL CREATE_INCIDENT_WITH_ENTITY(int p0, Entity p1, int p2, float p3, Any* p4) { return invoke<BOOL>(0x28DEE46190AC5C47, p0, p1, p2, p3, p4); } // 0x05983472F0494E60 0xBBC35B03
	static void DELETE_INCIDENT(int* incidentId) { invoke<Void>(0xAAC89012CED4BE63, incidentId); } // 0x556C1AA270D5A207 0x212BD0DC
	static BOOL IS_INCIDENT_VALID(Any p0) { return invoke<BOOL>(0x047C317D140905D5, p0); } // 0xC8BC6461E629BEAA 0x31FD0BA4
	static void _0x6FF6DD3ED4C5D0D2(Any p0, Any p1, Any p2) { invoke<Void>(0x6FF6DD3ED4C5D0D2, p0, p1, p2); } // 0xB08B85D860E7BA3C 0x0242D88E
	static void _0x989C3B333EC85E13(Any p0, float p1) { invoke<Void>(0x989C3B333EC85E13, p0, p1); } // 0xD261BA3E7E998072 0x1F38102E
	static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xE9A7EC94632C563B, x1, y1, z1, x2, y2, z2, distance, spawnPoint); } // 0x6874E2190B0C1972 0x71AEFD77
	static Any _0xBFC38F4266249AFE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<Any>(0xBFC38F4266249AFE, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x67F6413D3220E18D 0x42BF09B3
	static BOOL _0xC4B3EE5AFA7A0043(Any p0) { return invoke<BOOL>(0xC4B3EE5AFA7A0043, p0); } // 0x1327E2FE9746BAEE
	static void _0xC5473F914A9A7BB9(Any p0, BOOL p1) { invoke<Void>(0xC5473F914A9A7BB9, p0, p1); } // 0xB129E447A2EDA4BF 0xFBDBE374
	static Any _0x457B4A2894F960D3(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<Any>(0x457B4A2894F960D3, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x32C7A7E8C43A1F80
	static void _0xE3B8425E2F4C5053(Any p0, BOOL p1) { invoke<Void>(0xE3B8425E2F4C5053, p0, p1); } // 0xE6869BECDD8F2403
	static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xDD4A29C21E13D3D8, ped, toggle, p2); } // 0x28A04B411933F8A6 0x0BD3F9EC
	static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xEA028337D6149035, ped); } // 0x5D5479D115290C3F 0x04A947BA
	static void _0xD9AC0403C596A71F(Any p0, Any* p1, Any* p2, float p3, float p4, BOOL p5) { invoke<Void>(0xD9AC0403C596A71F, p0, p1, p2, p3, p4, p5); } // 0xE266ED23311F24D4 0xC20A7D2B
	static BOOL _0x65F61E09A8E057B8(Any p0) { return invoke<BOOL>(0x65F61E09A8E057B8, p0); } // 0x17DF68D720AA77F8 0x8501E727
	static BOOL _0x540C2D880B52AE96(Any p0) { return invoke<BOOL>(0x540C2D880B52AE96, p0); } // 0x19BFED045C647C49 0x1A332D2D
	static BOOL _0x592B4D6ED3582B9E(Any p0) { return invoke<BOOL>(0x592B4D6ED3582B9E, p0); } // 0xE95B0C7D5BA3B96B
	static void _0x5826AC13A1761E49(Any p0, Any p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x5826AC13A1761E49, p0, p1, p2, p3, p4, p5); } // 0x8FA9C42FC5D7C64B 0x0C8865DF
	static void _0x211949219AA693E3(Any p0, Any* p1, float p2) { invoke<Void>(0x211949219AA693E3, p0, p1, p2); } // 0x54F157E0336A3822 0x49F977A9
	static void _0x8157AEF14F42B54B(Any p0, Any p1, Any p2) { invoke<Void>(0x8157AEF14F42B54B, p0, p1, p2); } // 0xD10F442036302D50 0x6F009E33
	static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xEF14A04F3A5B5E87); } // 0x77A84429DD9F0A15 0xDA65ECAA
	static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float p0) { invoke<Void>(0xB1DFA8C95A11B68A, p0); } // 0x6FE601A64180D423 0x6283BE32
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0x6057B4F8E118B833, p0, p1); } // 0x44F7CBC1BEB3327D 0xABADB709
	static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0x178CB9567BDE7287, p0, p1); } // 0x48838ED9937A15D1 0x1C996BCD
	static Any _0x8C1D6F404AAB9C1F(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x8C1D6F404AAB9C1F, p0, p1, p2, p3, p4, p5, p6); } // 0x918C7B2D2FF3928B 0xF557BAF9
	static Any _0x3EBA57DBAB76D972(float p0, float p1, float p2, float p3) { return invoke<Any>(0x3EBA57DBAB76D972, p0, p1, p2, p3); } // 0x2D4259F1FEB81DA9
	static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(Any p0) { invoke<Void>(0x0574E56B43CD5009, p0); } // 0x264AC28B01B353A5 0xA8D2FB92
	static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x841AE0ACA196E380); } // 0xAC7BFD5C1D83EA75 0x9A17F835
	static void _0x759201E6F51121C7() { invoke<Void>(0x759201E6F51121C7); } // 0xD9F692D349249528 0xE0C9307E
	static void _0x4516F63F563BB85D(Any p0, Any p1) { invoke<Void>(0x4516F63F563BB85D, p0, p1); } // 0xE532EC1A63231B4F 0xA0D8C749
	static void _0x089068BB4ADDCB62(Any p0, Any p1, Any p2) { invoke<Void>(0x089068BB4ADDCB62, p0, p1, p2); } // 0xB8721407EE9C3FF6 0x24A4E0B2
	static void _0x08791DD7D249C9E1() { invoke<Void>(0x08791DD7D249C9E1); } // 0xB3CD58CCA6CDA852 0x66C3C59C
	static void _0x6479724E345B3874(BOOL p0) { invoke<Void>(0x6479724E345B3874, p0); } // 0x2587A48BC88DFADF 0xD9660339
	static void _0x61CB5B8A040616A8(BOOL p0, char* windowTitle, Any* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, char* defaultConcat4, char* defaultConcat5, char* defaultConcat6, char* defaultConcat7, int maxInputLength) { invoke<Void>(0x61CB5B8A040616A8, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); } // 0xCA78CFA0366592FE 0xD2688412
	static void DISPLAY_ONSCREEN_KEYBOARD(BOOL p0, char* windowTitle, char* p2, char* defaultText, char* defaultConcat1, char* defaultConcat2, char* defaultConcat3, int maxInputLength) { invoke<Void>(0xE4890A904F178911, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); } // 0x00DC833F2568DBF6 0xAD99F2CE
	static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x4C0203C9C5CF4108); } // 0x0CF2B696BBF945AE 0x23D0A1CE
	static char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<char*>(0xF6D61292DA8E37CE); } // 0x8362B09B91893647 0x44828FB3
	static void _0x5F952A4880F8AADB(Any p0) { invoke<Void>(0x5F952A4880F8AADB, p0); } // 0x3ED1438C1F5C6612 0x3301EA47
	static void _0xC80ACB86216815A4(Any p0, BOOL p1) { invoke<Void>(0xC80ACB86216815A4, p0, p1); } // 0xA6A12939F16D85BE 0x42B484ED
	static void _0x96496E3CBC88F3E0(Any p0, BOOL p1) { invoke<Void>(0x96496E3CBC88F3E0, p0, p1); } // 0x1EAE0A6E978894A2 0x8F60366E
	static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xB61016BD9E8D9A7A, player); } // 0xA66C71C98D5F2CFB 0x2EAFA1D1
	static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0x20849DCA9EBBE23E, player); } // 0x11879CDD803D30F4 0x7C18FC8A
	static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xB71BC7292B20496C, player); } // 0xFF1BED81BFDC0FE0 0x96663D56
	static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0x9258E106C353F960, player); } // 0x57FFF03E423A4C0B 0x86745EF3
	static Any _0xB869248EE1F9790F() { return invoke<Any>(0xB869248EE1F9790F); } // 0x6FDDF453C0C756EC 0xC3C10FCC
	static void _0x2601FA8B39925820() { invoke<Void>(0x2601FA8B39925820); } // 0xFB00CA71DA386228 0x054EC103
	static Any _0x6FBD7D781A378269() { return invoke<Any>(0x6FBD7D781A378269); } // 0x5AA3BEFA29F03AD4 0x46B5A15C
	static void _0x56A962CE6F5E53B1() { invoke<Void>(0x56A962CE6F5E53B1); } // 0xE3D969D2785FFB5E
	static void _RESET_LOCALPLAYER_STATE() { invoke<Void>(0xFE376D89640F8E7F); } // 0xC0AA53F866B3134D 0x5D209F25
	static void _0x1ACE2360D65808F8(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1ACE2360D65808F8, p0, p1, p2, p3); } // 0x0A60017F841A54F2 0x2D33F15A
	static void _0xD3378635B6B62E1A() { invoke<Void>(0xD3378635B6B62E1A); } // 0x1FF6BF9A63E5757F 0xDF99925C
	static void _0x50688C2DBDDEAF03(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x50688C2DBDDEAF03, p0, p1, p2, p3); } // 0x1BB299305C3E8C13 0xA27F4472
	static BOOL _0x1136675A9BAAE428(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x1136675A9BAAE428, p0, p1, p2); } // 0x8EF5573A1F801A5C 0x07FF553F
	static void _0x1FA482613FFAD593() { invoke<Void>(0x1FA482613FFAD593); } // 0x92790862E36C2ADA
	static void _0xE439B51134B6903E() { invoke<Void>(0xE439B51134B6903E); } // 0xC7DB36C24634F52B
	static void _0x04594821FC3AC83B() { invoke<Void>(0x04594821FC3AC83B); } // 0x437138B6A830166A
	static void _0xCACF0F5653637C58() { invoke<Void>(0xCACF0F5653637C58); } // 0x37DEB0AA183FB6D8
	static Any _0x20B067C167CECDC2() { return invoke<Any>(0x20B067C167CECDC2); } // 0xEA2F2061875EED90
	static Any _0x0962DDBBF0977A5D() { return invoke<Any>(0x0962DDBBF0977A5D); } // 0x3BBBD13E5041A79E
	static Any _0x63E98F6655A227BA() { return invoke<Any>(0x63E98F6655A227BA); } // 0xA049A5BE0F04F2F8
	static Any _0x37DB9A6D8F28DDC3() { return invoke<Any>(0x37DB9A6D8F28DDC3); } // 0x4750FC27570311EC
	static Any _0x1F16FA2B199B6AA2() { return invoke<Any>(0x1F16FA2B199B6AA2); } // 0x1B2366C3F2A5C8DF
	static void _FORCE_SOCIAL_CLUB_UPDATE() { invoke<Void>(0x5E8C370858AFBED4); } // 0xEB6891F03362FB12
	static Any _0x70B43119EEE43BA2() { return invoke<Any>(0x70B43119EEE43BA2); } // 0x14832BF2ABA53FC5
	static void _0x662A5B7C89E79131() { invoke<Void>(0x662A5B7C89E79131); } // 0xC79AE21974B01FB2
	static BOOL _0xB37917FA28374854() { return invoke<BOOL>(0xB37917FA28374854); } // 0x684A41975F077262
	static Any _0x71A8AFC95C5058FD() { return invoke<Any>(0x71A8AFC95C5058FD); } // 0xABB2FA71C83A1B72
	static void _0xB692D622EA184074(BOOL p0) { invoke<Void>(0xB692D622EA184074, p0); } // 0x4EBB7E87AA0DBED4
	static BOOL _0xA86862CF7E5085B9() { return invoke<BOOL>(0xA86862CF7E5085B9); } // 0x9689123E3F213AA5
	static void _0xAF757515F0EB7D96(BOOL p0) { invoke<Void>(0xAF757515F0EB7D96, p0); } // 0x9D8D44ADBBA61EF2
	static void _0x6D37A81F7BB2C824() { invoke<Void>(0x6D37A81F7BB2C824); } // 0x23227DF0B2115469
	static Any _0xB6A14C2017960DFA() { return invoke<Any>(0xB6A14C2017960DFA); } // 0xD10282B6E3751BA0
}

namespace AUDIO
{
	static void PLAY_PED_RINGTONE(Any* p0, Any p1, BOOL p2) { invoke<Void>(0x74C925578FBCD3AA, p0, p1, p2); } // 0xF9E56683CA8E11A5 0x1D530E47
	static BOOL IS_PED_RINGTONE_PLAYING(Any p0) { return invoke<BOOL>(0x51EDFDDCF8689719, p0); } // 0x1E8E5E20937E3137 0xFE576EE4
	static void STOP_PED_RINGTONE(Any p0) { invoke<Void>(0x680C83D255611EC4, p0); } // 0x6C5AE23EFA885092 0xFEEA107C
	static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xD6F17BA188A65E8F); } // 0x7497D2CE2C30D24C 0x4ED1400A
	static Any _0x2448C41D5EBBD1C4() { return invoke<Any>(0x2448C41D5EBBD1C4); } // 0xC8B1B2425604CDD0 0x16FB88B5
	static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xBEFEFC8DD16895B0); } // 0xD2C91A0B572AAE56 0xB2BC25F8
	static void ADD_LINE_TO_CONVERSATION(Any p0, Any* p1, Any* p2, Any p3, Any p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, Any p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0x32A58043AAFDFBD5, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513
	static void ADD_PED_TO_CONVERSATION(Any p0, Any p1, Any* p2) { invoke<Void>(0x3F191086ED021494, p0, p1, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86
	static void _0xCB7BF79D563C53AE(Any p0, float p1, float p2, float p3) { invoke<Void>(0xCB7BF79D563C53AE, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979
	static void _0x842088D86A97CFE7(Any p0, Any p1) { invoke<Void>(0x842088D86A97CFE7, p0, p1); } // 0x892B6AB8F33606F5 0x88203DDA
	static void SET_MICROPHONE_POSITION(BOOL p0, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xCE7BDBE3038A71EC, p0, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0xB6AE90EDDE95C762 0xAD7BB191
	static void _0x9B2B29DC3F04FEBF(BOOL p0) { invoke<Void>(0x9B2B29DC3F04FEBF, p0); } // 0x0B568201DD99F0EB 0x1193ED6E
	static void _0xB902E3B8BA77ED21(BOOL p0) { invoke<Void>(0xB902E3B8BA77ED21, p0); } // 0x61631F5DF50D1C34
	static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xEB54538380C56F96, p0, p1); } // 0x252E5F915EABB675 0x38E42D07
	static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0x8FBE4F4BB035B5AB, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A
	static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x63CC0E8436B9BA82, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D
	static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xA266636E701A5733, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579
	static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xE8273F81C4CD68DD); } // 0x23641AFE870AF385 0xA170261B
	static Any _0xD770D92195D99971() { return invoke<Any>(0xD770D92195D99971); } // 0xE73364DB90778FFA 0x336F3D35
	static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xF0A330A29F97AA7E); } // 0x16754C556D2EDE3D 0xCB8FD96F
	static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0x7446606680AC3A5F); } // 0xDF0D54BE7A776737 0xE1870EA9
	static Any GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<Any>(0x465F47E0FBFEFAEE); } // 0x480357EE890C295A 0x9620E41F
	static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xC232BBFC96440A8E, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8
	static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xACA77D3E6C847C83); } // 0x9AEB285D1818C9AC 0x6CB24B56
	static Any STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<Any>(0xDA09A6E60FE9645E, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D
	static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0x1E286EB9DD72EB55); } // 0x9663FE6B7A61EB00 0x85C98304
	static void INTERRUPT_CONVERSATION(Any p0, Any* p1, Any* p2) { invoke<Void>(0xDDC391F01DFCE539, p0, p1, p2); } // 0xA018A12E5C5C2FA6 0xF3A67AF3
	static void _0xE953A0ADA38456FD(Any p0, Any* p1, Any* p2) { invoke<Void>(0xE953A0ADA38456FD, p0, p1, p2); } // 0x8A694D7A68F8DC38
	static Any _0x7F5D02DF2F7918AC(Any* p0) { return invoke<Any>(0x7F5D02DF2F7918AC, p0); } // 0xAA19F5572C38B564 0xB58B8FF3
	static void _0xAD4735269D19F9D9(BOOL p0) { invoke<Void>(0xAD4735269D19F9D9, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C
	static void REGISTER_SCRIPT_WITH_AUDIO(Any p0) { invoke<Void>(0xDFB60ABAB3033893, p0); } // 0xC6ED9D5092438D91 0xA6203643
	static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xB4E24C6F433B4FB4); } // 0xA8638BE228D4751A 0x66728EFE
	static BOOL REQUEST_MISSION_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xA943CFF4A426614F, p0, p1); } // 0x7345BDD95E62E0F2 0x916E37CA
	static BOOL REQUEST_AMBIENT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0x777504DE5E3AB797, p0, p1); } // 0xFE02FFBED8CA9D99 0x23C88BC7
	static BOOL REQUEST_SCRIPT_AUDIO_BANK(char* p0, BOOL p1) { return invoke<BOOL>(0xDF83A33BF4D93E6F, p0, p1); } // 0x2F844A8B08D76685 0x21322887
	static Any HINT_AMBIENT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0xCB16BA20D0C5D33D, p0, p1); } // 0x8F8C0E370AE62F5C 0xF1850DDC
	static Any HINT_SCRIPT_AUDIO_BANK(Any p0, Any p1) { return invoke<Any>(0x070CDE145A13679B, p0, p1); } // 0xFB380A29641EC31A 0x41FA0E51
	static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xA654125BBDCB4E1E); } // 0x0EC92A1BF0857187 0x8E8824C7
	static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xC20EDC121AFEAC4C); } // 0x65475A218FFAA93D 0x8C938784
	static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* audioBank) { invoke<Void>(0x9694B1DF874054DF, audioBank); } // 0x77ED170667F50170 0x16707ABC
	static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0x26512D4F43AB2347); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5
	static void _0xF67571B85F11C490() { invoke<Void>(0xF67571B85F11C490); } // 0x19AF7ED9B9D23058 0xA58BBF4F
	static void _0x0F7D4F6B4E2797B4() { invoke<Void>(0x0F7D4F6B4E2797B4); } // 0x9AC92EED5E4793AB
	static int GET_SOUND_ID() { return invoke<int>(0x2AD909D8CB732A41); } // 0x430386FE9BF80B45 0x6AE0AD56
	static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0x9B51AF2075B026EA, soundId); } // 0x353FC880830B88FA 0x9C080899
	static void PLAY_SOUND(int soundId, char* soundName, char* setName, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0x3E6E8DE2C5A20583, soundId, soundName, setName, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F
	static void PLAY_SOUND_FRONTEND(int soundId, char* soundName, char* setName, BOOL p3) { invoke<Void>(0xCC18B241D266EF14, soundId, soundName, setName, p3); } // 0x67C540AA08E4A6F5 0x2E458F74
	static void _0xEDE80C4E8ACDA4E5(Any* p0, Any* p1) { invoke<Void>(0xEDE80C4E8ACDA4E5, p0, p1); } // 0xCADA5A0D0702381E 0xC70E6CFA
	static void PLAY_SOUND_FROM_ENTITY(int soundId, char* soundName, Entity entity, char* setName, BOOL p4, Any p5) { invoke<Void>(0x3A8AEDC6680712C1, soundId, soundName, entity, setName, p4, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8
	static void PLAY_SOUND_FROM_COORD(int soundId, char* soundName, float x, float y, float z, char* setName, BOOL p6, Any p7, BOOL p8) { invoke<Void>(0xC0F4535E64974FE0, soundId, soundName, x, y, z, setName, p6, p7, p8); } // 0x8D8686B622B88120 0xCAD3E2D5
	static void STOP_SOUND(int soundId) { invoke<Void>(0x3948245C8BD5EDA0, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030
	static Any GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<Any>(0x62A7CDD7585F631C, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610
	static Any _0xBDC1F1F5CC764562(Any p0) { return invoke<Any>(0xBDC1F1F5CC764562, p0); } // 0x75262FD12D0A1C84 0xD064D4DC
	static void SET_VARIABLE_ON_SOUND(int soundId, Any* p1, float p2) { invoke<Void>(0x413B7EC5B1B85673, soundId, p1, p2); } // 0xAD6B3148A78AE9B6 0x606EE5FA
	static void SET_VARIABLE_ON_STREAM(Any* p0, float p1) { invoke<Void>(0xCF65A04693FE409A, p0, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C
	static void OVERRIDE_UNDERWATER_STREAM(Any* p0, BOOL p1) { invoke<Void>(0x1AA4AEBB7312BE47, p0, p1); } // 0xF2A9CDABCEA04BD6 0x9A083B7E
	static void _0xD5F1F28DB3C7BB79(Any* p0, float p1) { invoke<Void>(0xD5F1F28DB3C7BB79, p0, p1); } // 0x733ADF241531E5C2 0x62D026BE
	static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0x60B62574BB51DADA, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E
	static void _PLAY_AMBIENT_SPEECH1(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0x489E3B00AFB0758C, ped, speechName, speechParam); } // 0x8E04FEDD28D42462 0x5C57B85D
	static void _PLAY_AMBIENT_SPEECH2(Ped ped, char* speechName, char* speechParam) { invoke<Void>(0x9743ADB1B4F8A9DD, ped, speechName, speechParam); } // 0xC6941B4A3A8FBBB9 0x444180DB
	static void _PLAY_AMBIENT_SPEECH_WITH_VOICE(Ped p0, char* speechName, char* voiceName, char* speechParam, BOOL p4) { invoke<Void>(0x63170E828689585A, p0, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28
	static void _0x0AD5739973D70C62(Any* p0, Any* p1, float p2, float p3, float p4, Any* p5) { invoke<Void>(0x0AD5739973D70C62, p0, p1, p2, p3, p4, p5); } // 0xED640017ED337E45 0xA1A1402E
	static void OVERRIDE_TREVOR_RAGE(Any* p0) { invoke<Void>(0x9CCFAD189C9D5542, p0); } // 0x13AD665062541A7E 0x05B9B5CF
	static void RESET_TREVOR_RAGE() { invoke<Void>(0x1B497B571A12368C); } // 0xE78503B10C4314E0 0xE80CF0D4
	static void SET_PLAYER_ANGRY(Player player, BOOL IsAngry) { invoke<Void>(0xB44B61A34101A741, player, IsAngry); } // 0xEA241BB04110F091 0x782CA58D
	static void PLAY_PAIN(int painID, float p1, int p2) { invoke<Void>(0xC06624346F277C9C, painID, p1, p2); } // 0xBC9AE166038A5CEC 0x874BD6CB
	static void _0x169A6456B0AB702F(Any* p0) { invoke<Void>(0x169A6456B0AB702F, p0); } // 0xD01005D2BA2EB778 0x59A3A17D
	static void _0xC004C84CD014C174(Any* p0) { invoke<Void>(0xC004C84CD014C174, p0); } // 0xDDC635D5B3262C56 0x0E387BFE
	static void SET_AMBIENT_VOICE_NAME(Ped ped, char* name) { invoke<Void>(0x0814FB03E16A03C1, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1
	static void _0x4201DAE65DE1FEE4(Any p0) { invoke<Void>(0x4201DAE65DE1FEE4, p0); } // 0x40CF0D12D142A9E8
	static void _0xBCA757202280615F(Any p0, Any p1) { invoke<Void>(0xBCA757202280615F, p0, p1); } // 0x7CDC8C3B89F661B3
	static void _0xF36D9ACF9FA91D6F(Any p0, BOOL p1) { invoke<Void>(0xF36D9ACF9FA91D6F, p0, p1); } // 0xA5342D390CDA41D6
	static void _0xC1A5661DCEC3CF34(Any p0) { invoke<Void>(0xC1A5661DCEC3CF34, p0); } // 0x7A73D05A607734C7
	static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped p0) { invoke<Void>(0x6C192F2018742EC1, p0); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF
	static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0x2AA9423D1F896887, p0); } // 0x9072C8B49907BFAD 0x1972E8AA
	static BOOL IS_SCRIPTED_SPEECH_PLAYING(Any p0) { return invoke<BOOL>(0xAA0F24B8EE434531, p0); } // 0xCC9AA18DCC7084F4 0x2C653904
	static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xB43400C480010FCA, ped); } // 0x729072355FA39EC9 0x2B74A6D6
	static BOOL _0x6A47D28A15B35E78(Any p0, Any* p1, BOOL p2) { return invoke<BOOL>(0x6A47D28A15B35E78, p0, p1, p2); } // 0x49B99BF3FDA89A7A 0x8BD5F11E
	static BOOL IS_PED_IN_CURRENT_CONVERSATION(Any p0) { return invoke<BOOL>(0x14536F3E8414BD5B, p0); } // 0x049E937F18F4020C 0x7B2F0743
	static void SET_PED_IS_DRUNK(Any p0, BOOL p1) { invoke<Void>(0x5C7985EC72ABE63D, p0, p1); } // 0x95D2D383D5396B8A 0xD2EA77A3
	static void _0x67473C81D131F2A5(Any p0, Any p1, Any* p2) { invoke<Void>(0x67473C81D131F2A5, p0, p1, p2); } // 0xEE066C7006C49C0A 0x498849F3
	static BOOL _0x9DB296BA644E1744(Any p0) { return invoke<BOOL>(0x9DB296BA644E1744, p0); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF
	static void SET_ANIMAL_MOOD(Any p0, Any p1) { invoke<Void>(0x967D0A742BD9757B, p0, p1); } // 0xCC97B29285B1DC3B 0x3EA7C6CB
	static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0x8A831298A7D7CFA5); } // 0xB35CE999E8EF317E 0x6E502A5B
	static void SET_MOBILE_PHONE_RADIO_STATE(BOOL p0) { invoke<Void>(0xD4E1BBA04D5635F9, p0); } // 0xBF286C554784F3DF 0xE1E0ED34
	static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0x7510FF7BD6BD3BAE); } // 0xE8AF77C4C06ADC93 0x1C4946AC
	static char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<char*>(0x152D845A49AA4CF2); } // 0xF6D733C32076AD03 0xD909C107
	static char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<char*>(0xBBA967A067F5DF7D, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC
	static Any GET_PLAYER_RADIO_STATION_GENRE() { return invoke<Any>(0x8B9D08D1FD52E80E); } // 0xA571991A7FE6CCEB 0x872CF0EA
	static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xC2CAF88DF2FA5D09); } // 0xA151A7394A214E65 0xCF29097B
	static Any _0x9FDD98A094BB788C() { return invoke<Any>(0x9FDD98A094BB788C); } // 0x0626A247D2405330
	static void _0xE4FCB081B64B3D80() { invoke<Void>(0xE4FCB081B64B3D80); } // 0xFF266D1D0EB1195D 0x53DB6994
	static void _0x2FFE1B281F5DBE0D() { invoke<Void>(0x2FFE1B281F5DBE0D); } // 0xDD6BCF9E94425DF9 0xD70ECC80
	static void SET_RADIO_TO_STATION_NAME(char* radioStation) { invoke<Void>(0xD8AE8C92CF36C126, radioStation); } // 0xC69EDA28699D5107 0x7B36E35E
	static void SET_VEH_RADIO_STATION(Vehicle vehicle, char* radioStation) { invoke<Void>(0xE781FF2AB2406AE9, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F
	static void _0xF059358280B2F74B(Any p0) { invoke<Void>(0xF059358280B2F74B, p0); } // 0xC1805D05E6D4FE10 0x7ABB89D2
	static void SET_EMITTER_RADIO_STATION(char* emitterName, char* radioStation) { invoke<Void>(0xFC13678A649EEC6B, emitterName, radioStation); } // 0xACF57305B12AF907 0x87431585
	static void SET_STATIC_EMITTER_ENABLED(Any* p0, BOOL p1) { invoke<Void>(0x48A26AE24817AB9A, p0, p1); } // 0x399D2D3B33F1B8EB 0x91F72E92
	static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0x25B38A2F05320D9A, radioStation); } // 0xA619B168B8A8570F 0x1D82766D
	static void SET_FRONTEND_RADIO_ACTIVE(BOOL p0) { invoke<Void>(0x19A78B976FE53AD5, p0); } // 0xF7F26C6E9CC9EBB8 0xB1172075
	static void UNLOCK_MISSION_NEWS_STORY(Any p0) { invoke<Void>(0x4454C40FC32F431B, p0); } // 0xB165AB7C248B2DC1 0xCCD9ABE4
	static Any GET_NUMBER_OF_PASSENGER_VOICE_VARIATIONS(Any p0) { return invoke<Any>(0x6D91BED99B141B64, p0); } // 0x66E49BF55B4B1874 0x27305D37
	static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0x104954F19B7C6A20); } // 0x50B196FC9ED6545B 0xA2B88CA7
	static void PLAY_END_CREDITS_MUSIC(BOOL p0) { invoke<Void>(0x8775FC56CF053E99, p0); } // 0xCD536C4D33DCC900 0x8E88B3CC
	static void SKIP_RADIO_FORWARD() { invoke<Void>(0x4B3CE85016CD060A); } // 0x6DDBBDD98E2E9C25 0x10D36630
	static void FREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0x2951A90C315BF15E, radioStation); } // 0x344F393B027E38C3 0x286BF543
	static void UNFREEZE_RADIO_STATION(char* radioStation) { invoke<Void>(0x6B5ABE565D147C5F, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C
	static void SET_RADIO_AUTO_UNFREEZE(BOOL p0) { invoke<Void>(0x70785517F572DD85, p0); } // 0xC1AA9F53CE982990 0xA40196BF
	static void SET_INITIAL_PLAYER_STATION(char* radioStation) { invoke<Void>(0xED3B6BB60DA28A8D, radioStation); } // 0x88795F13FACDA88D 0x9B069233
	static void SET_USER_RADIO_CONTROL_ENABLED(BOOL p0) { invoke<Void>(0x84AE85DDEDADEB6F, p0); } // 0x19F21E63AE6EAE4E 0x52E054CE
	static void SET_RADIO_TRACK(char* radioStation, char* radioTrack) { invoke<Void>(0x5ACF666132FCA426, radioStation, radioTrack); } // 0xB39786F201FEE30B 0x76E96212
	static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE9E14B592139D8D4, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99
	static BOOL _IS_VEHICLE_RADIO_LOUD(Vehicle vehicle) { return invoke<BOOL>(0xF5D92574D09E6DA1, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A
	static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL Toggle) { invoke<Void>(0x45470749F735B66F, Toggle); } // 0x1098355A16064BB3 0x990085F0
	static Any _0x35332D08F202B52C() { return invoke<Any>(0x35332D08F202B52C); } // 0x109697E2FFBAC8A1 0x46B0C696
	static Any _0x3DFCEEF6C1816F96() { return invoke<Any>(0x3DFCEEF6C1816F96); } // 0x5F43D83FD6738741 0x2A3E5E8B
	static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x955267F95DE8B488, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB
	static void _0x055AE3016A04FAFB(Any* p0, Any* p1, BOOL p2) { invoke<Void>(0x055AE3016A04FAFB, p0, p1, p2); } // 0x4E404A9361F75BB2 0x128C3873
	static void _0xF3D7B3EC92A92E20(Any* p0) { invoke<Void>(0xF3D7B3EC92A92E20, p0); } // 0x1654F24A88A8E3FE 0x1D766976
	static int _MAX_RADIO_STATION_INDEX() { return invoke<int>(0x7C01CA309604180B); } // 0xF1620ECB50E01DE7 0xCC91FCF5
	static Any FIND_RADIO_STATION_INDEX(int station) { return invoke<Any>(0x01BB777C786D2DBB, station); } // 0x8D67489793FF428B 0xECA1512F
	static void _0x1C6AA8543A015F96(Any* p0, BOOL p1) { invoke<Void>(0x1C6AA8543A015F96, p0, p1); } // 0x774BD811F656A122 0xB1FF7137
	static void _0xA1FA5EF262C5EB04(float p0) { invoke<Void>(0xA1FA5EF262C5EB04, p0); } // 0x2C96CDB04FCA358E 0xC8B514E2
	static void _0xF98830F70FAF4349(Any* p0, Any* p1) { invoke<Void>(0xF98830F70FAF4349, p0, p1); } // 0x031ACB6ABA18C729 0xBE998184
	static void _0x827527A9013F5E72(Any p0, BOOL p1) { invoke<Void>(0x827527A9013F5E72, p0, p1); } // 0xF3365489E0DD50F9 0x8AFC488D
	static void SET_AMBIENT_ZONE_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0x1761C911FBAC0859, p0, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9
	static void CLEAR_AMBIENT_ZONE_STATE(Any* p0, BOOL p1) { invoke<Void>(0x9E05A6DC3A6F92D5, p0, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82
	static void SET_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0xAFD50D08FDED3EBA, p0, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412
	static void CLEAR_AMBIENT_ZONE_LIST_STATE(Any* p0, BOOL p1) { invoke<Void>(0x5A1A0E5D40884317, p0, p1); } // 0x120C48C614909FA4 0x38B9B8D4
	static void SET_AMBIENT_ZONE_STATE_PERSISTENT(char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x52ADE2EF2CEA8230, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672
	static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(Any* p0, BOOL p1, BOOL p2) { invoke<Void>(0xDE5F6F3DD1546950, p0, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605
	static BOOL IS_AMBIENT_ZONE_ENABLED(Any* p0) { return invoke<BOOL>(0xB1D7D3F77C6AF72F, p0); } // 0x01E2817A479A7F9B 0xBFABD872
	static void SET_CUTSCENE_AUDIO_OVERRIDE(Any* p0) { invoke<Void>(0xD1205AD4EE73C426, p0); } // 0x3B4BF5F0859204D9 0xCE1332B7
	static void GET_PLAYER_HEADSET_SOUND_ALTERNATE(Any* p0, float p1) { invoke<Void>(0xA283BF0C1020135F, p0, p1); } // 0xBCC29F935ED07688 0xD63CF33A
	static Any PLAY_POLICE_REPORT(char* name, float p1) { return invoke<Any>(0xD079B121AAC8BC2A, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62
	static void _0xF3E536DD52FDD105() { invoke<Void>(0xF3E536DD52FDD105); } // 0xB4F90FAF7670B16F
	static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xF9973E6E5A606CE2, vehicle); } // 0x1B9025BDA76822B6 0xC0EB6924
	static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL mute, int p2) { invoke<Void>(0xC4C9CB0AEDEE766E, vehicle, mute, p2); } // 0x3CDC1E622CCE0356 0x2ACAB783
	static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x8D0B60D17D46949D, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0
	static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0x539A6BBA185C22BA, toggle); } // 0x395BF71085D1B1D9 0x01D6EABE
	static void _0x7F3AD1903C6BA5F9(Any p0) { invoke<Void>(0x7F3AD1903C6BA5F9, p0); } // 0x02E93C796ABD3A97 0x3C395AEE
	static void _0xC97E6AEAEB7E8175(BOOL p0, BOOL p1) { invoke<Void>(0xC97E6AEAEB7E8175, p0, p1); } // 0x58BB377BEC7CD5F4 0x8CE63FA1
	static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xBB0D7167CB7E06AE); } // 0xD11FA52EB849D978 0xF1F51A14
	static Any GET_STREAM_PLAY_TIME() { return invoke<Any>(0xA233B7A50C06DCAB); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56
	static BOOL LOAD_STREAM(Any* p0, Any* p1) { return invoke<BOOL>(0x4549BDC1D3847C6E, p0, p1); } // 0x1F1F957154EC51DF 0x0D89599D
	static BOOL LOAD_STREAM_WITH_START_OFFSET(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0x21563023A3B6E3BE, p0, p1, p2); } // 0x59C16B79F53B3712 0xE5B5745C
	static void _0x1B228216112AADB7(Any p0) { invoke<Void>(0x1B228216112AADB7, p0); } // 0x89049DD63C08B5D1 0xA1D7FABE
	static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0x1D0533917AC6E96D, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2
	static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xCC7C50C2D78F2063, object); } // 0xEBAA9B64D76356FD 0xC5266BF7
	static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xD53B810D15468A29); } // 0x58FCE43488F9F5F4 0x2C2A16BC
	static void SPECIAL_FRONTEND_EQUAL(Any p0, Any p1, Any p2) { invoke<Void>(0x2D93858E367F2C98, p0, p1, p2); } // 0x21442F412E8DE56B 0x6FE5D865
	static void STOP_STREAM() { invoke<Void>(0xD79A44DA48F5BB1E); } // 0xA4718A1419D18151 0xD1E364DE
	static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0x3AE219FD480C0ED6, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D
	static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0x0ACF632805475D4E, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F
	static BOOL IS_AMBIENT_SPEECH_DISABLED(Any p0) { return invoke<BOOL>(0xA540F41304656A19, p0); } // 0x932C2D096A2C3FFF 0x109D1F89
	static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL set) { invoke<Void>(0xBF71B7FCF453800C, vehicle, set); } // 0x1FEF0683B96EBCF2 0x77182D58
	static void _0xE58DC0F562760DCE(Any p0) { invoke<Void>(0xE58DC0F562760DCE, p0); } // 0x9C11908013EA4715 0xDE8BA3CD
	static void SET_HORN_ENABLED(Vehicle vehicle, BOOL p1) { invoke<Void>(0xD49AE75CEA21E8EE, vehicle, p1); } // 0x76D683C108594D0E 0x6EB92D05
	static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0x9CEA752FAA417354, vehicle, p1); } // 0xE5564483E407F914 0x271A9766
	static void _0xEB8B8C2A73945CE1(Any p0, float p1) { invoke<Void>(0xEB8B8C2A73945CE1, p0, p1); } // 0x9D3AF56E94C9AE98 0x2F0A16D1
	static void USE_SIREN_AS_HORN(Any p0, BOOL p1) { invoke<Void>(0x1D7F916B20BE0BF7, p0, p1); } // 0xFA932DE350266EF8 0xC6BC16F3
	static void _0x2C8492F633E54FD4(Any p0, Any* p1) { invoke<Void>(0x2C8492F633E54FD4, p0, p1); } // 0x4F0C413926060B38 0x33B0B007
	static void _0x50C209E83021C4BE(Any p0, Any* p1, Any* p2) { invoke<Void>(0x50C209E83021C4BE, p0, p1, p2); } // 0xF1F8157B8C3F171C 0x1C0C5E4C
	static void _0xCF9FDD52A53AC489(Any p0) { invoke<Void>(0xCF9FDD52A53AC489, p0); } // 0xD2DCCD8E16E20997
	static BOOL _0x363AFE090E91DA96(Any p0) { return invoke<BOOL>(0x363AFE090E91DA96, p0); } // 0x5DB8010EE71FDEF2 0x6E660D3F
	static void _0xD8707DE156EB31F4(Any p0, float p1) { invoke<Void>(0xD8707DE156EB31F4, p0, p1); } // 0x59E7B488451F4D3A 0x23BE6432
	static void _0x58F58527F3AD5894(Any p0, float p1) { invoke<Void>(0x58F58527F3AD5894, p0, p1); } // 0x01BB4D577D38BD9E 0xE81FAC68
	static void _0xAD5421F89B35F311(Any p0, BOOL p1) { invoke<Void>(0xAD5421F89B35F311, p0, p1); } // 0x1C073274E065C6D2 0x9365E042
	static void _0x2D4BA14B2A994BCD(Any p0, BOOL p1) { invoke<Void>(0x2D4BA14B2A994BCD, p0, p1); } // 0x2BE4BC731D039D5A 0x2A60A90E
	static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL Toggle) { invoke<Void>(0xA395ED08EC4120C4, vehicle, Toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2
	static void _0x3A9CC7F724A18AFD(Any p0, BOOL p1) { invoke<Void>(0x3A9CC7F724A18AFD, p0, p1); } // 0x6FDDAD856E36988A 0x934BE749
	static void _0x5CBC595F6E7E6B72(Any p0, BOOL p1) { invoke<Void>(0x5CBC595F6E7E6B72, p0, p1); } // 0x06C0023BED16DD6B 0xE61110A2
	static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, Any p1) { invoke<Void>(0x1B873000B8B724E1, vehicle, p1); } // 0x3A539D52857EA82D 0x84930330
	static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, Any p1) { invoke<Void>(0x5A87F33F2AA9756C, vehicle, p1); } // 0x62A456AA4769EF34 0xBA2CF407
	static void _0x7F85A60128CD5FB9(Any p0, BOOL p1) { invoke<Void>(0x7F85A60128CD5FB9, p0, p1); } // 0xC15907D667F7CFB2 0x563B635D
	static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0x531EC984D3D24A68); } // 0x6D28DC1671E334FD 0x7643170D
	static void SET_GPS_ACTIVE(BOOL p0) { invoke<Void>(0x68D9F3E9F7B8C174, p0); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A
	static void PLAY_MISSION_COMPLETE_AUDIO(char* p0) { invoke<Void>(0x8E450560CD35F9F9, p0); } // 0xB138AAB8A70D3C69 0x3033EA1D
	static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0x23A868DE2970D7C5); } // 0x19A30C23F5827F8A 0x939982A1
	static Any _0x9608D82432B0DDF2() { return invoke<Any>(0x9608D82432B0DDF2); } // 0x6F259F82D873B8B8 0xCBE09AEC
	static void _0x31EC8D958A7D9BDF(BOOL p0) { invoke<Void>(0x31EC8D958A7D9BDF, p0); } // 0xF154B8D1775B2DEC 0xD2858D8A
	static BOOL START_AUDIO_SCENE(char* scene) { return invoke<BOOL>(0x91523366B2FDCD40, scene); } // 0x013A80FC08F6E4F2 0xE48D757B
	static void STOP_AUDIO_SCENE(char* scene) { invoke<Void>(0x61B624BA2305D0E5, scene); } // 0xDFE8422B3B94E688 0xA08D8C58
	static void STOP_AUDIO_SCENES() { invoke<Void>(0x1731D6B0C3C8EC5E); } // 0xBAC7FC81A75EC1A1 0xF6C7342A
	static BOOL IS_AUDIO_SCENE_ACTIVE(char* scene) { return invoke<BOOL>(0x64C1636D480771D9, scene); } // 0xB65B60556E2A9225 0xACBED05C
	static void SET_AUDIO_SCENE_VARIABLE(Any* p0, Any* p1, float p2) { invoke<Void>(0x1485AC32E4461493, p0, p1, p2); } // 0xEF21A9EF089A2668 0x19BB3CE8
	static void _0x025B1BEFE5386DEC(Any p0) { invoke<Void>(0x025B1BEFE5386DEC, p0); } // 0xA5F377B175A699C5 0xE812925D
	static void _0x28EB71E26B7A2DE2(Entity p0, char* p1, float p2) { invoke<Void>(0x28EB71E26B7A2DE2, p0, p1, p2); } // 0x153973AB99FE8980 0x2BC93264
	static void _0xD1AE9D189CB65173(Any p0, float p1) { invoke<Void>(0xD1AE9D189CB65173, p0, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC
	static Any AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<Any>(0xE4A2A0556F1D4C4B); } // 0x845FFC3A4FEEFA3E 0x86E995D1
	static BOOL PREPARE_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0x062A4B39164546AD, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C
	static BOOL CANCEL_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0x384203CA8728BC4D, eventName); } // 0x5B17A90291133DA5 0x89FF942D
	static BOOL TRIGGER_MUSIC_EVENT(char* eventName) { return invoke<BOOL>(0xE72D045151F6CA70, eventName); } // 0x706D57B0F50DA710 0xB6094948
	static Any _0x14FCF6033D3E8DF0() { return invoke<Any>(0x14FCF6033D3E8DF0); } // 0xA097AB275061FB21 0x2705C4D5
	static Any GET_MUSIC_PLAYTIME() { return invoke<Any>(0x079471FC223CE81F); } // 0xE7A0D23DC414507B 0xD633C809
	static void _0x32D58A60B8EF6DFE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x32D58A60B8EF6DFE, p0, p1, p2, p3); } // 0xFBE20329593DEC9D 0x53FC3FEC
	static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0x029A7EA4D56A8E14); } // 0xB32209EFFDC04913 0xE6B033BF
	static void _0x2E25754FDF9BE406(BOOL p0, Any p1) { invoke<Void>(0x2E25754FDF9BE406, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD
	static void _0x88B96D3BB734741A(float p0, float p1) { invoke<Void>(0x88B96D3BB734741A, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0
	static void _0xBC8A5E10D66EF594(float p0, float p1) { invoke<Void>(0xBC8A5E10D66EF594, p0, p1); } // 0x8BF907833BE275DE
	static void _0xE95D010A275BA7AA() { invoke<Void>(0xE95D010A275BA7AA); } // 0x062D5EAD4DA2FA6A 0xD87AF337
	static BOOL PREPARE_ALARM(char* alarmName) { return invoke<BOOL>(0xC167A96DA488D690, alarmName); } // 0x9D74AE343DB65533 0x084932E8
	static void START_ALARM(char* alarmName, BOOL p2) { invoke<Void>(0xCE7ED718291BC854, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B
	static void STOP_ALARM(char* alarmName, BOOL toggle) { invoke<Void>(0xD808DFD2DD2A38F5, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C
	static void STOP_ALL_ALARMS(BOOL p0) { invoke<Void>(0x7D78EDF2D6129E31, p0); } // 0x2F794A877ADD4C92 0xC3CB9DC6
	static BOOL IS_ALARM_PLAYING(char* alarmName) { return invoke<BOOL>(0xDF44EE1798BF710F, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23
	static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle veh) { return invoke<Hash>(0x9B77521650BAC668, veh); } // 0x02165D55000219AC 0xE84ABC19
	static Any _0xE8AAC222EFC3F41C(Any p0) { return invoke<Any>(0xE8AAC222EFC3F41C, p0); } // 0xACB5DCCA1EC76840 0xFD4B5B3B
	static void RESET_PED_AUDIO_FLAGS(Any p0) { invoke<Void>(0xBA6F4F7592FD3C65, p0); } // 0xF54BB7B61036F335 0xDF720C86
	static void _0x664E787F756A584C(Any p0, BOOL p1) { invoke<Void>(0x664E787F756A584C, p0, p1); } // 0xD2CC78CD3D0B50F9 0xC307D531
	static void _0x6082280D5D1F7290(Any p0, BOOL p1, Any p2) { invoke<Void>(0x6082280D5D1F7290, p0, p1, p2); } // 0xBF4DC1784BE94DFA
	static void _0x4830A790829E93A7(Any p0, BOOL p1) { invoke<Void>(0x4830A790829E93A7, p0, p1); } // 0x75773E11BA459E90
	static void _0x3B5A390A2916B766() { invoke<Void>(0x3B5A390A2916B766); } // 0xD57AAAE0E2214D11
	static void _0xFF6BC54437CEA931(BOOL p0) { invoke<Void>(0xFF6BC54437CEA931, p0); } // 0x552369F549563AD5 0x13EB5861
	static void _0x10807E36947715D3(Any p0, BOOL p1) { invoke<Void>(0x10807E36947715D3, p0, p1); } // 0x43FA0DFC5DF87815 0x7BED1872
	static void SET_AUDIO_FLAG(char* flagName, BOOL toggle) { invoke<Void>(0xD5181C7DAF762C60, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0
	static Any PREPARE_SYNCHRONIZED_AUDIO_EVENT(Any p0, Any p1) { return invoke<Any>(0xF76B08CED3846069, p0, p1); } // 0xC7ABCACA4985A766 0xE1D91FD0
	static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(Any p0, Any* p1) { return invoke<BOOL>(0x1F1F0C135E48E9E1, p0, p1); } // 0x029FE7CD1B7E2E75 0x7652DD49
	static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xC6F2714D61953F67, p0); } // 0x8B2FD4560E55DD2D 0x507F3241
	static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(Any p0) { return invoke<BOOL>(0xF646572C613F1416, p0); } // 0x92D6A88E64A94430 0xADEED2B4
	static void _0xF21F06AFB85DFB6F(Any* p0, float p1, float p2, float p3) { invoke<Void>(0xF21F06AFB85DFB6F, p0, p1, p2, p3); } // 0xC8EDE9BDBCCBA6D4 0x55A21772
	static void _0x138EB761742379ED(Any* p0, Any p1) { invoke<Void>(0x138EB761742379ED, p0, p1); } // 0x950A154B8DAB6185 0xA17F9AB0
	static void _0xF27C77AEEAC4C150(Any p0) { invoke<Void>(0xF27C77AEEAC4C150, p0); } // 0x12561FCBB62D5B9C 0x62B43677
	static void _0x9B14592024A59AD3(Any* p0, Any* p1) { invoke<Void>(0x9B14592024A59AD3, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC
	static void _0x014A4DC003D42D05(Any* p0) { invoke<Void>(0x014A4DC003D42D05, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C
	static void _0x5E7D84C99E1F7FB8() { invoke<Void>(0x5E7D84C99E1F7FB8); } // 0xE4E6DD5566D28C82 0x7262B5BA
	static Any _0x45DF7E697AF2F335() { return invoke<Any>(0x45DF7E697AF2F335); } // 0x3A48AB4445D499BE 0x93A44A1F
	static void _0xCDB3D9F969826411(Any p0) { invoke<Void>(0xCDB3D9F969826411, p0); } // 0x4ADA3F19BE4A6047 0x13777A0B
	static void _0x09AC892BE91B5F64() { invoke<Void>(0x09AC892BE91B5F64); } // 0x0150B6FF25A9E2E5 0x1134F68B
	static void _0x47F3376E59D4EE69(BOOL p0) { invoke<Void>(0x47F3376E59D4EE69, p0); } // 0xBEF34B1D9624D5DD 0xE0047BFD
	static void _0xA02F3BBB599C897B() { invoke<Void>(0xA02F3BBB599C897B); } // 0x806058BBDC136E06
	static Any _0x7335D60B26C90AA6() { return invoke<Any>(0x7335D60B26C90AA6); } // 0x544810ED9DB6BBE6
	static Any _0x09F5F3F213FFE055() { return invoke<Any>(0x09F5F3F213FFE055); } // 0x5B50ABB1FE3746F4
}

namespace CUTSCENE
{
	static void REQUEST_CUTSCENE(char* cutsceneName, int p1) { invoke<Void>(0x21CDC0BA99DF1B1B, cutsceneName, p1); } // 0x7A86743F475D9E09 0xB5977853
	static void _0x11B4892CEBF2DF81(Any* p0, Any p1, Any p2) { invoke<Void>(0x11B4892CEBF2DF81, p0, p1, p2); } // 0xC23DE0E91C30B58C 0xD98F656A
	static void REMOVE_CUTSCENE() { invoke<Void>(0x9F13924F68008214); } // 0x440AF51A3462B86F 0x8052F533
	static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0x3CBB06ED9434F6B3); } // 0xC59F528E9AB9F339 0xF9998582
	static BOOL HAS_THIS_CUTSCENE_LOADED(char* cutsceneName) { return invoke<BOOL>(0xE485EE34F10351BB, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2
	static void _0x3C4A820866042E01(Any p0) { invoke<Void>(0x3C4A820866042E01, p0); } // 0x8D9DF6ECA8768583 0x25A2CABC
	static Any _0xFC7560DB639D4C2A() { return invoke<Any>(0xFC7560DB639D4C2A); } // 0xB56BBBCC2955D9CB 0xDD8878E9
	static BOOL _0xE3F5EAA3FCA14D1F(Any p0) { return invoke<BOOL>(0xE3F5EAA3FCA14D1F, p0); } // 0x71B74D2AE19338D0 0x7B93CDAA
	static void _0x32A2E2BB4A5082BC(Any* p0, Any p1, Any p2) { invoke<Void>(0x32A2E2BB4A5082BC, p0, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9
	static void _0x03D249EFAD8D5481(Any* p0) { invoke<Void>(0x03D249EFAD8D5481, p0); } // 0x06A3524161C502BA
	static BOOL _0x5F9FBD8C2EAF5722(Any* p0) { return invoke<BOOL>(0x5F9FBD8C2EAF5722, p0); } // 0xA1C996C2A744262E
	static void _0x39B564B407A281DB(Any* p0) { invoke<Void>(0x39B564B407A281DB, p0); } // 0xD00D76A7DFC9D852
	static Any _0x3B5F53159152140D(Any* p0) { return invoke<Any>(0x3B5F53159152140D, p0); } // 0x0ABC54DE641DC0FC
	static void START_CUTSCENE(char* cutsceneName) { invoke<Void>(0x9E2BC25163283628, cutsceneName); } // 0x186D5CB5E7B0FF7B 0x210106F6
	static void START_CUTSCENE_AT_COORDS(char* cutsceneName, float x, float y, float z) { invoke<Void>(0x2F0BF668F8FD5018, cutsceneName, x, y, z); } // 0x1C9ADDA3244A1FBF 0x58BEA436
	static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xEFCAB8003504D08E, p0); } // 0xC7272775B4DC786E 0x5EE84DC7
	static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xB465CA179AAEEE91); } // 0xD220BDD222AC4A1E 0xF528A2AD
	static void SET_CUTSCENE_ORIGIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x2D3558A92409F010, p0, p1, p2, p3, p4); } // 0xB812B3FD1C01CF27 0xB0AD7792
	static void _0x65C0C17A85C13349(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x65C0C17A85C13349, p0, p1, p2, p3, p4, p5, p6); } // 0x011883F41211432A
	static Any GET_CUTSCENE_TIME() { return invoke<Any>(0x68AF03D99AD6FE8E); } // 0xE625BEABBAFFDAB9 0x53F5B5AB
	static Any GET_CUTSCENE_TOTAL_DURATION() { return invoke<Any>(0xB817066EA3EC8DDF); } // 0xEE53B14A19E480D4 0x0824EBE8
	static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0x32AB03543B776AF9); } // 0x40C8656EDAEDD569 0xC9B6949D
	static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xC28D550B12CF9650); } // 0x7C0A893088881D57 0x5DED14B4
	static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0x9E77A197C8591F81); } // 0x991251AFC3981F84 0xCCE2FE9D
	static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0x2DFE588AA3727FE3); } // 0xD3C2E180A40F031E 0xA3A78392
	static Any GET_CUTSCENE_SECTION_PLAYING() { return invoke<Any>(0x691C8BD73C2B8F27); } // 0x49010A6A396553D8 0x1026F0D6
	static Any GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(Any* p0, Any p1) { return invoke<Any>(0xE22324979B8A42CA, p0, p1); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7
	static Any _0x18AD7F000AF0F2D0() { return invoke<Any>(0x18AD7F000AF0F2D0); } // 0x583DF8E3D4AFBD98 0x5AE68AE6
	static Any _0x53C5A944681694B4(Any p0) { return invoke<Any>(0x53C5A944681694B4, p0); } // 0x4CEBC1ED31E8925E
	static void REGISTER_ENTITY_FOR_CUTSCENE(Any p0, Any* p1, Any p2, Any p3, Any p4) { invoke<Void>(0x5AF2634ABA4DA81D, p0, p1, p2, p3, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7
	static Any GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<Any>(0x75B773A66825D9E2, p0, p1); } // 0xC0741A26499654CD 0x46D18755
	static void _0x95E20B87A668026E(Any p0) { invoke<Void>(0x95E20B87A668026E, p0); } // 0x7F96F23FA9B73327
	static void SET_CUTSCENE_TRIGGER_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xC8693A620BB9D42B, p0, p1, p2, p3, p4, p5); } // 0x9896CE4721BE84BA 0x9D76D9DE
	static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<BOOL>(0xB8977DD720ED67F1, p0, p1); } // 0x645D0B458D8E17B5 0x55C30B26
	static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(Any* p0, Any p1) { return invoke<BOOL>(0x22400A8448EEFFA3, p0, p1); } // 0x4C6A6451C79E4662 0x8FF5D3C4
	static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xEBEC23E21F26CB82, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02
	static void _0xD60DE78AB9B18914(BOOL p0) { invoke<Void>(0xD60DE78AB9B18914, p0); } // 0xC61B86C9F61EB404 0x35721A08
	static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x0F9076912210A28A, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD
	static void _0xA0DB703A9F74EAE8(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xA0DB703A9F74EAE8, p0, p1, p2, p3); } // 0x20746F7B1032A3C7
	static void _0x0F786B40BFD87FFF(BOOL p0) { invoke<Void>(0x0F786B40BFD87FFF, p0); } // 0x06EE9048FD080382
	static int _0xE5021B3C1EC84FDE() { return invoke<int>(0xE5021B3C1EC84FDE); } // 0xA0FE76168A189DDB
	static void _0x7D0D736EFB74D38D(BOOL p0) { invoke<Void>(0x7D0D736EFB74D38D, p0); } // 0x2F137B508DE238F2 0x8338DA1D
	static void _0x99CE60F0AAFEC278(BOOL p0) { invoke<Void>(0x99CE60F0AAFEC278, p0); } // 0xE36A98D8AB3D3C66 0x04377C10
	static Any _0xBD10E88FFD8F7B4A() { return invoke<Any>(0xBD10E88FFD8F7B4A); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708
	static void _0x96BD1D4764BD9225(BOOL p0) { invoke<Void>(0x96BD1D4764BD9225, p0); } // 0x41FAA8FB2ECE8720 0x28D54A7F
	static void REGISTER_SYNCHRONISED_SCRIPT_SPEECH() { invoke<Void>(0xB16F935B7DE22F0F); } // 0x2131046957F31B04 0xB60CFBB9
	static void SET_CUTSCENE_PED_COMPONENT_VARIATION(Any* p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1AA2497D94D7E76D, p0, p1, p2, p3, p4); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1
	static void _0x22D369EB33738D0F(Any* p0, Any p1, Any p2) { invoke<Void>(0x22D369EB33738D0F, p0, p1, p2); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E
	static BOOL DOES_CUTSCENE_ENTITY_EXIST(Any* p0, Any p1) { return invoke<BOOL>(0x839B6A8665DFFAF2, p0, p1); } // 0x499EF20C5DB25C59 0x58E67409
	static void _0x8087AA85F8CD05A4(Any* p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8087AA85F8CD05A4, p0, p1, p2, p3, p4); } // 0x0546524ADE2E9723 0x22E9A9DE
	static Any _0x49D1700613FBCC5B() { return invoke<Any>(0x49D1700613FBCC5B); } // 0x708BDD8CD795B043 0x4315A7C5
}

namespace INTERIOR
{
	static Any GET_INTERIOR_GROUP_ID(int interiorID) { return invoke<Any>(0x50B42F1ED89D1230, interiorID); } // 0xE4A84ABF135EF91A 0x09D6376F
	static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(int interiorID, float x, float y, float z) { return invoke<Vector3>(0x52A587C34BC7C9AF, interiorID, x, y, z); } // 0x9E3B3E6D66F6E22F 0x7D8F26A1
	static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0x9D65F834482497E4); } // 0xBC72B5D7A1CBD54D 0x55226C13
	static BOOL IS_VALID_INTERIOR(int interiorID) { return invoke<BOOL>(0x4443D8D533ACB547, interiorID); } // 0x26B0E73D7EAAF4D3 0x39C0B635
	static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0x217EACC8155187DA, entity); } // 0xB365FC0C4E27FFA7 0x7DDADB92
	static void FORCE_ROOM_FOR_ENTITY(Entity entity, int interiorID, Hash roomHashKey) { invoke<Void>(0x5C27A5E531FFF781, entity, interiorID, roomHashKey); } // 0x52923C4710DD9907 0x10BD4435
	static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0x7EDEDFB3CB1ACEA0, entity); } // 0x47C2A06D4F5F424B 0xE4ACF8C3
	static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0x775F507904B16D6A, entity); } // 0x399685DB942336BC 0x91EA80EF
	static int GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<int>(0xB034B5B185BD9C69, entity); } // 0x2107BA504071A6BB 0x5C644614
	static void _0x6818FB8C56DEFA06(Entity entity, int interiorID) { invoke<Void>(0x6818FB8C56DEFA06, entity, interiorID); } // 0x82EBB79E258FA2B7 0xE645E162
	static void _0x0CF5D07AAD787F52(int interiorID, Hash roomHashKey) { invoke<Void>(0x0CF5D07AAD787F52, interiorID, roomHashKey); } // 0x920D853F3E17F1DA 0xD79803B5
	static void _0x40974B149DE65C3B(char* roomName) { invoke<Void>(0x40974B149DE65C3B, roomName); } // 0xAF348AFCB575A441 0x1F6B4B13
	static void _0x80FB098B7D04F0F4(Hash roomHashKey) { invoke<Void>(0x80FB098B7D04F0F4, roomHashKey); } // 0x405DC2AEF6AF95B9 0x0E9529CC
	static Any _GET_ROOM_KEY_FROM_GAMEPLAY_CAM() { return invoke<Any>(0xD2BFCFD9E11927B1); } // 0xA6575914D2A0B450 0x4FF3D3F5
	static void _0xE4549E869CEE8915() { invoke<Void>(0xE4549E869CEE8915); } // 0x23B59D8912F94246 0x617DC75D
	static int GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<int>(0x4D694385AA5DB67C, x, y, z); } // 0xB0F7F8663821D9C3 0xA17FBF37
	static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Any pickup, char* roomName) { invoke<Void>(0xF24518EB41FFFF94, pickup, roomName); } // 0x3F6167F351168730 0xA2A73564
	static void _0x3B150C65C40BD16E(int interiorID) { invoke<Void>(0x3B150C65C40BD16E, interiorID); } // 0x2CA429C029CCF247 0x3ADA414E
	static void UNPIN_INTERIOR(int interiorID) { invoke<Void>(0xAA4BA243DE1874F4, interiorID); } // 0x261CCE7EED010641 0xFCFF792A
	static BOOL IS_INTERIOR_READY(int interiorID) { return invoke<BOOL>(0x97ED7BE642158AAF, interiorID); } // 0x6726BDCCC1932F0E 0xE1EF6450
	static Any _0x66445C2C5416801B(int interiorID) { return invoke<Any>(0x66445C2C5416801B, interiorID); } // 0x4C2330E61D3DEB56
	static int GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, char* interiorType) { return invoke<int>(0x41D9D981197E60A2, x, y, z, interiorType); } // 0x05B7A89BD78797FC 0x96525B06
	static int _0x40DC1BA9B63590DC(float x, float y, float z, Any unknown) { return invoke<int>(0x40DC1BA9B63590DC, x, y, z, unknown); } // 0xF0F77ADB9F67E79D
	static BOOL _ARE_COORDS_COLLIDING_WITH_EXTERIOR(float x, float y, float z) { return invoke<BOOL>(0x0EDE95A6D2634A75, x, y, z); } // 0xEEA5AC2EDA7C33E8 0x7762249C
	static int GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<int>(0x1F8C689B25A0EC84, x, y, z); } // 0xEC4CF9FCB29A4424 0x7ED33DC1
	static void _ENABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xC3E68336A48C6B50, interiorID, propName); } // 0x55E86AF2712B36A1 0xC80A5DDF
	static void _DISABLE_INTERIOR_PROP(int interiorID, char* propName) { invoke<Void>(0xAB98CD587A2C806B, interiorID, propName); } // 0x420BD37289EEE162 0xDBA768A1
	static BOOL _IS_INTERIOR_PROP_ENABLED(int interiorID, char* propName) { return invoke<BOOL>(0x6B7D9F426023DA5E, interiorID, propName); } // 0x35F7DD45E8C0A16D 0x39A3CC6F
	static void REFRESH_INTERIOR(int interiorID) { invoke<Void>(0x4AF596A23A7AF177, interiorID); } // 0x41F37C3427C75AE0 0x9A29ACE6
	static void _HIDE_MAP_OBJECT_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0x70C3A33FCEA9C3AA, mapObjectHash); } // 0xA97F257D0151A6AB 0x1F375B4C
	static void DISABLE_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0x908D2AD77DB8D584, interiorID, toggle); } // 0x6170941419D7D8EC 0x093ADEA5
	static BOOL IS_INTERIOR_DISABLED(int interiorID) { return invoke<BOOL>(0xA64060F94483AC55, interiorID); } // 0xBC5115A5A939DD15 0x81F34C71
	static void CAP_INTERIOR(int interiorID, BOOL toggle) { invoke<Void>(0xC6CDC44A5BF96314, interiorID, toggle); } // 0xD9175F941610DB54 0x34E735A6
	static BOOL IS_INTERIOR_CAPPED(int interiorID) { return invoke<BOOL>(0x3333748CE8E25B18, interiorID); } // 0x92BAC8ACF88CEC26 0x18B17C80
	static void _0x3F2011AED15AFF04(BOOL toggle) { invoke<Void>(0x3F2011AED15AFF04, toggle); } // 0x9E6542F0CE8E70A3 0x5EF9C5C2
}

namespace CAM
{
	static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, Any camera, BOOL p3, BOOL p4) { invoke<Void>(0x538689EF05955EF7, render, ease, camera, p3, p4); } // 0x07E5B515DB0636FC 0x74337969
	static void _0x83AD6129F0CF8C94(Any p0, Any p1, Any p2) { invoke<Void>(0x83AD6129F0CF8C94, p0, p1, p2); } // 0xC819F3CBB62BF692 0xD3C08183
	static Cam CREATE_CAM(char* camName, BOOL p1) { return invoke<Cam>(0x01A00DEC76A48F14, camName, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D
	static Cam CREATE_CAM_WITH_PARAMS(char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xBC7920E419FEAF62, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15
	static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0x95D076F607630E2B, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE
	static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, Any p9) { return invoke<Cam>(0xF90D4D0A9F2F4A42, camHash, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A
	static void DESTROY_CAM(Cam cam, BOOL destroy) { invoke<Void>(0x74FF6D08DE291367, cam, destroy); } // 0x865908C81A2C22E9 0xC39302BD
	static void DESTROY_ALL_CAMS(BOOL destroy) { invoke<Void>(0x7FF99F250B7C9CFF, destroy); } // 0x8E5FB15663F79120 0x10C151CE
	static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xCF686B56FD5328B5, cam); } // 0xA7A932170592B50E 0x1EF89DC0
	static void SET_CAM_ACTIVE(Any cam, BOOL active) { invoke<Void>(0x63498CF6CF35C6A2, cam, active); } // 0x026FB97D0A425F84 0x064659C2
	static BOOL IS_CAM_ACTIVE(Any cam) { return invoke<BOOL>(0x64DEF1DE79E83BEB, cam); } // 0xDFB2B516207D3534 0x4B58F177
	static BOOL IS_CAM_RENDERING(Any p0) { return invoke<BOOL>(0x10F9FB82A0D63EA0, p0); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2
	static Cam GET_RENDERING_CAM() { return invoke<Cam>(0x95F1FC93DB9961BF); } // 0x5234F9F10919EABA 0x0FCF4DF1
	static Vector3 GET_CAM_COORD(Any cam) { return invoke<Vector3>(0x8CBAB68698E5C05D, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C
	static Vector3 GET_CAM_ROT(Any cam, Any p1) { return invoke<Vector3>(0x5EC00C573CB4D759, cam, p1); } // 0x7D304C1C955E3E12 0xDAC84C9F
	static float GET_CAM_FOV(Any cam) { return invoke<float>(0x80E499E856556A44, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5
	static float GET_CAM_NEAR_CLIP(Any cam) { return invoke<float>(0xCEFAF8A7DF2D69B5, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE
	static float GET_CAM_FAR_CLIP(Any cam) { return invoke<float>(0x91CEE181DFD98A83, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8
	static float GET_CAM_FAR_DOF(Any cam) { return invoke<float>(0x9225FCEB3286D064, cam); } // 0x255F8DAFD540D397 0x98C5CCE9
	static void SET_CAM_PARAMS(Any cam, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x011A61B80E2BFA7F, cam, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF
	static void SET_CAM_COORD(Any cam, float posX, float posY, float posZ) { invoke<Void>(0x34F8B34A8E9D3B57, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF
	static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int p4) { invoke<Void>(0x3B330DB318EF2761, cam, rotX, rotY, rotZ, p4); } // 0x85973643155D0B07 0xEE38B3C1
	static void SET_CAM_FOV(Any cam, float fieldOfView) { invoke<Void>(0xD2E0A9EDD55F008D, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F
	static void SET_CAM_NEAR_CLIP(Any cam, float nearClip) { invoke<Void>(0xF391BE3B04A9D7D0, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1
	static void SET_CAM_FAR_CLIP(Any cam, float farClip) { invoke<Void>(0xA3992450765E5135, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381
	static void SET_CAM_MOTION_BLUR_STRENGTH(Any cam, float blur) { invoke<Void>(0x5DF6D9B056FE98D9, cam, blur); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67
	static void SET_CAM_NEAR_DOF(Any cam, float nearDOF) { invoke<Void>(0xA1D39412A9E0B9A4, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF
	static void SET_CAM_FAR_DOF(Any cam, float farDOF) { invoke<Void>(0x8CD71EDB64C3267C, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E
	static void SET_CAM_DOF_STRENGTH(Any cam, float dofStrength) { invoke<Void>(0x0D855FABA6B7E96D, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F
	static void SET_CAM_DOF_PLANES(Any cam, float p1, float p2, float p3, float p4) { invoke<Void>(0x4781F7F404996538, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F
	static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xE54FF72A4EDD54B9, cam, toggle); } // 0x16A96863A17552BB 0x8306C256
	static void SET_USE_HI_DOF() { invoke<Void>(0xEE354F81D543F99A); } // 0xA13B0222F3D94A94 0x8BBF2950
	static void _0x55B34319C46B2B6F(Any p0, float p1) { invoke<Void>(0x55B34319C46B2B6F, p0, p1); } // 0xF55E4046F6F831DC
	static void _0x8CFF21FF3E408337(Any p0, float p1) { invoke<Void>(0x8CFF21FF3E408337, p0, p1); } // 0xE111A7C0D200CBC5
	static void _0x32AE2B99F714B823(Any p0, float p1) { invoke<Void>(0x32AE2B99F714B823, p0, p1); } // 0x7DD234D6F3914C5B
	static void _0x3EB76E714A8EA096(Any p0, float p1) { invoke<Void>(0x3EB76E714A8EA096, p0, p1); } // 0xC669EEA5D031B7DE
	static void _0x14C3821618666F00(Any p0, float p1) { invoke<Void>(0x14C3821618666F00, p0, p1); } // 0xC3654A441402562D
	static void _0x64F60EDFEAC6BFA5(Any p0, float p1) { invoke<Void>(0x64F60EDFEAC6BFA5, p0, p1); } // 0x2C654B4943BDDF7C
	static void ATTACH_CAM_TO_ENTITY(Any cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL p5) { invoke<Void>(0x8E0CB5A43A2CA4CB, cam, entity, xOffset, yOffset, zOffset, p5); } // 0xFEDB7D269E8C60E3 0xAD7C45F6
	static void ATTACH_CAM_TO_PED_BONE(int cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xFF1D531A5A8DFCC2, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C
	static void DETACH_CAM(int camHandle) { invoke<Void>(0x5FCCDBAFB8F59D19, camHandle); } // 0xA2FABBE87F4BAD82 0xF4FBF14A
	static void SET_CAM_INHERIT_ROLL_VEHICLE(int cam, Any p1) { invoke<Void>(0x21F462976AD305B4, cam, p1); } // 0x45F1DE9C34B93AE6 0xE4BD5342
	static void POINT_CAM_AT_COORD(Any cam, float x, float y, float z) { invoke<Void>(0x0A28CAE6C0060E14, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A
	static void POINT_CAM_AT_ENTITY(Any cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xB98C70F0FFEA713A, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7
	static void POINT_CAM_AT_PED_BONE(int cam, int ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0x8969BB4DA059A0C9, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049
	static void STOP_CAM_POINTING(int cam) { invoke<Void>(0xC9E81BAC16C12C2B, cam); } // 0xF33AB75780BA57DE 0x5435F6A5
	static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0x41FFD4EB842D3ED7, cam, toggle); } // 0x8C1DC7770C51DC8D 0x0C74F9AF
	static void _0x1BB7DBE047832E14(Any p0, BOOL p1) { invoke<Void>(0x1BB7DBE047832E14, p0, p1); } // 0x661B5C8654ADD825 0xE1A0B2F1
	static void _0x658FFCE70A2CD5F1(Any p0, BOOL p1) { invoke<Void>(0x658FFCE70A2CD5F1, p0, p1); } // 0xA2767257A320FC82
	static void _0xDBCAEC29334B1B7D(Any p0, BOOL p1) { invoke<Void>(0xDBCAEC29334B1B7D, p0, p1); } // 0x271017B9BA825366 0x43220969
	static void SET_CAM_DEBUG_NAME(Cam camera, char* name) { invoke<Void>(0xB350F7360AE75129, camera, name); } // 0x1B93E0107865DD40 0x9B00DF3F
	static void ADD_CAM_SPLINE_NODE(int camera, float x, float y, float z, float xRot, float yRot, float zRot, int p7, int p8, int p9) { invoke<Void>(0x68FC1C504BE170CE, camera, x, y, z, xRot, yRot, zRot, p7, p8, p9); } // 0x8609C75EC438FB3B 0xAD3C7EAA
	static void _0xA5B478AA1AC896CE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA5B478AA1AC896CE, p0, p1, p2, p3); } // 0x0A9F2A468B328E74 0x30510511
	static void _0xE57A152CF05FBFC4(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE57A152CF05FBFC4, p0, p1, p2, p3); } // 0x0FB82563989CF4FB 0xBA6C085B
	static void _0x4B1F37E2D442E106(Any p0, Any p1, Any p2) { invoke<Void>(0x4B1F37E2D442E106, p0, p1, p2); } // 0x609278246A29CA34 0xB4737F03
	static void SET_CAM_SPLINE_PHASE(int cam, float p1) { invoke<Void>(0xEFCC16B7F39A3CAC, cam, p1); } // 0x242B5874F0A4E052 0xF0AED233
	static float GET_CAM_SPLINE_PHASE(int cam) { return invoke<float>(0x2724D958D0BF9E3F, cam); } // 0xB5349E36C546509A 0x39784DD9
	static float GET_CAM_SPLINE_NODE_PHASE(Any p0) { return invoke<float>(0x728A41D4223672D3, p0); } // 0xD9D0E694C8282C96 0x7B9522F6
	static void SET_CAM_SPLINE_DURATION(int cam, int timeDuration) { invoke<Void>(0xD6575CC29E1A4D15, cam, timeDuration); } // 0x1381539FEE034CDA 0x3E91FC8A
	static void _0x9ABAC5456B262ED9(Any p0, Any p1) { invoke<Void>(0x9ABAC5456B262ED9, p0, p1); } // 0xD1B0F412F109EA5D 0x15E141CE
	static BOOL GET_CAM_SPLINE_NODE_INDEX(int cam) { return invoke<BOOL>(0x05D9DF4D2D37134A, cam); } // 0xB22B17DF858716A6 0xF8AEB6BD
	static void _0xE7685D5A019EF946(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0xE7685D5A019EF946, p0, p1, p2, p3); } // 0x83B8201ED82A9A2D 0x21D275DA
	static void _0xEA6015BE0613C5DD(Any p0, Any p1, float p2) { invoke<Void>(0xEA6015BE0613C5DD, p0, p1, p2); } // 0xA6385DEB180F319F 0xA3BD9E94
	static void OVERRIDE_CAM_SPLINE_VELOCITY(int cam, int p1, float p2, float p3) { invoke<Void>(0xF70563541C6237F7, cam, p1, p2, p3); } // 0x40B62FA033EB0346 0x326A17E2
	static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Any p0, Any p1, float p2, float p3) { invoke<Void>(0x94E001AC29C8389F, p0, p1, p2, p3); } // 0x7DCF7C708D292D55 0x633179E6
	static void _0xE28DF7A8A676FC74(Any p0, Any p1, Any p2) { invoke<Void>(0xE28DF7A8A676FC74, p0, p1, p2); } // 0x7BF1A54AE67AC070 0xC90B2DDC
	static BOOL IS_CAM_SPLINE_PAUSED(Any p0) { return invoke<BOOL>(0xAB78A87ACD52C788, p0); } // 0x0290F35C0AD97864 0x60B34FF5
	static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, BOOL easeLocation, BOOL easeRotation) { invoke<Void>(0x7D333E815920766B, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0
	static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0x10B8434FB64D5C3F, cam); } // 0x036F97C908C2B52C 0x7159CB5D
	static void SHAKE_CAM(Cam cam, char* type, float amplitude) { invoke<Void>(0x657EEE601EEC4152, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0
	static void ANIMATED_SHAKE_CAM(Cam cam, char* p1, char* p2, char* p3, float amplitude) { invoke<Void>(0x7DDCA77D712A5633, cam, p1, p2, p3, amplitude); } // 0xA2746EEAE3E577CD 0xE1168767
	static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xC09006CD9DC3C663, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B
	static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xC104F830EF46B165, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382
	static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xC49F6B0E7D5229A8, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87
	static void _0xE94EFB68977D109C(char* p0, float p1) { invoke<Void>(0xE94EFB68977D109C, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD
	static void _0x3E86321A3433AEBF(char* p0, char* p1, char* p2, float p3) { invoke<Void>(0x3E86321A3433AEBF, p0, p1, p2, p3); } // 0xC2EAE3FB8CDBED31 0xCB75BD9C
	static Any _0xB083DC83FC4E35AA() { return invoke<Any>(0xB083DC83FC4E35AA); } // 0xC912AF078AF19212 0x6AEFE6A5
	static void _0x1F89FD93C9C24721(BOOL p0) { invoke<Void>(0x1F89FD93C9C24721, p0); } // 0x1C9D7949FA533490 0x26FCFB96
	static BOOL PLAY_CAM_ANIM(Cam cam, char* animName, char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0x5D1184AC9AA0BEB3, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x9A2D0FB2E7852392 0xBCEFB87E
	static BOOL IS_CAM_PLAYING_ANIM(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x54D1352CA4BA5BDB, p0, p1, p2); } // 0xC90621D8A0CEECF2 0xB998CB49
	static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0x26FEF020E275AA9F, cam, phase); } // 0x4145A4C44FF3B5A6 0x3CB1D17F
	static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xAA2CCDDE70F3953E, cam); } // 0xA10B2DB49E92A6B0 0x345F72D0
	static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x102A9C1517158BFA, p0, p1, p2, p3); } // 0xE32EFE9AB4A9AA0C 0x9458459E
	static void _0xCA75969D3911647E(Any p0, float p1, float p2, float p3) { invoke<Void>(0xCA75969D3911647E, p0, p1, p2, p3); } // 0x503F5920162365B2 0x56F9ED27
	static void _0x5D153D4CB8AFC97B(Any p0, float p1) { invoke<Void>(0x5D153D4CB8AFC97B, p0, p1); } // 0xF9D02130ECDD1D77 0x71570DBA
	static void _0x1EA6855234D6A55F(Any p0, float p1, float p2, float p3) { invoke<Void>(0x1EA6855234D6A55F, p0, p1, p2, p3); } // 0xC91C6C55199308CA 0x60B345DE
	static void _0xBFA74B5FB9382545(Any p0) { invoke<Void>(0xBFA74B5FB9382545, p0); } // 0xC8B5C4A79CC18B94 0x44473EFC
	static BOOL _0xEF6403E3964D36A7(Any p0) { return invoke<BOOL>(0xEF6403E3964D36A7, p0); } // 0x5C48A1D6E3B33179 0xDA931D65
	static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xAEF17BDE274A1247); } // 0xB16FCE9DDC7BA182 0x9CAA05FA
	static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xDE185266FE919B68); } // 0x5A859503B0C08678 0x4F37276D
	static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xA864A37DA392324A); } // 0x797AC7CB535BA28F 0x79275A57
	static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0x845A95C48FA19489); } // 0x5C544BC6C57AC575 0xC7C82800
	static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0x2D3BB3EF936C4B76, duration); } // 0xD4E8E24955024033 0x66C1BDEE
	static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0x6A6E764D1DB633C7, duration); } // 0x891B5B39AC6302AF 0x89D01805
	static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0x01B7759F66274EDF, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A
	static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0x7D6DB785AFC32F33); } // 0x14D6F5678D8F1B37 0x9388CF79
	static Vector3 GET_GAMEPLAY_CAM_ROT(Any p0) { return invoke<Vector3>(0x94264AE83E740EB9, p0); } // 0x837765A25378F0BB 0x13A010B5
	static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xD8D6F0AE4B58E621); } // 0x65019750A0324133 0x4D6B3BFA
	static void _0x1BADF2B18B4C5E4A(float p0) { invoke<Void>(0x1BADF2B18B4C5E4A, p0); } // 0x487A82C650EB7799 0xA6E73135
	static void _0xD1A6881848B5EB56(float p0) { invoke<Void>(0xD1A6881848B5EB56, p0); } // 0x0225778816FDC28C 0x1126E37C
	static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x4AFB1627277F8C06); } // 0x743607648ADD4587 0xCAF839C2
	static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0x7FB81B1DD14A3BE4, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C
	static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xA88A23C148569DCF); } // 0x3A6867B4845BEDA2 0xFC5A4946
	static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float x, float Value2) { invoke<Void>(0x6EF372C057320AD4, x, Value2); } // 0x6D0858B8EDFD2B7D 0x6381B963
	static void _SET_GAMEPLAY_CAM_RAW_YAW(float yaw) { invoke<Void>(0x0EB7F34945FCC178, yaw); } // 0x103991D4A307D472
	static void _SET_GAMEPLAY_CAM_RAW_PITCH(float pitch) { invoke<Void>(0xD38802E41A770E17, pitch); } // 0x759E13EBC1C15C5A
	static void _0x68694AD3C454DEF6(BOOL p0) { invoke<Void>(0x68694AD3C454DEF6, p0); } // 0x469F2ECDEC046337
	static void SHAKE_GAMEPLAY_CAM(char* shakeName, float intensity) { invoke<Void>(0xD8CF6501A5B805F6, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660
	static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x77C530AE81DC3089); } // 0x016C090630DF1F89 0x3457D681
	static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0x0DB753949F029097, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A
	static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xC16BAED43F667110, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E
	static void _0x79A917B22B746D3B(Any p0) { invoke<Void>(0x79A917B22B746D3B, p0); } // 0x8BBACBF51DA047A8 0x7D3007A2
	static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xBF8EC52DA32E9599); } // 0x39B5D1B10383F0C8 0x0EF276DA
	static BOOL _0x8BC2527B17BCB215() { return invoke<BOOL>(0x8BC2527B17BCB215); } // 0x3044240D2E0FA842 0xC0B00C20
	static BOOL _0x24471670AC1888A5() { return invoke<BOOL>(0x24471670AC1888A5); } // 0x705A276EBFF3133D 0x60C23785
	static void _0xAF8B0C19E7506CDE(BOOL p0) { invoke<Void>(0xAF8B0C19E7506CDE, p0); } // 0xDB90C6CCA48940F1 0x20BFF6E5
	static void _ENABLE_CROSSHAIR_THIS_FRAME() { invoke<Void>(0xE9B7C30B67AA2738); } // 0xEA7F0AD7E9BA676F 0xA61FF9AC
	static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0x55B32F062B30EC90); } // 0x70FDA869F3317EA9 0x33C83F17
	static void _0x94BAF57E0EE705C4(Any p0) { invoke<Void>(0x94BAF57E0EE705C4, p0); } // 0x2AED6301F67007D5 0x2701A9AD
	static void _0x28892C2A5B1FBC09(Any p0) { invoke<Void>(0x28892C2A5B1FBC09, p0); } // 0x49482F9FCD825AAA 0xC4736ED3
	static void _0xF886F1FE90D2BF96(Any p0) { invoke<Void>(0xF886F1FE90D2BF96, p0); } // 0xFD3151CD37EA2245
	static void _0xF1FB6B2EBC7BA60E() { invoke<Void>(0xF1FB6B2EBC7BA60E); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57
	static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0x86ECD59CFE6143AC, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2
	static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0x70DA042808C9FE9A); } // 0xC6D3D26810C8E0F9 0x9F9E856C
	static BOOL SET_FOLLOW_PED_CAM_CUTSCENE_CHAT(Any* p0, Any p1) { return invoke<BOOL>(0xBC9AE102EA247215, p0, p1); } // 0x44A113DD6FFC48D1 0x1425F6AC
	static void _0xE5E9B386A2063427(BOOL p0, BOOL p1) { invoke<Void>(0xE5E9B386A2063427, p0, p1); } // 0x271401846BD26E92 0x8DC53629
	static void _0xC600CA026E0617AE() { invoke<Void>(0xC600CA026E0617AE); } // 0xC8391C309684595A 0x1F9DE6E4
	static void _CLAMP_GAMEPLAY_CAM_YAW(float minimum, float maximum) { invoke<Void>(0xB69F341AEA35B2E9, minimum, maximum); } // 0x8F993D26E0CA5E8E 0x749909AC
	static void _CLAMP_GAMEPLAY_CAM_PITCH(float minimum, float maximum) { invoke<Void>(0x461B9A72A3C31C36, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7
	static void _ANIMATE_GAMEPLAY_CAM_ZOOM(float p0, float _distance) { invoke<Void>(0xC05D3EB37D3E8FC6, p0, _distance); } // 0xDF2E1F7742402E81 0x77340650
	static void _0xB34231FBEB8831C9(Vehicle p0, int p1) { invoke<Void>(0xB34231FBEB8831C9, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB
	static void _DISABLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0xEB49BF1F3A82ABD7); } // 0xDE2EF5DA284CC8DF
	static void _0xA28FCDF3FB3367BC() { invoke<Void>(0xA28FCDF3FB3367BC); } // 0x59424BD75174C9B1
	static Any GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<Any>(0xF7970603A28717CC); } // 0x33E6C8EFD0CD93E9 0x57583DF1
	static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xF19E031C976C0F00); } // 0x8D4D46230B2C353A 0xA65FF946
	static void SET_FOLLOW_PED_CAM_VIEW_MODE(Any p0) { invoke<Void>(0x12D823F78702C792, p0); } // 0x5A4F9EDF1673F704 0x495DBE8D
	static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xAB629695087578E9); } // 0xCBBDE6D335D6D496 0x8DD49B77
	static void _0xE83B4B75C6F1798A(BOOL p0) { invoke<Void>(0xE83B4B75C6F1798A, p0); } // 0x91EF6EE6419E5B97 0x9DB5D391
	static void _0x6C3E02EFE3E2438A(BOOL p0, BOOL p1) { invoke<Void>(0x6C3E02EFE3E2438A, p0, p1); } // 0x9DFE13ECDC1EC196 0x92302899
	static Any GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<Any>(0x97FC5B1E220B73E6); } // 0xEE82280AB767B690 0x8CD67DE3
	static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(Any p0) { invoke<Void>(0x9A112F0E960FD719, p0); } // 0x19464CB6E4078C8A 0x8F55EBBE
	static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0x96A11F2A7C8A4DB5); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03
	static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int mode) { invoke<Void>(0x87113223476B25FF, mode); } // 0xAC253D7842768F48 0xC4FBBBD3
	static Any _0x08EE17D4722097C7(Any p0) { return invoke<Any>(0x08EE17D4722097C7, p0); } // 0xEE778F8C7E1142E2 0xF3B148A6
	static void _0xFE933C7A1ED0BCE8(Any p0, Any p1) { invoke<Void>(0xFE933C7A1ED0BCE8, p0, p1); } // 0x2A2173E46DAECD12 0x1DEBCB45
	static Any _0x5B93518F6779B7F5() { return invoke<Any>(0x5B93518F6779B7F5); } // 0x19CAFA3C87F7C2FF
	static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x834CA326769DA173); } // 0x68EDDA28A5976D07 0xC24B4F6F
	static Any _0xA4AEA7A42A3ACBD9() { return invoke<Any>(0xA4AEA7A42A3ACBD9); } // 0x74BD83EA840F6BC9 0x8F320DE4
	static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x96EB9D652C716259); } // 0x5E346D934122613F 0xD6280468
	static void _0x2D4B8ECBA1353B77() { invoke<Void>(0x2D4B8ECBA1353B77); } // 0x1A31FE0049E542F6 0x1BAA7182
	static float _GET_GAMEPLAY_CAM_ZOOM() { return invoke<float>(0x5A97CE1E3F5F2441); } // 0x7EC52CC40597D170 0x33951005
	static void _0x09C8C90AA6509AF3(float p0) { invoke<Void>(0x09C8C90AA6509AF3, p0); } // 0x70894BD0915C5BCA 0x9F4AF763
	static void _0x32CF7191F3A097CB(float p0, float p1) { invoke<Void>(0x32CF7191F3A097CB, p0, p1); } // 0xCED08CBE8EBB97C7 0x68BA0730
	static void _0xBFDDD50F70A455AA(float p0, float p1) { invoke<Void>(0xBFDDD50F70A455AA, p0, p1); } // 0x2F7F2B26DD3F18EE 0x2F29F0D5
	static void _0x545CEEAFCC7977CC(float p0, float p1) { invoke<Void>(0x545CEEAFCC7977CC, p0, p1); } // 0xBCFC632DB7673BF0 0x76DAC96C
	static void _0x12BE20525AE61D61(float p0) { invoke<Void>(0x12BE20525AE61D61, p0); } // 0x0AF7B437918103B3 0x0E21069D
	static void _0x1FCE2FAAE639F53A(float p0) { invoke<Void>(0x1FCE2FAAE639F53A, p0); } // 0x42156508606DE65E 0x71E9C63E
	static void _0xCF265C6A3DF2D417(BOOL p0) { invoke<Void>(0xCF265C6A3DF2D417, p0); } // 0x4008EDF7D6E48175 0xD1EEBC45
	static Vector3 _GET_GAMEPLAY_CAM_COORDS() { return invoke<Vector3>(0xB2A25AE6DD89C70D); } // 0xA200EB1EE790F448 0x9C84BDA0
	static Vector3 _GET_GAMEPLAY_CAM_ROT(Any p0) { return invoke<Vector3>(0xD68773038DE40260, p0); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5
	static Vector3 _0x9118B4FB33B22657(Any p0, Any p1) { return invoke<Vector3>(0x9118B4FB33B22657, p0, p1); } // 0x26903D9CD1175F2C 0xACADF916
	static Any _0x5E48E4AFD7B03C90() { return invoke<Any>(0x5E48E4AFD7B03C90); } // 0x80EC114669DAEFF4 0x721B763B
	static float _0xAFBA0A70CEB3FF62(Any p0) { return invoke<float>(0xAFBA0A70CEB3FF62, p0); } // 0x5F35F6732C3FBBA0 0x23E3F106
	static Any _0x3303C6F68267781F() { return invoke<Any>(0x3303C6F68267781F); } // 0xD0082607100D7193 0x457AE195
	static Any _0x357A6D6F025F8415() { return invoke<Any>(0x357A6D6F025F8415); } // 0xDFC8CBC606FDB0FC 0x46CB3A49
	static Any _0x37B8748596081C1C() { return invoke<Any>(0x37B8748596081C1C); } // 0xA03502FC581F7D9B 0x19297A7A
	static Any _0x81D6E8C9E3C562A9() { return invoke<Any>(0x81D6E8C9E3C562A9); } // 0x9780F32BCAF72431 0xF24777CA
	static Any _0x8BD2A0164BD719DC() { return invoke<Any>(0x8BD2A0164BD719DC); } // 0x162F9D995753DC19 0x38992E83
	static void SET_GAMEPLAY_COORD_HINT(float p0, float p1, float p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x48AD9C0206EFC62D, p0, p1, p2, p3, p4, p5, p6); } // 0xD51ADCD2D8BC0FB3 0xF27483C9
	static void SET_GAMEPLAY_PED_HINT(Ped p0, float x1, float y1, float z1, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x774CF55D66784DEC, p0, x1, y1, z1, p4, p5, p6, p7); } // 0x2B486269ACD548D3 0x7C27343E
	static void SET_GAMEPLAY_VEHICLE_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x1A134F7200BE99B1, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xA2297E18F3E71C2E 0x2C9A11D8
	static void SET_GAMEPLAY_OBJECT_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7) { invoke<Void>(0x523514889A00418A, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x83E87508A2CA2AC6 0x2ED5E2F8
	static void SET_GAMEPLAY_ENTITY_HINT(Any p0, float p1, float p2, float p3, BOOL p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xA109811CF2C55706, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x189E955A8313E298 0x66C32306
	static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xA16CC47187A94189); } // 0xE520FF1AD2785B40 0xAD8DA205
	static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xC36FD2B6875CA6EA, p0); } // 0xF46C581C61718916 0x1BC28B7B
	static void _0x8A296FAC028EBF53(Any p0) { invoke<Void>(0x8A296FAC028EBF53, p0); } // 0xCCD078C2665D2973 0xCAFEE798
	static void _0x0F0640798C6C933B(BOOL p0) { invoke<Void>(0x0F0640798C6C933B, p0); } // 0x247ACBC4ABBC9D1C
	static Any _0xBC7D3C6804829A52() { return invoke<Any>(0xBC7D3C6804829A52); } // 0xBF72910D0F26F025
	static void SET_GAMEPLAY_HINT_FOV(float p0) { invoke<Void>(0x93B3BE845878F896, p0); } // 0x513403FB9C56211F 0x96FD173B
	static void _0x464E3BE818E0EC29(float p0) { invoke<Void>(0x464E3BE818E0EC29, p0); } // 0xF8BDBF3D573049A1 0x72E8CD3A
	static void _0x1260408BAB736413(float p0) { invoke<Void>(0x1260408BAB736413, p0); } // 0xD1F8363DFAD03848 0x79472AE3
	static void _0x137929A7453FE708(float p0) { invoke<Void>(0x137929A7453FE708, p0); } // 0x5D7B620DAE436138 0xFC7464A0
	static void _0x99B62758419E344A(float p0) { invoke<Void>(0x99B62758419E344A, p0); } // 0xC92717EF615B6704 0x3554AA0E
	static void GET_IS_MULTIPLAYER_BRIEF(BOOL p0) { invoke<Void>(0xE0EC82CEC5BEF2D6, p0); } // 0xE3433EADAAF7EE40 0x2F0CE859
	static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0x1B8E0930AB96444B, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00
	static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xEC04162671BC8C26); } // 0xB15162CB5826E9E8 0x80471AD9
	static void SHAKE_CINEMATIC_CAM(Any* p0, float p1) { invoke<Void>(0xBEAA8C07A7C5356B, p0, p1); } // 0xDCE214D9ED58F3CF 0x61815F31
	static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0x45B1D8783CCB1222); } // 0xBBC08F6B4CB8FF0A 0x8376D939
	static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0x9A63D23361B95CA5, p0); } // 0xC724C701C30B2FE7 0x67510C4B
	static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0x9514920D319952BB, p0); } // 0x2238E588E588A6D7 0x71C12904
	static void _DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME() { invoke<Void>(0xB8E76C58DEE33403); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9
	static void _0x2E79D688E5929FE3() { invoke<Void>(0x2E79D688E5929FE3); } // 0x62ECFCFDEE7885D6 0x837F8581
	static void _0xA90461F061A9B357() { invoke<Void>(0xA90461F061A9B357); } // 0x9E4CFFF989258472 0x65DDE8AF
	static void _0x9FBAAA208ED35D47() { invoke<Void>(0x9FBAAA208ED35D47); } // 0xF4F2C0D4EE209E20 0xD75CDD75
	static Any _0x064A69CC19A40E76() { return invoke<Any>(0x064A69CC19A40E76); } // 0xCA9D2AA3E326D720 0x96A07066
	static Any _0x88D27563692FA371() { return invoke<Any>(0x88D27563692FA371); } // 0x4F32C0D5A90A9B40
	static void CREATE_CINEMATIC_SHOT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0CEFE65F0E280AF9, p0, p1, p2, p3); } // 0x741B0129D4560F31 0xAC494E35
	static BOOL IS_CINEMATIC_SHOT_ACTIVE(Any p0) { return invoke<BOOL>(0x0AF0B4F390BEC8E6, p0); } // 0xCC9F3371A7C28BC9 0xA4049042
	static void STOP_CINEMATIC_SHOT(Any p0) { invoke<Void>(0x373B2E4675E5721B, p0); } // 0x7660C6E75D3A078E 0xD78358C5
	static void _0x039582CB5B8F2396(BOOL p0) { invoke<Void>(0x039582CB5B8F2396, p0); } // 0xA41BCD7213805AAC 0xFBB85E02
	static void _0x194AC78F368D8431() { invoke<Void>(0x194AC78F368D8431); } // 0xDC9DA9E8789F5246 0x4938C82F
	static void SET_CINEMATIC_MODE_ACTIVE(BOOL p0) { invoke<Void>(0x7DFF63853B9B18CC, p0); } // 0xDCF0754AC3D6FD4E 0x2009E747
	static Any _0xB6DBAD7A4E65D5E5() { return invoke<Any>(0xB6DBAD7A4E65D5E5); } // 0x1F2300CB7FA7B7F6 0x6739AD55
	static Any _0x01E20DCCA2C958A3() { return invoke<Any>(0x01E20DCCA2C958A3); } // 0x17FCA7199A530203
	static void STOP_CUTSCENE_CAM_SHAKING() { invoke<Void>(0x8BE59FFBBEC91D19); } // 0xDB629FFD9285FA06 0xF07D603D
	static void _0xEAB9543EE1D1444B(float p0) { invoke<Void>(0xEAB9543EE1D1444B, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5
	static Any _0xF326A1684F013958(float p0, Any p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0xF326A1684F013958, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B
	static void _0x326329BFF40D4BF0() { invoke<Void>(0x326329BFF40D4BF0); } // 0x5A43C76F7FC7BA5F 0xE206C450
	static void _SET_CAM_EFFECT(int p0) { invoke<Void>(0x0324AAC7B4B5C8D9, p0); } // 0x80C8B1846639BB19 0xB06CCD38
	static void _0x3072EA01A9DC5560(Any p0) { invoke<Void>(0x3072EA01A9DC5560, p0); } // 0x5C41E6BABC9E2112
	static void _0xB8209865A91EF6F7(Any* p0) { invoke<Void>(0xB8209865A91EF6F7, p0); } // 0x21E253A7F8DA5DFB
	static void _0x5DD3D3BBF4929ADA(Any p0) { invoke<Void>(0x5DD3D3BBF4929ADA, p0); } // 0x11FA5D3479C7DD47
	static Any _0xEDD2C59B0B8593D3() { return invoke<Any>(0xEDD2C59B0B8593D3); } // 0xEAF0FA793D05C592
	static Any _0x1205647DCB427FBA() { return invoke<Any>(0x1205647DCB427FBA); } // 0x8BFCEB5EA1B161B6
}

namespace WEAPON
{
	static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0xD1B4890D4567525D, toggle); } // 0xC8B46D7727D864AA 0xE3438955
	static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x3D3206F1D010352F, componentHash); } // 0x0DB57B41EC1DB083 0x324FA47A
	static Any GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Any>(0x761C106ED7012D7F, weaponHash); } // 0xF46CDC33180FDA94 0x44E1C269
	static Any GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Any>(0x774A5599516CAE84, weaponHash); } // 0x4215460B9B8B7FA0 0x2E3759AF
	static Any GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Any>(0xE98DA6AE7735AF9D, weaponHash); } // 0xC3287EE3050FB74C 0x5F2DE833
	static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL equipNow) { invoke<Void>(0x36EE5CBF45EC4826, ped, weaponHash, equipNow); } // 0xADF692B254977C0C 0xB8278882
	static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x5E99B63A819500A5, ped, weaponHash, p2); } // 0x3A87E44BB9A01D54 0xB0237302
	static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped) { return invoke<Entity>(0xC9108928B9DA72D3, ped); } // 0x3B390A939AF0B5FC 0x5D73CD20
	static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0x6932EF44AAFF2C73, ped, p1); } // 0x8483E98E8B888AE2 0xB998D444
	static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0xEC211DB8E2C2C893, ped, weaponHash); } // 0x75C55983C2C39DAA 0x8E6F2AF1
	static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x1946D4092F46EAA6, ped, weaponHash); } // 0x1017582BCD3832DC 0xF26C5D65
	static BOOL IS_PED_ARMED(Ped ped, int p1) { return invoke<BOOL>(0x72957E5DA83E879F, ped, p1); } // 0x475768A975D5AD17 0x0BFC892C
	static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0xC310612985BE85AB, weaponHash); } // 0x937C71165CF334B3 0x38CA2954
	static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0xFB3EFA6765C8A823, ped, weaponHash, p2); } // 0x8DECB02F88F428BC 0x43D2FA82
	static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x7B8168AF3D1F49BB, ped); } // 0xB80CA294F2F26749 0x02A32CB0
	static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0x08B9ED9EC2BBF5E8, ped, weaponSlot); } // 0xEFFED78E9011134D 0x9BC64E16
	static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x4B88462744233B66, ped, weaponhash); } // 0x015A522136D7F951 0x0C755733
	static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x5AC4A067EDBD563C, ped, weaponHash, ammo); } // 0x78F0424C34306220 0x7F0580C7
	static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x8B265D26BF309872, ped, weaponHash, ammo); } // 0x14E56BC5B5DB6A19 0xBF90DF1A
	static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xE9FA819FE0DEC955, ped, toggle, weaponHash); } // 0x3EDCB0505123623B 0x9CB8D278
	static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x23B4E1A6DA424BC7, ped, toggle); } // 0x183DADC6AA953186 0x5A5E3B67
	static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL p4, BOOL equipNow) { invoke<Void>(0xCC897563F1971D6A, ped, weaponHash, ammoCount, p4, equipNow); } // 0xBF0FD6E56C964FCB 0xC4D88A85
	static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int time, BOOL equipNow) { invoke<Void>(0x5E9C818BB0BD51FB, ped, weaponHash, time, equipNow); } // 0xB282DC6EBD803C75 0x5868D20D
	static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0x6E450556B0975D28, ped, toggle); } // 0xF25DF915FA38C5F3 0xA44CE817
	static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0xB7C0041C7DC55CD8, ped, weaponHash); } // 0x4899CB088EDF59B8 0x9C37F220
	static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x19F63791B22B0673, ped, toggle); } // 0x6F6981D2253C208F 0x00CFD6E9
	static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x6C60CB61143A7B02, ped, visible, deselectWeapon, p3, p4); } // 0x0725A4CCFDED9A70 0x00BECD77
	static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x66AE2D79F3F04BAE, ped, toggle); } // 0x476AE72C1D19D1A8 0x8A444056
	static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0xA180067B477D9371, ped, weaponHash, weaponType); } // 0x2D343D2219CD027A 0xCDFBBCC6
	static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0x5B1784F4B6BD1C46, ped); } // 0x0E98F88A24C5F4B8 0x52C68832
	static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x3D06E0340496855A, entity, weaponHash, weaponType); } // 0x131D401334815E94 0x6DAABB39
	static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0xA2D9AE20AB412A1B, entity); } // 0xAC678E40BE7C74D2 0xCEC2732B
	static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0x4BD86B667E57964D, ped); } // 0x6B7513D9966FBEC0 0x3D3329FA
	static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float p2, float p3, float p4, Any p5) { invoke<Void>(0x46BD4D6C43CA0D28, ped, weaponHash, p2, p3, p4, p5); } // 0x208A1888007FC0E6 0x81FFB874
	static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0x4A591127480B8AAF, ped, weaponHash, p2); } // 0xA38DCFFCEA8962FA 0x6961E2A4
	static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xD209A378548F8C0C, ped, weaponHash, ammo); } // 0x2E1202248937775C 0x73C100C3
	static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0x2AF5AAB40A6B50CD, ped, weaponHash, ammo); } // 0xDCD2A934D65CB497 0xA54B0B10
	static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x34AED71D17A91BDF, ped, weaponHash, ammo); } // 0xDC16122C7A20C933 0x0B294796
	static void SET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType, int ammo) { invoke<Void>(0x68F7143865CE556E, ped, ammoType, ammo); } // 0x5FD1E1F011E76D7E 0x311C52BB
	static int GET_PED_AMMO_BY_TYPE(Ped ped, Any ammoType) { return invoke<int>(0x43697170B1C46030, ped, ammoType); } // 0x39D22031557946C1 0x54077C4D
	static void SET_PED_AMMO_TO_DROP(Any p0, Any p1) { invoke<Void>(0x31C1356D78B3C8DA, p0, p1); } // 0xA4EFEF9440A5B0EF 0x2386A307
	static void _0x4A20F043306B2592(float p0) { invoke<Void>(0x4A20F043306B2592, p0); } // 0xE620FD3512A04F18 0xD6460EA2
	static Any _GET_PED_AMMO_TYPE(Ped ped, Hash weaponHash) { return invoke<Any>(0x35CDA4B7343CFC13, ped, weaponHash); } // 0x7FEAD38B326B9F74 0x09337863
	static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coord) { return invoke<BOOL>(0x552E3E8437499CB5, ped, coord); } // 0x6C4D0409BA1A2BC2 0x9B266079
	static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xA5471AD4765BADD5, ped, gadgetHash, p2); } // 0xD0D7B1E680ED4A1A 0x8A256D0A
	static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0x14618ECB1EB17B8F, ped, gadgetHash); } // 0xF731332072F5156C 0x8DDD0B5B
	static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x05616A254D694295, ped); } // 0x0A6DB4965674D243 0xD240123E
	static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0x0133D7D8BDD951AB, ped, weaponHash, p2); } // 0xFC4BD125DE7611E4 0x35A0B955
	static void REMOVE_ALL_PROJECTILES_OF_TYPE(Any p0, BOOL p1) { invoke<Void>(0x3D941FB6B199DC1E, p0, p1); } // 0xFC52E0F37E446528 0xA5F89919
	static float _0xD286D1570E0B6BDE(Any p0) { return invoke<float>(0xD286D1570E0B6BDE, p0); } // 0x840F03E9041E2C9C 0x3612110D
	static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xD36C3833F00A5C3E, ped); } // 0x814C9D19DFD69679 0xB2B2BBAA
	static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weapon, Any p3) { return invoke<BOOL>(0x602B6894A806CA8C, driver, vehicle, weapon, p3); } // 0x717C8481234E3B88 0xA57E2E80
	static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xB0C241980A001E7D, ped, weaponHash, componentHash); } // 0xD966D51AA5B28BB9 0x3E1E286D
	static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0xEDBFE2FA29A25456, ped, weaponHash, componentHash); } // 0x1E8BE90C74FB4C09 0x412AA00D
	static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0xA5DA14627B3BFA44, ped, weaponHash, componentHash); } // 0xC593212475FAE340 0xDC0FC145
	static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x1AACFD0698B06DD0, ped, weaponHash, componentHash); } // 0x0D78DE0572D3969E 0x7565FB19
	static BOOL _IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0x11310FF7F2DD5EB7, ped); } // 0x8C0D57EA686FAD87 0x82EEAF0F
	static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xB049A2F6FC74257A, ped); } // 0x20AE33F3AC9C0033 0x515292C2
	static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, BOOL p2) { invoke<Void>(0x399379B908F89E3D, weaponHash, p1, p2); } // 0x5443438F033E29C3 0x65D139A5
	static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x8150EED628D374BE, weaponHash); } // 0x36E353271F0E90EE 0x1891D5BB
	static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xE12FE76269CF566D, weaponHash); } // 0xAA08EF13F341C8FC 0x2C0DFE3C
	static Any CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float heading, Any p7) { return invoke<Any>(0xB03934094488FFF4, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7); } // 0x9541D3CF0D398F36 0x62F5987F
	static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash addonHash) { invoke<Void>(0x41AFDFB8D6346E5E, weaponObject, addonHash); } // 0x33E179436C0B31DB 0xF7612A37
	static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Any p0, Any p1) { invoke<Void>(0x2833E4D766D2694C, p0, p1); } // 0xF7D82B0D66777611 0xA6E7ED3C
	static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash addonHash) { return invoke<BOOL>(0x6BFA35CC05C7B4D3, weapon, addonHash); } // 0x76A18844E743BF91 0x1D368510
	static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0xA45CBD7C77801B6A, weaponObject, ped); } // 0xB1FA61371AF7C4B7 0x639AF3EF
	static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x73532B180CD1C3C9, weaponHash, componentHash); } // 0x5CEE3DF569CECAB0 0xB1817BAA
	static Entity GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Entity>(0x13C95D1F798B99FE, ped, p1); } // 0xCAE1DC9A0E22A16D 0xDF939A38
	static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int colorIndex) { invoke<Void>(0x4BCE9953FAA3BBF2, ped, weaponHash, colorIndex); } // 0x50969B9B89ED5738 0xEB2A7B23
	static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x59E70E8146E8C2AB, ped, weaponHash); } // 0x2B9EEDC07BD06B9F 0x3F9C90A7
	static void SET_WEAPON_OBJECT_TINT_INDEX(Entity weapon, int tint) { invoke<Void>(0x26ED36E4A4E494F9, weapon, tint); } // 0xF827589017D4E4A9 0x44ACC1DA
	static int GET_WEAPON_OBJECT_TINT_INDEX(Entity weapon) { return invoke<int>(0x54BFC5636D595FA3, weapon); } // 0xCD183314F7CD2E57 0xD91D9576
	static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0xE54EC725DD3826DD, weaponHash); } // 0x5DCF6C5CAB2E9BF7 0x99E4EAAB
	static BOOL GET_WEAPON_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0xC36C90CB62A49218, p0, p1); } // 0xD92C739EE34C9EBA 0xA9AD3D98
	static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Any p0, Any* p1) { return invoke<BOOL>(0x5B519C6D3C8ED42D, p0, p1); } // 0xB3CAF387AE12E9F8 0xBB5498F4
	static float _0xD458B0BB5D472752(Any p0, Any p1) { return invoke<float>(0xD458B0BB5D472752, p0, p1); } // 0x3133B907D8B32053
	static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x5109E3E9EFF8C823, weaponHash); } // 0x583BE370B1EC6EB4 0x8D515E66
	static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x5BADEA0BF3BEDBB5, ped, xBias, yBias); } // 0x8378627201D5497D 0xB4F44C6E
	static Entity _0x63517BA3A7A081CF(Ped ped, float p1) { return invoke<Entity>(0x63517BA3A7A081CF, ped, p1); } // 0xB4C8D77C80C0421E 0xEC2E5304
	static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0x4666E60B2CFAE2D8, weaponObject); } // 0x48164DBB970AC3F0 0xE3BD00F9
	static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x678D45DA30B158ED, ped); } // 0x65F0C5AE05943EC7 0xBAF7BFBE
	static BOOL SET_WEAPON_SMOKEGRENADE_ASSIGNED(Any p0) { return invoke<BOOL>(0xE3A32D457924057D, p0); } // 0x4B7620C47217126C 0x76876154
	static Any SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<Any>(0xD77824876DBBDF84, distance); } // 0xCEA66DAD478CD39B 0xB0127EA7
	static void SET_WEAPON_ANIMATION_OVERRIDE(Any p0, Any p1) { invoke<Void>(0x83104DAE843D1C8F, p0, p1); } // 0x1055AC3A667F09D9 0xA5DF7484
	static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x224B88C1B3769C41, weaponHash); } // 0x3BE0BB12D25FB305 0x013AFC13
	static void _0xE6F4417C00E087FF(Ped ped) { invoke<Void>(0xE6F4417C00E087FF, ped); } // 0xE4DCEC7FD5B739A5 0x64646F1D
	static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0x19658EE73F69D605, weaponHash); } // 0xBC7BE5ABC0879F74 0x135E7AD4
}

namespace ITEMSET
{
	static Any CREATE_ITEMSET(BOOL p0) { return invoke<Any>(0x37332A7B43ECC558, p0); } // 0x35AD299F50D91B24 0x0A113B2C
	static void DESTROY_ITEMSET(Any p0) { invoke<Void>(0x765CBE540595665A, p0); } // 0xDE18220B1C183EDA 0x83CE1A4C
	static BOOL IS_ITEMSET_VALID(Any p0) { return invoke<BOOL>(0xC81D19242D996684, p0); } // 0xB1B1EA596344DFAB 0xD201FC29
	static BOOL ADD_TO_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0x004B774F06CEEE14, p0, p1); } // 0xE3945201F14637DD 0x6B0FE61B
	static void REMOVE_FROM_ITEMSET(Any p0, Any p1) { invoke<Void>(0x0CF6FEF95CD60117, p0, p1); } // 0x25E68244B0177686 0xA9565228
	static Any GET_ITEMSET_SIZE(Any p0) { return invoke<Any>(0x7F8DB41854B7D660, p0); } // 0xD9127E83ABF7C631 0x2B31F41A
	static Any GET_INDEXED_ITEM_IN_ITEMSET(Any p0, Any p1) { return invoke<Any>(0x178A0C3F93004C24, p0, p1); } // 0x7A197E2521EE2BAB 0x3F712874
	static BOOL IS_IN_ITEMSET(Any p0, Any p1) { return invoke<BOOL>(0x8F2814E70B8355EA, p0, p1); } // 0x2D0FC594D1E9C107 0x0D4B9730
	static void CLEAN_ITEMSET(Any p0) { invoke<Void>(0x6EDE343C8A73682D, p0); } // 0x41BC0D722FC04221 0x919A4858
}

namespace STREAMING
{
	static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0xCB466C44D065EA82); } // 0xBD6E84632DD4CB3F 0xC9DBDA90
	static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0x899C0AB969919A6A, x, y, z); } // 0x4448EB75B4904BDB 0xB72403F5
	static Any NETWORK_UPDATE_LOAD_SCENE() { return invoke<Any>(0x3C7B406C8B1548A1); } // 0xC4582015556D1C46 0xC76E023C
	static void NETWORK_STOP_LOAD_SCENE() { invoke<Void>(0x0000000000000000); } // 0x64E630FAF5F60F44 0x24857907
	static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x5020AF0A0CCD9F49); } // 0x41CA5A33160EA4AB 0x6DCFC021
	static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xB916541B516E7BA5, interiorID, toggle); } // 0xE37B76C387BE28ED 0xE1013910
	static void REQUEST_MODEL(Hash model) { invoke<Void>(0x801429C020C467BA, model); } // 0x963D27A58DF860AC 0xFFF1B500
	static void _REQUEST_MODEL_2(Hash model) { invoke<Void>(0xCD9FAB500D35A7E3, model); } // 0xA0261AEF7ACFC51E 0x48CEB6B4
	static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x5053BF6D5604065B, model); } // 0x98A4EB5D89A0C952 0x62BFDB37
	static void _0x823B0DF02674353C(int interiorID, char* roomName) { invoke<Void>(0x823B0DF02674353C, interiorID, roomName); } // 0x8A7A40100EDFEC58 0x939243FB
	static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x839E9476E54502A2, model); } // 0xE532F5D78798DAAB 0xAE0F069E
	static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x6797945588CD00BC, model); } // 0x35B9E0803292B641 0x1094782F
	static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x36B4A88247BB6F4C, model); } // 0xC0296A2EDF545E92 0xAF8F8E9D
	static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0x6A3E3EA4770CE80A, model); } // 0x19AAC8F07BFEC53E 0xFFFC85D4
	static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x04C3884D197FF82E, x, y, z); } // 0x07503F7948F491A7 0xCD9805E7
	static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x41830BB7EA4A0A58, model); } // 0x923CB32A3B874FCB 0x3930C042
	static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x55EA74AD98FB3AEE, model); } // 0x22CCA434E368F03A 0x41A094F8
	static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float p0, float p1, float p2) { invoke<Void>(0x6BA6B5532D538363, p0, p1, p2); } // 0xC9156DC11411A9EA 0xC2CC1DF2
	static BOOL DOES_ANIM_DICT_EXIST(char* animDict) { return invoke<BOOL>(0x3471286EFE4CBA57, animDict); } // 0x2DA49C3B79856961 0xCD31C872
	static void REQUEST_ANIM_DICT(char* animDict) { invoke<Void>(0x2B0BB514F9140141, animDict); } // 0xD3BD40951412FEF6 0xDCA96950
	static BOOL HAS_ANIM_DICT_LOADED(char* animDict) { return invoke<BOOL>(0x2917D5E1CB5CE43A, animDict); } // 0xD031A9162D01088C 0x05E6763C
	static void REMOVE_ANIM_DICT(char* animDict) { invoke<Void>(0x8B10CC9832827D27, animDict); } // 0xF66A602F829E2A06 0x0AE050B5
	static void REQUEST_ANIM_SET(char* animSet) { invoke<Void>(0x8BDA0EA8B300D1C1, animSet); } // 0x6EA47DAE7FAD0EED 0x2988B3FC
	static BOOL HAS_ANIM_SET_LOADED(char* animSet) { return invoke<BOOL>(0xBE9911AEE3029428, animSet); } // 0xC4EA073D86FB29B0 0x4FFF397D
	static void REMOVE_ANIM_SET(char* animSet) { invoke<Void>(0x04C15FC9EFAA71CC, animSet); } // 0x16350528F93024B3 0xD04A817A
	static void REQUEST_CLIP_SET(char* clipSet) { invoke<Void>(0x5FC34204E17B27E0, clipSet); } // 0xD2A71E1A77418A49 0x546C627A
	static BOOL HAS_CLIP_SET_LOADED(char* clipSet) { return invoke<BOOL>(0x05416FE34E390CB7, clipSet); } // 0x318234F4F3738AF3 0x230D5455
	static void REMOVE_CLIP_SET(char* clipSet) { invoke<Void>(0xE4036833A4846B4A, clipSet); } // 0x01F73A131C18CD94 0x1E21F7AA
	static void REQUEST_IPL(char* iplName) { invoke<Void>(0xCD0B67AC78A5E986, iplName); } // 0x41B4893843BBDB74 0x3B70D1DB
	static void REMOVE_IPL(char* iplName) { invoke<Void>(0x53F3947D683D7E86, iplName); } // 0xEE6C5AD3ECE0A82D 0xDF7CBD36
	static BOOL IS_IPL_ACTIVE(char* iplName) { return invoke<BOOL>(0xAAF84168D1079DB3, iplName); } // 0x88A741E44A2B3495 0xB2C33714
	static void SET_STREAMING(BOOL toggle) { invoke<Void>(0xAA0E856572408907, toggle); } // 0x6E0C692677008888 0x27EF6CB2
	static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xC673612C64F6FE9C, toggle); } // 0x717CD6E6FAEBBEDC 0x9211A28A
	static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xFB15FD87EA5E43FA, toggle); } // 0x77B5F9A36BF96710 0xAFCB2B86
	static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xD4D3A2B9643D0B94, toggle); } // 0x80C527893080CCF3 0xCDB4FB7E
	static void SET_DITCH_POLICE_MODELS(Any p0) { invoke<Void>(0x6004F8EC2CE6ACFA, p0); } // 0x42CBE54462D92634 0x3EA7FCE4
	static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x94A1B9CEC894AA0E); } // 0x4060057271CEBC89 0xC2EE9A02
	static void REQUEST_PTFX_ASSET() { invoke<Void>(0xDF14478656A9018C); } // 0x944955FB2A3935C8 0x2C649263
	static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0xD6306290BE90B505); } // 0xCA7D9B86ECA7481B 0x3EFF96BE
	static void REMOVE_PTFX_ASSET() { invoke<Void>(0x5736B7F949DFB3D6); } // 0x88C6814073DD4A73 0xC10F178C
	static void REQUEST_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0x5C8FEFFA759EAAD1, fxName); } // 0xB80D8756B4668AB6 0xCFEA19A9
	static BOOL HAS_NAMED_PTFX_ASSET_LOADED(char* fxName) { return invoke<BOOL>(0x976FE29DD6B3FF37, fxName); } // 0x8702416E512EC454 0x9ACC6446
	static void _REMOVE_NAMED_PTFX_ASSET(char* fxName) { invoke<Void>(0x206860C2088B3BA3, fxName); } // 0x5F61EBBE1A00F96D
	static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0xE7B4713D32F6F9DC, p0); } // 0xCB9E1EB3BE2AF4E9 0x1D56993C
	static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xEB6EADE1FB086748, p0); } // 0x8C95333CFC3340F3 0xD2D026CD
	static void CLEAR_FOCUS() { invoke<Void>(0x29697396B8AA6E4F); } // 0x31B73D1EA9F01DA2 0x34D91E7A
	static void _SET_FOCUS_AREA(float x, float y, float z, float p3, float p4, float p5) { invoke<Void>(0x239ABB365A174277, x, y, z, p3, p4, p5); } // 0xBB7454BAFF08FE25 0x14680A60
	static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xD6644A861C240BF3, entity); } // 0x198F77705FA0931D 0x18DB04AC
	static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x58F3A1164B1247BF, entity); } // 0x2DDFF3FB9075D747 0xB456D707
	static void _0xE4383C3D44535C15(Entity p0) { invoke<Void>(0xE4383C3D44535C15, p0); } // 0x0811381EF5062FEC
	static void _0x1944E59C10B31563(Any* p0, BOOL p1) { invoke<Void>(0x1944E59C10B31563, p0, p1); } // 0xAF12610C644A35C9 0x403CD434
	static void _0x7C073F2636E45A61(Any p0) { invoke<Void>(0x7C073F2636E45A61, p0); } // 0x4E52E752C76E7E7A 0xA07BAEB9
	static Any _0xA5AE168966512208(float p0, float p1, float p2, float p3, Any p4, Any p5) { return invoke<Any>(0xA5AE168966512208, p0, p1, p2, p3, p4, p5); } // 0x219C7B8D53E429FD 0x10B6AB36
	static Any _0x742108D088D6920E(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<Any>(0x742108D088D6920E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x1F3F018BC3AFA77C 0x72344191
	static Any _0x285F3B79E2CFCA8F(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<Any>(0x285F3B79E2CFCA8F, p0, p1, p2, p3, p4, p5, p6); } // 0x0AD9710CEE2F590F 0xC0157255
	static void _0x3B457B5F76B38D8D(Any p0) { invoke<Void>(0x3B457B5F76B38D8D, p0); } // 0x1EE7D8DF4425F053 0xE80F8ABE
	static Any _0xBBBA493CBB466EB4(Any p0) { return invoke<Any>(0xBBBA493CBB466EB4, p0); } // 0x7D41E9D2D17C5B2D 0x1B3521F4
	static Any _0x189E9261C51C136E(Any p0) { return invoke<Any>(0x189E9261C51C136E, p0); } // 0x07C313F94746702C 0x42CFE9C0
	static Any _0x6F98867B7C9ABCC7() { return invoke<Any>(0x6F98867B7C9ABCC7); } // 0xBC9823AB80A3DCAC 0x56253356
	static BOOL NEW_LOAD_SCENE_START(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return invoke<BOOL>(0x858A5BA3FE354AC3, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x212A8D0D2BABFAC2 0xDF9C38B6
	static BOOL _0x3D81DBD4F6A29824(float p0, float p1, float p2, float p3, Any p4) { return invoke<BOOL>(0x3D81DBD4F6A29824, p0, p1, p2, p3, p4); } // 0xACCFB4ACF53551B0 0xFA037FEB
	static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0xEF1C0568E9BDCF78); } // 0xC197616D221FF4A4 0x7C05B1F6
	static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0xC5E5B5BBBE4693F6); } // 0xA41A05B6CB741B85 0xAD234B7F
	static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0xB1959BA5ECC2010F); } // 0x01B8247A7A8B9AD1 0x3ECD839F
	static Any _0x03053DC61BC6EFCD() { return invoke<Any>(0x03053DC61BC6EFCD); } // 0x71E7B2E657449AAD 0xEAA51103
	static void START_PLAYER_SWITCH(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x622DE9AD97AD79BE, p0, p1, p2, p3); } // 0xFAA23F2CBA159D67 0x0829E975
	static void STOP_PLAYER_SWITCH() { invoke<Void>(0xFD66A7208B6995D0); } // 0x95C0A5BBDC189AA1 0x2832C010
	static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0xF478777FFCC96862); } // 0xD9D2CFFF49FAB35F 0x56135ACC
	static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x5824E40B4C3C5757); } // 0xB3C94A90D9FC9E62 0x280DC015
	static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x840A5C34F375C60A, x1, y1, z1, x2, y2, z2); } // 0xB5D7B26B45720E05 0xD5A450F1
	static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x3ABB0F1D57A0AD8C); } // 0x470555300D10B2A5 0x39A0E1F2
	static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x874788359D091F3B); } // 0x20F898A5D9782800 0x9B7BA38F
	static void _0x17583C41693242D7(Any p0) { invoke<Void>(0x17583C41693242D7, p0); } // 0x5F2013F8BC24EE69 0xF0BD420D
	static Any _0x1A0720269C2EA1FE() { return invoke<Any>(0x1A0720269C2EA1FE); } // 0x78C0D93253149435 0x02BA7AC2
	static void _0x2028241AF5F8565A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x2028241AF5F8565A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xC208B673CE446B61 0x47352E14
	static void _0x6527F95BAB4FD036(Any* p0) { invoke<Void>(0x6527F95BAB4FD036, p0); } // 0x0FDE9DBFC0A6BC65 0x279077B0
	static void _0x393DCD65761F06D3() { invoke<Void>(0x393DCD65761F06D3); } // 0x43D1680C6D19A8E9 0x55CB21F9
	static void _0xB5066601828823C2() { invoke<Void>(0xB5066601828823C2); } // 0x74DE2E8739086740 0x1084F2F4
	static void _0x48D99C010137C48A() { invoke<Void>(0x48D99C010137C48A); } // 0x8E2A065ABDAE6994 0x5B1E995D
	static void _0x37DA0807D88AEF29() { invoke<Void>(0x37DA0807D88AEF29); } // 0xAD5FDF34B81BFE79 0x4B4B9A13
	static Any _0xA1A1231548254D02() { return invoke<Any>(0xA1A1231548254D02); } // 0xDFA80CB25D0A19B3 0x408F7148
	static void _0x55B5B61B21D2F59B() { invoke<Void>(0x55B5B61B21D2F59B); } // 0xD4793DFF3AF2ABCD
	static void _0xA0AA6E09BB03A719() { invoke<Void>(0xA0AA6E09BB03A719); } // 0xBD605B8E0E18B3BB
	static void _0xE8D89C55E8D8E9C0(Any p0, Any p1, Any p2) { invoke<Void>(0xE8D89C55E8D8E9C0, p0, p1, p2); } // 0xAAB3200ED59016BC 0xFB4D062D
	static void _0x4A84F6A9468274E5(Any p0) { invoke<Void>(0x4A84F6A9468274E5, p0); } // 0xD8295AF639FD9CB8 0x2349373B
	static Any _0xAD0CF5769B037152() { return invoke<Any>(0xAD0CF5769B037152); } // 0x933BBEEB8C61B5F4 0x74C16879
	static Any SET_PLAYER_INVERTED_UP() { return invoke<Any>(0xD1AFE302F13231CE); } // 0x08C2D6C52A3104BB 0x569847E3
	static Any _0xA4CB9203FBE60D6D() { return invoke<Any>(0xA4CB9203FBE60D6D); } // 0x5B48A06DD0E792A5 0xC7A3D279
	static Any DESTROY_PLAYER_IN_PAUSE_MENU() { return invoke<Any>(0x90180CD524308281); } // 0x5B74EA8CFD5E3E7E 0x90F64284
	static void _0x914AF8219DD1D006() { invoke<Void>(0x914AF8219DD1D006); } // 0x1E9057A74FD73E23
	static Any _0xA87EA7DA358EEC59() { return invoke<Any>(0xA87EA7DA358EEC59); } // 0x0C15B0E443B2349D 0x7154B6FD
	static void _0x81BA26DFC4716D4D(float p0) { invoke<Void>(0x81BA26DFC4716D4D, p0); } // 0xA76359FC80B2438E 0xE5612C1A
	static void _0xF8956BFC747DA6B1(float p0, float p1, float p2, float p3) { invoke<Void>(0xF8956BFC747DA6B1, p0, p1, p2, p3); } // 0xBED8CA5FF5E04113 0x9CD6A451
	static void _0xC83E10E54B015212() { invoke<Void>(0xC83E10E54B015212); } // 0x472397322E92A856 0x4267DA87
	static void _0x391A78435CF9F6CC(BOOL p0) { invoke<Void>(0x391A78435CF9F6CC, p0); } // 0x40AEFD1A244741F2 0x9FA4AF99
	static void _0xBB11E5F856BF2986() { invoke<Void>(0xBB11E5F856BF2986); } // 0x03F1A106BDA7DD3E
	static void _0x2380E6034AC11973(Any* p0, Any* p1) { invoke<Void>(0x2380E6034AC11973, p0, p1); } // 0x95A7DABDDBB78AE7 0x9EF0A9CF
	static void _0x3200A51E12DE592E() { invoke<Void>(0x3200A51E12DE592E); } // 0x63EB2B972A218CAC 0xF2CDD6A8
	static Any _0x133F6CDEC2831C83() { return invoke<Any>(0x133F6CDEC2831C83); } // 0xFB199266061F820A 0x17B0A1CD
	static void _0x272A7BB411BBA54E() { invoke<Void>(0x272A7BB411BBA54E); } // 0xF4A0DADB70F57FA6 0x3DA7AA5D
	static Any _0xAFECB70D682DC7B3() { return invoke<Any>(0xAFECB70D682DC7B3); } // 0x5068F488DDB54DD8 0xDAB4BAC0
	static void PREFETCH_SRL(Any* p0) { invoke<Void>(0x920295CC955B2210, p0); } // 0x3D245789CE12982C 0x37BE2FBB
	static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xF0A5EED1D559353E); } // 0xD0263801A4C5B0BB 0x670FA2A6
	static void BEGIN_SRL() { invoke<Void>(0x393EFDAA9B39EF3B); } // 0x9BADDC94EF83B823 0x24F49427
	static void END_SRL() { invoke<Void>(0x1EF1A61293A4ECA4); } // 0x0A41540E63C9EE17 0x1977C56A
	static void SET_SRL_TIME(float p0) { invoke<Void>(0x9275ED008B0418D0, p0); } // 0xA74A541C6884E7B8 0x30F8A487
	static void _0xEE9B4758FBE6EC33(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEE9B4758FBE6EC33, p0, p1, p2, p3, p4, p5); } // 0xEF39EE20C537E98C 0x814D0752
	static void _0x13C515A1B9D7F1AE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x13C515A1B9D7F1AE, p0, p1, p2, p3); } // 0xBEB2D9A1D9A8F55A 0x62F02485
	static void _0x3689BC68908770AA(BOOL p0) { invoke<Void>(0x3689BC68908770AA, p0); } // 0x20C6C7E4EB082A7F 0xA6459CAA
	static void _0xD4471475CCE4533D(Any p0) { invoke<Void>(0xD4471475CCE4533D, p0); } // 0xF8155A7F03DDFC8E 0xF8F515E4
	static void SET_HD_AREA(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE1CCB64F48370225, p0, p1, p2, p3); } // 0xB85F26619073E775 0x80BAA035
	static void CLEAR_HD_AREA() { invoke<Void>(0x88C26FB662EAA390); } // 0xCE58B1CFB9290813 0x7CAC6FA0
	static void _0x6D8D514E1E576206() { invoke<Void>(0x6D8D514E1E576206); } // 0xB5A4DB34FE89B88A 0xE243B2AF
	static void _0xBBFAD44FDC6DA3FE() { invoke<Void>(0xBBFAD44FDC6DA3FE); } // 0xCCE26000E9A6FAD7 0x897A510F
	static BOOL _0x0E43FF05C3B25905(Any p0) { return invoke<BOOL>(0x0E43FF05C3B25905, p0); } // 0x0BC3144DEB678666 0xC0E83320
	static void _0xACB2E5180D9F2B45(Any p0) { invoke<Void>(0xACB2E5180D9F2B45, p0); } // 0xF086AD9354FAC3A3 0x1C576388
	static Any _0x23007124AB1102CF() { return invoke<Any>(0x23007124AB1102CF); } // 0x3D3D8B3BE5A83D35 0x3E9C4CBE
}

namespace SCRIPT
{
	static void REQUEST_SCRIPT(char* scriptName) { invoke<Void>(0x5BA7CCA84A74BEA3, scriptName); } // 0x6EB5F71AA68F2E8E 0xE26B2666
	static void SET_SCRIPT_AS_NO_LONGER_NEEDED(char* scriptName) { invoke<Void>(0x307B32C17692E50D, scriptName); } // 0xC90D2DCACD56184C 0x6FCB7795
	static BOOL HAS_SCRIPT_LOADED(char* scriptName) { return invoke<BOOL>(0xD51489677E1B0844, scriptName); } // 0xE6CC9F3BA0FB9EF1 0x5D67F751
	static BOOL DOES_SCRIPT_EXIST(char* scriptName) { return invoke<BOOL>(0xB24EEA4AFBB75A39, scriptName); } // 0xFC04745FBE67C19A 0xDEAB87AB
	static void _REQUEST_STREAMED_SCRIPT(Hash scriptHash) { invoke<Void>(0x87D6D32DFD3B8BD1, scriptHash); } // 0xD62A67D26D9653E6 0x1C68D9DC
	static void _SET_STREAMED_SCRIPT_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0x2508AC68323E213F, scriptHash); } // 0xC5BC038960E9DB27 0x96C26F66
	static BOOL _HAS_STREAMED_SCRIPT_LOADED(Hash scriptHash) { return invoke<BOOL>(0xD24D76334CB5001C, scriptHash); } // 0x5F0F0C783EB16C04 0x06674818
	static BOOL _0x73E5D64AF07D7EC6(Any p0) { return invoke<BOOL>(0x73E5D64AF07D7EC6, p0); } // 0xF86AA3C56BA31381
	static void TERMINATE_THREAD(int id) { invoke<Void>(0x9BB35AD862694C08, id); } // 0xC8B189ED9138BCD4 0x253FD520
	static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x8DB3F26E5CA85896, threadId); } // 0x46E9AE36D8FA6417 0x78D7A5A0
	static char* _GET_THREAD_NAME(int threadId) { return invoke<char*>(0x45FC2042AB85403B, threadId); } // 0x05A42BA9FC8DA96B 0xBE7ACD89
	static void _0x106C8CF92B6D1DA0() { invoke<Void>(0x106C8CF92B6D1DA0); } // 0xDADFADA5A20143A8 0xBB4E2F66
	static int _0x79341ED55ECF04FD() { return invoke<int>(0x79341ED55ECF04FD); } // 0x30B4FA1C82DD4B9F 0x1E28B28F
	static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0xE3E113B4DB09AAF8); } // 0xC30338E8088E2E21 0xDE524830
	static void TERMINATE_THIS_THREAD() { invoke<Void>(0x52F20802944F8DCE); } // 0x1090044AD1DA76FA 0x3CD9CBB7
	static int _GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT(Hash scriptHash) { return invoke<int>(0xFF6891E21E7FC193, scriptHash); } // 0x2C83A9DA6BFFC4F9 0x029D3841
	static char* GET_THIS_SCRIPT_NAME() { return invoke<char*>(0x959E7FA37C0D0892); } // 0x442E0A7EDE4A738A 0xA40FD5D9
	static Hash _GET_THIS_SCRIPT_HASH() { return invoke<Hash>(0x87F8C006AA576A39); } // 0x8A1C8B1738FFE87E 0x2BEE1F45
	static int GET_NUMBER_OF_EVENTS(int p0) { return invoke<int>(0xE4E91039B15CA110, p0); } // 0x5F92A689A06620AA 0xA3525D60
	static BOOL GET_EVENT_EXISTS(int p0, int eventIndex) { return invoke<BOOL>(0x957F04289F04E160, p0, eventIndex); } // 0x936E6168A9BCEDB5 0xA1B447B5
	static int GET_EVENT_AT_INDEX(int p0, int eventIndex) { return invoke<int>(0xCEDD7FE4546BFC4F, p0, eventIndex); } // 0xD8F66A3A60C62153 0xB49C1442
	static BOOL GET_EVENT_DATA(int p0, int eventIndex, int* eventData, int p3) { return invoke<BOOL>(0x0586E3C97DD61FE4, p0, eventIndex, eventData, p3); } // 0x2902843FCD2B2D79 0x4280F92F
	static void TRIGGER_SCRIPT_EVENT(Any p0, int* p1, int p2, int p3) { invoke<Void>(0xBBEF99A5C6E20CCC, p0, p1, p2, p3); } // 0x5AE99C571D5BBE5D 0x54763B35
	static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0x2D123FAD51760D4C); } // 0x078EBE9809CCD637 0xA2826D17
	static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0xBEE128CF06FE2A96, toggle); } // 0x5262CC1995D07E09 0xC8055034
	static BOOL _GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x19AC385C7CB5ACFE); } // 0x18C1270EA7F199BC
	static void _0x982A434821DBA78C() { invoke<Void>(0x982A434821DBA78C); } // 0xB1577667C3708F9B 0xB03BCCDF
}

namespace UI
{
	static void _0x51BC140F0547E6E9(char* p0) { invoke<Void>(0x51BC140F0547E6E9, p0); } // 0xABA17D7CE615ADBF 0xCB7C8994
	static void _0x4E401C5FAC78D317(int p0) { invoke<Void>(0x4E401C5FAC78D317, p0); } // 0xBD12F8228410D9B4 0x903F5EE4
	static void _0x61A842014AC58E70() { invoke<Void>(0x61A842014AC58E70); } // 0x10D373323E5B9C0D 0x94119534
	static void _0x36626309188D38D9() { invoke<Void>(0x36626309188D38D9); } // 0xC65AB383CD91DF98 0x71077FBD
	static BOOL _0xE9CED42139FA0AB4() { return invoke<BOOL>(0xE9CED42139FA0AB4); } // 0xD422FCC5F239A915 0xB8B3A5D0
	static Any _0xF2033CE74684A5AD() { return invoke<Any>(0xF2033CE74684A5AD); } // 0xB2A592B04648A9CB
	static void _0xD1DF0B04DC39B5A8(BOOL p0) { invoke<Void>(0xD1DF0B04DC39B5A8, p0); } // 0x9245E81072704B8A
	static void _SHOW_CURSOR_THIS_FRAME() { invoke<Void>(0x422036F797F95CFC); } // 0xAAE7CE1D63167423
	static void _0x2BDB7C3D77DB86C4(Any p0) { invoke<Void>(0x2BDB7C3D77DB86C4, p0); } // 0x8DB8CFFD58B62552
	static void _0x27DF95737D236CA3(BOOL p0) { invoke<Void>(0x27DF95737D236CA3, p0); } // 0x98215325A695E78A
	static Any _0xD0B060C76BDF38BD() { return invoke<Any>(0xD0B060C76BDF38BD); } // 0x3D9ACB1EB139E702
	static BOOL _0x95E976043E2C7BEA(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0x95E976043E2C7BEA, scaleformHandle, p1, p2, p3); } // 0x632B2940C67F4EA9
	static void _0xAA85425D9BE91C59(BOOL p0) { invoke<Void>(0xAA85425D9BE91C59, p0); } // 0x6F1554B0CC2089FA 0xA7C8594B
	static void _0x74C2382519DF9D92(float p0) { invoke<Void>(0x74C2382519DF9D92, p0); } // 0x55598D21339CB998 0x1DA7E41A
	static void _0xB445BA612EFAB308() { invoke<Void>(0xB445BA612EFAB308); } // 0x25F87B30C382FCA7 0x1E63088A
	static void _0x86F04B1FEFFA59AF() { invoke<Void>(0x86F04B1FEFFA59AF); } // 0xA8FDB297A8D25FBA 0x5205C6F5
	static void _REMOVE_NOTIFICATION(int handle) { invoke<Void>(0x2D0D8484B149761E, handle); } // 0xBE4390CB40B3E627 0xECA8ACB9
	static void _0xDA96D319FA1CB4B3() { invoke<Void>(0xDA96D319FA1CB4B3); } // 0xA13C11E1B5C06BFC 0x520FCB6D
	static void _0x3466A7A3959649E4() { invoke<Void>(0x3466A7A3959649E4); } // 0x583049884A2EEE3C 0xC8BAB2F2
	static void _0x7D5D106C0BC41E4F() { invoke<Void>(0x7D5D106C0BC41E4F); } // 0xFDB423997FA30340 0x4D0449C6
	static void _0x77B6DFDC1F6D6D54() { invoke<Void>(0x77B6DFDC1F6D6D54); } // 0xE1CD1E48E025E661 0xD3F40140
	static Any _0x19CE4D39E87F8A50() { return invoke<Any>(0x19CE4D39E87F8A50); } // 0xA9CBFD40B3FA3010 0xC5223796
	static void _0x3C3FDC7402CC4401() { invoke<Void>(0x3C3FDC7402CC4401); } // 0xD4438C0564490E63 0x709B4BCB
	static void _0xDA7CCCABDBDB1B0F() { invoke<Void>(0xDA7CCCABDBDB1B0F); } // 0xB695E2CD0A2DA9EE 0x4A4A40A4
	static Any _GET_ACTIVE_NOTIFICATION_HANDLE() { return invoke<Any>(0xFF6F5CF5DEA63689); } // 0x82352748437638CA 0x294405D4
	static void _0x59DD2BF946AFAF28() { invoke<Void>(0x59DD2BF946AFAF28); } // 0x56C8B608CFD49854 0xF881AB87
	static void _0x60694418287C174F() { invoke<Void>(0x60694418287C174F); } // 0xADED7F5748ACAFE6 0x1D6859CA
	static void _0x426B1FC3AE03C2DF(Any p0) { invoke<Void>(0x426B1FC3AE03C2DF, p0); } // 0x92F0DA1E27DB96DC
	static void _0xB2162963030C785B(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB2162963030C785B, p0, p1, p2, p3); } // 0x17430B918701C342 0xCF14D7F2
	static void _0x9866B8085E816BE4(Any p0) { invoke<Void>(0x9866B8085E816BE4, p0); } // 0x17AD8C9706BDD88A 0x24A97AF8
	static void _0x5D773C813B9C020E(BOOL p0) { invoke<Void>(0x5D773C813B9C020E, p0); } // 0x4A0C7C9BB10ABB36 0x44018EDB
	static void _0x224621D0F5047650() { invoke<Void>(0x224621D0F5047650); } // 0xFDD85225B2DEA55E 0xA4524B23
	static void _0xF86F932922A0B033() { invoke<Void>(0xF86F932922A0B033); } // 0xFDEC055AB549E328 0xAFA1148B
	static void _0x92D7C80A9224305E() { invoke<Void>(0x92D7C80A9224305E); } // 0x80FE4F3AB4E1B62A 0x3CD4307C
	static void _0xBF66908027CA4F3C(BOOL p0) { invoke<Void>(0xBF66908027CA4F3C, p0); } // 0xBAE4F9B97CD43B30
	static void _0x4A84081A0454E850(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x4A84081A0454E850, p0, p1, p2, p3); } // 0x317EBA71D7543F52
	static void _SET_NOTIFICATION_TEXT_ENTRY(char* type) { invoke<Void>(0x4A4F36C4EFDE341F, type); } // 0x202709F4C58A0424 0x574EE85C
	static int _0xA700684532F4C741(char* p0, int p1, int p2, int p3, BOOL p4, char* picName1, char* picName2) { return invoke<int>(0xA700684532F4C741, p0, p1, p2, p3, p4, picName1, picName2); } // 0x2B7E9A4EAAA93C89 0xED130FA1
	static int _SET_NOTIFICATION_MESSAGE(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject) { return invoke<int>(0x77AD0392EB2D45CC, picName1, picName2, flash, iconType, sender, subject); } // 0x1CCD9A37359072CF 0xE7E3C98B
	static Any _0xD9D16049A849B1AD(char* picName1, char* picName2, BOOL p2, Any p3, char* p4, char* p5) { return invoke<Any>(0xD9D16049A849B1AD, picName1, picName2, p2, p3, p4, p5); } // 0xC6F580E4C94926AC
	static int _0x9BDCE179A92279BF(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration) { return invoke<int>(0x9BDCE179A92279BF, picName1, picName2, flash, iconType, sender, subject, duration); } // 0x1E6611149DB3DB6B 0x0EB382B7
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG(char* picName1, char* picName2, BOOL flash, int iconType, char* sender, char* subject, float duration, char* clanTag) { return invoke<int>(0x3C436E489382581C, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); } // 0x5CBF7BADE20DB93E 0x3E807FE3
	static int _SET_NOTIFICATION_MESSAGE_CLAN_TAG_2(char* picName1, char* picName2, BOOL flash, int iconType1, char* sender, char* subject, float duration, char* clanTag, int iconType2, int unk) { return invoke<int>(0xDDA00EA4D2D60E9C, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, unk); } // 0x531B84E7DA981FB6 0xDEB491C8
	static int _DRAW_NOTIFICATION(BOOL blink, BOOL p1) { return invoke<int>(0x40A23ED713DD1662, blink, p1); } // 0x2ED7843F8F801023 0x08F7AF78
	static int _DRAW_NOTIFICATION_2(BOOL blink, BOOL p1) { return invoke<int>(0x37220185ECD8D82D, blink, p1); } // 0x44FA03975424A0EE 0x57B8D0D4
	static int _DRAW_NOTIFICATION_3(BOOL blink, BOOL p1) { return invoke<int>(0xA482FEBF49CE3F58, blink, p1); } // 0x378E809BF61EC840 0x02BCAF9B
	static int _0xD59BFBCBD4E7522F(char* p0, char* p1, int p2, int p3, char* p4) { return invoke<int>(0xD59BFBCBD4E7522F, p0, p1, p2, p3, p4); } // 0xAA295B6F28BD587D 0x02DED2B8
	static Any _0x8C371B47E14F5D7B(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x8C371B47E14F5D7B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x97C9E4E7024A8F2C 0xA9CCEF66
	static Any _0x3F87EDBDA9D97A56(BOOL p0, BOOL p1, Any* p2, Any p3, BOOL p4, BOOL p5, Any p6, Any* p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x3F87EDBDA9D97A56, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x137BC35589E34E1E 0x88B9B909
	static Any _0x7F3F56AC498ED9ED(Any p0, Any p1, Any p2) { return invoke<Any>(0x7F3F56AC498ED9ED, p0, p1, p2); } // 0x33EE12743CCD6343 0xE05E7052
	static Any _0x3F9C9BDA96E05E6E(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x3F9C9BDA96E05E6E, p0, p1, p2, p3); } // 0xC8F3AAF93D0600BF 0x4FA43BA4
	static Any _0x3A60D11C6AAB6D05(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x3A60D11C6AAB6D05, p0, p1, p2, p3, p4, p5); } // 0x7AE0589093A2E088 0x8C90D22F
	static int _DRAW_NOTIFICATION_4(BOOL blink, BOOL p1) { return invoke<int>(0xF247500CD493D02D, blink, p1); } // 0xF020C96915705B3A 0x8E319AB8
	static Any _0x3F7E950A153C1322(Any* p0, Any* p1, Any* p2, BOOL p3, BOOL p4) { return invoke<Any>(0x3F7E950A153C1322, p0, p1, p2, p3, p4); } // 0x8EFCCF6EC66D85E4
	static Any _0x9F18421334831F0F(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5) { return invoke<Any>(0x9F18421334831F0F, p0, p1, p2, p3, p4, p5); } // 0xB6871B0555B02996 0x5E93FBFA
	static Any _0xAEA0F9E8539067E0(int type, int image, char* text) { return invoke<Any>(0xAEA0F9E8539067E0, type, image, text); } // 0xD202B92CBF1D816F
	static Any _0xF8B92A999BF5D360(int type, char* button, char* text) { return invoke<Any>(0xF8B92A999BF5D360, type, button, text); } // 0xDD6CB2CCE7C2735C
	static void _SET_TEXT_ENTRY_2(char* p0) { invoke<Void>(0x81E3FE28C9E14CDE, p0); } // 0xB87A37EEB7FAA67D 0xF42C43C7
	static void _DRAW_SUBTITLE_TIMED(int time, BOOL p1) { invoke<Void>(0xE45B7EE472DD7F7F, time, p1); } // 0x9D77056A530643F6 0x38F82261
	static void _0x589BB5028182386C(Any* p0) { invoke<Void>(0x589BB5028182386C, p0); } // 0x853648FD1063A213 0xDD524A11
	static Any _0x9E606060DFAF139A() { return invoke<Any>(0x9E606060DFAF139A); } // 0x8A9BA1AB3E237613 0x672EFB45
	static void _SET_TEXT_ENTRY(char* text) { invoke<Void>(0x608B6701BEC4527A, text); } // 0x25FBB336DF1804CB 0x3E35563E
	static void _DRAW_TEXT(float x, float y) { invoke<Void>(0x2ED77CF10395403E, x, y); } // 0xCD015E5BB0D96A57 0x6F8350CE
	static void _SET_TEXT_ENTRY_FOR_WIDTH(char* text) { invoke<Void>(0x2561F357565DEF13, text); } // 0x54CE8AC98E120CAB 0x51E7A037
	static float _GET_TEXT_SCREEN_WIDTH(BOOL p0) { return invoke<float>(0x4E53FEE658D9705E, p0); } // 0x85F061DA64ED2F67 0xD12A643A
	static void _SET_TEXT_GXT_ENTRY(char* entry) { invoke<Void>(0x4B846CECFAF9AF4D, entry); } // 0x521FB041D93DD0E4 0x94B82066
	static Any _0xBEEA466E167943A5(float p0, float p1) { return invoke<Any>(0xBEEA466E167943A5, p0, p1); } // 0x9040DFB09BE75706 0xAA318785
	static void _SET_TEXT_COMPONENT_FORMAT(char* inputType) { invoke<Void>(0xCAFBB15049416379, inputType); } // 0x8509B634FBE7DA11 0xB245FC10
	static void _DISPLAY_HELP_TEXT_FROM_STRING_LABEL(Any p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0x7CBFB87C647743C3, p0, loop, beep, shape); } // 0x238FFE5C7B0498A6 0xB59B530D
	static void _0xAA8D087D7A86072A(char* p0) { invoke<Void>(0xAA8D087D7A86072A, p0); } // 0x0A24DA3A41B718F5 0x00E20F2D
	static BOOL _0x360D41DC76A83E6A(int p0) { return invoke<BOOL>(0x360D41DC76A83E6A, p0); } // 0x10BDDBFC529428DD 0xF63A13EC
	static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(char* gxtentry) { invoke<Void>(0xD514AD97CE4B7796, gxtentry); } // 0xF9113A30DE5C6670 0xF4C211F6
	static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0x33A8A7C6E127D3D4, blip); } // 0xBC38B49BCB83BC9B 0xE8E59820
	static void _0x1932449F6F629A1A(char* p0) { invoke<Void>(0x1932449F6F629A1A, p0); } // 0x23D69E0465570028 0x0E103475
	static void _0xC58F1AFD0C463C45(BOOL p0) { invoke<Void>(0xC58F1AFD0C463C45, p0); } // 0xCFDBDF5AE59BA0F4 0x2944A6C5
	static void _0x915E8393416FC05A(char* p0) { invoke<Void>(0x915E8393416FC05A, p0); } // 0xE124FA80A759019C 0x550665AE
	static void _0xA2BBD2C34F086DB6() { invoke<Void>(0xA2BBD2C34F086DB6); } // 0xFCC75460ABA29378 0x67785AF2
	static void _0xA85E8882C8C97AB2(char* p0) { invoke<Void>(0xA85E8882C8C97AB2, p0); } // 0x8F9EE5687F8EECCD 0xBF855650
	static void _0x421ECB536163F303(BOOL p0) { invoke<Void>(0x421ECB536163F303, p0); } // 0xA86911979638106F 0x6E7FDA1C
	static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0x8D23CF083336DA9B, value); } // 0x03B504CF259931BC 0xFE272A57
	static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0x9EA8AC61C9873436, value, decimalPlaces); } // 0xE7DCB5B874BCD96E 0x24D78013
	static void _ADD_TEXT_COMPONENT_ITEM_STRING(char* labelName) { invoke<Void>(0x9359E7CC54335EB9, labelName); } // 0xC63CD5D2920ACBE7 0xDCE05406
	static void _0x4FEBF200100F1D6C(Hash inputName) { invoke<Void>(0x4FEBF200100F1D6C, inputName); } // 0x17299B63C7683A2B 0x150E03B6
	static void _0xD46A2B8788925704(Blip blip) { invoke<Void>(0xD46A2B8788925704, blip); } // 0x80EAD8E2E1D5D52E 0x5DE98F0A
	static void _ADD_TEXT_COMPONENT_STRING(char* text) { invoke<Void>(0x63E8D6007C32E426, text); } // 0x6C188BE134E074AA 0x27A244D8
	static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0x96629435C64EFDA2, timestamp, flags); } // 0x1115F16B8AB9E8BF 0x135B3CD0
	static void _0x2DA751AE00792EE7(int p0, BOOL p1) { invoke<Void>(0x2DA751AE00792EE7, p0, p1); } // 0x0E4C749FF9DE9CC4 0x12929BDF
	static void _0x1CE8DD7E293D679C(char* p0, int p1) { invoke<Void>(0x1CE8DD7E293D679C, p0, p1); } // 0x761B77454205A61D 0x65E1D404
	static void _ADD_TEXT_COMPONENT_STRING2(char* text) { invoke<Void>(0xF91C5A9DBBA591E1, text); } // 0x94CF4AC034C9C986 0xC736999E
	static void _ADD_TEXT_COMPONENT_STRING3(char* text) { invoke<Void>(0x05F60BBD20DA0D62, text); } // 0x5F68520888E69014 0x0829A799
	static void _0xC498567F546E6683(int p0) { invoke<Void>(0xC498567F546E6683, p0); } // 0x39BBF623FC803EAC 0x6F1A1901
	static char* _GET_TEXT_SUBSTRING(char* text, int position, int length) { return invoke<char*>(0xDB77B302A1585346, text, position, length); } // 0x169BD9382084C8C0 0x34A396EE
	static char* _GET_TEXT_SUBSTRING_SAFE(char* text, int position, int length, int maxLength) { return invoke<char*>(0xAEC600A52C579C45, text, position, length, maxLength); } // 0xB2798643312205C5 0x0183A66C
	static char* _GET_TEXT_SUBSTRING_SLICE(char* text, int startPosition, int endPosition) { return invoke<char*>(0xA909984712C4AA59, text, startPosition, endPosition); } // 0xCE94AEBA5D82908A 0xFA6373BB
	static char* _GET_LABEL_TEXT(char* labelName) { return invoke<char*>(0xC083A2D1EE1A4BFF, labelName); } // 0x7B5280EBA9840C72 0x95C4B5AD
	static void CLEAR_PRINTS() { invoke<Void>(0x00400F14096FE01D); } // 0xCC33FA791322B9D9 0x216CB1C5
	static void CLEAR_BRIEF() { invoke<Void>(0x256D89E3C2C4E334); } // 0x9D292F73ADBD9313 0x9F75A929
	static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xE67FB3716A8EAC18); } // 0x6178F68A87A4D3A0 0x9E5D9198
	static void CLEAR_THIS_PRINT(Any* p0) { invoke<Void>(0x621ABFDE5A901516, p0); } // 0xCF708001E1E536DD 0x06878327
	static void CLEAR_SMALL_PRINTS() { invoke<Void>(0x1A0A83F25D4DB0AF); } // 0x2CEA2839313C09AC 0xA869A238
	static BOOL DOES_TEXT_BLOCK_EXIST(char* gxt) { return invoke<BOOL>(0xB3E11FB4CABD7067, gxt); } // 0x1C7302E725259789 0x96F74838
	static void REQUEST_ADDITIONAL_TEXT(char* gxt, int slot) { invoke<Void>(0x36A3D6FBED10EF81, gxt, slot); } // 0x71A78003C8E71424 0x9FA9175B
	static void _REQUEST_ADDITIONAL_TEXT_2(char* gxt, int slot) { invoke<Void>(0xDE372C28E5D47E7C, gxt, slot); } // 0x6009F9F1AE90D8A6 0xF4D27EBE
	static BOOL HAS_ADDITIONAL_TEXT_LOADED(Any additionalText) { return invoke<BOOL>(0x4D15A085E079AB18, additionalText); } // 0x02245FE4BED318B8 0xB0E56045
	static void CLEAR_ADDITIONAL_TEXT(Any additionalText, BOOL p1) { invoke<Void>(0x3A2938D665EA8A9E, additionalText, p1); } // 0x2A179DF17CCF04CD 0x518141E0
	static BOOL IS_STREAMING_ADDITIONAL_TEXT(Any additionalText) { return invoke<BOOL>(0x0E95D755010B8F81, additionalText); } // 0x8B6817B71B85EBF0 0xF079E4EB
	static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(char* gxt, int slot) { return invoke<BOOL>(0xA73545B11DECBFE2, gxt, slot); } // 0xADBF060E2B30C5BC 0x80A52040
	static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x13ACC601BB29A690); } // 0x7984C03AA5CC2F41 0x6A77FE8D
	static BOOL DOES_TEXT_LABEL_EXIST(char* gxt) { return invoke<BOOL>(0x33FD8E2E139F4FAC, gxt); } // 0xAC09CA973C564252 0x6ECAE560
	static Any GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(char* gxt) { return invoke<Any>(0xEA9E94540EB155DB, gxt); } // 0x801BD273D3A23F74 0xA4CA7BE5
	static int GET_LENGTH_OF_LITERAL_STRING(char* string) { return invoke<int>(0x21DDB8B32E12806A, string); } // 0xF030907CCBB8A9FD 0x99379D55
	static int _0xD426C8D00AB439F1(char* p0) { return invoke<int>(0xD426C8D00AB439F1, p0); } // 0x43E4111189E54F0E 0x7DBC0764
	static char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<char*>(0xC084B1EE35F79CF2, hash); } // 0xD0EF8A959B8A4CB9 0x1E8E310C
	static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xBA704932AFB9F153); } // 0x1930DFA731813EC4 0xC3BC1B4F
	static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x74DEF270F16E0F14); } // 0x9EB6522EA68F22FE 0x14AEAA28
	static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xA7E452C0F82F7C56); } // 0xAD6DACA4BA53E0A4 0x63BA19F5
	static void DISPLAY_HUD(BOOL Toggle) { invoke<Void>(0xE242D0D27B122FAC, Toggle); } // 0xA6294919E56FF02A 0xD10E4E31
	static void _0x0A252C1633E73DF0() { invoke<Void>(0x0A252C1633E73DF0); } // 0x7669F9E39DC17063 0xC380AC85
	static void _0x26EB6E778EAFF888() { invoke<Void>(0x26EB6E778EAFF888); } // 0x402F9ED62087E898 0xC47AB1B0
	static void DISPLAY_RADAR(BOOL Toggle) { invoke<Void>(0xA8010B7497A9230B, Toggle); } // 0xA0EBB943C300E693 0x52816BD4
	static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xDDBC00CF45797588); } // 0xA86478C6958735C5 0x40BADA1D
	static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0x86600FB859E1DB21); } // 0x157F93B036700462 0x1AB3B954
	static Any _0x2678321F4520BEAA() { return invoke<Any>(0x2678321F4520BEAA); } // 0xAF754F20EB5CD51A
	static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0x1AD7485666C5160C, blip, enabled); } // 0x4F7D8A9BFB0B43E9 0x3E160C90
	static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0x14C069AD8A3706EE, blip, colour); } // 0x837155CD2F63DA09 0xDDE7C65C
	static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0x43BCF79209E64C09, p0); } // 0x60296AF4BA14ABC5 0xB58B25BD
	static void _0x2DBB8220D546ED7A(BOOL p0) { invoke<Void>(0x2DBB8220D546ED7A, p0); } // 0x57D760D55F54E071 0x9854485F
	static void RESPONDING_AS_TEMP(float p0) { invoke<Void>(0xD737EB3BC76AFA39, p0); } // 0xBD12C5EEE184C337 0xDCA3F423
	static void SET_RADAR_ZOOM(int p0) { invoke<Void>(0x6D7511CE55C924FE, p0); } // 0x096EF57A0C999BBA 0x2A50D1A6
	static void _0x7C6A62285282BF0B(Any p0, float p1) { invoke<Void>(0x7C6A62285282BF0B, p0, p1); } // 0xF98E4B3E56AFC7B1 0x25EC28C0
	static void _SET_RADAR_ZOOM_LEVEL_THIS_FRAME(float zoomLevel) { invoke<Void>(0x3760FB6719E7C7FC, zoomLevel); } // 0xCB7CC0D58405AD41 0x09CF1CE5
	static void _0xB3C261D726A5AE97() { invoke<Void>(0xB3C261D726A5AE97); } // 0xD2049635DEB9C375 0xE8D3A910
	static void GET_HUD_COLOUR(int hudColour, int* r, int* g, int* b, int* a) { invoke<Void>(0xC8FBBC95190691A8, hudColour, r, g, b, a); } // 0x7C9C91AB74A0360F 0x63F66A0B
	static void _0x6BC5272669DB76F2(int r, int g, int b, int a) { invoke<Void>(0x6BC5272669DB76F2, r, g, b, a); } // 0xD68A5FF8A3A89874 0x0E41E45C
	static void _0x229F6A0BDA0D0DCA(int r, int g, int b, int a) { invoke<Void>(0x229F6A0BDA0D0DCA, r, g, b, a); } // 0x16A304E6CB2BFAB9 0x6BE3ACA8
	static void _0xEAB607D0E21772D5(Any p0, Any p1) { invoke<Void>(0xEAB607D0E21772D5, p0, p1); } // 0x1CCC708F0F850613 0x3B216749
	static void _0x8BD77DC43B187A2D(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x8BD77DC43B187A2D, p0, p1, p2, p3, p4); } // 0xF314CF4F0211894E 0xF6E7E92B
	static void FLASH_ABILITY_BAR(Any p0) { invoke<Void>(0x076F7D53AF91891E, p0); } // 0x02CFBA0C9E9275CE 0x3648960D
	static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0x7089B19EFAD03CEA, p0, p1); } // 0x9969599CCFF5D85E 0x24E53FD8
	static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0x46C2D906AD14E7FC, p0); } // 0xA18AFB39081B6A1F 0x629F866B
	static void _0xF211FA2D178DF639(BOOL p0) { invoke<Void>(0xF211FA2D178DF639, p0); } // 0xBA8D65C1C65702E5
	static float _0x75D27F83672CDCB0(float size, Any p1) { return invoke<float>(0x75D27F83672CDCB0, size, p1); } // 0xDB88A37483346780 0x3330175B
	static void SET_TEXT_SCALE(float p0, float size) { invoke<Void>(0x1C00A83A6321F5E9, p0, size); } // 0x07C837F9A01C34C9 0xB6E15B23
	static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0x63EBA277B22A4C2D, red, green, blue, alpha); } // 0xBE6B23FFA53FB442 0xE54DD2C8
	static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0x9A4139952357487D, align); } // 0xC02F4DBFB51D988B 0xE26D39A1
	static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0x71DD9196AD8BD3E5, toggle); } // 0x6B3C4650BC8BEE47 0x45B60520
	static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xD1AB173831A6CDE6, justifyType); } // 0x4E096588B13FFECA 0x68CDFA60
	static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xE2458E4F6B499A9C, start, end); } // 0x63145D9C883A1A70 0x6F60AB54
	static void SET_TEXT_LEADING(BOOL p0) { invoke<Void>(0xBAD855016DFBE4C3, p0); } // 0xA50ABC31E3CDFAFF 0x98CE21D4
	static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xC1EE2E3E6B7523EE, p0); } // 0x038C1F517D7FDCF8 0xF49D8A08
	static void SET_TEXT_FONT(int p0) { invoke<Void>(0x2626D8742682C5ED, p0); } // 0x66E0276CC5F6B9DA 0x80BC530D
	static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0x4A138BE60AE1F20D); } // 0x1CA3E9EAC9D93E5E 0xE2A11511
	static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0x9806DF8CF9239C35, distance, r, g, b, a); } // 0x465C84BC39F1C351 0xE6587517
	static void SET_TEXT_OUTLINE() { invoke<Void>(0xE1C0ABBCF194E92A); } // 0x2513DFB0FB8400FE 0xC753412F
	static void SET_TEXT_EDGE(Hash p0, int r, int g, int b, int a) { invoke<Void>(0x872BE36490E5119C, p0, r, g, b, a); } // 0x441603240D202FA6 0x3F1A5DAB
	static void SET_TEXT_RENDER_ID(Any p0) { invoke<Void>(0xFEC09A9FB6A5B7D4, p0); } // 0x5F15302936E07111 0xC5C3B7F3
	static Any GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<Any>(0xF39B3464B1C83713); } // 0x52F0982D7FD156B6 0x8188935F
	static BOOL REGISTER_NAMED_RENDERTARGET(char* p0, BOOL p1) { return invoke<BOOL>(0x81A88F033907F069, p0, p1); } // 0x57D9C12635E25CE3 0xFAE5D6F0
	static BOOL IS_NAMED_RENDERTARGET_REGISTERED(char* p0) { return invoke<BOOL>(0x23029FE435A4B2A1, p0); } // 0x78DCDC15C9F116B4 0x284057F5
	static BOOL RELEASE_NAMED_RENDERTARGET(Any* p0) { return invoke<BOOL>(0xE36ACDF40F238925, p0); } // 0xE9F6FFE837354DD4 0xD3F6C892
	static void LINK_NAMED_RENDERTARGET(Hash hash) { invoke<Void>(0xB4B0172C1DF0ECED, hash); } // 0xF6C09E276AEB3F2D 0x6844C4B9
	static Any GET_NAMED_RENDERTARGET_RENDER_ID(char* p0) { return invoke<Any>(0xD322440EC90C6129, p0); } // 0x1A6478B61C6BDC3B 0xF9D7A401
	static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash hash) { return invoke<BOOL>(0xC074130515D6BB61, hash); } // 0x113750538FA31298 0x8B52601F
	static void CLEAR_HELP(BOOL Enable) { invoke<Void>(0x1D208E4A4E1D4FFE, Enable); } // 0x8DFCED7A656F8802 0xE6D85741
	static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0x281047BA84902BBE); } // 0xDAD37F45428801AE 0x4B3C9CA9
	static BOOL _0x1FB0723A6C31C02C() { return invoke<BOOL>(0x1FB0723A6C31C02C); } // 0x214CD562A939246A 0x812CBE0E
	static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x23741E39BEA32E66); } // 0x4D79439A6B55AC67 0xA65F262A
	static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xF55B59670A5B4482); } // 0x327EDEEEAC55C369 0x3E50AE92
	static int _0x41A93ECFFBBAC499() { return invoke<int>(0x41A93ECFFBBAC499); } // 0x4A9923385BDB9DAD 0x87871CE0
	static Any _GET_BLIP_INFO_ID_ITERATOR() { return invoke<Any>(0xEF74E92BF5AB1FC4); } // 0x186E5D252FA50E7D 0xB9827942
	static Any GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<Any>(0xE1B5CD7825E645BA); } // 0x9A3FF3DE163034E8 0x144020FA
	static Blip GET_NEXT_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0x4C4E465CF7D287B6, blip); } // 0x14F96AA50D6FBEA7 0x9356E92F
	static Blip GET_FIRST_BLIP_INFO_ID(Blip blip) { return invoke<Blip>(0xD2368840A8D17615, blip); } // 0x1BEDE233E6CD2A1F 0x64C0273D
	static Vector3 GET_BLIP_INFO_ID_COORD(Any p0) { return invoke<Vector3>(0x2A98AE26EA741D06, p0); } // 0xFA7C7F0AADF25D09 0xB7374A66
	static Any GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<Any>(0xADC2D82878D72961, blip); } // 0x1E314167F701DC3B 0xD0FC19F4
	static Any GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<Any>(0x65119606DDC52953, blip); } // 0xBE9B0959FFD0779B 0x501D7B4E
	static Any GET_BLIP_INFO_ID_ENTITY_INDEX(Any p0) { return invoke<Any>(0x3B994A792FBD0C0F, p0); } // 0x4BA4E2553AFEDC2C 0xA068C40B
	static Any GET_BLIP_INFO_ID_PICKUP_INDEX(Any p0) { return invoke<Any>(0x9D33B9112475CB93, p0); } // 0x9B6786E4C03DD382 0x86913D37
	static Blip GET_BLIP_FROM_ENTITY(Entity p0) { return invoke<Blip>(0x612EFDB1D15630E7, p0); } // 0xBC8DBDCA2436F7E8 0x005A2A47
	static Blip ADD_BLIP_FOR_RADIUS(float x, float y, float z, float radius) { return invoke<Blip>(0x02F3200AAEEE5B5F, x, y, z, radius); } // 0x46818D79B1F7499A 0x4626756C
	static int ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<int>(0xF800CF9298ABC708, entity); } // 0x5CDE92C702A8FCE7 0x30822554
	static Any ADD_BLIP_FOR_PICKUP(Any p0) { return invoke<Any>(0x2A299ED1CFE48287, p0); } // 0xBE339365C863BD36 0x16693C3A
	static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0x3779A616B93955A6, x, y, z); } // 0x5A039BB0BCA604B6 0xC6F43D0E
	static void _0x4D76E3F9B8B09940(float p0, float p1, float p2, float p3, int p4) { invoke<Void>(0x4D76E3F9B8B09940, p0, p1, p2, p3, p4); } // 0x72DD432F3CDFC0EE 0xBF25E7B2
	static void _0x8C34068CFF917045(BOOL p0) { invoke<Void>(0x8C34068CFF917045, p0); } // 0x60734CC207C9833C 0xE7E1E32B
	static void SET_BLIP_COORDS(Blip p0, float p1, float p2, float p3) { invoke<Void>(0x4CF4101B43DF5CB0, p0, p1, p2, p3); } // 0xAE2AF67E9D9AF65D 0x680A34D4
	static Vector3 GET_BLIP_COORDS(Any p0) { return invoke<Vector3>(0x35EF1BE316B17AE9, p0); } // 0x586AFE3FF72D996E 0xEF6FF47B
	static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xD65A9304AF8AC06F, blip, spriteId); } // 0xDF735600A4696DAF 0x8DBBB0B9
	static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xC1EC6F04342D686E, blip); } // 0x1FC877464A04FC4F 0x72FF2E73
	static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* blipname) { invoke<Void>(0x227FC39A4871C64F, blip, blipname); } // 0xEAA0FFE120D92784 0xAC8A5461
	static void SET_BLIP_NAME_TO_PLAYER_NAME(Any p0, Any p1) { invoke<Void>(0xA3814CCBFA8E770B, p0, p1); } // 0x127DE7B20C60A6A3 0x03A0B8F9
	static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0x95FCF148333C6A88, blip, alpha); } // 0x45FF974EEE1C8734 0xA791FCCD
	static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0x86EA9787AE151BBA, blip); } // 0x970F608F0EE6C885 0x297AF6C8
	static void SET_BLIP_FADE(Any p0, Any p1, Any p2) { invoke<Void>(0xC9341E072FCE891F, p0, p1, p2); } // 0x2AEE8F8390D2298C 0xA5999031
	static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0x0FAC76AAB130CA00, blip, rotation); } // 0xF87683CDF73C3F6E 0x6B8F44FE
	static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xBABFDD20929FFBE7, blip, duration); } // 0xD3CD6FD297AE87CC 0x8D5DF611
	static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xACACB957DAFE65BF, blip, p1); } // 0xAA51DB313C010A7E 0xEAF67377
	static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xA887303978A245B8, blip, color); } // 0x03D7FB09E75D6B7E 0xBB3C5A41
	static void SET_BLIP_SECONDARY_COLOUR(Blip blip, float r, float g, float b) { invoke<Void>(0xC5C865ECD7DE2487, blip, r, g, b); } // 0x14892474891E09EB 0xC6384D32
	static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xE51CDE3D04A4E1E7, blip); } // 0xDF729E8D20CF7327 0xDD6A1E54
	static Any GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<Any>(0xA79A906BF9312143, blip); } // 0x729B5F1EFBC0AAEE 0xE88B4BC2
	static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0x46C6FE0FAE608209, blip); } // 0xDA5F8727EB75B926 0x1226765A
	static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0x072F3A50620B3716, blip); } // 0xE41CA53051197A27 0x258CBA3A
	static BOOL _0x2C9421ABC44104B7(Any p0) { return invoke<BOOL>(0x2C9421ABC44104B7, p0); } // 0xDD2238F57B977751 0x3E47F357
	static void _0xC3E58D12CAA8F1DF(Any p0, BOOL p1) { invoke<Void>(0xC3E58D12CAA8F1DF, p0, p1); } // 0x54318C915D27E4CE 0x43996428
	static void SET_BLIP_HIGH_DETAIL(Any p0, BOOL p1) { invoke<Void>(0xB05D30EE9CFC06A7, p0, p1); } // 0xE2590BC29220CEBB 0xD5842BFF
	static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x49AF3803FDB65173, blip, toggle); } // 0x24AC0137444F9FD5 0x802FB686
	static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0x3EC9E8DF2F458AE3, blip); } // 0x26F49BF3381D933D 0x24ACC4E9
	static Any DISABLE_BLIP_NAME_FOR_VAR() { return invoke<Any>(0xB1F63D225239D9B1); } // 0x5C90988E7C8E1AF4 0xFFD7476C
	static Any _0x2850F164CB1AAE27() { return invoke<Any>(0x2850F164CB1AAE27); } // 0x4167EFE0527D706E 0xC5EB849A
	static void _0x8E869CC85FC22570(BOOL p0) { invoke<Void>(0x8E869CC85FC22570, p0); } // 0xF1A6C18B35BCADE6 0xA2CAAB4F
	static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xDBFA9591B1E30DFA, blip, toggle); } // 0xB14552383D39CE3E 0xC0047F15
	static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xA7293AC11823B862, blip, toggle); } // 0x2E8D9498C56DD0D1 0x1A81202B
	static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0x53F7E41C835BF66D, blip); } // 0xA5E41FD83AD6CEF0 0x52E111D7
	static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL p1) { invoke<Void>(0x62D401A5D1298E20, blip, p1); } // 0xBE8BE4FE60E27B72 0x5C67725E
	static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xFC630C7120A34CE4, blip, scale); } // 0xD38744167B2FA257 0x1E6EC434
	static void SET_BLIP_PRIORITY(Blip blip, Any p1) { invoke<Void>(0xA09285173B92875E, blip, p1); } // 0xAE9FC9EF6A9FAC79 0xCE87DA6F
	static void SET_BLIP_DISPLAY(Blip blip, int p1) { invoke<Void>(0x4808D91D69951AC2, blip, p1); } // 0x9029B2F3DA924928 0x2B521F91
	static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0x40D1BB4DA9163ECE, blip, index); } // 0x234CDD44D996FD9A 0xEF72F533
	static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0x5B62CAB9B0D6ABF1, blip); } // 0x86A652570E5F25DD 0xD8C3C1CD
	static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0x4ADC112587E95B61, blip, toggle); } // 0x6F6F290102C02AB4 0xF290CFD8
	static void PULSE_BLIP(Blip blip) { invoke<Void>(0xB9858B122225D54D, blip); } // 0x742D6FD43115AF73 0x44253855
	static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0x5CB7447EA7541D81, blip, number); } // 0xA3C0B359DCB848B6 0x7BFC66C6
	static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0x53004C0700FC20DF, blip); } // 0x532CFF637EF80148 0x0B6D610D
	static void _0x9C9B069F802F9A20(Any p0, BOOL p1) { invoke<Void>(0x9C9B069F802F9A20, p0, p1); } // 0x75A16C3DA34F1245 0x1D99F676
	static void _0x2301D3206582A834(Blip blip, BOOL toggle) { invoke<Void>(0x2301D3206582A834, blip, toggle); } // 0x74513EA3E505181E 0x3DCF0092
	static void _0xA7DD6B96BB331049(Any p0, BOOL p1) { invoke<Void>(0xA7DD6B96BB331049, p0, p1); } // 0x5FBCA48327B914DF 0xD1C3D71B
	static void _0x68E9ACC390B2E9FA(Blip blip, BOOL toggle) { invoke<Void>(0x68E9ACC390B2E9FA, blip, toggle); } // 0xB81656BC81FE24D1 0x8DE82C15
	static void _0x5F1236DA8F9E6DF1(Blip blip, BOOL toggle) { invoke<Void>(0x5F1236DA8F9E6DF1, blip, toggle); } // 0x23C3EB807312F01A 0x4C8F02B4
	static void _0x3D41466BFBB3BFF0(Any p0, BOOL p1) { invoke<Void>(0x3D41466BFBB3BFF0, p0, p1); } // 0xDCFB5D4DB8BF367E 0xABBE1E45
	static void _0xA4A936EE2EA48F4C(Any p0, BOOL p1) { invoke<Void>(0xA4A936EE2EA48F4C, p0, p1); } // 0xC4278F70131BAA6D 0x6AA6A1CC
	static void _0x3F8E719E58E18FE8(Blip blip, BOOL toggle) { invoke<Void>(0x3F8E719E58E18FE8, blip, toggle); } // 0x2B6D467DAB714E8D 0xC575F0BC
	static void _0xC368EAE5DAE3417C(Any p0, BOOL p1) { invoke<Void>(0xC368EAE5DAE3417C, p0, p1); } // 0x25615540D894B814 0x40E25DB8
	static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xD11595488376CB53, blip); } // 0xA6DB27D19ECBB7DA 0xAE92DD96
	static void SET_WAYPOINT_OFF() { invoke<Void>(0x29852A353E3CB353); } // 0xA7E4E2D361C2627F 0xB3496E1B
	static void _0xEE5909A1554A5243() { invoke<Void>(0xEE5909A1554A5243); } // 0xD8E694757BCEA8E9 0x62BABF2C
	static void REFRESH_WAYPOINT() { invoke<Void>(0x172859DACE609110); } // 0x81FA173F170560D1 0xB395D753
	static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x6F47CC6EC18B2AEE); } // 0x1DD1F58F493F1DA5 0x5E4DF47B
	static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0x932985E97A3FBC62, x, y); } // 0xFE43368D2AA4F2FC 0x8444E1F0
	static void SET_BLIP_BRIGHT(Any p0, Any p1) { invoke<Void>(0x868BC403EFDAF06C, p0, p1); } // 0xB203913733F27884 0x72BEE6DF
	static void SET_BLIP_SHOW_CONE(Any p0, BOOL p1) { invoke<Void>(0x42DDA83F1EF65139, p0, p1); } // 0x13127EC3665E8EE1 0xFF545AD8
	static void _0x30E3108F1359A0AF(Ped ped) { invoke<Void>(0x30E3108F1359A0AF, ped); } // 0xC594B315EDF2D4AF 0x41B0D022
	static Any SET_MINIMAP_COMPONENT(Any p0, Any p1, Any p2) { return invoke<Any>(0xFE976144E8031438, p0, p1, p2); } // 0x75A9A10948D1DEA6 0x419DCDC4
	static void _0x58D4117EB0FD7F41() { invoke<Void>(0x58D4117EB0FD7F41); } // 0x60E892BA4F5BDCA4
	static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0x765EF7C29CC34C67); } // 0xDCD4EC3F419D02FA 0xAB93F020
	static void _0x1E6BB875A3E3717B(BOOL p0) { invoke<Void>(0x1E6BB875A3E3717B, p0); } // 0x41350B4FC28E3941
	static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x4029EE69E88FC7AD); } // 0x4B0311D3CDC4648F 0x35087963
	static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int p4) { invoke<Void>(0x45BF00EDFE94CD53, interior, x, y, z, p4); } // 0x59E727A1C9D3E31A 0x6F2626E1
	static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xA73CDA63BAF236EA); } // 0xE81B7D2A3DAB2D81 0x39ABB10E
	static void _SET_PLAYER_BLIP_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xED49D13ECA9FDCFD, x, y); } // 0x77E2DD177910E1CF 0x54E75C7D
	static Any _0xE2E4DA185F020F16() { return invoke<Any>(0xE2E4DA185F020F16); } // 0x9049FE339D5F6F6F 0x199DED14
	static void _DISABLE_RADAR_THIS_FRAME() { invoke<Void>(0x1EE35C3DA78BCD1B); } // 0x5FBAE526203990C9 0x1A4318F7
	static void _0x50F274CB35FEF3CD() { invoke<Void>(0x50F274CB35FEF3CD); } // 0x20FE7FDFEEAD38C0 0xCE36E3FE
	static void _CENTER_PLAYER_ON_RADAR_THIS_FRAME() { invoke<Void>(0x612EF534CF263B01); } // 0x6D14BFDC33B34F55 0x334EFD46
	static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xB68EAFA87096DBAD, p0); } // 0xC3B07BA00A83B0F1 0xF016E08F
	static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0x0839D145981F0172, toggle); } // 0x276B6CE369C33678 0x489FDD41
	static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0x9651FBE3AC73FD35, toggle); } // 0x96DEC8D5430208B7 0x0049DF83
	static void _0x42EE43A7FCCF2B38(BOOL p0) { invoke<Void>(0x42EE43A7FCCF2B38, p0); } // 0x170F541E1CADD1DE
	static void _SET_SINGLEPLAYER_HUD_CASH(int pocketcash, int bankcash) { invoke<Void>(0xD4FC686911B09A2F, pocketcash, bankcash); } // 0x0772DF77852C2E30
	static void DISPLAY_AMMO_THIS_FRAME(BOOL p0) { invoke<Void>(0xB5D520A5F62022A9, p0); } // 0xA5E78BA2B1331C55 0x60693CEE
	static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0x36D2D19DD646CA7E); } // 0x73115226F4814E62 0xBC6C73CB
	static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0x3BE81935DF4C438C); } // 0x719FF505F097FD20 0xB75D4AD2
	static void _0xC2C8DAC030C9DD74(BOOL p0) { invoke<Void>(0xC2C8DAC030C9DD74, p0); } // 0xE67C6DFD386EA5E7 0x5476B9FD
	static void _0x2786C14C093315EE() { invoke<Void>(0x2786C14C093315EE); } // 0xC2D15BEF167E27BC 0xF4F3C796
	static void _0x18F3157772D89A13() { invoke<Void>(0x18F3157772D89A13); } // 0x95CF81BD06EE1887 0x7BFFE82F
	static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x9C5145CEB27DF617); } // 0xDD21B55DF695CD0A 0x2C842D03
	static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xD4B28D55606B76D1); } // 0xC7C6789AA1CFEDD0 0x728B4EF4
	static void SET_MULTIPLAYER_HUD_CASH(int p0, int p1) { invoke<Void>(0x816B1268C4B28EB8, p0, p1); } // 0xFD1D220394BCB824 0xA8DB435E
	static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xF171B0151AD7C8FE); } // 0x968F270E39141ECA 0x07BF4A7D
	static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0x3CF0E1768B4F7FCD); } // 0xD46923FC481CA285 0xF3807BED
	static void DISPLAY_HELP_TEXT_THIS_FRAME(char* message, BOOL p1) { invoke<Void>(0x79FABB2C58F7FCFA, message, p1); } // 0x960C9FF8F616E41C 0x18E3360A
	static void _SHOW_WEAPON_WHEEL(BOOL forcedShow) { invoke<Void>(0xEFD632263D461F18, forcedShow); } // 0xEB354E5376BC81A7 0x1EFFB02A
	static void _0x6C3BFB4DB2620E29() { invoke<Void>(0x6C3BFB4DB2620E29); } // 0x0AFC4AF510774B47 0xB26FED2B
	static Hash _0x32C7968FD411D702() { return invoke<Hash>(0x32C7968FD411D702); } // 0xA48931185F0536FE 0x22E9F555
	static void _0x62AA3AEA17166137(Any p0) { invoke<Void>(0x62AA3AEA17166137, p0); } // 0x72C1056D678BB7D8 0x83B608A0
	static Any _0x3E9A9913C8317DB2(Any p0) { return invoke<Any>(0x3E9A9913C8317DB2, p0); } // 0xA13E93403F26C812
	static void _0xB1E3994D39AB1BA3(BOOL p0) { invoke<Void>(0xB1E3994D39AB1BA3, p0); } // 0x14C9FDCC41F81F63 0xE70D1F43
	static void SET_GPS_FLAGS(Any p0, float p1) { invoke<Void>(0x27955D546C265CFD, p0, p1); } // 0x5B440763A4C8D15B 0x60539BAB
	static void CLEAR_GPS_FLAGS() { invoke<Void>(0x59192BA17AF112CB); } // 0x21986729D6A3A830 0x056AFCE6
	static void _0x31EF3A8643AEE432(BOOL p0) { invoke<Void>(0x31EF3A8643AEE432, p0); } // 0x1EAC5F91BCBC5073 0xFB9BABF5
	static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0x92DF8AC35972E189); } // 0x7AA5B4CE533C858B 0x40C59829
	static void _0xAEA0F617AE34A03E(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xAEA0F617AE34A03E, p0, p1, p2); } // 0xDB34E8D56FC13B08 0x7F93799B
	static void _0x3B10D8B7B9478764(Any p0, Any p1, Any p2) { invoke<Void>(0x3B10D8B7B9478764, p0, p1, p2); } // 0x311438A071DD9B1A 0xEEBDFE55
	static void _0x04E4D43594863E6E(BOOL p0, Any p1, Any p2) { invoke<Void>(0x04E4D43594863E6E, p0, p1, p2); } // 0x900086F371220B6F 0xDA0AF00E
	static void _0x1322F99AA1D4A48D() { invoke<Void>(0x1322F99AA1D4A48D); } // 0xE6DE0561D9232A64 0xCF2E3E24
	static void _0xA7D7FAE7DD97EE11(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xA7D7FAE7DD97EE11, p0, p1, p2); } // 0x3D3D15AF7BCAAF83 0xC3DCBEDB
	static void _0x5AF829C0C279A2A5(float x, float y, float z) { invoke<Void>(0x5AF829C0C279A2A5, x, y, z); } // 0xA905192A6781C41B 0xFE485135
	static void _0x680E7900A7AC1C49(BOOL p0) { invoke<Void>(0x680E7900A7AC1C49, p0); } // 0x3DDA37128DD1ACA8 0xE87CBE4C
	static void _0x5288DF8B264BDD67() { invoke<Void>(0x5288DF8B264BDD67); } // 0x67EEDEA1B9BAFD94 0x0D9969E4
	static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xBBBD987397E6B6BC); } // 0xFF4FB7C8CDFA3DA7 0x0B9C7FC2
	static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xAF8A225FD6A82D37, toggle); } // 0x320D0E0D936A0E9B 0xE991F733
	static void _0x87D53F09DEBDF3A2(Any p0) { invoke<Void>(0x87D53F09DEBDF3A2, p0); } // 0x7B21E0BB01E8224A
	static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xD84E02209FE454B0); } // 0xF2DD778C22B15BDA 0xB8359952
	static void _0x63813B66905ABBCA(Any p0) { invoke<Void>(0x63813B66905ABBCA, p0); } // 0x6B1DE27EE78E6A19 0x79A6CAF6
	static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xD178AD9A620581E4, toggle); } // 0x6AFDFB93754950C7 0xC68D47C4
	static void KEY_HUD_COLOUR(BOOL p0, Any p1) { invoke<Void>(0xEC2E777D53028DC7, p0, p1); } // 0x1A5CD7752DD28CD3 0xD5BFCADB
	static void SET_MISSION_NAME(BOOL p0, Any* p1) { invoke<Void>(0xFB04AECD5A11A220, p0, p1); } // 0x5F28ECF5FC84772F 0x68DCAE10
	static void _0x889140F973766C21(BOOL p0, Any* p1) { invoke<Void>(0x889140F973766C21, p0, p1); } // 0xE45087D85F468BC2 0x8D9A1734
	static void _0xEED404F49DB2967E(BOOL p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8) { invoke<Void>(0xEED404F49DB2967E, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x817B86108EB94E51 0xD2161E77
	static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL p0) { invoke<Void>(0x540F8F296C21646E, p0); } // 0x58FADDED207897DC 0xA41C3B62
	static void _SET_DRAW_MAP_VISIBLE(BOOL toggle) { invoke<Void>(0xEB1CCBF067BBB4A4, toggle); } // 0x9133955F1A2DA957 0x02F5F1D1
	static void _0x34ECDAD8DF31B67B(BOOL p0) { invoke<Void>(0x34ECDAD8DF31B67B, p0); } // 0xF8DEE0A5600CBB93 0xD8D77733
	static Any _0x569378E93C6AE32B() { return invoke<Any>(0x569378E93C6AE32B); } // 0xE0130B41D3CF4574 0xA4098ACC
	static BOOL _0xAFE95276C2E91B9C(float p0, float p1, float p2) { return invoke<BOOL>(0xAFE95276C2E91B9C, p0, p1, p2); } // 0x6E31B91145873922 0x65B705F6
	static void _0x9930B2FC581C0211(BOOL p0) { invoke<Void>(0x9930B2FC581C0211, p0); } // 0x62E849B7EB28E770
	static void _0xA0C05EE760470AF1(float x, float y, float z) { invoke<Void>(0xA0C05EE760470AF1, x, y, z); } // 0x0923DBF87DFF735E 0xE010F081
	static void _0xDAABBC75E1E0D7FF(Any p0) { invoke<Void>(0xDAABBC75E1E0D7FF, p0); } // 0x71BDB63DBAF8DA59 0x5133A750
	static void _0xF4C9C197A0866D8F() { invoke<Void>(0xF4C9C197A0866D8F); } // 0x35EDD5B2E3FF01C0 0x20FD3E87
	static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xF6DBCBA906EB7BE1, angle); } // 0x299FAEBB108AE05B 0xDEC733E4
	static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0x0D7EB6A04F8B4833); } // 0x8183455E16C42E3A 0x742043F9
	static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0x58FAB6919724E77F, x, y); } // 0x1279E861A329E73F 0xB9632A91
	static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xF7EC511F2CD76E8C); } // 0x3E93E06DB8EF1F30 0x5E8E6F54
	static void _SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(float p0, Any p1) { invoke<Void>(0xD5D272D750E546AB, p0, p1); } // 0xD201F3FF917A506D 0x0308EDF6
	static void _0x65AC62F4D6258F81(Any p0, Any p1, BOOL p2) { invoke<Void>(0x65AC62F4D6258F81, p0, p1, p2); } // 0x3F5CC444DCAAA8F2 0x7FB6FB2A
	static void _0x578E5CA96A823D74(Any p0) { invoke<Void>(0x578E5CA96A823D74, p0); } // 0x975D66A0BC17064C 0xF07D8CEF
	static void _0xE072C9F34898343C(Any p0) { invoke<Void>(0xE072C9F34898343C, p0); } // 0x06A320535F5F0248 0x827F14DE
	static void _SET_RADAR_BIGMAP_ENABLED(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xB065B4B4FB0428C8, toggleBigMap, showFullMap); } // 0x231C8F89D0539D8F 0x08EB83D2
	static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xE4CEE54AE3823186, id); } // 0xBC4C9EA5391ECC0D 0x6214631F
	static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0x6DE2622B73132B23, id); } // 0xDD100EB17A94FF65 0x2B86F382
	static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x7B86A675C654B516, id); } // 0xE374C498D8BADC14 0x31ABA127
	static BOOL _0x97D880C9A71C366E(Any p0) { return invoke<BOOL>(0x97D880C9A71C366E, p0); } // 0x09C0403ED9A751C2 0xE8C8E535
	static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x1B7A773B18DF3DB0, id); } // 0x6806C51AD12B83B8 0xDB2D0762
	static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xCE8BEF8F2F858ED5, id); } // 0x0B4DF1FA60C0E664 0x95E1546E
	static void _0xA7EDE1656DC6165B() { invoke<Void>(0xA7EDE1656DC6165B); } // 0xA4DEDE28B1814289 0x52746FE1
	static void RESET_RETICULE_VALUES() { invoke<Void>(0xC6843D8EC0F2E0D7); } // 0x12782CE0A636E9F0 0xBE27AA3F
	static void RESET_HUD_COMPONENT_VALUES(Any p0) { invoke<Void>(0x4A819C86009EE6EC, p0); } // 0x450930E616475D0D 0xD15B46DA
	static void SET_HUD_COMPONENT_POSITION(Any p0, float p1, float p2) { invoke<Void>(0xA2DDC75885378542, p0, p1, p2); } // 0xAABB1F56E2A17CED 0x2F3A0D15
	static Vector3 GET_HUD_COMPONENT_POSITION(Any p0) { return invoke<Vector3>(0x3B663B8DD7C6F657, p0); } // 0x223CA69A8C4417FD 0x080DCED6
	static void _0xE878A15FE485B708() { invoke<Void>(0xE878A15FE485B708); } // 0xB57D8DD645CFA2CF 0x5BBCC934
	static Any _0x6E6AE182EBD3AEDF(float x, float y, float z, Any* p3, Any* p4) { return invoke<Any>(0x6E6AE182EBD3AEDF, x, y, z, p3, p4); } // 0xF9904D11F1ACBEC3 0xFE9A39F8
	static void _0xD04F9287B84AB439() { invoke<Void>(0xD04F9287B84AB439); } // 0x523A590C1A3CC0D3 0x10DE5150
	static void _0x4C5AEEEDE217D6D2() { invoke<Void>(0x4C5AEEEDE217D6D2); } // 0xEE4C0E6DBC6F2C6F 0x67649EE0
	static Any _0xF8542C6FF25C1960() { return invoke<Any>(0xF8542C6FF25C1960); } // 0x9135584D09A3437E 0x9D2C94FA
	static BOOL _0xDE923E56D89B9B0D(Any p0) { return invoke<BOOL>(0xDE923E56D89B9B0D, p0); } // 0x2432784ACA090DA4 0x45472FD5
	static void _0xF284C175361D98D5(Any p0, float p1, float p2) { invoke<Void>(0xF284C175361D98D5, p0, p1, p2); } // 0x7679CC1BCEBE3D4C 0x198F32D7
	static void _0x9E72F75033114968(Any p0, float x, float y, float z) { invoke<Void>(0x9E72F75033114968, p0, x, y, z); } // 0x784BA7E0ECEB4178 0x93045157
	static void _0x66BC2361BBC0F6FA(Any p0, Any p1, float p2, float p3) { invoke<Void>(0x66BC2361BBC0F6FA, p0, p1, p2, p3); } // 0xB094BC1DB4018240 0x18B012B7
	static void _0xA6B13C73F7ED85C1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xA6B13C73F7ED85C1, p0, p1, p2, p3, p4, p5); } // 0x788E7FD431BD67F1 0x97852A82
	static void CLEAR_FLOATING_HELP(Any p0, BOOL p1) { invoke<Void>(0x911DB9BD97C951AF, p0, p1); } // 0x50085246ABD3FEFA 0xB181F88F
	static void _0xA9CD93FB8790D49C(Any p0, char* p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xA9CD93FB8790D49C, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x6DD05E9D83EFA4C9 0xC969F2D0
	static Any _0x5F11B2F648054C54() { return invoke<Any>(0x5F11B2F648054C54); } // 0x6E0EB3EB47C8D7AA 0xEFD2564A
	static Any _0x929570A93E38312B(Ped pedId, char* username, BOOL pointedClanTag, BOOL isRockstarClan, char* clanTag, Any p5) { return invoke<Any>(0x929570A93E38312B, pedId, username, pointedClanTag, isRockstarClan, clanTag, p5); } // 0xBFEFE3321A3F5015 0xF5CD2AA4
	static void _0xFE74F1AD5D158E63(Any p0) { invoke<Void>(0xFE74F1AD5D158E63, p0); } // 0x31698AA80E0223F8 0x3D081FE4
	static BOOL _0xC5BD3FB183271AF5(Any p0) { return invoke<BOOL>(0xC5BD3FB183271AF5, p0); } // 0x4E929E7A5796FD26 0x60118951
	static BOOL ADD_TREVOR_RANDOM_MODIFIER(Any p0) { return invoke<BOOL>(0x7EEAC8385109D7CF, p0); } // 0x595B5178E412E199 0x63959059
	static void _0xF6EAAA49D22285B8(Any headDisplayId, Any sprite, BOOL enabled) { invoke<Void>(0xF6EAAA49D22285B8, headDisplayId, sprite, enabled); } // 0x63BB75ABEDC1F6A0 0xD41DF479
	static void _0x995518412AB78DAE(Any p0, BOOL p1) { invoke<Void>(0x995518412AB78DAE, p0, p1); } // 0xEE76FF7E6A0166B0 0x767DED29
	static void _0x96FDA5C5A80DFC82(Any playerHeadId, BOOL p1) { invoke<Void>(0x96FDA5C5A80DFC82, playerHeadId, p1); } // 0xA67F9C46D612B6F1 0xB01A5434
	static void _0x9B45CA59221B13A3(Any p0, Any p1, Any p2) { invoke<Void>(0x9B45CA59221B13A3, p0, p1, p2); } // 0x613ED644950626AE 0x7E3AA40A
	static void _0xBBD7D33F4336DFDE(Any p0, Any p1) { invoke<Void>(0xBBD7D33F4336DFDE, p0, p1); } // 0x3158C77A7E888AB4 0x5777EC77
	static void _0xD019CAA712D73FDE(Any p0, Any p1, Any p2) { invoke<Void>(0xD019CAA712D73FDE, p0, p1, p2); } // 0xD48FE545CD46F857 0xF4418611
	static void _0x07D45980454F3490(Any p0, Any p1) { invoke<Void>(0x07D45980454F3490, p0, p1); } // 0xCF228E2AA03099C3 0x0EBB003F
	static void _0x5B30EF083763FE63(Any p0, Any* p1) { invoke<Void>(0x5B30EF083763FE63, p0, p1); } // 0xDEA2B8283BAA3944 0x627A559B
	static BOOL _0xFD73B6482F9A6C55(Any p0) { return invoke<BOOL>(0xFD73B6482F9A6C55, p0); } // 0xEB709A36958ABE0D 0xF11414C4
	static void _0xAD30E5F2D578273F(Any p0, Any* p1) { invoke<Void>(0xAD30E5F2D578273F, p0, p1); } // 0x7B7723747CCB55B6 0x939218AB
	static Any _0x596A301E311A13F8() { return invoke<Any>(0x596A301E311A13F8); } // 0x01A358D9128B7A86 0xAB5B7C18
	static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xB801C116FCE318DF); } // 0x97D47996FC48CBAD 0x42A55B14
	static Any _0x67D644FA4E5368FE(Any p0) { return invoke<Any>(0x67D644FA4E5368FE, p0); } // 0xE3B05614DCE1D014 0xD217EE7E
	static void _0x763133A6DF081FA2(BOOL p0) { invoke<Void>(0x763133A6DF081FA2, p0); } // 0xB99C4E4D9499DF29
	static Any _0x0D1D9ACD5259F61D() { return invoke<Any>(0x0D1D9ACD5259F61D); } // 0xAF42195A42C63BBA
	static void SET_WARNING_MESSAGE(char* entryLine1, int instructionalKey, char* entryLine2, BOOL p3, Any p4, Any* p5, Any* p6, BOOL background) { invoke<Void>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); } // 0x7B1776B3B53F8D74 0xBE699BDE
	static void _SET_WARNING_MESSAGE_2(char* entryHeader, char* entryLine1, int instructionalKey, char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL background) { invoke<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); } // 0xDC38CC1E35B6A5D7 0x2DB9EAB5
	static void _SET_WARNING_MESSAGE_3(char* entryHeader, char* entryLine1, Any instructionalKey, char* entryLine2, BOOL p4, Any p5, Any p6, Any* p7, Any* p8, BOOL p9) { invoke<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); } // 0x701919482C74B5AB 0x749929D3
	static BOOL _0x0C5A80A9E096D529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x0C5A80A9E096D529, p0, p1, p2, p3, p4, p5); } // 0x0C5A80A9E096D529
	static BOOL _0xC4B853EF0CA21D4E(Any p0) { return invoke<BOOL>(0xC4B853EF0CA21D4E, p0); } // 0xDAF87174BE7454FF
	static void _0x0CCDD9B47E451C9A() { invoke<Void>(0x0CCDD9B47E451C9A); } // 0x6EF54AB721DC6242
	static BOOL _0xA42A6C736BEA9778() { return invoke<BOOL>(0xA42A6C736BEA9778); } // 0xE18B138FABC53103 0x94C834AD
	static void _0x0169DFEBBDCF2379() { invoke<Void>(0x0169DFEBBDCF2379); } // 0x7792424AA0EAC32E 0x2F9A309C
	static void _0xF6A1CA04AE4EEF81(BOOL p0) { invoke<Void>(0xF6A1CA04AE4EEF81, p0); } // 0x5354C5BA2EA868A4 0xE4FD20D8
	static void _0x0136BCC3CAF5E752(Any p0) { invoke<Void>(0x0136BCC3CAF5E752, p0); } // 0x1EAE6DD17B7A5EFA 0x13E7A5A9
	static Any _0x9D88A4B120747020(float p0, float p1, float p2) { return invoke<Any>(0x9D88A4B120747020, p0, p1, p2); } // 0x551DF99658DB6EE8 0x786CA0A2
	static void _0x6ED721A4D6520391() { invoke<Void>(0x6ED721A4D6520391); } // 0x2708FC083123F9FF 0xCBEC9369
	static Any _0x97EFD0CFE3939CC0() { return invoke<Any>(0x97EFD0CFE3939CC0); } // 0x1121BFA1A1A522A8 0x3F4AFB13
	static void _0x02569A61ED6CCB65(BOOL p0) { invoke<Void>(0x02569A61ED6CCB65, p0); } // 0x82CEDC33687E1F50 0x2F28F0A6
	static void _0xB25A6A7EC24D7166() { invoke<Void>(0xB25A6A7EC24D7166); } // 0x211C4EF450086857 0x801D0D86
	static void _0x10345A5366E2EEF8() { invoke<Void>(0x10345A5366E2EEF8); } // 0xBF4F34A85CA2970C 0x317775DF
	static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL p1, int p2) { invoke<Void>(0x33341E310F294E6F, menuhash, p1, p2); } // 0xEF01D36B9C9D0C7B 0x01D83872
	static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xE614E75CBCDDDBFF, menuHash, p1); } // 0x10706DC6AD2D49C0 0xB07DAF98
	static Hash _0x8B504DAA0155146D() { return invoke<Hash>(0x8B504DAA0155146D); } // 0x2309595AD6145265 0x33D6868F
	static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0x0590715BCC9A762E, toggle); } // 0xDF47FC56C71569CF 0x1DCD878E
	static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xDB869D9095A6FE45); } // 0x6D3465A73092F0E6 0xD86A029E
	static void _0x1C22A02A21EFDEED() { invoke<Void>(0x1C22A02A21EFDEED); } // 0xBA751764F0821256 0x7F349900
	static void _0xDF6FB5DB025278B8() { invoke<Void>(0xDF6FB5DB025278B8); } // 0xCC3FDDED67BCFC63 0x630CD8EE
	static void SET_FRONTEND_ACTIVE(BOOL p0) { invoke<Void>(0x63B92C25EF55B20C, p0); } // 0x745711A75AB09277 0x81E1AD32
	static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xA57007F9A665F322); } // 0xB0034A223497FFCB 0xD3600591
	static Any _0xE0057363E6A6AE50() { return invoke<Any>(0xE0057363E6A6AE50); } // 0x2F057596F2BD0061 0xC85C4487
	static int GET_PAUSE_MENU_STATE() { return invoke<int>(0x9449AC6115443388); } // 0x272ACD84970869C5 0x92F50134
	static Vector3 _0x17BAB0B3593931AF() { return invoke<Vector3>(0x17BAB0B3593931AF); } // 0x5BFF36D6ED83E0AE
	static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xF4F5A115CF9D89EA); } // 0x1C491717107431C7 0x3C4CF4D9
	static void _0x6D226FF35C1E3724(Any p0) { invoke<Void>(0x6D226FF35C1E3724, p0); } // 0x2162C446DFDF38FD 0x2DFD35C7
	static void _0x4BDE2D8CC4021895(Any p0) { invoke<Void>(0x4BDE2D8CC4021895, p0); } // 0x77F16B447824DA6C 0x0A89336C
	static void _0x3505186F2046D03E() { invoke<Void>(0x3505186F2046D03E); } // 0xCDCA26E80FAECB8F 0xC84BE309
	static void _0x1BEA3B5BE879314A(Hash hash) { invoke<Void>(0x1BEA3B5BE879314A, hash); } // 0xDD564BDD0472C936 0x9FE8FD5E
	static void OBJECT_DECAL_TOGGLE(Hash hash) { invoke<Void>(0xD2989C7DA0B4455D, hash); } // 0x444D8CF241EC25C5 0x0029046E
	static BOOL _0xDE779F13A61348BE(Any p0) { return invoke<BOOL>(0xDE779F13A61348BE, p0); } // 0x84698AB38D0C6636 0xC51BC42F
	static Any _0x578173CE13D15F98() { return invoke<Any>(0x578173CE13D15F98); } // 0x2A25ADC48F87841F 0x016D7AF9
	static Any _0x8D528B41395FB41A() { return invoke<Any>(0x8D528B41395FB41A); } // 0xDE03620F8703A9DF
	static Any _0x10218DB20BD17346() { return invoke<Any>(0x10218DB20BD17346); } // 0x359AF31A4B52F5ED
	static Any _0x812A1A797B32A257() { return invoke<Any>(0x812A1A797B32A257); } // 0x13C4B962653A5280
	static BOOL _0x99BA7C1F278060FD(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x99BA7C1F278060FD, p0, p1, p2); } // 0xC8E1071177A23BE5
	static void ENABLE_DEATHBLOOD_SEETHROUGH(BOOL p0) { invoke<Void>(0xA229BF1F03E859B2, p0); } // 0x4895BDEA16E7C080 0x15B24768
	static void _0xADD2041BB02C0477(BOOL p0, Any p1, Any p2) { invoke<Void>(0xADD2041BB02C0477, p0, p1, p2); } // 0xC78E239AC5B2DDB9 0x6C67131A
	static void _0xEC3CD69535A6C1A6(BOOL p0) { invoke<Void>(0xEC3CD69535A6C1A6, p0); } // 0xF06EBB91A81E09E3 0x11D09737
	static Any _0xF458EEF8C78C7D90() { return invoke<Any>(0xF458EEF8C78C7D90); } // 0x3BAB9A4E4F2FF5C7 0xD3BF3ABD
	static void _0x746790FE47047355() { invoke<Void>(0x746790FE47047355); } // 0xEC9264727EEC0F28 0xC06B763D
	static void _0x289D700182D9F535() { invoke<Void>(0x289D700182D9F535); } // 0x14621BB1DF14E2B2 0xB9392CE7
	static Any _0x7D527DAEDC8D3BE6() { return invoke<Any>(0x7D527DAEDC8D3BE6); } // 0x66E7CB63C97B7D20 0x92DAFA78
	static Any _0x5632AB8FA7F7A91E() { return invoke<Any>(0x5632AB8FA7F7A91E); } // 0x593FEAE1F73392D4 0x22CA9F2A
	static Any _0x9839F7C763A2DBD9() { return invoke<Any>(0x9839F7C763A2DBD9); } // 0x4E3CD0EF8A489541 0xDA7951A2
	static Any _0xD5339C6E8D97C74D() { return invoke<Any>(0xD5339C6E8D97C74D); } // 0xF284AC67940C6812 0x7D95AFFF
	static Any _0xE6AA4C40997C0F01() { return invoke<Any>(0xE6AA4C40997C0F01); } // 0x2E22FEFA0100275E 0x96863460
	static void _0x512216CEC1E92538(Any p0) { invoke<Void>(0x512216CEC1E92538, p0); } // 0x0CF54F20DE43879C
	static void _0xF189911A0F2A1337(Any* p0, Any* p1) { invoke<Void>(0xF189911A0F2A1337, p0, p1); } // 0x36C1451A88A09630 0x8543AAC8
	static void _0x2A9654D331EC2E10(Any* p0, Any* p1, Any* p2) { invoke<Void>(0x2A9654D331EC2E10, p0, p1, p2); } // 0x7E17BE53E1AAABAF 0x6025AA2F
	static BOOL _0xE12DCC566E3F6F99(int* p0, int* p1, int* p2) { return invoke<BOOL>(0xE12DCC566E3F6F99, p0, p1, p2); } // 0xA238192F33110615 0x46794EB2
	static BOOL SET_USERIDS_UIHIDDEN(Any p0, Any* p1) { return invoke<BOOL>(0xC1B2557A6A0FE5DB, p0, p1); } // 0xEF4CED81CEBEDC6D 0x4370999E
	static BOOL _0x11FD88899B4F3535(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x11FD88899B4F3535, p0, p1, p2); } // 0xCA6B2F7CE32AB653
	static BOOL _0xD1D4EADE0B7832EE(Any p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xD1D4EADE0B7832EE, p0, p1, p2, p3); } // 0x90A6526CF0381030 0xD6CC4766
	static BOOL _0x696586F2746E77E1(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x696586F2746E77E1, p0, p1, p2, p3, p4); } // 0x24A49BEAF468DC90
	static BOOL _0x02D7C1B85DC50733(Any p0, Any* p1) { return invoke<BOOL>(0x02D7C1B85DC50733, p0, p1); } // 0x5FBD7095FE7AE57F 0x51972B04
	static BOOL _0xDD99F22B80D12213(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xDD99F22B80D12213, p0, p1, p2); } // 0x8F08017F9D7C47BD
	static BOOL _0x19B648CF1FE67932(Hash p0, Any* p1) { return invoke<BOOL>(0x19B648CF1FE67932, p0, p1); } // 0x052991E59076E4E4 0xD43BB56D
	static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0x73D0EC78F31C6F63); } // 0x5E62BE5DC58E9E06 0x28058ACF
	static void GIVE_PED_TO_PAUSE_MENU(Any p0, Any p1) { invoke<Void>(0xE394BD14B103A530, p0, p1); } // 0xAC0BFBDC3BE00E14 0x2AD2C9CE
	static void _0x396F350972C57A2F(BOOL p0) { invoke<Void>(0x396F350972C57A2F, p0); } // 0x3CA6050692BC61B0 0x127310EB
	static void _0x0F751814104E2782(BOOL p0) { invoke<Void>(0x0F751814104E2782, p0); } // 0xECF128344E9FF9F1 0x8F45D327
	static void _SHOW_SOCIAL_CLUB_LEGAL_SCREEN() { invoke<Void>(0x3A2A3274B8F384BC); } // 0x805D7CBB36FD6C4C 0x19FCBBB2
	static Any _0x771287BA29FFC9DF() { return invoke<Any>(0x771287BA29FFC9DF); } // 0xF13FE2A80C05C561 0x850690FF
	static Any _0x3E135A95E36F823C() { return invoke<Any>(0x3E135A95E36F823C); } // 0x6F72CD94F7B5B68C 0x9D4934F4
	static void _0xA42011C29D19AB10() { invoke<Void>(0xA42011C29D19AB10); } // 0x75D3691713C3B05A 0x57218529
	static void _0x6014AFCEA62E49D2() { invoke<Void>(0x6014AFCEA62E49D2); } // 0xD2B32BE3FC1626C6 0x5F86AA39
	static void _0x300B841518E5AF94(char* p0) { invoke<Void>(0x300B841518E5AF94, p0); } // 0x9E778248D6685FE0 0x7AD67C95
	static Any _0x2B581EB08F449A00() { return invoke<Any>(0x2B581EB08F449A00); } // 0xC406BE343FC4B9AF 0xD4DA14EF
	static void _0x1DA6DD9D3E166749(BOOL p0) { invoke<Void>(0x1DA6DD9D3E166749, p0); } // 0x1185A8087587322C
	static void _0x95559E38029A8A39() { invoke<Void>(0x95559E38029A8A39); } // 0x8817605C2BA76200
	static BOOL _IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0xB22D212FD4E35C80); } // 0xB118AF58B5F332A1
	static void _ABORT_TEXT_CHAT() { invoke<Void>(0x226EECCCB47BB14A); } // 0x1AC8F4AD40E22127
	static void _SET_TEXT_CHAT_UNK(BOOL p0) { invoke<Void>(0x584310811CF71D68, p0); } // 0x1DB21A44B09E8BA3
	static void _0x97AF661BEE1C29B3(BOOL p0) { invoke<Void>(0x97AF661BEE1C29B3, p0); } // 0xCEF214315D276FD1 0xFF06772A
	static void _0x566A0CB935F3EEA8(Any p0, BOOL p1) { invoke<Void>(0x566A0CB935F3EEA8, p0, p1); } // 0xD30C50DF888D58B5 0x96C4C4DD
	static BOOL DOES_PED_HAVE_AI_BLIP(Any p0) { return invoke<BOOL>(0x0B25DF5D53C8A538, p0); } // 0x15B8ECF844EE67ED 0x3BE1257F
	static void _0x2EFEB3EA1D6A46DE(Any p0, Any p1) { invoke<Void>(0x2EFEB3EA1D6A46DE, p0, p1); } // 0xE52B8E7F85D39A08 0xD8E31B1A
	static void HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(Any p0, BOOL p1) { invoke<Void>(0xDCDE8A1D95BAAF08, p0, p1); } // 0x3EED80DFF7325CAA 0x872C2CFB
	static void _0x83F4881BA5450FEF(Any p0, BOOL p1) { invoke<Void>(0x83F4881BA5450FEF, p0, p1); } // 0x0C4BBF625CA98C4E 0xFFDF46F0
	static void _0xBE0219028260E31F(Any p0, float p1) { invoke<Void>(0xBE0219028260E31F, p0, p1); } // 0x97C65887D4B37FA9 0xF9DC2AF7
	static Any _0x7DAA0D3B6BB8AD16(Any p0) { return invoke<Any>(0x7DAA0D3B6BB8AD16, p0); } // 0x7CD934010E115C2C 0x06349065
	static Any _0x2BC40A9A0319DB0F(Any p0) { return invoke<Any>(0x2BC40A9A0319DB0F, p0); } // 0x56176892826A4FE8 0xCA52CF43
	static Any _0xE2F418C1FB2D863E() { return invoke<Any>(0xE2F418C1FB2D863E); } // 0xA277800A9EAE340E
	static void _0x64A67790EE14A8A8() { invoke<Void>(0x64A67790EE14A8A8); } // 0x2632482FD6B9AB87
	static void _0xFA1736991E9FA48D(BOOL p0) { invoke<Void>(0xFA1736991E9FA48D, p0); } // 0x808519373FD336A3
	static void _0xFE954DE4BB25F572(BOOL p0) { invoke<Void>(0xFE954DE4BB25F572, p0); } // 0x04655F9D075D0AE5
}

namespace GRAPHICS
{
	static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xCB2684283EA21569, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37
	static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x265C038BD8401830, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x7FDFADE676AA3CB0 0xABF783AB
	static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0x324DE41C811EF6E2, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632
	static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int r, int g, int b, int alpha) { invoke<Void>(0x8FD11D9817727405, x, y, z, radius, r, g, b, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF
	static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x265C038BD8401830, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x083A2CA4F2E573BD 0x8524A848
	static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int r, int g, int b, int alpha) { invoke<Void>(0xFCA3C17017EC4B30, x, y, z, size, r, g, b, alpha); } // 0x73B1189623049839 0xB6DF3709
	static void DRAW_DEBUG_TEXT(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0x8429914A269A67EB, text, x, y, z, r, g, b, alpha); } // 0x3903E216620488E8 0x269B006F
	static void DRAW_DEBUG_TEXT_2D(char* text, float x, float y, float z, int r, int g, int b, int alpha) { invoke<Void>(0xFEA6925E5471805C, text, x, y, z, r, g, b, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B
	static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x6D2A3BBD27714E59, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x6B7256074AE34680 0xB3426BCC
	static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int r, int g, int b, int alpha) { invoke<Void>(0x71C1FD3330E22697, x1, y1, z1, x2, y2, z2, x3, y3, z3, r, g, b, alpha); } // 0xAC26716048436851 0xABD19253
	static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xFC9280B488CCBAED, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0xD3A9971CADAC7252 0xCD4D9DD5
	static void _0x0A1EA048AB5A73FA(BOOL p0) { invoke<Void>(0x0A1EA048AB5A73FA, p0); } // 0x23BA6B0C2AD7B0D3 0xC44C2F44
	static Any _0xB82AB2EFF7612A40() { return invoke<Any>(0xB82AB2EFF7612A40); } // 0x1DD2139A9A20DCE8 0xBA9AD458
	static Any _0x86E6812631473AA1() { return invoke<Any>(0x86E6812631473AA1); } // 0x90A78ECAA4E78453 0xADBBA287
	static void _0x01E78A715546ABFE() { invoke<Void>(0x01E78A715546ABFE); } // 0x0A46AF8A78DC5E0A 0x9E553002
	static BOOL _0xE15C5912E0A81682(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xE15C5912E0A81682, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488
	static int _0x52FB9593108899E0(Any* p0) { return invoke<int>(0x52FB9593108899E0, p0); } // 0x1670F8D05056F257 0x226B08EA
	static Any _0xFFD22EA1577626EF() { return invoke<Any>(0xFFD22EA1577626EF); } // 0x7FA5D82B8F58EC06 0x1F3CADB0
	static Any _0x36542E4DFB7B0D45() { return invoke<Any>(0x36542E4DFB7B0D45); } // 0x5B0316762AFD4A64 0xA9DC8558
	static void _0x4E50AA2FF9D4BF7D() { invoke<Void>(0x4E50AA2FF9D4BF7D); } // 0x346EF3ECAAAB149E 0x88EAF398
	static Any _0x3A81CEB1994AA4F1() { return invoke<Any>(0x3A81CEB1994AA4F1); } // 0xA67C35C56EB1BD9D 0x47B0C137
	static Any _0x7D7E4D568B53667F() { return invoke<Any>(0x7D7E4D568B53667F); } // 0x0D6CA79EEEBD8CA3 0x65376C9B
	static void _0xAD9FDB4167C5BC81() { invoke<Void>(0xAD9FDB4167C5BC81); } // 0xD801CC02177FA3F1 0x9CBA682A
	static void _0x9D81F526B905F21F(BOOL p0) { invoke<Void>(0x9D81F526B905F21F, p0); } // 0x1BBC135A4D25EDDE
	static Any _0x02DA3007E217F263(int p0) { return invoke<Any>(0x02DA3007E217F263, p0); } // 0x3DEC726C25A11BAC 0x3B15D33C
	static Any _0x41ADBC3C58FFE44B() { return invoke<Any>(0x41ADBC3C58FFE44B); } // 0x0C0C4E81E1AC60A0 0xEC5D0317
	static BOOL _0x7FBABEBB34BDDE51(Any p0) { return invoke<BOOL>(0x7FBABEBB34BDDE51, p0); } // 0x759650634F07B6B4 0x25D569EB
	static Any _0x52FD31F69610E287(Any p0) { return invoke<Any>(0x52FD31F69610E287, p0); } // 0xCB82A0BF0E3E3265 0xCFCDC518
	static void _0x7BFD8C97DFF2DA65() { invoke<Void>(0x7BFD8C97DFF2DA65); } // 0x6A12D88881435DCA 0x108F36CC
	static void _0xD3E86F7241D328BC(BOOL p0, BOOL p1) { invoke<Void>(0xD3E86F7241D328BC, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F
	static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xEE9B8CDC912A5B26); } // 0x34D23450F028B0BF 0x727AA63F
	static Any _0x41643BF9B337021F() { return invoke<Any>(0x41643BF9B337021F); } // 0xDC54A7AF8B3A14EF 0x239272BD
	static Any _0x18F95F402A879A48() { return invoke<Any>(0x18F95F402A879A48); } // 0x473151EBC762C6DA 0x21DBF0C9
	static Any _0x456AF1F902C525FA(Any p0) { return invoke<Any>(0x456AF1F902C525FA, p0); } // 0x2A893980E96B659A 0x199FABF0
	static Any _0x3FF7A23AAE986803(Any p0) { return invoke<Any>(0x3FF7A23AAE986803, p0); } // 0xF5BED327CEA362B1 0x596B900D
	static void _0x0B49CCF0094CD02C() { invoke<Void>(0x0B49CCF0094CD02C); } // 0x4AF92ACD3141D96C 0xC9EF81ED
	static Any _0x53C95386E4961722(Any p0) { return invoke<Any>(0x53C95386E4961722, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C
	static Any _0xD1005463F097BA34(Any p0) { return invoke<Any>(0xD1005463F097BA34, p0); } // 0xEC72C258667BE5EA 0x9C106AD9
	static Any _0xB58B3DD3E2010EF2(Any p0) { return invoke<Any>(0xB58B3DD3E2010EF2, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F
	static void _DRAW_LIGHT_WITH_RANGE_WITH_SHADOW(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0x56E27633C273878D, x, y, z, r, g, b, range, intensity, shadow); } // 0xF49E9A9716A04595
	static void DRAW_LIGHT_WITH_RANGE(float x, float y, float z, int r, int g, int b, float range, float intensity) { invoke<Void>(0x91C4507E9BBAD429, x, y, z, r, g, b, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A
	static void DRAW_SPOT_LIGHT(float x, float y, float z, float dirVectorX, float dirVectorY, float dirVectorZ, int r, int g, int b, float distance, float brightness, float roundness, float radius, float fadeout) { invoke<Void>(0x45B881DDF7B43464, x, y, z, dirVectorX, dirVectorY, dirVectorZ, r, g, b, distance, brightness, roundness, radius, fadeout); } // 0xD0F64B265C8C8B33 0xBDBC410C
	static void _DRAW_SPOT_LIGHT_WITH_SHADOW(float x, float y, float z, float dirVectorX, float dirVectorY, float dirVectorZ, int r, int g, int b, float distance, float brightness, float roundness, float radius, float fadeout, float shadow) { invoke<Void>(0x1E63AA7026757879, x, y, z, dirVectorX, dirVectorY, dirVectorZ, r, g, b, distance, brightness, roundness, radius, fadeout, shadow); } // 0x5BCA583A583194DB 0x32BF9598
	static void _0xF9173166DD538708(float p0) { invoke<Void>(0xF9173166DD538708, p0); } // 0xC9B18B4619F48F7B 0x93628786
	static void _0x59396F188A9CFB8B(Object object) { invoke<Void>(0x59396F188A9CFB8B, object); } // 0xDEADC0DEDEADC0DE
	static void DRAW_MARKER(int type, float x, float y, float z, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int colorR, int colorG, int colorB, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, char* textureDict, char* textureName, BOOL drawOnEnts) { invoke<Void>(0xE77D2EF9F267C4DE, type, x, y, z, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, colorR, colorG, colorB, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02
	static Any CREATE_CHECKPOINT(int Type, float x, float y, float z, float x2, float y2, float z2, float radius, int R, int G, int B, int Alpha, int p12) { return invoke<Any>(0x0C573EE895537E8D, Type, x, y, z, x2, y2, z2, radius, R, G, B, Alpha, p12); } // 0x0134F0835AB6BFCB 0xF541B690
	static void _0x4F0D6C60FA00227D(Any p0, float p1) { invoke<Void>(0x4F0D6C60FA00227D, p0, p1); } // 0x4B5B4DA5D79F1943 0x80151CCF
	static void SET_CHECKPOINT_CYLINDER_HEIGHT(Any checkpoint, float nearHeight, float farHeight, float scaleRadius) { invoke<Void>(0x3AD426D659114578, checkpoint, nearHeight, farHeight, scaleRadius); } // 0x2707AAE9D9297D89 0xFF0F9B22
	static void SET_CHECKPOINT_RGBA(Any checkpoint, int colorR, int colorG, int colorB, int alpha) { invoke<Void>(0xAD072A667B30FD0D, checkpoint, colorR, colorG, colorB, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3
	static void _SET_CHECKPOINT_ICON_RGBA(Any checkpoint, int colorR, int colorG, int colorB, int colorA) { invoke<Void>(0xD4B4EF2B8E08F994, checkpoint, colorR, colorG, colorB, colorA); } // 0xB9EA40907C680580 0xA5456DBB
	static void _0x560AB194822A27C2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x560AB194822A27C2, p0, p1, p2, p3, p4, p5, p6); } // 0xF51D36185993515D 0x20EABD0F
	static void _0x4EBF20335DDE7C88(Any p0) { invoke<Void>(0x4EBF20335DDE7C88, p0); } // 0x615D3925E87A3B26 0x1E3A3126
	static void DELETE_CHECKPOINT(Any checkpoint) { invoke<Void>(0xB3BA604BAAEF8453, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA
	static void _0x5C2B22CB76317829(BOOL p0) { invoke<Void>(0x5C2B22CB76317829, p0); } // 0x22A249A53034450A 0x932FDB81
	static void _0xD8C852C225D6253C(BOOL p0) { invoke<Void>(0xD8C852C225D6253C, p0); } // 0xDC459CFA0CCE245B 0x7E946E87
	static void REQUEST_STREAMED_TEXTURE_DICT(char* textureDict, BOOL toggle) { invoke<Void>(0xDF7D4AE1A984CEF7, textureDict, toggle); } // 0xDFA2EF8E04127DD5 0x4C9B035F
	static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(char* textureDict) { return invoke<BOOL>(0x0B4924B3F0DADDD1, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF
	static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(char* textureDict) { invoke<Void>(0xA857A54226CCD303, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38
	static void DRAW_RECT(float posX, float posY, float width, float height, int R, int G, int B, int A) { invoke<Void>(0xC3BB3CA17D24E700, posX, posY, width, height, R, G, B, A); } // 0x3A618A217E5154F0 0xDD2BFC77
	static void _0x44967FAF1FE899C7(BOOL p0) { invoke<Void>(0x44967FAF1FE899C7, p0); } // 0xC6372ECD45D73BCD 0xF8FBCC25
	static void _0x55C926E686119F55(int layer) { invoke<Void>(0x55C926E686119F55, layer); } // 0x61BB1D9B3A95D802 0xADF81D24
	static void _SET_SCREEN_DRAW_POSITION(int x, int y) { invoke<Void>(0x56B79B8AD45389A5, x, y); } // 0xB8A850F20A067EB6 0x228A2598
	static void _0x26FD470559B5674D() { invoke<Void>(0x26FD470559B5674D); } // 0xE3A3DB414A373DAB 0x3FE33BD6
	static void _0xC49724172A0D506C(float p0, float p1, float p2, float p3) { invoke<Void>(0xC49724172A0D506C, p0, p1, p2, p3); } // 0xF5A2C681787E579D 0x76C641E4
	static void _0x976D93A25CEA6E3A(float p0, float p1, Any* p2, Any* p3) { invoke<Void>(0x976D93A25CEA6E3A, p0, p1, p2, p3); } // 0x6DD8F5AA635EB4B2
	static Any GET_SAFE_ZONE_SIZE() { return invoke<Any>(0x9B0FF6A6840A99C8); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F
	static void DRAW_SPRITE(char* textureDict, char* textureName, float screenX, float screenY, float scaleX, float scaleY, float heading, int colorR, int colorG, int colorB, int colorA) { invoke<Void>(0xFE6A5236E50BDF64, textureDict, textureName, screenX, screenY, scaleX, scaleY, heading, colorR, colorG, colorB, colorA); } // 0xE7FFAE5EBF23D890 0x1FEC16B0
	static Any ADD_ENTITY_ICON(Entity entity, char* icon) { return invoke<Any>(0x8565FAF038D9A385, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21
	static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0x997FD17227307250, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52
	static void SET_ENTITY_ICON_COLOR(Entity entity, int r, int g, int b, int a) { invoke<Void>(0x443ACFCBBA2939E2, entity, r, g, b, a); } // 0x1D5F595CCAE2E238 0x6EE1E946
	static void SET_DRAW_ORIGIN(float x, float y, float z, Any p3) { invoke<Void>(0x9915233AC9B5F494, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5
	static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xA9C87DEF2F973DA6); } // 0xFF0B610F6BE0D7AF 0xDD76B263
	static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0x90B7E071964C6DFF, entity); } // 0x845BAD77CC770633 0x784944DB
	static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0x4313CA46C2943031, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35
	static Any LOAD_MOVIE_MESH_SET(Any* p0) { return invoke<Any>(0xCB782AA06DF74569, p0); } // 0xB66064452270E8F1 0x9627905C
	static void RELEASE_MOVIE_MESH_SET(Any p0) { invoke<Void>(0xE3968C191B4B1537, p0); } // 0xEB119AA014E89183 0x4FA5501D
	static Any _0xFFA02FB4C52407B4(Any p0) { return invoke<Any>(0xFFA02FB4C52407B4, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38
	static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xC2E26B11E2BC4A88, x, y); } // 0x888D57E407E63624 0x29F3572F
	static void _GET_SCREEN_ACTIVE_RESOLUTION(int* x, int* y) { invoke<Void>(0x177E5285E888D643, x, y); } // 0x873C9F3104101DD3
	static float _GET_SCREEN_ASPECT_RATIO(BOOL b) { return invoke<float>(0x56995B080AF5D7D0, b); } // 0xF1307EF624A80D87
	static Any _0xFC103D72BA5D4FE9() { return invoke<Any>(0xFC103D72BA5D4FE9); } // 0xB2EBE8CBC58B90E9
	static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0x51807A4D76E3D4F4); } // 0x30CF4BDA4FCB1905 0xEC717AEF
	static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0x06AFDF2519B9E89B); } // 0x84ED31191CC5D2C9 0x1C340359
	static void _0x7F206586BFB6D025() { invoke<Void>(0x7F206586BFB6D025); } // 0xEFABC7722293DA7C
	static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0x8D48501ED99B2860, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F
	static Any _0x3627096EE4D818D0() { return invoke<Any>(0x3627096EE4D818D0); } // 0x35FB78DC42B7BD21
	static BOOL _IS_NIGHTVISION_INACTIVE() { return invoke<BOOL>(0x7E76F6AFF34196EB); } // 0x2202A3F42C8E5F79 0x62619061
	static void _0xA1A5DC37F896A886(BOOL p0) { invoke<Void>(0xA1A5DC37F896A886, p0); } // 0xEF398BEEE4EF45F9
	static void SET_NOISEOVERIDE(BOOL p0) { invoke<Void>(0x36FB5442A92A88CC, p0); } // 0xE787BF1C5CF823C9 0xD576F5DD
	static void SET_NOISINESSOVERIDE(float p0) { invoke<Void>(0x19F5F758404D4BB7, p0); } // 0xCB6A7C3BB17A0C67 0x046B62D9
	static BOOL _WORLD3D_TO_SCREEN2D(float x3d, float y3d, float z3d, float* x2d, float* y2d) { return invoke<BOOL>(0xEF9979CD57E23CCC, x3d, y3d, z3d, x2d, y2d); } // 0x34E82F05DF2974F5 0x1F950E4B
	static Vector3 GET_TEXTURE_RESOLUTION(char* textureDict, char* textureName) { return invoke<Vector3>(0x8504C7FBA97E6D14, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D
	static void _0xD1F30259F89DCA35(float p0) { invoke<Void>(0xD1F30259F89DCA35, p0); } // 0xE2892E7E55D7073A 0x455F1084
	static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0x6E029A5DF2CE495E, p0, p1, fadeIn, duration, fadeOut); } // 0x0AB84296FED9CFC6 0x7E55A1EE
	static void _0xBFDF3640E59C45AE() { invoke<Void>(0xBFDF3640E59C45AE); } // 0x3669F1B198DCAA4F 0x0DCC0B8B
	static void _SET_BLACKOUT(BOOL enable) { invoke<Void>(0xACC8F17F460DF72F, enable); } // 0x1268615ACE24D504 0xAA2A0EAF
	static void _0xDEBE617D28CB3C05() { invoke<Void>(0xDEBE617D28CB3C05); } // 0xC35A6D07C93802B2
	static Object CREATE_TRACKED_POINT() { return invoke<Object>(0xC0F86CCE48AA279F); } // 0xE2C9439ED45DEA60 0x3129C31A
	static void SET_TRACKED_POINT_INFO(Object point, float x, float y, float z, float radius) { invoke<Void>(0x25CCBA0E43FDFF14, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4
	static BOOL IS_TRACKED_POINT_VISIBLE(Object point) { return invoke<BOOL>(0x6297E96413D39416, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64
	static void DESTROY_TRACKED_POINT(Object point) { invoke<Void>(0x3CE10AE3E1F22B78, point); } // 0xB25DC90BAD56CA42 0x14AC675F
	static Any _0x5B31F4EB182D5FC5(Any p0, Any p1, Any p2, Any p3) { return invoke<Any>(0x5B31F4EB182D5FC5, p0, p1, p2, p3); } // 0xBE197EAA669238F4
	static void _0x0226F6C05B0D4174(Any p0) { invoke<Void>(0x0226F6C05B0D4174, p0); } // 0x61F95E5BB3E0A8C6
	static void _0x6950684684857DDE(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x6950684684857DDE, p0, p1, p2, p3, p4); } // 0xAE51BC858F32BA66
	static void _0x57CA9144ADB104DC(Any p0) { invoke<Void>(0x57CA9144ADB104DC, p0); } // 0x649C97D52332341A
	static Any _0x6BF9FB991378D4D9(Any p0) { return invoke<Any>(0x6BF9FB991378D4D9, p0); } // 0x2C42340F916C5930
	static void _0xEDD7F6B14903569E() { invoke<Void>(0xEDD7F6B14903569E); } // 0x14FC5833464340A8
	static void _0x29E09B522CB22FE6() { invoke<Void>(0x29E09B522CB22FE6); } // 0x0218BA067D249DEA
	static void _0x47B72F9A6A52BB28() { invoke<Void>(0x47B72F9A6A52BB28); } // 0x1612C45F9E3E0D44
	static void _0x961DA3F5DE50AC39() { invoke<Void>(0x961DA3F5DE50AC39); } // 0x5DEBD9C4DC995692
	static void _0x2B50EFFA40C7FDF9(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x2B50EFFA40C7FDF9, p0, p1, p2, p3, p4, p5, p6); } // 0x6D955F6A9E0295B1
	static void _0xFCE3B84BDCA0B834() { invoke<Void>(0xFCE3B84BDCA0B834); } // 0x302C91AB2D477F7E
	static void _0xDD8068D05776246D() { invoke<Void>(0xDD8068D05776246D); } // 0x03FC694AE06C5A20 0x48F16186
	static void _0x82C9AA78A284855F(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0x82C9AA78A284855F, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD2936CAB8B58FCBD
	static void _0xD9291BE3ABABED46(float p0) { invoke<Void>(0xD9291BE3ABABED46, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0
	static void _0xE9C15E4A439BCF90(float p0) { invoke<Void>(0xE9C15E4A439BCF90, p0); } // 0x5E9DAF5A20F15908 0xD2157428
	static void _0xCDB0270357817EF4(float p0) { invoke<Void>(0xCDB0270357817EF4, p0); } // 0x36F6626459D91457 0xC07C64C9
	static void _SET_FAR_SHADOWS_SUPPRESSED(BOOL toggle) { invoke<Void>(0xC59D7D1E48AA8C6B, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F
	static void _0x2CD3B87EFE345C8F(BOOL p0) { invoke<Void>(0x2CD3B87EFE345C8F, p0); } // 0x25FC3E33A31AD0C9
	static void _0x52E1EB3AF9FF9300(char* p0) { invoke<Void>(0x52E1EB3AF9FF9300, p0); } // 0xB11D94BC55F41932 0xDE10BA1F
	static void _0xCB658BB5BE1371E4() { invoke<Void>(0xCB658BB5BE1371E4); } // 0x27CB772218215325
	static void _0x545A235F7296B9BF(BOOL p0) { invoke<Void>(0x545A235F7296B9BF, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3
	static void _0x90FCEE519CAB42A3(BOOL p0) { invoke<Void>(0x90FCEE519CAB42A3, p0); } // 0xD39D13C9FEBF0511 0x4A124267
	static void _0xA2FF5A3B65D557C9(float p0) { invoke<Void>(0xA2FF5A3B65D557C9, p0); } // 0x02AC28F3A01FA04A 0xB19B2764
	static void _0x077D2E5276BE9B88(BOOL p0) { invoke<Void>(0x077D2E5276BE9B88, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4
	static void _0xF638C79BA0E9F87D(BOOL p0) { invoke<Void>(0xF638C79BA0E9F87D, p0); } // 0xA51C4B86B71652AE 0x5D3BFFC9
	static void _0xD78E5B2C53AD9DC2(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xD78E5B2C53AD9DC2, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x312342E1A4874F3F 0xD9653728
	static void _0x3BAA7CD677FB2455(float p0, float p1, float p2) { invoke<Void>(0x3BAA7CD677FB2455, p0, p1, p2); } // 0x2485D34E50A22E84 0x72BA8A14
	static void _0x82E959BA4E3FFF25(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x82E959BA4E3FFF25, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12995F2E53FFA601 0x804F444C
	static void _0xCF21D54C2C28B63F(Any p0, Any p1) { invoke<Void>(0xCF21D54C2C28B63F, p0, p1); } // 0xDBAA5EC848BA2D46 0xBB1A1294
	static void _0x4F1A1C949952A28F(BOOL p0) { invoke<Void>(0x4F1A1C949952A28F, p0); } // 0xC0416B061F2B7E5E 0x1A1A72EF
	static void _0x5F07F205C5187BB9(int type, float x, float y, float z, float p4, int r, int g, int b, int a) { invoke<Void>(0x5F07F205C5187BB9, type, x, y, z, p4, r, g, b, a); } // 0xB1BB03742917A5D6 0x3BB12B75
	static void _0x474A5D00F43F310C(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0x474A5D00F43F310C, p0, p1, p2, p3, p4); } // 0x9CFDD90B2B844BF7 0x4EA70FB4
	static void _0x883835613C9056E7(BOOL p0) { invoke<Void>(0x883835613C9056E7, p0); } // 0x06F761EA47C1D3ED 0x0D830DC7
	static Any _0xCA01AC1B68C056F0() { return invoke<Any>(0xCA01AC1B68C056F0); } // 0xA4819F5E23E2FFAD 0xA08B46AD
	static Vector3 _0x36E87A2A1FFCE99A(Any p0) { return invoke<Vector3>(0x36E87A2A1FFCE99A, p0); } // 0xA4664972A9B8F8BA 0xECD470F0
	static void SET_SEETHROUGH(BOOL Toggle) { invoke<Void>(0x08DBBAEFA4E76133, Toggle); } // 0x7E08924259E08CE0 0x74D4995C
	static BOOL _IS_SEETHROUGH_ACTIVE() { return invoke<BOOL>(0x23B54E0FFB547883); } // 0x44B80ABAB9D80BD3 0x1FE547F2
	static void _0x115DB03F056BEC21(Any p0, float p1) { invoke<Void>(0x115DB03F056BEC21, p0, p1); } // 0xD7D0B00177485411 0x654F0287
	static void _0x029BEF02FB5767E6(float p0) { invoke<Void>(0x029BEF02FB5767E6, p0); } // 0xB3C641F3630BF6DA 0xF6B837F0
	static Any _0x6F2A2A8203BACC25() { return invoke<Any>(0x6F2A2A8203BACC25); } // 0xE59343E9E96529E7 0xD906A3A9
	static void _0x4B950D9386B9EC24(BOOL p0) { invoke<Void>(0x4B950D9386B9EC24, p0); } // 0xE63D7C6EECECB66B 0xD34A6CBA
	static void _0x509B921C09F2144A(Any p0) { invoke<Void>(0x509B921C09F2144A, p0); } // 0xE3E2C1B4C59DBC77 0xD8CC7221
	static BOOL _TRANSITION_TO_BLURRED(float transitionTime) { return invoke<BOOL>(0x74E09273F49EAA3D, transitionTime); } // 0xA328A24AAA6B7FDC 0x5604B890
	static BOOL _TRANSITION_FROM_BLURRED(float transitionTime) { return invoke<BOOL>(0x240AD5A653E9B49C, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502
	static void _0xABEC670221B72CBA() { invoke<Void>(0xABEC670221B72CBA); } // 0xDE81239437E8C5A8 0xDB7AECDA
	static float IS_PARTICLE_FX_DELAYED_BLINK() { return invoke<float>(0xC61818E74DF2A911); } // 0x5CCABFFCA31DDE33 0xEA432A94
	static Any _0x9EA48D39E22CC7E5() { return invoke<Any>(0x9EA48D39E22CC7E5); } // 0x7B226C785A52A0A9 0x926B8734
	static void _SET_FROZEN_RENDERING_DISABLED(BOOL enabled) { invoke<Void>(0xA3E48BCED34F6F8B, enabled); } // 0xDFC252D8A3E15AB7 0x30ADE541
	static Any _0x8748F46B213620D4() { return invoke<Any>(0x8748F46B213620D4); } // 0xEB3DAC2C86001E5E
	static void _0x78C85B9B286CE9E9() { invoke<Void>(0x78C85B9B286CE9E9); } // 0xE1C8709406F2C41C 0x0113EAE4
	static void _0x8D20DB196F92ABB7() { invoke<Void>(0x8D20DB196F92ABB7); } // 0x851CD923176EBA7C 0xDCBA251B
	static void _0x482EACE368779DFF(BOOL p0, BOOL p1, float p2, float p3, float p4, float p5) { invoke<Void>(0x482EACE368779DFF, p0, p1, p2, p3, p4, p5); } // 0xBA3D65906822BED5 0x513D444B
	static BOOL _0xFB26403CB08D002E(BOOL p0) { return invoke<BOOL>(0xFB26403CB08D002E, p0); } // 0x7AC24EAB6D74118D 0xB2410EAB
	static Any _0xDB8C488EAEAC89FE() { return invoke<Any>(0xDB8C488EAEAC89FE); } // 0xBCEDB009461DA156 0x5AB94128
	static BOOL _0x0D3C30E7822A0B3E(char* textureDict, BOOL p1) { return invoke<BOOL>(0x0D3C30E7822A0B3E, textureDict, p1); } // 0x27FEB5254759CDE3 0xD63FCB3E
	static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10) { return invoke<BOOL>(0x1C3A5A67FC2034C2, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10); } // 0x25129531F77B9ED3 0xDD79D679
	static BOOL _START_PARTICLE_FX_NON_LOOPED_AT_COORD_2(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10) { return invoke<BOOL>(0xC29162EE3A95742C, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10); } // 0xF56B8137DF10135D 0x633F8C48
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<BOOL>(0xA7ADBF105F1DB218, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0x0E7E72961BA18619 0x53DAEF4E
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<BOOL>(0x59294E6FCA91C2D2, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xA41B6A43642AC2CF 0x161780C1
	static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0x48800639A234092B, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x0D53A3B8DA0809D2 0x9604DAD4
	static BOOL _START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<BOOL>(0xCDE29A87C9B2D85D, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0xC95EB1DB6E92113D
	static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0x18E4EDACA0EF75C1, r, g, b); } // 0x26143A59EF48B262 0x7B689E20
	static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0x91A2DE8C2E13BDDE, alpha); } // 0x77168D722C58B2FC 0x497EAFF2
	static void _0xF8A6A2C52B795F10(BOOL p0) { invoke<Void>(0xF8A6A2C52B795F10, p0); } // 0x8CDE909A0370BB3A
	static Any START_PARTICLE_FX_LOOPED_AT_COORD(char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL p8, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0x3423743090764FB4, effectName, x, y, z, xRot, yRot, zRot, scale, p8, p9, p10, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6
	static Any START_PARTICLE_FX_LOOPED_ON_PED_BONE(char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0xBA29B59AB582F3DF, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xF28DA9F38CD1787C 0xF8FC196F
	static Any START_PARTICLE_FX_LOOPED_ON_ENTITY(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0x8290B5289783C18C, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x1AE42C1660FD6517 0x0D06FF62
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0xD43D9E8772CFABBE, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xC6EB449E33977F0B
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL p9, BOOL p10, BOOL p11) { return invoke<Any>(0xA56F5DDF4E605D22, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, p9, p10, p11); } // 0x6F60E89A7B64EE1D 0x110752B2
	static Any _START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE_2(char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL p10, BOOL p11, BOOL p12) { return invoke<Any>(0xFE39C497B04D86C3, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, p10, p11, p12); } // 0xDDE23F30CC5A0F03
	static void STOP_PARTICLE_FX_LOOPED(Any p0, BOOL p1) { invoke<Void>(0x52F57B57CB8B4432, p0, p1); } // 0x8F75998877616996 0xD245455B
	static void REMOVE_PARTICLE_FX(Any p0, BOOL p1) { invoke<Void>(0x056765A3DA7B4115, p0, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E
	static void REMOVE_PARTICLE_FX_FROM_ENTITY(Any p0) { invoke<Void>(0xA7A44BDBA792B8E6, p0); } // 0xB8FEAEEBCC127425 0xCEDE52E9
	static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0x7F75333E7D3B15DD, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275
	static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(Any ptfxHandle) { return invoke<BOOL>(0xA288661B75BFC01B, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A
	static void SET_PARTICLE_FX_LOOPED_OFFSETS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xE42586E7FC5EAE90, p0, p1, p2, p3, p4, p5, p6); } // 0xF7DDEBEC43483C43 0x641F7790
	static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, char* propertyName, float amount, BOOL p3) { invoke<Void>(0xFF6805F72283C32F, ptfxHandle, propertyName, amount, p3); } // 0x5F0C4B5B1C393BE2 0x1CBC1373
	static void SET_PARTICLE_FX_LOOPED_COLOUR(Any ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0x5385A8B31D708A12, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530
	static void SET_PARTICLE_FX_LOOPED_ALPHA(Any p0, float p1) { invoke<Void>(0x37AEB2D412CB3909, p0, p1); } // 0x726845132380142E 0x5ED49BE1
	static void SET_PARTICLE_FX_LOOPED_SCALE(Any p0, float p1) { invoke<Void>(0x7240C61651A47F3F, p0, p1); } // 0xB44250AAA456492D 0x099B8B49
	static void _SET_PARTICLE_FX_LOOPED_RANGE(Any ptfxHandle, float range) { invoke<Void>(0x5591A0CF18554339, ptfxHandle, range); } // 0xDCB194B85EF7B541 0x233DE879
	static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0x4D14774FC3A5BEBB, p0); } // 0xEEC4047028426510 0x19EC0001
	static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Any p0, BOOL p1) { invoke<Void>(0x68DB8AC2BBF4CF89, p0, p1); } // 0xACEE6F360FC1F6B6 0x6B125A02
	static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xF3ABDDA293302567, p0); } // 0x96EF97DAEB89BEF5 0xD938DEE0
	static void SET_PARTICLE_FX_BLOOD_SCALE(BOOL p0) { invoke<Void>(0xD38CC7882835A32C, p0); } // 0x5F6DF3D92271E8A1 0x18136DE0
	static void ENABLE_CLOWN_BLOOD_VFX(BOOL p0) { invoke<Void>(0xA74B9989FBCDB7B6, p0); } // 0xD821490579791273 0xC61C75E9
	static void ENABLE_ALIEN_BLOOD_VFX(BOOL p0) { invoke<Void>(0x5F90A33DE756F11B, p0); } // 0x9DCE1F0F78260875 0xCE8B8748
	static void _0xAD301D02CCA9C72F(float p0) { invoke<Void>(0xAD301D02CCA9C72F, p0); } // 0x27E32866E9A5C416
	static void _0xF55DF3E3F7A855A8(float p0) { invoke<Void>(0xF55DF3E3F7A855A8, p0); } // 0xBB90E12CAC1DAB25
	static void _0x5628A022146E8F50(BOOL p0) { invoke<Void>(0x5628A022146E8F50, p0); } // 0xCA4AE345A153D573
	static void _0x5BEF973804417F06(float p0) { invoke<Void>(0x5BEF973804417F06, p0); } // 0x54E22EA2C1956A8D
	static void _0xC3FAD5D6B82A08DD(float p0) { invoke<Void>(0xC3FAD5D6B82A08DD, p0); } // 0x949F397A288B28B3
	static void _0x5D0868636F009CEF(BOOL p0) { invoke<Void>(0x5D0868636F009CEF, p0); } // 0x9B079E5221D984D3
	static void _SET_PTFX_ASSET_NEXT_CALL(char* name) { invoke<Void>(0x6596A538E2DFEF53, name); } // 0x6C38AF3693A69A91 0x9C720B61
	static void _SET_PTFX_ASSET_OLD_TO_NEW(char* Old, char* New) { invoke<Void>(0x6D02627C3BBC1AB7, Old, New); } // 0xEA1E2D93F6F75ED9
	static void _0x1AEF85E8E379A8CA(char* name) { invoke<Void>(0x1AEF85E8E379A8CA, name); } // 0x89C8553DD3274AAE
	static void _0x468F1DE17209C1D8(BOOL p0) { invoke<Void>(0x468F1DE17209C1D8, p0); } // 0xA46B73FAA3460AE1
	static void _0x428E90FDEBF5EDD4(float p0) { invoke<Void>(0x428E90FDEBF5EDD4, p0); } // 0xF78B803082D4386F
	static void WASH_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7556478A4DB6EB07, p0, p1, p2, p3, p4); } // 0x9C30613D50A6ADEF 0xDEECBC57
	static void WASH_DECALS_FROM_VEHICLE(Any p0, float p1) { invoke<Void>(0xD960F606B3C6678A, p0, p1); } // 0x5B712761429DBC14 0x2929F11A
	static void FADE_DECALS_IN_RANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x646E8E19BEBB2238, p0, p1, p2, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A
	static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0x1DA595C2C10DA7E3, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0
	static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xA35DD96802702E0E, obj); } // 0xCCF71CBDDF5B6CB9 0x8B67DCA7
	static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xB263F8F378970B6D, obj, x, y, z); } // 0xA6F6F70FDC6D144C 0xF4999A55
	static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xBFC34EA3244E4C25, vehicle); } // 0xE91F1B65F2B48D57 0x831D06CA
	static Any ADD_DECAL(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, BOOL p17, BOOL p18, BOOL p19) { return invoke<Any>(0x8E1604B095DFBB2A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412
	static Any ADD_PETROL_DECAL(float x, float y, float z, float Groundlvl, float Width, float Transparency) { return invoke<Any>(0x0A8D9705C68A6E3E, x, y, z, Groundlvl, Width, Transparency); } // 0x4F5212C7AD880DF8 0x1259DF42
	static void _0x95B7FFBF744025A7(float p0) { invoke<Void>(0x95B7FFBF744025A7, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B
	static void _0x9063FC82ABD6B473(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x9063FC82ABD6B473, p0, p1, p2, p3); } // 0x967278682CB6967A 0xBAEC6ADD
	static void _0x4338526E06A4F987() { invoke<Void>(0x4338526E06A4F987); } // 0x0A123435A26C36CD 0xCCCA6855
	static void REMOVE_DECAL(Any p0) { invoke<Void>(0x0CDCF7421AF97AEF, p0); } // 0xED3F346429CCD659 0xA4363188
	static BOOL IS_DECAL_ALIVE(Any p0) { return invoke<BOOL>(0x862A2DCA7D157566, p0); } // 0xC694D74949CAFD0C 0xCDD4A61A
	static float GET_DECAL_WASH_LEVEL(Any p0) { return invoke<float>(0x68E45BCC939BEF52, p0); } // 0x323F647679A09103 0x054448EF
	static void _0x60D44C27D56E784F() { invoke<Void>(0x60D44C27D56E784F); } // 0xD9454B5752C857DC 0xEAB6417C
	static void _0xB60AC64AFD92B6EE() { invoke<Void>(0xB60AC64AFD92B6EE); } // 0x27CFB1B1E078CB2D 0xC2703B88
	static void _0xAEB0AFB537C7D5E7() { invoke<Void>(0xAEB0AFB537C7D5E7); } // 0x4B5CFC83122DF602 0xA706E84D
	static BOOL _0x7D7A581CD9045B46(float xCoord, float yCoord, float zCoord, float p3) { return invoke<BOOL>(0x7D7A581CD9045B46, xCoord, yCoord, zCoord, p3); } // 0x2F09F7976C512404 0x242C6A04
	static void _0x366ED281729CC792(Any p0, Any* p1, Any* p2) { invoke<Void>(0x366ED281729CC792, p0, p1, p2); } // 0x8A35C742130C6080 0x335695CF
	static void _0x263D71B25172B955(Any p0) { invoke<Void>(0x263D71B25172B955, p0); } // 0xB7ED70C49521A61D 0x7B786555
	static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0x1070B00A2DBA74EE, p0, p1); } // 0x84C8D7C2D30D3280 0xCE9E6CF2
	static BOOL _ADD_CLAN_DECAL_TO_VEHICLE(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0x43E6509D63A7AD07, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x428BDCB9DA58DA53 0x12077738
	static void _0xC803E3A33C09C5F7(Any p0, Any p1) { invoke<Void>(0xC803E3A33C09C5F7, p0, p1); } // 0xD2300034310557E4 0x667046A8
	static Any _0x9177FA22CB68DE6A(Any p0, Any p1) { return invoke<Any>(0x9177FA22CB68DE6A, p0, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8
	static BOOL _HAS_VEHICLE_GOT_DECAL(Vehicle vehicle, Any p1) { return invoke<BOOL>(0x43CA43F21BD77772, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B
	static void _0x671A22C28D7DDAC2(BOOL p0) { invoke<Void>(0x671A22C28D7DDAC2, p0); } // 0x0E4299C549F0D1F1 0x9BABCBA4
	static void _0x1ADD524591614B09(BOOL p0) { invoke<Void>(0x1ADD524591614B09, p0); } // 0x02369D5C8A51FDCF 0xFDF6D8DA
	static void _0x4571120FFD58CEB3(float p0) { invoke<Void>(0x4571120FFD58CEB3, p0); } // 0x46D1A61A21F566FC 0x2056A015
	static void _0x7339F812DF012982(Any* p0) { invoke<Void>(0x7339F812DF012982, p0); } // 0x2A2A52824DB96700 0x0F486429
	static void _0x05B4003394A753AC(float p0) { invoke<Void>(0x05B4003394A753AC, p0); } // 0x1600FD8CF72EBC12 0xD87CC710
	static void _0x93B1EA264401C518() { invoke<Void>(0x93B1EA264401C518); } // 0xEFB55E7C25D3B3BE 0xE29EE145
	static void _0xEF3E39D278B76EAE() { invoke<Void>(0xEF3E39D278B76EAE); } // 0xA44FF770DFBC5DAE
	static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0x8796479F8C5BEDE4, toggle); } // 0xC9F98AC1884E73A2 0x7CFAE36F
	static void _0xCC28ECDF585B573D(BOOL p0) { invoke<Void>(0xCC28ECDF585B573D, p0); } // 0x03300B57FCAC6DDB 0x60F72371
	static void _0xD3B44DC0C0842C5A() { invoke<Void>(0xD3B44DC0C0842C5A); } // 0x98EDF76A7271E4F2
	static void _SET_FORCE_PED_FOOTSTEPS_TRACKS(BOOL enabled) { invoke<Void>(0xC39E340598194194, enabled); } // 0xAEEDAD1420C65CC0
	static void _SET_FORCE_VEHICLE_TRAILS(BOOL enabled) { invoke<Void>(0x5DA5DC155FE7E200, enabled); } // 0x4CC7F0FEA5283FE0
	static void _0xBF3408DBB261D7DF(Any* p0) { invoke<Void>(0xBF3408DBB261D7DF, p0); } // 0xD7021272EB0A451E
	static void SET_TIMECYCLE_MODIFIER(char* modifierName) { invoke<Void>(0x25F4584B1522AF19, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638
	static void SET_TIMECYCLE_MODIFIER_STRENGTH(float p0) { invoke<Void>(0xF51512A042D35A1B, p0); } // 0x82E7FFCD5B2326B3 0x458F4F45
	static void SET_TRANSITION_TIMECYCLE_MODIFIER(Any* p0, float p1) { invoke<Void>(0x8FDA1E4DAE49B5D9, p0, p1); } // 0x3BCF567485E1971C 0xBB2BA72A
	static void _0x658CBC06E664DADD(float p0) { invoke<Void>(0x658CBC06E664DADD, p0); } // 0x1CBA05AE7BD7EE05 0x56345F6B
	static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xF719D6C33930E46D); } // 0x0F07E7745A236711 0x8D8DF8EE
	static Any GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<Any>(0x09D05B27722EC27D); } // 0xFDF3D97C674AFB66 0x594FEEC4
	static Any _0xCF701AC812654AD1() { return invoke<Any>(0xCF701AC812654AD1); } // 0x459FD2C8D0AB78BC 0x03C44E4B
	static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0x653919087DF4FBD2); } // 0x58F735290861E6B4 0x7E082045
	static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0x2A96BEB3BAA8FC60); } // 0x3C8938D7D872211E 0x79D7D235
	static void _0x262274277CC55046(Any* p0) { invoke<Void>(0x262274277CC55046, p0); } // 0xBBF327DED94E4DEB 0x85BA15A4
	static void _0xB103F209C92A7F88(float p0) { invoke<Void>(0xB103F209C92A7F88, p0); } // 0xBDEB86F4D5809204 0x9559BB38
	static void _0xF32590B1C73ABAA9(Any* p0) { invoke<Void>(0xF32590B1C73ABAA9, p0); } // 0xBF59707B3E5ED531 0x554BA16E
	static void _0x6E1FACE8283FA8DF(Any* p0, Any* p1) { invoke<Void>(0x6E1FACE8283FA8DF, p0, p1); } // 0x1A8E2C8B9CF4549C 0xE8F538B5
	static void _0x77074F3C0AE2F095(Any p0) { invoke<Void>(0x77074F3C0AE2F095, p0); } // 0x15E33297C3E8DC60 0x805BAB08
	static void _0x174AAD16D9A596A3(Any* p0) { invoke<Void>(0x174AAD16D9A596A3, p0); } // 0x5096FD9CCB49056D 0x908A335E
	static void _0x9A40B5B648A2CBBF() { invoke<Void>(0x9A40B5B648A2CBBF); } // 0x92CCC17A7A2285DA 0x6776720A
	static Any _0xB4C3FCC8819FEE06() { return invoke<Any>(0xB4C3FCC8819FEE06); } // 0xBB0527EC6341496D
	static void _0x4B5BA54F4ACC0496(float p0) { invoke<Void>(0x4B5BA54F4ACC0496, p0); } // 0x2C328AF17210F009
	static void _0x243B7EA91432777A() { invoke<Void>(0x243B7EA91432777A); } // 0x2BF72AD5B41AA739
	static Any REQUEST_SCALEFORM_MOVIE(char* scaleformName) { return invoke<Any>(0xFFABEC653B35EF1F, scaleformName); } // 0x11FE353CF9733E6F 0xC67E3DCB
	static Any REQUEST_SCALEFORM_MOVIE_INSTANCE(char* scaleformName) { return invoke<Any>(0x947EFA362D35494B, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D
	static Any _REQUEST_SCALEFORM_MOVIE3(char* scaleformName) { return invoke<Any>(0xB9C60ADBB8B58394, scaleformName); } // 0xBD06C611BB9048C2
	static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleform) { return invoke<BOOL>(0x4A4851D44CDF03C0, scaleform); } // 0x85F01B8D5B90570E 0xDDFB6448
	static BOOL _0xDF71FC713302C443(Any* p0) { return invoke<BOOL>(0xDF71FC713302C443, p0); } // 0x0C1C5D756FB5F337
	static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int handle) { return invoke<BOOL>(0x16637B70D924BDDE, handle); } // 0x8217150E1217EBFD 0x1DFE8D8A
	static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformPtr) { invoke<Void>(0x8A86A209B0F0AF7D, scaleformPtr); } // 0x1D132D614DD86811 0x5FED3BA1
	static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0x5B6B48C37D7C94DF, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D
	static void DRAW_SCALEFORM_MOVIE(int handle, float posX, float posY, float width, float height, int red, int green, int blue, int alpha, int unkb) { invoke<Void>(0xAF5B7C9C0A5116E9, handle, posX, posY, width, height, red, green, blue, alpha, unkb); } // 0x54972ADAF0294A93 0x48DA6A58
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, Any unkb) { invoke<Void>(0xE2B331FD5EEF4684, scaleform, red, green, blue, alpha, unkb); } // 0x0DF606929C105BE1 0x7B48E696
	static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0x6781BE8FF1984DE9, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06
	static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0x84DA7B9B8E453B7E, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x87D51D72255D4E78 0xC4F63A89
	static void _DRAW_SCALEFORM_MOVIE_3D_NON_ADDITIVE(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, Any p13) { invoke<Void>(0x58CFAD3C3C74BA9F, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, p13); } // 0x1CE592FDC749D6F5 0x899933C8
	static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, char* functionName) { invoke<Void>(0x77868B5359B19C8F, scaleform, functionName); } // 0xFBD96D87AC96D533 0x7AB77B57
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(int scaleform, char* functionName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0x1B81A9D00D4A5D4C, scaleform, functionName, param1, param2, param3, param4, param5); } // 0xD0837058AE2E4BEE 0x557EDA1D
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(int scaleform, char* functionName, char* param1, char* param2, char* param3, char* param4, char* param5) { invoke<Void>(0x903C61FFA7804294, scaleform, functionName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB
	static void _CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(int scaleform, char* functionName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, char* stringParam1, char* stringParam2, char* stringParam3, char* stringParam4, char* stringParam5) { invoke<Void>(0x60E4B50FF81B130D, scaleform, functionName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE
	static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION_FROM_HUD_COMPONENT(int hudComponent, char* functionName) { return invoke<BOOL>(0x927B409A42361886, hudComponent, functionName); } // 0x98C494FD5BDFBFD5 0x5D66CE1E
	static BOOL _PUSH_SCALEFORM_MOVIE_FUNCTION(int scaleform, char* functionName) { return invoke<BOOL>(0xA4F3B84032D46C13, scaleform, functionName); } // 0xF6E48914C7A8694E 0x215ABBE8
	static BOOL _0xD3BE6D117E6DF2D1(char* functionName) { return invoke<BOOL>(0xD3BE6D117E6DF2D1, functionName); } // 0xAB58C27C2E6123C6 0xF6015178
	static BOOL _0x8FC9FE083529E581(char* functionName) { return invoke<BOOL>(0x8FC9FE083529E581, functionName); } // 0xB9449845F73F5E9C 0x5E219B67
	static void _POP_SCALEFORM_MOVIE_FUNCTION_VOID() { invoke<Void>(0xFF141057ED7B4C73); } // 0xC6796A8FFA375E53 0x02DBF2D7
	static Any _POP_SCALEFORM_MOVIE_FUNCTION() { return invoke<Any>(0x96E794F94B35432F); } // 0xC50AA39A577AF886 0x2F38B526
	static BOOL _0x4B2BEE3B1540A0A3(Any funcData) { return invoke<BOOL>(0x4B2BEE3B1540A0A3, funcData); } // 0x768FF8961BA904D6 0x5CD7C3C0
	static int _0x9FF96E17DE53C966(Any funcData) { return invoke<int>(0x9FF96E17DE53C966, funcData); } // 0x2DE7EFA66B906036 0x2CFB0E6D
	static char* SITTING_TV(Any scaleform) { return invoke<char*>(0xB28747C1359003EF, scaleform); } // 0xE1E258829A885245 0x516862EB
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(int value) { invoke<Void>(0x43C93E686A1E92C5, value); } // 0xC3D0841A0CC546A6 0x716777CB
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(float value) { invoke<Void>(0x73B039A1CD485226, value); } // 0xD69736AAE04DB51A 0x9A01FFDA
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(BOOL value) { invoke<Void>(0x840DDAF1126AE0CC, value); } // 0xC58424BA936EB458 0x0D4AE8CB
	static void _BEGIN_TEXT_COMPONENT(char* componentType) { invoke<Void>(0x33D37B75FC2BCC8C, componentType); } // 0x80338406F3475E55 0x3AC9CB55
	static void _END_TEXT_COMPONENT() { invoke<Void>(0x057886C01DDC535D); } // 0x362E2D3FE93A9959 0x386CE0B8
	static void _0xD21CAB87FF1BCF07() { invoke<Void>(0xD21CAB87FF1BCF07); } // 0xAE4E8157D9ECF087 0x2E80DB52
	static void _PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(char* value) { invoke<Void>(0x5ADC6AF7C9F74F36, value); } // 0xBA7148484BD90365 0x4DAAD55B
	static void _0x492B9DC2AF02FDDF(char* p0) { invoke<Void>(0x492B9DC2AF02FDDF, p0); } // 0xE83A3E3557A56640 0xCCBF0334
	static BOOL _0x8C13021F2E45D013(Any p0) { return invoke<BOOL>(0x8C13021F2E45D013, p0); } // 0x5E657EF1099EDD65 0x91A081A1
	static void _0x9A34EAA7C8D49CBF(Any p0) { invoke<Void>(0x9A34EAA7C8D49CBF, p0); } // 0xEC52C631A1831C03 0x83A9811D
	static void _REQUEST_HUD_SCALEFORM(int hudComponent) { invoke<Void>(0x4F3708EC41B50E44, hudComponent); } // 0x9304881D6F6537EA 0x7AF85862
	static BOOL _HAS_HUD_SCALEFORM_LOADED(int hudComponent) { return invoke<BOOL>(0xBE52BCF3EB750DB0, hudComponent); } // 0xDF6E5987D2B4D140 0x79B43255
	static void _0x24BCEB380D26DC28(Any p0) { invoke<Void>(0x24BCEB380D26DC28, p0); } // 0xF44A5456AC3F4F97 0x03D87600
	static BOOL _0x34A1C201783E2AEB(Any p0) { return invoke<BOOL>(0x34A1C201783E2AEB, p0); } // 0xD1C7CB175E012964 0xE9183D3A
	static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xBB6E1DCBD9EA8378, channel); } // 0xBAABBB23EB6E484E 0x41A8A627
	static int GET_TV_CHANNEL() { return invoke<int>(0x4992C176EF088E11); } // 0xFC1E275A90D39995 0x6B96145A
	static void SET_TV_VOLUME(float volume) { invoke<Void>(0xBF25C46A95D8CF38, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D
	static float GET_TV_VOLUME() { return invoke<float>(0x48CF553E664D7F32); } // 0x2170813D3DD8661B 0x39555CF0
	static void DRAW_TV_CHANNEL(float posX, float posY, float scaleX, float scaleY, float rotation, int r, int g, int b, int a) { invoke<Void>(0x3816E33BBB96868A, posX, posY, scaleX, scaleY, rotation, r, g, b, a); } // 0xFDDC2B4ED3C69DF0 0x8129EF89
	static void _0x16B3E82C4C80C8A4(int p0, char* p1, BOOL p2) { invoke<Void>(0x16B3E82C4C80C8A4, p0, p1, p2); } // 0xF7B38B8305F1FE8B 0xB262DE67
	static void _0xD6733B87826BD515(Any p0, Any* p1, Any p2) { invoke<Void>(0xD6733B87826BD515, p0, p1, p2); } // 0x2201C576FACAEBE8 0x78C4DCBE
	static void _0xD9D2586D99900FD7(Any p0) { invoke<Void>(0xD9D2586D99900FD7, p0); } // 0xBEB3D46BB7F043C0 0xCBE7068F
	static BOOL _0xD0603825C41C5404(Any p0) { return invoke<BOOL>(0xD0603825C41C5404, p0); } // 0x0AD973CA1E077B60 0x4D1EB0FB
	static void _0x9ACA47890B9EEF06(BOOL p0) { invoke<Void>(0x9ACA47890B9EEF06, p0); } // 0x74C180030FDE4B69 0x796DE696
	static void _0xE8FF117BCF3E24E0(Any p0) { invoke<Void>(0xE8FF117BCF3E24E0, p0); } // 0xD1C55B110E4DF534 0xD99EC000
	static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xFBABD6DBDEE95A3E, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D
	static Any _0x2395B02DCDFD4563() { return invoke<Any>(0x2395B02DCDFD4563); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A
	static BOOL _0x62073E844928382B(Any* p0) { return invoke<BOOL>(0x62073E844928382B, p0); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98
	static BOOL _0xE580782B6C89CC7C(Any* p0, Ped pedHandle, Any p2, float posX, float posY, float posZ) { return invoke<BOOL>(0xE580782B6C89CC7C, p0, pedHandle, p2, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE
	static void _0x2B30E2A0D6100796() { invoke<Void>(0x2B30E2A0D6100796); } // 0x7A42B2E236E71415 0x431AA036
	static void _0x825F9F85D6A09086(BOOL p0) { invoke<Void>(0x825F9F85D6A09086, p0); } // 0x108BE26959A9D9BB 0x24A7A7F6
	static void _0xE650B3045DB9CAEB(BOOL p0) { invoke<Void>(0xE650B3045DB9CAEB, p0); } // 0xA356990E161C9E65 0xA1CB6C94
	static void _0x7D6AFCC08A4E96AD(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12) { invoke<Void>(0x7D6AFCC08A4E96AD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0x1C4FC5752BCD8E48 0x3B637AA7
	static void _0x3B1EBDD89A78C087(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11) { invoke<Void>(0x3B1EBDD89A78C087, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x5CE62918F8D703C7 0xDF552973
	static void _START_SCREEN_EFFECT(char* effectName, int playLength, BOOL loop) { invoke<Void>(0xCD0E4FEA8B60FCA3, effectName, playLength, loop); } // 0x2206BF9A37B7F724 0x1D980479
	static void _STOP_SCREEN_EFFECT(char* effectName) { invoke<Void>(0x1E79BB0C6A422F63, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA
	static BOOL _GET_SCREEN_EFFECT_IS_ACTIVE(char* effectName) { return invoke<BOOL>(0x8EB775E44971BD42, effectName); } // 0x36AD3E690DA5ACEB 0x089D5921
	static void _STOP_ALL_SCREEN_EFFECTS() { invoke<Void>(0xCE6D6B0EAA418D44); } // 0xB4EDDC19532BFB85 0x4E6D875B
	static void _0xA9CC2006D51C9E6D(Any* p0) { invoke<Void>(0xA9CC2006D51C9E6D, p0); } // 0xD2209BE128B5418C
}

namespace STATS
{
	static Any STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<Any>(0xABB6889226F3C722, statSlot); } // 0xEB0A72181D4AA4AD 0x84BDD475
	static BOOL STAT_LOAD(Any p0) { return invoke<BOOL>(0xF12281B26EE05B7B, p0); } // 0xA651443F437B1CE6 0x9E5629F4
	static BOOL STAT_SAVE(int p0, BOOL p1, int p2) { return invoke<BOOL>(0x0C02C9A6C386C335, p0, p1, p2); } // 0xE07BCA305B82D2FD 0xE10A7CA4
	static void _0x44AF25E331013DB4(Any p0) { invoke<Void>(0x44AF25E331013DB4, p0); } // 0x5688585E6D563CD8 0xC62406A6
	static BOOL STAT_LOAD_PENDING(Any p0) { return invoke<BOOL>(0xF37E231E603C660A, p0); } // 0xA1750FFAFA181661 0x4E9AC983
	static Any STAT_SAVE_PENDING() { return invoke<Any>(0x3ABC071713C4E55C); } // 0x7D3A583856F2C5AC 0xC3FD3822
	static Any STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<Any>(0x7E6A062124F37AEB); } // 0xBBB6AD006F1BBEA3 0xA3407CA3
	static Any STAT_DELETE_SLOT(Any p0) { return invoke<Any>(0xEB9E7F159469F3A5, p0); } // 0x49A49BED12794D70 0x2F171B94
	static BOOL STAT_SLOT_IS_LOADED(Any p0) { return invoke<BOOL>(0x1ADD6AB65304522C, p0); } // 0x0D0A9F0E7BD91E3C 0x7A299C13
	static BOOL _0x11E6A486F68CFF4E(Any p0) { return invoke<BOOL>(0x11E6A486F68CFF4E, p0); } // 0x7F2C4CDF2E82DF4C 0x0BF0F4B2
	static Any _0x9DF38DCDAB8F1F5E(Any p0) { return invoke<Any>(0x9DF38DCDAB8F1F5E, p0); } // 0xE496A53BA5F50A56 0xCE6B62B5
	static void _0x3496ED4D18796AB7(BOOL p0) { invoke<Void>(0x3496ED4D18796AB7, p0); } // 0xF434A10BA01C37D0 0xCE7A2411
	static BOOL _0xBF9B7B9EA35690BA(Any p0) { return invoke<BOOL>(0xBF9B7B9EA35690BA, p0); } // 0x7E6946F68A38B74F 0x22804C20
	static void _0x21DB1A3E03B00614(Any p0) { invoke<Void>(0x21DB1A3E03B00614, p0); } // 0xA8733668D1047B51 0x395D18B1
	static Any _0x6D5C7162567DA1B8() { return invoke<Any>(0x6D5C7162567DA1B8); } // 0xECB41AC6AB754401 0xED7000C8
	static void _0x6221ED04CDC5BE6D() { invoke<Void>(0x6221ED04CDC5BE6D); } // 0x9B4BD21D69B1E609
	static Any _0x6C94734402DF1DEF() { return invoke<Any>(0x6C94734402DF1DEF); } // 0xC0E0D686DDFC6EAE 0x099FCC86
	static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0x39DEDCCD70293F58, statName, value, save); } // 0xB3271D7AB655B441 0xC9CC1C5C
	static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0xFF6A346D78DD4938, statName, value, save); } // 0x4851997F37FE9B3C 0x6CEA96F2
	static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0x7321AD5D4653F852, statName, value, save); } // 0x4B33C4243DE0C432 0x55D79DFB
	static BOOL STAT_SET_GXT_LABEL(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0x687ADC1B35D4E667, statName, value, save); } // 0x17695002FD8B2AE0 0xC1224AA7
	static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0xD0AC0646C447B4C6, statName, value, numFields, save); } // 0x2C29BFB64F4FCBE4 0x36BE807B
	static BOOL STAT_SET_STRING(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xE990DD1F04CDA15C, statName, value, save); } // 0xA87B2335D12531D7 0xB1EF2E21
	static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0xCAE3E53FE23EA8E5, statName, x, y, z, save); } // 0xDB283FDE680FE72E 0x1192C9A3
	static BOOL STAT_SET_MASKED_INT(Hash statName, Any p1, Any p2, int p3, BOOL save) { return invoke<BOOL>(0x0D4158A08956FED3, statName, p1, p2, p3, save); } // 0x7BBB1B54583ED410 0x2CBAA739
	static BOOL STAT_SET_USER_ID(Hash statName, char* value, BOOL save) { return invoke<BOOL>(0xFC2E0C10AC28DD33, statName, value, save); } // 0x8CDDF1E452BABE11 0xDBE78ED7
	static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0x919D5DF2EFF25191, statName, p1); } // 0xC2F84B7F9C4D0C61 0xA286F015
	static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0x56DCF5665F92F9BD, statHash, outValue, p2); } // 0x767FBC2AC802EF3D 0x1C6FE43E
	static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0xB63C332FD6AA5D49, statHash, outValue, p2); } // 0xD7AE6C9C9C6AC54C 0xFCBDA612
	static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xA1B21B1D84085DB0, statHash, outValue, p2); } // 0x11B5E6D2AE73F48E 0x28A3DD2B
	static BOOL STAT_GET_DATE(Hash statHash, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x15EB694D4B2CB1E7, statHash, p1, p2, p3); } // 0x8B0FACEFC36C824B 0xD762D16C
	static BOOL STAT_GET_STRING(Hash statHash, char* outValue) { return invoke<BOOL>(0xE904581FF5D29CF2, statHash, outValue); } // 0xE50384ACC2C3DB74 0x10CE4BDE
	static BOOL STAT_GET_POS(Any p0, Any* p1, Any* p2, Any* p3, Any p4) { return invoke<BOOL>(0x7480883A2AEEBFF4, p0, p1, p2, p3, p4); } // 0x350F82CCB186AA1B 0xC846ECCE
	static BOOL STAT_GET_MASKED_INT(Any p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x7D30AFD5AF907144, p0, p1, p2, p3, p4); } // 0x655185A06D9EEAAB 0xE9D9B70F
	static Any STAT_GET_USER_ID(Any p0) { return invoke<Any>(0xBD5AAD6F35AA256A, p0); } // 0x2365C388E393BBE2 0xE2E8B6BA
	static char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<char*>(0x51756D0752F63C00, statName); } // 0x5473D4195058B2E4 0x1544B29F
	static BOOL STAT_SET_LICENSE_PLATE(Hash statName, char* str) { return invoke<BOOL>(0xBBE92CF18B096840, statName, str); } // 0x69FF13266D7296DA 0x3507D253
	static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0x8109297A92713E3B, statName, value); } // 0x9B5A68C6489E9909 0xDFC5F71E
	static BOOL _0xC7FA050A3724624B() { return invoke<BOOL>(0xC7FA050A3724624B); } // 0x5A556B229A169402 0x46F21343
	static BOOL _0xD670CCE90E308462() { return invoke<BOOL>(0xD670CCE90E308462); } // 0xB1D2BB1E1631F5B1 0x02F283CE
	static BOOL _0xB87DE7FC3BB792D9(Hash statName, Any p1, Any* p2) { return invoke<BOOL>(0xB87DE7FC3BB792D9, statName, p1, p2); } // 0xBED9F5693F34ED17 0xC4110917
	static void _0x5CA74C88DA7B88E5(int p0) { invoke<Void>(0x5CA74C88DA7B88E5, p0); } // 0x26D7399B9587FE89 0x343B27E2
	static void _0xD65829312B8E337C(int p0) { invoke<Void>(0xD65829312B8E337C, p0); } // 0xA78B8FA58200DA56 0xE3247582
	static Any _0x1DAF00D7A2E7C02C(Any p0) { return invoke<Any>(0x1DAF00D7A2E7C02C, p0); } // 0xE0E854F5280FB769 0xFD66A429
	static Any _0x000A9FE438C1F635(Any p0) { return invoke<Any>(0x000A9FE438C1F635, p0); } // 0xF2D4B2FE415AAFC3 0x9B431236
	static Any _0x6DD58BF7B7AF7D4F(Any p0) { return invoke<Any>(0x6DD58BF7B7AF7D4F, p0); } // 0x7583B4BE4C5A41B5 0x347B4436
	static Any _0xDE272463B940E194(Any p0) { return invoke<Any>(0xDE272463B940E194, p0); } // 0x2CE056FF3723F00B 0x2C1D6C31
	static void _0xFF4F8C74D9A68AE8(int profileSetting, int value) { invoke<Void>(0xFF4F8C74D9A68AE8, profileSetting, value); } // 0x68F01422BE1D838F 0x24DD4929
	static Any _0xA689D636E73D305A(Any p0) { return invoke<Any>(0xA689D636E73D305A, p0); } // 0xF4D8E7AC2A27758C 0xDFC25D66
	static Any _0x8C1A0D59B3EFF3C9(Any p0) { return invoke<Any>(0x8C1A0D59B3EFF3C9, p0); } // 0x94F12ABF9C79E339 0xCA160BCC
	static Any _0x489ECBF72F3DA469(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0x489ECBF72F3DA469, p0, p1, p2, p3); } // 0x80C75307B1C42837 0xB5BF87B2
	static Any _0x9617EA50E5A72132(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0x9617EA50E5A72132, p0, p1, p2, p3); } // 0x61E111E323419E07 0x1F938864
	static Any _0xB4BF922F35D7655F(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0xB4BF922F35D7655F, p0, p1, p2, p3); } // 0xC4BB08EE7907471E 0x3F8E893B
	static Any _0xD7C723573D869608(Any p0, BOOL p1, BOOL p2, Any p3) { return invoke<Any>(0xD7C723573D869608, p0, p1, p2, p3); } // 0xD16C2AD6B8E32854 0xFB93C5A2
	static Any _0x2655E62E609CEE1A(Any p0, BOOL p1, BOOL p2, Any p3, Any* p4) { return invoke<Any>(0x2655E62E609CEE1A, p0, p1, p2, p3, p4); } // 0xBA52FF538ED2BC71
	static Any _0x37E0A48E5A0DA582(Any p0, BOOL p1, BOOL p2, Any p3, Any* p4) { return invoke<Any>(0x37E0A48E5A0DA582, p0, p1, p2, p3, p4); } // 0x2B4CDCA6F07FF3DA
	static BOOL STAT_GET_BOOL_MASKED(Hash statName, Any p1, Any p2) { return invoke<BOOL>(0x79445438CB549F61, statName, p1, p2); } // 0x10FE3F1B79F9B071 0x6ACE1B7D
	static BOOL STAT_SET_BOOL_MASKED(Hash statName, BOOL p1, Any p2, BOOL save) { return invoke<BOOL>(0x4CD737F9D5037B5E, statName, p1, p2, save); } // 0x5BC62EC1937B9E5B 0x7842C4D6
	static void _0xCC109FEC0B281534(char* p0, Any p1) { invoke<Void>(0xCC109FEC0B281534, p0, p1); } // 0x5009DFD741329729 0x61ECC465
	static void PLAYSTATS_NPC_INVITE(Any* p0) { invoke<Void>(0xA3C745BF5B9925DF, p0); } // 0x93054C88E6AA7C44 0x598C06F3
	static void PLAYSTATS_AWARD_XP(Any p0, Any p1, Any p2) { invoke<Void>(0x68ECED5ED327B57B, p0, p1, p2); } // 0x46F917F6B4128FE4 0x8770017B
	static void PLAYSTATS_RANK_UP(Any p0) { invoke<Void>(0x310D7B333ACCEFAF, p0); } // 0xC7F2DE41D102BFB4 0x56AFB9F5
	static void _0xE370D602045D7E0E() { invoke<Void>(0xE370D602045D7E0E); } // 0x098760C7461724CD 0x896CDF8D
	static void _0x6344E06FEF08D097(Any p0, Any p1) { invoke<Void>(0x6344E06FEF08D097, p0, p1); } // 0xA071E0ED98F91286 0x1A66945F
	static void _0xC6F3198C92F67D9E(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC6F3198C92F67D9E, p0, p1, p2, p3, p4); } // 0xC5BE134EC7BA96A0 0xC960E161
	static void PLAYSTATS_MISSION_STARTED(Any* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x75618AE92F45E20F, p0, p1, p2, p3); } // 0xC19A2925C34D2231 0x3AAB699C
	static void PLAYSTATS_MISSION_OVER(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x733FF20A35E9C990, p0, p1, p2, p3, p4, p5); } // 0x7C4BB33A8CED7324 0x5B90B5FF
	static void PLAYSTATS_MISSION_CHECKPOINT(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3E355C7CA68AF348, p0, p1, p2, p3); } // 0xC900596A63978C1D 0xCDC52280
	static void _0x2DE5A7EBFE83C154(Any* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2DE5A7EBFE83C154, p0, p1, p2, p3); } // 0x71862B1D855F32E1 0xAC2C7C63
	static void _0x04500B60AC17CDAB(Any p0, Any p1, Any p2, float p3) { invoke<Void>(0x04500B60AC17CDAB, p0, p1, p2, p3); } // 0x121FB4DDDC2D5291 0x413539BC
	static void PLAYSTATS_RACE_CHECKPOINT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF4F1D55C16974733, p0, p1, p2, p3, p4); } // 0x9C375C315099DDE4 0x580D5508
	static BOOL _0xF926D5D6B980058A(Any* p0, Any* p1) { return invoke<BOOL>(0xF926D5D6B980058A, p0, p1); } // 0x6DEE77AFF8C21BD1 0x489E27E7
	static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x596BD99725BE691A, p0, p1, p2, p3, p4, p5, p6); } // 0xBC80E22DED931E3D 0x2BDE85C1
	static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7356431EDAC1A746, p0, p1, p2, p3, p4); } // 0x176852ACAAC173D1 0xA4746384
	static void _0xD7A36AEE7373010B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xD7A36AEE7373010B, p0, p1, p2, p3, p4, p5); } // 0x1CAE5D2E3F9A07F0 0x6602CED6
	static void _0x70C412C312544A74(float p0, float p1, float p2) { invoke<Void>(0x70C412C312544A74, p0, p1, p2); } // 0xAFC7E5E075A96F46
	static void _0xFCBE9FB154447C4C(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFCBE9FB154447C4C, p0, p1, p2, p3); } // 0xCB00196B31C39EB1 0x759E0EC9
	static void _0x7CA4C038BF64C552(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7CA4C038BF64C552, p0, p1, p2, p3); } // 0x2B69F5074C894811 0x62073DF7
	static void _0x6B461D7301A31FCB(Any p0, Any p1, Any p2) { invoke<Void>(0x6B461D7301A31FCB, p0, p1, p2); } // 0x7EEC2A316C250073 0x30558CFD
	static void _0x9DE38361F06FFFCA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x9DE38361F06FFFCA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xADDD1C754E2E2914 0x06CE3692
	static void _0xD98D651CBA594685(Any p0) { invoke<Void>(0xD98D651CBA594685, p0); } // 0x79AB33F0FBFAC40C 0x8D5C7B37
	static void _0xF5DA79B736ABCCED(Hash p0, int p1) { invoke<Void>(0xF5DA79B736ABCCED, p0, p1); } // 0xDDF24D535060F811 0x37D152BB
	static void PLAYSTATS_FRIEND_ACTIVITY(Any p0, Any p1) { invoke<Void>(0xE562B63053A02439, p0, p1); } // 0x0F71DE29AB2258F1 0xD1FA1BDB
	static void PLAYSTATS_ODDJOB_DONE(Any p0, Any p1, Any p2) { invoke<Void>(0x2A788D80D436EF63, p0, p1, p2); } // 0x69DEA3E9DB727B4C 0xFE14A8EA
	static void PLAYSTATS_PROP_CHANGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE898D406DCBDAA3E, p0, p1, p2, p3); } // 0xBA739D6D5A05D6E7 0x25740A1D
	static void PLAYSTATS_CLOTH_CHANGE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x78FABB1E982F9C4B, p0, p1, p2, p3, p4); } // 0x34B973047A2268B9 0x3AFF9E58
	static void _0x258FB93A2384348F(Any p0, Any p1, Any p2) { invoke<Void>(0x258FB93A2384348F, p0, p1, p2); } // 0xE95C8A1875A02CA4 0x79716890
	static void PLAYSTATS_CHEAT_APPLIED(char* cheat) { invoke<Void>(0x3CF31A501F7D093C, cheat); } // 0x6058665D72302D3F 0x345166F3
	static void _0x8AEB8ACC005D881E(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x8AEB8ACC005D881E, p0, p1, p2, p3); } // 0xF8C54A461C3E11DC 0x04181752
	static void _0xECB642C894EE50BD(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xECB642C894EE50BD, p0, p1, p2, p3); } // 0xF5BB8DAC426A52C0
	static void _0x6B7000A02A7C65C1(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x6B7000A02A7C65C1, p0, p1, p2, p3); } // 0xA736CF7FB7C5BFF4 0x31002201
	static void _0x57AC692AA6CD016B(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x57AC692AA6CD016B, p0, p1, p2, p3); } // 0x14E0B2D1AD1044E0 0xDDD1F1F3
	static void _0xD9F775693E3D2E0A(Any p0, Any* p1) { invoke<Void>(0xD9F775693E3D2E0A, p0, p1); } // 0x90D0622866E80445 0x66FEB701
	static void _0x25AE4D38E1AC8F7B(Any p0) { invoke<Void>(0x25AE4D38E1AC8F7B, p0); } // 0x5DA3A8DE8CB6226F 0x9E2B9522
	static void _0x3DC62D5AE24C9BE7(BOOL p0) { invoke<Void>(0x3DC62D5AE24C9BE7, p0); } // 0xD1032E482629049E
	static void _0x741673D79870AC9D(Any p0, Any p1) { invoke<Void>(0x741673D79870AC9D, p0, p1); } // 0xF4FF020A08BC8863
	static void _0xB5162736EE6CD781(Any* p0) { invoke<Void>(0xB5162736EE6CD781, p0); } // 0x46326E13DA4E0546
	static Any LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Any p0, Any p1) { return invoke<Any>(0xCB4BF21624C6929C, p0, p1); } // 0x117B45156D7EFF2E 0x0A56EE34
	static Any LEADERBOARDS_GET_COLUMN_ID(Any p0, Any p1, Any p2) { return invoke<Any>(0xC63B463C94E93DF1, p0, p1, p2); } // 0xC4B5467A1886EA7E 0x3821A334
	static Any LEADERBOARDS_GET_COLUMN_TYPE(Any p0, Any p1, Any p2) { return invoke<Any>(0x619EECD8A6BC1692, p0, p1, p2); } // 0xBF4FEF46DB7894D3 0x6F2820F4
	static Any LEADERBOARDS_READ_CLEAR_ALL() { return invoke<Any>(0xA3D1C95422428C71); } // 0xA34CB6E6F0DF4A0B 0x233E058A
	static Any LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<Any>(0x1834B514952EAFAA, p0, p1, p2); } // 0x7CCE5C737A665701 0x7090012F
	static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x6B7D89D27946B772, p0, p1, p2); } // 0xAC392C8483342AC2 0xEEB8BF5C
	static Any _0xCFF437210B987103() { return invoke<Any>(0xCFF437210B987103); } // 0xA31FD15197B192BD 0x1789437B
	static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xBFA0B7AAFAA11F0A, p0, p1, p2); } // 0x2FB19228983E832C 0x3AC5B2F1
	static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); } // 0x918B101666F9CB83 0xBD91B136
	static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0x3F06BC86D96EE6BB, p0, p1); } // 0xC30713A383BFBF0E 0x6B553408
	static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); } // 0xA9CDB1E3F0A49883 0xCA931F34
	static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x0E9459038D9E0980, p0, p1, p2); } // 0xBA2C7DB0C129449A 0x1B03F59F
	static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0x28EA533316E320D9, p0, p1, p2); } // 0x5CE587FB5A42C8C4 0xC5B7E685
	static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x7E495D7E07237B0A, p0, p1, p2); } // 0x7EEC7E4F6984A16A 0xAC020C18
	static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0xE3DA55F413656993, p0, p1, p2); } // 0xE662C8B759D08F3C 0xC678B29F
	static BOOL _0x20758B1987CC4F8E(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x20758B1987CC4F8E, p0, p1, p2); } // 0xC38DC1E90D22547C 0x9BEC3401
	static BOOL _0x56D2D85015C0B651(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x56D2D85015C0B651, p0, p1, p2); } // 0xF1AE5DCDBFCA2721
	static BOOL _0xA2B2BD9AD7B4E936(Any* p0) { return invoke<BOOL>(0xA2B2BD9AD7B4E936, p0); } // 0xA0F93D5465B3094D 0xC977D6E2
	static void _0x23F8C8D516889067() { invoke<Void>(0x23F8C8D516889067); } // 0x71B008056E5692D6 0xF2DB6A82
	static BOOL _0xB2B34E469D161F1D(Any p0, Any* p1) { return invoke<BOOL>(0xB2B34E469D161F1D, p0, p1); } // 0x34770B9CE0E03B91 0x766A74FE
	static Any _0xAFE71AB18D8158AC(Any p0, Any p1) { return invoke<Any>(0xAFE71AB18D8158AC, p0, p1); } // 0x88578F6EC36B4A3A 0x6B90E730
	static float _0x1259A4F4D247044F(Any p0, Any p1) { return invoke<float>(0x1259A4F4D247044F, p0, p1); } // 0x38491439B6BA7F7D 0x509A286F
	static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0xE58AD78E35CB23DB, p0); } // 0xAE2206545888AE49 0x5F9DF634
	static void _0x22785BD1FEF81AE7(Any p0, Any p1, float p2) { invoke<Void>(0x22785BD1FEF81AE7, p0, p1, p2); } // 0x0BCA1D2C47B0D269 0x7524E27B
	static void _0xF74CAC0B7B7E8D7B(Any p0, Any p1, Any p2) { invoke<Void>(0xF74CAC0B7B7E8D7B, p0, p1, p2); } // 0x2E65248609523599 0x1C5CCC3A
	static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0x6DB1289C14CEDE80, p0); } // 0xB9BB18E2C40142ED 0x44F7D82B
	static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0x2BFABAA47D6F513F); } // 0xD4B02A6B476E1FDC 0x87F498C1
	static void _0x0EF1C90A7B7F5404(Any p0) { invoke<Void>(0x0EF1C90A7B7F5404, p0); } // 0x8EC74CEB042E7CFF 0x88AE9667
	static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0x9DD0351140834530, p0); } // 0x9C51349BE6CDFE2C 0xFC8A71F3
	static Any LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<Any>(0xE6548A6A71BFD515, p0); } // 0xF04C1C27DA35F6C8 0xEDF02302
	static Any _0xF6C5EA7FDD772EB8(Any p0) { return invoke<Any>(0xF6C5EA7FDD772EB8, p0); } // 0x58A651CD201D89AD 0xCE7CB520
	static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0xA53BDEBFBE349269, p0, p1, p2); } // 0x9120E8DBA3D69273 0xA11289EC
	static void _0xE4A025C0D4FCCAFA(Any p0, Any p1, Any p2) { invoke<Void>(0xE4A025C0D4FCCAFA, p0, p1, p2); } // 0x11FF1C80276097ED 0x4AC39C6C
	static void _0x6E708DE259E04B13(Any p0, float p1, Any p2) { invoke<Void>(0x6E708DE259E04B13, p0, p1, p2); } // 0x30A6614C1F7799B8 0x3E69E7C3
	static void _0x0BE2199B758173D2(Any p0, Any p1, Any p2, Any* p3) { invoke<Void>(0x0BE2199B758173D2, p0, p1, p2, p3); } // 0x6483C25849031C4F 0x2FFD2FA5
	static BOOL _0x0923610C48DE7A2A() { return invoke<BOOL>(0x0923610C48DE7A2A); } // 0x5EAD2BF6484852E4 0x23D70C39
	static void _0xD734E2A0C64EB16A() { invoke<Void>(0xD734E2A0C64EB16A); } // 0xC141B8917E0017EC 0x0AD43306
	static void _0x7D237737F1339251() { invoke<Void>(0x7D237737F1339251); } // 0xB475F27C6A994D65 0xC7DE5C30
	static void _0xCB0E4E476A7FA45B(int value) { invoke<Void>(0xCB0E4E476A7FA45B, value); } // 0xF1A1803D3476F215 0xA3DAC790
	static void _0x274ECCF0CE64E680(int value) { invoke<Void>(0x274ECCF0CE64E680, value); } // 0x38BAAA5DD4C9D19F 0x726FAE66
	static void _0xB5F8DA257E599339(int value) { invoke<Void>(0xB5F8DA257E599339, value); } // 0x55384438FC55AD8E 0xF03895A4
	static void _0x509153F117BB636C(Any p0, Any p1) { invoke<Void>(0x509153F117BB636C, p0, p1); } // 0x723C1CE13FBFDB67 0x4C39CF10
	static void _0xFE180C4F14758445(Any p0, Any p1) { invoke<Void>(0xFE180C4F14758445, p0, p1); } // 0x0D01D20616FC73FB 0x2180AE13
	static void _0x4A5514BF00D6663D(Any p0, float p1) { invoke<Void>(0x4A5514BF00D6663D, p0, p1); } // 0x428EAF89E24F6C36 0xEE292B91
	static void _0x2E707E7B6ADD450C() { invoke<Void>(0x2E707E7B6ADD450C); } // 0x047CBED6F6F8B63C 0xA063CABD
	static BOOL _0xF248832719C65E10(Any* p0, Any* p1) { return invoke<BOOL>(0xF248832719C65E10, p0, p1); } // 0xC980E62E33DF1D5C 0x62C19A3D
	static void _0x8E13B3FDECABC88E() { invoke<Void>(0x8E13B3FDECABC88E); } // 0x6F361B8889A792A3 0x3B4EF322
	static void _0x249679A7E1E74586() { invoke<Void>(0x249679A7E1E74586); } // 0xC847B43F369AC0B5
	static BOOL _0x0B66720A434CB32B(Any* p0) { return invoke<BOOL>(0x0B66720A434CB32B, p0); } // 0xA5C80D8E768A9E66
	static Any _0x58645107388E5023() { return invoke<Any>(0x58645107388E5023); } // 0x9A62EC95AE10E011
	static Any _0x392255336F25277E() { return invoke<Any>(0x392255336F25277E); } // 0x4C89FE2BDEB3F169
	static Any _0x107D9D8276DBE1FF() { return invoke<Any>(0x107D9D8276DBE1FF); } // 0xC6E0E2616A7576BB
	static Any _0xB9F0CEFE989FEF23(Any p0) { return invoke<Any>(0xB9F0CEFE989FEF23, p0); } // 0x5BD5F255321C4AAF
	static Any _0xCDD247F16AE54ABA(Any p0, Any* p1) { return invoke<Any>(0xCDD247F16AE54ABA, p0, p1); } // 0xDEAAF77EB3687E97
	static Any _0x31C11B14E9BA6CA5() { return invoke<Any>(0x31C11B14E9BA6CA5); } // 0xC70DDCE56D0D3A99 0x54E775E0
	static Any _0xF0FA39CB91927313(Any* p0) { return invoke<Any>(0xF0FA39CB91927313, p0); } // 0x886913BBEACA68C1 0xE3F0D62D
	static Any _0x69812D11A0212ECF() { return invoke<Any>(0x69812D11A0212ECF); } // 0x4FEF53183C3C6414
	static Any _0x9AD08E0B819AE52B() { return invoke<Any>(0x9AD08E0B819AE52B); } // 0x567384DFA67029E6
	static BOOL _0x09BA5D20123130CD(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x09BA5D20123130CD, p0, p1, p2); } // 0x3270F67EED31FBC1
	static Any _0x2CE222AEFC497477(Any* p0) { return invoke<Any>(0x2CE222AEFC497477, p0); } // 0xCE5AA445ABA8DEE0
	static void _0x5043F14D6274E5EF() { invoke<Void>(0x5043F14D6274E5EF); } // 0x98E2BC1CA26287C3
	static void _0x7B4B9A167E905F5F() { invoke<Void>(0x7B4B9A167E905F5F); } // 0x629526ABA383BCAA
	static Any _0xDE5BC644DA587321() { return invoke<Any>(0xDE5BC644DA587321); } // 0xB3DA2606774A8E2D
	static void _0x305E571F148D27EA(Any p0) { invoke<Void>(0x305E571F148D27EA, p0); } // 0xDAC073C7901F9E15
	static void _0xD8285A253E43A97D(Any p0) { invoke<Void>(0xD8285A253E43A97D, p0); } // 0xF6792800AC95350D
}

namespace BRAIN
{
	static void ADD_SCRIPT_TO_RANDOM_PED(char* name, Hash model, float p2, float p3) { invoke<Void>(0x8832ABC53E193603, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D
	static void REGISTER_OBJECT_SCRIPT_BRAIN(char* scriptName, Hash p1, int p2, float p3, int p4, int p5) { invoke<Void>(0x21A3853B1999BD89, scriptName, p1, p2, p3, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608
	static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Any p0) { return invoke<BOOL>(0x7D7BF8DC8C822AC1, p0); } // 0xCCBA154209823057 0xBA4CAA56
	static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(Any* p0, float p1, Any p2) { invoke<Void>(0x1A7426360E726981, p0, p1, p2); } // 0x3CDC7136613284BD 0x725D91F7
	static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0x18544C93469391DA); } // 0xC5042CC6F5E3D450 0x2CF305A0
	static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x08140FDBF4FE35B6, brainSet); } // 0x67AA4D73F0CFA86B 0x2765919F
	static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x9A8D97BA4D0092E5, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD
	static void _0x5A475BEA2B6FACF3() { invoke<Void>(0x5A475BEA2B6FACF3); } // 0x0B40ED49D7D6FF84 0x19B27825
	static void _0x2064500141C22D58() { invoke<Void>(0x2064500141C22D58); } // 0x4D953DF78EBF8158 0xF3A3AB08
	static void _0xF1ECEF2C861CE2A4(char* action) { invoke<Void>(0xF1ECEF2C861CE2A4, action); } // 0x6D6840CEE8845831 0x949FE53E
	static void _0xCA618AC3B72C5421(char* action) { invoke<Void>(0xCA618AC3B72C5421, action); } // 0x6E91B04E08773030 0x29CE8BAA
}

namespace MOBILE
{
	static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0xBC81D035C4A37339, phoneType); } // 0xA4E8E696C532FBC7 0x5BBC5E23
	static void DESTROY_MOBILE_PHONE() { invoke<Void>(0x9D1280B50EF55FF2); } // 0x3BC861DF703E5097 0x1A65037B
	static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0x3FB232A3CD8CE8DA, scale); } // 0xCBDD322A73D6D932 0x09BCF1BE
	static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xB0E0125CA07D4D7A, rotX, rotY, rotZ, p3); } // 0xBB779C0CA917E865 0x209C28CF
	static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Any p1) { invoke<Void>(0x8C25E39279825389, rotation, p1); } // 0x1CEFB61F193070AE 0x17A29F23
	static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xD61764696C2259C9, posX, posY, posZ); } // 0x693A5C6D6734085B 0x841800B3
	static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0x2EA67F1118848733, position); } // 0x584FDFDA48805B86 0xB2E1E1A0
	static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0x1F04461B4810CF7F, toggle); } // 0xF511F759238A5122 0x29828690
	static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0x5B13E4CD2877FE23); } // 0xC4E2813898C97A4B 0x5F978584
	static void _MOVE_FINGER(int p0) { invoke<Void>(0xEDC530BAFD80E449, p0); } // 0x95C9E72F3D7DEC9B
	static void _SET_PHONE_LEAN(BOOL Toggle) { invoke<Void>(0xDD624579F5998ACB, Toggle); } // 0x44E44169EF70138E
	static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0x891C8442BDCD563B, p0, p1); } // 0xFDE8F069C542D126 0x234C1AE9
	static void _0x39755BA867F7EBFD(BOOL p0) { invoke<Void>(0x39755BA867F7EBFD, p0); } // 0x015C49A93E3E086E 0x4479B304
	static void _0x1BAE2480431B97EC(BOOL toggle) { invoke<Void>(0x1BAE2480431B97EC, toggle); } // 0xA2CCBE62CD4C91A4 0xC273BB4D
	static void _0x2E71EA7B476EF887(float p0) { invoke<Void>(0x2E71EA7B476EF887, p0); } // 0x1B0B4AEED5B9B41C
	static void _0xC6311A9653C3D14E(float p0) { invoke<Void>(0xC6311A9653C3D14E, p0); } // 0x53F4892D18EC90A4
	static void _0xDED2115481C45E8D(float p0) { invoke<Void>(0xDED2115481C45E8D, p0); } // 0x3117D84EFA60F77B
	static void _0x72E4C6C8C6D3E0EF(float p0) { invoke<Void>(0x72E4C6C8C6D3E0EF, p0); } // 0x15E69E2802C24B8D
	static void _0xB618349F9B95B7E7(float p0) { invoke<Void>(0xB618349F9B95B7E7, p0); } // 0xAC2890471901861C
	static void _0xA0670A827E1E9AD6(float p0) { invoke<Void>(0xA0670A827E1E9AD6, p0); } // 0xD6ADE981781FCA09
	static void _0x9D2DCBD984834E41(float p0) { invoke<Void>(0x9D2DCBD984834E41, p0); } // 0xF1E22DC13F5EEBAD
	static void _0xCC49CE3094AAAF50(float p0) { invoke<Void>(0xCC49CE3094AAAF50, p0); } // 0x466DA42C89865553 0x66DCD9D2
	static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xA6F8500A9D87B958, entity); } // 0x439E9BC95B7E7FBE 0xBEA88097
	static void GET_MOBILE_PHONE_RENDER_ID(Any* renderId) { invoke<Void>(0x6B677D523F73FDF8, renderId); } // 0xB4A53E05F68B6FA1 0x88E4FECE
	static BOOL _0x09E31104969F731A(char* name) { return invoke<BOOL>(0x09E31104969F731A, name); } // 0xBD4D7EAF8A30F637
	static BOOL _0x69C2DD56B8646BE9(Hash hash) { return invoke<BOOL>(0x69C2DD56B8646BE9, hash); } // 0x247F0F73A182EA0B
}

namespace APP
{
	static BOOL APP_DATA_VALID() { return invoke<BOOL>(0x7845655F11DFF685); } // 0x846AA8E7D55EE5B6 0x72BDE002
	static int APP_GET_INT(char* property) { return invoke<int>(0x98788D1BF2F4457E, property); } // 0xD3A58A12C77D9D4B 0x2942AAD2
	static float APP_GET_FLOAT(char* property) { return invoke<float>(0xA7B593A4ECD04E7B, property); } // 0x1514FB24C02C2322 0xD87F3A1C
	static char* APP_GET_STRING(char* property) { return invoke<char*>(0xC922431436B83A3B, property); } // 0x749B023950D2311C 0x849CEB80
	static void APP_SET_INT(char* property, int value) { invoke<Void>(0x609DDFE9D19587C8, property, value); } // 0x607E8E3D3E4F9611 0x1B509C32
	static void APP_SET_FLOAT(char* property, float value) { invoke<Void>(0x37801E86E4DFAE7D, property, value); } // 0x25D7687C68E0DAA4 0xF3076135
	static void APP_SET_STRING(char* property, char* value) { invoke<Void>(0x6C7234EDAE7AC63A, property, value); } // 0x3FF2FCEC4B7721B4 0x23DF19A8
	static void APP_SET_APP(char* appName) { invoke<Void>(0x029E6666B84708C9, appName); } // 0xCFD0406ADAF90D2B 0x8BAC4146
	static void APP_SET_BLOCK(char* blockName) { invoke<Void>(0x67DCFAA89F93F98B, blockName); } // 0x262AB456A3D21F93 0xC2D54DD9
	static void APP_CLEAR_BLOCK() { invoke<Void>(0x6F5608FBDE1AF62C); } // 0x5FE1DF3342DB7DBA 0xDAB86A18
	static void APP_CLOSE_APP() { invoke<Void>(0x66FF38832BC89342); } // 0xE41C65E07A5F05FC 0x03767C7A
	static void APP_CLOSE_BLOCK() { invoke<Void>(0x6AA214C73A76C1B4); } // 0xE8E3FCF72EAC0EF8 0xED97B202
	static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xDE93E20B6CE293A9); } // 0x71EEE69745088DA0 0xD368BA15
	static BOOL APP_HAS_SYNCED_DATA(char* appName) { return invoke<BOOL>(0xB1B6F1CE851B5818, appName); } // 0xCA52279A7271517F 0x1DE2A63D
	static void APP_SAVE_DATA() { invoke<Void>(0xD80675746E58A6A8); } // 0x95C5D356CDA6E85F 0x84A3918D
	static Any APP_GET_DELETED_FILE_STATUS() { return invoke<Any>(0x3F4DB7504BC9436B); } // 0xC9853A2BE3DED1A6 0x784D550B
	static BOOL APP_DELETE_APP_DATA(char* appName) { return invoke<BOOL>(0x3EE5EE64607EBFBF, appName); } // 0x44151AEA95C8A003 0x2A2FBD1C
}

namespace TIME
{
	static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xC04B4A958D92C873, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14
	static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0x8134078E6B902611, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124
	static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xB7EABC296A96C6CA, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C
	static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xBC42CCB3FF14B1E8, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D
	static int GET_CLOCK_HOURS() { return invoke<int>(0x7C833E3C6EEE41E0); } // 0x25223CA6B4D20B7F 0x7EF8316F
	static int GET_CLOCK_MINUTES() { return invoke<int>(0x1B24A2CA27443F7B); } // 0x13D2B8ADD79640F2 0x94AAC486
	static int GET_CLOCK_SECONDS() { return invoke<int>(0x0CE219089BDB83C5); } // 0x494E97C2EF27C470 0x099C927E
	static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xB147EF43C3A41CF3, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94
	static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xB88AB80739AA20D3); } // 0xD972E4BD7AEB235F 0x84E4A289
	static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0x2DA3502053F9E535); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7
	static int GET_CLOCK_MONTH() { return invoke<int>(0xEB4EA596232DA76E); } // 0xBBC72712E80257A1 0x3C48A3D5
	static int GET_CLOCK_YEAR() { return invoke<int>(0xB99227ECC84A576C); } // 0x961777E64BDAF717 0xB8BECF15
	static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xABF7FAFC2C7748E6); } // 0x2F8B4D1C595B11DB 0x3B74095C
	static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x4C16275D99C0E91D, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281
	static void _GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xFCAEA5A2D1D79756, year, month, day, hour, minute, second); } // 0x8117E09A19EEF4D3
	static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xF3DD88DA4BB54D51, year, month, day, hour, minute, second); } // 0x50C7A99057A69748 0x124BCFA2
}

namespace PATHFIND
{
	static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown1, BOOL unknown2) { invoke<Void>(0x39895086D78BEA60, x1, y1, z1, x2, y2, z2, unknown1, unknown2); } // 0xBF1A602B5BA52FEE 0xEBC7B918
	static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float angle, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0x4D067011AB7A4264, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); } // 0x1A5AA1208AF5DB59 0xBD088F4B
	static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL unknown) { invoke<Void>(0xE822C342FB4392F1, x1, y1, z1, x2, y2, z2, unknown); } // 0x34F060F4BF92E018 0x2148EA84
	static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xDDF72D11359E25EC, x, y, z, onGround, outPosition, flags); } // 0xB61C8E878A4199CA 0xB370270A
	static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int p4, float p5, int p6) { return invoke<BOOL>(0x45E3C087F9B6E0A3, x, y, z, outPosition, p4, p5, p6); } // 0x240A18690AE96513 0x6F5F1E6C
	static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return invoke<BOOL>(0x2177A5568D864239, x, y, z, outPosition, unknown1, unknown2); } // 0x2EABE3B06F58C1BE 0x04B5F15B
	static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int p5, float p6, int p7) { return invoke<BOOL>(0xD3B9E1270A1D5481, x, y, z, outPosition, outHeading, p5, p6, p7); } // 0xFF071FB798B803B0 0x8BD5759B
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return invoke<BOOL>(0x534DA90AB4BE425C, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); } // 0xE50E52416CCF948B 0xF125BFCC
	static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, Any p3, Any p4, float p5, float p6) { return invoke<int>(0x194F830AE4D9E6FB, x, y, z, p3, p4, p5, p6); } // 0x22D7275A79FE8215 0x3F358BEA
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return invoke<BOOL>(0xE67882ADA97B9D94, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); } // 0x80CA6A8B6C094CC4 0x7349C856
	static Any GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return invoke<Any>(0xB1B73F5D89903834, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); } // 0x6448050E9C2A7207 0xC1AEB88D
	static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int p9, Any p10, Any p11) { return invoke<BOOL>(0x2FA95F9361D41DF7, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, p9, p10, p11); } // 0x45905BE8654AE067 0x928A4DEC
	static BOOL GET_VEHICLE_NODE_PROPERTIES(float p0, float p1, float p2, Any* p3, Any* p4) { return invoke<BOOL>(0x6778910539806944, p0, p1, p2, p3, p4); } // 0x0568566ACBB5DEDC 0xCC90110B
	static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0x608885034BBFCDB9, vehicleNodeId); } // 0x1EAF30FCFBF5AF74 0x57DFB1EF
	static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0x399284B4E8B22749, nodeId, outPosition); } // 0x703123E5E7D429C2 0xE38E252D
	static BOOL _GET_SUPPORTS_GPS_ROUTE_FLAG(int nodeID) { return invoke<BOOL>(0x9023A1321CE38A1F, nodeID); } // 0xA2AE5C478B96E3B6 0xEE4B1219
	static BOOL _GET_IS_SLOW_ROAD_FLAG(int nodeID) { return invoke<BOOL>(0x412E24001F8D483B, nodeID); } // 0x4F5070AA58F69279 0x56737A3C
	static Any GET_CLOSEST_ROAD(float x, float y, float z, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return invoke<Any>(0x0164913B5CACDF6B, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x132F52BBA570FE92 0x567B0E11
	static BOOL LOAD_ALL_PATH_NODES(BOOL p0) { return invoke<BOOL>(0x81165810EAF65DFE, p0); } // 0x80E4A6EDDB0BE8D9 0xC66E28C3
	static void _0xDCDFE043A8EBA2A8(BOOL p0) { invoke<Void>(0xDCDFE043A8EBA2A8, p0); } // 0x228E5C6AD4D74BFD 0xD6A3B458
	static BOOL _0x5870CB0276CF5667(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x5870CB0276CF5667, p0, p1, p2, p3); } // 0xF7B79A50B905A30D 0x86E80A17
	static BOOL _0x1A10579F8DE3BF6B(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x1A10579F8DE3BF6B, p0, p1, p2, p3); } // 0x07FB139B592FA687 0x2CDA5012
	static void SET_ROADS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x3EB6E5FC1FA6912C, p0, p1, p2, p3, p4, p5); } // 0x1EE7063B80FFC77C 0x86AC4A85
	static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6) { invoke<Void>(0x8BF2AD7A954B9A59, x1, y1, z1, x2, y2, z2, p6); } // 0x0027501B9F3B407E 0x9DB5D209
	static void _0xB976631E7DEBC745(float p0) { invoke<Void>(0xB976631E7DEBC745, p0); } // 0x0B919E1FB47CC4E0 0x3C5085E4
	static void _0x039DD089CC832EF2(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x039DD089CC832EF2, p0, p1, p2, p3, p4, p5, p6); } // 0xAA76052DDA9BFC3E 0xD0F51299
	static void SET_PED_PATHS_BACK_TO_ORIGINAL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x4EC9EE494D8F07E5, p0, p1, p2, p3, p4, p5); } // 0xE04B48F2CC926253 0x3F1ABDA4
	static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, float* heading) { return invoke<BOOL>(0x2DB43013283E1BFD, x, y, z, radius, p4, p5, p6, outPosition, heading); } // 0x93E0DB8440B73A7D 0xAD1476EA
	static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xC855619F2A035AE6, x, y, z, streetName, crossingRoad); } // 0x2EB41072B4C1E4C0 0xDEBEEFCF
	static Any GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, Any p3, Any p4, Vehicle* vehicle, Any p6) { return invoke<Any>(0x370F28AA17D27655, x, y, z, p3, p4, vehicle, p6); } // 0xF90125F1F79ECDF8 0xED35C094
	static void SET_IGNORE_NO_GPS_FLAG(BOOL p0) { invoke<Void>(0x7195FF09321CD5EC, p0); } // 0x72751156E7678833 0xB72CF194
	static void _0x67F8D821482D96AA(BOOL p0) { invoke<Void>(0x67F8D821482D96AA, p0); } // 0x1FC289A0C3FF470F 0x90DF7A4C
	static void SET_GPS_DISABLED_ZONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xFD7070B5E12E1AF5, p0, p1, p2, p3, p4, p5); } // 0xDC20483CD3DD5201 0x720B8073
	static Any _0xAF3B620AC0B3CFC3() { return invoke<Any>(0xAF3B620AC0B3CFC3); } // 0xBBB45C3CF5C8AA85 0x4B770634
	static Any _0xB1E9A97866124B75() { return invoke<Any>(0xB1E9A97866124B75); } // 0x869DAACBBE9FA006 0x286F82CC
	static Any _0xBDD6CC4AE1223F7F(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0xBDD6CC4AE1223F7F, p0, p1, p2, p3, p4); } // 0x16F46FB18C8009E4 0xF6422F9A
	static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Entity entity) { return invoke<BOOL>(0x2180E7164F4B96D2, x, y, z, entity); } // 0x125BF4ABFC536B09 0xCF198055
	static Any _0xB478056F828FBEE5() { return invoke<Any>(0xB478056F828FBEE5); } // 0xD3A6A0EF48823A8C
	static void _0x098A50D4B1AAB695(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x098A50D4B1AAB695, p0, p1, p2, p3, p4, p5, p6); } // 0xD0BC1C6FB18EE154
	static void _0x13A01AD8839CFC79(Any p0) { invoke<Void>(0x13A01AD8839CFC79, p0); } // 0x2801D0012266DF07
	static void ADD_NAVMESH_REQUIRED_REGION(float p0, float p1, float p2) { invoke<Void>(0x5286D2CF4C3E5799, p0, p1, p2); } // 0x387EAD7EE42F6685 0x12B086EA
	static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0x832E69A1564ABEA4); } // 0x916F0A3CDEC3445E 0x637BB680
	static void DISABLE_NAVMESH_IN_AREA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x60C665492B5CF05B, p0, p1, p2, p3, p4, p5, p6); } // 0x4C8872D8CDBE1B8B 0x6E37F132
	static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0x94C8FB4E068E86B1); } // 0x8415D95B194A3AEA 0x34C4E789
	static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x1295F66E19F5CD2E, x1, y1, z1, x2, y2, z2); } // 0xF813C7E63F9062A5 0x4C2BA99E
	static Any _0x509471E82DC731F8(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0x509471E82DC731F8, p0, p1, p2, p3, p4, p5); } // 0x01708E8DD3FF8C65
	static Any ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<Any>(0xC94877F1D01BEFB9, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0xFCD5C8E06E502F5A 0x2952BA56
	static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0x908A3B84BBC76C76, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x109E99373F290687 0x4E9776D0
	static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0x1FDB9F077F1FC25C, p0); } // 0x46399A7895957C0E 0x098602B0
	static BOOL _0x17FCDE390FBC3959(Any p0) { return invoke<BOOL>(0x17FCDE390FBC3959, p0); } // 0x0EAEB0DB4B132399 0x4B67D7EE
	static float _0x62EBB6953C1EF51D(float p0, float p1) { return invoke<float>(0x62EBB6953C1EF51D, p0, p1); } // 0x29C24BFBED8AB8FB 0x3FE8C5A0
	static float _0x1E13FDA2D0420D4D(float p0, float p1, float p2, float p3) { return invoke<float>(0x1E13FDA2D0420D4D, p0, p1, p2, p3); } // 0x8ABE8608576D9CE3 0x3ED21C90
	static float _0xE993E72E420F880A(float p0, float p1) { return invoke<float>(0xE993E72E420F880A, p0, p1); } // 0x336511A34F2E5185 0xA07C5B7D
	static float _0x55F378BE833373BA(float p0, float p1, float p2, float p3) { return invoke<float>(0x55F378BE833373BA, p0, p1, p2, p3); } // 0x3599D741C9AC6310 0x76751DD4
	static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x394C8BB1EB6CFB4D, x1, y1, z1, x2, y2, z2); } // 0xADD95C7005C4A197 0xB114489B
}

namespace CONTROLS
{
	static BOOL IS_CONTROL_ENABLED(int index, int control) { return invoke<BOOL>(0xAC0C4A44E7AB491E, index, control); } // 0x1CEA6BFDF248E5D9 0x9174AF84
	static BOOL IS_CONTROL_PRESSED(int index, int control) { return invoke<BOOL>(0x6BBF308E0A0F9AD4, index, control); } // 0xF3A21BCD95725A4A 0x517A4384
	static BOOL IS_CONTROL_RELEASED(int index, int control) { return invoke<BOOL>(0x5365178E9D5A2E7C, index, control); } // 0x648EE3E7F38877DD 0x1F91A06E
	static BOOL IS_CONTROL_JUST_PRESSED(int index, int control) { return invoke<BOOL>(0x958B4351DD28B142, index, control); } // 0x580417101DDB492F 0x4487F579
	static BOOL IS_CONTROL_JUST_RELEASED(int index, int control) { return invoke<BOOL>(0xEA7F1ED415FFE2E8, index, control); } // 0x50F940259D3841E6 0x2314444B
	static int GET_CONTROL_VALUE(int index, int control) { return invoke<int>(0x35C548C4B4C28DDF, index, control); } // 0xD95E79E8686D2C27 0xC526F3C6
	static float GET_CONTROL_NORMAL(int index, int control) { return invoke<float>(0x61BD13BBFFA4A7AD, index, control); } // 0xEC3C9B8D5327B563 0x5DE226A5
	static void _0xA0644295A8C137BF(BOOL p0) { invoke<Void>(0xA0644295A8C137BF, p0); } // 0x5B73C77D9EB66E24
	static float _0x76850CFBD68BA9D4(Any p0, Any p1) { return invoke<float>(0x76850CFBD68BA9D4, p0, p1); } // 0x5B84D09CEC5209C5 0xC49343BB
	static BOOL _SET_CONTROL_NORMAL(int index, int control, float amount) { return invoke<BOOL>(0xD1F3049CE312A6CD, index, control, amount); } // 0xE8A25867FBA3B05E
	static BOOL IS_DISABLED_CONTROL_PRESSED(int index, int control) { return invoke<BOOL>(0x2E080842BD1CBD38, index, control); } // 0xE2587F8CBBD87B1D 0x32A93544
	static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int index, int control) { return invoke<BOOL>(0x28BB6250B86A5CA5, index, control); } // 0x91AEF906BCA88877 0xEE6ABD32
	static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int index, int control) { return invoke<BOOL>(0x8B4FAB242D8FEF11, index, control); } // 0x305C8DCD79DA8B0F 0xD6A679E1
	static float GET_DISABLED_CONTROL_NORMAL(int control, int variable) { return invoke<float>(0x9CF7E896E5D8A141, control, variable); } // 0x11E65974A982637C 0x66FF4FAA
	static float _0x7A016BE57B7A580F(Any p0, Any p1) { return invoke<float>(0x7A016BE57B7A580F, p0, p1); } // 0x4F8A26A890FD62FB 0xF2A65A4C
	static Any _0x7432C76A3240F228(Any p0) { return invoke<Any>(0x7432C76A3240F228, p0); } // 0xD7D22F5592AED8BA 0x0E8EF929
	static BOOL _GET_LAST_INPUT_METHOD(int index) { return invoke<BOOL>(0x7EDB1AFBE755EC7A, index); } // 0xA571D46727E2B718
	static BOOL _0x122DCA017A140FA8(Any p0) { return invoke<BOOL>(0x122DCA017A140FA8, p0); } // 0x13337B38DB572509
	static BOOL _0x57DCE283775C55C6(float p0, float p1) { return invoke<BOOL>(0x57DCE283775C55C6, p0, p1); } // 0xFC695459D4D0E219
	static BOOL _0xF0AEFA273FA4AD4A(Any p0) { return invoke<BOOL>(0xF0AEFA273FA4AD4A, p0); } // 0x23F09EADC01449D6
	static Any _0x2C46E805556A1F00(Any p0) { return invoke<Any>(0x2C46E805556A1F00, p0); } // 0x6CD79468A1E595C6
	static char* _GET_CONTROL_ACTION_NAME(int index, int control, BOOL p2) { return invoke<char*>(0xE77F6122F2596EB4, index, control, p2); } // 0x0499D7B09FC9B407 0x3551727A
	static Any _0xA2A8F65D8724B71E(Any p0, Any p1, BOOL p2) { return invoke<Any>(0xA2A8F65D8724B71E, p0, p1, p2); } // 0x80C2FD58D720C801 0x3EE71F6A
	static void _0x513CFCD71D647059(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x513CFCD71D647059, p0, p1, p2, p3); } // 0x8290252FFF36ACB5
	static void _0x5481EEEA9E878882(Any p0) { invoke<Void>(0x5481EEEA9E878882, p0); } // 0xCB0360EFEFB2580D
	static void SET_PAD_SHAKE(int p0, int duration, int frequency) { invoke<Void>(0x738D4328EF7650AF, p0, duration, frequency); } // 0x48B3886C1358D0D5 0x5D38BD2F
	static void _0xC55787A5C8FCD7D7(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC55787A5C8FCD7D7, p0, p1, p2, p3, p4); } // 0x14D29BB12D47F68C
	static void STOP_PAD_SHAKE(Any p0) { invoke<Void>(0x4546B79B6E701849, p0); } // 0x38C16A305E8CDC8D 0x8F75657E
	static void _0xC1143742062ABBB4(Any p0, Any p1) { invoke<Void>(0xC1143742062ABBB4, p0, p1); } // 0xF239400E16C23E08 0x7D65EB6E
	static void _0x085E37A6FE3FDB6F(Any p0) { invoke<Void>(0x085E37A6FE3FDB6F, p0); } // 0xA0CEFCEA390AAB9B
	static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xDA216D9ACC721087); } // 0x77B612531280010D 0x313434B2
	static Any _0xB6A92B338EEF1375() { return invoke<Any>(0xB6A92B338EEF1375); } // 0xE1615EC03B3BB4FD
	static Any GET_LOCAL_PLAYER_AIM_STATE() { return invoke<Any>(0x12758BAD54D39F9C); } // 0xBB41AFBBBC0A0287 0x81802053
	static Any _0x25BF38403308BD80() { return invoke<Any>(0x25BF38403308BD80); } // 0x59B9A7AF4C95133C
	static Any _0x39525AECCC88B068() { return invoke<Any>(0x39525AECCC88B068); } // 0x0F70731BACCFBB96
	static Any _0x269A9297DD4C35DB() { return invoke<Any>(0x269A9297DD4C35DB); } // 0xFC859E2374407556
	static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL p0) { invoke<Void>(0x976AE56D13973EC1, p0); } // 0x798FDEB5B1575088 0xA86BD91F
	static void SET_INPUT_EXCLUSIVE(int index, int control) { invoke<Void>(0x9F2D8D5B57CF6622, index, control); } // 0xEDE476E5EE29EDB1 0x4E8E29E6
	static void DISABLE_CONTROL_ACTION(int index, int control, BOOL disable) { invoke<Void>(0x8CCCC48313B0F20F, index, control, disable); } // 0xFE99B66D079CF6BC 0x3800C0DC
	static void ENABLE_CONTROL_ACTION(int index, int control, BOOL enable) { invoke<Void>(0x5D1D27F205B40569, index, control, enable); } // 0x351220255D64C155 0xD2753551
	static void DISABLE_ALL_CONTROL_ACTIONS(int index) { invoke<Void>(0x2DABA7299541939E, index); } // 0x5F4B6931816E599B 0x16753CF4
	static void ENABLE_ALL_CONTROL_ACTIONS(int index) { invoke<Void>(0x655AD1999D43A4A6, index); } // 0xA5FFE9B05F199DE7 0xFC2F119F
	static BOOL _0x5B9F45539A010039(char* p0) { return invoke<BOOL>(0x5B9F45539A010039, p0); } // 0x3D42B92563939375 0xD2C80B2E
	static BOOL _0xC93C8F62104A7559(char* p0) { return invoke<BOOL>(0xC93C8F62104A7559, p0); } // 0x4683149ED1DDE7A1 0xBBFC9050
	static void _0x5F5E7A7EABA4F11F() { invoke<Void>(0x5F5E7A7EABA4F11F); } // 0x643ED62D5EA3BEBD 0x42140FF9
	static void _0xC0206131733ACF5A(int index) { invoke<Void>(0xC0206131733ACF5A, index); } // 0x7F4724035FDCA1DD 0x2CEDE6C5
}

namespace DATAFILE
{
	static void _0xEFA62F9B6CC76891(Any p0) { invoke<Void>(0xEFA62F9B6CC76891, p0); } // 0xAD6875BBC0FC899C 0x621388FF
	static void _0xAAF84C45EBA36E55() { invoke<Void>(0xAAF84C45EBA36E55); } // 0x6CC86E78358D5119
	static BOOL _0xB6186EC539CDB0A0(Any p0) { return invoke<BOOL>(0xB6186EC539CDB0A0, p0); } // 0xFCCAE5B92A830878
	static BOOL _0xF018A2B9697A0C86(Any p0) { return invoke<BOOL>(0xF018A2B9697A0C86, p0); } // 0x15FF52B809DB2353
	static BOOL _0x94518BDD027A400D(Any p0) { return invoke<BOOL>(0x94518BDD027A400D, p0); } // 0xF8CC1EBE0B62E29F
	static BOOL _0xF555109FFCE0F426(Any p0) { return invoke<BOOL>(0xF555109FFCE0F426, p0); } // 0x22DA66936E0FFF37 0xB41064A4
	static BOOL _0x6B357D1B682E71DB(Any p0) { return invoke<BOOL>(0x6B357D1B682E71DB, p0); } // 0x8F5EA1C01D65A100 0x9DB63CFF
	static BOOL _0xAC98687C0E88762F(char* p0, BOOL p1, char* p2, Any* p3, Any* p4, char* type, BOOL p6) { return invoke<BOOL>(0xAC98687C0E88762F, p0, p1, p2, p3, p4, type, p6); } // 0xC84527E235FCA219 0xF09157B0
	static BOOL _0xB4920853A16CA602(char* p0, char* p1, char* p2, char* p3, BOOL p4) { return invoke<BOOL>(0xB4920853A16CA602, p0, p1, p2, p3, p4); } // 0xA5EFC3E847D60507 0xD96860FC
	static BOOL _0x8ACDA859277C262F(char* p0, Any* p1, BOOL p2, Any* p3, Any* p4, Any* p5, char* type) { return invoke<BOOL>(0x8ACDA859277C262F, p0, p1, p2, p3, p4, p5, type); } // 0x648E7A5434AF7969 0x459F2683
	static BOOL _0x58E86917895A1661(char* p0, char* p1, char* p2, char* p3, char* type) { return invoke<BOOL>(0x58E86917895A1661, p0, p1, p2, p3, type); } // 0x4645DE9980999E93 0xDBB83E2B
	static BOOL _0x731F8F4B5757A6E7(char* p0, float p1, char* type) { return invoke<BOOL>(0x731F8F4B5757A6E7, p0, p1, type); } // 0x692D808C34A82143 0xBB6321BD
	static BOOL _0x555A40B1E31A3100(int p0) { return invoke<BOOL>(0x555A40B1E31A3100, p0); } // 0xA69AC4ADE82B57A4 0xE8D56DA2
	static BOOL _0x4547608B39C4F738(int p0, BOOL p1) { return invoke<BOOL>(0x4547608B39C4F738, p0, p1); } // 0x9CB0BFA7A9342C3D 0xCB6A351E
	static BOOL _0x6A440F86CD0D0AB9(int p0) { return invoke<BOOL>(0x6A440F86CD0D0AB9, p0); } // 0x52818819057F2B40 0xA4D1B30E
	static BOOL _0xA44EB0728D156BFE(int p0) { return invoke<BOOL>(0xA44EB0728D156BFE, p0); } // 0x01095C95CD46B624 0xB8515B2F
	static BOOL _LOAD_UGC_FILE(char* filename) { return invoke<BOOL>(0x15D2D82B502BAFEF, filename); } // 0xC5238C011AF405E4 0x660C468E
	static void DATAFILE_CREATE() { invoke<Void>(0xFE95F43141FDEB03); } // 0xD27058A1CA2B13EE 0x95F8A221
	static void DATAFILE_DELETE() { invoke<Void>(0x1D4E554E9AA32C06); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A
	static void _0x4836501C523A733C() { invoke<Void>(0x4836501C523A733C); } // 0x2ED61456317B8178 0x4E03F632
	static void _0x18AA297376EDC45F() { invoke<Void>(0x18AA297376EDC45F); } // 0xC55854C7D7274882 0xF11F956F
	static Any* _0xC57D1BAA15165F82() { return invoke<Any*>(0xC57D1BAA15165F82); } // 0x906B778CA1DC72B6 0x86DDF9C2
	static BOOL _0xBD811A9004F63AC1(char* filename) { return invoke<BOOL>(0xBD811A9004F63AC1, filename); } // 0x83BCCE3224735F05 0x768CBB35
	static BOOL _0x9FC1477EA3F6FA79(Any* p0) { return invoke<BOOL>(0x9FC1477EA3F6FA79, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7
	static BOOL _0x11ED867E5A37BE49() { return invoke<BOOL>(0x11ED867E5A37BE49); } // 0xBEDB96A7584AA8CF 0x5DCD0796
	static void _OBJECT_VALUE_ADD_BOOLEAN(Any* objectData, char* key, BOOL value) { invoke<Void>(0x74396EB3FB474B44, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B
	static void _OBJECT_VALUE_ADD_INTEGER(Any* objectData, char* key, int value) { invoke<Void>(0xBCB46DFFA34F2037, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A
	static void _OBJECT_VALUE_ADD_FLOAT(Any* objectData, char* key, float value) { invoke<Void>(0xA8D379B31B96DDC4, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF
	static void _OBJECT_VALUE_ADD_STRING(Any* objectData, char* key, char* value) { invoke<Void>(0xC9F4B51D83501F4F, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C
	static void _OBJECT_VALUE_ADD_VECTOR3(Any* objectData, char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0x7528C31ADB88B988, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C
	static Any* _OBJECT_VALUE_ADD_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0xE01EDCA692F3B668, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F
	static Any* _OBJECT_VALUE_ADD_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0x59289C38B5DAA573, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D
	static BOOL _OBJECT_VALUE_GET_BOOLEAN(Any* objectData, char* key) { return invoke<BOOL>(0x2F917C1CC9B02803, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872
	static int _OBJECT_VALUE_GET_INTEGER(Any* objectData, char* key) { return invoke<int>(0x52C0A0D449242E7F, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693
	static float _OBJECT_VALUE_GET_FLOAT(Any* objectData, char* key) { return invoke<float>(0x3F71454B495B9572, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4
	static char* _OBJECT_VALUE_GET_STRING(Any* objectData, char* key) { return invoke<char*>(0x2A351F7A840A6CB7, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC
	static Vector3 _OBJECT_VALUE_GET_VECTOR3(Any* objectData, char* key) { return invoke<Vector3>(0xAFB5294AE24A27B0, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A
	static Any* _OBJECT_VALUE_GET_OBJECT(Any* objectData, char* key) { return invoke<Any*>(0x6549B522864C1BBF, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D
	static Any* _OBJECT_VALUE_GET_ARRAY(Any* objectData, char* key) { return invoke<Any*>(0x56CC205BE71FFB4B, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00
	static int _OBJECT_VALUE_GET_TYPE(Any* objectData, char* key) { return invoke<int>(0x99AECDC2FD623799, objectData, key); } // 0x031C55ED33227371 0x2678342A
	static void _ARRAY_VALUE_ADD_BOOLEAN(Any* arrayData, BOOL value) { invoke<Void>(0xB98D56D601CE560F, arrayData, value); } // 0xF8B0F5A43E928C76 0x08174B90
	static void _ARRAY_VALUE_ADD_INTEGER(Any* arrayData, int value) { invoke<Void>(0x48A89D01F2808BA2, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36
	static void _ARRAY_VALUE_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0x9FEC0680CA9EB79E, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123
	static void _ARRAY_VALUE_ADD_STRING(Any* arrayData, char* value) { invoke<Void>(0xAA3A63DB2B664EAF, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350
	static void _ARRAY_VALUE_ADD_VECTOR3(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0x3CCFBFAFB2829AAA, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6
	static Any* _ARRAY_VALUE_ADD_OBJECT(Any* arrayData) { return invoke<Any*>(0x13BA6181888E376A, arrayData); } // 0x6889498B3E19C797 0xC174C71B
	static BOOL _ARRAY_VALUE_GET_BOOLEAN(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xB5BD728740095E6F, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921
	static int _ARRAY_VALUE_GET_INTEGER(Any* arrayData, int arrayIndex) { return invoke<int>(0x1F25BA7A7199E844, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC
	static float _ARRAY_VALUE_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xDCD49B2FE898E250, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2
	static char* _ARRAY_VALUE_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<char*>(0x05643A91CC2575BA, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6
	static Vector3 _ARRAY_VALUE_GET_VECTOR3(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0x30AED0650E8A9700, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55
	static Any* _ARRAY_VALUE_GET_OBJECT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0x75B3433EEE831C6F, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278
	static int _ARRAY_VALUE_GET_SIZE(Any* arrayData) { return invoke<int>(0x5845CF83B80BC79F, arrayData); } // 0x065DB281590CEA2D 0xA8A21766
	static int _ARRAY_VALUE_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xCB0CAEEBDC4CAEAD, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8
}

namespace FIRE
{
	static Any START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<Any>(0xBAAEB2E3F47DCADA, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357
	static void REMOVE_SCRIPT_FIRE(Any scriptHandle) { invoke<Void>(0x1039802E4B34660F, scriptHandle); } // 0x7FF548385680673F 0x6B21FE26
	static Any START_ENTITY_FIRE(Entity entity) { return invoke<Any>(0x37F326B6036066B8, entity); } // 0xF6A9D9708F6F23DF 0x8928428E
	static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0x47C2E9B1886B0616, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066
	static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0x9DD85FBDD5BC3BF1, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F
	static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0x743D96D854EFA6C5, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7
	static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0x86F1B61A4BF04972, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205
	static BOOL GET_CLOSEST_FIRE_POS(Entity* fire, float x, float y, float z) { return invoke<BOOL>(0x61D41C6972DC905F, fire, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47
	static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xDD20AC898717225A, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0xE3AD2BDBAEE269AC 0x10AF5258
	static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x8B3272BE7CD8B19C, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67
	static void _ADD_SPECFX_EXPLOSION(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xC87E65CD47C513BA, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x36DD3FE58B5E5212 0xCF358946
	static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x02A846D3397805C3, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B
	static Any _0xFD859DAB921728B4(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<Any>(0xFD859DAB921728B4, p0, p1, p2, p3, p4, p5, p6); } // 0x6070104B699B2EF4
	static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0x048B85C1B162DC5D, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3
	static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float angle) { return invoke<BOOL>(0xDDCD1686C0C8CD63, explosionType, x1, y1, z1, x2, y2, z2, angle); } // 0xA079A6C51525DC4B 0x0128FED9
	static Entity _GET_PED_INSIDE_EXPLOSION_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0x7221DEC309BD514C, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176
}

namespace DECISIONEVENT
{
	static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xF42D5C4BA8D0B9FC, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E
	static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int type) { invoke<Void>(0x56439B5F3507B97E, name, type); } // 0x4FC9381A7AEE8968 0x07ABD94D
	static void BLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0x1064B6C52DD0D4FB, name, type); } // 0xE42FCDFD0E4196F7 0x57506EA6
	static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int type) { invoke<Void>(0xCC27F83B64F24283, name, type); } // 0xD7CD9CF34F2C99E8 0x62A3161D
	static ScrHandle ADD_SHOCKING_EVENT_AT_POSITION(int type, float x, float y, float z, float duration) { return invoke<ScrHandle>(0xDEF3206FA59204DE, type, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779
	static ScrHandle ADD_SHOCKING_EVENT_FOR_ENTITY(int type, Entity entity, float duration) { return invoke<ScrHandle>(0x356F06C48CE93761, type, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71
	static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int type, float x, float y, float z, float radius) { return invoke<BOOL>(0xF5C8E39FBDE0F24C, type, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E
	static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0x9ED5EE8DC4576BCC, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87
	static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xAA0CFC65AF442BA8, p0); } // 0xEAABE8FDFA21274C 0x64DF6282
	static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xEBABF43533DA1855); } // 0x340F1415B68AEADE 0xA0CE89C8
	static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0x2108716FA820F1F0); } // 0x2F9A292AD0A3BD89 0x4CC674B5
	static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int type) { invoke<Void>(0xDE15278794D09E4C, type); } // 0x3FD2EC8BF1F1CF30 0xA0FDCB82
	static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0x5D544C9BD16A7DC2); } // 0x5F3B7749C112D552 0x80340396
}

namespace ZONE
{
	static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0xA18FFA770505CC45, x, y, z); } // 0x27040C25DE6CB2F4 0xC9018181
	static int GET_ZONE_FROM_NAME_ID(char* zoneName) { return invoke<int>(0x6D474AC4D82348BF, zoneName); } // 0x98CD1D2934B76CC1 0x8EC68304
	static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x2AB3597978B32D7B, zoneId); } // 0x4334BC40AA0CB4BB 0x20AB2FC9
	static char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<char*>(0xE74C38C56CC836A9, x, y, z); } // 0xCD90657D4C30E1CA 0x7875CE91
	static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0x0D30577A07F10A3E, zoneId, toggle); } // 0xBA5ECEEA120E5611 0x04E21B03
	static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x50CDCE993184E73E, zoneId); } // 0x5F7B268D15BA0739 0xB2FB5C4C
	static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0xEF66789F8526188A, scheduleId, vehicleHash); } // 0x5F7D596BAC2E7777 0x3F0A3680
	static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x1CB5238DAD1F1F20, scheduleId); } // 0x5C0DE367AA0D911C 0x7A72A24E
	static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0xD822C91E0EF641FA, x, y, z); } // 0x7EE64D51E8498728 0xB5C5C99B
}

namespace ROPE
{
	static Object ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<Object>(0x0230624FD48DE7CE, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); } // 0xE832D760399EB220 0xA592EC74
	static void DELETE_ROPE(Object* rope) { invoke<Void>(0xE6CEF80705C433B7, rope); } // 0x52B4829281364649 0x748D72AF
	static void DELETE_CHILD_ROPE(Object rope) { invoke<Void>(0x66209DF794AB4BDD, rope); } // 0xAA5D6B1888E4DB20 0xB19B4706
	static BOOL DOES_ROPE_EXIST(Object* rope) { return invoke<BOOL>(0xEA2088E8F1FB36A8, rope); } // 0xFD5448BE3111ED96 0x66E4A3AC
	static void ROPE_DRAW_SHADOW_ENABLED(Object* rope, BOOL toggle) { invoke<Void>(0x3247727BD2FB1921, rope, toggle); } // 0xF159A63806BB5BA8 0x51523B8C
	static void LOAD_ROPE_DATA(Object rope, char* rope_preset) { invoke<Void>(0x8E89490001DA0C49, rope, rope_preset); } // 0xCBB203C04D1ABD27 0x9E8F1644
	static void PIN_ROPE_VERTEX(Object rope, int vertex, float x, float y, float z) { invoke<Void>(0x7D26AD4A67A878CC, rope, vertex, x, y, z); } // 0x2B320CF14146B69A 0xAE1D101B
	static void UNPIN_ROPE_VERTEX(Object rope, int vertex) { invoke<Void>(0x1022905EB43A7D6C, rope, vertex); } // 0x4B5AE2EEE4A8F180 0xB30B552F
	static int GET_ROPE_VERTEX_COUNT(Object rope) { return invoke<int>(0x3AA7D20DDBB00C3A, rope); } // 0x3655F544CD30F0B5 0x5131CD2C
	static void ATTACH_ENTITIES_TO_ROPE(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0xE1400D7E2279A34D, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); } // 0x3D95EC8B6D940AC3 0x7508668F
	static void ATTACH_ROPE_TO_ENTITY(Any rope, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0x80A28A91FC8AF1B6, rope, entity, x, y, z, p5); } // 0x4B490A6832559A65 0xB25D9536
	static void DETACH_ROPE_FROM_ENTITY(Any rope, Entity entity) { invoke<Void>(0x5B26ED26D4484FE6, rope, entity); } // 0xBCF3026912A8647D 0x3E720BEE
	static void ROPE_SET_UPDATE_PINVERTS(Object rope) { invoke<Void>(0x7D96BB78971FE979, rope); } // 0xC8D667EE52114ABA 0xEAF291A0
	static void _0xFCBF9C379382479A(Any p0, Any p1) { invoke<Void>(0xFCBF9C379382479A, p0, p1); } // 0xDC57A637A20006ED 0x80DB77A7
	static void _0xC030AC584AA0C72A(Any p0, BOOL p1) { invoke<Void>(0xC030AC584AA0C72A, p0, p1); } // 0x36CCB9BE67B970FD 0xC67D5CF6
	static BOOL _0x5EDDEAEC53F84C33(Any* p0) { return invoke<BOOL>(0x5EDDEAEC53F84C33, p0); } // 0x84DE3B5FB3E666F0 0x7A18BB9C
	static Vector3 GET_ROPE_LAST_VERTEX_COORD(Object rope) { return invoke<Vector3>(0x569345187C069BB5, rope); } // 0x21BB0FBD3E217C2D 0x91F6848B
	static Vector3 GET_ROPE_VERTEX_COORD(Object rope, int vertex) { return invoke<Vector3>(0xBF2D116270844FE5, rope, vertex); } // 0xEA61CA8E80F09E4D 0x84374452
	static void START_ROPE_WINDING(Object rope) { invoke<Void>(0x5D5F689AE9773429, rope); } // 0x1461C72C889E343E 0x5187BED3
	static void STOP_ROPE_WINDING(Object rope) { invoke<Void>(0x699B8D153125FFC1, rope); } // 0xCB2D4AB84A19AA7C 0x46826B53
	static void START_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0xBF6BE6A2FC768151, rope); } // 0x538D1179EC1AA9A9 0xFC0DB4C3
	static void STOP_ROPE_UNWINDING_FRONT(Object rope) { invoke<Void>(0x61201DD1DD6E5293, rope); } // 0xFFF3A50779EFBBB3 0x2EEDB18F
	static void ROPE_CONVERT_TO_SIMPLE(Object rope) { invoke<Void>(0xFE67E387F3B94694, rope); } // 0x5389D48EFA2F079A 0x43E92628
	static void ROPE_LOAD_TEXTURES() { invoke<Void>(0x134E729F373A8BDD); } // 0x9B9039DBF2D258C1 0xBA97CE91
	static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xBE13BCB8DDE36844); } // 0xF2D0E6A75CC05597 0x5FDC1047
	static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xBC91299322613A2E); } // 0x6CE36C35C1AC8163 0x584463E0
	static BOOL _0x3F5C2C6626431BEF(Object rope) { return invoke<BOOL>(0x3F5C2C6626431BEF, rope); } // 0x271C9D3ACA5D6409
	static void _0x84CEC4F2B73F147A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { invoke<Void>(0x84CEC4F2B73F147A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); } // 0xBC0CE682D4D05650 0x106BA127
	static void _0xD28AEEC47D01978B(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD28AEEC47D01978B, p0, p1, p2); } // 0xB1B6216CA2E7B55E 0x7C6F7668
	static void _0x187A6A41D9235CC7(Any p0, Any p1) { invoke<Void>(0x187A6A41D9235CC7, p0, p1); } // 0xB743F735C03D7810 0x686672DD
	static float _GET_ROPE_LENGTH(Object rope) { return invoke<float>(0xCA1D84F8878C6439, rope); } // 0x73040398DFF9A4A6 0xFD309DC8
	static void ROPE_FORCE_LENGTH(Object rope, float length) { invoke<Void>(0xCB18A7B17CC37ECF, rope, length); } // 0xD009F759A723DB1B 0xABF3130F
	static void ROPE_RESET_LENGTH(Object rope, BOOL length) { invoke<Void>(0x697335C4C2B07064, rope, length); } // 0xC16DE94D9BEA14A0 0xC8A423A3
	static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0x3DD7AF9BE3089B6C, posX, posY, posZ, vecX, vecY, vecZ, impulse); } // 0xE37F721824571784 0xA2A5C9FE
	static void SET_DAMPING(Object rope, int vertex, float value) { invoke<Void>(0xDB429AB3C1C03441, rope, vertex, value); } // 0xEEA3B200A6FEB65B 0xCFB37773
	static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0x100966E1EB5421AA, entity); } // 0x710311ADF0E20730 0x031711B8
	static void SET_CGOFFSET(Object rope, float x, float y, float z) { invoke<Void>(0x4F814892DF020885, rope, x, y, z); } // 0xD8FA3908D7B86904 0x59910AB2
	static Vector3 GET_CGOFFSET(Object rope) { return invoke<Vector3>(0x54E1CEE73FF310AD, rope); } // 0x8214A4B5A7A33612 0x49A11F0D
	static void SET_CG_AT_BOUNDCENTER(Object rope) { invoke<Void>(0xC3438197274DE3E0, rope); } // 0xBE520D9761FF811F 0xA5B55421
	static void BREAK_ENTITY_GLASS(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0x4B52F6F9E7C1D7BB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); } // 0x2E648D16F6E308F3 0xD0E0402F
	static void SET_DISABLE_BREAKING(Object rope, BOOL enabled) { invoke<Void>(0xAC46211461354883, rope, enabled); } // 0x5CEC1A84620E7D5B 0xEE77C326
	static void _0xA0135BD923ECAC5B(Any p0) { invoke<Void>(0xA0135BD923ECAC5B, p0); } // 0xCC6E963682533882
	static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0x2965C9D922AE78E2, object, toggle); } // 0x01BA3AED21C16CFB 0x97269DC8
}

namespace WATER
{
	static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0x814C2DFD3BD1AF71, x, y, z, height); } // 0xF6829842C06AE524 0xD864E17C
	static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x1C43DCD0AB6A7F46, x, y, z, height); } // 0x8EE6B53CE13A9794 0x262017F8
	static BOOL TEST_PROBE_AGAINST_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0x44A90CB76CA95162, p0, p1, p2, p3, p4, p5, p6); } // 0xFFA5D878809819DB 0xAA4AE00C
	static BOOL TEST_PROBE_AGAINST_ALL_WATER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xAC7D628686F17E70, p0, p1, p2, p3, p4, p5, p6, p7); } // 0x8974647ED222EA5F 0x4A962D55
	static BOOL TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, Any p3, Any* p4) { return invoke<BOOL>(0xE07818CD6D340933, x, y, z, p3, p4); } // 0x2B3451FA1E3142E2 0x4C71D143
	static void MODIFY_WATER(float x, float y, float z, float height) { invoke<Void>(0xA818D5EEA9674646, x, y, z, height); } // 0xC443FD757C3BA637 0xC49E005A
	static Any _0x6B21ED781F2D2B28(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x6B21ED781F2D2B28, p0, p1, p2, p3, p4); } // 0xFDBF4CDBC07E1706
	static void _0xD3A02C0896D00AA4(Any p0) { invoke<Void>(0xD3A02C0896D00AA4, p0); } // 0xB1252E3E59A82AAF
	static void _0x072CFFC8990A05C9(float p0) { invoke<Void>(0x072CFFC8990A05C9, p0); } // 0xB96B00E976BE977F
	static Any _0x982D130ACE78E9AA() { return invoke<Any>(0x982D130ACE78E9AA); } // 0x2B2A2CC86778B619
	static void _0x69AF884F14BBB380() { invoke<Void>(0x69AF884F14BBB380); } // 0x5E5E99285AE812DB
}

namespace WORLDPROBE
{
	static int _0x1EAB9962ED64CF16(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x1EAB9962ED64CF16, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x7EE9F5D83DD4F90E 0xEFAF4BA6
	static int _CAST_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x96B3EEDA5B29A681, x1, y1, z1, x2, y2, z2, flags, entity, p8); } // 0x377906D8A31E5586 0x8251485D
	static Any _0x5F99E6D0ED94D586(Entity entity, int flags1, int flags2) { return invoke<Any>(0x5F99E6D0ED94D586, entity, flags1, flags2); } // 0x052837721A854EC7 0xCEEAD94B
	static Any _0x77FB1C984FBD2045(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, Any p10, Any p11, Any p12) { return invoke<Any>(0x77FB1C984FBD2045, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xFE466162C4401D18 0x249BC876
	static Any _0xFABB2FCCE6252C30(Entity entity, int flags1, int flags2) { return invoke<Any>(0xFABB2FCCE6252C30, entity, flags1, flags2); } // 0x37181417CE7C8900 0x13BC46C0
	static Any _CAST_3D_RAY_POINT_TO_POINT(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p8) { return invoke<Any>(0x107BA8B020DB9C5F, x1, y1, z1, x2, y2, z2, radius, flags, entity, p8); } // 0x28579D1B8F8AAC80 0x591EA833
	static Any _0xBA9F511DC3200D60(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8, Any p9) { return invoke<Any>(0xBA9F511DC3200D60, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xE6AC6C45FBE83004 0x4559460A
	static Any _0x0D97699C090E6D2A(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x0D97699C090E6D2A, p0, p1, p2, p3, p4); } // 0xFF6BE494C7987F34
	static int _GET_RAYCAST_RESULT(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x9CBE058E2C3ABB72, rayHandle, hit, endCoords, surfaceNormal, entityHit); } // 0x3D87450E15D98694 0xF3C2875A
	static int _0x0B46F32E6B1321B8(int rayHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, int* _materialHash, Entity* entityHit) { return invoke<int>(0x0B46F32E6B1321B8, rayHandle, hit, endCoords, surfaceNormal, _materialHash, entityHit); } // 0x65287525D951F6BE 0x4301E10C
	static void _0xD852F6DB1B424609(Entity p0) { invoke<Void>(0xD852F6DB1B424609, p0); } // 0x2B3334BCA57CD799 0xEC2AAF06
}

namespace NETWORK
{
	static Any NETWORK_IS_SIGNED_IN() { return invoke<Any>(0x6E2954F2B1919678); } // 0x054354A99211EB96 0xADD0B40F
	static Any NETWORK_IS_SIGNED_ONLINE() { return invoke<Any>(0xC8FFCE1611C4F73B); } // 0x1077788E268557C2 0x6E5BDCE2
	static Any _0x429D0DC170F831B3() { return invoke<Any>(0x429D0DC170F831B3); } // 0xBD545D44CCE70597
	static Any _0x789ED12A674F20F6() { return invoke<Any>(0x789ED12A674F20F6); } // 0xEBCAB9E5048434F4
	static Any _0x2E77901C5E0D0573() { return invoke<Any>(0x2E77901C5E0D0573); } // 0x74FB3E29E6D10FA9
	static Any _0x19239873C51A562E() { return invoke<Any>(0x19239873C51A562E); } // 0x7808619F31FF22DB
	static Any _0xD9B6C32BF7271B25() { return invoke<Any>(0xD9B6C32BF7271B25); } // 0xA0FA4EC6A05DA44E
	static Any _0x6935836F937B7980() { return invoke<Any>(0x6935836F937B7980); } // 0x85443FF4C328F53B 0x3FB40673
	static Any _0xA6ED2F9783DB1666() { return invoke<Any>(0xA6ED2F9783DB1666); } // 0x8D11E61A4ABF49CC
	static Any NETWORK_IS_CLOUD_AVAILABLE() { return invoke<Any>(0x472ED84D47326927); } // 0x9A4CF4F48AD77302 0xC7FF5AFC
	static Any _0xB3A172A376757D19() { return invoke<Any>(0xB3A172A376757D19); } // 0x67A5589628E0CFF6 0x66EC713F
	static Any _0x7F2EE4424A4AC4B2() { return invoke<Any>(0x7F2EE4424A4AC4B2); } // 0xBA9775570DB788CF 0x358D1D77
	static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x88602EC2400EF6E9); } // 0x8DB296B814EDDA07 0xE46AC10F
	static Any _0xFC4EE00A7B3BFB76() { return invoke<Any>(0xFC4EE00A7B3BFB76); } // 0xA306F470D1660581
	static Any _0x48BEC8E4084114B6() { return invoke<Any>(0x48BEC8E4084114B6); } // 0x4237E822315D8BA9
	static Any NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<Any>(0xEF26821E74E58FDA); } // 0x25CB5A9F37BFD063 0xEF63BFDF
	static Any _0x1A8078D7630DABE2() { return invoke<Any>(0x1A8078D7630DABE2); } // 0x1353F87E89946207
	static BOOL _0x6A75BF8E76B0E99A(Any p0) { return invoke<BOOL>(0x6A75BF8E76B0E99A, p0); } // 0x72D918C99BCACC54 0x1F88819D
	static BOOL _0x6D38F18F1C1946BB(Any p0, Any p1) { return invoke<BOOL>(0x6D38F18F1C1946BB, p0, p1); } // 0xAEEF48CDF5B6CE7C 0x2D817A5E
	static BOOL _0x845878D2E0C803C6(Any p0, BOOL p1) { return invoke<BOOL>(0x845878D2E0C803C6, p0, p1); } // 0x78321BEA235FD8CD
	static BOOL _0x97779B20F0EE11A3(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0x97779B20F0EE11A3, p0, p1, p2); } // 0x595F028698072DD9 0xBB54AA3D
	static BOOL _0xAD9B839DC045FD18(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0xAD9B839DC045FD18, p0, p1, p2); } // 0x83F28CE49FBBFFBA
	static Any _0x3FA437006D06BA56() { return invoke<Any>(0x3FA437006D06BA56); } // 0x76BF03FADBF154F5
	static Any _0x153878FB069032F1() { return invoke<Any>(0x153878FB069032F1); } // 0x9614B71F8ADB982B
	static Any _0x4AC2B4D8F988F421() { return invoke<Any>(0x4AC2B4D8F988F421); } // 0x5EA784D197556507
	static Any _0x6C8E92D4F56B150E() { return invoke<Any>(0x6C8E92D4F56B150E); } // 0xA8ACB6459542A8C8
	static void _0x2FB165A07999CACD() { invoke<Void>(0x2FB165A07999CACD); } // 0x83FE8D7229593017
	static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0x178EC7B1AB184543); } // 0x580CE4438479CC61 0x60E1FEDF
	static void NETWORK_BAIL() { invoke<Void>(0xFADDD11781ECCB34); } // 0x95914459A87EBA28 0x87D79A04
	static void _0x4EF66850695A2552() { invoke<Void>(0x4EF66850695A2552); } // 0x283B6062A2C01E9B 0x96E28FE2
	static BOOL _0xA4E64F1F12A4A164(int* p0) { return invoke<BOOL>(0xA4E64F1F12A4A164, p0); } // 0xAF50DA1A3F8B1BA4 0xA520B982
	static Any _0x295FA6E61A6582D0() { return invoke<Any>(0x295FA6E61A6582D0); } // 0x9747292807126EDA 0x05518C0F
	static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0x4EF32B8E3535353F); } // 0x7E782A910C362C25 0x4A23B9C9
	static Any NETWORK_SESSION_ENTER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0x0FEFAD29B3F3D596, p0, p1, p2, p3, p4, p5); } // 0x330ED4D05491934F 0x543CD2BE
	static BOOL _0xDB9FD2B74CD11D4E(int p0, int p1, int maxPlayers, BOOL p3) { return invoke<BOOL>(0xDB9FD2B74CD11D4E, p0, p1, maxPlayers, p3); } // 0x2CFC76E0D087C994 0x4E53202A
	static BOOL _0x3CAD07104D3F6324(int p0, int p1, int p2, int maxPlayers, BOOL p4) { return invoke<BOOL>(0x3CAD07104D3F6324, p0, p1, p2, maxPlayers, p4); } // 0x94BC51E9449D917F 0xD7624E6B
	static BOOL _0xC15367906C1AE037(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xC15367906C1AE037, p0, p1, p2, p3); } // 0xBE3E347A87ACEB82 0x3F75CC38
	static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0x4B8F25C5F912E7E7, p0, maxPlayers, p2); } // 0x6F3D4ED9BEE4E61D 0x6716460F
	static BOOL _0xD319F6B488E0D419(int p0, int maxPlayers) { return invoke<BOOL>(0xD319F6B488E0D419, p0, maxPlayers); } // 0xED34C0C02C098BB7 0x8AC9EA19
	static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0x9C506C8F86E02D23, p0, maxPlayers); } // 0xB9CFD27A5D578D83 0x26864403
	static BOOL _0xBDD19298E80B8A08() { return invoke<BOOL>(0xBDD19298E80B8A08); } // 0xFBCFA2EA2E206890 0x56E75FE4
	static BOOL _0x571F665160CF1757() { return invoke<BOOL>(0x571F665160CF1757); } // 0x74732C6CA90DA2B4 0xA95299B9
	static BOOL _0xDBF94EA0A294AE29() { return invoke<BOOL>(0xDBF94EA0A294AE29); } // 0xF3929C2379B60CCE 0x3D2C1916
	static BOOL _0xC361A02F0F018747() { return invoke<BOOL>(0xC361A02F0F018747); } // 0xCEF70AA5B3F89BA1 0xDB67785D
	static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0x0ED675CCB85A9E6B, p0, p1); } // 0xA02E59562D711006 0xBCACBEA2
	static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xAF94AA7C78440FC1, player); } // 0xFA8904DC5F304220 0x1E20138A
	static BOOL _NETWORK_SESSION_ARE_PLAYERS_VOTING_TO_KICK(Player player) { return invoke<BOOL>(0x54EECBABA1DC8E81, player); } // 0xD6D09A6F32F49EF1 0x8A559D26
	static Any _0xE7AA6EC05B5F8451() { return invoke<Any>(0xE7AA6EC05B5F8451); } // 0x59DF79317F85A7E0
	static Any _0x5A96C36393189131() { return invoke<Any>(0x5A96C36393189131); } // 0xFFE1E5B792D92B34
	static void _0xF65857BA95912D87(Any p0) { invoke<Void>(0xF65857BA95912D87, p0); } // 0x49EC8030F5015F8B 0x3C3E2AB6
	static void _0x5DA7D94804ADFAF0(Any p0, Any p1) { invoke<Void>(0x5DA7D94804ADFAF0, p0, p1); } // 0x8B6A4DD0AF9CE215 0x5F29A7E0
	static Any _0xB6093DA5441ECE37(Any p0) { return invoke<Any>(0xB6093DA5441ECE37, p0); } // 0x56CE820830EF040B 0x36EAD960
	static void _0x26A5BEBFE4D49269(Any p0) { invoke<Void>(0x26A5BEBFE4D49269, p0); } // 0xCAE55F48D3D7875C 0x5BE529F7
	static void _0x1E176DEED77579C6(Any p0) { invoke<Void>(0x1E176DEED77579C6, p0); } // 0xF49ABC20D8552257 0x454C7B67
	static void _0xE3B5B2FAFD26CF84(Any p0) { invoke<Void>(0xE3B5B2FAFD26CF84, p0); } // 0x4811BBAC21C5FCD5 0xE5961511
	static void _0x381CD706B2A522DA(BOOL p0) { invoke<Void>(0x381CD706B2A522DA, p0); } // 0x5539C3EBF104A53A 0xAE396263
	static void _0x4D10D95397696BA7(Any p0) { invoke<Void>(0x4D10D95397696BA7, p0); } // 0x702BC4D605522539 0x913FD7D6
	static void _0x79226FD9094D0227(BOOL p0) { invoke<Void>(0x79226FD9094D0227, p0); } // 0x3F52E880AAF6C8CA 0xB3D9A67F
	static void _0xF55EE2974F9BEC74(Any p0) { invoke<Void>(0xF55EE2974F9BEC74, p0); } // 0xF1EEA2DDA9FFA69D 0x6CC062FC
	static void _0xB5C6EFD0DADFEED1() { invoke<Void>(0xB5C6EFD0DADFEED1); } // 0x1153FA02A659051C 0x57F9BC83
	static void _0xD4786898DBBAF873(BOOL p0) { invoke<Void>(0xD4786898DBBAF873, p0); } // 0xC19F6C8E7865A6FF 0xF3768F90
	static void _0x654AA54F9E9C4629(Any* p0, Any p1) { invoke<Void>(0x654AA54F9E9C4629, p0, p1); } // 0x236406F60CF216D6 0x0EC62629
	static void _0xB265A8A134D2F568() { invoke<Void>(0xB265A8A134D2F568); } // 0x058F43EC59A8631A 0x5E557307
	static void _0xE198516E20248EF8(Any* p0, Any* p1, Any* p2) { invoke<Void>(0xE198516E20248EF8, p0, p1, p2); } // 0x6D03BFBD643B2A02 0x74E8C53E
	static void _0xD4615099A29623C3(Any p0) { invoke<Void>(0xD4615099A29623C3, p0); } // 0x600F8CB31C7AAB6E 0x959E43A3
	static BOOL _0x5EEFE0EEA9F2787A(Any p0) { return invoke<BOOL>(0x5EEFE0EEA9F2787A, p0); } // 0xE532D6811B3A4D2A 0x7771AB83
	static BOOL _0xBCB59F4A664F7C34(Any p0, float p1, float p2, float p3) { return invoke<BOOL>(0xBCB59F4A664F7C34, p0, p1, p2, p3); } // 0xF7B2CFDE5C9F700D 0xA13045D4
	static Any NETWORK_IS_FINDING_GAMERS() { return invoke<Any>(0x1264E59E7FF0ED0B); } // 0xDDDF64C91BFCF0AA 0xA6DAA79F
	static Any _0x84D56258CA358C7A() { return invoke<Any>(0x84D56258CA358C7A); } // 0xF9B83B77929D8863 0xBEDC4503
	static Any NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<Any>(0x825E2160AA10089F); } // 0xA1B043EE79A916FB 0xF4B80C7E
	static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xB5C423104E29252D, p0, p1); } // 0x9DCFF2AFB68B3476 0xA08C9141
	static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x2A4F3DB88B9E8684); } // 0x6D14CCEE1B40381A 0x6AA9A154
	static BOOL _0x918EF3E867FE9A0C(Any* p0) { return invoke<BOOL>(0x918EF3E867FE9A0C, p0); } // 0x85A0EF54A500882C 0x42BD0780
	static Any _0x672B0A4136319D2D() { return invoke<Any>(0x672B0A4136319D2D); } // 0x2CC848A861D01493 0xBEB98840
	static Any _0xB4B91943440FF08F() { return invoke<Any>(0xB4B91943440FF08F); } // 0x94A8394D150B013A 0x08029970
	static Any _0xA52127DF536A7132() { return invoke<Any>(0xA52127DF536A7132); } // 0x5AE17C6B0134B7F1 0xC871E745
	static BOOL _0x34B976C5057903BC(Any* p0, Any p1) { return invoke<BOOL>(0x34B976C5057903BC, p0, p1); } // 0x02A8BEC6FD9AF660 0xB5ABC4B4
	static void _0x641BE5D823D8D0EE() { invoke<Void>(0x641BE5D823D8D0EE); } // 0x86E0660E4F5C956D 0x3F7EDBBD
	static void NETWORK_IS_PLAYER_ANIMATION_DRAWING_SYNCHRONIZED() { invoke<Void>(0x7AD86F287F00EF27); } // 0xC6F8AB8A4189CF3A 0x3D6360B5
	static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0x004CF481C1633538); } // 0x2FBF47B1B36D36F9 0x20317535
	static void _0x5248E905EBEA8EB7() { invoke<Void>(0x5248E905EBEA8EB7); } // 0xA29177F7703B5644 0x3FD49D3B
	static Any NETWORK_HAS_PENDING_INVITE() { return invoke<Any>(0xFA254AC443BA91AF); } // 0xAC8C7B9B88C4A668 0x0C207D6E
	static Any _0xC4DA0AB781D577C1() { return invoke<Any>(0xC4DA0AB781D577C1); } // 0xC42DD763159F3461 0xFBBAC350
	static Any _0x6CB3BD1B3101188B() { return invoke<Any>(0x6CB3BD1B3101188B); } // 0x62A0296C1BB1CEB3 0x0907A6BF
	static Any _0x0975D1EA797DF23A() { return invoke<Any>(0x0975D1EA797DF23A); } // 0x23DFB504655D0CE4 0x6A0BEA60
	static void NETWORK_SESSION_GET_INVITER(Any* p0) { invoke<Void>(0x301CF397E8410DC3, p0); } // 0xE57397B4A3429DD0 0xE9C6B3FD
	static Any _0x15837DA8D9512541() { return invoke<Any>(0x15837DA8D9512541); } // 0xD313DE83394AF134 0x3EA9D44C
	static Any _0x6603F84B9F8877D0() { return invoke<Any>(0x6603F84B9F8877D0); } // 0xBDB6F89C729CF388
	static void NETWORK_SUPPRESS_INVITE(BOOL p0) { invoke<Void>(0xF2F8CD5D0DE2F07E, p0); } // 0xA0682D67EF1FBA3D 0x323DC78C
	static void NETWORK_BLOCK_INVITES(BOOL p0) { invoke<Void>(0x96C843EEC62D7BE3, p0); } // 0x34F9E9049454A7A0 0xD156FD1A
	static void _0xB70337818B205364(BOOL p0) { invoke<Void>(0xB70337818B205364, p0); } // 0xCFEB8AF24FC1D0BB
	static void _0xB299338C99DD0217() { invoke<Void>(0xB299338C99DD0217); } // 0xF814FEC6A19FD6E0 0x32B7A076
	static void _0xB2577C12DE636A4F(BOOL p0) { invoke<Void>(0xB2577C12DE636A4F, p0); } // 0x6B07B9CE4D390375 0x0FCE995D
	static void _0x45D8B4C606519FCF(BOOL p0) { invoke<Void>(0x45D8B4C606519FCF, p0); } // 0x7AC752103856FB20 0xA639DCA2
	static Any _0x22E3A67661209B26() { return invoke<Any>(0x22E3A67661209B26); } // 0x74698374C45701D2 0x70ED476A
	static void _0x4BD0DFBCBFB998D1() { invoke<Void>(0x4BD0DFBCBFB998D1); } // 0x140E6A44870A11CE 0x50507BED
	static void NETWORK_SESSION_HOST_SINGLE_PLAYER(Any p0) { invoke<Void>(0x5B048798D6E5D7A8, p0); } // 0xC74C33FCA52856D5 0xF3B1CA85
	static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0x34C05A89FE4F9F96); } // 0x3442775428FD2DAA 0xC692F86A
	static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0x00AAD79B42B3E036); } // 0x10FAB35428CCC9D7 0x09B88E3E
	static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0x23EB967150FAF7E7); } // 0xD83C2B94E7508980 0x715CB8C4
	static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xAB63AB6154522A4E); } // 0xCA97246103B63917 0x4BC4105E
	static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0x64282252C888F516); } // 0x9DE624D2FC4B603F 0x9D854A37
	static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0x44F9928DA7B2F34A); } // 0xF4435D66A8E2905E 0x8592152D
	static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0x0D5EF28E3607C4DC); } // 0x4EEBC3694E49C572 0xE1FCCDBA
	static void _0x0591FADBDA3758D2(BOOL p0) { invoke<Void>(0x0591FADBDA3758D2, p0); } // 0x271CC6AB59EBF9A5 0x7017257D
	static Any _0x39506059DDD7EFA8() { return invoke<Any>(0x39506059DDD7EFA8); } // 0xBA416D68C631496A 0x4977AC28
	static void _0xF1AB6DA4DFF4E3AD(BOOL p0) { invoke<Void>(0xF1AB6DA4DFF4E3AD, p0); } // 0xA73667484D7037C3 0xE6EEF8AF
	static void _0x2D12F80582C3C80C(Any p0, Any p1) { invoke<Void>(0x2D12F80582C3C80C, p0, p1); } // 0xB4AB419E0D86ACAE 0x6BB93227
	static Any _0x18E81991A559F08A() { return invoke<Any>(0x18E81991A559F08A); } // 0x53AFD64C6758F2F9
	static void NETWORK_SESSION_VOICE_HOST() { invoke<Void>(0x993E79FBDB64E3E0); } // 0x9C1556705F864230 0x345C2980
	static void NETWORK_SESSION_VOICE_LEAVE() { invoke<Void>(0xB466F85AB56CABD1); } // 0x6793E42BE02B575D 0xE566C7DA
	static void _0xB7477702794CC315(Any* p0) { invoke<Void>(0xB7477702794CC315, p0); } // 0xABD5E88B8A2D3DB2 0x9DFD89E6
	static void NETWORK_SET_KEEP_FOCUSPOINT(BOOL p0, Any p1) { invoke<Void>(0xE6C85A8C6F008A7B, p0, p1); } // 0x7F8413B7FC2AA6B9 0x075321B5
	static void _0x86DED5C7B38227DF(Any p0) { invoke<Void>(0x86DED5C7B38227DF, p0); } // 0x5B8ED3DB018927B1 0x6EFC2FD0
	static Any _0x15A631E700695B1E() { return invoke<Any>(0x15A631E700695B1E); } // 0x855BC38818F6F684 0x60AA4AA1
	static Any _0xC389E70C2D3BDAAD() { return invoke<Any>(0xC389E70C2D3BDAAD); } // 0xB5D3453C98456528
	static Any _0xBCCEC967F75E724A() { return invoke<Any>(0xBCCEC967F75E724A); } // 0xEF0912DDF7C4CB4B 0x132CA01E
	static Any NETWORK_SEND_TEXT_MESSAGE(char* message, int* playerHandle) { return invoke<Any>(0x6EA67134FB8911EA, message, playerHandle); } // 0x3A214F2EC889B100 0xAFFEA720
	static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL p0) { invoke<Void>(0xA63A048FD2E8FBC6, p0); } // 0x75138790B4359A74 0xFC9AD060
	static Any NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<Any>(0x92CB396CDFFE82EA); } // 0x12103B9E0C9F92FB 0xAF329720
	static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(Any p0) { invoke<Void>(0x47CF245D3E4E582C, p0); } // 0x9D277B76D1D12222 0x74E0BC0A
	static Any NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<Any>(0x3DD935E090D08261, p0); } // 0x73E2B500410DA5A2 0x31F951FD
	static Any NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* p0) { return invoke<Any>(0x8378536348C9E728, p0); } // 0x2763BBAA72A7BCB9 0x58F1DF7D
	static Any NETWORK_HOST_TRANSITION(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<Any>(0xB1AE2DDC788CD707, p0, p1, p2, p3, p4, p5); } // 0xA60BB5CE242BB254 0x146764FB
	static BOOL _0xECC9B9909AAA9D47(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xECC9B9909AAA9D47, p0, p1, p2, p3); } // 0x71FB0EBCD4915D56 0x2FF65C0B
	static BOOL _0xB9D66B07CF2BCC36(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xB9D66B07CF2BCC36, p0, p1, p2, p3); } // 0xA091A5E44F0072E5 0x47D61C99
	static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5) { return invoke<BOOL>(0xBC29418C6B8264C6, p0, p1, p2, p3, p4, p5); } // 0x9C4AB58491FDC98A 0x5CE60A11
	static Any _0xEF929C3A63E35FE4() { return invoke<Any>(0xEF929C3A63E35FE4); } // 0xA06509A691D12BE4 0x0D7E5CF9
	static void _0xE35BE8B19DB95EB5() { invoke<Void>(0xE35BE8B19DB95EB5); } // 0xB13E88E655E5A3BC 0x36A5F2DA
	static Any _0x845583E9A675D4F1() { return invoke<Any>(0x845583E9A675D4F1); } // 0x6512765E3BE78C50
	static Any _0x33DB431A501D2BDF() { return invoke<Any>(0x33DB431A501D2BDF); } // 0x0DBD5D7E3C5BEC3B
	static Any _0x5464F085866FD075() { return invoke<Any>(0x5464F085866FD075); } // 0x5DC577201723960A
	static Any _0x2EBCABC8539B801F() { return invoke<Any>(0x2EBCABC8539B801F); } // 0x5A6AA44FF8E931E6
	static void _0x47199F2BF9F57DB5(BOOL p0) { invoke<Void>(0x47199F2BF9F57DB5, p0); } // 0x261E97AD7BCF3D40 0x7EF353E1
	static void _0x8F178152F08D16BD(BOOL p0) { invoke<Void>(0x8F178152F08D16BD, p0); } // 0x39917E1B4CB0F911 0xF60986FC
	static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0x57CD17D283D98FA5, p0); } // 0xEF26739BCD9907D5 0x1DD01FE7
	static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0x35A1DD399AE28DCF); } // 0xFB3272229A82C759 0x8BB336F7
	static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0x50D2E9BD647A1975, p0, p1); } // 0x4A595C32F77DFF76 0x5332E645
	static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* p0) { invoke<Void>(0x2A4E882C7F26373D, p0); } // 0xCA2C8073411ECDB6 0x17F1C69D
	static Any NETWORK_LEAVE_TRANSITION() { return invoke<Any>(0x9B6436902DBCE115); } // 0xD23A1A815D21DB19 0x3A3599B7
	static Any NETWORK_LAUNCH_TRANSITION() { return invoke<Any>(0xCD6878B4CEEE1C5E); } // 0x2DCF46CB1A4F0884 0xE3570BA2
	static void _0xAA8C3EF68DF48828(BOOL p0) { invoke<Void>(0xAA8C3EF68DF48828, p0); } // 0xA2E9C1AB8A92E8CD
	static void NETWORK_BAIL_TRANSITION() { invoke<Void>(0x58357D8351C903A3); } // 0xEAA572036990CD1B 0xB59D74CA
	static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, Any p1) { return invoke<BOOL>(0xEF2C785F056BB92E, p0, p1); } // 0x3E9BB38102A589B0 0x1B2114D2
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, Any p1, BOOL p2) { return invoke<BOOL>(0xDFD97145D4B7677D, p0, p1, p2); } // 0x4665F51EFED00034 0x58AFBE63
	static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xA1ED075E5E303494, p0, p1, p2, players, p4); } // 0x3AAD8B2FCA1E289F 0xC7CB8ADF
	static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xE300FE2A35B33CB2, p0, p1, p2, p3, p4, p5); } // 0x9E80A5BA8109F974 0xAD13375E
	static Any NETWORK_IS_TRANSITION_TO_GAME() { return invoke<Any>(0x538B888A52CDA39C); } // 0x9D7696D8F4FA6CB7 0x17146B2B
	static Any NETWORK_GET_TRANSITION_MEMBERS(Any* p0, Any p1) { return invoke<Any>(0x583BAF8E06214D69, p0, p1); } // 0x73B000F7FBC55829 0x31F19263
	static void _0xFA828DB0A733509B(Any p0, Any p1) { invoke<Void>(0xFA828DB0A733509B, p0, p1); } // 0x521638ADA1BA0D18 0xCEE79711
	static void _0x47F33D154348F48F(Any p0, Any* p1, BOOL p2) { invoke<Void>(0x47F33D154348F48F, p0, p1, p2); } // 0xEBEFC2E77084F599 0xE0C28DB5
	static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Player* playerHandle, char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0x6D61DEE0461A56BC, playerHandle, p1, p2, p3, p4); } // 0x31D1D2B858D25E6B 0x468B0884
	static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xEC87F4B927245349, p0); } // 0x5728BB6D63E3FF1D 0x03383F57
	static Any NETWORK_IS_TRANSITION_HOST() { return invoke<Any>(0x4B4AFCA85B9A4D41); } // 0x0B824797C9BF2159 0x0C0900BC
	static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* p0) { return invoke<BOOL>(0xA0E1AEBA8878699B, p0); } // 0x6B5C83BA3EFE6A10 0x0E2854C4
	static BOOL NETWORK_GET_TRANSITION_HOST(Any* p0) { return invoke<BOOL>(0x12C83F9B86A3F36A, p0); } // 0x65042B9774C4435E 0x73098D40
	static Any NETWORK_IS_IN_TRANSITION() { return invoke<Any>(0x4E2C59AC94294AFF); } // 0x68049AEFF83D8F0A 0xC3CDB626
	static Any NETWORK_IS_TRANSITION_STARTED() { return invoke<Any>(0xDD9D3673B6FE8A40); } // 0x53FA83401D9C07FE 0x7917E111
	static Any NETWORK_IS_TRANSITION_BUSY() { return invoke<Any>(0x92F7296C117F0D94); } // 0x520F3282A53D26B7 0xA357A2C6
	static Any _0x87CAFFDDD57CF7F6() { return invoke<Any>(0x87CAFFDDD57CF7F6); } // 0x292564C735375EDF 0x8262C70E
	static Any _0xD5C58DB9FA0019C7() { return invoke<Any>(0xD5C58DB9FA0019C7); } // 0xC571D0E77D8BBC29
	static void _0x8A0439F3F2C60C03() { invoke<Void>(0x8A0439F3F2C60C03); } // 0x2B3A8F7CA3A38FDE 0xC71E607B
	static void _0x7AD803FBD273C8B3() { invoke<Void>(0x7AD803FBD273C8B3); } // 0x43F4DBA69710E01E 0x82D32D07
	static Any _0xC00B440E77A01BEE() { return invoke<Any>(0xC00B440E77A01BEE); } // 0x37A4494483B9F5C9 0xC901AA9F
	static void _0xAE73B496A14426C2(BOOL p0, BOOL p1) { invoke<Void>(0xAE73B496A14426C2, p0, p1); } // 0x0C978FDA19692C2C
	static Any _0x4E6D174589E26B25() { return invoke<Any>(0x4E6D174589E26B25); } // 0xD0A484CB2F829FBE
	static void _0x80549D5DAF97BF36(Any p0) { invoke<Void>(0x80549D5DAF97BF36, p0); } // 0x30DE938B516F0AD2 0xCCA9C022
	static void _0x44ED5F1EB995B334(Any p0, Any p1) { invoke<Void>(0x44ED5F1EB995B334, p0, p1); } // 0xEEEDA5E6D7080987 0x1E5F6AEF
	static void _0xB71353A0FD9434A0(BOOL p0) { invoke<Void>(0xB71353A0FD9434A0, p0); } // 0x973D76AA760A6CB6 0x0532DDD2
	static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Any p0) { return invoke<BOOL>(0x4839FD20C42D9495, p0); } // 0x9AC9CCBFA8C29795 0x4ABD1E59
	static BOOL _0x31D6193DB69AF1C4(Any p0) { return invoke<BOOL>(0x31D6193DB69AF1C4, p0); } // 0x2615AA2A695930C1 0xCDEBCCE7
	static BOOL NETWORK_JOIN_TRANSITION(Any p0) { return invoke<BOOL>(0xEB218037EE2E779A, p0); } // 0x9D060B08CD63321A 0xB054EC4B
	static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xA6342CFDF6E85476, p0); } // 0x7284A47B3540E6CF 0x4F41DF6B
	static BOOL _0xDEB0FDDCBB78C8A4(Any* p0) { return invoke<BOOL>(0xDEB0FDDCBB78C8A4, p0); } // 0x3F9990BF5F22759C
	static Any NETWORK_IS_ACTIVITY_SESSION() { return invoke<Any>(0x6B042133C9334B77); } // 0x05095437424397FA 0x577DAA8A
	static void _0xD43AD5A8B5744DF3(Any p0) { invoke<Void>(0xD43AD5A8B5744DF3, p0); } // 0x4A9FDE3A5A6D0437 0x18F03AFD
	static BOOL _0xE16B83DEC5C7F266(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xE16B83DEC5C7F266, p0, p1, p2, p3); } // 0xC3C7A6AFDB244624 0x8B99B72B
	static BOOL _0x3B5139CE60B331F4(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x3B5139CE60B331F4, p0, p1, p2, p3); } // 0xC116FF9B4D488291 0x877C0E1C
	static BOOL _0x10CB4953BA28B05C(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0x10CB4953BA28B05C, p0, p1, p2, p3); } // 0x1171A97A3D3981B6
	static Any _0xCB691915C33389E3(Any p0) { return invoke<Any>(0xCB691915C33389E3, p0); } // 0x742B58F723233ED9 0x5E832444
	static Any _0x5F34E83762D9F060() { return invoke<Any>(0x5F34E83762D9F060); } // 0xCEFA968912D0F78D 0x3FDA00F3
	static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(Any p0) { return invoke<BOOL>(0xDCACE2D431740246, p0); } // 0xFA91550DF9318B22 0xE5DA4CED
	static BOOL _0x85746C539A63E50E(Any p0) { return invoke<BOOL>(0x85746C539A63E50E, p0); } // 0xF0210268DB0974B1 0x93C665FA
	static Any NETWORK_GET_PRESENCE_INVITE_ID(Any p0) { return invoke<Any>(0x141F7C7B2F31A57D, p0); } // 0xDFF09646E12EC386 0xD50DF46C
	static Any NETWORK_GET_PRESENCE_INVITE_INVITER(Any p0) { return invoke<Any>(0x67D48F33AC558DD0, p0); } // 0x4962CC4AA2F345B7 0x19EC65D9
	static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0x20AB340A8F89D4F2, p0, p1); } // 0x38D5B0FEBB086F75 0xB2451429
	static Any _0x25DFCE7B934B01B1(Any p0) { return invoke<Any>(0x25DFCE7B934B01B1, p0); } // 0x26E1CD96B0903D60 0xC5E0C989
	static Any _0x1C797F3D2338A5B4(Any p0) { return invoke<Any>(0x1C797F3D2338A5B4, p0); } // 0x24409FC4C55CB22D 0xA4302183
	static Any _0xCF9E1322342D6EA3(Any p0) { return invoke<Any>(0xCF9E1322342D6EA3, p0); } // 0xD39B3FFF8FFDD5BF 0x51B2D848
	static Any _0x9E3E1F0ED332A497(Any p0) { return invoke<Any>(0x9E3E1F0ED332A497, p0); } // 0x728C4CC7920CD102 0x4677C656
	static BOOL _0x3D7EE8DCABF13406(Any p0) { return invoke<BOOL>(0x3D7EE8DCABF13406, p0); } // 0x3DBF2DF0AEB7D289 0xF5E3401C
	static BOOL _0x41377EFB7C842185(Any p0) { return invoke<BOOL>(0x41377EFB7C842185, p0); } // 0x8806CEBFABD3CE05 0x7D593B4C
	static Any _0xD0825866A714F9C1() { return invoke<Any>(0xD0825866A714F9C1); } // 0x76D9B976C4C09FDE 0xE96CFE7D
	static Any _0xCDCE1225E1C27C6E() { return invoke<Any>(0xCDCE1225E1C27C6E); } // 0xC88156EBB786F8D5 0xAB969F00
	static Any _0x1988738ECD5B4FDF() { return invoke<Any>(0x1988738ECD5B4FDF); } // 0x439BFDE3CD0610F6 0x3242F952
	static void _0x84FB951B1F728D9F() { invoke<Void>(0x84FB951B1F728D9F); } // 0xEBF8284D8CADEB53 0x9773F36A
	static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xEE110B50128325B0, p0); } // 0x7524B431B2E6F7EE 0xFDE84CB7
	static void _0x5D5D68D4A2DEF746() { invoke<Void>(0x5D5D68D4A2DEF746); } // 0x726E0375C7A26368 0xF7134E73
	static void _0x2C427D4E5F4DE2F1() { invoke<Void>(0x2C427D4E5F4DE2F1); } // 0xF083835B70BA9BFE 0xC47352E7
	static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x66217F640DF3373A, p0, p1, p2, p3); } // 0x9D80CD1D0E6327DE 0x52FB8074
	static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0x0361D90B6DDF5C19, p0); } // 0x4D86CD31E8976ECE 0xEC651BC0
	static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0x226E372F23112C9E, p0); } // 0x74881E6BCAE2327C 0x72BA00CE
	static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0x5E2354C5543A6A54, p0); } // 0x7206F674F2A3B1BB 0xFD95899E
	static void _0x80E0C55BFD350375(Any* p0) { invoke<Void>(0x80E0C55BFD350375, p0); } // 0x66F010A4B031A331
	static BOOL _0xD03B393495CB7AE3(Any p0, Any* p1) { return invoke<BOOL>(0xD03B393495CB7AE3, p0, p1); } // 0x44B37CDCAE765AAE
	static void _0xA23AA5CACBA7BDAC(Any* p0, Any* p1) { invoke<Void>(0xA23AA5CACBA7BDAC, p0, p1); } // 0x0D77A82DC2D0DA59 0x0808D4CC
	static BOOL FILLOUT_PM_PLAYER_LIST(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x7F86AA303BE8D135, p0, p1, p2); } // 0xCBBD7C4991B64809 0xCE40F423
	static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xA3E40672F3347C01, p0, p1, p2, p3); } // 0x716B6DB9D1886106 0xB8DF604E
	static BOOL USING_NETWORK_WEAPONTYPE(Any p0) { return invoke<BOOL>(0xE7560D7B07A78E2A, p0); } // 0xE26CCFF8094D8C74 0xF49C1533
	static BOOL _0x41CF0DB108762DDD(Any* p0) { return invoke<BOOL>(0x41CF0DB108762DDD, p0); } // 0x796A87B3B68D1F3D
	static Any _0xB96306DCA7FECB70() { return invoke<Any>(0xB96306DCA7FECB70); } // 0x2FC5650B0271CB57 0xA812B6CB
	static Any _0xBEBC9D3FFAA77641() { return invoke<Any>(0xBEBC9D3FFAA77641); } // 0x01ABCE5E7CBDA196
	static Any _0xE9CF53A291B1D7B8(Any* p0, Any p1) { return invoke<Any>(0xE9CF53A291B1D7B8, p0, p1); } // 0x120364DE2845DAF8 0xF30E5814
	static Any _0x7E63700F7BC65A8B() { return invoke<Any>(0x7E63700F7BC65A8B); } // 0xFD8B834A8BA05048 0xC6609191
	static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* p0) { return invoke<BOOL>(0x5AC3C19C31274B74, p0); } // 0x8DE9945BCC9AEC52 0x51367B34
	static Any NETWORK_IS_IN_PARTY() { return invoke<Any>(0x2E80AE378F575F56); } // 0x966C2BC2A7FE3F30 0xF9D7D67D
	static Any NETWORK_IS_PARTY_MEMBER(Any p0) { return invoke<Any>(0xB0210D58EE82A863, p0); } // 0x676ED266AADD31E0 0x1D0C929D
	static Any _0x7062320B4FD825F9() { return invoke<Any>(0x7062320B4FD825F9); } // 0x2BF66D2E7414F686 0x9156EFC0
	static Any _0x141A58D956326554() { return invoke<Any>(0x141A58D956326554); } // 0x14922ED3E38761F0 0x8FA6EE0E
	static void _0x61E1B12CB0C2A3FF() { invoke<Void>(0x61E1B12CB0C2A3FF); } // 0xFA2888E3833C8E96 0x7F70C15A
	static void _0x88F9C47609F9A569() { invoke<Void>(0x88F9C47609F9A569); } // 0x25D990F8E0E3F13C
	static void _0x0041D995863C7D28(Any p0) { invoke<Void>(0x0041D995863C7D28, p0); } // 0x77FADDCBE3499DF7 0x8179C48A
	static void _0xD3FB9F4970E64D81(Any p0) { invoke<Void>(0xD3FB9F4970E64D81, p0); } // 0xF1B84178F8674195 0x41702C8A
	static Any _0xCC8AD073A3F076FE() { return invoke<Any>(0xCC8AD073A3F076FE); } // 0x599E4FA1F87EB5FF 0x208DD848
	static Any _0x543B9F9FB686D2C0(Any p0, Any p1) { return invoke<Any>(0x543B9F9FB686D2C0, p0, p1); } // 0xE30CF56F1EFA5F43 0xF9B6426D
	static Any NETWORK_PLAYER_IS_CHEATER() { return invoke<Any>(0xCF6F23F6AE7795A2); } // 0x655B91F1495A9090 0xA51DC214
	static Any _0x717E59C7C45CDBE8() { return invoke<Any>(0x717E59C7C45CDBE8); } // 0x172F75B6EE2233BA 0x1720ABA6
	static Any NETWORK_PLAYER_IS_BADSPORT() { return invoke<Any>(0x88C47610036AAE8B); } // 0x19D8DA0E5A68045A 0xA19708E3
	static BOOL _0x4EB877600204A454(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x4EB877600204A454, p0, p1, p2); } // 0x46FB3ED415C7641C 0xF9A51B92
	static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x4FF8B00EF4E74A13, p0, p1, p2); } // 0xEC5E3AF5289DCA81 0x4C2C6B6A
	static void _0xD6E8A0A6C06CC199(Any p0, Any p1) { invoke<Void>(0xD6E8A0A6C06CC199, p0, p1); } // 0xE66C690248F11150 0x4818ACD0
	static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { invoke<Void>(0xE1306BF06D83921B, p0, p1, p2); } // 0x1CA59E306ECB80A5 0x470810ED
	static BOOL _0xB056D1CCE792BC4D(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xB056D1CCE792BC4D, p0, p1, p2); } // 0xD1110739EEADB592
	static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0x0D47370227E1A847); } // 0x2910669969E9535E 0xD9BF6549
	static int _NETWORK_GET_NUM_PARTICIPANTS_HOST() { return invoke<int>(0x2249EB1A59F7C407); } // 0xA6C90FBC38E395EE 0xCCD8C02D
	static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x6B808843AE53852B); } // 0x18D0456E86604654 0x3E25A3C5
	static Any NETWORK_GET_SCRIPT_STATUS() { return invoke<Any>(0xD0642B91C061B527); } // 0x57D158647A6BFABF 0x2BE9235A
	static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Any* p0, Any p1) { invoke<Void>(0xF7B58B81A69E540F, p0, p1); } // 0x3E9B2F01C50DF595 0xDAF3B0AE
	static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Any* p0, Any p1) { invoke<Void>(0x1AC0E3669E60AAAD, p0, p1); } // 0x3364AA97340CA215 0xBE3D32B4
	static void _0x682E4E7C731AED1B() { invoke<Void>(0x682E4E7C731AED1B); } // 0x64F62AFB081E260D 0xA71A1D2A
	static Any _0x2953FEB47CBA6611() { return invoke<Any>(0x2953FEB47CBA6611); } // 0x5D10B3795F3FC886 0x0B739F53
	static Any NETWORK_GET_PLAYER_INDEX(Ped PedHandle) { return invoke<Any>(0x39078CE05613D134, PedHandle); } // 0x24FB80D107371267 0xBE1C1506
	static Any NETWORK_GET_PARTICIPANT_INDEX(Any p0) { return invoke<Any>(0x29593DF9A6CDD25E, p0); } // 0x1B84DF6AF2A46938 0xC4D91094
	static Any _0xDF9F1D76EB1B8F12(Any p0) { return invoke<Any>(0xDF9F1D76EB1B8F12, p0); } // 0x6C0E2E0125610278 0x40DBF464
	static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0x4136004A5C878C38); } // 0xA4A79DD2D9600654 0xF7952E62
	static BOOL NETWORK_IS_PLAYER_CONNECTED(Any p0) { return invoke<BOOL>(0xEB31E408D85EA8D0, p0); } // 0x93DC1BE4E1ABE9D1 0x168EE2C2
	static Any _0x33921D627387171B() { return invoke<Any>(0x33921D627387171B); } // 0xCF61D4B4702EE9EB 0xF4F13B06
	static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(Any p0) { return invoke<BOOL>(0x7144266D2DB1A46F, p0); } // 0x6FF8FF40B6357D45 0x4E2C348B
	static BOOL NETWORK_IS_PLAYER_ACTIVE(int playerID) { return invoke<BOOL>(0xD18C3CF631455087, playerID); } // 0xB8DFD30D6973E135 0x43657B17
	static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Any p0) { return invoke<BOOL>(0x6CCF9D473CE62808, p0); } // 0x3CA58F6CB7CBD784 0xB08B6992
	static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xFA4B36553B2A7802); } // 0x83CD99A1E6061AB5 0x6970BA94
	static Any NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Any>(0x07A10D5FAD04B707); } // 0xC7B4D79B01FA7A5C 0x89EA7B54
	static int NETWORK_GET_HOST_OF_SCRIPT(char* scriptName, int p1, Any p2) { return invoke<int>(0xA960844B9B166EA9, scriptName, p1, p2); } // 0x1D6A14F1F9A736FC 0x9C95D0BB
	static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x61D787008D144F0D); } // 0x3B3D11CD9FFCDFC9 0x3083FAD7
	static BOOL NETWORK_IS_SCRIPT_ACTIVE(Any* p0, Any p1, BOOL p2, Any p3) { return invoke<BOOL>(0x3A062DC2C492FE13, p0, p1, p2, p3); } // 0x9D40DF90FAD26098 0x4A65250C
	static Any _0x08187755394696C2(Any* p0, Any p1, Any p2) { return invoke<Any>(0x08187755394696C2, p0, p1, p2); } // 0x3658E8CD94FC121A 0x8F7D9F46
	static Any _0x0F263434E43646BA() { return invoke<Any>(0x0F263434E43646BA); } // 0x638A3A81733086DB 0xDB8B5D71
	static BOOL _0x9471923458B46AA3(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x9471923458B46AA3, p0, p1, p2); } // 0x1AD5B71586B94820 0xCEA55F4C
	static void _0xAA565154D7ED4DC3() { invoke<Void>(0xAA565154D7ED4DC3); } // 0x2302C0264EA58D31 0x8DCFE77D
	static void _0xD64F26B5A0733B12() { invoke<Void>(0xD64F26B5A0733B12); } // 0x741A3D8380319A81 0x331D9A27
	static int PARTICIPANT_ID() { return invoke<int>(0xA18F1332FB91CA92); } // 0x90986E8876CE0A83 0x9C35A221
	static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xA1238458CB587858); } // 0x57A3BDDAD8E5AA0A 0x907498B0
	static Any NETWORK_GET_DESTROYER_OF_NETWORK_ID(Any p0, Any* p1) { return invoke<Any>(0x539CCA787E770980, p0, p1); } // 0x7A1ADEEF01740A24 0x4FCA6436
	static BOOL _0x4466662C9FEBB1E5(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x4466662C9FEBB1E5, p0, p1, p2); } // 0x4CACA84440FA26F6 0x28A45454
	static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Any* p1) { return invoke<Entity>(0xAB6A971C8FAFAFB9, player, p1); } // 0x42B2DAA6B596F5F8 0xA7E7E04F
	static void NETWORK_RESURRECT_LOCAL_PLAYER(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x4276244CC63A61DD, p0, p1, p2, p3, p4, p5); } // 0xEA23C49EAA83ACFB 0xF1F9D4B4
	static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(Any p0) { invoke<Void>(0x2EE367D0BDB989F7, p0); } // 0x2D95C7E2D7E07307 0xFEA9B85C
	static Any NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<Any>(0xC0B89A9E733E0119); } // 0x8A8694B48715B000 0x8DE13B36
	static void _0x56B0404FE7EE74BB(Any p0, BOOL p1) { invoke<Void>(0x56B0404FE7EE74BB, p0, p1); } // 0x9DD368BF06983221 0x8D27280E
	static void _0xD8E5779A5F51A567(Any p0) { invoke<Void>(0xD8E5779A5F51A567, p0); } // 0x524FF0AEFF9C3973 0xB72F086D
	static BOOL _0x145125122E838B28(Any p0) { return invoke<BOOL>(0x145125122E838B28, p0); } // 0xB07D3185E11657A5 0xEDA68956
	static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0x5BD89D856D2E7C36, entity); } // 0xA11700682F3AD45C 0x9E35DAB6
	static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int NetworkID) { return invoke<Entity>(0x0599EF671FFFB865, NetworkID); } // 0xCE4E5D9B0A4FF560 0x5B912C3F
	static BOOL _0x49D76889EB33F5C6(Any p0) { return invoke<BOOL>(0x49D76889EB33F5C6, p0); } // 0xC7827959479DCC78 0xD7F934F4
	static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Any p0) { return invoke<BOOL>(0x4F9572356C55E94C, p0); } // 0x0991549DE4D64762 0x813353ED
	static void _0x8AC7CE21496616AD(Any p0) { invoke<Void>(0x8AC7CE21496616AD, p0); } // 0x06FAACD625D80CAA 0x31A630A4
	static void _0x35B131F109BC6990(Any p0) { invoke<Void>(0x35B131F109BC6990, p0); } // 0x7368E683BB9038D6 0x5C645F64
	static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netID) { return invoke<BOOL>(0xDC1FDD911B88C6F2, netID); } // 0x38CE16C96BD11344 0xB8D2C99E
	static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Entity entity) { return invoke<BOOL>(0x51362735C7CDD08E, entity); } // 0x18A47D074708FD68 0x1E2E3177
	static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0xB489515AC39C50A3, netID); } // 0xA670B3662FAFFBD0 0x9262A60A
	static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netID) { return invoke<BOOL>(0x379306CBB68B0FFA, netID); } // 0x4D36070FE0215186 0x92E77D21
	static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x7CBF8CE5F3C88AEC, entity); } // 0xB69317BF5E782347 0xA05FEBD7
	static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(Any p0) { return invoke<BOOL>(0xE2FD96592B6FC7A9, p0); } // 0x870DDFD5A4A796E4 0xF60DAAF6
	static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x9B5F286CC8377932, entity); } // 0x01BF60A500E28887 0x005FD797
	static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Any p0) { return invoke<BOOL>(0x9ECB6F95F3AD7EF6, p0); } // 0x5BC9495F0B3B6FA6 0xF7784FC8
	static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Any p0) { return invoke<BOOL>(0xD15BE5D720B7E7F9, p0); } // 0xCB3C68ADB06195DF 0x136326EC
	static BOOL _0x4FFE5FDD370443E1(Any p0) { return invoke<BOOL>(0x4FFE5FDD370443E1, p0); } // 0xC01E93FAC20C3346
	static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xC21FA68B68242B11, vehicle); } // 0xB4C94523F023419C 0xF17634EB
	static int PED_TO_NET(Ped ped) { return invoke<int>(0x329C1BF0FA8F98E5, ped); } // 0x0EDEC3C276198689 0x86A0B759
	static int OBJ_TO_NET(Object object) { return invoke<int>(0x1D6A78EAF4518040, object); } // 0x99BFDC94A603E541 0x1E05F29F
	static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xFE740C3B53EEBEE2, netHandle); } // 0x367B936610BA360C 0x7E02FAEA
	static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0x9F2866A966FBAE78, netHandle); } // 0xBDCD95FC216A8B3E 0x87717DD4
	static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xA5CFD5B9C8A74104, netHandle); } // 0xD8515F5FEA14CB3F 0x27AA14D8
	static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xD0D00ABC0BE9C25C, netHandle); } // 0xBFFEAB45A9A9094A 0x5E149683
	static void NETWORK_GET_LOCAL_HANDLE(Any* p0, Any p1) { invoke<Void>(0x03210B5AE7903ADF, p0, p1); } // 0xE86051786B66CD8E 0x08023B16
	static void NETWORK_HANDLE_FROM_USER_ID(Any* p0, Any* p1, Any p2) { invoke<Void>(0xFFDD2ED76C221442, p0, p1, p2); } // 0xDCD51DD8F87AEC5C 0x74C2C1B7
	static void NETWORK_HANDLE_FROM_MEMBER_ID(Any* p0, Any* p1, Any p2) { invoke<Void>(0xF170080F6EDE1F61, p0, p1, p2); } // 0xA0FD21BED61E5C4C 0x9BFC9FE2
	static void NETWORK_HANDLE_FROM_PLAYER(Player player, int* handle, int p2) { invoke<Void>(0xD82458461B583D5D, player, handle, p2); } // 0x388EB2B86C73B6B3 0xD3498917
	static Any _0xC3172ACCB21D5A1D(Any p0) { return invoke<Any>(0xC3172ACCB21D5A1D, p0); } // 0xBC1D768F2F5D6C05
	static Any _0xCD0ADA3939CA15C6(Any* p0) { return invoke<Any>(0xCD0ADA3939CA15C6, p0); } // 0x58575AC3CF2CA8EC
	static void NETWORK_HANDLE_FROM_FRIEND(Any p0, Any* p1, Any p2) { invoke<Void>(0x24A8DDC19D8174CF, p0, p1, p2); } // 0xD45CB817D7E177D2 0x3B0BB3A3
	static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* p0) { return invoke<BOOL>(0xE4312D6A0D004A81, p0); } // 0x9F0C0A981D73FA56 0xEBA00C2A
	static Any NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<Any>(0x7D747C3CB54F2A05); } // 0xB071E27958EF4CF0 0xF000828E
	static Any NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<Any>(0x5BF4BF519E7D736F); } // 0xFD00798DBA7523DD 0x89C2B5EA
	static Any NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* p0) { return invoke<Any>(0x0472B16535454E84, p0); } // 0x426141162EBE5CDB 0xA18A1B26
	static int _0xCA451B3669FE7693(Any* p0, Any p1) { return invoke<int>(0xCA451B3669FE7693, p0, p1); } // 0xD66C9E72B3CC4982
	static Any _0x26677F2D3C8CD78B(Any p0, Any p1, Any p2) { return invoke<Any>(0x26677F2D3C8CD78B, p0, p1, p2); } // 0x58CC181719256197
	static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* p0, Any* p1) { return invoke<BOOL>(0x9D3AFC6F1DC9EE34, p0, p1); } // 0x57DBA049E110F217 0x45975AE3
	static BOOL NETWORK_IS_HANDLE_VALID(int* p0, int p1) { return invoke<BOOL>(0xAE3F9C24A2DC8030, p0, p1); } // 0x6F79B93B0A8E4133 0xF0996C6E
	static Any NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* p0) { return invoke<Any>(0x3C9E8FC8EE316E40, p0); } // 0xCE5F689CF5A0A49D 0x2E96EF1E
	static Any NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* p0) { return invoke<Any>(0x49A0CEADCA1FF103, p0); } // 0xC82630132081BB6F 0x62EF0A63
	static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* p0) { return invoke<BOOL>(0xB3966BE2E04C9248, p0); } // 0x0F10B05DDF8D16E9 0x59127716
	static void NETWORK_SHOW_PROFILE_UI(Player* playerHandle) { invoke<Void>(0x5170B0B078FC72A6, playerHandle); } // 0x859ED1CEA343FCA8 0xF00A20B0
	static char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<char*>(0x3069EC929BB9E6CB, player); } // 0x7718D2E2060837D2 0xCE48F260
	static char* _NETWORK_PLAYER_GET_USER_ID(Player player, Any* userID) { return invoke<char*>(0x6156485D1F441B20, player, userID); } // 0x4927FC39CD0869A0 0x4EC0D983
	static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0x8D720EF14D4FE71D, player); } // 0x544ABDDA3B409B6D 0xF6659045
	static BOOL _0x9B42618D3764594B(Any p0) { return invoke<BOOL>(0x9B42618D3764594B, p0); } // 0x565E430DB3B05BEC 0xD265B049
	static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0x8F35BF8F68670927, p0); } // 0x7E58745504313A2E 0x95481343
	static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0x4C61AC6CF8ED0249); } // 0xAFEBB0D5D8F687D2 0x048171BC
	static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xDB286D1AB7DB3BAA); } // 0x203F1CFD823B27A4 0xA396ACDE
	static char* NETWORK_GET_FRIEND_NAME(Player player) { return invoke<char*>(0x83FAE9B40C31F7C2, player); } // 0xE11EBBB2A783FE8B 0x97420B6D
	static char* _NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<char*>(0x68FBF4262E86782E, friendIndex); } // 0x4164F227D052E293
	static BOOL NETWORK_IS_FRIEND_ONLINE(Any* p0) { return invoke<BOOL>(0xB838C5E06EEDA806, p0); } // 0x425A44533437B64D 0xE0A42430
	static BOOL _0x7F1AB0DEA02A53B8(Any* p0) { return invoke<BOOL>(0x7F1AB0DEA02A53B8, p0); } // 0x87EB7A3FFCB314DB
	static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(Any* p0) { return invoke<BOOL>(0x9CEDFB6F0F4E51DE, p0); } // 0x2EA9A3BEDF3F17B8 0xC54365C2
	static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(Any* p0) { return invoke<BOOL>(0xC970EDA9B5171FA9, p0); } // 0x57005C18827F3A28 0x400BDDD9
	static BOOL NETWORK_IS_FRIEND(int* player) { return invoke<BOOL>(0x74320D9FF94A9E7E, player); } // 0x1A24A179F9B31654 0x2DA4C282
	static Any NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<Any>(0xA10486695CABBA0C, p0); } // 0x0BE73DA6984A6E33 0x5C85FF81
	static Any NETWORK_IS_ADDING_FRIEND() { return invoke<Any>(0x956B2781536980C9); } // 0x6EA101606F6E4D81 0xBB7EC8C4
	static BOOL NETWORK_ADD_FRIEND(Any* p0, Any* p1) { return invoke<BOOL>(0x513B39127839F278, p0, p1); } // 0x8E02D73914064223 0x20E5B3EE
	static BOOL _0xC9F991F00BF1FBF7(int friendIndex) { return invoke<BOOL>(0xC9F991F00BF1FBF7, friendIndex); } // 0xBAD8F2A42B844821 0x94AE7172
	static void _0xED40A966289B75CA(BOOL p0) { invoke<Void>(0xED40A966289B75CA, p0); } // 0x1B857666604B1A74
	static BOOL _0x49A524D6B329FA39(Any p0) { return invoke<BOOL>(0x49A524D6B329FA39, p0); } // 0x82377B65E943F72D 0xB802B671
	static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xDDDA903EB2BA5F10); } // 0xC927EC229934AF60 0x009E68F3
	static Any _0x97CA6AE004ECD1D0(Any p0) { return invoke<Any>(0x97CA6AE004ECD1D0, p0); } // 0xB309EBEA797E001F 0x5C0AB2A9
	static Any _0x07CB598680236E1E() { return invoke<Any>(0x07CB598680236E1E); } // 0x26F07DD83A5F7F98 0x9A176B6E
	static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0x4867605516728E11); } // 0xE870F9F1F7B4F1FA 0xA7DC5657
	static void _0x0E1401A967FD08EE(BOOL p0) { invoke<Void>(0x0E1401A967FD08EE, p0); } // 0x7D395EA61622E116 0x5C05B7E1
	static Any _0x9BF5B94DC6B8C04B() { return invoke<Any>(0x9BF5B94DC6B8C04B); } // 0xC0D2AF00BCC234CA
	static BOOL NETWORK_GAMER_HAS_HEADSET(Any* p0) { return invoke<BOOL>(0x167EE152670D3255, p0); } // 0xF2FD55CB574BCC55 0xD036DA4A
	static BOOL NETWORK_IS_GAMER_TALKING(int* p0) { return invoke<BOOL>(0xD6F45A95FBD48349, p0); } // 0x71C33B22606CD88A 0x99B58DBC
	static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(int* p0) { return invoke<BOOL>(0xBBC937829016B623, p0); } // 0xA150A4F065806B1F 0xD05EB7F6
	static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(int* p0) { return invoke<BOOL>(0x1A5D809AE6246C45, p0); } // 0xCE60DE011B6C7978 0x001B4046
	static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* p0) { return invoke<BOOL>(0x717BD7567708EBB6, p0); } // 0xDF02A2C93F1F26DA 0x7685B333
	static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* p0) { return invoke<BOOL>(0x0CC6A2E370D504DB, p0); } // 0xE944C4F5AF1B5883 0x3FDCC8D7
	static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* p0) { return invoke<BOOL>(0xEC32BB6669A56BFD, p0); } // 0x15337C7C268A27B2 0xD19B312C
	static BOOL _0x93E910B822514F37(Any* p0) { return invoke<BOOL>(0x93E910B822514F37, p0); } // 0xB57A49545BA53CE7
	static BOOL _0xDFBE8D541B923320(Any* p0) { return invoke<BOOL>(0xDFBE8D541B923320, p0); } // 0xCCA4318E1AB03F1F
	static BOOL _0x417E9BCA4B5ECB06(Any* p0) { return invoke<BOOL>(0x417E9BCA4B5ECB06, p0); } // 0x07DD29D5E22763F1
	static BOOL _0xBE26678163BFEA54(Any* p0) { return invoke<BOOL>(0xBE26678163BFEA54, p0); } // 0x135F9B7B7ADD2185
	static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0x781CAE3787C6EFB6, player); } // 0x031E11F3D447647E 0xDA9FD9DB
	static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xFFAFCD969AA1E70B, player); } // 0x3FB99A8B08D18FD6 0x451FB6B6
	static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0x8B855D19BD5FED74, player); } // 0x8C71288AE68EDE39 0x7A21050E
	static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0x19393AACF162D745, player); } // 0x9D6981DFC91A8604 0xE128F2B0
	static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0x6DAFBE95032BD756, player); } // 0x57AF1F8E27483721 0xAE4F4560
	static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0x490D2907414EF1D2, player); } // 0x87F395D957D4353D 0x953EF45E
	static float NETWORK_GET_PLAYER_LOUDNESS(Any p0) { return invoke<float>(0x7D848D4B19E08CAD, p0); } // 0x21A1684A25C2867F 0xF2F67014
	static void NETWORK_SET_TALKER_PROXIMITY(float p0) { invoke<Void>(0x0C5D734858269F52, p0); } // 0xCBF12D65F95AD686 0x67555C66
	static Any NETWORK_GET_TALKER_PROXIMITY() { return invoke<Any>(0x0304512E36697065); } // 0x84F0F13120B4E098 0x19991ADD
	static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0x2F7408AB694D8921, toggle); } // 0xBABEC9E69A91C57B 0x8011247F
	static void _0x4CA6F500745FE03B(BOOL p0) { invoke<Void>(0x4CA6F500745FE03B, p0); } // 0xCFEB46DCD7D8D5EB 0x1A3EA6CD
	static void _0x2B9391BBAF67E0CB(BOOL p0) { invoke<Void>(0x2B9391BBAF67E0CB, p0); } // 0xAF66059A131AA269 0xCAB21090
	static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0x534F08F99CDAC1D0, toggle); } // 0xD5B4883AC32F24C3 0x3813019A
	static void _0x14667E9004337EF8(Any p0, Any p1) { invoke<Void>(0x14667E9004337EF8, p0, p1); } // 0x6F697A66CE78674E 0xC8CC9E75
	static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0x4A719A90E0B427FE, toggle); } // 0x70DA3BF8DACD3210 0xA0FD42D3
	static void _0xDCF5AFD981574189(BOOL p0) { invoke<Void>(0xDCF5AFD981574189, p0); } // 0x3C5C1E2C2FF814B1 0xC9DDA85B
	static void _0x264FB777176217EB(BOOL p0) { invoke<Void>(0x264FB777176217EB, p0); } // 0x9D7AFCBF21C51712
	static void _0x9D1BBC93D134FB4B(BOOL p0) { invoke<Void>(0x9D1BBC93D134FB4B, p0); } // 0xF46A1E03E8755980 0xD33AFF79
	static void _0x44E08B283E9B3809(BOOL p0) { invoke<Void>(0x44E08B283E9B3809, p0); } // 0x6A5D89D7769A40D8 0x4FFEFE43
	static void _0x79D23DAA8E1B045B(Any p0, BOOL p1) { invoke<Void>(0x79D23DAA8E1B045B, p0, p1); } // 0x3039AE5AD2C9C0C4 0x74EE2D8B
	static void _0x72773481EAEA4F0E(Any p0, Any p1) { invoke<Void>(0x72773481EAEA4F0E, p0, p1); } // 0x97DD4C5944CC2E6A
	static void _0x930EC5B54BBB4C26(BOOL p0) { invoke<Void>(0x930EC5B54BBB4C26, p0); } // 0x57B192B4D4AD23D5 0x2F98B405
	static void _0x5BBA358C5C19948F(Any p0, Any p1) { invoke<Void>(0x5BBA358C5C19948F, p0, p1); } // 0xDDF73E2B1FEC5AB4 0x95F1C60D
	static void _0x07FB4F57EEF3E6BC(BOOL p0) { invoke<Void>(0x07FB4F57EEF3E6BC, p0); } // 0x0FF2862B61A58AF9 0x1BCD3DDF
	static void NETWORK_SET_VOICE_CHANNEL(Any p0) { invoke<Void>(0xAA8A38691A48F623, p0); } // 0xEF6212C2EFEF1A23 0x3974879F
	static void _0x66D8E7FB726E741F() { invoke<Void>(0x66D8E7FB726E741F); } // 0xE036A705F989E049 0x9ECF722A
	static void IS_NETWORK_VEHICLE_BEEN_DAMAGED_BY_ANY_OBJECT(Any p0, Any p1, Any p2) { invoke<Void>(0x97211E3B390A4E86, p0, p1, p2); } // 0xDBD2056652689917 0xF1E84832
	static void _0x1299E9FA81843A60() { invoke<Void>(0x1299E9FA81843A60); } // 0xF03755696450470C 0x7F9B9052
	static void _0x221798766F098982(Any p0) { invoke<Void>(0x221798766F098982, p0); } // 0x5E3AA4CA2B6FB0EE 0x7BBEA8CF
	static void _0x888EE3A46E29689F(Any p0) { invoke<Void>(0x888EE3A46E29689F, p0); } // 0xCA575C391FEA25CC 0xE797A4B6
	static void _0xA3C6C1C6BD5DD03C(Player p0, float* p1, float* p2) { invoke<Void>(0xA3C6C1C6BD5DD03C, p0, p1, p2); } // 0xADB57E5B663CCA8B 0x92268BB5
	static BOOL _NETWORK_IS_TEXT_CHAT_ACTIVE() { return invoke<BOOL>(0x29C4AA4F29B1E539); } // 0x5FCF4D7069B09026
	static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0x90E10C76BCD91B5A); } // 0x593850C16A36B692 0x92B7351C
	static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0x9AFB07ACA1457620, toggle); } // 0xF808475FA571D823 0x6BAF95FA
	static void NETWORK_SET_RICH_PRESENCE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x52D7AD2E007B9DFC, p0, p1, p2, p3); } // 0x1DCCACDCFC569362 0x932A6CED
	static void _0x492EDD75C56D6606(Any p0, Any p1) { invoke<Void>(0x492EDD75C56D6606, p0, p1); } // 0x3E200C2BCF4164EB 0x017E6777
	static Any _0xA25BA002FE647787() { return invoke<Any>(0xA25BA002FE647787); } // 0x5ED0356A0CE3A34F 0xE1F86C6A
	static void _0x860EE3A50713AC3D(Any p0, float p1, float p2, float p3, BOOL p4, BOOL p5) { invoke<Void>(0x860EE3A50713AC3D, p0, p1, p2, p3, p4, p5); } // 0x9769F811D1785B03 0xBE6A30C3
	static void _0x16BD88598499E29B(Any p0, BOOL p1) { invoke<Void>(0x16BD88598499E29B, p0, p1); } // 0xBF22E0F32968E967 0x22E03AD0
	static void _0x67C2C2B92D81E2C2(Entity entity) { invoke<Void>(0x67C2C2B92D81E2C2, entity); } // 0x715135F4B82AC90D 0xCEAE5AFC
	static BOOL _NETWORK_PLAYER_IS_IN_CLAN() { return invoke<BOOL>(0xAB7778782580F313); } // 0x579CCED0265D4896 0xF5F4BD95
	static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(ScrHandle* netHandle) { return invoke<BOOL>(0x89398BAF58AA485C, netHandle); } // 0xB124B57F571D8F18 0xAB8319A3
	static BOOL NETWORK_CLAN_PLAYER_GET_DESC(ScrHandle* description, int p1, ScrHandle* netHandle) { return invoke<BOOL>(0xB486161F8A7A8AFB, description, p1, netHandle); } // 0xEEE6EACBE8874FBA 0x6EE4A282
	static Any _0xE4AACEE3298CAF9B(Any p0, Any p1) { return invoke<Any>(0xE4AACEE3298CAF9B, p0, p1); } // 0x7543BB439F63792B 0x54E79E9C
	static void _0x8CB648F8365CA9F9(Any* p0, Any p1, Any* p2) { invoke<Void>(0x8CB648F8365CA9F9, p0, p1, p2); } // 0xF45352426FF3A4F0 0xF633805A
	static Any _0x4E6B390F151C764C() { return invoke<Any>(0x4E6B390F151C764C); } // 0x1F471B79ACC90BEF 0x807B3450
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* p0, Any p1) { return invoke<BOOL>(0xC9376DD2004D4C7A, p0, p1); } // 0x48DE78AF2C8885B8 0x3369DD1F
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* p0) { return invoke<BOOL>(0xB38DCB627B1A7057, p0); } // 0xA989044E70010ABE 0x8E8CB520
	static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0x1B1904BC1D582141, p0); } // 0x5B9E023DC6EBEDC0 0x1FDB590F
	static Any _0xD6CD57C04FB76E74() { return invoke<Any>(0xD6CD57C04FB76E74); } // 0xB3F64A6A91432477 0x83ED8E08
	static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(Any* p0) { return invoke<BOOL>(0x2EF7C96678C2F392, p0); } // 0xBB6E6FEE99D866B2 0x40202867
	static Any NETWORK_CLAN_GET_MEMBERSHIP_COUNT(Any* p0) { return invoke<Any>(0x1EEC08FDD41CE5FF, p0); } // 0xAAB11F6C4ADBC2C1 0x25924010
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(Any* p0, Any p1) { return invoke<BOOL>(0xB28DC6CE9DE75E32, p0, p1); } // 0x48A59CF88D43DF0E 0x48914F6A
	static BOOL NETWORK_CLAN_GET_MEMBERSHIP(Any* p0, Any* p1, Any p2) { return invoke<BOOL>(0x53C1D300130775A1, p0, p1, p2); } // 0xC8BC2011F67B3411 0xCDC4A590
	static Any NETWORK_CLAN_JOIN(Any clanHandle) { return invoke<Any>(0x1F496F1A691EF6C5, clanHandle); } // 0x9FAAA4F4FC71F87F 0x79C916C5
	static BOOL _0xCE3364F592EDF44D(Any* p0, Any* p1) { return invoke<BOOL>(0xCE3364F592EDF44D, p0, p1); } // 0x729E3401F0430686 0xBDA90BAC
	static BOOL _0xD159BE96C04107D3(Any p0, Any* p1) { return invoke<BOOL>(0xD159BE96C04107D3, p0, p1); } // 0x2B51EDBEFC301339 0x8E952B12
	static Any _0xB056E9F4C5A95495() { return invoke<Any>(0xB056E9F4C5A95495); } // 0xC32EA7A2F6CA7557 0x966C90FD
	static BOOL _0xC2D682D1471B94C4(Any* p0, Any* p1) { return invoke<BOOL>(0xC2D682D1471B94C4, p0, p1); } // 0x5835D9CD92E83184 0xBA672146
	static BOOL _0xFD8429C15A256E6B(Any p0) { return invoke<BOOL>(0xFD8429C15A256E6B, p0); } // 0x13518FF1C6B28938 0x7963FA4D
	static BOOL _0xED116A45A911BF49(Any p0, Any* p1) { return invoke<BOOL>(0xED116A45A911BF49, p0, p1); } // 0xA134777FF7F33331 0x88B13CDC
	static void _0x6E1ED0D780E8F4B4(Any p0) { invoke<Void>(0x6E1ED0D780E8F4B4, p0); } // 0x113E6E3E50E286B0 0xD6E3D5EA
	static Any _0x539F54D25BB267B0() { return invoke<Any>(0x539F54D25BB267B0); } // 0x9AA46BADAD0E27ED 0xE22445DA
	static void _0xDBC0B30FD942FF00() { invoke<Void>(0xDBC0B30FD942FF00); } // 0x042E4B70B93E6054 0x455DDF5C
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xCBEC78B644528BCD, p0, p1); } // 0xCE86D8191B762107 0x89DB0EC7
	static Any _0x78CA1162536D22F4() { return invoke<Any>(0x78CA1162536D22F4); } // 0xB5074DB804E28CE7 0xA4EF02F3
	static Any _0x666DA8FA94385B76() { return invoke<Any>(0x666DA8FA94385B76); } // 0x5B4F04F19376A0BA 0x068A054E
	static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xE314E57D3F70AB1E, p0, p1); } // 0xC080FF658B2E41DA 0x9B8631EB
	static void SET_NETWORK_ID_CAN_MIGRATE(Any p0, BOOL p1) { invoke<Void>(0x937D26EC724FCC39, p0, p1); } // 0x299EEB23175895FC 0x47C8E5FF
	static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int NetID, BOOL DoesExist) { invoke<Void>(0xDBE1342300E4DF89, NetID, DoesExist); } // 0xE05E81A888FA63C8 0x68D486B2
	static void _0x7C67D2B43955BDE9(int netID, Player player, BOOL p2) { invoke<Void>(0x7C67D2B43955BDE9, netID, player, p2); } // 0xA8A024587329F36A 0x4D15FDB1
	static void NETWORK_SET_ENTITY_CAN_BLEND(Any p0, BOOL toggle) { invoke<Void>(0xEE44EBF9BB764E86, p0, toggle); } // 0xD830567D88A1E873 0xDE8C0DB8
	static void _0x3833C7E4142B890A(Any p0, BOOL p1) { invoke<Void>(0x3833C7E4142B890A, p0, p1); } // 0xF1CA12B18AEF5298 0x09CBC4B0
	static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x32EBD154CB6B8B48, p0, p1, p2); } // 0xA6928482543022B4 0x199E75EF
	static void _0x041C7349E5E589E8(BOOL p0) { invoke<Void>(0x041C7349E5E589E8, p0); } // 0xAAA553E7DD28A457
	static void _0xAEB3CC1332463C18(Any p0, BOOL p1) { invoke<Void>(0xAEB3CC1332463C18, p0, p1); } // 0x3FA36981311FA4FF 0x00AE4E17
	static BOOL _0xB5A45FB150DB6127(Any p0) { return invoke<BOOL>(0xB5A45FB150DB6127, p0); } // 0xA1607996431332DF 0xEA5176C0
	static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xB513C77EC263525D, p0, p1); } // 0xD1065D68947E7B6E 0x59F3479B
	static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x994B9E858E1A5FEF, p0); } // 0xE5F773C1A1D9D168 0x764F6222
	static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x37EBA9CF7FD14510, p0); } // 0x7619364C82D3BF14 0x324B56DB
	static void SET_PLAYER_INVISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0xAEDC170EF3F4DA05, p0, p1); } // 0x12B37D54667DB0B8 0x18227209
	static void SET_PLAYER_VISIBLE_LOCALLY(Any p0, BOOL p1) { invoke<Void>(0xB0A83BDA1102462C, p0, p1); } // 0xFAA10F1FAFB11AF2 0xBA2BB4B4
	static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xE0D8D7721870E98E, p0); } // 0x416DBD4CD6ED8DD2 0x8FA7CEBD
	static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0x6D02207A80AFE7E2, entity, p1, p2); } // 0xDE564951F95E09ED 0x47EDEE56
	static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL p1) { invoke<Void>(0xAE2A0B6E2F88E614, entity, p1); } // 0x1F4ED342ACEFE62D 0x9B9FCD02
	static BOOL _0x229C102947E52331(Any p0) { return invoke<BOOL>(0x229C102947E52331, p0); } // 0x631DC5DFF4B110E3
	static BOOL _0x7F5A940691C66C04(Any p0) { return invoke<BOOL>(0x7F5A940691C66C04, p0); } // 0x422F32CC7E56ABAD
	static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0x2460D6E8C757231A, player); } // 0xE73092F4157CD126 0xE0A619BD
	static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x790DDD382DB6F04B, p0, p1, p2); } // 0xE0031D3C8F36AB82 0xDBFB067B
	static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0x6347AD06C1359C3F, entity); } // 0xE135A9FF3F5D05D8 0x51ADCC5F
	static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0x7997C8CC641A44E1, entity); } // 0x241E289B5C059EDC 0x235A57B3
	static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xFF9C9DAFEC45FED6, netID); } // 0x6E192E33AD436366 0x597063BA
	static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL p1) { invoke<Void>(0x684C4920F96A0100, netID, p1); } // 0xD45B1FFCCD52FF19 0x95D07BA5
	static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x56125F01FC57E031, p0, p1, p2, p3); } // 0xD82CF8E64C8729D8 0x23C5274E
	static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x0719BE80FE2477AB, p0, p1, p2, p3, p4); } // 0xDC3A310219E5DA62 0xE9FCFB32
	static void RESERVE_NETWORK_MISSION_OBJECTS(Any p0) { invoke<Void>(0xFCFA396E73EBBE3E, p0); } // 0x4E5C93BD0C32FBF8 0x391DF4F3
	static void RESERVE_NETWORK_MISSION_PEDS(Any p0) { invoke<Void>(0xB05CBEA790398181, p0); } // 0xB60FEBA45333D36F 0x54998C37
	static void RESERVE_NETWORK_MISSION_VEHICLES(Any p0) { invoke<Void>(0x64CE3D093CEB0059, p0); } // 0x76B02E21ED27A469 0x5062875E
	static BOOL CAN_REGISTER_MISSION_OBJECTS(Any p0) { return invoke<BOOL>(0xE107B0270F6E3CC8, p0); } // 0x800DD4721A8B008B 0x7F85DFDE
	static BOOL CAN_REGISTER_MISSION_PEDS(Any p0) { return invoke<BOOL>(0xCD27031055508F43, p0); } // 0xBCBF4FEF9FA5D781 0xCCAA5CE9
	static BOOL CAN_REGISTER_MISSION_VEHICLES(Any p0) { return invoke<BOOL>(0x272140262F5CF459, p0); } // 0x7277F1F2E085EE74 0x818B6830
	static BOOL CAN_REGISTER_MISSION_ENTITIES(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x95FD4EFBB9668DCE, p0, p1, p2, p3); } // 0x69778E7564BADE6D 0x83794008
	static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xBD5D7DEF087C4F66, p0); } // 0xAA81B5F10BC43AC2 0x16A80CD6
	static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xD6E896F8239D8EF2, p0); } // 0x1F13D5AE5CB17E17 0x6C25975C
	static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xF3BCBCADB5D1D2A5, p0); } // 0xCF3A965906452031 0xA9A308F3
	static Any _0x9FDA8AF2446FFA4C(BOOL p0) { return invoke<Any>(0x9FDA8AF2446FFA4C, p0); } // 0x12B6281B6C6706C0 0x603FA104
	static Any _0xC874D419693D3A82(BOOL p0) { return invoke<Any>(0xC874D419693D3A82, p0); } // 0xCB215C4B56A7FAE7 0xD8FEC4F8
	static Any _0x3D47B8B5C2997BC1(BOOL p0) { return invoke<Any>(0x3D47B8B5C2997BC1, p0); } // 0x0CD9AB83489430EA 0x20527695
	static Any _0xE39E7F5A06E1D344() { return invoke<Any>(0xE39E7F5A06E1D344); } // 0xC7BE335216B5EC7C 0x8687E285
	static Any _0xD7C468C0CA5DCEB0() { return invoke<Any>(0xD7C468C0CA5DCEB0); } // 0x0C1F7D49C39D2289 0x744AC008
	static Any _0x925BE7D7D67200B7() { return invoke<Any>(0x925BE7D7D67200B7); } // 0x0AFCE529F69B21FF 0xC3A12135
	static Any _0x2FB314358B2971A7() { return invoke<Any>(0x2FB314358B2971A7); } // 0xA72835064DD63E4C 0x6A036061
	static int GET_NETWORK_TIME() { return invoke<int>(0xC7F926248AF8587B); } // 0x7A5487FE9FAA6B48 0x998103C2
	static Any _0xDBD31D1E0E5F2049() { return invoke<Any>(0xDBD31D1E0E5F2049); } // 0x89023FBBF9200E9F 0x98AA48E5
	static Any _0xD5F8F240AB6DF8FF() { return invoke<Any>(0xD5F8F240AB6DF8FF); } // 0x46718ACEEDEAFC84 0x4538C4A2
	static int GET_TIME_OFFSET(int a, int b) { return invoke<int>(0xBB2C6A88355C6C4A, a, b); } // 0x017008CCDAD48503 0x2E079AE6
	static BOOL _SUBTRACT_B_FROM_A_AND_CHECK_IF_NEGATIVE(int a, int b) { return invoke<BOOL>(0x2CCBE207DF58FF68, a, b); } // 0xCB2CF5148012C8D0 0x50EF8FC6
	static BOOL _SUBTRACT_A_FROM_B_AND_CHECK_IF_NEGATIVE(int a, int b) { return invoke<BOOL>(0x230395E4860ECDC5, a, b); } // 0xDE350F8651E4346C 0xBBB6DF61
	static int _ARE_INTEGERS_EQUAL(int a, int b) { return invoke<int>(0xBA5DC1E48BFCFA4A, a, b); } // 0xF5BC95857BD6D512 0x8B4D1C06
	static int GET_TIME_DIFFERENCE(int a, int b) { return invoke<int>(0x4B7B32731313EF0E, a, b); } // 0xA2C6FC031D46FFF0 0x5666A837
	static char* _FORMAT_TIME(int time) { return invoke<char*>(0x81AE4364C1AF87C7, time); } // 0x9E23B1777A927DAD 0x8218944E
	static int _0x72F23FC3443B498B() { return invoke<int>(0x72F23FC3443B498B); } // 0x9A73240B49945C76 0xF2FDF2E0
	static void _GET_DATE_AND_TIME_FROM_UNIX_EPOCH(int unixEpoch, Any* timeStructure) { invoke<Void>(0xBAAC965F3E77D9F7, unixEpoch, timeStructure); } // 0xAC97AF97FA68E5D5 0xBB7CCE49
	static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL p0, Any p1) { invoke<Void>(0x08427A6E15C759FF, p0, p1); } // 0x423DE3854BB50894 0x5C4C8458
	static void _0x21FA49D33DA4EC17(BOOL p0, Any p1, BOOL p2) { invoke<Void>(0x21FA49D33DA4EC17, p0, p1, p2); } // 0x419594E137637120 0x54058F5F
	static void _0xEB621B52528DFB07(BOOL p0) { invoke<Void>(0xEB621B52528DFB07, p0); } // 0xFC18DB55AE19E046 0xA7E36020
	static void _0x64C5B96BBF4620AF(BOOL p0, Any p1) { invoke<Void>(0x64C5B96BBF4620AF, p0, p1); } // 0x5C707A667DF8B9FA 0x64235620
	static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0x30676AF9618B527A); } // 0x048746E388762E11 0x3EAD9DB8
	static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x8E057013EBEA2510, p0, p1); } // 0x9CA5DE655269FEC4 0x8434CB43
	static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xDF16A5D5874BD0E4); } // 0x6CC27C9FA2040220 0x4BB33316
	static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xAE0897411BBB244B, player); } // 0x63F9EE203C3619F2 0x56F961E4
	static void SET_NETWORK_VEHICLE_RESPOT_TIMER(Any p0, Any p1) { invoke<Void>(0x049541BF595D64CA, p0, p1); } // 0xEC51713AB6EC36E8 0x2C30912D
	static void _0x23298B78576D25F3(Any p0, BOOL p1) { invoke<Void>(0x23298B78576D25F3, p0, p1); } // 0x6274C4712850841E 0xEA235081
	static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0x1513F08645184D59, toggle); } // 0x5FFE9B4144F9712F 0x4DD46DAE
	static BOOL _0x0C08954A7F4FC21C(Any p0) { return invoke<BOOL>(0x0C08954A7F4FC21C, p0); } // 0x21D04D7BC538C146
	static void _0x6DBF41F58C2E4C83(BOOL p0) { invoke<Void>(0x6DBF41F58C2E4C83, p0); } // 0x77758139EC9B66C7
	static Any NETWORK_CREATE_SYNCHRONISED_SCENE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return invoke<Any>(0x5D517BDD55C4B76A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x7CD6BC4C2BBDD526 0xB06FE3FE
	static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Any p0, Any p1, Any* p2, Any* p3, float p4, float p5, Any p6, Any p7, float p8, Any p9) { invoke<Void>(0xDCF7222C3DC94EAB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); } // 0x742A637471BCECD9 0xB386713E
	static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Any p0, Any p1, Any* p2, Any* p3, float p4, float p5, Any p6) { invoke<Void>(0xD9F909E8F1338F52, p0, p1, p2, p3, p4, p5, p6); } // 0xF2404D68CBC855FA 0x10DD636C
	static void _0xADEBEE097CA22CA5(Any p0, Any* p1, Any* p2) { invoke<Void>(0xADEBEE097CA22CA5, p0, p1, p2); } // 0xCF8BD3B0BD6D42D7 0xBFFE8B5C
	static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(Any p0, Any p1, Any p2) { invoke<Void>(0x98D42E24A4EDBF84, p0, p1, p2); } // 0x478DCBD2A98B705A 0x3FE5B222
	static void NETWORK_START_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0x3C2889178CACACC8, p0); } // 0x9A1B3FCDB36C8697 0xA9DFDC40
	static void NETWORK_STOP_SYNCHRONISED_SCENE(Any p0) { invoke<Void>(0x7C10A814ABC7AD2E, p0); } // 0xC254481A4574CB2F 0x97B1CDF6
	static Any _0xA6C2218D69567283(Any p0) { return invoke<Any>(0xA6C2218D69567283, p0); } // 0x02C40BF885C567B6 0x16AED87B
	static void _0x83972D5B1B2A0392(Any p0) { invoke<Void>(0x83972D5B1B2A0392, p0); } // 0xC9B43A33D09CADA7
	static Any _0x87AB9B20714FC95D(Any p0, Any p1) { return invoke<Any>(0x87AB9B20714FC95D, p0, p1); } // 0xFB1F9381E80FA13F 0x0679CE71
	static BOOL _0x3EAC5BC30049AE71(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { return invoke<BOOL>(0x3EAC5BC30049AE71, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x5A6FFA2433E2F14C 0xC62E77B3
	static BOOL _0x7864EBBAE7E31662(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, Any p11) { return invoke<BOOL>(0x7864EBBAE7E31662, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x4BA92A18502BCA61 0x74D6B13C
	static Any _0x7E2490D5331C2EF9(Any* p0) { return invoke<Any>(0x7E2490D5331C2EF9, p0); } // 0x3C891A251567DFCE 0x90700C7D
	static void _0x4F3CE675DAEFAFF1() { invoke<Void>(0x4F3CE675DAEFAFF1); } // 0xFB8F2A6F3DF08CBE 0x44BFB619
	static void NETWORK_GET_RESPAWN_RESULT(Any p0, int* p1, int* p2) { invoke<Void>(0x1A664279AFB239A9, p0, p1, p2); } // 0x371EA43692861CF1 0xDDFE9FBC
	static Any _0xC11B03D33D7E53AA(Any p0) { return invoke<Any>(0xC11B03D33D7E53AA, p0); } // 0x6C34F1208B8923FD 0x03287FD2
	static void _0x1AEF9302BCC0BC8A() { invoke<Void>(0x1AEF9302BCC0BC8A); } // 0x17E0198B3882C2CB 0x408A9436
	static void _0x7ADDFEE89B198A13(Any p0, Any p1) { invoke<Void>(0x7ADDFEE89B198A13, p0, p1); } // 0xFB680D403909DC70 0xFFB2ADA1
	static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xA0968446FB3970ED); } // 0xD0AFAFF5A51D72F7 0xBA57E53E
	static Any NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<Any>(0x9321E9548CA02149); } // 0xADA24309FE08DACF 0x34DD7B28
	static Any _0xC8C868C2237CCD86() { return invoke<Any>(0xC8C868C2237CCD86); } // 0xB37E4E6A2388CA7B 0x755A2B3E
	static Any _0x5D058245447AB9CE() { return invoke<Any>(0x5D058245447AB9CE); } // 0x35F0B98A8387274D 0xA003C40B
	static Any _0x750E7FCB1031101E(Any p0) { return invoke<Any>(0x750E7FCB1031101E, p0); } // 0x3B39236746714134 0x5E1020CC
	static BOOL _0x55AD8BE0B6CDBEAE(Any p0, Any p1) { return invoke<BOOL>(0x55AD8BE0B6CDBEAE, p0, p1); } // 0x9DE986FC9A87C474 0xE66A0B40
	static void _0xA887316FA6D71D16(Any p0, BOOL p1) { invoke<Void>(0xA887316FA6D71D16, p0, p1); } // 0xBBDF066252829606 0x72052DB3
	static BOOL _0x177421BA3C3F6DD0(Any p0) { return invoke<BOOL>(0x177421BA3C3F6DD0, p0); } // 0x919B3C98ED8292F9 0xB0313590
	static void NETWORK_OVERRIDE_CLOCK_TIME(int Hours, int Minutes, int Seconds) { invoke<Void>(0x9AC5A1E5DC219637, Hours, Minutes, Seconds); } // 0xE679E3E06E363892 0xC077BCD6
	static void _0x15DD6789F4F7A535() { invoke<Void>(0x15DD6789F4F7A535); } // 0xD972DF67326F966E 0xC4AEAF49
	static Any _0xC0B7498BE1572FFF() { return invoke<Any>(0xC0B7498BE1572FFF); } // 0xD7C95D322FF57522 0x2465296D
	static Any NETWORK_ADD_ENTITY_AREA(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xC974736DC72AA2CB, p0, p1, p2, p3, p4, p5); } // 0x494C8FB299290269 0x51030E5B
	static Any _0x69A9B47E259279C8(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<Any>(0x69A9B47E259279C8, p0, p1, p2, p3, p4, p5, p6); } // 0x376C6375BA60293A
	static Any _0xB39878F1A1A88134(float p0, float p1, float p2, float p3, float p4, float p5) { return invoke<Any>(0xB39878F1A1A88134, p0, p1, p2, p3, p4, p5); } // 0x25B99872D588A101 0x4C2C2B12
	static BOOL NETWORK_REMOVE_ENTITY_AREA(Any p0) { return invoke<BOOL>(0x94A6DB9A3DF40825, p0); } // 0x93CF869BAA0C4874 0xEAB97F25
	static BOOL _0xDB22DB245FA7E88F(Any p0) { return invoke<BOOL>(0xDB22DB245FA7E88F, p0); } // 0xE64A3CA08DFA37A9 0x69956127
	static BOOL _0x437670133414FF38(Any p0) { return invoke<BOOL>(0x437670133414FF38, p0); } // 0x4DF7CFFF471A7FB1 0xCB1CD6D3
	static BOOL _0xDD3B687BE5C0FB96(Any p0) { return invoke<BOOL>(0xDD3B687BE5C0FB96, p0); } // 0x4A2D4E8BF4265B0F 0xC6D53AA0
	static void _0xEB9512D303174537(Any p0, BOOL p1) { invoke<Void>(0xEB9512D303174537, p0, p1); } // 0x2B1813ABA29016C5 0x155465EE
	static Any _0xF385A3942E764181() { return invoke<Any>(0xF385A3942E764181); } // 0x924426BFFD82E915 0x29532731
	static Any _0x335AA4E741CB4FBD() { return invoke<Any>(0x335AA4E741CB4FBD); } // 0x8132C0EB8B2B3293
	static void _0x6763EA2C348D08CC() { invoke<Void>(0x6763EA2C348D08CC); } // 0x42FB3B532D526E6C 0xD760CAD5
	static Any _0xE8E3E8C812095FD0() { return invoke<Any>(0xE8E3E8C812095FD0); } // 0x0467C11ED88B7D28
	static Any _0x7B38F9129037E4DF() { return invoke<Any>(0x7B38F9129037E4DF); } // 0x10BD227A753B0D84 0x231CFD12
	static BOOL NETWORK_DOES_TUNABLE_EXIST(char* tunableContext, char* tunableName) { return invoke<BOOL>(0x7DDA20E1DC7E0BC8, tunableContext, tunableName); } // 0x85E5F8B9B898B20A 0x9FCE9C9A
	static BOOL NETWORK_ACCESS_TUNABLE_INT(char* tunableContext, char* tunableName, int* value) { return invoke<BOOL>(0xF41A60CC11BFCC7C, tunableContext, tunableName, value); } // 0x8BE1146DFD5D4468 0xE4B3726A
	static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(char* tunableContext, char* tunableName, float* value) { return invoke<BOOL>(0x5B241321D0C5A853, tunableContext, tunableName, value); } // 0xE5608CA7BC163A5F 0x41E8912A
	static BOOL NETWORK_ACCESS_TUNABLE_BOOL(char* tunableContext, char* tunableName) { return invoke<BOOL>(0xA78237FD05CA38B9, tunableContext, tunableName); } // 0xAA6A47A573ABB75A 0x8A04E1FE
	static BOOL _0x77DD2574FCE3D5A7(Any p0, Any p1) { return invoke<BOOL>(0x77DD2574FCE3D5A7, p0, p1); } // 0xE4E53E1419D81127
	static BOOL _0x4302F39EE057F42A(Any p0, Any p1, int* p2) { return invoke<BOOL>(0x4302F39EE057F42A, p0, p1, p2); } // 0x40FCE03E50E8DBE8
	static BOOL _0x2532C1A2BD63B230(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x2532C1A2BD63B230, p0, p1, p2); } // 0x972BC203BBC4C4D5
	static BOOL _0xDC42D9FCCBDAB3D2(Any p0, Any p1) { return invoke<BOOL>(0xDC42D9FCCBDAB3D2, p0, p1); } // 0xEA16B69D93D71A45
	static BOOL _0x37C1649BDCDC4400(Any p0, Any p1, BOOL p2) { return invoke<BOOL>(0x37C1649BDCDC4400, p0, p1, p2); } // 0xC7420099936CE286
	static BOOL _0x45A59EF58BB354E4(Any p0) { return invoke<BOOL>(0x45A59EF58BB354E4, p0); } // 0x187382F8A3E0A6C3 0xA78571CA
	static Any _0x52F996ED10926C5B() { return invoke<Any>(0x52F996ED10926C5B); } // 0x7DB53B37A2F211A0 0x053BB329
	static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0x32041D27F6861F13); } // 0x72433699B4E6DD64 0x3914463F
	static Any _0xEE3539FDA8E3E1A2() { return invoke<Any>(0xEE3539FDA8E3E1A2); } // 0xD38C4A6D047C019D 0x17CBC608
	static BOOL _0x11CBB6BC37A2CD7B(Any p0) { return invoke<BOOL>(0x11CBB6BC37A2CD7B, p0); } // 0x2E0BF682CC778D49 0xBFAA349B
	static BOOL _0xE0CBE2568EFEA1EB(Any p0, Any p1) { return invoke<BOOL>(0xE0CBE2568EFEA1EB, p0, p1); } // 0x0EDE326D47CD0F3E 0xBEB7281A
	static Any NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<Any>(0x2D83E9A276095707, vehicle, p1, p2, p3); } // 0x301A42153C9AD707 0x0E1B38AE
	static void _0x0877E81F85B15E69(Any p0) { invoke<Void>(0x0877E81F85B15E69, p0); } // 0xCD71A4ECAB22709E 0xBC54371B
	static void _0xF0A92C88969DAF76(Any p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xF0A92C88969DAF76, p0, p1, p2, p3, p4); } // 0xA7E30DE9272B6D49 0x644141C5
	static void _0xB7B99F3833B3D485(Any p0) { invoke<Void>(0xB7B99F3833B3D485, p0); } // 0x407091CF6037118E
	static void NETWORK_SET_PROPERTY_ID(Any p0) { invoke<Void>(0xDD51C11268811678, p0); } // 0x1775961C2FBBCB5C 0x5A74E873
	static void _0xB5B945F8CBBEE421() { invoke<Void>(0xB5B945F8CBBEE421); } // 0xC2B82527CA77053E 0x38BC35C8
	static void _0x020CE91AB52D6AB3(Any p0) { invoke<Void>(0x020CE91AB52D6AB3, p0); } // 0x367EF5E2F439B4C6 0x53C9563C
	static void _0xB3ED7703D532203A(BOOL p0) { invoke<Void>(0xB3ED7703D532203A, p0); } // 0x94538037EE44F5CF 0x6B97075B
	static void _0x366B3171E55D6C92() { invoke<Void>(0x366B3171E55D6C92); } // 0xBD0BE0BFC927EAC1
	static BOOL _0x30B824442ED93A85(Any p0) { return invoke<BOOL>(0x30B824442ED93A85, p0); } // 0x237D5336A9A54108
	static BOOL _0xA34F1EADC2CF65EE(Any p0, Any p1) { return invoke<BOOL>(0xA34F1EADC2CF65EE, p0, p1); } // 0x99B72C7ABDE5C910
	static Any _0xC164E84D97AD168D() { return invoke<Any>(0xC164E84D97AD168D); } // 0xF2EAC213D5EA0623 0x965EA007
	static Any _0xA67E8CAA460458D0() { return invoke<Any>(0xA67E8CAA460458D0); } // 0xEA14EEF5B7CD2C30 0xEEFC8A55
	static void _0xF9881FA4F6761DE3(Any p0) { invoke<Void>(0xF9881FA4F6761DE3, p0); } // 0xB606E6CC59664972 0x866D1B67
	static Any _0x9E948AFC7D141C5C() { return invoke<Any>(0x9E948AFC7D141C5C); } // 0x1D4DC17C38FEAFF0 0xED4A272F
	static Any _0xC04D9C488EE7CE58(Any p0) { return invoke<Any>(0xC04D9C488EE7CE58, p0); } // 0x662635855957C411 0x4ACF110C
	static Any _0x9DC17820C617F6E3(Any p0) { return invoke<Any>(0x9DC17820C617F6E3, p0); } // 0xB4271092CA7EDF48 0x1AA3A0D5
	static Any _0xC7A9E890C9B44A3C(Any p0) { return invoke<Any>(0xC7A9E890C9B44A3C, p0); } // 0xCA94551B50B4932C 0x37877757
	static Any _0xB2528E7DBDA779D6(Any p0) { return invoke<Any>(0xB2528E7DBDA779D6, p0); } // 0x2A7776C709904AB0 0x1CF89DA5
	static Any _0x04A542EBF4CCCB24(Any p0, Any p1) { return invoke<Any>(0x04A542EBF4CCCB24, p0, p1); } // 0x6F44CBF56D79FAC0 0x16E53875
	static void _0x7EB919FA33C2D087(Any p0, Any p1) { invoke<Void>(0x7EB919FA33C2D087, p0, p1); } // 0x58C21165F6545892 0x365C50EE
	static Any _0x565848B3396785BC() { return invoke<Any>(0x565848B3396785BC); } // 0x2EAC52B4019E2782 0x25E2DBA9
	static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0x3451282292C14F43, toggle); } // 0x9641A9FF718E9C5E 0xC1F6443B
	static BOOL _0x891B4FCD9508E131(Any p0) { return invoke<BOOL>(0x891B4FCD9508E131, p0); } // 0xA2F952104FC6DD4B 0x1FDC75DC
	static void _0x55919B5CE7FB5803() { invoke<Void>(0x55919B5CE7FB5803); } // 0x72D0706CD6CCDB58 0xCA7A0A49
	static Any _0xA0E9437ACFA31730(Any p0) { return invoke<Any>(0xA0E9437ACFA31730, p0); } // 0x722F5D28B61C5EA8 0x44A58B0A
	static Any _0x9E18F97D7FF37418() { return invoke<Any>(0x9E18F97D7FF37418); } // 0x883D79C4071E18B3 0xD32FA11F
	static void _0x1BACF94C35CBBB41() { invoke<Void>(0x1BACF94C35CBBB41); } // 0x265635150FB0D82E 0xA7FA70AE
	static void _0xA16442B0BBC27B34() { invoke<Void>(0xA16442B0BBC27B34); } // 0x444C4525ECE0A4B9 0xCC7DCE24
	static Any _0x20045D5CEAF71BF6() { return invoke<Any>(0x20045D5CEAF71BF6); } // 0x59328EB08C5CEB2B 0x70F6D3AD
	static void _0xAC144A9042F79834(Any p0, Any p1, Any p2) { invoke<Void>(0xAC144A9042F79834, p0, p1, p2); } // 0xFAE628F1E9ADB239
	static Any _0xC3CA125EF3E529D5(Any* p0) { return invoke<Any>(0xC3CA125EF3E529D5, p0); } // 0xC64DED7EF0D2FE37 0x2B7B57B3
	static BOOL _0xBECBD71B619787A4(Any p0) { return invoke<BOOL>(0xBECBD71B619787A4, p0); } // 0x4C61B39930D045DA 0xBAF52DD8
	static BOOL _0xDF10625E84CA76E4(Any p0) { return invoke<BOOL>(0xDF10625E84CA76E4, p0); } // 0x3A3D5568AF297CD5 0x9B9AFFF1
	static void _0x03C508844CF43294() { invoke<Void>(0x03C508844CF43294); } // 0x4F18196C8D38768D 0xC38E9DB0
	static Any _0xED1B42542EB48016() { return invoke<Any>(0xED1B42542EB48016); } // 0xC7ABAC5DE675EE3B 0x32A4EB22
	static Any _0x911CF9200954635C() { return invoke<Any>(0x911CF9200954635C); } // 0x0B0CC10720653F3B 0x9262744C
	static Any _0xAA2824C04DADB162() { return invoke<Any>(0xAA2824C04DADB162); } // 0x8B0C2964BA471961
	static Any _0x14CE5B9A9ECDE315() { return invoke<Any>(0x14CE5B9A9ECDE315); } // 0x88B588B41FF7868E
	static Any _0x3CD0FB4646473D30() { return invoke<Any>(0x3CD0FB4646473D30); } // 0x67FC09BC554A75E5
	static void _0x2BAB48AE0BDFF89E() { invoke<Void>(0x2BAB48AE0BDFF89E); } // 0x966DD84FB6A46017
	static BOOL _0x1F127A210588AECE(Any* p0, Any* p1) { return invoke<BOOL>(0x1F127A210588AECE, p0, p1); } // 0x152D90E4C1B4738A 0x08243B79
	static Any _0xDD99EA515D1A2B2D() { return invoke<Any>(0xDD99EA515D1A2B2D); } // 0x9FEDF86898F100E9 0x798D6C27
	static Any _0x0C79FCA655F69D95() { return invoke<Any>(0x0C79FCA655F69D95); } // 0x5E24341A7F92A74B 0xE69E8D0D
	static Any _0xA76FB0E65A8D9BBA() { return invoke<Any>(0xA76FB0E65A8D9BBA); } // 0x24E4E51FC16305F9 0x742075FE
	static Any _0x86F8081DC7761160() { return invoke<Any>(0x86F8081DC7761160); } // 0xFBC5E768C7A77A6A 0xCE569932
	static Any _0xF5344B4DBB3BFB90() { return invoke<Any>(0xF5344B4DBB3BFB90); } // 0xC55A0B40FFB1ED23 0x82146BE9
	static void _0x43EE07F0008D0E89() { invoke<Void>(0x43EE07F0008D0E89); } // 0x17440AA15D1D3739 0x133FF2D5
	static BOOL _0x41F7AE85834F362D(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x41F7AE85834F362D, p0, p1, p2, p3, p4, p5); } // 0x9BF438815F5D96EA 0xCBA7242F
	static BOOL _0x75D8FB967C8D662F(Any p0, Any p1, Any p2, Any* p3, Any p4, BOOL p5) { return invoke<BOOL>(0x75D8FB967C8D662F, p0, p1, p2, p3, p4, p5); } // 0x692D58DF40657E8C
	static BOOL _0xC00DD9BE3C1C9D18(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0xC00DD9BE3C1C9D18, p0, p1, p2); } // 0x158EC424F35EC469 0xDED82A6E
	static BOOL _0xFA9E64F6A218A0D5(Any* p0, Any p1, BOOL p2, Any* p3) { return invoke<BOOL>(0xFA9E64F6A218A0D5, p0, p1, p2, p3); } // 0xC7397A83F7A2A462
	static BOOL _0xF2C643308552D7C9(Any p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xF2C643308552D7C9, p0, p1, p2, p3); } // 0x6D4CB481FAC835E8 0x40CF0783
	static BOOL _0x7CDD57D2598849A7(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x7CDD57D2598849A7, p0, p1, p2, p3); } // 0xD5A4B59980401588 0x4609D596
	static BOOL _0xE35E484196A41F3B(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE35E484196A41F3B, p0, p1, p2, p3); } // 0x3195F8DD0D531052 0x4C2C0D1F
	static BOOL _0x6BFC0DC23C6D9E14(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x6BFC0DC23C6D9E14, p0, p1, p2, p3); } // 0xF9E1CCAE8BA4C281 0x9EFBD5D1
	static BOOL _0xDA2CBB947370FE8F(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0xDA2CBB947370FE8F, p0, p1, p2, p3, p4); } // 0x9F6E2821885CAEE2 0xA6D8B798
	static BOOL _0xE8BC291351A93D18(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return invoke<BOOL>(0xE8BC291351A93D18, p0, p1, p2, p3, p4); } // 0x678BB03C1A3BD51E 0x67E74842
	static BOOL SET_BALANCE_ADD_MACHINE(Any* p0, Any* p1) { return invoke<BOOL>(0xB38E733F2D02C3A3, p0, p1); } // 0x815E5E3073DA1D67 0xE123C7AC
	static BOOL SET_BALANCE_ADD_MACHINES(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0xAE1D219B29908ED5, p0, p1, p2); } // 0xB8322EEB38BE7C26 0x22C33603
	static BOOL _0xE1370F5B892C5CB2(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xE1370F5B892C5CB2, p0, p1, p2, p3); } // 0xA7862BC5ED1DFD7E 0x37F5BD93
	static BOOL _0x29C8E509BA179511(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x29C8E509BA179511, p0, p1, p2, p3); } // 0x97A770BEEF227E2B 0x1CFB3F51
	static BOOL _0x7A6FB9F21997AE27(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x7A6FB9F21997AE27, p0, p1, p2, p3); } // 0x5324A0E3E4CE3570 0x87D1E6BD
	static void _0xC30E2E887CBDB42D() { invoke<Void>(0xC30E2E887CBDB42D); } // 0xE9B99B6853181409 0x021D5A94
	static Any _0xC8119A254B86EE60() { return invoke<Any>(0xC8119A254B86EE60); } // 0xD53ACDBEF24A46E8 0x4908A514
	static Any _0xCE92FB4F59E8597C() { return invoke<Any>(0xCE92FB4F59E8597C); } // 0x02ADA21EA2F6918F 0x50296140
	static Any _0x15AFD2E5CE57137B() { return invoke<Any>(0x15AFD2E5CE57137B); } // 0x941E5306BCD7C2C7 0x3970B0DA
	static Any _0xEB09E57B1D1B59CF() { return invoke<Any>(0xEB09E57B1D1B59CF); } // 0xC87E740D9F3872CC 0xC1487110
	static Any _0x29C67ED361B2369B() { return invoke<Any>(0x29C67ED361B2369B); } // 0xEDF7F927136C224B 0xCC2356E3
	static Any _0x0908185FB71B5188() { return invoke<Any>(0x0908185FB71B5188); } // 0xE0A6138401BCB837 0x2DE69817
	static Any _0x183BEC9693A58A95() { return invoke<Any>(0x183BEC9693A58A95); } // 0x769951E2455E2EB5 0x81BD8D3B
	static Any _0x560755072CD54D09() { return invoke<Any>(0x560755072CD54D09); } // 0x3A17A27D75C74887 0x8E1D8F78
	static void _0xB0D7811795A40F37() { invoke<Void>(0xB0D7811795A40F37); } // 0xBA96394A0EECFA65 0x0D35DD93
	static Any _0x14EBCAE9F7A743DC(Any p0) { return invoke<Any>(0x14EBCAE9F7A743DC, p0); } // 0xCD67AD041A394C9C 0x8F3137E6
	static BOOL _0x3767E04EE904B71D(Any p0, Any* p1) { return invoke<BOOL>(0x3767E04EE904B71D, p0, p1); } // 0x584770794D758C18
	static BOOL _0xDC66873D5776FC44(Any p0) { return invoke<BOOL>(0xDC66873D5776FC44, p0); } // 0x8C8D2739BA44AF0F
	static Any _0x655A8B437C462161(Any p0) { return invoke<Any>(0x655A8B437C462161, p0); } // 0x703F12425ECA8BF5 0xB9137BA7
	static BOOL _0x897C65CDE71710BD(Any p0) { return invoke<BOOL>(0x897C65CDE71710BD, p0); } // 0xAEAB987727C5A8A4 0x9FEEAA9C
	static Any _0x074FB1E119A73D4F(Any p0) { return invoke<Any>(0x074FB1E119A73D4F, p0); } // 0xA7BAB11E7C9C6C5A 0x5E8A7559
	static Any _0xB91AC4578E287878(Any p0) { return invoke<Any>(0xB91AC4578E287878, p0); } // 0x55AA95F481D694D2 0x331AEABF
	static Any _0x24823910DE03EC63(Any p0) { return invoke<Any>(0x24823910DE03EC63, p0); } // 0xC0173D6BFF4E0348 0x0E5E8E5C
	static Any _0xC5C00B64EEBF56DA(Any p0) { return invoke<Any>(0xC5C00B64EEBF56DA, p0); } // 0xBF09786A7FCAB582 0xA5A0C695
	static Any _0x63D8C626914F8AF3(Any p0) { return invoke<Any>(0x63D8C626914F8AF3, p0); } // 0x7CF0448787B23758 0x91534C6E
	static Any _0xFEFD2E42DDB1E6D3(Any p0, Any p1) { return invoke<Any>(0xFEFD2E42DDB1E6D3, p0, p1); } // 0xBAF6BABF9E7CCC13 0x744A9EA5
	static void _0xECDAEFEC84BE730B(Any p0, Any* p1) { invoke<Void>(0xECDAEFEC84BE730B, p0, p1); } // 0xCFD115B373C0DF63 0xA19A238D
	static Any _0xE713AE17CAA0FA40(Any p0, Any p1) { return invoke<Any>(0xE713AE17CAA0FA40, p0, p1); } // 0x37025B27D9B658B1 0xFF7D44E6
	static BOOL _0xC223EDCDD1D0EA28(Any p0) { return invoke<BOOL>(0xC223EDCDD1D0EA28, p0); } // 0x1D610EB0FEA716D9
	static BOOL _0xD52BE9868E5BC1BE(Any p0) { return invoke<BOOL>(0xD52BE9868E5BC1BE, p0); } // 0x7FCC39C46C3C03BD
	static Any _0xF8F6C9FB0917FD3B(Any p0) { return invoke<Any>(0xF8F6C9FB0917FD3B, p0); } // 0x32DD916F3F7C9672 0xA2C5BD9D
	static BOOL _0x3858AF209AA154BF(Any p0) { return invoke<BOOL>(0x3858AF209AA154BF, p0); } // 0x3054F114121C21EA 0xA850DDE1
	static BOOL _0xA9A18DE82F3F9A7A(Any p0) { return invoke<BOOL>(0xA9A18DE82F3F9A7A, p0); } // 0xA9240A96C74CCA13 0x8F6754AE
	static Any _0xE8469AE34D66DBB7(Any p0, Any p1) { return invoke<Any>(0xE8469AE34D66DBB7, p0, p1); } // 0x1ACCFBA3D8DAB2EE 0x1E34953F
	static Any _0x2ABB8BCE9B0A7BD0(Any p0, Any p1) { return invoke<Any>(0x2ABB8BCE9B0A7BD0, p0, p1); } // 0x759299C5BB31D2A9 0x771FE190
	static Any _0xE1A834D508086D10(Any p0, Any p1) { return invoke<Any>(0xE1A834D508086D10, p0, p1); } // 0x87E5C46C187FE0AE 0x3276D9D3
	static Any _0x1F2F01F3D2D27620(Any p0, Any p1) { return invoke<Any>(0x1F2F01F3D2D27620, p0, p1); } // 0x4E548C0D7AE39FF9 0x41A0FB02
	static BOOL _0x45CB52B78AD3503A(Any p0) { return invoke<BOOL>(0x45CB52B78AD3503A, p0); } // 0x70EA8DA57840F9BE 0x11DC0F27
	static BOOL _0x89D883AA92B15723(Any p0) { return invoke<BOOL>(0x89D883AA92B15723, p0); } // 0x993CBE59D350D225 0x0DEB3F5A
	static Any _0x171DF6A0C07FB3DC(Any p0, Any p1) { return invoke<Any>(0x171DF6A0C07FB3DC, p0, p1); } // 0x171DF6A0C07FB3DC 0x84315226
	static Any _0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) { return invoke<Any>(0x7FD2990AF016795E, p0, p1, p2, p3, p4); } // 0x7FD2990AF016795E 0x38FC2EEB
	static Any _0x65AC0B4F86FB5365(Any p0) { return invoke<Any>(0x65AC0B4F86FB5365, p0); } // 0x5E0165278F6339EE 0x1C4F9FDB
	static BOOL _0xF3BC0859E4935E03(Any p0) { return invoke<BOOL>(0xF3BC0859E4935E03, p0); } // 0x2D5DC831176D0114 0xA69AE16C
	static BOOL _0xEE98E2E29EA2059A(Any p0) { return invoke<BOOL>(0xEE98E2E29EA2059A, p0); } // 0xEBFA8D50ADDC54C4 0xF50BC67A
	static BOOL _0x28AD5615B6F620C3(Any p0) { return invoke<BOOL>(0x28AD5615B6F620C3, p0); } // 0x162C23CA83ED0A62 0xB3BBD241
	static Any _0x0A0D6D6FB22DA5ED(Any p0, Any p1) { return invoke<Any>(0x0A0D6D6FB22DA5ED, p0, p1); } // 0x40F7E66472DF3E5C 0x70A2845C
	static BOOL _0xE9DBC209B20077E2(Any p0) { return invoke<BOOL>(0xE9DBC209B20077E2, p0); } // 0x5A34CD9C3C5BEC44 0x346B506C
	static void _0x6C17957A64166807() { invoke<Void>(0x6C17957A64166807); } // 0x68103E2247887242 0x0095DB71
	static BOOL _0xC88CD69C1DE94116(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xC88CD69C1DE94116, p0, p1, p2); } // 0x1DE0F5F50D723CAA 0xAD334B40
	static BOOL _0x4017BF489D877F0B(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x4017BF489D877F0B, p0, p1, p2); } // 0x274A1519DFC1094F 0x980D45D7
	static BOOL _0x3910415266A20960(Any* p0, BOOL p1, Any* p2) { return invoke<BOOL>(0x3910415266A20960, p0, p1, p2); } // 0xD05D1A6C74DA3498 0x48CCC328
	static Any _0xFABC02A36D8FA3A1() { return invoke<Any>(0xFABC02A36D8FA3A1); } // 0x45E816772E93A9DB 0x8E664EFD
	static Any _0xD65F5EF2A24C65BE() { return invoke<Any>(0xD65F5EF2A24C65BE); } // 0x299EF3C576773506 0x611E0BE2
	static Any _0x0502F4988952B29C() { return invoke<Any>(0x0502F4988952B29C); } // 0x793FF272D5B365F4 0xF0211AC1
	static Any _0xC0B5F0A20A5DB60A() { return invoke<Any>(0xC0B5F0A20A5DB60A); } // 0x5A0A3D1A186A5508 0x1F0DD8AF
	static void _0xD80B575217743C85() { invoke<Void>(0xD80B575217743C85); } // 0xA1E5E0204A6FCC70 0x405ECA16
	static BOOL _0xFBEE735112D96B04(Any* p0, Any* p1) { return invoke<BOOL>(0xFBEE735112D96B04, p0, p1); } // 0xB746D20B17F2A229 0x9567392B
	static Any _0x19A80A299FBDCE0C() { return invoke<Any>(0x19A80A299FBDCE0C); } // 0x63B406D7884BFA95 0xF79FFF3C
	static Any _0x31DFF08F8920859E() { return invoke<Any>(0x31DFF08F8920859E); } // 0x4D02279C83BE69FE 0xA7F3F82B
	static Any _0x908205F8A7AE98AC() { return invoke<Any>(0x908205F8A7AE98AC); } // 0x597F8DBA9B206FC7 0x410C61D1
	static BOOL _0xC42ED2D5831A1351(Any p0) { return invoke<BOOL>(0xC42ED2D5831A1351, p0); } // 0x5CAE833B0EE0C500 0x0D4F845D
	static void _0xDA768657961A2297() { invoke<Void>(0xDA768657961A2297); } // 0x61A885D3F7CFEE9A 0xE13C1F7F
	static void _0xA841581DB3251DF0(BOOL p0) { invoke<Void>(0xA841581DB3251DF0, p0); } // 0xF98DDE0A8ED09323 0x213C6D36
	static void _0x5D9122EF82E6DF34(BOOL p0) { invoke<Void>(0x5D9122EF82E6DF34, p0); } // 0xFD75DABC0957BF33 0x511E6F50
	static BOOL _0x64ADA64FA07403BA(Any p0) { return invoke<BOOL>(0x64ADA64FA07403BA, p0); } // 0xF53E48461B71EECB 0xB4668B23
	static BOOL _0xBE826014532071F4(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xBE826014532071F4, p0, p1, p2); } // 0x098AB65B9ED9A9EC 0x30B51753
	static Any _0xEF463CA1E867C272() { return invoke<Any>(0xEF463CA1E867C272); } // 0xDC48473142545431 0x02DAD93F
	static BOOL _0xF7F7EC8C8029B267(Any p0) { return invoke<BOOL>(0xF7F7EC8C8029B267, p0); } // 0x0AE1F1653B554AB9 0x2D947814
	static Any _0x3F44CB8D8C4520AF() { return invoke<Any>(0x3F44CB8D8C4520AF); } // 0x62B9FEC9A11F10EF 0x37A28C26
	static Any _0xBE252CE6EC5B94DA() { return invoke<Any>(0xBE252CE6EC5B94DA); } // 0xA75E2B6733DA5142 0x11E8B5CD
	static Any _0x110C8488A1967972() { return invoke<Any>(0x110C8488A1967972); } // 0x43865688AE10F0D7 0x429AEAB3
	static Any TEXTURE_DOWNLOAD_REQUEST(Any* p0, Any* p1, Any* p2, BOOL p3) { return invoke<Any>(0x3528AF23D3CD3E32, p0, p1, p2, p3); } // 0x16160DA74A8E74A2 0xAD546CC3
	static Any _0xD8185D1152E732D0(Any* p0, Any* p1, BOOL p2) { return invoke<Any>(0xD8185D1152E732D0, p0, p1, p2); } // 0x0B203B4AFDE53A4F 0x1856D008
	static Any _0x3A6817005A47B5AD(Any* p0, Any p1, Any p2, Any p3, Any* p4, BOOL p5) { return invoke<Any>(0x3A6817005A47B5AD, p0, p1, p2, p3, p4, p5); } // 0x308F96458B7087CC 0x68C9AF69
	static void TEXTURE_DOWNLOAD_RELEASE(Any p0) { invoke<Void>(0x76B25303F545815B, p0); } // 0x487EB90B98E9FB19 0xEE8D9E70
	static BOOL _0x55C1A458EE516CDC(Any p0) { return invoke<BOOL>(0x55C1A458EE516CDC, p0); } // 0x5776ED562C134687 0xE4547765
	static Any TEXTURE_DOWNLOAD_GET_NAME(Any p0) { return invoke<Any>(0xCA07A7B0A6C9C766, p0); } // 0x3448505B6E35262D 0xA40EF65A
	static Any _0xFB2975363E33E5BB(Any p0) { return invoke<Any>(0xFB2975363E33E5BB, p0); } // 0x8BD6C6DEA20E82C6 0x03225BA3
	static Any _0x5D17CFFDEB082454() { return invoke<Any>(0x5D17CFFDEB082454); } // 0x60EDD13EB3AC1FF3 0x4DEBC227
	static Any _0x7936A488F63F9C40() { return invoke<Any>(0x7936A488F63F9C40); } // 0xEFFB25453D8600F9 0x5C065D55
	static Any _0xC52EFBF72CA39043() { return invoke<Any>(0xC52EFBF72CA39043); } // 0x66B59CFFD78467AF 0x0CA1167F
	static Any _0xD62CB06ABEA608E2() { return invoke<Any>(0xD62CB06ABEA608E2); } // 0x606E4D3E3CCCF3EB 0x424C6E27
	static int _IS_ROCKSTAR_BANNED() { return invoke<int>(0xDA96831F0541D776); } // 0x8020A73847E0CA7D 0xD3BBE42F
	static int _IS_SOCIALCLUB_BANNED() { return invoke<int>(0xE79CF004BD0D9E96); } // 0xA0AD7E2AF5349F61 0xBDBB5948
	static int _IS_PLAYER_BANNED() { return invoke<int>(0x2CDD8D841F0C2FA3); } // 0x5F91D5D0B36AA310 0x97287D68
	static Any _0xCE8A51232A14F3FD() { return invoke<Any>(0xCE8A51232A14F3FD); } // 0x422D396F80A96547 0xC6EA802E
	static BOOL _0x88DE6ADB9FAAF7EC(Any p0) { return invoke<BOOL>(0x88DE6ADB9FAAF7EC, p0); } // 0xA699957E60D80214 0xFD261E30
	static BOOL _0x1BAA4B7361D36128(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x1BAA4B7361D36128, p0, p1, p2); } // 0xC22912B1D85F26B1 0x8570DD34
	static Any _0xACCC319A72FE75AB() { return invoke<Any>(0xACCC319A72FE75AB); } // 0x593570C289A77688
	static Any _0x3C110F92F2383E56() { return invoke<Any>(0x3C110F92F2383E56); } // 0x91B87C55093DE351
	static Any _0x9827508975F6B59C(Any p0) { return invoke<Any>(0x9827508975F6B59C, p0); } // 0x36391F397731595D
	static Any _0xEB05C57D9F884ACC(Any p0) { return invoke<Any>(0xEB05C57D9F884ACC, p0); } // 0xDEB2B99A1AF1A2A6
	static void _0x8112F77DD6A30FA3() { invoke<Void>(0x8112F77DD6A30FA3); } // 0x9465E683B12D3F6B 0x273C6180
	static void _0x9382DAABFF085943() { invoke<Void>(0x9382DAABFF085943); } // 0xB7C7F6AD6424304B 0x371BBA08
	static void _0x138DB7148EB724DC(BOOL p0) { invoke<Void>(0x138DB7148EB724DC, p0); } // 0xC505036A35AFD01B 0xA100CC97
	static void _0x331CA297F4B901B5(Any p0, BOOL p1) { invoke<Void>(0x331CA297F4B901B5, p0, p1); } // 0x267C78C60E806B9A 0xBB2D33D3
	static void _0xB8039AF5AF6FE8BC(Any p0) { invoke<Void>(0xB8039AF5AF6FE8BC, p0); } // 0x6BFF5F84102DF80A
	static void _0x94DCE10397CA59A9() { invoke<Void>(0x94DCE10397CA59A9); } // 0x5C497525F803486B
	static Any _0x34D2C2592B050F59() { return invoke<Any>(0x34D2C2592B050F59); } // 0x6FB7BB3607D27FA2
	static void _0xF3F149BAC2FBDF5C() { invoke<Void>(0xF3F149BAC2FBDF5C); } // 0x45A83257ED02D9BC
}

namespace NETWORKCASH
{
	static void NETWORK_INITIALIZE_CASH(Any p0, Any p1) { invoke<Void>(0xB61CBFDC0F1C9E2A, p0, p1); } // 0x3DA5ECD1A56CBA6D 0x66DA9935
	static void NETWORK_DELETE_CHARACTER(int characterIndex, BOOL p1, BOOL p2) { invoke<Void>(0xE4EFCD1496203117, characterIndex, p1, p2); } // 0x05A50AF38947EB8D 0xA9F7E9C3
	static void _0x58EFC3A305CB34F2(Any p0) { invoke<Void>(0x58EFC3A305CB34F2, p0); } // 0xA921DED15FDF28F5 0x19F0C471
	static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* p1) { invoke<Void>(0xD993D1D56EBC7CCB, amount, p1); } // 0xFB18DF9CB95E0105 0xC6047FDB
	static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int amount, Any* p1) { invoke<Void>(0x9D1E453D1F248965, amount, p1); } // 0x56A3B51944C50598 0x4ED71C1A
	static Any _0xA7A528738D684B5E() { return invoke<Any>(0xA7A528738D684B5E); } // 0x1C2473301B1C66BA 0xA27B9FE8
	static void NETWORK_REFUND_CASH(Any p0, Any* p1, Any* p2, BOOL p3) { invoke<Void>(0x0A39257449C19EA2, p0, p1, p2, p3); } // 0xF9C812CD7C46E817 0x07C92F21
	static BOOL _0xFCC0FC752FD6C84A(Any p0, BOOL p1, BOOL p2) { return invoke<BOOL>(0xFCC0FC752FD6C84A, p0, p1, p2); } // 0x81404F3DC124FE5B 0x8474E6F0
	static BOOL _0x4EDA24C9ECE61089(Any p0) { return invoke<BOOL>(0x4EDA24C9ECE61089, p0); } // 0x3A54E33660DED67F 0xE3802533
	static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0x91F69FD4C709E34F, amount); } // 0xED1517D3AF17C698 0x70A0ED62
	static void _0x83E3F726EA595EE5(Any p0) { invoke<Void>(0x83E3F726EA595EE5, p0); } // 0xA03D4ACE0A3284CE 0x33C20BC4
	static void _0x1F541835D880D78E(Any p0) { invoke<Void>(0x1F541835D880D78E, p0); } // 0xF514621E8EA463D0 0x30B3EC0A
	static void _0x36BC404DE498A9B6(Any p0) { invoke<Void>(0x36BC404DE498A9B6, p0); } // 0xB1CC1B9EC3007A2A 0xEAF04923
	static void NETWORK_EARN_FROM_BETTING(int amount, char* p1) { invoke<Void>(0x493D6495D2B04EA2, amount, p1); } // 0x827A5BA1A44ACA6D 0xA0F7F07C
	static void NETWORK_EARN_FROM_JOB(int amount, char* p1) { invoke<Void>(0x5E75473B71E9B447, amount, p1); } // 0xB2CC4836834E8A98 0x0B6997FC
	static void _0x275E12299AAA204C(Any p0, Any* p1) { invoke<Void>(0x275E12299AAA204C, p0, p1); } // 0x61326EE6DF15B0CA 0x5E81F55C
	static void _0xD8761072B4DAE76C(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xD8761072B4DAE76C, p0, p1, p2); } // 0x2B171E6B2F64D8DF 0x2BEFB6C4
	static void NETWORK_EARN_FROM_BOUNTY(Any p0, Any* p1, Any* p2, Any p3) { invoke<Void>(0xD6B3ADED36227BEA, p0, p1, p2, p3); } // 0x131BB5DA15453ACF 0x127F2DAE
	static void NETWORK_EARN_FROM_IMPORT_EXPORT(Any p0, Any p1) { invoke<Void>(0x135226FAF36BDC06, p0, p1); } // 0xF92A014A634442D6 0xF11FC458
	static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xB9FE3D99EAA4E512, amount); } // 0x45B8154E077D9E4D 0xE6B90E9C
	static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0xA11DC47991D58E3E, amount, propertyName); } // 0x849648349D77F5C5 0x9BE4F7E1
	static void _0x3FA38C856A93A12C(Any p0, Any p1) { invoke<Void>(0x3FA38C856A93A12C, p0, p1); } // 0x515B4A22E4D3C6D7 0x866004A8
	static void _0x093E5B8447CE6C11(Any p0) { invoke<Void>(0x093E5B8447CE6C11, p0); } // 0x4337511FA8221D36 0xCC068380
	static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0x41627A990674D8BB, amount); } // 0x02CE1D6AC0FC73EA 0x5A3733CC
	static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xAF72601A82EC1D7B, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xB539BD8A4C1EECF8 0xF803589D
	static void _0x58CF22C713115658(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0x58CF22C713115658, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x3F4D00167E41E0AD 0x96B8BEE8
	static void _0x66334C7FF5555C04(Any p0, Any* p1, Any p2) { invoke<Void>(0x66334C7FF5555C04, p0, p1, p2); } // 0x6EA318C91C1A8786
	static void _0xC88A639AC2C44C57(int p0, char* p1, Any* p2) { invoke<Void>(0xC88A639AC2C44C57, p0, p1, p2); } // 0xFB6DB092FBAE29E6
	static void _0x5D105ACC0E7F3DD8(Any p0, Any* p1, Any* p2) { invoke<Void>(0x5D105ACC0E7F3DD8, p0, p1, p2); } // 0x6816FB4416760775
	static BOOL _IS_ITEM_AVAILABLE(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x986739A8C7230C77, p0, p1, p2, p3, p4); } // 0xAB3CAA6B422164DA 0x5AA379D9
	static BOOL _0x6CEA35504D05EED3(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5) { return invoke<BOOL>(0x6CEA35504D05EED3, p0, p1, p2, p3, p4, p5); } // 0x7303E27CC6532080
	static void NETWORK_BUY_ITEM(Ped player, Hash item, Any p2, Any p3, BOOL p4, Any* p5, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0x9CD4EE8D26F8578B, player, item, p2, p3, p4, p5, p6, p7, p8, p9); } // 0xF0077C797F66A355 0xA07B6368
	static void NETWORK_SPENT_TAXI(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x082400806732ECBC, p0, p1, p2); } // 0x17C3A7D31EAE39F9 0x1F3DB3E3
	static void _0x1F43CCBCF5BBFF0E(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x1F43CCBCF5BBFF0E, p0, p1, p2); } // 0x5FD5ED82CBBE9989 0xBE70849B
	static void _0x0AB937982C03722B(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x0AB937982C03722B, p0, p1, p2); } // 0xAFE08B35EC0C9EAE 0x451A2644
	static void _0xFCCECD2D13435A3C(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xFCCECD2D13435A3C, p0, p1, p2, p3); } // 0x9346E14F2AF74D46 0x224A3488
	static void NETWORK_SPENT_BETTING(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0x9C01225532B6E771, p0, p1, p2, p3, p4); } // 0x1C436FD11FFA692F 0xF8A07513
	static void _0x28CE86553A513FA0(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x28CE86553A513FA0, p0, p1, p2, p3); } // 0xEE99784E4467689C 0x8957038E
	static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x8BEFA971A93E57CE, cost, p1, p2); } // 0xD9B067E55253E3DD 0x832150E5
	static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x5B8653D46968BB4D, cost, p1, p2); } // 0x763B4BD305338F19 0x40470683
	static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xBDC7388F22507FFB, cost, p1, p2); } // 0x81AA4610E3FD3A69 0x047547D4
	static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x6B5BEB9AA38E9699, p0, p1, p2); } // 0xB162DC95C0A3317B 0x4B643076
	static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3) { invoke<Void>(0xB45BE6257D42C5B1, amount, victim, p2, p3); } // 0x7B718E197453F2D9 0xCB89CBE0
	static void NETWORK_BUY_PROPERTY(float propertyCost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xEEEA65529775AB89, propertyCost, propertyName, p2, p3); } // 0x650A08A280870AF6 0x7D479AAB
	static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x81322C2A35B44710, p0, p1, p2); } // 0x7BF1D73DB2ECA492 0x27EEBCAB
	static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xB4D18549C65D9CD7, p0, p1, p2); } // 0x524EE43A37232C00 0xB241CABD
	static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x404CD71F5A2902EC, p0, p1, p2); } // 0xA6DD8458CE24012C 0xDE7D398C
	static void NETWORK_SPENT_CASH_DROP(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xDAF00615F291F636, p0, p1, p2); } // 0x289016EC778D60E0 0x87BD1D11
	static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xAF9C20612C35C5A6, p0, p1, p2); } // 0xE404BFB981665BF0 0xE792C4A5
	static void _0x2F457784C4212878(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x2F457784C4212878, p0, p1, p2); } // 0x995A65F15F581359 0xE6AAA0D5
	static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x9C2A4ECEE0AC3BBB, p0, p1, p2); } // 0xE7B80E2BF9D80BD6 0x99CF02C4
	static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xC8BA32BC648AAD73, p0, p1, p2, p3); } // 0xE1B13771A843C4F6 0xE7CB4F95
	static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xD6C95ABE9485881E, p0, p1, p2); } // 0xA628A745E2275C5D 0x20DDCF2F
	static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x3A6A82DA89F2C6DD, p0, p1, p2); } // 0x6E176F1B18BC0637 0x2F7836E2
	static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xBC6761CA7450F63D, p0, p1, p2, p3, p4); } // 0xEC03C719DB2F4306 0x8283E028
	static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xA3AD1229A0D330CB, p0, p1, p2, p3); } // 0x6B38ECB05A63A685 0x1100CAF5
	static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x858B244702914E37, p0, p1, p2); } // 0x7FE61782AD94CC09 0xAE7FF044
	static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x5869E2F333DB95DB, p0, p1, p2); } // 0xD9B86B9872039763 0x1B3803B1
	static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x3E1BA21BCD454723, p0, p1, p2); } // 0x6D3A430D1A809179 0x7E97C92C
	static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x3AF5DE31CA707514, p0, p1, p2); } // 0xB21B89501CFAC79E 0x78436D07
	static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x4B4DA75C8EF14BE7, p0, p1, p2); } // 0x812F5488B1B2A299 0x5AEE2FC1
	static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Any p0, Any p1, Any* p2, BOOL p3, BOOL p4) { invoke<Void>(0xBD5AA78E0B28B328, p0, p1, p2, p3, p4); } // 0x9FF28D88C766E3E8 0x4E665BB2
	static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0x6D357CA3057D2B75, p0, p1, p2, p3); } // 0xACDE7185B374177C 0x1A89B5FC
	static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE425464C005B1213, p0, p1, p2); } // 0x29B260B84947DFCC 0x3401FC96
	static void _0xDB1C5682ACA51A95(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xDB1C5682ACA51A95, p0, p1, p2); } // 0x6A445B64ED7ABEB5 0x54198922
	static Any _0x753FD221AD47F821(Any p0, Any p1, Any p2) { return invoke<Any>(0x753FD221AD47F821, p0, p1, p2); } // 0x20194D48EAEC9A41 0xC5D8B1E9
	static void _0x5C45F524ED731317(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x5C45F524ED731317, p0, p1, p2, p3); } // 0x7C99101F7FCE2EE5 0x3D96A21C
	static void _0x89D569D5896D4167(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x89D569D5896D4167, p0, p1, p2); } // 0xD5BB406F4E04019F 0x2E51C61C
	static void _0x826C2688D774D1DF(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x826C2688D774D1DF, p0, p1, p2); } // 0x8204DA7934DF3155 0xD57A5125
	static void _0x252CD6B94DD21AC5(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x252CD6B94DD21AC5, p0, p1, p2); } // 0x9D26502BB97BFE62
	static void _0xBD6581820C39661C(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xBD6581820C39661C, p0, p1, p2, p3); } // 0x8A7B3952DD64D2B5 0xD9622D64
	static Any _0x51BDAE09DB01237F() { return invoke<Any>(0x51BDAE09DB01237F); } // 0x7C4FCCD2E4DEB394
	static Any _0xB5991A111ED1D451() { return invoke<Any>(0xB5991A111ED1D451); } // 0x76EF28DA05EA395A 0x16184FB5
	static Any _0x07EE2B2D0517CC52(Any p0) { return invoke<Any>(0x07EE2B2D0517CC52, p0); } // 0xA40F9C2623F6A8B5 0x4F5B781C
	static Any _0xF6DCA47928BA871B() { return invoke<Any>(0xF6DCA47928BA871B); } // 0x5CBAD97E059E1B94 0xADF8F882
	static Any _0xDCE430D92D8166C8() { return invoke<Any>(0xDCE430D92D8166C8); } // 0xA6FA3979BED01B81
	static BOOL _0x46A6CA8BC4260FD0(Any p0, Any p1) { return invoke<BOOL>(0x46A6CA8BC4260FD0, p0, p1); } // 0xDC18531D7019A535
	static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xB314DF524665BC5F, p0, p1, p2, p3); } // 0x5D17BE59D2123284 0x41F5F10E
	static Any _0xA427CC0CA6986CDA(Any p0) { return invoke<Any>(0xA427CC0CA6986CDA, p0); } // 0xF70EFA14FE091429 0x8B755993
	static BOOL _0x970721F8AC37249B(Any p0) { return invoke<BOOL>(0x970721F8AC37249B, p0); } // 0xE260E0BB9CD995AC 0x8F266745
	static Any _0x6342E3D2AB6A0FA9(Any p0) { return invoke<Any>(0x6342E3D2AB6A0FA9, p0); } // 0xE154B48B68EF72BC 0x531E4892
	static Any _0x520CF4DCC3067247(Any p0) { return invoke<Any>(0x520CF4DCC3067247, p0); } // 0x6FCF8DDEA146C45B 0xB96C7ABE
}

namespace DLC1
{
	static int _0x61A75288F5F8A3AF(int p0) { return invoke<int>(0x61A75288F5F8A3AF, p0); } // 0x278F76C3B0A8F109 0x71D0CF3E
	static BOOL _0x2F8FF89EB72ED821(int p0, int p1, Any* outComponent) { return invoke<BOOL>(0x2F8FF89EB72ED821, p0, p1, outComponent); } // 0xFF56381874F82086 0x2E9D628C
	static void INIT_SHOP_PED_COMPONENT(Player outComponent) { invoke<Void>(0x995423D9B410BDBF, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC
	static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0x000A977133A8F599, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50
	static int _0x39C2FE8F40C5A04A(int p0, int p1, int p2, int p3) { return invoke<int>(0x39C2FE8F40C5A04A, p0, p1, p2, p3); } // 0x50F457823CE6EB5F 0xC937FF3D
	static int _GET_NUM_PROPS_FROM_OUTFIT(int playerId, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xD0812E98EF2A0A39, playerId, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C
	static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0x8998978E3A99A10E, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904
	static void GET_SHOP_PED_COMPONENT(Any p0, Any* p1) { invoke<Void>(0x81F1FCD299FFB90B, p0, p1); } // 0x74C0E2A57EC66760 0xB39677C5
	static void GET_SHOP_PED_QUERY_PROP(Any p0, Any* p1) { invoke<Void>(0x1296FB4E21A07F7E, p0, p1); } // 0xDE44A00999B2837D 0x1D3C1466
	static void _0x2941C21F7B8B5B16(Any p0, Any* p1) { invoke<Void>(0x2941C21F7B8B5B16, p0, p1); } // 0x5D5CAFF661DDF6FC
	static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0x0F7E74F307921734, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12
	static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xEFE9C43397BD1F08, entity, componentId, propIndex, propTextureIndex); } // 0x5D6160275CAEC8DD 0x7D876DC0
	static int _0xB8772D94C8AA4FC9(Hash componentHash) { return invoke<int>(0xB8772D94C8AA4FC9, componentHash); } // 0xC17AD0E5752BECDA 0x159751B4
	static void GET_VARIANT_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0xA04D380AE42D9E92, componentHash, componentId, p2, p3, p4); } // 0x6E11F282F11863B6 0xE4FF7103
	static int _GET_NUM_FORCED_COMPONENTS(Hash componentHash) { return invoke<int>(0x4DDBDD2782B722AD, componentHash); } // 0xC6B9DB42C04DD8C3 0xCE70F183
	static Any _0x9650C629BF1B8993(Any p0) { return invoke<Any>(0x9650C629BF1B8993, p0); } // 0x017568A8182D98A6
	static void GET_FORCED_COMPONENT(Hash componentHash, int componentId, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x52254F515544E21E, componentHash, componentId, p2, p3, p4); } // 0x6C93ED8C2F74859B 0x382C70BE
	static void _0x1D4BDCFFF0B06608(Any p0, Any p1, Any* p2, Any* p3, Any* p4) { invoke<Void>(0x1D4BDCFFF0B06608, p0, p1, p2, p3, p4); } // 0xE1CA84EBF72E691D
	static BOOL _0xF58892799E1DB987(Hash componentHash, Hash drawableSlotHash, int p2) { return invoke<BOOL>(0xF58892799E1DB987, componentHash, drawableSlotHash, p2); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5
	static int _0x30C98E74DAA1096F(int character, BOOL p1) { return invoke<int>(0x30C98E74DAA1096F, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7
	static void GET_SHOP_PED_QUERY_OUTFIT(Any p0, Any* p1) { invoke<Void>(0x11FE00D474E5BF78, p0, p1); } // 0x6D793F03A631FE56 0x2F8013A1
	static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0x2DE3033B2A48EB66, p0, p1); } // 0xB7952076E444979D 0xCAFE9209
	static Any _0x9753A43D82A930DB(Any p0) { return invoke<Any>(0x9753A43D82A930DB, p0); } // 0x073CA26B079F956E 0x2798F56F
	static BOOL _0x900C4794A3D9423E(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x900C4794A3D9423E, p0, p1, p2); } // 0xA9F9C2E0FDE11CBB 0x6641A864
	static BOOL _GET_PROP_FROM_OUTFIT(Any outfit, Any slot, Any* item) { return invoke<BOOL>(0xB60B923FE0A9672C, outfit, slot, item); } // 0x19F2A026EDF0013F 0x818534AC
	static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0x49371C7B668CA46F); } // 0xA7A866D21CD2329B 0x8EAF9CF6
	static Any GET_DLC_VEHICLE_MODEL(Any p0) { return invoke<Any>(0xE41983F0EA9BC02A, p0); } // 0xECC01B7C5763333C 0xA2201E09
	static BOOL GET_DLC_VEHICLE_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x373784C902F4F74E, p0, p1); } // 0x33468EDC08E371F6 0xCF428FA4
	static Any GET_DLC_VEHICLE_FLAGS(Any p0) { return invoke<Any>(0x4B571E23B3A82E2F, p0); } // 0x5549EE11FA22FCF2 0xAB12738C
	static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xEBEB71E208C23D76); } // 0xEE47635F352DA367 0x2B757E6C
	static BOOL GET_DLC_WEAPON_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x74CFE4255BC4FBF3, p0, p1); } // 0x79923CD21BECE14E 0xD88EC8EA
	static int GET_NUM_DLC_WEAPON_COMPONENTS(Any p0) { return invoke<int>(0x8D57B92B1C3958E6, p0); } // 0x405425358A7D61FE 0x476B23A9
	static BOOL GET_DLC_WEAPON_COMPONENT_DATA(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x71E17ACF157ADB35, p0, p1, p2); } // 0x6CF598A2957C2BF8 0x4B83FCAF
	static BOOL _IS_OUTFIT_EMPTY(Any outfit) { return invoke<BOOL>(0xCA0E36ABF4510784, outfit); } // 0xD4D7B033C3AA243C 0x06396058
	static BOOL _0xEC880F68E39E2694(Any p0) { return invoke<BOOL>(0xEC880F68E39E2694, p0); } // 0x0564B9FF9631B82C 0x35BCA844
	static Any _0x54B43CC281D6F346(Any p0) { return invoke<Any>(0x54B43CC281D6F346, p0); } // 0xC098810437312FFF 0x59352658
}

namespace DLC2
{
	static BOOL IS_DLC_PRESENT(Hash DlcHash) { return invoke<BOOL>(0x3442D8DA379C5187, DlcHash); } // 0x812595A0644CE1DE 0x1F321943
	static Any _0x3C76E187602D4D9F() { return invoke<Any>(0x3C76E187602D4D9F); } // 0xF2E07819EF1A5289 0x881B1FDB
	static Any _0xA6D93C2F09DCB28C() { return invoke<Any>(0xA6D93C2F09DCB28C); } // 0x9489659372A81585 0xC2169164
	static Any _0x1C4FD3F22EC89ED5() { return invoke<Any>(0x1C4FD3F22EC89ED5); } // 0xA213B11DFF526300 0xF79A97F5
	static Any _0x61C003F971367198() { return invoke<Any>(0x61C003F971367198); } // 0x8D30F648014A92B5 0xF69B729C
	static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xD1FB95EE463ED575); } // 0x10D0A8F259E93EC9 0x517B601B
	static BOOL _NULLIFY(Any* variable, Any unused) { return invoke<BOOL>(0x77F0A27A91D9BA35, variable, unused); } // 0x46E2B844905BC5F0 0x6087C10C
	static void _LOAD_SP_DLC_MAPS() { invoke<Void>(0xEF8566CC3B0C125B); } // 0xD7C10C4A637992C9
	static void _LOAD_MP_DLC_MAPS() { invoke<Void>(0x107799093167E667); } // 0x0888C3502DBBEEF5
}

namespace SYSTEM
{
//	static void WAIT(int ms) { invoke<Void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B
//	static int START_NEW_SCRIPT(char* scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E
//	static int START_NEW_SCRIPT_WITH_ARGS(char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4
//	static int _START_NEW_STREAMED_SCRIPT(Hash scriptHash, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D
//	static int _START_NEW_STREAMED_SCRIPT_WITH_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4
//	static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188
//	static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C
//	static void SETTIMERA(int value) { invoke<Void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333
//	static void SETTIMERB(int value) { invoke<Void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6
//	static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2
//	static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); } // 0x0BADBFA3B172435F 0xBF987F58
//	static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); } // 0xD0FFB162F40A139C 0x00238FE9
//	static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); } // 0x71D93B57D07F9804 0x145C7701
//	static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8
//	static float VMAG(float p0, float p1, float p2) { return invoke<float>(0x652D2EEEF1D3E62C, p0, p1, p2); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD
//	static float VMAG2(float p0, float p1, float p2) { return invoke<float>(0xA8CEACB4F35AE058, p0, p1, p2); } // 0xA8CEACB4F35AE058 0xE796E629
//	static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7
//	static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F
//	static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD
//	static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA
//	static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); } // 0xF34EE736CF047844 0x32E9BE04
//	static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); } // 0x11E019C8F43ACC8A 0xD536A1DF
//	static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); } // 0xF2DB717A73826179 0x323B0E24
//	static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); } // 0xBBDA792448DB5A89 0x67116627
}

namespace DECORATOR
{
	static BOOL DECOR_SET_TIME(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0x2E2EFCA89B7F762A, entity, propertyName, value); } // 0x95AED7B8E39ECAA4 0xBBAEEF94
	static BOOL DECOR_SET_BOOL(Entity entity, char* propertyName, BOOL value) { return invoke<BOOL>(0xFBDEFAD3C34AC9CF, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C
	static BOOL _DECOR_SET_FLOAT(Entity entity, char* propertyName, float value) { return invoke<BOOL>(0xCA16CBDD5F3E4862, entity, propertyName, value); } // 0x211AB1DD8D0F363A
	static BOOL DECOR_SET_INT(Entity entity, char* propertyName, int value) { return invoke<BOOL>(0x9AFC97007085FC5E, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21
	static BOOL DECOR_GET_BOOL(Entity entity, char* propertyName) { return invoke<BOOL>(0x4A36D1C22F217975, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0
	static float _DECOR_GET_FLOAT(Entity entity, char* propertyName) { return invoke<float>(0x7CF31F98329D46C2, entity, propertyName); } // 0x6524A2F114706F43
	static int DECOR_GET_INT(Entity entity, char* propertyName) { return invoke<int>(0x3947414BC68E5255, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5
	static BOOL DECOR_EXIST_ON(Entity entity, char* propertyName) { return invoke<BOOL>(0xB7AFC499DA70400A, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40
	static BOOL DECOR_REMOVE(Entity entity, char* propertyName) { return invoke<BOOL>(0x3C69B6C0F29F8F3A, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B
	static void DECOR_REGISTER(char* propertyName, int type) { invoke<Void>(0xF985A125CF9F0C12, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9
	static BOOL DECOR_IS_REGISTERED_AS_TYPE(char* propertyName, int type) { return invoke<BOOL>(0x8FFABA46948DBAD8, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D
	static void DECOR_REGISTER_LOCK() { invoke<Void>(0xC70D840BE023ECDD); } // 0xA9D14EEA259F9248 0x7F3F1C02
	static Any _0x4EC36463AD2ED6C2() { return invoke<Any>(0x4EC36463AD2ED6C2); } // 0x241FCA5B1AA14F75
}

namespace SOCIALCLUB
{
	static Any _0x3F2D9DD8C85A41B6() { return invoke<Any>(0x3F2D9DD8C85A41B6); } // 0x03A93FF1A2CA0864 0x6BE5DF29
	static Any _0x3BB9393B5048E574(Any p0) { return invoke<Any>(0x3BB9393B5048E574, p0); } // 0xBB8EA16ECBC976C4 0x5ECF955D
	static BOOL _0xCA44E5FA41C63583(Any p0) { return invoke<BOOL>(0xCA44E5FA41C63583, p0); } // 0x93028F1DB42BFD08 0xD1ED1D48
	static BOOL _0x73ED6A9DD557E1C7(Any p0) { return invoke<BOOL>(0x73ED6A9DD557E1C7, p0); } // 0x2C015348CF19CA1D 0x19EE0CCB
	static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0xB59FD8E56B873909, p0, p1, p2); } // 0xA00EFE4082C4056E 0x88068C7C
	static BOOL _0x15E74DE998CF48E1(Any p0, Any* p1) { return invoke<BOOL>(0x15E74DE998CF48E1, p0, p1); } // 0xFFE5C16F402D851D
	static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x36545E6CA3786C2D, p0, p1, p2); } // 0x7572EF42FC6A9B6D 0x15607620
	static BOOL _0x607E193F33AB001C(Any p0) { return invoke<BOOL>(0x607E193F33AB001C, p0); } // 0x9A2C8064B6C1E41A 0xEBE420A4
	static Any _0xEE63104947BC2693(Any p0) { return invoke<Any>(0xEE63104947BC2693, p0); } // 0xF3E31D16CBDCB304 0x2C959AF9
	static void _0xB3C4ADEE6194161E(Any* p0) { invoke<Void>(0xB3C4ADEE6194161E, p0); } // 0xDA024BDBD600F44A 0x0B9A3512
	static void _0x693F03DE9CE90B44(Any* p0) { invoke<Void>(0x693F03DE9CE90B44, p0); } // 0xA68D3D229F4F3B06 0x75324674
	static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(Any p0, Any* p1) { return invoke<BOOL>(0x7E715B1E24903D26, p0, p1); } // 0x69D82604A1A5A254 0x88CA3BFC
	static BOOL _0xAD072A4BEDFBBE37(Any* p0) { return invoke<BOOL>(0xAD072A4BEDFBBE37, p0); } // 0x6AFD2CD753FEEF83 0x628F489B
	static BOOL _0x97C277CE5190DD86(Any p0, Any* p1) { return invoke<BOOL>(0x97C277CE5190DD86, p0, p1); } // 0x87E0052F08BD64E6 0xAB3346B5
	static void _0x8513C050F7403ECF(Any p0, Any p1) { invoke<Void>(0x8513C050F7403ECF, p0, p1); } // 0x040ADDCBAFA1018A
	static Any _0x6EFBE8DEF872CC1E() { return invoke<Any>(0x6EFBE8DEF872CC1E); } // 0x16DA8172459434AA
	static BOOL _0x741ADD5D6EC2B5E5(Any p0, Any* p1) { return invoke<BOOL>(0x741ADD5D6EC2B5E5, p0, p1); } // 0x4737980E8A283806
	static void _0x40000F28909D7E4E(Any* p0, Any p1) { invoke<Void>(0x40000F28909D7E4E, p0, p1); } // 0x44ACA259D67651DB
	static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Player* player) { invoke<Void>(0xD3A8F79A5397970D, player); } // 0x2330C12A7A605D16 0x9A703A2B
	static void _0x4C054973B90EC9E3() { invoke<Void>(0x4C054973B90EC9E3); } // 0x55DF6DB45179236E 0xD094F11A
	static void _0x6D776B250517131D(Any* p0) { invoke<Void>(0x6D776B250517131D, p0); } // 0x116FB94DC4B79F17 0xAF3C081B
	static void _0xE07B1B79185122AE(BOOL p0) { invoke<Void>(0xE07B1B79185122AE, p0); } // 0xBFA0A56A817C6C7D 0x2FB9F53C
	static Any _0x957A11BC60E1F32E() { return invoke<Any>(0x957A11BC60E1F32E); } // 0xBC1CC91205EC8D6E 0x6C5738AB
	static Any _0x9C21C37AE0AE21BE() { return invoke<Any>(0x9C21C37AE0AE21BE); } // 0xDF649C4E9AFDD788 0x468668F0
	static BOOL _0x313DD06B0FA0D558(Any p0, Any p1) { return invoke<BOOL>(0x313DD06B0FA0D558, p0, p1); } // 0x1F1E9682483697C7 0x90C74343
	static BOOL _0x5AE9522354E2F23F(Any p0, Any* p1) { return invoke<BOOL>(0x5AE9522354E2F23F, p0, p1); } // 0x287F1F75D2803595 0x3ACE6D6B
	static BOOL _0x45B510892F481276(Any p0, float p1) { return invoke<BOOL>(0x45B510892F481276, p0, p1); } // 0x487912FD248EFDDF 0x579B4510
	static BOOL _0x054DDE331B605124(Any* p0) { return invoke<BOOL>(0x054DDE331B605124, p0); } // 0x8416FE4E4629D7D7 0xDF45B2A7
	static BOOL _0xFA11E8C6F33567E0(Any* p0, Any* p1) { return invoke<BOOL>(0xFA11E8C6F33567E0, p0, p1); } // 0x75632C5ECD7ED843 0xDF084A6B
	static BOOL _0x4620B75C12996C4B(Any p0) { return invoke<BOOL>(0x4620B75C12996C4B, p0); } // 0x1753344C770358AE 0xFFED3676
	static Any _0xDFC5287BBA837D22(Any p0) { return invoke<Any>(0xDFC5287BBA837D22, p0); } // 0x82E4A58BABC15AE7 0xA796D7A7
	static Any _0x344941F002A79D87(Any p0) { return invoke<Any>(0x344941F002A79D87, p0); } // 0x85535ACF97FC0969 0x09497F31
	static int _0xE0902E7EA58A9CD2(Any p0) { return invoke<int>(0xE0902E7EA58A9CD2, p0); } // 0x930DE22F07B1CCE3 0x4D8A6521
	static BOOL _0xE81152DBE6D9BD13(Any* p0, Any* p1) { return invoke<BOOL>(0xE81152DBE6D9BD13, p0, p1); } // 0xF6BAAAF762E1BF40 0x7AA36406
	static BOOL _0x62B2636EF7C212AF(Any p0) { return invoke<BOOL>(0x62B2636EF7C212AF, p0); } // 0xF22CA0FD74B80E7A 0xF379DCE4
	static Any _0x8E4A9218CB390BC8(Any p0) { return invoke<Any>(0x8E4A9218CB390BC8, p0); } // 0x9237E334F6E43156 0x65D84665
	static Any _0x28E3D9BFB73FCDDA(Any p0) { return invoke<Any>(0x28E3D9BFB73FCDDA, p0); } // 0x700569DBA175A77C
	static Any _0x12749A605AF688B1(Any p0, Any p1) { return invoke<Any>(0x12749A605AF688B1, p0, p1); } // 0x1D4446A62D35B0D0
	static Any _0xDDC0444AF64E7AC3(Any p0, Any p1) { return invoke<Any>(0xDDC0444AF64E7AC3, p0, p1); } // 0x2E89990DDFF670C3
	static BOOL _0x2D8CED87CED1EC04(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x2D8CED87CED1EC04, p0, p1, p2); } // 0xD0EE05FE193646EA
	static BOOL _0xD099A6F58AD7F0DE(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xD099A6F58AD7F0DE, p0, p1, p2); } // 0x1989C6E6F67E76A8
	static Any _0x47B010C3370A7A53(Any p0) { return invoke<Any>(0x47B010C3370A7A53, p0); } // 0x07C61676E5BB52CD
	static Any _0xCB05E961884CEB73(Any p0) { return invoke<Any>(0xCB05E961884CEB73, p0); } // 0x8147FFF6A718E1AD
	static BOOL _0x03073AF42927CEA5(Any* p0, Any* p1) { return invoke<BOOL>(0x03073AF42927CEA5, p0, p1); } // 0x0F73393BAC7E6730
	static Any _0x98E05907D3BA1AF5(Any p0) { return invoke<Any>(0x98E05907D3BA1AF5, p0); } // 0xD302E99EDF0449CF
	static Any _0x4828B63ECA8E779D(Any p0) { return invoke<Any>(0x4828B63ECA8E779D, p0); } // 0x5C4EBFFA98BDB41C
	static Any _0x508D2E3238B5C705() { return invoke<Any>(0x508D2E3238B5C705); } // 0xFF8F3A92B75ED67A 0xC96456BA
	static Any _0xE7D2445E2FACB4A8(Any* p0) { return invoke<Any>(0xE7D2445E2FACB4A8, p0); } // 0x4A7D6E727F941747 0x8E7AEEB7
	static BOOL _0x976296D9D165C780(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x976296D9D165C780, p0, p1, p2); } // 0x8CC469AB4D349B7C 0xE778B2A7
	static BOOL _0x26148D58CA21CFF9(Any p0, Any* p1, Any* p2) { return invoke<BOOL>(0x26148D58CA21CFF9, p0, p1, p2); } // 0x699E4A5C8C893A18 0xCE7D50A8
	static BOOL _0x3E2A8F74C4694C18(Any p0, Any* p1) { return invoke<BOOL>(0x3E2A8F74C4694C18, p0, p1); } // 0x19853B5B17D77BCA 0xD26CCA46
	static BOOL _0x9D4BC921B3F5121D(Any p0) { return invoke<BOOL>(0x9D4BC921B3F5121D, p0); } // 0x6BFB12CE158E3DD4 0x24D84334
	static BOOL _0x14FD6BDD36D9101C(Any p0, Any p1) { return invoke<BOOL>(0x14FD6BDD36D9101C, p0, p1); } // 0xFE4C1D0D3B9CC17E 0x8A023024
	static Any _0x38CA2303DFCB4908() { return invoke<Any>(0x38CA2303DFCB4908); } // 0xD8122C407663B995 0x1C65B038
	static BOOL _0xCE65DA18828EED7C() { return invoke<BOOL>(0xCE65DA18828EED7C); } // 0x3001BEF2FECA3680 0x4D4C37B3
	static BOOL _0x8E50FD225C8561F6(char* p0, int* p1) { return invoke<BOOL>(0x8E50FD225C8561F6, p0, p1); } // 0x92DA6E70EF249BD1 0xAED95A6F
	static void _0xFC39C51FFB9E0819() { invoke<Void>(0xFC39C51FFB9E0819); } // 0x675721C9F644D161 0x486867E6
	static char* _SC_GET_NICKNAME() { return invoke<char*>(0x6DF4109E7E90CB3B); } // 0x198D161F458ECC7F
	static BOOL _0x108FA307FE5FA281(int* p0) { return invoke<BOOL>(0x108FA307FE5FA281, p0); } // 0x225798743970412B
	static BOOL _0x390430DFEBF2FE59(int p0) { return invoke<BOOL>(0x390430DFEBF2FE59, p0); } // 0x418DC16FAE452C1C
}

namespace UNK
{
	static int _RETURN_ZERO() { return invoke<int>(0xF52B2498F5DD851D); } // 0xF2CA003F167E21D2 0x106C8317
	static BOOL _0x12BEF7B9FCA1AAE8() { return invoke<BOOL>(0x12BEF7B9FCA1AAE8); } // 0xEF7D17BC6C85264C 0xD87F3A9E
	static void _GET_BROADCAST_FINSHED_LOS_SOUND(BOOL p0) { invoke<Void>(0x04C5CA76644FEA11, p0); } // 0xB0C56BD3D808D863 0xC0B971EA
	static Any _0x71B563BCAAD59EB5() { return invoke<Any>(0x71B563BCAAD59EB5); } // 0x8AA464D4E0F6ACCD 0x94BCAC7C
	static void _0x5045B60D14B8A409(BOOL p0) { invoke<Void>(0x5045B60D14B8A409, p0); } // 0xFC309E94546FCDB5 0x7D90EEE5
	static Any _0x5E6EA12202208EF4() { return invoke<Any>(0x5E6EA12202208EF4); } // 0xC6DC823253FBB366 0x734CFEDA
	static void _0xF4307273E321645C(BOOL p0) { invoke<Void>(0xF4307273E321645C, p0); } // 0xC7E7181C09F33B69 0x8C227332
	static void _0xE63256BAF1D9175F(BOOL p0) { invoke<Void>(0xE63256BAF1D9175F, p0); } // 0xFA1E0E893D915215 0x5C350D78
	static int _GET_UI_LANGUAGE_ID() { return invoke<int>(0xF088C81B5AD73FF8); } // 0x2BDD44CC428A7EAE
	static int _GET_USER_LANGUAGE_ID() { return invoke<int>(0x397EDE2A2D7CA877); } // 0xA8AE43AEC1A61314
}

namespace UNK1
{
	static void _0x79B550FADF7D3978(BOOL p0) { invoke<Void>(0x79B550FADF7D3978, p0); } // 0x48621C9FCA3EBD28
	static void _0xAA3EE135C1B3E902() { invoke<Void>(0xAA3EE135C1B3E902); } // 0x81CBAE94390F9F89
	static void _0x1C35A35CD1C0FB34() { invoke<Void>(0x1C35A35CD1C0FB34); } // 0x13B350B8AD0EEE10
	static void _0xD73158C5794398B4(float p0, float p1, BOOL p2) { invoke<Void>(0xD73158C5794398B4, p0, p1, p2); } // 0x293220DA1B46CEBC
	static void _0xE10447427D928F55(char* p0, Any p1) { invoke<Void>(0xE10447427D928F55, p0, p1); } // 0x208784099002BC30
	static void _0x02FBF8551A36D88F() { invoke<Void>(0x02FBF8551A36D88F); } // 0xEB2D525B57F42B40
	static void _0xFB07375C4C9948A8() { invoke<Void>(0xFB07375C4C9948A8); } // 0xF854439EFBB3B583
	static void _0xA67F231DA4AFAB1F() { invoke<Void>(0xA67F231DA4AFAB1F); } // 0xAF66DCEE6609B148
	static void _0xF00F1D480F0F99EC(Any p0, Any p1, Any p2) { invoke<Void>(0xF00F1D480F0F99EC, p0, p1, p2); } // 0x66972397E0757E7A
	static void _SET_RECORDING_MODE(int mode) { invoke<Void>(0x59E7265E5911E882, mode); } // 0xC3AC2FFF9612AC81
	static void _STOP_RECORDING_AND_SAVE_CLIP() { invoke<Void>(0x63842D98ECE6507A); } // 0x071A5197D6AFC8B3
	static void _STOP_RECORDING_AND_DISCARD_CLIP() { invoke<Void>(0x1C362F5BACAC8E36); } // 0x88BB3507ED41A240
	static Any _0x1A4BC17404A72403() { return invoke<Any>(0x1A4BC17404A72403); } // 0x644546EC5287471B
	static BOOL _IS_RECORDING() { return invoke<BOOL>(0x850C4267F4883C31); } // 0x1897CA71995A90B4
	static Any _0x1760B1557C7DCA4C() { return invoke<Any>(0x1760B1557C7DCA4C); } // 0xDF4B952F7D381B95
	static Any _0x6BDC630CD80ECE35() { return invoke<Any>(0x6BDC630CD80ECE35); } // 0x4282E08174868BE3
	static BOOL _0x33FD94C84FCA86F4(BOOL p0) { return invoke<BOOL>(0x33FD94C84FCA86F4, p0); } // 0x33D47E85B476ABCD
}

namespace UNK2
{
	static void _0xAF818D848B18EF80(Any p0, Any p1) { invoke<Void>(0xAF818D848B18EF80, p0, p1); } // 0x7E2BD3EF6C205F09
	static BOOL _IS_INTERIOR_RENDERING_DISABLED() { return invoke<BOOL>(0x60C4884A6137D544); } // 0x95AB8B5C992C7B58
	static void _0x19B1061B85E65376() { invoke<Void>(0x19B1061B85E65376); } // 0x5AD3932DAEB1E5D3
	static void _0xAD3B58DDDA46543E(BOOL p0) { invoke<Void>(0xAD3B58DDDA46543E, p0); } // 0xE058175F8EAFE79A
	static void _0x0F9B0127EA9FC509() { invoke<Void>(0x0F9B0127EA9FC509); } // 0x3353D13F09307691
	static void _0x05430651C9DA37D4() { invoke<Void>(0x05430651C9DA37D4); } // 0x49DA8145672B2725
}

namespace UNK3
{
	static int _NETWORK_SHOP_GET_PRICE(Hash hash, Hash hash2, BOOL p2) { return invoke<int>(0xDE42E7CA07C75FFD, hash, hash2, p2); } // 0xC27009422FCCA88D
	static Any _0x81E054699F4C202C() { return invoke<Any>(0x81E054699F4C202C); } // 0x3C4487461E9B0DCB
	static Any _0x024742A92D732AA3() { return invoke<Any>(0x024742A92D732AA3); } // 0x2B949A1E6AEC8F6A
	static Any _0x1995D97AF123F5ED() { return invoke<Any>(0x1995D97AF123F5ED); } // 0x85F6C9ABA1DE2BCF
	static Any _0xAED8D360F0AED014() { return invoke<Any>(0xAED8D360F0AED014); } // 0x357B152EF96C30B6
	static BOOL _0x02FE08EE329BF441(Any* p0) { return invoke<BOOL>(0x02FE08EE329BF441, p0); } // 0xCF38DAFBB49EDE5E
	static Any _0xD08086A1EF45A8E1() { return invoke<Any>(0xD08086A1EF45A8E1); } // 0xE3E5A7C64CA2C6ED
	static BOOL _0x0A1BA37F79273263(Any* p0) { return invoke<BOOL>(0x0A1BA37F79273263, p0); } // 0x0395CB47B022E62C
	static BOOL _0x7F85D5F296CBB056(Any p0) { return invoke<BOOL>(0x7F85D5F296CBB056, p0); } // 0xA135AC892A58FC07
	static Any _0xA171DB00C97DCFD4() { return invoke<Any>(0xA171DB00C97DCFD4); } // 0x72EB7BA9B69BF6AB
	static BOOL _0xD636396905872965(Any* p0) { return invoke<BOOL>(0xD636396905872965, p0); } // 0x170910093218C8B9
	static BOOL _0x8185751CD4900E38(Any* p0) { return invoke<BOOL>(0x8185751CD4900E38, p0); } // 0xC13C38E47EA5DF31
	static BOOL _0x31F4FD5D570135A8(Any p0) { return invoke<BOOL>(0x31F4FD5D570135A8, p0); } // 0xB24F0944DA203D9E
	static BOOL _0x7F3660A3932AE15A(Any p0) { return invoke<BOOL>(0x7F3660A3932AE15A, p0); } // 0x74A0FD0688F1EE45
	static BOOL _0x3773690790985201(Any p0) { return invoke<BOOL>(0x3773690790985201, p0); } // 0x2F41D51BA3BCD1F1
	static Any _0x3F07A2D94C64D156() { return invoke<Any>(0x3F07A2D94C64D156); } // 0x810E8431C0614BF9
	static BOOL _0xDD132B42B2C8F086(BOOL p0, BOOL p1) { return invoke<BOOL>(0xDD132B42B2C8F086, p0, p1); } // 0x35A1B3E1D1315CFA
	static BOOL _0x6BBED66AC3218896(Any* p0, Any* p1) { return invoke<BOOL>(0x6BBED66AC3218896, p0, p1); } // 0x897433D292B44130
	static BOOL _NETWORK_SHOP_BASKET_START(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x71FC3CB5E4FD1BA9, p0, p1, p2, p3); } // 0x279F08B1A4B29B7E
	static Any _0x8250F07A181F3D9D() { return invoke<Any>(0x8250F07A181F3D9D); } // 0xA65568121DF2EA26
	static BOOL _0xA62817E49E1DA8FF(Any* p0, Any p1) { return invoke<BOOL>(0xA62817E49E1DA8FF, p0, p1); } // 0xF30980718C8ED876
	static Any _0x5AF40D91B71E3253() { return invoke<Any>(0x5AF40D91B71E3253); } // 0x27F76CC6C55AD30E
	static BOOL _0x6EEFE648BE853274(Any p0, Any* p1) { return invoke<BOOL>(0x6EEFE648BE853274, p0, p1); } // 0xE1A0450ED46A7812
	static BOOL _0xC5635F1C24124798(Any p0) { return invoke<BOOL>(0xC5635F1C24124798, p0); } // 0x39BE7CEA8D9CC8E6
	static BOOL _0x89BF47768CC2BEC9(Any* p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x89BF47768CC2BEC9, p0, p1, p2, p3, p4, p5); } // 0x3C5FD37B5499582E
	static BOOL _0x8ECBAE515BE58A4C(Any p0) { return invoke<BOOL>(0x8ECBAE515BE58A4C, p0); } // 0xE2A99A9B524BEFFF
	static BOOL _0x79C149227275A4B8(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0x79C149227275A4B8, p0, p1, p2); } // 0x51F1A8E48C3D2F6D
	static Any _0x3E7D59882188D39B() { return invoke<Any>(0x3E7D59882188D39B); } // 0x0A6D923DFFC9BD89
	static Any _0x9711E2693996200B() { return invoke<Any>(0x9711E2693996200B); } // 0x112CEF1615A1139F
	static BOOL _0x764313B03DCD1D50(Any p0, Any p1) { return invoke<BOOL>(0x764313B03DCD1D50, p0, p1); } // 0xD47A2C1BA117471D
	static BOOL _0xF9AC07B5321FA421(Any p0, Any p1) { return invoke<BOOL>(0xF9AC07B5321FA421, p0, p1); } // 0xC2F7FE5309181C7D
	static Any _0x99F051DEF0ED4E27() { return invoke<Any>(0x99F051DEF0ED4E27); } // 0x23789E777D14CE44
	static Any _0xA2394E62CEFAB2B8() { return invoke<Any>(0xA2394E62CEFAB2B8); } // 0x350AA5EBC03D3BD2
	static Any _0x3523EA40130455D0() { return invoke<Any>(0x3523EA40130455D0); } // 0x498C1E05CE5F7877
	static BOOL _0xBC89695E5B42B1B1(Any p0) { return invoke<BOOL>(0xBC89695E5B42B1B1, p0); } // 0x9507D4271988E1AE
	static char* _GET_GAME_VERSION() { return invoke<char*>(0xF831B3A531B16F13); } // 0xFCA9373EF340AC0A
}
