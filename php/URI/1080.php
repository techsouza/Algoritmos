<?php

$maior = 0;
$posicao = 1;
for ($i = 1; $i < 101; $i++) {
    
    $l = trim(fgets(STDIN));
    if($l > $maior)
    {
        $maior = $l;
        $posicao = $i;
    }


}

echo $maior;
echo "\n";
echo $posicao;
echo "\n";
?>