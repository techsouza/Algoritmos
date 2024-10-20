<?php
$caso = trim(fgets(STDIN));

for($i=0; $i < $caso; $i++)
{
    $resposta = trim(fgets(STDIN));
    printf("resposta %d: %d\n", $i+1, $resposta);
}

?>