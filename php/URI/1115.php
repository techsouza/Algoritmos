<?php

$linha = explode(' ', readline());
$x = $linha[0];
$y = $linha[1];

while ($x != 0 && $y != 0) {

    if ($x > 0 && $y > 0) {
        echo "primeiro\n";
    } else if ($x < 0 && $y > 0) {
        echo "segundo\n";
    } else if ($x < 0 && $y < 0) {
        echo "terceiro\n";
    } else {
        echo "quarto\n";
    }

    $linha = explode(' ', readline());
    $x = $linha[0];
    $y = $linha[1];
}
