<?php

$linha = explode(' ', readline());


$media = (($linha[0]*2)+($linha[1]*3)+($linha[2]*4)+($linha[3]*1))/10.0;
$media = floor($media *100)/100;

echo "Media: ".number_format($media,1,".", "", )."\n";

if($media >= 7.0)
{
    echo "Aluno aprovado.\n";
}

else if($media >=5 && $media <=6.9)
{
    echo "Aluno em exame.\n";

    $exame = trim(fgets(STDIN));

    $media_final = ($media+$exame)/2;

    echo "Nota do exame: ".number_format($exame,1,".", "", )."\n"; 
    
    if($media_final >= 5)
    {
        echo "Aluno aprovado.\n";
        echo "Media final: ".number_format($media_final,1,".", "", )."\n";
    }
    else
    {
        echo "Aluno reprovado.\n";
        echo "Media final: ".number_format($media_final,1,".", "", )."\n";
    }
}

else if($media < 5)
{
    echo "Aluno reprovado.\n";
}




?>