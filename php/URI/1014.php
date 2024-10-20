<?php

$km = trim(fgets(STDIN));
$consumo = trim(fgets(STDIN));

echo number_format(($km/$consumo), 3, '.', '')." km/l\n";

?>