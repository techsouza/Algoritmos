<?php

$nota1;
$nota2;
$flag = 1;
$j = 0;

while ($flag == 1) {
    $nota1 = trim(fgets(STDIN));

    while ($nota1 > 10 || $nota1 < 0) {

        print("nota invalida\n");
        $nota1 = trim(fgets(STDIN));

    }

    $nota2 = trim(fgets(STDIN));
    while ($nota2 > 10 || $nota2 < 0) {

        print("nota invalida\n");
        $nota2 = trim(fgets(STDIN));

    }

    $media = ($nota1 + $nota2) / 2;
    echo "media = ". number_format($media,2,".", "", )."\n";

   echo "novo calculo (1-sim 2-nao)\n";
   $flag = trim(fgets(STDIN));

    while ($flag != 1 && $flag != 2) {
       echo"novo calculo (1-sim 2-nao)\n";
       $flag = trim(fgets(STDIN));

    }
}

?>