<?php

$caso = trim(fgets(STDIN));
$dentro = 0;
$fora = 0;
$num = 0;

for (; $caso > 0; $caso--) {
    $num = trim(fgets(STDIN));

    if ($num >= 10 && $num <= 20)
        $dentro += 1;
    else
        $fora += 1;
}


echo $dentro." in\n";
echo $fora." out\n";

?>