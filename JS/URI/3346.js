var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');

var a = parseFloat(lines[0]);
var b = parseFloat(lines[1]);

a = ((100 + a) * (b / 100 + 1)) - 100;


console.log(''+ a.toFixed(6));