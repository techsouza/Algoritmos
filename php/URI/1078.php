<?php

$num = trim(fgets(STDIN));

for ($i = 1; $i <= 10; $i++) {
    
    echo $i." x ".$num." = ".$i*$num."\n";
}


?>