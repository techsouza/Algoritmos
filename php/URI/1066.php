<?php

$positivo = 0;
$negativo = 0;
$par = 0;
$impar = 0;
for ($i = 0; $i < 5; $i++) {
    $numero = trim(fgets(STDIN));


    if ($numero > 0) {
        $positivo++;
    }
    if ($numero < 0) {
        $negativo++;
    }
    if ($numero % 2 == 0) {
        $par++;
    }
    if ($numero % 2 != 0) {
        $impar++;
    }


}

echo $par." valor(es) par(es)\n";
echo $impar." valor(es) impar(es)\n";
echo $positivo." valor(es) positivo(s)\n";
echo $negativo." valor(es) negativo(s)\n";




?>