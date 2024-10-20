<?php

$linha = explode(' ', readline());


$hora_inicial = $linha[0];
$minuto_inicial = $linha[1];
$hora_final = $linha[2];
$minuto_final = $linha[3];

$inicio_total = $hora_inicial * 60 + $minuto_inicial;
$final_total = $hora_final * 60 + $minuto_final;

if($inicio_total == $final_total)
{
    echo"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
}
else if($inicio_total > $final_total)
{
    $total = $inicio_total - 1440;
    $total = abs($total) + $final_total;
    $hora_total = intdiv($total, 60);
    $minuto_total = $total % 60;
    echo "O JOGO DUROU ".$hora_total." HORA(S) E ".$minuto_total." MINUTO(S)\n";
}
else
{
    $total = $final_total - $inicio_total;
    $hora_total = intdiv($total, 60);
    $minuto_total = $total % 60;
    echo "O JOGO DUROU ".$hora_total." HORA(S) E ".$minuto_total." MINUTO(S)\n";
}


?>