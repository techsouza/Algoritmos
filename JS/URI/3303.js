var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let palavra = lines.shift();

let tamnho = palavra.length;


if(tamnho >= 10)
    console.log("palavrao");
else
    console.log("palavrinha");