--
-- Game Modding implementation by Mockba the Borg
--
MyAddon = ScriptThread("MyAddon")

---------------------------------------------------------------------------------------------------
-- Multiple initializatons
print("----------------------------------------------")
print("Lua Online Addon initializing ...")
-- Version Number
local _Version = "1.23"

-- Global variables for testing
local _PreviousBits
local _GTA2CAM = false
local _NorthUP = false
local _CAM = nil
--local _PreviousTasks
--

local _Invisible = false

-- Global variables for measuring framerate
local _FrameCount = 0
local _FrameSum = 0
local _FrameTime = 0

-- Global variables for tracking points
local _TrackedPoint = nil

-- List of known hackers
local _KnownHackers = { "PatWay", "NightHydra", "Mathis_347", "Ratkulis", "Chuky-99", "gangga.games", "Allahuakbarlov3r",
"f8_gaming_98", "takerun780", "admiralace", "GhostRusGamer299"}
-- List of wanted vehicles
local _WantedVehicles = { VEHICLE_FELON2, VEHICLE_SENTINEL2 }
-- Global interface colors (r=red, g=green, b=blue, a=alpha)
local BLINK = true
local NOBLINK = false
-- Interface Keys
local _KeyAddVehicle = KEY_ADD
local _KeyUpgradeVehicle = KEY_NUMPAD5
local _KeyEnterValue = KEY_RETURN
local _KeyVehicleInfo = KEY_NUMPAD3
local _KeyVehicleMods = KEY_NUMPAD1
local _KeyModTypeDown = KEY_NUMPAD2
local _KeyModTypeUp = KEY_NUMPAD8
local _KeyModWheelRight = KEY_NUMPAD9
local _KeyModWheelLeft = KEY_NUMPAD7
local _KeyModValueRight = KEY_NUMPAD6
local _KeyModValueLeft = KEY_NUMPAD4
local _KeyDeleteGun = KEY_SUBTRACT
local _KeyTerroristGun = KEY_DIVIDE
local _KeyDebug = KEY_F9
local _KeyCheat = KEY_F10
local _KeyVehicle = KEY_F11
local _KeyAutoPilot = KEY_F12
local _KeyTakeCar = KEY_DECIMAL
-- Global variables
local _DebugMode = false	-- Enables Debug mode
local _CheatMode = false	-- Enables Cheat Game mode
local _VehicleMode = false	-- Enables Vehicle modification mode
local _AutoPilotMode = 0	-- Cycles AutoPilot mode

local _Altitude = 0 -- For Autopilot
local _PositionX = 0
local _PositionY = 0
local _MinAltitude = 5
--
local _IntersectFlags = -1	-- Flags for casting rays
local _IntersectValue = 7
local _RayDistance = 5000
local _FontSize = .4
local _DebugFontSize = .2

-- Variables for the Vehicle modification module
local _ModX = .01
local _ModY = .12
-- All boolean mods must be defined here
-- Enums for custom mods
local _Mod_PRI_COLOR = -9
local _Mod_SEC_COLOR = -8
local _Mod_PRL_COLOR = -7
local _Mod_WHL_COLOR = -6
local _Mod_ACT_COLOR = -5
local _Mod_TRM_COLOR = -4
local _Mod_Livery = -3
local _Mod_WND_TINT  = -2
local _Mod_PLT_TYPE  = -1
-- Mod name table
local _Mod = {}
_Mod[_Mod_PRI_COLOR] = "Primary color"
_Mod[_Mod_SEC_COLOR] = "Secondary color"
_Mod[_Mod_PRL_COLOR] = "Pearlescent color"
_Mod[_Mod_WHL_COLOR] = "Wheel color"
_Mod[_Mod_ACT_COLOR] = "Accent color"
_Mod[_Mod_TRM_COLOR] = "Trim color"
_Mod[_Mod_Livery] = "Livery"
_Mod[_Mod_WND_TINT] = "Window tint"
_Mod[_Mod_PLT_TYPE] = "Plate type"
_Mod[11] = "Engine"
_Mod[12] = "Brakes"
_Mod[13] = "Transmission"
_Mod[14] = "Horn"
_Mod[15] = "Suspension"
_Mod[16] = "Armor"
_Mod[23] = "Front Wheels"
_Mod[24] = "Back Wheels"
-- Min and max values for mods
local _ModLimits = {}
_ModLimits[_Mod_PRI_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_SEC_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_PRL_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_WHL_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_ACT_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_TRM_COLOR] = {vtype="value", vmin=0, vmax=159}
_ModLimits[_Mod_WND_TINT] = {vtype="value", vmin=-1, vmax=6}
_ModLimits[_Mod_PLT_TYPE] = {vtype="value", vmin=0, vmax=5}
-- All boolean mods must be defined here
_Mod[18] = "Turbo"
_Mod[20] = "Tire smoke"
_Mod[21] = "Neons"		-- 21 is Unknown ... will use for Neons
_Mod[22] = "Xenon"
_ModLimits[18] = {vtype="boolean", vmin=0, vmax=1}
_ModLimits[20] = {vtype="boolean", vmin=0, vmax=1}
_ModLimits[21] = {vtype="boolean", vmin=0, vmax=1}
_ModLimits[22] = {vtype="boolean", vmin=0, vmax=1}
local _ModType = {}
_ModType[_Mod_WND_TINT] = {}
_ModType[_Mod_WND_TINT][0] = "None"
_ModType[_Mod_WND_TINT][1] = "Pure Black"
_ModType[_Mod_WND_TINT][2] = "Dark Smoke"
_ModType[_Mod_WND_TINT][3] = "Light Smoke"
_ModType[_Mod_WND_TINT][4] = "Stock"
_ModType[_Mod_WND_TINT][5] = "Limo"
_ModType[_Mod_WND_TINT][6] = "Green"
_ModType[_Mod_PLT_TYPE] = {}
_ModType[_Mod_PLT_TYPE][0] = "Blue On White"
_ModType[_Mod_PLT_TYPE][1] = "Yellow On Black"
_ModType[_Mod_PLT_TYPE][2] = "Yellow On Blue"
_ModType[_Mod_PLT_TYPE][3] = "Blue On White 2"
_ModType[_Mod_PLT_TYPE][4] = "Blue On White 3"
_ModType[_Mod_PLT_TYPE][5] = "North Yankton"
_ModType[11] = {}
_ModType[11][0] = "EMS Upgrade, Level 1"
_ModType[11][1] = "EMS Upgrade, Level 2"
_ModType[11][2] = "EMS Upgrade, Level 3"
_ModType[11][3] = "EMS Upgrade, Level 4"
_ModType[12] = {}
_ModType[12][0] = "Street"
_ModType[12][1] = "Sport"
_ModType[12][2] = "Race"
_ModType[13] = {}
_ModType[13][0] = "Street"
_ModType[13][1] = "Sport"
_ModType[13][2] = "Race"
_ModType[14] = {}
_ModType[14][0] = "Truck Horn"
_ModType[14][1] = "Cop Horn"
_ModType[14][2] = "Clown Horn"
_ModType[14][8] = "Sad Trombone"
_ModType[14][3] = "Musical Horn 1"
_ModType[14][4] = "Musical Horn 2"
_ModType[14][5] = "Musical Horn 3"
_ModType[14][6] = "Musical Horn 4"
_ModType[14][7] = "Musical Horn 5"
_ModType[14][9] = "Classical Horn 1"
_ModType[14][10] = "Classical Horn 2"
_ModType[14][11] = "Classical Horn 3"
_ModType[14][12] = "Classical Horn 4"
_ModType[14][13] = "Classical Horn 5"
_ModType[14][14] = "Classical Horn 6"
_ModType[14][15] = "Classical Horn 7"
_ModType[14][33] = "Classical Horn 8"
_ModType[14][32] = "Classical Horn Loop 1"
_ModType[14][34] = "Classical Horn Loop 2"
_ModType[14][16] = "Scale - Do"
_ModType[14][17] = "Scale - Re"
_ModType[14][18] = "Scale - Mi"
_ModType[14][19] = "Scale - Fa"
_ModType[14][20] = "Scale - Sol"
_ModType[14][21] = "Scale - La"
_ModType[14][22] = "Scale - Ti"
_ModType[14][23] = "Scale - Do (High)"
_ModType[14][24] = "Jazz Horn 1"
_ModType[14][25] = "Jazz Horn 2"
_ModType[14][26] = "Jazz Horn 3"
_ModType[14][27] = "Jazz Horn Loop"
_ModType[14][28] = "Star Spangled Banner 1"
_ModType[14][29] = "Star Spangled Banner 2"
_ModType[14][30] = "Star Spangled Banner 3"
_ModType[14][31] = "Star Spangled Banner 4"
_ModType[14][38] = "Halloween Loop 1"
_ModType[14][40] = "Halloween Loop 2"
_ModType[14][42] = "San Andreas"
_ModType[14][44] = "Liberty City"
_ModType[14][35] = "Classical Horn Loop 1 (Non Loop)"
_ModType[14][37] = "Classical Horn Loop 2 (Non Loop)"
_ModType[14][36] = "Classical Horn 8 (Start)"
_ModType[14][39] = "Halloween Loop 1 (Non Loop)"
_ModType[14][41] = "Halloween Loop 2 (Non Loop)"
_ModType[14][43] = "San Andreas (Non Loop)"
_ModType[14][45] = "Liberty City (Non Loop)"
_ModType[14][46] = "Xmas 1"
_ModType[14][47] = "Xmas 2"
_ModType[15] = {}
_ModType[15][0] = "Lowered"
_ModType[15][1] = "Street"
_ModType[15][2] = "Sport"
_ModType[15][3] = "Competition"
_ModType[16] = {}
_ModType[16][-1] = "None"
_ModType[16][0] = "Armor Upgrade 20%"
_ModType[16][1] = "Armor Upgrade 40%"
_ModType[16][2] = "Armor Upgrade 60%"
_ModType[16][3] = "Armor Upgrade 80%"
_ModType[16][4] = "Armor Upgrade 100%"

local _VehicleModKit = nil
local _MinVehicleModID = _Mod_PRI_COLOR
local _MaxVehicleModID = 48
local _VehicleModID = nil
local _MinVehicleModValue = 0
local _MaxVehicleModValue = 0
local _VehicleModValue = nil
local _VehicleWType = nil

-- Default full upgrade values
local _UpgradeHorn = 10
local _UpgradePlateText = "MOCKBA"
local _UpgradePlateType = 1
local _UpgradeWindowTint = 1
local _UpgradeWheelType = 7
local _UpgradeCarWheelNumber = 6
local _UpgradeBikeWheelNumber = 5
local _MPBitset = 8

