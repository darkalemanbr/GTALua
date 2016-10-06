<?php
#
# This reads the enums.h and generates an enums.lua file, to be used by GTALua.
#
	if(!isset($argv[1]))
		die("Usage: ".$argv[0]." <enums.h file>\n");

	$filename=$argv[1];
	if(file_exists($filename))
	{
		echo("Generating enums.lua from $filename...");
		$filein=fopen($filename, "r");
		$fileout=fopen("enums.lua", "w");
		$comment=false;
		$enumcount=0;
		while(($buffer = fgets($filein, 4096)) !== false)
		{
			$buffer=trim($buffer);
// ---------------------------------------- Deal with empty lines
			if($buffer=="")
				continue;
// ---------------------------------------- Deal with comment blocks
			if(substr($buffer, 0, 2)=="*/")
			{
				$comment=false;
				continue;
			}
			if(substr($buffer, 0, 2)=="/*")
			{
				$comment=true;
				continue;
			}
			if($comment)
				continue;
// ---------------------------------------- Deal with inline statements
			if(substr($buffer, 0, 1)=="#")
				continue;
// ---------------------------------------- Deal with enum statements
			if(substr($buffer, 0, 4)=="enum")
			{
				fputs($fileout, "-- $buffer\n");
				$enumcount=0;
				continue;
			}
// ---------------------------------------- Deal with { and }
			if(substr($buffer, 0, 1)=="{")
				continue;
			if(substr($buffer, 0, 1)=="}")
			{
				fputs($fileout, "\n");
				continue;
			}
// --------------------------------------- Deal with command lines
			$buffer=trim(explode("/", $buffer)[0]);	// remove extra comments
			$buffer=explode(",", $buffer)[0];		// remove ending comma

			$array = explode("=", $buffer);
			$name = trim($array[0]);
			$value = "";
			if(isset($array[1]))
				$value = $array[1];

			if($value=="")
			{
				$value=$enumcount;
				$enumcount++;
			} else {
				$enumcount=$value+1;
			}

			fputs($fileout, "$name = $value\n");
		}
		fclose($fileout);
		fclose($filein);
		echo("done.\n");
	}
	else
	{
		die("File ".$argv[1]." not found.\n");
	}
?>