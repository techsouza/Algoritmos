<?php

$linha = explode(' ', readline());

sort($linha);
$a = $linha[2];
$b = $linha[1];
$c = $linha[0];

if($a>=$b+$c )
    {
        echo "NAO FORMA TRIANGULO\n";
    }
else if ($a*$a == $b*$b+$c*$c)
    {
        echo "TRIANGULO RETANGULO\n";
    }
else if ($a*$a > $b*$b+$c*$c)
    {
        echo "TRIANGULO OBTUSANGULO\n";
    }
else if($a*$a < $b*$b+$c*$c)
    {
        echo "TRIANGULO ACUTANGULO\n";
    }
if ($a == $b && $a == $c)
    {
        echo "TRIANGULO EQUILATERO\n";
    }
if($a==$b && $a!=$c || $a==$c && $a!==$b || $b==$c && $b!=$a)
    {
       echo "TRIANGULO ISOSCELES\n";
    }


?>