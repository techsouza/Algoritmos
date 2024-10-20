<?php

$linha = explode(' ', readline());

$linha[0] = ((100 + $linha[0]) * ($linha[1] / 100 + 1)) - 100;

echo number_format($linha[0],6,".", "", )."\n";

?>