<?php

$jon = trim(fgets(STDIN));
$medico = trim(fgets(STDIN));

if(strcasecmp($jon, $medico) <= 0)
    echo "go\n";

else
    echo "no\n";

?>