<?php
#
# This generates a IDA script to automatically rename IDA subroutines (Addresses)
#
	if(!isset($argv[1]))
		die("Usage: ".$argv[0]." <natives.h file> <addr translation table>\n");

	if(!isset($argv[2]))
		die("Usage: ".$argv[0]." <natives.h file> <addr translation table>\n");

	$NativeToName=array();
	$count=0;
#	load name translation table
	$filename=$argv[1];
	if(file_exists($filename))
	{
		$file1=fopen($filename, "r");
		while(($buffer = fgets($file1, 4096)) !== false)
		{
			$buffer=trim($buffer);
			if(explode(" ", $buffer)[0] != "static")
				continue;
			$name=explode(" ", explode("(", $buffer)[0])[2];
			$native=explode(",", explode("(", $buffer)[2])[0];
			$native=explode(")", $native)[0];
			$native=explode("x", $native)[1];
			if(strlen($native)==15)
				$native="0".$native;
			$NativeToName[$native]=$name;
			$count++;
		}
	} else {
		die("$filename does not exist.\n");
	}
	fclose($file1);
//	print("Found $count native names.\n");
#
	$AddrToName=array();
	$count=0;
	$found=0;
#	load addr translation table
	$filename=$argv[2];
	if(file_exists($filename))
	{
		$file1=fopen($filename, "r");
		while(($buffer = fgets($file1, 4096)) !== false)
		{
			$buffer=trim($buffer);
			if(substr($buffer, 0, 2) != "0x")
				continue;
			$native=explode("x", explode(" ", $buffer)[0])[1];
			$addr=explode(" ", $buffer)[2];
			if(isset($NativeToName[$native]))
			{
				$native=$NativeToName[$native];
				$found++;
			} else {
				$native="_0x$native";
			}
			print("MakeName($addr, \"$native\");\n");
			$count++;
		}
	} else {
		die("$filename does not exist.\n");
	}
	fclose($file1);
//	print("Found $count native addresses.\n");
//	print("$found have been renamed.\n");
?>