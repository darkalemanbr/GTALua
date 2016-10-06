MyGarage = ScriptThread("MyGarage")

-- Global variables
local _Waiting = false
-- Garage global variables
local _GarageSlots = {}
local _GarageZ = -99.2
local _GaragePos = {
		{x=224.33, y=-980.85,  z=_GarageZ, h=241.40},
		{x=224.33, y=-986.35,  z=_GarageZ, h=241.40},
		{x=224.33, y=-991.85,  z=_GarageZ, h=241.40},
		{x=224.33, y=-997.35,  z=_GarageZ, h=241.40},
		{x=224.33, y=-1002.85, z=_GarageZ, h=241.40},
		{x=232.65, y=-980.85,  z=_GarageZ, h=116.31},
		{x=232.65, y=-986.35,  z=_GarageZ, h=116.31},
		{x=232.65, y=-991.85,  z=_GarageZ, h=116.31},
		{x=232.65, y=-997.35,  z=_GarageZ, h=116.31},
		{x=232.65, y=-1002.85, z=_GarageZ, h=116.31}
	}
local _GarageInSpawn = {x=228.12, y=-1002.35, z=_GarageZ, h=0}
local _GarageOutSpawn = {x=-759.34, y=-79.94, z=36.45, h=115.22}
local _GarageInDoor = {x=-721.7, y=-60.6, z=36.5}
local _GarageOutDoor = {x=228.12, y=-1005.35, z=-98.9}
local _EnteringGarage = false
local _LeavingGarage = false
local _InsideGarage = false
local _DoorRadius = 1
local _WaitTime = 2000
-- Vehicle storage variables
local _VehicleTable
local _VehicleFileFolder = "GTALua\\Addons\\MyGarage\\"
local _VehicleFileName = "GarageSlot"
local _VehicleFileExt = ".vdf"
-- Player global variables
local playerPlayerID
local playerID
local playerPos
local playerVehicle
local playerModID = 429151961
local playerModBy = 1253550775

function VehicleFileExists(slot)
	local filename = _VehicleFileFolder.._VehicleFileName..slot.._VehicleFileExt
	local f=io.open(filename, "r")
	if f~=nil then io.close(f) return true else return false end
end

