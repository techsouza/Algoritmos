<?php

$linhas = explode(' ', readline());


if(($linhas[0]%2===0) && ($linhas[1]>$linhas[2]) && ($linhas[2]+$linhas[3] > $linhas[0]+$linhas[1]) && ($linhas[3]>$linhas[0]) && ($linhas[2] > 0) && ($linhas[3] > 0)){
    echo "Valores aceitos\n";
}
else
    echo "Valores nao aceitos\n";


?>