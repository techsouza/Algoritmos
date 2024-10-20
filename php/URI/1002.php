<?php


$raio = trim(fgets(STDIN));
(double)$area = (double)pow($raio, 2) * (double)3.14159;
echo "A=". number_format((double)$area,4, ".", "")."\n";


?>