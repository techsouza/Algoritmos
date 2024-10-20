<?php

$cliente = 0;
$alcool = 0;
$gasolina = 0; 
$diesel = 0;
         
while ($cliente != 4) {

    $cliente = trim(fgets(STDIN));
    switch ($cliente) {
        case 1:
            $alcool++;
            break;
        case 2:
            $gasolina++;
            break;
        case 3:
            $diesel++;
            break;
        case 4:
            $cliente = 4;
            break;
    }
}

echo "MUITO OBRIGADO\n";
echo "Alcool: " . $alcool . "\n";
echo "Gasolina: " . $gasolina . "\n";
echo "Diesel: " . $diesel . "\n";

?>