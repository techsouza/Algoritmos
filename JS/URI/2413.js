var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var link = parseInt(lines.shift());

link = link * 4;
console.log("", link);
