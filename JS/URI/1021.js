const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');


let money = parseFloat(lines.shift());

let inteiro = money;
money = 100*money

let aux1 = money;

//CÉDULAS
console.log("NOTAS:");
console.log(parseInt(inteiro/100)+" nota(s) de R$ 100.00");
aux = inteiro%100;
console.log(parseInt(aux/50)+" nota(s) de R$ 50.00");
aux = aux%50;
console.log(parseInt(aux/20)+" nota(s) de R$ 20.00");
aux = aux%20;
console.log(parseInt(aux/10)+" nota(s) de R$ 10.00");
aux = aux%10;
console.log(parseInt(aux/5)+" nota(s) de R$ 5.00");
aux = aux%5;
console.log(parseInt(aux/2)+" nota(s) de R$ 2.00");
aux = aux%2;

//MOEDAS
console.log("MOEDAS:");
console.log(parseInt(aux)+" moeda(s) de R$ 1.00");
aux1 = aux1%100;
console.log(parseInt(aux1/50)+" moeda(s) de R$ 0.50");
aux1 = aux1%50;
console.log(parseInt(aux1/25)+" moeda(s) de R$ 0.25");
aux1 = aux1%25;
console.log(parseInt(aux1/10)+" moeda(s) de R$ 0.10");
aux1 = aux1%10;
console.log(parseInt(aux1/5)+" moeda(s) de R$ 0.05");
aux1 = aux1%5;
console.log(parseInt(aux1)+" moeda(s) de R$ 0.01");
