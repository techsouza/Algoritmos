var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


n = parseInt(lines.shift());

for (var i=1; i <=n; i++ ){

    console.log(i + " " + i * i + " " + i * i * i);

}