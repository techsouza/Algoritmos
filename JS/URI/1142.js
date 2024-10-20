var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


n = parseInt(lines.shift());
cont = 0;
a = 1;
b = 2;
c = 3;
while( cont < n){
    console.log(a + " " + b + " " + c + " PUM")
    c+=2;
    a = c;
    b = c;
    b+=1;
    c+=2;
    cont+=1;

}