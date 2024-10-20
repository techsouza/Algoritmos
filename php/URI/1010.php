<?php

    $line1 = explode(' ', readline());
    $line2 = explode(' ', readline());

    $total = $line1[2]*$line1[1] + $line2[2]*$line2[1];

    echo "VALOR A PAGAR: R$ " . number_format($total,2, ".", "")."\n";
?>