<?php

$tab = trim(fgets(STDIN));

if ($tab % 2 == 0) {
    $tab = $tab * $tab;
    echo ($tab / 2 . " casas brancas e " . $tab / 2 . " casas pretas\n");
} else {
    $tab = $tab * $tab;
    $tab = $tab / 2;
    echo ((int)$tab + 1 . " casas brancas e " . (int)$tab . " casas pretas\n");
}
