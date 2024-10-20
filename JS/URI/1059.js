var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


for (var i=2; i<=100; i++)
{
   console.log(i);
   i++;
}