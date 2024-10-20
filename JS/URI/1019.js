const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');

let seconds = parseInt(lines.shift());

let hours = parseInt(seconds/3600);
seconds = seconds - (hours*3600);

let minutes = parseInt(seconds/60);
seconds = seconds - (minutes*60);

console.log(hours+":"+minutes+":"+seconds);
