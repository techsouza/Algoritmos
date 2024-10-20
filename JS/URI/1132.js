var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

x = parseInt(lines.shift());
y = parseInt(lines.shift());

cont = 0

if (x > y) {
    aux = x
    x = y
    y = aux
}

while (x <= y) {
    if (x % 13 !== 0) {
        cont = cont + x
        x = x + 1
    }
    else {
        x = x + 1
    }
}
console.log(cont);