function string:split(sep)
        local sep, fields = sep or ":", {}
        local pattern = string.format("([^%s]+)", sep)
        self:gsub(pattern, function(c) fields[#fields+1] = c end)
        return fields
end

function LoadVehicleFile(slot)
	local filename = _VehicleFileFolder.._VehicleFileName..slot.._VehicleFileExt
	local f,err=io.open(filename, "r")
	if err then
		print("Error reading", filename, "...")
		return
	end
	local vehicle = {}
	while true do
		line = f:read()
		if not line then
			break
		end
		vars = line:split(":")
		if tonumber(vars[1]) then
			vars[1] = tonumber(vars[1])
		end
		if tonumber(vars[2]) then
			vars[2] = tonumber(vars[2])
		end
		vehicle[vars[1]]=vars[2]
	end
	if vehicle.name then
		vehicle.hash = natives.GAMEPLAY.GET_HASH_KEY(vehicle.name)
	end
	f:close()
	_GarageSlots[slot]=vehicle
end

function SaveVehicleFile(slot)
	local vehicle = _GarageSlots[slot]
	local filename = _VehicleFileFolder.._VehicleFileName..slot.._VehicleFileExt
	local f,err=io.open(filename, "w")
	if err then
		print("Error writing", filename, "...")
		return
	end
	if not vehicle.name then
		vehicle.name = natives.VEHICLE.GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(vehicle.hash)
	end
	f:write("name:"..vehicle.name.."\n")
	f:write("pricolor:"..(vehicle.pricolor or -1).."\n")
	f:write("seccolor:"..(vehicle.seccolor or -1).."\n")
	f:write("prlcolor:"..(vehicle.prlcolor or -1).."\n")
	f:write("whlcolor:"..(vehicle.whlcolor or -1).."\n")
	f:write("plttype:"..(vehicle.plttype or -1).."\n")
	if vehicle.plttext then
		f:write("plttext:"..vehicle.plttext.."\n")
	end
	f:write("wndtint:"..(vehicle.wndtint or -1).."\n")
	f:write("whltype:"..(vehicle.whltype or -1).."\n")
	for i=0,48 do
		f:write(i..":"..(vehicle[i] or -1).."\n")
	end
	f:close()
end

function RemoveVehicleFile(slot)
	local filename = _VehicleFileFolder.._VehicleFileName..slot.._VehicleFileExt
	os.remove(filename)
end

function LoadGarage()
	print("----------------------------------")
	print("Loading local garage ...")
	for slot=1,10 do
		local veh
		if VehicleFileExists(slot) then
			print("   Slot",slot,"...")
			LoadVehicleFile(slot)
		else
			print(" - Slot",slot,"...")
		end
	end
end

function SaveGarage()
	print("----------------------------------")
	print("Saving garage locally ...")
	for slot=1,10 do
		if _GarageSlots[slot] then
			print("   Slot",slot,"...")			
			SaveVehicleFile(slot)
		else
			print(" - Slot",slot,"...")			
			RemoveVehicleFile(slot)
		end
	end
end

function Wait(n)
	print("Starting to wait...")
	_Waiting = true
	n = n or 1000
	t = natives.GAMEPLAY.GET_GAME_TIMER() + n
	while natives.GAMEPLAY.GET_GAME_TIMER() < t do
		coroutine.yield()
	end
	_Waiting = false
	print("Finished waiting.")
end

function Teleport(entID, pos)
	natives.ENTITY.SET_ENTITY_COORDS(entID, pos.x, pos.y, pos.z, false, false, false, true)
	natives.ENTITY.SET_ENTITY_HEADING(entID, pos.h)
end

function MakeInvincible()
	natives.ENTITY.FREEZE_ENTITY_POSITION(entID, true)
	natives.ENTITY.SET_ENTITY_COLLISION(entID, false, true)
	natives.PED.SET_PED_CAN_BE_TARGETTED(playerID, false)
	natives.PLAYER.SET_PLAYER_INVINCIBLE(playerPlayerID, true)
end
	
function MakeVincible()
	natives.ENTITY.FREEZE_ENTITY_POSITION(entID, false)
	natives.ENTITY.SET_ENTITY_COLLISION(entID, true, true)
	natives.PED.SET_PED_CAN_BE_TARGETTED(playerID, true)
	natives.PLAYER.SET_PLAYER_INVINCIBLE(playerPlayerID, false)
end

function IsInVehicle()
	local InVehicle = natives.PED.IS_PED_IN_ANY_VEHICLE(playerID, false)
	if InVehicle then
		playerVehicle = natives.PED.GET_VEHICLE_PED_IS_IN(playerID, false)
	end
	return InVehicle
end

function FirstFreeSlot()
	for slot=1,10 do
		if not _GarageSlots[slot] then
			return slot
		end
	end
	return nil
end

function DrawGarage()
	print("Drawing garage ...")
	for slot=1,10 do
		if _GarageSlots[slot] then
			print("    Slot",slot,"...")
			pos = _GaragePos[slot]
			vehicle = _GarageSlots[slot]
			local times = 5
			if not natives.STREAMING.HAS_MODEL_LOADED(vehicle.hash) then
				while times>0 do
					natives.STREAMING.REQUEST_MODEL(vehicle.hash)
					coroutine.yield()
					times=times-1
				end
			end
			vehID = natives.VEHICLE.CREATE_VEHICLE(vehicle.hash, pos.x, pos.y, pos.z, pos.h, true, true)
			natives.VEHICLE.SET_VEHICLE_COLOURS(vehID, vehicle.pricolor or -1, vehicle.seccolor or -1)
			natives.VEHICLE.SET_VEHICLE_EXTRA_COLOURS(vehID, vehicle.prlcolor or -1, vehicle.whlcolor or -1)
			natives.VEHICLE.SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(vehID, vehicle.plttype or -1)
			if vehicle.plttext then
				natives.VEHICLE.SET_VEHICLE_NUMBER_PLATE_TEXT(vehID, vehicle.plttext)
			end
			natives.VEHICLE.SET_VEHICLE_WINDOW_TINT(vehID, vehicle.wndtint or -1)
			natives.VEHICLE.SET_VEHICLE_WHEEL_TYPE(vehID, vehicle.whltype or -1)
			natives.VEHICLE.SET_VEHICLE_MOD_KIT(vehID, 0)
			for mod=0,48 do
				vehicle[mod] = vehicle[mod] or -1
				if mod==18 or mod==20 or mod==21 or mod==22 then
					natives.VEHICLE.TOGGLE_VEHICLE_MOD(vehID, mod, vehicle[mod]==0)
				else
					natives.VEHICLE.SET_VEHICLE_MOD(vehID, mod, vehicle[mod], true)
				end
			end
			print("    Setting PV Slot to",slot-1,"...")
			if not natives.DECORATOR.DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3) then
				natives.DECORATOR.DECOR_REGISTER("PV_Slot", 3)
			end
			natives.DECORATOR.DECOR_SET_INT(vehID, "PV_Slot", slot-1)
--
			print("Setting as not needed ...")
			local c_vehicle_handle = CMemoryBlock(4)
			c_vehicle_handle:WriteDWORD32(0, vehID)
			natives.ENTITY.SET_VEHICLE_AS_NO_LONGER_NEEDED(c_vehicle_handle)
			c_vehicle_handle:Release()
--
			vehicle.ID = vehID
			pos = natives.ENTITY.GET_ENTITY_COORDS(vehID, false)
			_GaragePos[slot].z = pos.z
			_GarageSlots[slot] = vehicle
		end
	end
	print("Done.")
end

function ClearGarage()
	print("Cleaning up...")
	for slot=1,10 do
		print("    Slot",slot,"...")
		pos = _GaragePos[slot]
--		natives.GAMEPLAY.CLEAR_AREA(pos.x, pos.y, pos.z, 2, true, false, false, false)
		if _GarageSlots[slot] then
			vehicle = _GarageSlots[slot]
			if vehicle.ID then
				if natives.ENTITY.DOES_ENTITY_EXIST(vehicle.ID) then
					local c_entity_handle = CMemoryBlock(4)
					c_entity_handle:WriteDWORD32(0, vehicle.ID)
					natives.ENTITY.DELETE_ENTITY(c_entity_handle)
					c_entity_handle:Release()
				end
			end
		end
	end
	print("Done.")
end

function VehicleToArray(vehID)
	local vehicle = {}
	vehicle.ID = vehID																-- ID
	vehicle.hash = natives.ENTITY.GET_ENTITY_MODEL(vehID)							-- Hash
	local m_p = CMemoryBlock(4)
	local m_s = CMemoryBlock(4)
	natives.VEHICLE.GET_VEHICLE_COLOURS(vehID, m_p, m_s)							-- Colors
	vehicle.pricolor = m_p:ReadDWORD32(0)
	vehicle.seccolor = m_s:ReadDWORD32(0)
	m_p:Release()
	m_s:Release()
	local m_p = CMemoryBlock(4)
	local m_s = CMemoryBlock(4)
	natives.VEHICLE.GET_VEHICLE_EXTRA_COLOURS(vehID, m_p, m_s)						-- Extra Colors
	vehicle.prlcolor = m_p:ReadDWORD32(0)
	vehicle.whlcolor = m_s:ReadDWORD32(0)
	m_p:Release()
	m_s:Release()
	vehicle.plttype = natives.VEHICLE.GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(vehID)	-- Plate Type
	vehicle.plttext = natives.VEHICLE.GET_VEHICLE_NUMBER_PLATE_TEXT(vehID)			-- Plate Text
	vehicle.wndtint = natives.VEHICLE.GET_VEHICLE_WINDOW_TINT(vehID)				-- Window Tint
	vehicle.whltype = natives.VEHICLE.GET_VEHICLE_WHEEL_TYPE(vehID)					-- Wheel Type
	natives.VEHICLE.SET_VEHICLE_MOD_KIT(vehID, 0)									-- Mods
	for mod=0,48 do
		if mod==18 or mod==20 or mod==21 or mod==22 then
			vehicle[mod]=-1
			if natives.VEHICLE.IS_TOGGLE_MOD_ON(vehID, mod) then
				vehicle[mod]=0
			end
		else
			vehicle[mod]=natives.VEHICLE.GET_VEHICLE_MOD(vehID, mod)
		end
	end
	
	return vehicle
end

function EnterGarage()
	print("Entering Garage ...")
	FadeScreenOut()
	
	local InVehicle = false
	local FreeSlot = nil

	if IsInVehicle() then
		print("  In vehicle ...")
		InVehicle = true
		entID = playerVehicle
		natives.VEHICLE.SET_VEHICLE_FIXED(entID)
		natives.VEHICLE.SET_VEHICLE_DIRT_LEVEL(entID, 0)
		FreeSlot = FirstFreeSlot()
		if not FreeSlot then
			print("No free garage slots ...")
			entPos = _GarageOutSpawn
			Teleport(entID, entPos)
			Wait(_WaitTime)	
			FadeScreenIn()
			_EnteringGarage = false
			return
		else
			print("    Positioning vehicle on garage slot",FreeSlot,"...")
			entPos = _GaragePos[FreeSlot]
		end
	else
		print("  On foot ...")
		entID = playerID
		entPos = _GarageInSpawn
	end

	MakeInvincible()
--	FadePlayerOut(entID)
	ClearGarage()
	Teleport(entID, entPos)
	Wait(_WaitTime)
--	FadePlayerIn(entID)
	MakeVincible()
--	Wait(_WaitTime)
	DrawGarage()
	FadeScreenIn()
	
	if InVehicle then
		print("    Placing on ground properly.")
		natives.VEHICLE.SET_VEHICLE_ON_GROUND_PROPERLY(entID)
		print("    Saving vehicle in garage slot",FreeSlot,"...")
		_GarageSlots[FreeSlot] = VehicleToArray(entID)
		print("    Setting PV Slot to",FreeSlot-1,"...")
		if not natives.DECORATOR.DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3) then
			natives.DECORATOR.DECOR_REGISTER("PV_Slot", 3)
		end
		natives.DECORATOR.DECOR_SET_INT(entID, "PV_Slot", FreeSlot-1)
		print("    Saving vehicle locally ...")
		SaveVehicleFile(FreeSlot)
		pos = natives.ENTITY.GET_ENTITY_COORDS(entID, false)
		_GaragePos[FreeSlot].z = pos.z
		natives.AI.TASK_LEAVE_ANY_VEHICLE(playerID, 0, 0)
