<?php
$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));
(double)$media = (($a * 2) + ($b * 3) + ($c * 5))/10;
echo "MEDIA = " . number_format($media,1, ".", "")."\n";
?>