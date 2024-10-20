var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let caso;
let x, y;
let aux, i, sum;
let j = 0;
caso = parseInt(lines.shift());

for (; j < caso; j++) {
    sum = 0;
    x = parseInt(lines[j].split(" ")[0]);
    y = parseInt(lines[j].split(" ")[1]);

    if (x > y) {
        aux = y;
        y = x;
        x = aux;
    }
    i = x + 1;
    for (; i < y; i++) {
        if (i % 2 == 1 || i % 2 == -1)
            sum += i;
    }

    console.log(sum);

}
