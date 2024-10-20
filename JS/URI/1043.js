var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line = lines.shift().split(" ");
var x = parseFloat(line[0]);
var y = parseFloat(line[1]);
var z = parseFloat(line[2]);


if(x+y > z && x+z > y && z+y > x)
    console.log("Perimetro = "+ (x+y+z).toFixed(1));

else
    console.log("Area = "+ (((x+y)*z)/2).toFixed(1));