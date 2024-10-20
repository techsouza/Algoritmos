const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');

let days = parseInt(lines.shift());

let years = parseInt(days/365);
days = days - (years*365);

let months = parseInt(days/30);
days = days - (months*30);

console.log(years+" ano(s)");
console.log(months+" mes(es)");
console.log(days+" dia(s)");