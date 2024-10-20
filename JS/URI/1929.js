var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

let j = 0;
let a = parseInt(lines[j].split(" ")[0]);
let b = parseInt(lines[j].split(" ")[1]);
let c = parseInt(lines[j].split(" ")[2]);
let d = parseInt(lines[j].split(" ")[3]);

if(a+b>c && a+c>b && b+c>a)
    console.log("S");
else if(b+c>d && b+d>c && c+d>b)
    console.log("S");
else if(a+c>d && a+d>c && c+d>a)
    console.log("S");
else if(a+b>d && b+d>a && a+d>b)
    console.log("S");
else
    console.log("N");