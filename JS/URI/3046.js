var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var a = parseInt(lines.shift());

a = ((a+1)*(a+2)/2);
console.log(a);
