<?php

$linha = explode(' ', readline());

$x = $linha[0];
$y = $linha[1];
$z = $linha[2];

if($x+$y > $z && $x+$z > $y && $z+$y > $x)
{
    echo "Perimetro = ".number_format(($x+$y+$z), 1, ".", "", ). "\n";
}

else
{
    echo "Area = ".number_format((($x+$y)*$z/2), 1, ".", "", ). "\n";
}


?>