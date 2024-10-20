<?php

$a = readline();

if ($a >= 0.00 && $a <= 25.00)
    echo "Intervalo [0,25]\n";
else if ($a > 25.00 && $a <= 50.00)
   echo "Intervalo (25,50]\n";
else if ($a > 50.00 && $a <= 75.00)
    echo "Intervalo (50,75]\n";
else if ($a > 75.00 && $a <= 100.00)
    echo "Intervalo (75,100]\n";
else
    echo "Fora de intervalo\n";



?>