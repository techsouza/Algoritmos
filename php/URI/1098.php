<?php
$i = 0;
$j = 1;
for ($caso = 0; $caso < 11; ++$caso)
{
    if (($i / 10.0) == 1 || ($i / 10.0) == 2 || ($i / 10.0) == 0)
    {
       print("I=".($i / 10). " J=" .(($i / 10) + $j)."\n");
       print("I=".($i / 10). " J=" . (($i / 10) + $j+1)."\n");
       print("I=".($i / 10). " J=" . (($i / 10) + $j+2)."\n");
    }
    else
    {
        print("I=".($i / 10.0). " J=" . (($i / 10.0) + $j)."\n");
        print("I=".($i / 10.0). " J=" . (($i / 10.0) + $j+1)."\n");
        print("I=".($i / 10.0). " J=" . (($i / 10.0) + $j+2)."\n");
    }
    $i += 2;
}