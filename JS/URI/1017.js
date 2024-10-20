const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');

const hora = parseFloat(lines.shift());
const km = parseFloat(lines.shift());
const total = (hora*km)/12;
console.log(total.toFixed(3));