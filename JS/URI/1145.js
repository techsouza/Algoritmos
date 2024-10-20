var input = require('fs').readFileSync('stdin', 'utf8');
var sep = [' ', '\n'];
var line = input.split(new RegExp(sep.join('|'), 'g'));

var colunas = parseInt(line.shift());
var numMax = parseInt(line.shift());


let contador = 0
let str = ""
for (i = 1; i < numMax; i++){
    contador += 1
    if (contador == colunas) {
        contador = 0
        str += `${i}\n`
    }else{
        str += `${i} `
    }

}
str += `${numMax}`
console.log(str)