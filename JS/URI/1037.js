var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');

var a = parseFloat(lines.shift());

if (a >= 0.00 && a <= 25.00)
    console.log("Intervalo [0,25]");
else if (a > 25.00 && a <= 50.00)
    console.log("Intervalo (25,50]");
else if (a > 50.00 && a <= 75.00)
    console.log("Intervalo (50,75]");
else if (a > 75.00 && a <= 100.00)
    console.log("Intervalo (75,100]");
else
    console.log("Fora de intervalo");