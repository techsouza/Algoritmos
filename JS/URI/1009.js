var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var nome = lines.shift();
var salario = parseFloat(lines.shift());
var vendas = parseFloat(lines.shift());

var total = salario+(vendas*0.15);

console.log("TOTAL = R$", total.toFixed(2));