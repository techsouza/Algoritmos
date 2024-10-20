<?php

$linha = explode(' ', readline());
$a = $linha[0];
$b = $linha[1];
$c = $linha[2];
$d = $linha[3];

if ($a + $b > $c && $a + $c > $b && $b + $c > $a)
    echo "S\n";
else if ($b + $c > $d && $b + $d > $c && $c + $d > $b)
    echo "S\n";
else if ($a + $c > $d && $a + $d > $c && $c + $d > $a)
    echo "S\n";
else if ($a + $b > $d && $b + $d > $a && $a + $d > $b)
    echo "S\n";
else
    echo "N\n";
