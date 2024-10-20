<?php

$n = trim(fgets(STDIN));

$cont = 0;

$a = 1;
$b = 2;
$c = 3;

while($cont < $n)
{
    echo $a ." ". $b ." ". $c . " PUM\n";
    $c+=2;
    $a = $c;
    $b = $c;

    $b+=1;
    $c+=2;
    $cont+=1;
}


?>