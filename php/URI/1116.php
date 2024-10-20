<?php
$caso = (int)readline();

for (; $caso > 0; $caso--) {
    $linha = explode(' ', readline());
    $a = $linha[0];
    $b = $linha[1];

    echo $b!=0 ? "".number_format($a/$b,1, ".","", ). "\n":"divisao impossivel\n";
}
?>