-- Wheel types
local _ModW = {}
_ModW[0] = "Sport"
_ModW[1] = "Muscle"
_ModW[2] = "Lowrider"
_ModW[3] = "SUV"
_ModW[4] = "Offroad"
_ModW[5] = "Tuner"
_ModW[6] = "Motorcycle"
_ModW[7] = "High end"
local _MaxWType = 9
-- Color names
local _ModColorNames = {
	"Black",
	"Graphite",
	"Black Steel",
	"Dark Steel",
	"Silver",
	"Bluish Silver",
	"Rolled Steel",
	"Shadow Silver",
	"Stone Silver",
	"Midnight Silver",
	"Cast Iron Silver",
	"Anthracite Black",
	"Matte Black",
	"Matte Gray",
	"Matte Light Gray",
	"Util Black",
	"Util Black Poly",
	"Util Dark Silver",
	"Util Silver",
	"Util Gun Metal",
	"Util Shadow Silver",
	"Worn Black",
	"Worn Graphite",
	"Worn Silver Gray",
	"Worn Silver",
	"Worn Blue Silver",
	"Worn Shadow Silver",
	"Red",
	"Torino Red",
	"Formula Red",
	"Blaze Red",
	"Grace Red",
	"Garnet Red",
	"Sunset Red",
	"Cabernet Red",
	"Candy Red",
	"Sunrise Orange",
	"Gold",
	"Orange",
	"Matte Red",
	"Matte Dark Red",
	"Matte Orange",
	"Matte Yellow",
	"Util Red",
	"Util Bright Red",
	"Util Garnet Red",
	"Worn Red",
	"Worn Golden Red",
	"Worn Dark Red",
	"Dark Green",
	"Racing Green",
	"Sea Green",
	"Olive Green",
	"Bright Green",
	"Gasoline Green",
	"Matte Lime Green",
	"Util Dark Green",
	"Util Green",
	"Worn Dark Green",
	"Worn Green",
	"Worn Sea Wash",
	"Galaxy Blue",
	"Dark Blue",
	"Saxon Blue",
	"Blue",
	"Mariner Blue",
	"Harbor Blue",
	"Diamond Blue",
	"Surf Blue",
	"Nautical Blue",
	"Ultra Blue",
	"Schafter Purple",
	"Spinnaker Blue",
	"Racing Blue",
	"Light Blue",
	"Util Dark Blue",
	"Util Midnight Blue",
	"Util Blue",
	"Util Sea Foam Blue",
	"Util Lightning Blue",
	"Util Maui Blue Poly",
	"Util Bright Blue",
	"Matte Dark Blue",
	"Matte Blue",
	"Matte Midnight Blue",
	"Worn Dark Blue",
	"Worn Blue",
	"Worn Light Blue",
	"Yellow",
	"Race Yellow",
	"Bronze",
	"Dew Yellow",
	"Lime Green",
	"Champagne",
	"Feltzer Brown",
	"Creek Brown",
	"Chocolate Brown",
	"Maple Brown",
	"Saddle Brown",
	"Straw Brown",
	"Moss Brown",
	"Bison Brown",
	"Woodbeech Brown",
	"Beechwood Brown",
	"Sienna Brown",
	"Sandy Brown",
	"Bleached Brown",
	"Cream",
	"Util Brown",
	"Util Medium Brown",
	"Util Light Brown",
	"Ice White",
	"Frost White",
	"Worn Honey Beige",
	"Worn Brown",
	"Worn Dark Brown",
	"Worn Straw Beige",
	"Brushed Steel",
	"Brushed Black Steel",
	"Brushed Aluminium",
	"Chrome",
	"Worn White",
	"Util White",
	"Worn Orange",
	"Worn Light Orange",
	"Securicor Green",
	"Worn Taxi Yellow",
	"Police Car Blue",
	"Matte Green",
	"Matte Brown",
	"Matte Light Orange",
	"Matte Ice White",
	"Worn White",
	"Worn Army Green",
	"Pure White",
	"Hot Pink",
	"Salmon Pink",
	"Pfister Pink",
	"Bright Orange",
	"Bright Green",
	"Bright Blue",
	"Midnight Blue",
	"Midnight Purple",
	"Wine Red",
	"Hunter Green",
	"Bright Purple",
	"Midnight Purple",
	"Carbon Black",
	"Matte Schafter Purple",
	"Matte Midnight Purple",
	"Lava Red",
	"Matte Forest Green",
	"Matte Olive Drab",
	"Matte Dark Earth",
	"Matte Desert Tan",
	"Matte Foliage Green",
	"Wheel Aloy",
	"Epsilon Blue",
	"Pure Gold",
	"Brushed Gold"
}
-- Color types
local _ModColorTypes = {
	"Metallic",
	"Classic",
	"Pearlescent",
	"Matte",
	"Metals",
	"Chrome"
}
---------------------------------------------------------------------------------------------------
-- Extra functions

