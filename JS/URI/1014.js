var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var km = parseInt(lines.shift());
var consumo = parseFloat(lines.shift());

var kml = km/consumo;

console.log(kml.toFixed(3)+" km/l")