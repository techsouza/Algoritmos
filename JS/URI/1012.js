var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var leia = lines[0];

var medidas = leia.split(' ');



console.log("TRIANGULO:", ((medidas[0]*medidas[2])/2).toFixed(3));
console.log("CIRCULO:", (3.14159*(medidas[2]*medidas[2])).toFixed(3));
console.log("TRAPEZIO:", ((parseFloat(medidas[0])+parseFloat(medidas[1]))*medidas[2]/2).toFixed(3));
console.log("QUADRADO:", (medidas[1]*medidas[1]).toFixed(3));
console.log("RETANGULO:", (medidas[0]*medidas[1]).toFixed(3));

