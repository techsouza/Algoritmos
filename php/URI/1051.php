<?php

$valor = trim(fgets(STDIN));
$ir=0;
if ($valor > 4500) {
    $ir += ($valor - 4500) * 0.28;
    $valor = 4500;
}
if ($valor > 3000) {
    $ir += ($valor - 3000) * 0.18;
    $valor = 3000;
}
if ($valor > 2000) {
    $ir += ($valor - 2000) * 0.08;
}
if ($ir === 0) {
   echo"Isento\n";
}
else

    echo"R$ ". number_format((double)$ir,2, ".", "")."\n";

?>