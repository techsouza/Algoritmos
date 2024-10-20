var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');


var x = parseInt(lines.shift());
var str = ""

while (x != 0) {
    for (var i = 1; i <= x; i++) {
        if (i != x) {
            str += `${i} `
        }
        else {
            str += `${i}`
        }
    }
    var x = parseInt(lines.shift());
    console.log(str)
    var str = ""
}