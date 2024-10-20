var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var caso = parseInt(lines.shift());

for (var i =1; i < 10000; i++) {


    if(i%caso == 2)
        console.log(i);


}