-- Splits a string in parts based on a field separator
function string:split(sep)
	local sep, fields = sep or ":", {}
	local pattern = string.format("([^%s]+)", sep)
	self:gsub(pattern, function(c) fields[#fields+1] = c end)
	return fields
end

function GetNearbyPeds(ped, n)
	local nElements = n+1
	local m_peds = CMemoryBlock(nElements*8)
	m_peds:WriteDWORD32(0, n)
	local count = natives.PED.GET_PED_NEARBY_PEDS(ped, m_peds, -1)
	if count > 0 then
		local peds = {}
		for i=1,count do
			local offset = i*2
			table.insert(peds, Ped(m_peds:ReadDWORD32(offset)))
		end
		m_peds:Release()
		return peds
	else
		m_peds:Release()
		return nil
	end
end

function GetNearbyVehs(ped, n)
	local nElements = n+1
	local m_vehs = CMemoryBlock(nElements*8)
	m_vehs:WriteDWORD32(0, n)
	local count = natives.PED.GET_PED_NEARBY_VEHICLES(ped, m_vehs)
	if count > 0 then
		local vehs = {}
		for i=1,count do
			local offset = i*2
			table.insert(vehs, Vehicle(m_vehs:ReadDWORD32(offset)))
		end
		m_vehs:Release()
		return vehs
	else
		m_vehs:Release()
		return nil
	end
end

print("Initialization complete.")
print("----------------------------------------------")
---------------------------------------------------------------------------------------------------
-- Event handler for vehicles
function MyAddon:EventHandler_VehicleCreated(vehicle_id)
	local vehicle = Vehicle(vehicle_id)
	if not vehicle:Exists() then return end

	if utils.IsInArray(_WantedVehicles, vehicle:GetModel()) then
		-- Blip
		local blip = vehicle:AttachBlip()
		blip:SetPrimaryColour(BlipColorYellow)
		blip:SetScale(.5)
	end
end
MyAddon:AddEventHandler("OnVehicleCreated", "EventHandler_VehicleCreated")

-- Show various Debug information
function ToggleDebugMode()
	_DebugMode = not _DebugMode
	if _DebugMode then
		ui.MapMessage("~BLIP_BENNYS~ Debug mode enabled.")
	else
		ui.MapMessage("~BLIP_BENNYS~ Debug mode disabled.")
	end
end
function _DbgDecorInt(veh, decor, decorType)
	if natives.DECORATOR.DECOR_EXIST_ON(veh.ID, decor) then
		return natives.DECORATOR.DECOR_GET_INT(veh.ID, decor)
	else
		return "no exist"
	end
end
function DebugMode()
	local playerPos = LocalPlayer():GetPosition()
	local debugtext = "Debugging"
	if natives.NETWORK.NETWORK_IS_SESSION_STARTED() then
		debugtext = debugtext.." Online"
	end
	if natives.NETWORK.NETWORK_IS_HOST() then
		debugtext = debugtext.." (Host)"
	end
	if _Invisible then
		debugtext = debugtext.." (Invis.)"
	end
	ui.DrawTextBlock(debugtext, .01, .01, FontChaletComprimeCologne, _FontSize, COLOR_RED, BLINK)
	ui.DrawTextBlock("Decor ID: "..natives.NETWORK._0xBC1D768F2F5D6C05(LocalPlayer().PlayerID),nil,nil,nil,nil,COLOR_WHITE,NOBLINK)
	local pos = LocalPlayer():GetPosition()
	local hdg = LocalPlayer():GetHeading()
	ui.DrawTextBlock(string.format("x:%4d y:%4d z:%4d h:%3d",pos.x,pos.y,pos.z,hdg))
	if _CheatMode then
		ui.DrawTextBlock("Cheat mode")
	end
	if _VehicleMode then
		ui.DrawTextBlock("Vehicle mode")
	end
	if _PlayerMode then
		ui.DrawTextBlock("Player mode")
	end
--	Player Position
	ui.Draw3DPoint(playerPos, 1)
--	Targets
	local entityHit,pointHit = game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue)
	if not pointHit then
		pointHit = game.GetCoordsInFrontOfCam(_RayDistance)
	end
	if pointHit then
		ui.Draw3DLine(playerPos, pointHit, COLOR_PURPLE)
		if not _CheatMode then
			ui.Draw3DPoint(pointHit, .05, COLOR_RED)
		end
	end
	if _TrackedPoint then
		ui.Draw3DPoint(_TrackedPoint, .5, COLOR_YELLOW)
	end
	if entityHit then
		local entPos = entityHit:GetPosition()
		if entPos.x ~= 0 then
			local textPos = game.WorldToScreen(pointHit)
			if textPos then
				local text = entityHit._type..": "..entityHit.ID
				if entityHit:IsVehicle() then
					text = text.." ("..natives.NETWORK.VEH_TO_NET(entityHit.ID)..")"
				end
				text = text.."  "..entityHit:GetHealth().."/"..entityHit:GetMaxHealth()
				if entityHit:IsDead() then
					text = text.." (Dead)"
				end
				ui.DrawTextBlock(text, textPos.x, textPos.y-.15, FontChaletLondon, _DebugFontSize, COLOR_WHITE, NOBLINK)
				if entityHit:IsPed() or entityHit:IsObject() then
					ui.DrawTextBlock("0x"..utils.ToHexString(entityHit:GetModel()))
				end
				if entityHit:IsVehicle() then
					local modelName = entityHit:GetModelName()
					if not natives.VEHICLE.IS_VEHICLE_DRIVEABLE(entityHit.ID, true) then
						modelName = modelName.." (Undriveable)"
					end
					if natives.VEHICLE.IS_VEHICLE_STOLEN(entityHit.ID) then
						modelName = modelName.." (Stolen)"
					end
					ui.DrawTextBlock(modelName)
					local nPass = entityHit:GetNumberOfPassengers()
					if entityHit:GetPedInSeat(VehicleSeatDriver) then
						nPass = nPass+1
					end
					ui.DrawTextBlock(nPass > 0 and "Driver + "..(nPass-1) or "Empty")
					ui.DrawTextBlock("Player_Vehicle: ".._DbgDecorInt(entityHit,"Player_Vehicle", 3))
					ui.DrawTextBlock("PV_Slot: ".._DbgDecorInt(entityHit,"PV_Slot", 3))
					ui.DrawTextBlock("Previous_Owner: ".._DbgDecorInt(entityHit,"Previous_Owner", 3))
					ui.DrawTextBlock("MPBitset: ".._DbgDecorInt(entityHit,"MPBitset", 3))
					ui.DrawTextBlock("Modded_By: ".._DbgDecorInt(entityHit,"Veh_Modded_By_Player", 3))
--					ui.DrawTextBlock("NotAllowSavedVeh: ".._DbgDecorInt(entityHit,"Not_Allow_As_Saved_Veh", 3))
--					ui.DrawTextBlock("MissionType: ".._DbgDecorInt(entityHit,"MissionType", 3))
--					ui.DrawTextBlock("RespawnVeh: ".._DbgDecorInt(entityHit,"RespawnVeh", 3))
--					ui.DrawTextBlock("DeLuxeVeh: ".._DbgDecorInt(entityHit,"LUXE_VEH_INSTANCE_ID", 3))
					ui.DrawTextBlock("Stolen: "..(natives.VEHICLE.IS_VEHICLE_STOLEN(entityHit.ID) and "Yes" or "No"))
				end
				if entityHit:IsMissionEntity() then
					ui.DrawTextBlock("Mission Entity")
				end
				local pos = entityHit:GetPosition()
				local hdg = entityHit:GetHeading()
				if entityHit:IsPed() then
					local pedType = natives.PED.GET_PED_TYPE(entityHit.ID)
					ui.DrawTextBlock("Type: "..pedType)
					local bonePos = entityHit:GetBonePosition(entityHit:GetBoneIndex("BONETAG_HEAD"))
					local size = .12
					local zoffset = .07
					ui.Draw3DBox({ x=bonePos.x-size, y=bonePos.y-size, z=bonePos.z-size+zoffset },
								{ x=bonePos.x+size, y=bonePos.y+size, z=bonePos.z+size+zoffset }, COLOR_YELLOW_50, false, hdg)
				end
				ui.DrawTextBlock(string.format("x:%4.2f y:%4.2f z:%4.2f h:%4.2f",pos.x,pos.y,pos.z,hdg))
			end
		end
	end

	local nDraw = 2
	-- Shows n closest peds
	local peds = GetNearbyPeds(LocalPlayer().ID, nDraw)
	if peds then
		for i=1,nDraw do
			if peds[i] then
				local pedPos = peds[i]:GetPosition()
				ui.Draw3DLine(playerPos, pedPos, COLOR_CYAN)
				local newPoint = game.MovePoint(playerPos, pedPos, 2)
				local textPos = game.WorldToScreen(newPoint)
				local dist = natives.SYSTEM.VDIST(playerPos.x, playerPos.y, playerPos.z, pedPos.x, pedPos.y, pedPos.z)
				if textPos then
					ui.DrawTextUI(string.format("%02.2f", dist), textPos.x, textPos.y-.04, FontChaletLondon, .2, COLOR_CYAN)
				end
			end
		end
	end
	-- Shows n closest vehs
	local vehs = GetNearbyVehs(LocalPlayer().ID, nDraw)
	if vehs then
		for i=1,nDraw do
			if vehs[i] then
				local vehPos = vehs[i]:GetPosition()
				ui.Draw3DLine(playerPos, vehPos, COLOR_YELLOW)
				local newPoint = game.MovePoint(playerPos, vehPos, 2)
				local textPos = game.WorldToScreen(newPoint)
				local dist = natives.SYSTEM.VDIST(playerPos.x, playerPos.y, playerPos.z, vehPos.x, vehPos.y, vehPos.z)
				if textPos then
					ui.DrawTextUI(string.format("%02.2f", dist), textPos.x, textPos.y-.04, FontChaletLondon, .2, COLOR_YELLOW)
				end
			end
		end
	end

	-- Shows aiming players
	for i=0,31 do
		local playername = natives.PLAYER.GET_PLAYER_NAME(i)
		if playername ~= "**Invalid**" then
			local other = Player(i)
			if natives.PLAYER.IS_PLAYER_FREE_AIMING_AT_ENTITY(i, LocalPlayer().ID) then
				ui.Draw3DLine(playerPos, other:GetPosition(), COLOR_RED)
			end
		end
	end

	-- Shows FrameRate
	local fTime = 1.0 / natives.GAMEPLAY._0xE599A503B3837E1B()
	_FrameSum = _FrameSum + fTime
	_FrameCount = _FrameCount + 1
	local divisor = 30
	if _FrameCount == divisor then
		_FrameCount = 0
		_FrameTime = _FrameSum / divisor
		_FrameSum = 0
	end
	if _FrameTime>50 then
		ui.DrawTextUI(string.format("%02.0f", _FrameTime), .982, .0003, 7, .4, COLOR_GREEN_50)
	else
		ui.DrawTextUI(string.format("%02.0f", _FrameTime), .982, .0003, 7, .4, COLOR_RED_50)
	end

end

---------------------------------------------------------------------------------------------------
-- Modded game mode
function ToggleCheatMode()
	_CheatMode = not _CheatMode
	if _CheatMode then
		ui.MapMessage("~BLIP_GUN_SHOP~ Cheat mode enabled.")
	else
		ui.MapMessage("~BLIP_GUN_SHOP~ Cheat mode disabled.")
	end
end
function CheatMode()
	if _CheatMode then
		ui.ShowHudComponent(HudComponentReticle)
	end

-- Owner of bullet (if Aiming = player)
	local bulletOwner, bulletPower, bulletWeapon
	if natives.CONTROLS.IS_CONTROL_PRESSED(0, ControlAim) then
		bulletOwner = LocalPlayer().ID
		bulletPower = 50
		bulletWeapon = natives.WEAPON.GET_SELECTED_PED_WEAPON(LocalPlayer().ID)
		if bulletWeapon == WEAPON_UNARMED then
			bulletWeapon = WEAPON_PISTOL50
		end
	else
		bulletOwner = -1
		bulletPower = 50
		bulletWeapon = WEAPON_SMG
	end

-- Take car
	if IsKeyJustDown(_KeyTakeCar, true) then
		local ent = select(1, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
		if ent then
			print("Taking car...")
			if ent:IsVehicle() then
				if natives.NETWORK.NETWORK_HAS_CONTROL_OF_ENTITY(ent.ID) then
					print("Has control...")
				else
					print("Waiting for control...")
					local count = 500
					while not natives.NETWORK.NETWORK_HAS_CONTROL_OF_ENTITY(ent.ID) and count>0 do
						natives.NETWORK.NETWORK_REQUEST_CONTROL_OF_ENTITY(ent.ID)
						coroutine.yield()
						count=count-1
					end
				end
				local PlayerID = LocalPlayer().PlayerID
				local PlayerName = natives.PLAYER.GET_PLAYER_NAME(PlayerID)
--
				ent:SetNotNeeded()
				if not ent:IsCar() and not ent:IsBike() then
					if not natives.VEHICLE.IS_VEHICLE_SEAT_FREE(ent.ID, -1) then
						local ped = ent:GetPedInSeat(-1)
						print("Removing driver...",ped.ID)
						ped:SetMissionEntity()
						ped:Delete()
					end
				end
				natives.ENTITY.SET_ENTITY_AS_MISSION_ENTITY(ent.ID, false, true)
				natives.VEHICLE.SET_VEHICLE_ENGINE_ON(ent.ID, true, true, true)
				natives.VEHICLE.SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(ent.ID, false)
				natives.VEHICLE.SET_VEHICLE_DOORS_LOCKED(ent.ID, 0)
				natives.VEHICLE.SET_VEHICLE_IS_STOLEN(ent.ID, false)
				natives.ENTITY.SET_ENTITY_INVINCIBLE(ent.ID, false)
				natives.ENTITY.SET_ENTITY_PROOFS(ent.ID, false, false, false, false, false, false, false, false)
				if natives.VEHICLE.GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(ent.ID, PlayerID) then
					natives.VEHICLE.SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(ent.ID, PlayerID, false)
				end
				natives.VEHICLE.SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(ent.ID, true)
				natives.VEHICLE.SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(ent.ID, false)
				natives.VEHICLE.SET_VEHICLE_HANDBRAKE(ent.ID, false)
				natives.VEHICLE.SET_VEHICLE_IS_WANTED(ent.ID, false)
				natives.VEHICLE.SET_PLAYERS_LAST_VEHICLE(ent.ID)
				natives.VEHICLE.SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(ent.ID, false)
				natives.VEHICLE.SET_VEHICLE_UNDRIVEABLE(ent.ID, false)
				natives.VEHICLE._0xE851E480B814D4BA(ent.ID, true)
				natives.VEHICLE._0x3441CAD2F2231923(ent.ID, false)
				natives.VEHICLE._0xDBC631F109350B8C(ent.ID, false)
				natives.VEHICLE._0x2311DD7159F00582(ent.ID, false)
--	
				natives.DECORATOR.DECOR_REMOVE(ent.ID, "Player_Vehicle")
				natives.DECORATOR.DECOR_REMOVE(ent.ID, "MPBitset")
				natives.DECORATOR.DECOR_REMOVE(ent.ID, "Veh_Modded_By_Player")

				natives.DECORATOR.DECOR_SET_INT(ent.ID, "Player_Vehicle", natives.NETWORK._0xBC1D768F2F5D6C05(PlayerID))
				natives.DECORATOR.DECOR_SET_INT(ent.ID, "MPBitset", _MPBitset)
				if not natives.DECORATOR.DECOR_EXIST_ON(ent.ID, "PV_Slot") then
					natives.DECORATOR.DECOR_SET_INT(ent.ID, "PV_Slot", 0)
				end
				if not natives.DECORATOR.DECOR_EXIST_ON(ent.ID, "Previous_Owner") then
					natives.DECORATOR.DECOR_SET_INT(ent.ID, "Previous_Owner", 0)
				end
				natives.DECORATOR.DECOR_SET_INT(ent.ID, "Veh_Modded_By_Player", natives.GAMEPLAY.GET_HASH_KEY(PlayerName))

				if ent:IsCar() or ent:IsBike() or ent:IsQuadbike() then
					natives.VEHICLE.SET_VEHICLE_ALARM(ent.ID, false)
					natives.AI.TASK_ENTER_VEHICLE(LocalPlayer().ID, ent.ID, 10000, VehicleSeatDriver, 1.0, 9, 0)
					local count=500
					while not LocalPlayer():IsInVehicle() and count>0 do
						coroutine.yield()
						count=count-1
					end
				end
				LocalPlayer():SetIntoVehicle(ent.ID, -1)
				ent:SetNotNeeded()
				ent:SetMissionEntity()
			else
				print("Not a vehicle.")
			end
			print("done.")
		end
	end

-- Fix/Clean/Flip Up vehicle
	if natives.CONTROLS.IS_CONTROL_JUST_PRESSED(0, ControlSelectWeaponAutoRifle) then
		local veh
		if LocalPlayer():IsInVehicle() then
			veh = LocalPlayer():GetVehicle()
		else
			veh = select(1, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
			if not veh:IsVehicle() then
				veh = nil
			end
		end
		if veh then
			veh:SetDirtLevel(0)
			veh:Fix()
			if veh:IsBike() or veh:IsCar() then
				veh:SetOnGround()
			end
			natives.FIRE.STOP_ENTITY_FIRE(veh.ID)
			natives.VEHICLE.SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veh.ID, true)
		end
		return
	end

-- Steal other vehicle's colors
	if natives.CONTROLS.IS_CONTROL_JUST_PRESSED(0, ControlSelectWeaponSniper) then
		local veh
		if LocalPlayer():IsInVehicle() then
			veh = select(1, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
			if veh then
				if veh:IsVehicle() then
					local pricolor, seccolor = veh:GetColours()
					local prlcolor, whlcolor = veh:GetExtraColours()
					local platetype = veh:GetPlateType()
					local windowtint = natives.VEHICLE.GET_VEHICLE_WINDOW_TINT(veh.ID)
					veh = LocalPlayer():GetVehicle()
					veh:SetColours(pricolor, seccolor)
					veh:SetExtraColours(prlcolor, whlcolor)
					veh:SetPlateType(platetype)
					natives.VEHICLE.SET_VEHICLE_WINDOW_TINT(veh.ID, windowtint)
				end
			end
		else
			print("Not in a vehicle.")
		end
	end

-- Delete gun
	if IsKeyJustDown(_KeyDeleteGun, true) then
		local ent = select(1, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
		if ent then
			if ent:IsObject() or ent:IsVehicle() or ent:IsPed() then
				print("Deleting...", ent.ID)
				gui.BeepSelect()
				if natives.NETWORK.NETWORK_HAS_CONTROL_OF_ENTITY(ent.ID) then
					print("Has control...")
				else
					print("Waiting for control...")
					local count = 500
					while not natives.NETWORK.NETWORK_HAS_CONTROL_OF_ENTITY(ent.ID) and count>0 do
						natives.NETWORK.NETWORK_REQUEST_CONTROL_OF_ENTITY(ent.ID)
						coroutine.yield()
						count=count-1
					end
				end
				local blip = ent:GetBlip()
				if blip then
					print("Deleting Blip...")
					blip:Delete()
				end
				if ent:Exists() then
					print("Trying as Mission Entity...")
					ent:SetMissionEntity()
					ent:Delete()
				end
				if ent:Exists() then
					print("Trying as Not Mission Entity...")
					ent:SetMissionEntity(false)
					ent:Delete()
				end
				if ent:Exists() then
					print("Trying as Not Needed...")
					ent:SetNotNeeded()
					ent:Delete()
				end
				if ent:Exists() then
					print("Trying to clean up area...")
					local pos = ent:GetPosition()
					natives.GAMEPLAY.CLEAR_AREA(pos.x, pos.y, pos.z, 1, false, false, false, false)
				end
				if ent:Exists() then
					print("Can't delete, sending away...")
					ent:SetPosition(500, 7500, 5000)
					game.WaitMS(10)
					ent:SetPosition(500, 7500, 5000)
					game.WaitMS(10)
					ent:SetPosition(500, 7500, 5000)
				end
			else
				print("Invalid Entity, can't delete.")
			end
		end
		print("done.")
	end

-- Merryweather gun
	natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlLookBehind, true)
	if natives.CONTROLS.IS_DISABLED_CONTROL_JUST_PRESSED(0, ControlLookBehind) then
		local tgt = select(2, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
		if tgt then
			gui.BeepSelect()
			local vehHash = natives.GAMEPLAY.GET_HASH_KEY("BUZZARD2")
			local pedHash = natives.GAMEPLAY.GET_HASH_KEY("s_m_y_blackops_01")
			streaming.RequestModel(vehHash)
			streaming.RequestModel(pedHash)
			heading = LocalPlayer():GetHeading()
			tgt.z = tgt.z+30
			local veh = game.CreateVehicle(vehHash, tgt, heading)
			if veh then
				veh:SetNotNeeded()
				if veh:IsHeli() then
					natives.VEHICLE.SET_HELI_BLADES_FULL_SPEED(veh.ID)
				end
				tgt.z = tgt.z+5
				local ped1 = game.CreatePed(pedHash, tgt, heading)
				local ped2 = game.CreatePed(pedHash, tgt, heading)
				local ped3 = game.CreatePed(pedHash, tgt, heading)
--
				natives.AI.CLEAR_PED_TASKS_IMMEDIATELY(ped1.ID)
				natives.AI.CLEAR_PED_TASKS_IMMEDIATELY(ped2.ID)
				ped1:SetIntoVehicle(veh.ID, VehicleSeatDriver)
				ped2:SetIntoVehicle(veh.ID, 1)
				ped3:SetIntoVehicle(veh.ID, 2)
				natives.PED.SET_PED_CAN_BE_DRAGGED_OUT(ped1.ID, false)
				natives.PED.SET_PED_CAN_BE_DRAGGED_OUT(ped2.ID, false)
				natives.PED.SET_PED_CAN_BE_DRAGGED_OUT(ped3.ID, false)
				local groupHash = natives.GAMEPLAY.GET_HASH_KEY("DEER")
				natives.PED.SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(ped1.ID, groupHash)
				natives.PED.SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(ped2.ID, groupHash)
				natives.PED.SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(ped3.ID, groupHash)
				natives.PED.SET_PED_RELATIONSHIP_GROUP_HASH(ped1.ID, groupHash)
				natives.PED.SET_PED_RELATIONSHIP_GROUP_HASH(ped2.ID, groupHash)
				natives.PED.SET_PED_RELATIONSHIP_GROUP_HASH(ped3.ID, groupHash)
				natives.PED.SET_PED_TARGET_LOSS_RESPONSE(ped1.ID, 1)
				natives.PED.SET_PED_TARGET_LOSS_RESPONSE(ped2.ID, 1)
				natives.PED.SET_PED_TARGET_LOSS_RESPONSE(ped3.ID, 1)
				natives.AI.TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped1.ID, true)
				natives.AI.TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped2.ID, true)
				natives.AI.TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped3.ID, true)
				natives.AI.TASK_COMBAT_HATED_TARGETS_AROUND_PED(ped1.ID, 500, 0)
				natives.AI.TASK_COMBAT_HATED_TARGETS_AROUND_PED(ped2.ID, 500, 0)
				natives.AI.TASK_COMBAT_HATED_TARGETS_AROUND_PED(ped3.ID, 500, 0)
				natives.PED.SET_PED_KEEP_TASK(ped1.ID, true)
				natives.PED.SET_PED_KEEP_TASK(ped2.ID, true)
				natives.PED.SET_PED_KEEP_TASK(ped3.ID, true)
				natives.PED.SET_PED_FLEE_ATTRIBUTES(ped1.ID, 0, false)
				natives.PED.SET_PED_FLEE_ATTRIBUTES(ped2.ID, 0, false)
				natives.PED.SET_PED_FLEE_ATTRIBUTES(ped3.ID, 0, false)
				natives.PED.SET_PED_COMBAT_MOVEMENT(ped1.ID, 3)
				natives.PED.SET_PED_COMBAT_MOVEMENT(ped2.ID, 3)
				natives.PED.SET_PED_COMBAT_MOVEMENT(ped3.ID, 3)
				natives.PED.SET_PED_COMBAT_ABILITY(ped1.ID, 2)
				natives.PED.SET_PED_COMBAT_ABILITY(ped2.ID, 2)
				natives.PED.SET_PED_COMBAT_ABILITY(ped3.ID, 2)
				natives.PED.SET_PED_COMBAT_RANGE(ped1.ID, 2)
				natives.PED.SET_PED_COMBAT_RANGE(ped2.ID, 2)
				natives.PED.SET_PED_COMBAT_RANGE(ped3.ID, 2)
				natives.PED.SET_PED_COMBAT_ATTRIBUTES(ped1.ID, 46, true)
				natives.PED.SET_PED_COMBAT_ATTRIBUTES(ped2.ID, 46, true)
				natives.PED.SET_PED_COMBAT_ATTRIBUTES(ped3.ID, 46, true)

				natives.WEAPON.GIVE_WEAPON_TO_PED(ped2.ID, WEAPON_COMBATMG, 1000, true, true)
				natives.WEAPON.GIVE_WEAPON_TO_PED(ped3.ID, WEAPON_COMBATMG, 1000, true, true)
				natives.WEAPON.SET_PED_INFINITE_AMMO_CLIP(ped2.ID, true)
				natives.WEAPON.SET_PED_INFINITE_AMMO_CLIP(ped3.ID, true)
				natives.AI.CONTROL_MOUNTED_WEAPON(ped2.ID)
				natives.AI.CONTROL_MOUNTED_WEAPON(ped3.ID)
				natives.PED.SET_PED_SHOOT_RATE(ped2.ID, 100)
				natives.PED.SET_PED_SHOOT_RATE(ped3.ID, 100)
				natives.PED.SET_PED_ACCURACY(ped2.ID, 100)
				natives.PED.SET_PED_ACCURACY(ped3.ID, 100)
				natives.PED.SET_PED_FIRING_PATTERN(ped2.ID, natives.GAMEPLAY.GET_HASH_KEY("firing_pattern_burst_fire_heli"))
				natives.PED.SET_PED_FIRING_PATTERN(ped3.ID, natives.GAMEPLAY.GET_HASH_KEY("firing_pattern_burst_fire_heli"))
				natives.WEAPON.SET_CURRENT_PED_VEHICLE_WEAPON(ped2.ID, natives.GAMEPLAY.GET_HASH_KEY("vehicle_weapon_player_buzzard"))
				natives.WEAPON.SET_CURRENT_PED_VEHICLE_WEAPON(ped3.ID, natives.GAMEPLAY.GET_HASH_KEY("vehicle_weapon_player_buzzard"))
				natives.PED.SET_PED_CONFIG_FLAG(ped2.ID, 116, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped3.ID, 116, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped2.ID, 29, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped3.ID, 29, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped2.ID, 118, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped3.ID, 118, false)
				natives.PED.SET_PED_CONFIG_FLAG(ped2.ID, 208, true)
				natives.PED.SET_PED_CONFIG_FLAG(ped3.ID, 208, true)

				natives.VEHICLE.SET_VEHICLE_ENGINE_ON(veh.ID, true, true, false)

				local blip = veh:AttachBlip()
			else
				print("Vehicle didn't spawn")
			end
		end
	end

-- Terrorist gun
	if IsKeyJustDown(_KeyTerroristGun, true) then
		local ped = game.GetTargetPed(_RayDistance, _IntersectFlags, LocalPlayer().ID)
		if ped then
			gui.BeepSelect()
			ped:SetMissionEntity()
			natives.WEAPON.GIVE_WEAPON_TO_PED(ped.ID, WEAPON_COMBATMG, 1000, true, true)
			natives.WEAPON.SET_PED_INFINITE_AMMO_CLIP(ped.ID, true)
--
			local groupHash = natives.GAMEPLAY.GET_HASH_KEY("DEER")
			natives.PED.SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(ped.ID, groupHash)
			natives.PED.SET_PED_RELATIONSHIP_GROUP_HASH(ped.ID, groupHash)
			natives.AI.CLEAR_PED_TASKS_IMMEDIATELY(ped.ID)
			natives.AI.TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped.ID, true)
			natives.AI.TASK_COMBAT_HATED_TARGETS_AROUND_PED(ped.ID, 500, 0)
			natives.PED.SET_PED_KEEP_TASK(ped.ID, true)
			natives.PED.SET_PED_FLEE_ATTRIBUTES(ped.ID, 0, false)
			natives.PED.SET_PED_COMBAT_MOVEMENT(ped.ID, 3)
			natives.PED.SET_PED_COMBAT_ABILITY(ped.ID, 2)
			natives.PED.SET_PED_COMBAT_RANGE(ped.ID, 2)
			natives.PED.SET_PED_COMBAT_ATTRIBUTES(ped.ID, 46, true);
