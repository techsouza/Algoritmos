<?php


$mes = trim(fgets(STDIN));

$meses = array(
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
);

echo $meses[$mes-1]."\n";


?>

