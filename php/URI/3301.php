<?php

$linha = explode(' ', readline());


$h = $linha[0];
$z = $linha[1];
$l = $linha[2];


if (($z > $l && $z < $h) || ($z < $l && $z > $h))
    print("zezinho\n");
else if ($l > $z && $l < $h || $l < $z && $l > $h)
    print("luisinho\n");
else
    print("huguinho\n");
