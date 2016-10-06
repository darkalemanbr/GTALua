<?php
#
# This reads the natives.h from native.db and translates the hashes to 1.31
#
	if(!isset($argv[1]))
		die("Usage: ".$argv[0]." <native.h file>\n");
		
	$filename=$argv[1];
	if(file_exists($filename))
	{
		echo("Reading translation table...");
		$trans = array();
		$table=fopen("trans.tab", "r");
		while(($buffer = fgets($table, 4096)) !== false)
		{
			if(substr($buffer, 0, 2)=="//")
				continue;
			$array=explode(" ", trim($buffer));
			$trans[$array[0]]=$array[2];
		}
		fclose($table);
		echo("ok.\n");
		echo("Generating natives_out.h from $filename...");
		$filein=fopen($filename, "r");
		$fileout=fopen("natives_out.h", "w");
		while(($buffer = fgets($filein, 4096)) !== false)
		{
			$line=trim($buffer);
			if(substr($line, 0, 6)!="static")
			{
				fputs($fileout, $buffer);
				continue;
			}
			$hash=substr(explode("(", $line)[2], 0, 18);
			if(!isset($trans[$hash]))
			{
				echo("Can't translate...\n$buffer");
				fputs($fileout, "//".$buffer);
			} else {
				$array=explode("//", $buffer);
				$buffer=str_replace($hash, $trans[$hash], $array[0])."//".$array[1];
				fputs($fileout, $buffer);
			}
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