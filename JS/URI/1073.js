var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var pot;
var n = 2;
var numero = parseInt(lines.shift());
while (numero > 1) {
    pot = n * n;
    // printf("%d^2 = %d\n", n, pot);
    // cout << n << "^2 = " << pot << "\n";
   console.log(n + "^2 = " + pot);
    n = n + 2;
    numero = numero - 2;
}
