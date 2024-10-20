<?php

$linha = explode(' ', readline());


$a = $linha[0];
$b = $linha[1];


if($a == $b)
    {
       echo "O JOGO DUROU 24 HORA(S)\n";
    }
else if ($a > $b)
    {
        $total = $a - 24;
        $total = abs($total) + $b;
        echo "O JOGO DUROU ".$total." HORA(S)\n";
    }
else
    {
        
        
        $total = $b - $a;
        echo "O JOGO DUROU ".$total." HORA(S)\n";
    }


?>