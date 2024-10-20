<?php
while (true) {
    // Lê a entrada e separa os valores
    fscanf(STDIN, "%d %d %d %d", $h1, $m1, $h2, $m2);
    
    // Verifica se os valores são todos zero, caso seja, encerra o programa
    if ($h1 == 0 && $m1 == 0 && $h2 == 0 && $m2 == 0) {
        break;
    }

    // Converte as horas e minutos para minutos totais desde 00:00
    $inicio = $h1 * 60 + $m1;
    $fim = $h2 * 60 + $m2;

    // Se a hora final for menor que a inicial, quer dizer que o fim é no dia seguinte
    if ($fim <= $inicio) {
        $fim += 24 * 60; // Adiciona 24 horas em minutos
    }

    // Calcula a diferença entre o tempo de início e fim
    $resultado = $fim - $inicio;

    // Exibe o resultado
    echo $resultado . "\n";
}
?>
