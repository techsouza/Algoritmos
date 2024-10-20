var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines.shift());
var salario = parseInt(lines.shift());
var valor = parseFloat(lines.shift());
var total = salario*valor;
console.log("NUMBER =", num);
console.log("SALARY = U$", total.toFixed(2));

