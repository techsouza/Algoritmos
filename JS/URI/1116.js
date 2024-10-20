var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var caso = parseInt(lines);
j = 1;
for (; caso > 0; caso--) {
    let x = parseFloat(lines[j].split(" ")[0]);
    let y = parseFloat(lines[j].split(" ")[1]);
    let result = x/y;
    console.log((y !== 0) ? ""+result.toFixed(1) : "divisao impossivel");
    j+=1;

}