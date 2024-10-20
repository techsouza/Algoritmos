var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split('\n');

var line = lines.shift().split(" ");

var a = parseFloat(line[0])
var b = parseFloat(line[1])
var c = parseFloat(line[2])

line.sort((a, b) => b - a);
var a = parseFloat(line[0])
var b = parseFloat(line[1])
var c = parseFloat(line[2])

if(a>=b+c )
    {
        console.log("NAO FORMA TRIANGULO");
    }
else if (a*a == b*b+c*c)
    {
        console.log("TRIANGULO RETANGULO");
    }
else if (a*a > b*b+c*c)
    {
        console.log("TRIANGULO OBTUSANGULO");
    }
else if(a*a < b*b+c*c)
    {
        console.log("TRIANGULO ACUTANGULO");
    }
if (a == b && a==c)
    {
        console.log("TRIANGULO EQUILATERO");
    }
if(a==b && a!=c || a==c && a!==b || b==c && b!=a)
    {
        console.log("TRIANGULO ISOSCELES");
    }