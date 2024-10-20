double a, b;
string[] linha = Console.ReadLine().Split(' ');
a = double.Parse(linha[0]);
b = double.Parse(linha[1]);

a = ((100 + a) * (b / 100 + 1)) - 100;


Console.WriteLine("{0:0.000000}", a);