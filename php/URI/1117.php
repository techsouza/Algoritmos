<?php
$a;
$cont = 0;
$media = 0;
$j=0;

while ($cont < 2) {
    $a = trim(fgets(STDIN));
    if ($a >= 0.0 && $a <= 10.0) {
        $media = $media + $a;
        $cont++;
    } else print("nota invalida\n");

}
$media = $media / 2;
echo "media = " .number_format($media,2,".", "", )."\n";

?>