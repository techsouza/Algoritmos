var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var x;
var y;
var aux = 0;

x = parseInt(lines.shift());
y = parseInt(lines.shift());
if (y < x) {
    aux = y;
    y = x;
    x = aux;
}
x = x + 1;
while (x < y) {
    if (x % 5 == 2 || x % 5 == 3)
    console.log(x);
    x++;
}