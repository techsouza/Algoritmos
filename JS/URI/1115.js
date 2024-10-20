var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let j = 0;
let x = parseInt(lines[j].split(" ")[0]);
let y = parseInt(lines[j].split(" ")[1]);

while (x != 0 && y != 0) {
    if (x > 0 && y > 0) {
        console.log("primeiro");
    }
    else if (x < 0 && y > 0) {
        console.log("segundo");
    }
    else if (x < 0 && y < 0) {
        console.log("terceiro");
    }
    else {
        console.log("quarto");
    }
    j++;
    x = parseInt(lines[j].split(" ")[0]);
    y = parseInt(lines[j].split(" ")[1]);
}