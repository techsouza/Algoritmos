<?php

   $a = explode(' ', readline());
   

    if($a[0]==$a[1] || $a[0]==$a[2] || $a[1]==$a[2] || $a[0]+$a[1]==$a[2] || $a[0]+$a[2]==$a[1] || $a[2]+$a[1]==$a[0])
        echo "S\n";
    else
        echo "N\n";

?>