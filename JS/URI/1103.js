var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');
j = 0;
var h1 = parseInt(lines[j].split(" ")[0]);
var m1 = parseInt(lines[j].split(" ")[1]);
var h2 = parseInt(lines[j].split(" ")[2]);
var m2 = parseInt(lines[j].split(" ")[3]);

while (h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0) {
    hora1 = (h1 * 60) + m1;
    hora2 = (h2 * 60) + m2;
    if (hora1 < hora2)
        total = hora2 - hora1;
    else
        total = ((60 * 24) - hora1) + hora2;
    console.log(total)
    j++
    var h1 = parseInt(lines[j].split(" ")[0]);
    var m1 = parseInt(lines[j].split(" ")[1]);
    var h2 = parseInt(lines[j].split(" ")[2]);
    var m2 = parseInt(lines[j].split(" ")[3]);

}