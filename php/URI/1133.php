<?php

$x = trim(fgets(STDIN));
$y = trim(fgets(STDIN));

if ($y < $x){
    $aux = $y;
    $y = $x;
    $x = $aux;
}

$x = $x + 1;
while ($x < $y){
    if ($x % 5 == 2 || $x % 5 == 3)
    echo "$x\n";
    $x = $x + 1;

}
?>