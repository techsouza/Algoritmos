var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var c = parseInt(lines.shift());
var d = parseInt(lines.shift());

var DIFERENCA = a*b-c*d;

console.log("DIFERENCA =", DIFERENCA);
