const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');

const a = parseInt(lines.shift());


console.log(a*2+" minutos");