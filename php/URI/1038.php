<?php

$vetor = [4.00, 4.50, 5.00, 2.00, 1.50];
$linha = explode(' ', readline());

$total = $vetor[$linha[0]-1] * $linha[1];

echo "Total: R$ ". number_format($total, 2, ".", "", )."\n";

?>