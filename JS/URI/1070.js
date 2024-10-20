var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines);

for (var i = 0; i < 12; i++) {
    if (num % 2 != 0)
        console.log(num);

    num++;
}