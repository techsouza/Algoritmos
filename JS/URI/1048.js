var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');



var salario = parseFloat(lines.shift());
var reajuste = 0;
var percentual = 0;

if(salario >= 0 && salario <= 400.00)
    {
        reajuste = salario * 0.15;
        salario = salario + reajuste;
        percentual = 15;
    }
else if (salario >= 400.01 && salario <= 800.00)
    {
        reajuste = salario * 0.12;
        salario = salario + reajuste;
        percentual = 12;
    }
else if (salario >= 800.01 && salario <= 1200.00)
    {
        reajuste = salario * 0.10;
        salario = salario + reajuste; 
        percentual = 10;
    }
else if (salario >= 1200.01 && salario <= 2000.00)
    {
        reajuste = salario * 0.07;
        salario = salario + reajuste;
        percentual = 7;
    }
else if (salario > 2000.00)
    {
        reajuste = salario * 0.04;
        salario = salario + reajuste;
        percentual = 4;
    }

console.log("Novo salario: "+salario.toFixed(2));
console.log("Reajuste ganho: "+reajuste.toFixed(2));
console.log("Em percentual: "+percentual+" %");

