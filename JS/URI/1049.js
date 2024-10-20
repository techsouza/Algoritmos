var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.split('\n');

var a =lines.shift().trim()
var b =lines.shift().trim()
var c =lines.shift().trim()


if(a == "vertebrado" && b == "ave" && c == "carnivoro")
{
    console.log("aguia\n");
}
if(a == "vertebrado" && b == "ave" && c == "onivoro")
{
    console.log("pomba\n");
}
if(a == "vertebrado" && b == "mamifero" && c == "onivoro")
{
    console.log("homem\n");
}
if(a == "vertebrado" && b == "mamifero" && c == "herbivoro")
{
    console.log("vaca\n");
}
if(a == "invertebrado" && b == "inseto" && c == "hematofago")
{
    console.log("pulga\n");
}
if(a == "invertebrado" && b == "inseto" && c == "herbivoro")
{
    console.log("lagarta\n");
}
if(a == "invertebrado" && b == "anelideo" && c == "hematofago")
{
    console.log("sanguessuga\n");
}
if(a == "invertebrado" && b == "anelideo" && c == "onivoro")
{
    console.log("minhoca\n");
}