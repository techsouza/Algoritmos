<?php

$nome = trim(fgets(STDIN));
$salario = trim(fgets(STDIN));
$vendas = trim(fgets(STDIN));

echo "TOTAL = R$ " .number_format($salario + ($vendas*0.15),2,".",""). "\n";

?>