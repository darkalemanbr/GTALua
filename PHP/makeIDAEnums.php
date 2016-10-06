<?php
#
# This reads the natives.h and generates an enums.h file, which can be parsed by IDA Pro to assist
# on decompiling GTA V related applications.
#
	if(!isset($argv[1]))
		die("Usage: ".$argv[0]." <native.h file>\n");

	$filename=$argv[1];
	if(file_exists($filename))
	{
		echo("Generating enums.h from $filename...");
		$filein=fopen($filename, "r");
		$fileout=fopen("enums.h", "w");
		fputs($fileout, "enum natives\n");
		fputs($fileout, "{\n");
		while(($buffer = fgets($filein, 4096)) !== false)
		{
			$buffer=trim($buffer);
			if(substr($buffer, 0, 9)=="namespace")
			{
				fputs($fileout, "// $buffer\n");
				continue;
			}
			if(substr($buffer, 0, 6)!="static")
				continue;
			$name=explode("(", explode(" ", $buffer)[2])[0];
			$hash=substr(explode("(", $buffer)[2], 0, 18);
			fputs($fileout, "\t$name = $hash,\n");
		}
		fputs($fileout, "};\n");
		fclose($fileout);
		fclose($filein);
		echo("done.\n");
	}
	else
	{
		die("File ".$argv[1]." not found.\n");
	}
?>