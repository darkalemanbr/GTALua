<?php
#
# This reads the natives.h and generates a translation table for the hashes found
#
	if(!isset($argv[1]))
		die("Usage: ".$argv[0]." <native.h file>\n");

	$filename=$argv[1];
	if(file_exists($filename))
	{
		echo("Generating trans.tab from $filename...");
		$filein=fopen($filename, "r");
		$fileout=fopen("trans.tab", "w");
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
			$hash=substr(explode("(", $buffer)[2], 0, 18);
			$orig=explode(" ", explode("// ", $buffer)[1])[0];
			fputs($fileout, "0x$orig -> $hash\n");
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