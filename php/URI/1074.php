<?php

$caso = trim(fgets(STDIN));

for (; $caso >0; $caso--) {
    $num = trim(fgets(STDIN));
    if($num == 0)
        echo"NULL\n";
    if($num % 2 != 0 && $num < 0)
        echo"ODD NEGATIVE\n";
    if($num % 2 == 0 && $num < 0)
        echo"EVEN NEGATIVE\n";
    if($num % 2 != 0 && $num > 0)
        echo"ODD POSITIVE\n";
    if($num % 2 == 0 && $num > 0)
        echo"EVEN POSITIVE\n";

}

?>