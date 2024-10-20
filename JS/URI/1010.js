var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var codigo1 = lines[0];
var codigo2 = lines[1];

var codigos1 = codigo1.split(' ');
var codigos2 = codigo2.split(' ');

var total = codigos1[1]*codigos1[2]+codigos2[1]*codigos2[2];

console.log('VALOR A PAGAR: R$', total.toFixed(2));