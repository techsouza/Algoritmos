<?php

$num = trim(fgets(STDIN));

for ($i = 0; $i < 10000; $i++) {
    if ($i % $num == 2)
       echo $i."\n";

   
}


?>