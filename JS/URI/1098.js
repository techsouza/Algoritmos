let caso
let i = 0;
let j = 1;
for (caso = 0; caso < 11; ++caso)
{
    if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0)
    {
       console.log("I="+(i / 10)+ " J=" + ((i / 10) + j));
       console.log("I="+(i / 10)+ " J=" + ((i / 10) + j+1));
       console.log("I="+(i / 10)+ " J=" + ((i / 10) + j+2));
    }
    else
    {
        console.log("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j));
        console.log("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j+1));
        console.log("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j+2));
    }
    i += 2;
}