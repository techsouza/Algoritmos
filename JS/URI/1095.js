//var input = require('fs').readFileSync('stdin', 'utf8');
//var lines = input.split('\r\n');


let j = 60;
let i = 1;

while (j >= 0) {
    console.log("I=" + i + " J=" + j);

    i += 3;
    j -= 5;
}

