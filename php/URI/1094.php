<?php
(int)$c = 0;
(int)$r = 0;
(int)$s = 0;

$caso = (int)readline();
for (; $caso > 0; $caso--) {
    $linha = explode(' ', readline());

    if ($linha[1] == "C") {
        $c = $c + (int)$linha[0];
    }
    
    if ($linha[1] == "R") {
        $r = $r + (int)$linha[0];
    }

    if ($linha[1] == "S") {
        $s = $s + (int)$linha[0];
    }
}


$quant = $c + $r + $s;

echo "Total: " . $quant . " cobaias\n";
echo "Total de coelhos: " . $c . "\n";
echo "Total de ratos: " . $r . "\n";
echo "Total de sapos: " . $s . "\n";

$q_c = ($c * 100) / $quant;
$q_r = ($r * 100) / $quant;
$q_s = ($s * 100) / $quant;

echo "Percentual de coelhos: " . number_format($q_c, 2, ".", "") . " %\n";
echo "Percentual de ratos: " . number_format($q_r, 2, ".", "") . " %\n";
echo "Percentual de sapos: " . number_format($q_s, 2, ".", "") . " %\n";
?>