<?php

$linha = explode(' ', readline());
$x = $linha[0];
$y = $linha[1];

$n = 1;

for($i = 1; $i <= $y; $i++)
{
    if($n == $x)
    {
        echo($i . "\n");
        $n = 1;
    }
    else
    {
        echo($i . " ");
        $n++;
    }

}