<?php
    $linha = explode(' ', readline());
    $x =$linha[0];
    $y = $linha[1];

while($x != $y){

    echo $x > $y ? "Decrescente\n" : "Crescente\n";

    $linha = explode(' ', readline());
    $x =$linha[0];
    $y = $linha[1];
}


?>