<?php

    $x = 0;

while($x != 2002){

    $linha = explode(' ', readline());
    $x =$linha[0];

    echo $x == 2002 ? "Acesso Permitido\n" : "Senha Invalida\n";


}


?>