--
			local blip = ped:AttachBlip()
			blip:SetPrimaryColour(BlipColorRed)
			blip:SetScale(.5)
		end
	end

-- Heart attack gun
	natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlVehicleDuck, true)
	if natives.CONTROLS.IS_DISABLED_CONTROL_JUST_PRESSED(0, ControlVehicleDuck) then
		local ped = game.GetTargetPed(_RayDistance, _IntersectFlags, LocalPlayer().ID)
		if ped then
			gui.BeepSelect()
			ped:SetNotNeeded()
			natives.PED.APPLY_DAMAGE_TO_PED(ped.ID, 1000, false)
		end
	end

-- John Kennedy gun
	natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlAttack, true)
	if natives.CONTROLS.IS_DISABLED_CONTROL_PRESSED(0, ControlAttack) then
		local timer = 150
		local bulletSpeed = 500
		if game.GetTimerA() > 0 then
			local org, tgt, ent, ignoreEntity
			if LocalPlayer():IsInVehicle() then
				ignoreEntity = LocalPlayer():GetVehicle().ID
				bulletOwner = LocalPlayer().ID
			else
				ignoreEntity = LocalPlayer().ID
			end
			ent,tgt = game.GetRaycastTarget(_RayDistance, _IntersectFlags, ignoreEntity, _IntersectValue)
			if ent then
				if ent:IsPed() then
					if not ent:IsDead() then
						local boneIndex = natives.ENTITY.GET_ENTITY_BONE_INDEX_BY_NAME(ent.ID, "BONETAG_HEAD")
						tgt = natives.ENTITY.GET_WORLD_POSITION_OF_ENTITY_BONE(ent.ID, boneIndex)
						local vec = natives.ENTITY.GET_ENTITY_FORWARD_VECTOR(ent.ID)					
						org = { x=tgt.x+(vec.x*4), y=tgt.y+(vec.y*4), z=tgt.z+(vec.z*4) }
					end
				end
			else
				tgt = game.GetCoordsInFrontOfCam(_RayDistance)
			end
			if tgt then
				org = org or LocalPlayer():GetPosition()
				org.z = org.z+1
				if LocalPlayer():IsInVehicle() then
					org = game.MovePoint(org, tgt, 4)
					local playerVehicle = LocalPlayer():GetVehicle()
					if playerVehicle:IsPlane() or playerVehicle:IsHeli() then
						if natives.CONTROLS.IS_CONTROL_PRESSED(0, ControlAim) then
							bulletWeapon = VEHICLE_WEAPON_TURRET_INSURGENT
							bulletPower = 100
							timer = 50
							if IsKeyDown(KEY_SHIFT) then
								bulletWeapon = VEHICLE_WEAPON_PLAYER_LAZER
								bulletSpeed = 2000
								if playerVehicle:GetModel() == VEHICLE_TITAN then
									timer = 400
								else
									timer = 50
								end
							end
							if IsKeyDown(KEY_CONTROL) then
								bulletWeapon = VEHICLE_WEAPON_TANK
								bulletSpeed = 2000
								timer = 1000
							end
						else
							tgt = org
						end
					end
				else
					org = game.MovePoint(org, tgt, 1.5)
				end
				if game.Distance(org, tgt) > 2 then
					_TrackedPoint = tgt
					natives.GAMEPLAY._0xE3A7742E0B7A2F8B(org.x, org.y, org.z, tgt.x, tgt.y, tgt.z, bulletPower, true, bulletWeapon, bulletOwner, true, false, bulletSpeed, ignoreEntity)
				end
			end
			game.SetTimerA(-timer)
		end
	end

