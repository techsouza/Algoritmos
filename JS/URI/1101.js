var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let soma = 0;
let j = 0;
let aux;
var lista = [];

let a = parseInt(lines[j].split(" ")[0]);
let b = parseInt(lines[j].split(" ")[1]);


while (a > 0 && b > 0) {
    if (a > b) {
        aux = b;
        b = a;
        a = aux;
    }

    for (i = a; i <= b; i++) {
        soma = soma + i;
        lista.push(i);
    }


    console.log(lista.join(' ')+" Sum=" + soma);
    lista = [];
    soma = 0;
    j++;
    a = parseInt(lines[j].split(" ")[0]);
    b = parseInt(lines[j].split(" ")[1]);

}