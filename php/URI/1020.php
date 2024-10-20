<?php

$days = readline("");

$years = intdiv($days, 365);
$days = $days-($years*365);

$months = intdiv($days, 30);
$days = $days - ($months*30);

echo $years ." ano(s)";
echo "\n";
echo $months ." mes(es)";
echo "\n";
echo $days ." dia(s)";
echo "\n";



?>