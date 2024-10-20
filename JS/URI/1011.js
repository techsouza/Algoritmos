var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var raio = parseInt(lines.shift());

var total = (4/3)*3.14159*(raio**3);

console.log("VOLUME =", total.toFixed(3));
