var input = require('fs').readFileSync('stdin', 'utf-8');
var lines = input.split('\n');

var line = lines.shift().split(" ");

var x = line[0];
var y = line[1];

if(x%y==0 || y%x==0)
{
    console.log("Sao Multiplos");
}
else
{
    console.log("Nao sao Multiplos");
}
