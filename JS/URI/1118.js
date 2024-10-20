var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let nota1;
let nota2;
let flag = 1;
let j = 0;

while (flag == 1) {
    nota1 = parseFloat(lines[j]);

    while (nota1 > 10 || nota1 < 0) {

        console.log("nota invalida");
        j++;
        nota1 = parseFloat(lines[j]);

    }

    j++;
    nota2 = parseFloat(lines[j]);

    while (nota2 > 10 || nota2 < 0) {

        console.log("nota invalida");
        j++;
        nota2 = parseFloat(lines[j]);

    }

    let media = (nota1 + nota2) / 2;
    console.log("media = " + media.toFixed(2));

    console.log("novo calculo (1-sim 2-nao)");
    j++;
    flag = parseFloat(lines[j]);

    while (flag != 1 && flag != 2) {
        console.log("novo calculo (1-sim 2-nao)");
        j++;
        flag = parseFloat(lines[j]);

    }
    j++;

}