<?php

    $money = readline("");

    $inteiro = $money;
    $money = 100*$money;
    $aux1 = $money;

    echo "NOTAS\n";
    echo intdiv($inteiro, 100). " nota(s) de R$ 100.00\n";
    $aux = $inteiro%100;
    echo intdiv($aux, 50). " nota(s) de R$ 50.00\n";
    $aux = $aux%50;
    echo intdiv($aux, 20). " nota(s) de R$ 20.00\n";
    $aux = $aux%20;
    echo intdiv($aux, 10). " nota(s) de R$ 10.00\n";
    $aux = $aux%10;
    echo intdiv($aux, 5). " nota(s) de R$ 5.00\n";
    $aux = $aux%5;
    echo intdiv($aux, 2). " nota(s) de R$ 2.00\n";
    $aux = $aux%2;
    
    echo "MOEDAS\n";
    echo $aux. " moeda(s) de R$ 1.00\n";
    $aux1=$aux1%100;
    echo intdiv($aux1, 50). " moeda(s) de R$ 0.50\n";
    $aux1 = $aux1%50;
    echo intdiv($aux1, 25). " moeda(s) de R$ 0.25\n";
    $aux1 = $aux1%25;
    echo intdiv($aux1, 10). " moeda(s) de R$ 0.10\n";
    $aux1 = $aux1%10;
    echo intdiv($aux1, 5). " moeda(s) de R$ 0.05\n";
    $aux1 = $aux1%05;
    echo $aux1. " moeda(s) de R$ 0.01\n";





?>