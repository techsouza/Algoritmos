const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');

let tab = parseInt(lines.shift());

if (tab % 2 === 0)
    {
        tab = tab * tab;
        console.log(tab/2+" casas brancas e "+tab/2+" casas pretas");
    }
    else
    {
        tab = tab * tab;
        tab = tab / 2;
        console.log(parseInt(tab+1) + " casas brancas e "+ parseInt(tab) +" casas pretas");
    }