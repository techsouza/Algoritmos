var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines);


for (var i = 1; i <= num; i = i + 2)
{
    console.log(i);
}