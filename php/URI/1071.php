<?php

$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$soma = 0;
$i =0;

if ($a > $b) {
    $aux = $a;
    $a = $b;
    $b = $aux;

}

for ($i = $a + 1; $i < $b; $i++) {

    if ($i % 2 == 1 || $i % 2 == -1) {
        $soma += + $i;
    }


}
echo $soma."\n";


?>