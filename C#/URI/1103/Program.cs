int h1, m1, h2, m2, hora1, hora2, total;


string[] linha1 = Console.ReadLine().Split(' ');

h1 = int.Parse(linha1[0]);
m1 = int.Parse(linha1[1]);
h2 = int.Parse(linha1[2]);
m2 = int.Parse(linha1[3]);


while (h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0)
{
    hora1 = (h1 * 60) + m1;
    hora2 = (h2 * 60) + m2;
    if (hora1 < hora2)
        total = hora2 - hora1;
    else
        total = ((60 * 24) - hora1) + hora2;

    Console.WriteLine("{0}", total);
    
    string[] linha2 = Console.ReadLine().Split(' ');

    h1 = int.Parse(linha2[0]);
    m1 = int.Parse(linha2[1]);
    h2 = int.Parse(linha2[2]);
    m2 = int.Parse(linha2[3]);

}