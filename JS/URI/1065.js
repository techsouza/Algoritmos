var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var numero;
var par =0;
for(var i=0; i<5; i++)
{
    numero = parseInt(lines.shift());
    if(numero%2==0)
    {
        par+=1;
    }

}

console.log(par+" valores pares");
