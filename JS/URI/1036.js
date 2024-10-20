var input = require('fs').readFileSync('stdin', 'utf8');

var lines = input.split(' ');

var a = parseFloat(lines.shift());

var b = parseFloat(lines.shift());

var c = parseFloat(lines.shift());

// es b x b, no se porque no coje el signo pero si lo agregas en tu codigo seguro servira

var pi = (b * b) - (4 * a * c);

if(pi<0){

console.log('Impossivel calcular');

} else if (a === 0){

console.log('Impossivel calcular');

} else{

var r1 = parseFloat((-b + Math.sqrt(pi)) / (a + a));

var r2 = parseFloat((-b - Math.sqrt(pi)) / (a + a));

console.log('R1 = ' + r1.toFixed(5));

console.log('R2 = ' + r2.toFixed(5));

}