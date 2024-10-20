<?php

$linha = explode(' ', readline());

$delta = ($linha[1]*$linha[1]) - (4*$linha[0]*$linha[2]);

if($delta < 0 || $linha[0] == 0)
{
    echo "Impossivel calcular\n";
}
else
{
    $r1 = (-$linha[1]+sqrt($delta))/(2*$linha[0]);
    $r2 = (-$linha[1]-sqrt($delta))/(2*$linha[0]);
    echo "R1 = ".number_format($r1,5, ".","", ). "\n";
    echo "R2 = ".number_format($r2,5, ".","", ). "\n";
}

?>