var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var leia = lines[0];

var valores = leia.split(' ');

var maiorAb = (parseInt(valores[0])+parseInt(valores[1])+Math.abs(parseInt(valores[0])-parseInt(valores[1])))/2;
var maior = (maiorAb+parseInt(valores[2])+Math.abs(maiorAb-parseInt(valores[2])))/2;

console.log(maior + " eh o maior");
