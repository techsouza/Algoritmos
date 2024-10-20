<?php

$linha = explode(' ', readline());

if($linha[0] == 0 && $linha[1] == 0)
   echo "Origem\n";

else if($linha[0] > 0 && $linha[1] > 0)
    echo "Q1\n";

else if($linha[0] < 0 && $linha[1] > 0)
    echo "Q2\n";

else if($linha[0] > 0 && $linha[1] < 0)
    echo "Q4\n";

else if($linha[0] < 0 && $linha[1] < 0)
    echo "Q3\n";

else if($linha[0] == 0 && $linha[1] > 0 || $linha[0] == 0 && $linha[1] < 0)
    echo "Eixo Y\n";

else if($linha[1] == 0 && $linha[0] > 0 || $linha[1] == 0 && $linha[0] < 0)
    echo "Eixo X\n";


?>