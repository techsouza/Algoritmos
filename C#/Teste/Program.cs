using System;

class URI
{

    static void Main(string[] args)
    {
        int a, b, c, d;

        string[] linha = Console.ReadLine().Split(' ');

        a = int.Parse(linha[0]);
        b = int.Parse(linha[1]);
        c = int.Parse(linha[2]);
        d = int.Parse(linha[3]);

        if(a+b>c && a+c>b && b+c>a)
            Console.WriteLine("S");
        else if(b+c>d && b+d>c && c+d>b)
            Console.WriteLine("S");
        else if(a+c>d && a+d>c && c+d>a)
            Console.WriteLine("S");
        else if(a+b>d && b+d>a && a+d>b)
            Console.WriteLine("S");
        else
            Console.WriteLine("N");


    }

}