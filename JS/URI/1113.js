var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let x, y , j=0;
x = parseInt(lines[j].split(" ")[0]);
y = parseInt(lines[j].split(" ")[1]);

while (x != y) {
    console.log((x > y) ? "Decrescente" : "Crescente");
    j+=1;
    x = parseInt(lines[j].split(" ")[0]);
    y = parseInt(lines[j].split(" ")[1]);

}
