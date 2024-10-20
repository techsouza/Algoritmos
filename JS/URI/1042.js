var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var line = lines.shift().split(" ");
var num4 = line[0];
var num5 = line[1];
var num6 = line[2];


line.sort((a, b) => a -b);

var num1 = parseInt(line[0]);
console.log(num1);
var num2 = parseInt(line[1]);
console.log(num2);
var num3 = parseInt(line[2]);
console.log(num3);
console.log();
console.log(num4);
console.log(num5);
console.log(num6);



