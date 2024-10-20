var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var caso = parseInt(lines.shift());

for (; caso > 0; caso--) {

   var num = parseInt(lines.shift());
    if (num === 0)
        console.log("NULL");
    if (num % 2 !== 0 && num < 0)
        console.log("ODD NEGATIVE");
    if (num % 2 === 0 && num < 0)
        console.log("EVEN NEGATIVE");
    if (num % 2 !== 0 && num > 0)
        console.log("ODD POSITIVE");
    if (num % 2 === 0 && num > 0)
        console.log("EVEN POSITIVE");
}