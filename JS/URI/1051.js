const { isRegExp } = require('util/types');

var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var valor = parseFloat(lines);
var ir = 0;

if (valor > 4500) {
    ir += (valor - 4500) * 0.28;
    valor = 4500;
}
if (valor > 3000) {
    ir += (valor - 3000) * 0.18;
    valor = 3000;
}
if (valor > 2000) {
    ir += (valor - 2000) * 0.08;
}
if (ir === 0) {
   console.log("Isento");
}
else

    console.log("R$ "+ir.toFixed(2));

