var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');

var e = parseInt(lines[0]);
var f = parseInt(lines[1]);
var c = parseInt(lines[2]);

var total = e+f;
var garrafas=0;

while(c<=total)
{
    total = total -c;
    total++;
    garrafas++;
}
console.log(garrafas);
