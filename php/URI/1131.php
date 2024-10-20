<?php

$grenais = 0;
$inter = 0;
$gremio = 0;
$empates = 0;


while (True) {
    $linha = explode(' ', readline());
    $i = $linha[0];
    $g = $linha[1];
    $grenais += 1;
    if ($i > $g)
        $inter += 1;
    else if ($i < $g)
        $gremio += 1;
    else
        $empates += 1;
    echo "Novo grenal (1-sim 2-nao)\n";
    $linha = explode(' ', readline());
    $num = $linha[0];
    if ($num == 2)
        break;
}

echo $grenais . " grenais\n";
echo "Inter:" . $inter . "\n";
echo "Gremio:" . $gremio . "\n";
echo "Empates:" . $empates . "\n";

if ($inter > $gremio)
    echo "Inter venceu mais\n";
else if ($inter < $gremio)
    echo "Gremio venceu mais\n";
else
    echo "Nao houve vencedor\n";
