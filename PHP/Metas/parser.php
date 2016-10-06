<?php

$vehicles = array();
$classes = array();

// Binary safe 32 bits shift right
function shiftr($val, $n, $bin=false)
{
	$val=substr(str_pad(decbin($val), 32, "0", STR_PAD_LEFT), 0, 32-$n);
	$val=str_pad($val, 32, "0", STR_PAD_LEFT);
	if(! $bin)
		$val=(int)bindec($val);
	return($val);
}

// Binary safe 32 bits shift left
function shiftl($val, $n, $bin=false)
{
	$val=substr(str_pad(decbin($val), 32, "0", STR_PAD_LEFT), $n, 32);
	$val=str_pad($val, 32, "0", STR_PAD_RIGHT);
	if(! $bin)
		$val=(int)bindec($val);
	return($val);
}

// Binary safe 32 bits JOAAT
function jenkins_hash($key) {
    $len = strlen($key);
	$hash = 0;
    for($i = 0; $i < $len; ++$i) {
        $hash += ord(strtolower($key[$i]));
        $hash += shiftl($hash, 10);
        $hash ^= shiftr($hash, 6);
    }
    $hash += shiftl($hash, 3);
    $hash ^= shiftr($hash, 11);
    $hash += shiftl($hash, 15);
	return($hash);
}

function getClass($className)
{
	switch ($className)
	{
		case "VC_BOAT":
			$result = "Boats";
			break;
		case "VC_COMMERCIAL":
			$result = "Commercial";
			break;
		case "VC_COMPACT":
			$result = "Compacts";
			break;
		case "VC_COUPE":
			$result = "Coupes";
			break;
		case "VC_CYCLE":
			$result = "Bicycles";
			break;
		case "VC_EMERGENCY":
			$result = "Emergency";
			break;
		case "VC_HELICOPTER":
			$result = "Helicopters";
			break;
		case "VC_INDUSTRIAL":
			$result = "Industrial";
			break;
		case "VC_MILITARY":
			$result = "Military";
			break;
		case "VC_MOTORCYCLE":
			$result = "Motorcycles";
			break;
		case "VC_MUSCLE":
			$result = "Muscle";
			break;
		case "VC_OFF_ROAD":
			$result = "Off-Road";
			break;
		case "VC_PLANE":
			$result = "Airplanes";
			break;
		case "VC_RAIL":
			$result = "Trains";
			break;
		case "VC_SEDAN":
			$result = "Sedans";
			break;
		case "VC_SERVICE":
			$result = "Service";
			break;
		case "VC_SPORT":
			$result = "Sports";
			break;
		case "VC_SPORT_CLASSIC":
			$result = "Sports Classics";
			break;
		case "VC_SUPER":
			$result = "Super";
			break;
		case "VC_SUV":
			$result = "SUVs";
			break;
		case "VC_UTILITY":
			$result = "Utility";
			break;
		case "VC_VAN":
			$result = "Vans/Pickups";
			break;
		default:
			$result = $className;
	}
	return($result);
}


foreach (glob("*.meta") as $file) {
	$array=simplexml_load_file($file);
	$items=$array->InitDatas->Item;
	foreach($items as $key => $value)
	{
		$modelName=strtoupper($value->modelName);
		$gameName=$value->gameName;
		$vehicleMakeName=$value->vehicleMakeName;
		$vehicleClass=getClass(strtoupper($value->vehicleClass));
		$classes[$vehicleClass]=1;
		$hash=sprintf("%d", jenkins_hash($modelName));
		$vehicles[$modelName]="$hash,\"$vehicleClass\",\"$vehicleMakeName\"";
	}
}

ksort($vehicles);

foreach($vehicles as $key => $value)
{
	echo("VehiclesAddToTable(\"$key\",$value)\n");
}

?>