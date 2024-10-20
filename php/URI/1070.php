<?php

$num = trim(fgets(STDIN));

for ($i = 0; $i < 12; $i++) {
    if ($num % 2 != 0)
       echo $num."\n";

    $num++;
}

?>