-- Drone strike gun
	natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlThrowGrenade, true)
	if natives.CONTROLS.IS_DISABLED_CONTROL_JUST_PRESSED(0, ControlThrowGrenade) then
		local tgt = select(2, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
		if tgt then
			gui.BeepSelect()
			local org = {}
			org.x = tgt.x+.02
			org.y = tgt.y
			org.z = tgt.z+50
			game.ShootBulletBetweenCoords(org, tgt, WEAPON_AIRSTRIKE_ROCKET, 100, 500, bulletOwner)
		end
	end

-- AC-130 strike gun
	natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlNextCamera, true)
	if natives.CONTROLS.IS_DISABLED_CONTROL_JUST_PRESSED(0, ControlNextCamera) then
		local tgt = select(2, game.GetRaycastTarget(_RayDistance, _IntersectFlags, LocalPlayer().ID, _IntersectValue))
		if tgt then
			local org = {}
			org.x = tgt.x+.02
			org.y = tgt.y
			org.z = tgt.z+50
			game.ShootBulletBetweenCoords(org, tgt, VEHICLE_WEAPON_PLAYER_BULLET, 100, 500, bulletOwner)
			game.ShootBulletBetweenCoords(org, tgt, VEHICLE_WEAPON_PLAYER_LAZER, 100, 500, bulletOwner)
		end
	end

end
---------------------------------------------------------------------------------------------------
-- Vehicle creation and modification mode
function ToggleVehicleMode()
	_VehicleMode = not _VehicleMode
	_VehicleModKit = nil
	_VehicleModID = _MinVehicleModID
	_VehicleModValue = nil
	_VehicleWType = nil
	if _VehicleMode then
		ui.MapMessage("~BLIP_CAR_MOD_SHOP~ Vehicle mode enabled.")
	else
		ui.MapMessage("~BLIP_CAR_MOD_SHOP~ Vehicle mode disabled.")
	end
end
function ApplyNeons(vehID, color)
	if not color then
		-- Neons will follow the vehicle's color by default
		color = {}
		local m_r = CMemoryBlock(4)
		local m_g = CMemoryBlock(4)
		local m_b = CMemoryBlock(4)
		natives.VEHICLE.GET_VEHICLE_COLOR(vehID, m_r, m_g, m_b)
		color.r = m_r:ReadDWORD32(0)
		color.g = m_g:ReadDWORD32(0)
		color.b = m_b:ReadDWORD32(0)
		m_r:Release()
		m_g:Release()
		m_b:Release()
		-- Maximize color intensity
		local ratio = 255/math.max(color.r, color.g, color.b)
		color.r=color.r*ratio
		color.g=color.g*ratio
		color.b=color.b*ratio
	end
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHTS_COLOUR(vehID, color.r, color.g, color.b)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 0, true)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 1, true)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 2, true)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 3, true)
end
function RemoveNeons(vehID, color)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 0, false)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 1, false)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 2, false)
	natives.VEHICLE._SET_VEHICLE_NEON_LIGHT_ENABLED(vehID, 3, false)
end
function VehicleMode()
	if LocalPlayer():IsInVehicle() then
-- Mod kit and vehicle
		local hasmod = false

		local veh = LocalPlayer():GetVehicle()
		if not _VehicleModKit then
			natives.VEHICLE.SET_VEHICLE_MOD_KIT(veh.ID, 0)
			_VehicleModKit = 0
		end
		ui.DrawTextBlock("Modding", _ModX, _ModY, FontChaletComprimeCologne, _FontSize, COLOR_GREEN, NOBLINK)
		ui.DrawTextBlock(veh:GetMaker().." "..veh:GetFullName()..", "..veh:GetClass(), _ModX+.040, _ModY, nil, nil, COLOR_WHITE)
-- Current wheel type
		if _VehicleModID == VehicleModFrontWheels or _VehicleModID == VehicleModBackWheels then
			if not _VehicleWType then
				_VehicleWType = natives.VEHICLE.GET_VEHICLE_WHEEL_TYPE(veh.ID)
			end
		end
-- Mod name
		local modSlotName = nil
		if _VehicleModID < 0 then
			modSlotName = _Mod[_VehicleModID]
		else
			modSlotName = natives.VEHICLE.GET_MOD_SLOT_NAME(veh.ID, _VehicleModID)
			modSlotName = modSlotName or _Mod[_VehicleModID] or "n/a"
		end
		if natives.UI._GET_LABEL_TEXT(modSlotName) ~= "NULL" then
			modSlotName = natives.UI._GET_LABEL_TEXT(modSlotName)
		end
		local str = "Mod: "..modSlotName.." (".._VehicleModID..")"
		if _VehicleModID == VehicleModFrontWheels or _VehicleModID == VehicleModBackWheels then
			str = str.." ("..(_ModW[_VehicleWType] or _VehicleWType)..")"
		end
		ui.DrawTextBlock(str, _ModX)
