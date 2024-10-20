var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var jon = lines.shift()
var medico = lines.shift()

if (jon<=medico) {
    console.log("go")
}
else
    console.log("no")