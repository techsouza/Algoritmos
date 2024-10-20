<?php

$par=0;
for($i =0; $i < 5; $i++){
    $numero = trim(fgets(STDIN));


    if($numero%2==0)
        $par+=1;
}  

echo $par." valores pares";




?>