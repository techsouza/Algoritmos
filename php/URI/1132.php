<?php

$x = trim(fgets(STDIN));
$y = trim(fgets(STDIN));

$cont = 0;

if ($x > $y)
    {
        $aux = $x;
        $x = $y;
        $y = $aux;
    }

    while ($x <= $y)
    {
        if ($x % 13 != 0)
        {
            $cont = $cont + $x;
            $x++;
        }
        else
            $x++;
    }

    echo "$cont";

?>