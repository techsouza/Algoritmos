<?php

$hora = trim(fgets(STDIN));
$km = trim(fgets(STDIN));

echo number_format((($hora*$km)/12), 3, '.', '')."\n";

?>