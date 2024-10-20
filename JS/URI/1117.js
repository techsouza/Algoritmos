var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let a;
let cont = 0;
let media = 0;
let j=0;

while (cont < 2) {
    a = parseFloat(lines[j]);
    if (a >= 0 && a <= 10) {
        media = media + a;
        cont++;
    } else console.log("nota invalida");
    j++;
}
media = media / 2;
console.log("media = "+ media.toFixed(2));

