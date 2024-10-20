<?php

$x = trim(fgets(STDIN));

while ($x != 0) {
    for ($i = 1; $i <= $x; $i++) {
        if ($i == $x) {
            echo ($i . "\n");
        } else {
            echo ($i . " ");
        }
    }
    $x = trim(fgets(STDIN));

}
