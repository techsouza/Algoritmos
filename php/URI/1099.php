<?php


$j = 0;
$caso = (int)readline();

for (; $j < $caso; $j++) {
    $sum = 0;
    $linha = explode(' ', readline());
    $x =$linha[0];
    $y = $linha[1];

    if ($x > $y) {
        $aux = $y;
        $y =$x;
        $x = $aux;
    }
    $i = $x + 1;
    for (; $i < $y; $i++) {
        if ($i % 2 == 1 || $i % 2 == -1)
        $sum += $i;
    }

   echo $sum."\n";

}


?>