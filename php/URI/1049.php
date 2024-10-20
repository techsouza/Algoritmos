<?php

$a = trim(fgets(STDIN));
$b = trim(fgets(STDIN));
$c = trim(fgets(STDIN));

if(strcmp($a, "vertebrado")==0 && strcmp($b, "ave")==0 && strcmp($c, "carnivoro")==0)
{
    echo"aguia\n";
}
if(strcmp($a, "vertebrado")==0 && strcmp($b, "ave")==0 && strcmp($c, "onivoro")==0)
{
    echo"pomba\n";
}
if(strcmp($a, "vertebrado")==0 && strcmp($b, "mamifero")==0 && strcmp($c, "onivoro")==0)
{
    echo"homem\n";
}
if(strcmp($a, "vertebrado")==0 && strcmp($b, "mamifero")==0 && strcmp($c, "herbivoro")==0)
{
    echo"vaca\n";
}
if(strcmp($a, "invertebrado")==0 && strcmp($b, "inseto")==0 && strcmp($c, "hematofago")==0)
{
    echo"pulga\n";
}
if(strcmp($a, "invertebrado")==0 && strcmp($b, "inseto")==0 && strcmp($c, "herbivoro")==0)
{
    echo"lagarta\n";
}
if(strcmp($a, "invertebrado")==0 && strcmp($b, "anelideo")==0 && strcmp($c, "hematofago")==0)
{
    echo"sanguessuga\n";
}
if(strcmp($a, "invertebrado")==0 && strcmp($b, "anelideo")==0 && strcmp($c, "onivoro")==0)
{
    echo"minhoca\n";
}


?>