var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var caso = parseInt(lines.shift());
var dentro = 0;
var fora = 0;
var num = 0;

for (; caso > 0; caso--) {
    num = parseInt(lines.shift());

    if (num >= 10 && num <= 20)
        dentro += 1;
    else
        fora += 1;
}


console.log(dentro + " in");
console.log(fora + " out");