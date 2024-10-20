int e, f, c, total=0, garrafas;


string[] linha1 = Console.ReadLine().Split(' ');

e = int.Parse(linha1[0]);
f = int.Parse(linha1[1]);
c = int.Parse(linha1[2]);
garrafas = e + f;

while (c <= garrafas)
{
    garrafas = garrafas - c;
    garrafas++;
    total++;
}

Console.WriteLine(total);