-- Mod limits
		if _ModLimits[_VehicleModID] then
			_MinVehicleModValue = _ModLimits[_VehicleModID].vmin
			_MaxVehicleModValue = _ModLimits[_VehicleModID].vmax
		else
			if _VehicleModID == _Mod_Livery then
				_MinVehicleModValue = 0
				_MaxVehicleModValue = natives.VEHICLE.GET_VEHICLE_LIVERY_COUNT(veh.ID) - 1
			else
				_MinVehicleModValue = -1
				_MaxVehicleModValue = (natives.VEHICLE.GET_NUM_VEHICLE_MODS(veh.ID, _VehicleModID) or 0)-1

			end
		end
		local nvar = _MaxVehicleModValue - _MinVehicleModValue + 1
		str = nvar.." type"
		if nvar ~= 1 then
			str = str.."s"
		end
		ui.DrawTextBlock(str)
-- Get current mod value
		if not _VehicleModValue then
			if not _ModLimits[_VehicleModID] then
				if _VehicleModID == _Mod_Livery then
					_VehicleModValue = natives.VEHICLE.GET_VEHICLE_LIVERY(veh.ID)
				else
					_VehicleModValue = natives.VEHICLE.GET_VEHICLE_MOD(veh.ID, _VehicleModID)
				end
			else
				if _ModLimits[_VehicleModID].vtype == "boolean" then
					_VehicleModValue = 0
					if natives.VEHICLE.IS_TOGGLE_MOD_ON(veh.ID, _VehicleModID) then
						_VehicleModValue = 1
					end
					if not _ModType[_VehicleModID] then
						_ModType[_VehicleModID] = {}
						_ModType[_VehicleModID][0] = "Not installed"
						_ModType[_VehicleModID][1] = "Installed"
					end
				else
					if _VehicleModID == _Mod_PRI_COLOR then
						_VehicleModValue = select(1, veh:GetColours())
					elseif _VehicleModID == _Mod_SEC_COLOR then
						_VehicleModValue = select(2, veh:GetColours())
					elseif _VehicleModID == _Mod_PRL_COLOR then
						_VehicleModValue = select(1, veh:GetExtraColours())
					elseif _VehicleModID == _Mod_WHL_COLOR then
						_VehicleModValue = select(2, veh:GetExtraColours())
					elseif _VehicleModID == _Mod_ACT_COLOR then
						_VehicleModValue = veh:GetAccentColor()
					elseif _VehicleModID == _Mod_TRM_COLOR then
						_VehicleModValue = veh:GetTrimColor()
					elseif _VehicleModID == _Mod_WND_TINT then
						_VehicleModValue = veh:GetWindowTint()
					elseif _VehicleModID == _Mod_PLT_TYPE then
						_VehicleModValue = veh:GetPlateType()
					end
				end
			end
		end
-- Set mod type name
		local modTypeName
		if _VehicleModID ==	_Mod_PRI_COLOR or
		   _VehicleModID ==	_Mod_SEC_COLOR or
		   _VehicleModID ==	_Mod_PRL_COLOR or
		   _VehicleModID ==	_Mod_WHL_COLOR or
		   _VehicleModID ==	_Mod_ACT_COLOR or
		   _VehicleModID ==	_Mod_TRM_COLOR then
			modTypeName = _ModColorNames[_VehicleModValue+1]
		else
			modTypeName = (_ModType[_VehicleModID] and _ModType[_VehicleModID][_VehicleModValue])
			if not modTypeName then
				local defaultName = "Stock"
				if _VehicleModValue ~= -1 then
					defaultName = "n/a"
					modTypeName = natives.VEHICLE.GET_MOD_TEXT_LABEL(veh.ID, _VehicleModID, _VehicleModValue)
				end
				modTypeName = modTypeName or defaultName
				if natives.UI._GET_LABEL_TEXT(modTypeName) ~= "NULL" then
					modTypeName = natives.UI._GET_LABEL_TEXT(modTypeName)
				end
			end
		end
		modTypeName = " ("..modTypeName..")"
		str = "Current: ".._VehicleModValue..modTypeName
		ui.DrawTextBlock(str)
-- Enter specific value
		if IsKeyJustDown(_KeyEnterValue, true) then
			if	_VehicleModID==_Mod_PRI_COLOR or
				_VehicleModID==_Mod_SEC_COLOR or
				_VehicleModID==_Mod_PRL_COLOR or
				_VehicleModID==_Mod_WHL_COLOR or
				_VehicleModID==_Mod_ACT_COLOR or
				_VehicleModID==_Mod_TRM_COLOR then
				local text = ui.OnscreenKeyboard("Enter ".._Mod[_VehicleModID], 3)
				if text then
					_VehicleModValue = tonumber(text)
					hasmod = true
				end
			end
			if _VehicleModID==_Mod_PLT_TYPE then
				local text = ui.OnscreenKeyboard("Enter vehicle plate", 8)
				if text then
					veh:SetPlateText(text)
				end
			end
		end
-- Fully upgrade vehicle
		if IsKeyJustDown(_KeyUpgradeVehicle, true) then
			for i=0,48,1 do
				if _ModLimits[i] then
					if _ModLimits[i].vtype == "boolean" then
						natives.VEHICLE.TOGGLE_VEHICLE_MOD(veh.ID, i, true)
					end
				else
					local _MaxVehicleModValue = natives.VEHICLE.GET_NUM_VEHICLE_MODS(veh.ID, i) or 0
					natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, i, _MaxVehicleModValue-1, true)
				end
			end
			ApplyNeons(veh.ID)
			natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, 14, _UpgradeHorn, true)
			veh:SetPlateText(_UpgradePlateText)
			veh:SetPlateType(_UpgradePlateType)
			if veh:IsCar() then
				veh:SetWindowTint(_UpgradeWindowTint)
				natives.VEHICLE.SET_VEHICLE_WHEEL_TYPE(veh.ID, _UpgradeWheelType)
				natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, 23, _UpgradeCarWheelNumber, true)
			end
			if veh:IsBike() then
				natives.VEHICLE.SET_VEHICLE_WHEEL_TYPE(veh.ID, 6)
				natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, 23, _UpgradeBikeWheelNumber, false)
				natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, 24, _UpgradeBikeWheelNumber, false)
			end
			natives.VEHICLE.SET_VEHICLE_ON_GROUND_PROPERLY(veh.ID)
			natives.VEHICLE.SET_VEHICLE_DOORS_LOCKED(veh.ID, 0)
			natives.VEHICLE.SET_VEHICLE_STRONG(veh.ID, true)
			natives.VEHICLE._0xAB04325045427AAE(veh.ID, false)
            natives.VEHICLE._0x428BACCDF5E26EAD(veh.ID, false)
			for i = 1,12 do
				if natives.VEHICLE.DOES_EXTRA_EXIST(veh.ID, i) then
					natives.VEHICLE.SET_VEHICLE_EXTRA(veh.ID, i, 0)
					print("Extra",i,"set.")
				end
			end
			natives.VEHICLE.SET_VEHICLE_HAS_STRONG_AXLES(veh.ID, true)
			natives.VEHICLE.SET_VEHICLE_REDUCE_GRIP(veh.ID, false)
			natives.VEHICLE.SET_CAN_RESPRAY_VEHICLE(veh.ID, true)
			natives.VEHICLE.SET_VEHICLE_TYRES_CAN_BURST(veh.ID, false)
			natives.VEHICLE.SET_VEHICLE_WHEELS_CAN_BREAK(veh.ID, false)
			natives.VEHICLE.SET_VEHICLE_ENGINE_CAN_DEGRADE(veh.ID, false)
			natives.VEHICLE.SET_VEHICLE_IS_STOLEN(veh.ID, false)
			natives.VEHICLE.ADD_VEHICLE_UPSIDEDOWN_CHECK(veh.ID)

			local multiplier = 50
			print("Setting engine multiplier to", multiplier)
			natives.VEHICLE._SET_VEHICLE_ENGINE_POWER_MULTIPLIER(veh.ID, multiplier)
			natives.VEHICLE._SET_VEHICLE_ENGINE_TORQUE_MULTIPLIER(veh.ID, multiplier)
			
			natives.VEHICLE.SET_VEHICLE_FRICTION_OVERRIDE(veh.ID, 2)

			return
		end
-- Lists some of information about the vehicle
		if IsKeyJustDown(_KeyVehicleInfo, true) then
			local pri, sec = veh:GetColours()
			local prl, whl = veh:GetExtraColours()
			print("Color Info ----------------")
			print("Primary color:", pri, _ModColorNames[pri+1])
			print("Secondary color:", sec, _ModColorNames[sec+1])
			print("Pearlescent color:", prl, _ModColorNames[prl+1])
			print("Wheel color:", whl, _ModColorNames[whl+1])
			print("Number of veh colors:", natives.VEHICLE.GET_NUMBER_OF_VEHICLE_COLOURS(veh.ID))
			print("Veh colour combination:", natives.VEHICLE.GET_VEHICLE_COLOUR_COMBINATION(veh.ID))
			local m_r = CMemoryBlock(4)
			local m_g = CMemoryBlock(4)
			local m_b = CMemoryBlock(4)
			natives.VEHICLE.GET_VEHICLE_COLOR(veh.ID, m_r, m_g, m_b)
			local r = m_r:ReadDWORD32(0)
			local g = m_g:ReadDWORD32(0)
			local b = m_b:ReadDWORD32(0)
			m_r:Release()
			m_g:Release()
			m_b:Release()
			print("Veh color:",r,g,b)
			print("_0xE6B0E8CFC3633BF0", natives.VEHICLE._0xE6B0E8CFC3633BF0(veh.ID))
			print("_0xEEBFC7A7EFDC35B4", natives.VEHICLE._0xEEBFC7A7EFDC35B4(veh.ID))
			print("_0x53AF99BAA671CA47", natives.VEHICLE._0x53AF99BAA671CA47(veh.ID))
			print("_0x6636C535F6CC2725", natives.VEHICLE._0x6636C535F6CC2725(veh.ID))
			print("_GET_VEHICLE_BODY_HEALTH", natives.VEHICLE.GET_VEHICLE_BODY_HEALTH(veh.ID))
			print("_GET_VEHICLE_BODY_HEALTH_2", natives.VEHICLE._GET_VEHICLE_BODY_HEALTH_2(veh.ID))
			print("_0x42A4BEB35D372407", natives.VEHICLE._0x42A4BEB35D372407(veh.ID))
			print("_0x2C8CBFE1EA5FC631", natives.VEHICLE._0x2C8CBFE1EA5FC631(veh.ID))
			print("_0x36492C2F0D134C56", natives.VEHICLE._0x36492C2F0D134C56(veh.ID))
			print("_0xBFBA3BA79CFF7EBF", natives.VEHICLE._0xBFBA3BA79CFF7EBF(veh:GetModel()))
			print("_0x53409B5163D5B846", natives.VEHICLE._0x53409B5163D5B846(veh:GetModel()))
			print("_0xC6AD107DDC9054CC", natives.VEHICLE._0xC6AD107DDC9054CC(veh:GetModel()))
			print("_0x5AA3F878A178C4FC", natives.VEHICLE._0x5AA3F878A178C4FC(veh:GetModel()))
            local soundID = natives.AUDIO.GET_SOUND_ID()
			local netID = natives.AUDIO.GET_NETWORK_ID_FROM_SOUND_ID(soundID)
			local pos = LocalPlayer():GetPosition()
			natives.NETWORK.SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(netID, true)
