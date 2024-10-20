var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var mes = parseInt(lines);

var meses = ["January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"];

console.log(meses[mes-1]);