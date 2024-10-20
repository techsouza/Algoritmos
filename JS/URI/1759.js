var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let n = parseInt(lines.shift());
let frase="";
for (; n>=1; n--) {
    if (n>1) frase += "Ho ";
    else frase += "Ho!";
}

console.log(frase);