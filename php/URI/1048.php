<?php

$salario = trim(fgets(STDIN));
$reajuste = 0;
$percentual = 0;

if($salario >= 0 and $salario <= 400.00)
    {
        $reajuste = $salario * 0.15;
        $salario = $salario + $reajuste;
        $percentual = 15;
    }
else if ($salario >= 400.01 and $salario <= 800.00)
    {
        $reajuste = $salario * 0.12;
        $salario = $salario + $reajuste;
        $percentual = 12;
    }
else if ($salario >= 800.01 and $salario <= 1200.00)
    {
        $reajuste = $salario * 0.10;
        $salario = $salario + $reajuste; 
        $percentual = 10;
    }
else if ($salario >= 1200.01 and $salario <= 2000.00)
    {
        $reajuste = $salario * 0.07;
        $salario = $salario + $reajuste;
        $percentual = 7;
    }
else if ($salario > 2000.00)
    {
        $reajuste = $salario * 0.04;
        $salario = $salario + $reajuste;
        $percentual = 4;
    }

    echo "Novo salario: ".number_format($salario,2,".", "", )."\n";
    echo "Reajuste ganho: ".number_format($reajuste,2,".", "", )."\n";
    echo "Em percentual: ".$percentual." %\n";

?>