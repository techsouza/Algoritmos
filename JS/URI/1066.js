var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var positivo = 0;
var negativo = 0;
var par = 0;
var impar = 0;
for (var i = 0; i < 5; i++) {
    var numero = parseFloat(lines.shift());


    if (numero > 0) {
        positivo++;
    }
    if (numero < 0) {
        negativo++;
    }
    if (numero % 2 == 0) {
        par++;
    }
    if (numero % 2 != 0) {
        impar++;
    }


}

console.log(par + " valor(es) par(es)");
console.log(impar + " valor(es) impar(es)");
console.log(positivo + " valor(es) positivo(s)");
console.log(negativo + " valor(es) negativo(s)");
