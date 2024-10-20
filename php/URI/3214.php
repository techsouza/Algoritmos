<?php

$linha = explode(' ', readline());


$e = $linha[0];
$f = $linha[1];
$c = $linha[2];
$total = $e+$f;
$garrafas=0;
while($c<=$total)
{
    $total = $total - $c;
    $total++;
    $garrafas++;

}

printf($garrafas."\n");