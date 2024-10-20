var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
let maior = 0;
let posicao = 0;
for (var i = 1; i < 101; i++) {

    

    let number = parseInt(lines.shift());

    if(number > maior)
    {
        maior = number;
        posicao = i;
    }
    

}

console.log(maior+"");
console.log(posicao+"");
