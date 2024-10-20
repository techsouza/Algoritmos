<?php

$line = explode(' ', readline());

echo "TRIANGULO: " .number_format(($line[0]*$line[2])/2, 3, ".", "")."\n";
echo "CIRCULO: " .number_format((3.14159*($line[2]*$line[2])), 3, ".", "")."\n";
echo "TRAPEZIO: " .number_format((($line[0]+$line[1])*$line[2]/2), 3, ".", "")."\n";
echo "QUADRADO: " .number_format(($line[1]*$line[1]), 3, ".", "")."\n";
echo "RETANGULO: " .number_format(($line[0]*$line[1]), 3, ".", "")."\n";


?>