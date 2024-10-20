var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


let caso = parseInt(lines.shift());

for(i=0; i < caso; i++)
    {
        resposta = parseInt(lines.shift());
        console.log("resposta "+ (i+1) +": "+resposta );
    }
    