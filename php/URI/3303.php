<?php

$palavra = trim(fgets(STDIN));

$tamanho = strlen($palavra);

if($tamanho >= 10)
    echo "palavrao\n";
else
    echo "palavrinha\n";

