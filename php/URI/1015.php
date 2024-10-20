<?php

$line1 = explode(' ', readline());
$line2 = explode(' ', readline());

$distancia = sqrt(pow(($line1[0]-$line2[0]),2)+pow(($line1[1]- $line2[1]),2));

echo "".number_format($distancia,4,".","")."\n";
?>