--			natives.AUDIO.PLAY_SOUND_FROM_ENTITY(soundID, "Crate_Beeps", veh.ID, "MP_CRATE_DROP_SOUNDS", false, 0)
--			natives.AUDIO.PLAY_SOUND_FROM_COORD(soundID, "Crate_Beeps", pos.x,pos.y,pos.z, "MP_CRATE_DROP_SOUNDS", false, 0, false)
--			natives.AUDIO.PLAY_SOUND(soundID, "Crate_Beeps", "MP_CRATE_DROP_SOUNDS", true, 127, true)
			natives.AUDIO.RELEASE_SOUND_ID(soundID)
		end
-- Lists all available mods for a vehicle
		if IsKeyJustDown(_KeyVehicleMods, true) then
			for i=0,48,1 do
				local v = natives.VEHICLE.GET_NUM_VEHICLE_MODS(veh.ID, i) or 0
				if v > 0 then
					local modname = natives.VEHICLE.GET_MOD_SLOT_NAME(veh.ID, i) or _Mod[i]
					print("Mod:",i,":",modname,":",v,"variations")
					for t = -1,v-1,1 do
						local label = "Stock"
						if t ~= -1 then
							label = natives.VEHICLE.GET_MOD_TEXT_LABEL(veh.ID, i, t)
							label = label or (_ModType[i] and _ModType[i][t]) or "n/a"
							if natives.UI._GET_LABEL_TEXT(label) ~= "NULL" then
								label = natives.UI._GET_LABEL_TEXT(label)
							end
						end
						print("\tVal:",t,":",label)
					end
				end
			end
			return
		end
-- Select Mod type
		if IsKeyJustDown(_KeyModTypeDown, true) then
			_VehicleModID = _VehicleModID+1
			if _VehicleModID > _MaxVehicleModID then
				_VehicleModID = _MinVehicleModID
			end
			_VehicleModValue = nil
			return
		end
		if IsKeyJustDown(_KeyModTypeUp, true) then
			_VehicleModID = _VehicleModID-1
			if _VehicleModID < _MinVehicleModID then
				_VehicleModID = _MaxVehicleModID
			end
			_VehicleModValue = nil
			return
		end
-- Select wheel type
		if _VehicleModID == VehicleModFrontWheels or _VehicleModID == VehicleModBackWheels then
			if IsKeyJustDown(_KeyModWheelRight, true) then
				_VehicleWType = _VehicleWType+1
				if _VehicleWType > _MaxWType then
					_VehicleWType = 0
				end
				natives.VEHICLE.SET_VEHICLE_WHEEL_TYPE(veh.ID, _VehicleWType)
			end
			if IsKeyJustDown(_KeyModWheelLeft, true) then
				_VehicleWType = _VehicleWType-1
				if _VehicleWType < 0 then
					_VehicleWType = _MaxWType
				end
				natives.VEHICLE.SET_VEHICLE_WHEEL_TYPE(veh.ID, _VehicleWType)
			end
		end
-- Select Mod value
		if IsKeyJustDown(_KeyModValueRight, true) then
			_VehicleModValue = _VehicleModValue+1
			if _VehicleModValue > _MaxVehicleModValue then
				_VehicleModValue = _MinVehicleModValue
			end
			hasmod = true
		end
		if IsKeyJustDown(_KeyModValueLeft, true) then
			_VehicleModValue = _VehicleModValue-1
			if _VehicleModValue < _MinVehicleModValue then
				_VehicleModValue = _MaxVehicleModValue
			end
			hasmod = true
		end
-- Apply modifications
		if hasmod then
			if not _ModLimits[_VehicleModID] then
				if _VehicleModID == _Mod_Livery then
					natives.VEHICLE.SET_VEHICLE_LIVERY(veh.ID, _VehicleModValue)
				else
					natives.VEHICLE.SET_VEHICLE_MOD(veh.ID, _VehicleModID, _VehicleModValue, true)
				end
			else
				if _ModLimits[_VehicleModID].vtype == "boolean" then
					natives.VEHICLE.TOGGLE_VEHICLE_MOD(veh.ID, _VehicleModID, _VehicleModValue==1)
					if _VehicleModID == 21 then
						if _VehicleModValue==1 then
							ApplyNeons(veh.ID)
						else
							RemoveNeons(veh.ID)
						end
					end
				else
					if _VehicleModID == _Mod_PRI_COLOR then
						local c = select(2, veh:GetColours())
						veh:SetColours(_VehicleModValue, c)
					elseif _VehicleModID == _Mod_SEC_COLOR then
						local c = select(1, veh:GetColours())
						veh:SetColours(c, _VehicleModValue)
					elseif _VehicleModID == _Mod_PRL_COLOR then
						local c = select(2, veh:GetExtraColours())
						veh:SetExtraColours(_VehicleModValue, c)
					elseif _VehicleModID == _Mod_WHL_COLOR then
						local c = select(1, veh:GetExtraColours())
						veh:SetExtraColours(c, _VehicleModValue)
					elseif _VehicleModID == _Mod_ACT_COLOR then
						veh:SetAccentColor(_VehicleModValue)
					elseif _VehicleModID == _Mod_TRM_COLOR then
						veh:SetTrimColor(_VehicleModValue)
					elseif _VehicleModID == _Mod_WND_TINT then
						veh:SetWindowTint(_VehicleModValue)
					elseif _VehicleModID == _Mod_PLT_TYPE then
						veh:SetPlateType(_VehicleModValue)
					end
				end
			end
			_VehicleModValue = nil
		end
	else
-- Clean up if not in a vehicle
	ui.DrawTextBlock("Not in a Vehicle", _ModX, _ModY, FontChaletComprimeCologne, _FontSize, COLOR_GREEN, BLINK)
		_VehicleModKit = nil
		_VehicleModID = _MinVehicleModID
		_VehicleModValue = nil
		_VehicleWType = nil
-- Add (Spawn) new vehicle
		if IsKeyJustDown(_KeyAddVehicle, true) then
			local name = ui.OnscreenKeyboard("Enter Vehicle name", 20)
			if name then
				local position = LocalPlayer():GetPosition()
				local heading = LocalPlayer():GetHeading()
				local hash = natives.GAMEPLAY.GET_HASH_KEY(name)
				if natives.VEHICLE.GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hash) ~= "CARNOTFOUND" then
					streaming.RequestModel(hash)
					local ent = game.CreateVehicle(hash, position, heading)
					natives.DECORATOR.DECOR_SET_INT(ent.ID, "MPBitset", _MPBitset)
					LocalPlayer():SetIntoVehicle(ent.ID, VehicleSeatDriver)
					ent:SetRadioStationName("OFF")
					ent:SetNotNeeded()
				else
					print("Vehicle does not exist.")
				end
			end
		end
	end
end
---------------------------------------------------------------------------------------------------
-- AutoPilot mode
function ToggleAutoPilotMode()
	if LocalPlayer():IsInVehicle() then
		local playerVehicle = LocalPlayer():GetVehicle()
		if playerVehicle:IsPlane() or playerVehicle:IsHeli() then
			local playerPos = LocalPlayer():GetPosition()
			local posX = tonumber(string.format("%.4f", playerPos.x))
			local posY = tonumber(string.format("%.4f", playerPos.y))
			local posZ = tonumber(string.format("%.4f", playerPos.z))
			local groundZ = 0

			if IsKeyDown(KEY_SHIFT) then
				_AutoPilotMode = 0
			else
				_AutoPilotMode = _AutoPilotMode + 1
			end

			if _AutoPilotMode == 5 then
				_AutoPilotMode = 0
			end
			-- Disable AutoPilot
			if _AutoPilotMode == 0 then
				_Altitude = 0
				ui.MapMessage("AutoPilot disabled.")
			end
			-- Enable Altitude mode
			if _AutoPilotMode == 1 then
				_Altitude = posZ
				if _Altitude < _MinAltitude then
					_Altitude = _MinAltitude
				end
				ui.MapMessage("AutoPilot (Altitude) enabled.")
			end
			-- Enable Hover mode (Heli only)
			if _AutoPilotMode == 2 then
				if playerVehicle:IsPlane() then
					_AutoPilotMode = _AutoPilotMode+1
				else
					_Altitude = posZ
					if _Altitude < _MinAltitude then
						_Altitude = _MinAltitude
					end
					_PositionX = posX
					_PositionY = posY
					ui.MapMessage("Hover Mode enabled.")
				end
			end
			-- Enable Ground Avoidance mode
			if _AutoPilotMode == 3 or _AutoPilotMode == 4 then
				local m_groundZ = CMemoryBlock(4)
				if natives.GAMEPLAY.GET_GROUND_Z_FOR_3D_COORD(posX, posY, posZ, m_groundZ, true) then
					groundZ = m_groundZ:ReadFloat(0)
					if groundZ < 0 then
						groundZ = 0
					end
					_Altitude = posZ - groundZ
					if _Altitude < _MinAltitude then
						_Altitude = _MinAltitude
					end
					if _AutoPilotMode == 3 then
						ui.MapMessage("Ground Avoidance enabled.")
					else
						ui.MapMessage("Altitude Stability enabled.")
					end
				else
					_AutoPilotMode = 0
					ui.MapMessage("Could not enable Ground Avoidance.")
					ui.MapMessage("AutoPilot disabled.")
				end
				m_groundZ:Release()
			end
		else
			ui.MapMessage("Can't enable AutoPilot.")
		end
	else
		ui.MapMessage("Can't enable AutoPilot.")
	end
