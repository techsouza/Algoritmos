<?php

$numero = 0;
$pot = 0; 
$n = 2;
$numero = trim(fgets(STDIN));

while ($numero > 1)
{
    $pot = $n * $n;
    // printf("%d^2 = %d\n", n, pot);
    //cout << n << "^2 = " << pot << "\n";
    echo $n."^2 = ".$pot."\n";
    $n = $n + 2;
    $numero = $numero - 2;
}


?>