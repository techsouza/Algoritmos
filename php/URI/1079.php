<?php

$num = (int)readline();

for ($i = 0; $i < $num; $i++) {
    
    $l = explode(' ', readline());

    $media = ($l[0]*2 + $l[1]*3 + $l[2]*5)/10;

    printf("%.1f\n", $media);
}



?>