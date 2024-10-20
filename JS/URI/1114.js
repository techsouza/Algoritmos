var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let x = 0000;
let j=0;

while (x != 2002) {
    x = parseInt(lines[j].split(" ")[0]);
    console.log((x == 2002) ? "Acesso Permitido" : "Senha Invalida");
    j+=1;
    


}
