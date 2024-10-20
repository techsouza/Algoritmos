var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\r\n');

let caso = parseInt(lines.shift());

let i = 0;
let quantidade = 0;
let coelho = 0;
let sapo = 0;
let rato = 0;
let cobaia = 0;
for (; i < caso; i++) {

    let cobaia = parseInt(lines[i].split(" ")[0]);
    let sigla = lines[i].split(" ")[1];



    quantidade = quantidade + cobaia;


    if (sigla == 'C') {
        coelho = coelho + cobaia;
    }
    if (sigla == 'R') {
        rato = rato + cobaia;
    }

    if (sigla == 'S') {
        sapo = sapo + cobaia;
    }



}

console.log("Total: " + quantidade + " cobaias");
console.log("Total de coelhos: " + coelho);
console.log("Total de ratos: " + rato);
console.log("Total de sapos: " + sapo);

let q_c = (coelho * 100.00) / quantidade;
let q_r = (rato * 100.00) / quantidade;
let q_s = (sapo * 100.00) / quantidade;

console.log("Percentual de coelhos: " + q_c.toFixed(2)+ " %");
console.log("Percentual de ratos: " + q_r.toFixed(2)+ " %");
console.log("Percentual de sapos: " + q_s.toFixed(2)+ " %");
