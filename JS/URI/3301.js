var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split(' ');

var h = parseInt(lines[0]);
var z = parseInt(lines[1]);
var l = parseInt(lines[2]);

if ((z > l && z < h) || (z < l && z > h))
    console.log("zezinho");
else if (l > z && l < h || l < z && l > h)
    console.log("luisinho");
else
    console.log("huguinho");