end
function AutoPilotMode()
	if LocalPlayer():IsInVehicle() and not LocalPlayer():IsDead() then
		local playerPos = LocalPlayer():GetPosition()
		local posX = tonumber(string.format("%.4f", playerPos.x))
		local posY = tonumber(string.format("%.4f", playerPos.y))
		local posZ = tonumber(string.format("%.4f", playerPos.z))
		local playerVehicle = LocalPlayer():GetVehicle()

		local vec = natives.ENTITY.GET_ENTITY_FORWARD_VECTOR(LocalPlayer().ID)
		local disp = natives.ENTITY.GET_ENTITY_SPEED(playerVehicle.ID)/2
		local org = { x=posX+(vec.x*disp), y=posY+(vec.y*disp), z=posZ+(vec.z*disp) }

		ui.Draw3DPoint(org)
		ui.Draw3DPoint({x=_PositionX, y=_PositionY, z=_Altitude})
		playerPos = org
		local posX = playerPos.x
		local posY = playerPos.y
		local posZ = playerPos.z

		local adjX=0
		local adjY=0
		local adjZ=0

		-- Keep sea level altitude
		if _AutoPilotMode == 1 then
			if posZ < _Altitude then
				adjZ=(1-(posZ/_Altitude))*1
			end	
		end

		-- Hover mode (heli only)
		if _AutoPilotMode == 2 then
			local minForce = .01
			local maxForce = .08
			local divisor = 4
			local slack = 1
			if natives.SYSTEM.VDIST(posX, posY, posZ, _PositionX, _PositionY, _Altitude) > slack then
				adjX = (_PositionX-posX)/divisor
				adjY = (_PositionY-posY)/divisor
				adjZ = (_Altitude-posZ)/divisor
				if math.abs(adjX)>maxForce then
					adjX=adjX/math.abs(adjX)*maxForce
				end
				if math.abs(adjY)>maxForce then
					adjY=adjY/math.abs(adjY)*maxForce
				end
				if math.abs(adjZ)>maxForce then
					adjZ=adjZ/math.abs(adjZ)*maxForce
				end
			else
				adjX = (_PositionX-posX)/divisor
				adjY = (_PositionY-posY)/divisor
				adjZ = (_Altitude-posZ)/divisor
				if math.abs(adjX)>maxForce then
					adjX=adjX/math.abs(adjX)*minForce
				end
				if math.abs(adjY)>maxForce then
					adjY=adjY/math.abs(adjY)*minForce
				end
				if math.abs(adjZ)>maxForce then
					adjZ=adjZ/math.abs(adjZ)*minForce
				end
			end
		end

		-- Ground Avoidance System
		if _AutoPilotMode == 3 or _AutoPilotMode == 4 then
			if _AutoPilotMode == 4 then
				natives.ENTITY.APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(LocalPlayer():GetVehicle().ID, 1, 0, 0, -.1, true, false, true, true)
			end
			local m_groundZ = CMemoryBlock(4)
			local groundZ
			if natives.GAMEPLAY.GET_GROUND_Z_FOR_3D_COORD(posX, posY, posZ, m_groundZ, true) then
				groundZ = m_groundZ:ReadFloat(0)
				if groundZ < 0 then
					groundZ = 0
				end
				local ref = playerPos.z - groundZ
				if ref < _Altitude then
					adjZ=(1-(ref/_Altitude))*1
				end	
			else
				ui.MapMessage("Could not keep Ground Avoidance.")
--				adjZ=1
			end
			m_groundZ:Release()
		end
		if adjX~=0 or adjY~=0 or adjZ~=0 then
			natives.ENTITY.APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(LocalPlayer():GetVehicle().ID, 1, adjX, adjY, adjZ, true, false, true, true)
		end
	else
		_AutoPilotMode = 0
		ui.MapMessage("Autopilot disabled.")
	end
end

---------------------------------------------------------------------------------------------------
-- Run
function MyAddon:Run()
	print("MyAddon",_Version,": Waiting for user information ...")
	while LocalPlayer():GetName() == "**Invalid**" do
		coroutine.yield()
	end
	print("Active user:", LocalPlayer():GetName())
	local _Licenses = {}
	_Licenses[993304328]=true
	_Licenses[619877516]=true
	_Licenses[1253550775]=true
	local license = natives.GAMEPLAY.GET_HASH_KEY(LocalPlayer():GetName())
	if not _Licenses[license] then
		print("Invalid user license.\n")
		return
	else
		print("License no.:", license, "\n")
	end
	
	natives.NETWORK.NETWORK_SET_IN_SPECTATOR_MODE(false, 0)
	
	while self:IsRunning() do
------------------------------- Main code

-- Calling functions as needed
		if _DebugMode then
			DebugMode()
		end

		if _CheatMode then
			CheatMode()
		end

		if _VehicleMode then
			VehicleMode()
		end

		if _AutoPilotMode > 0 then
			AutoPilotMode()
		end

-- Disable needed controls in game
		natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlDropWeapon, true)
		natives.CONTROLS.DISABLE_CONTROL_ACTION(0, ControlDropAmmo, true)

-- Control keys enable/disable functions
		if IsKeyJustDown(_KeyDebug, true) then
			gui.BeepSelect()
			ToggleDebugMode()
		end

		if IsKeyJustDown(_KeyCheat, true) then
			gui.BeepSelect()
			ToggleCheatMode()
		end

		if IsKeyJustDown(_KeyVehicle, true) then
			gui.BeepSelect()
			ToggleVehicleMode()
		end
		
		if LocalPlayer():IsInVehicle() then
			if natives.ENTITY.GET_ENTITY_SPEED(LocalPlayer():GetVehicle().ID) > 10 then
				if _VehicleMode then
					ToggleVehicleMode()
				end
			end
		end

		if IsKeyJustDown(_KeyAutoPilot, true) then
			gui.BeepSelect()
			ToggleAutoPilotMode()
		end

		if IsKeyJustDown(VK_OEM_5, true) then	-- [\
			_GTA2CAM = not _GTA2CAM
			if _GTA2CAM then
				local height = 15
				local heading = 0
				local heading = LocalPlayer():GetHeading()
				_CAM = natives.CAM.CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 0, 0, height, -90, 0, heading, 60, false, 0)
				natives.CAM.ATTACH_CAM_TO_ENTITY(_CAM, LocalPlayer().ID, 0, 0, height, false)
				natives.CAM.SET_CAM_ACTIVE(_CAM, true)
				natives.CAM.RENDER_SCRIPT_CAMS(true, true, 1000, true, false)
			else
				natives.CAM.SET_CAM_ACTIVE(_CAM, false)
				natives.CAM.DESTROY_CAM(_CAM, false)
				natives.CAM.RENDER_SCRIPT_CAMS(false, true, 1000, true, false)				
			end
		end

		if _GTA2CAM then
			local heading = LocalPlayer():GetHeading()
			local speed = natives.ENTITY.GET_ENTITY_SPEED(LocalPlayer().ID)
			if speed>100 then
				speed = 100
			end
			natives.CAM.SET_CAM_FOV(_CAM, 60+(80*speed/100))
			natives.CAM.SET_CAM_ROT(_CAM, -90, 0, heading, 0)
		end

--		local bits={}
--		bits[1]=natives.PLAYER.IS_PLAYER_DEAD(LocalPlayer().PlayerID) and 1 or 0
--		bits[2]=natives.PLAYER.IS_PLAYER_PLAYING(LocalPlayer().PlayerID) and 1 or 0
--		bits[3]=natives.PLAYER.IS_PLAYER_CONTROL_ON(LocalPlayer().PlayerID) and 1 or 0
--		bits[4]=natives.PLAYER.IS_PLAYER_READY_FOR_CUTSCENE(LocalPlayer().PlayerID) and 1 or 0
--		bits[5]=natives.PLAYER.IS_PLAYER_SCRIPT_CONTROL_ON(LocalPlayer().PlayerID) and 1 or 0
--		bits[6]=natives.NETWORK.NETWORK_IS_GAME_IN_PROGRESS() and 1 or 0
--		bits[7]=natives.NETWORK.NETWORK_IS_SESSION_ACTIVE() and 1 or 0	
--		bits[8]=natives.NETWORK.NETWORK_IS_IN_SESSION() and 1 or 0
--		bits[9]=natives.NETWORK.NETWORK_IS_SESSION_STARTED() and 1 or 0
--		bits[10]=natives.NETWORK.NETWORK_IS_SESSION_BUSY() and 1 or 0
--		bits[11]=natives.NETWORK.NETWORK_CAN_SESSION_END() and 1 or 0
--		local bitsText=table.concat(bits)
--		
--		if bitsText ~= _PreviousBits then
--			print(natives.NETWORK._GET_POSIX_TIME(),":",_PreviousBits,"->",bitsText)
--			_PreviousBits=bitsText
--		end

--		local tasks = {}
--		local count = 0
--		for i=0,511 do
--			if natives.AI.GET_IS_TASK_ACTIVE(LocalPlayer().ID, i) then
--				count=count+1
--				tasks[count]=string.format("%d ", i)
--			end
--		end
--		local tasksText=table.concat(tasks)
--		if tasksText ~= _PreviousTasks then
--			print("--")
--			print(tasksText)
--			_PreviousTasks=tasksText
--		end

--		if IsKeyJustDown(VK_OEM_5, true) then	-- [\
--			print("-------------------------------")
--			for i=0,31 do
--				local playerPed = natives.PLAYER.GET_PLAYER_PED(i)
--				if playerPed > 0 then
--					local playerName = natives.PLAYER.GET_PLAYER_NAME(i)
--					local b0 = natives.WEAPON.HAS_PED_GOT_WEAPON(playerPed, WEAPON_PISTOL, false)
--					local b1 = natives.WEAPON.HAS_PED_GOT_WEAPON(playerPed, WEAPON_ASSAULTRIFLE, false)
--					local b2 = natives.WEAPON.HAS_PED_GOT_WEAPON(playerPed, WEAPON_RAILGUN, false)
--					local b3 = natives.WEAPON.HAS_PED_GOT_WEAPON(playerPed, WEAPON_MINIGUN, false)
--					local val1 = natives.NETWORK._0xBC1D768F2F5D6C05(i)
--					local val2 = natives.PLAYER._0x56105E599CAB0EFA(i)
--					print("Player", i, playerName, "ped:", playerPed, "Weapon:", b0, b1, b2, b3, val1, val2)
--				end
--			end
--		end


--		if IsKeyJustDown(VK_OEM_5, true) then	-- [\
--			natives.ENTITY.SET_ENTITY_VISIBLE(LocalPlayer().ID, _Invisible, false)
--			if LocalPlayer():IsInVehicle() then
--				natives.ENTITY.SET_ENTITY_VISIBLE(LocalPlayer():GetVehicle().ID, _Invisible, false, 0)
--			end
--			_Invisible = not _Invisible
--			if _Invisible then
--				print("Going invisible.")
--			end
--		end
--		if _Invisible then
----			natives.NETWORK.SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true)
--			natives.NETWORK.SET_ENTITY_LOCALLY_VISIBLE(LocalPlayer().ID)
--			if LocalPlayer():IsInVehicle() then
--				natives.NETWORK.SET_ENTITY_LOCALLY_VISIBLE(LocalPlayer():GetVehicle().ID)
--			end
--		end

		self:Wait(10)
------------------------------- End of main code
	end
end
---------------------------------------------------------------------------------------------------
-- OnError
function MyAddon:OnError()
	print("empty_addon Thread caused an error!")
	self:Reset()
end

-- Register
MyAddon:Register()