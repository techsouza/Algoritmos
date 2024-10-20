string[] linha1 = Console.ReadLine().Split(' ');

int h = int.Parse(linha1[0]);
int z = int.Parse(linha1[1]);
int l = int.Parse(linha1[2]);


if (z > l && z < h || z < l && z > h)
    Console.WriteLine("zezinho");
else if (l > z && l < h || l < z && l > h)
    Console.WriteLine("luisinho");
else
    Console.WriteLine("huguinho");