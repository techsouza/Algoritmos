<?php

$seconds = readline("");

$hours = intdiv($seconds, 3600);
$seconds = $seconds-($hours*3600);

$minutes = intdiv($seconds, 60);
$seconds = $seconds - ($minutes*60);

echo $hours .":". $minutes .":". $seconds;
echo "\n"



?>