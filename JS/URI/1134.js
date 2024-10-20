var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var cliente;
var alcool = 0;
var gasolina = 0; 
var diesel = 0;
         
while (cliente != 4) {

    cliente = parseInt(lines.shift());
    switch (cliente) {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            cliente = 4;
            break;
    }
}

console.log("MUITO OBRIGADO");
console.log("Alcool: " + alcool);
console.log("Gasolina: " + gasolina);
console.log("Diesel: " + diesel);