<?php

$positivo = 0;
$soma=0;
for($i =0; $i < 6; $i++){
    $numero = trim(fgets(STDIN));

    if($numero > 0)
    {
        $positivo++;
        $soma+=$numero;
    }
  }


$soma = $soma/$positivo;
echo $positivo." valores positivos\n";
echo "".number_format($soma, 1, ".", "", )."\n";


?>