var input = require("fs").readFileSync("stdin", "utf8");

var lines = input.split("\n");

var raio = parseFloat(lines);

var area = 3.14159*Math.pow(raio, 2);

console.log("A="+area.toFixed(4));