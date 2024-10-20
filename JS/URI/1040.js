var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line = lines.shift().split(" ");
var nota1 = parseFloat(line[0]);
var nota2 = parseFloat(line[1]);
var nota3 = parseFloat(line[2]);
var nota4 = parseFloat(line[3]);

var media = ((nota1*2)+(nota2*3)+(nota3*4)+(nota4))/10;

if(media >= 7.0)
{
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno aprovado.");
}

else if(media >=5.0 && media <= 6.9)
{
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno em exame.");

    var exame = parseFloat(lines);

    var media_final = (media + exame)/2;

    if(media_final >= 5.0)
    {
        console.log("Nota do exame: "+ exame.toFixed(1));
        console.log("Aluno aprovado.");
        console.log("Media final: "+media_final.toFixed(1));
    }
    else
    {
        console.log("Nota do exame: "+ exame.toFixed(1));
        console.log("Aluno reprovado.");
        console.log("Media final: "+media_final.toFixed(1));
    }

}
else if(media < 5)
{
    console.log("Media: " + media.toFixed(1));
    console.log("Aluno reprovado.");

}