using System;
using System.Collections.Generic;
using System.Linq;
class URI
{
    public static void Main(string[] args)
    {
        string[] linha = Console.ReadLine().Split(' ');

        double x = double.Parse(linha[0]);
        double y = double.Parse(linha[1]);

        if(x%y == 0 || y % x == 0) 
            Console.WriteLine("Sao Multiplos");
        else
            Console.WriteLine("Nao sao Multiplos");

    }
}