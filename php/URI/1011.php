<?php

$raio = trim(fgets(STDIN));

echo "VOLUME = " .number_format((4/3) *3.14159 * pow($raio,3),3, ".", "" )."\n";


?>