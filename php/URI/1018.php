<?php

$notas = readline("");

echo $notas ."\n";

echo intdiv($notas, 100) ." nota(s) de R$ 100,00\n";
$aux = $notas%100;
echo intdiv($aux, 50) ." nota(s) de R$ 50,00\n";
$aux = $aux%50;
echo intdiv($aux, 20) ." nota(s) de R$ 20,00\n";
$aux = $aux%20;
echo intdiv($aux, 10) ." nota(s) de R$ 10,00\n";
$aux = $aux%10;
echo intdiv($aux, 5) ." nota(s) de R$ 5,00\n";
$aux = $aux%5;
echo intdiv($aux, 2) ." nota(s) de R$ 2,00\n";
$aux = $aux%2;
echo $aux ." nota(s) de R$ 1,00\n";
?>