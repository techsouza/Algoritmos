const { Console } = require('console');

const input = require('fs').readFileSync('stdin', 'utf8');
const lines = input.split('\n');


const linha = lines[0];

const linhas = linha.split(' ');

    if((linhas[0]%2===0) && (linhas[1]>linhas[2]) && (linhas[2]+linhas[3] > linhas[0]+linhas[1]) && (linhas[3]>linhas[0]) && (linhas[2] > 0) && (linhas[3] > 0)){
        console.log("Valores aceitos");
    }
    else
        console.log("Valores nao aceitos");