--
		local c_vehicle_handle = CMemoryBlock(4)
		c_vehicle_handle:WriteDWORD32(0, entID)
		natives.ENTITY.SET_VEHICLE_AS_NO_LONGER_NEEDED(c_vehicle_handle)
		c_vehicle_handle:Release()
--
	end

	_EnteringGarage = false
	_InsideGarage = true
end

function ShowDebugData()
	ui.Draw3DPoint(_GarageInDoor, .5)
	ui.Draw3DPoint(_GarageOutDoor, .5)
end

function ExitGarage()
	print("Exiting Garage ...")
	FadeScreenOut()

	if IsInVehicle() then
		print("  In vehicle ...")
		entID = playerVehicle
--		natives.VEHICLE.SET_VEHICLE_FIXED(playerVehicle)
		Slot = natives.DECORATOR.DECOR_GET_INT(entID, "PV_Slot") + 1
		natives.DECORATOR.DECOR_REMOVE(entID, "PV_Slot")
		print("    Cleaning garage slot",Slot,"...")
		_GarageSlots[Slot] = nil
	else
		print("  On foot ...")
		entID = playerID
	end

	entPos = _GarageOutSpawn

	SaveGarage()

	MakeInvincible()
	Teleport(entID, entPos)
	MakeVincible()
	Wait(_WaitTime)	
	FadeScreenIn()

	_ExitingGarage = false
	_InsideGarage = false
