const { parse } = require('url');

var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var a = parseFloat(lines.shift());
var b = parseFloat(lines.shift());
var soma = 0;
var i =0;

if (a > b) {
    aux = a;
    a = b;
    b = aux;

}

for (i = a + 1; i < b; i++) {

    if (i % 2 == 1 || i % 2 == -1) {
        soma += + i;
    }


}
console.log(soma);