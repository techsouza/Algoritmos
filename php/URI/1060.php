<?php

$positivo = 0;
for($i =0; $i < 6; $i++){
    $numero = trim(fgets(STDIN));

    if($numero > 0)
        $positivo++;
  }

echo $positivo." valores positivos";


?>