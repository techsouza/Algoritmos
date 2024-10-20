<?php

$soma = 0;
$j = 0;
$aux;

$linha = explode(' ', readline());
$a = $linha[0];
$b = $linha[1];


while ($a > 0 && $b > 0) {
    if ($a > $b) {
        $aux = $b;
        $b = $a;
        $a = $aux;
    }

    for ($i = $a; $i <= $b; $i++) {
        $soma = $soma + $i;
        echo $i." ";
    }


    echo "Sum=".$soma."\n";
    $soma = 0;
    $j++;
    $linha = explode(' ', readline());
    $a = $linha[0];
    $b = $linha[1];

}


?>