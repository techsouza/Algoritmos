<?php

$linha = explode(' ', readline());

$x = $linha[0];
$y = $linha[1];

if($x%$y == 0 || $y%$x == 0)
    echo "Sao Multiplos\n";
else
    echo "Nao sao Multiplos\n";


?>