var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var positivo = 0;
var soma = 0;

for (var i = 0; i < 6; i++) {
    var numero = parseFloat(lines.shift());


    if (numero > 0) {
        positivo++;
        soma += numero;
    }


}

soma = soma / positivo;

console.log(positivo + " valores positivos");
console.log(soma.toFixed(1));