end

function FadeScreenOut(n)
	n = n or 1000
	natives.CAM.DO_SCREEN_FADE_OUT(n)
	while natives.CAM.IS_SCREEN_FADING_OUT() do
		coroutine.yield()
	end
end

function FadeScreenIn(n)
	n = n or 1000
	natives.CAM.DO_SCREEN_FADE_IN(n)
	while natives.CAM.IS_SCREEN_FADING_IN() do
		coroutine.yield()
	end
end

function FadePlayerOut(entID)
	natives.NETWORK.NETWORK_FADE_OUT_ENTITY(entID, true, false)
end

function FadePlayerIn(entID)
	natives.NETWORK.NETWORK_FADE_IN_ENTITY(entID, false)
end

function Distance(p1, p2)
	return natives.GAMEPLAY.GET_DISTANCE_BETWEEN_COORDS(p1.x, p1.y, p1.z, p2.x, p2.y, p2.z, false)
end

-- Load initial garage from files
LoadGarage()

-- Run
function MyGarage:Run()
	while self:IsRunning() do
		ShowDebugData()

		playerPlayerID = natives.PLAYER.GET_PLAYER_INDEX()
		playerID = natives.PLAYER.GET_PLAYER_PED(playerPlayerID)
		playerPos = natives.ENTITY.GET_ENTITY_COORDS(playerID, false)

		-- Are we in the Garage In area?
		if Distance(playerPos, _GarageInDoor) < _DoorRadius then
			if not _EnteringGarage then
				print("----------------------------------")
				print("Touched enter trigger ...")
				_EnteringGarage = true
				EnterGarage()
			end
		end
		
		-- Are we in the Garage Out area?
--		if Distance(playerPos, _GarageOutDoor) < _DoorRadius then
--			if not _ExitingGarage then
--				print("----------------------------------")
--				print("Touched exit trigger ...")
--				_ExitingGarage = true
--				ExitGarage()
--			end
--		end
		
		-- Are we leaving garage in a car?
		if IsInVehicle() and _InsideGarage then
			if natives.ENTITY.GET_ENTITY_SPEED(playerVehicle) > 1 then
				print("----------------------------------")
				print("Moving vehicle trigger ...")
				ExitGarage()
			end
		end
		
		-- Are we pressing the Garage key?
		if IsKeyDown(KEY_G) then
			if _InsideGarage then
				if not _ExitingGarage then
				print("----------------------------------")
					print("Touched exit key ...")
					_ExitingGarage = true
					ExitGarage()
				end
			else
				if not _EnteringGarage then
				print("----------------------------------")
					print("Touched enter key ...")
					_EnteringGarage = true
					EnterGarage()
				end
			end
		end		

		-- Wait
		self:Wait(5)
	end
end

-- OnError
function MyGarage:OnError()
	print("MyGarage Thread caused an error!")
	self:Reset()
end

-- Register
MyGarage:Register()