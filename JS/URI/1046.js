var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line = lines.shift().split(" ");

var a = parseInt(line[0]);
var b = parseInt(line[1]);

if(a == b)
{
    console.log("O JOGO DUROU 24 HORA(S)");
}

else if(a > b)
{
    let total = a - 24;
    total = Math.abs(total) + b;
    console.log("O JOGO DUROU "+total+" HORA(S)");

}

else
{
    total = b - a;
    console.log("O JOGO DUROU "+total+" HORA(S)");

}

