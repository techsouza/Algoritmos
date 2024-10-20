var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line = lines.shift().split(" ");

var hora_inicial = parseInt(line[0]);
var minuto_inicial = parseInt(line[1]);
var hora_final = parseInt(line[2]);
var minuto_final = parseInt(line[3]);


var inicio_total = hora_inicial * 60 + minuto_inicial;
var final_total = hora_final * 60 + minuto_final;

if(inicio_total == final_total)
{
    console.log("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
}

else if(inicio_total > final_total)
{
    var total = inicio_total - 1440;
    var total = Math.abs(total) + final_total;
    let hora_total = total / 60;
    let minuto_total = total % 60;
    console.log("O JOGO DUROU "+parseInt(hora_total)+" HORA(S) E "+parseInt(minuto_total)+" MINUTO(S)");
}

else
{
    total = final_total - inicio_total;
    hora_total = total / 60;
    minuto_total = total % 60;
    console.log("O JOGO DUROU "+parseInt(hora_total)+" HORA(S) E "+parseInt(minuto_total)+" MINUTO(S)");
}