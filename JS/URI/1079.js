var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var caso = parseInt(lines.shift());


for (var i = 0; i < caso; i++) {

    var nota = lines.shift().split(" ");


    var media = parseFloat(nota[0]) * 2 + parseFloat(nota[1]) * 3 + parseFloat(nota[2]) * 5;

    media = parseFloat(media) / 10

    console.log(media.toFixed(1));


}