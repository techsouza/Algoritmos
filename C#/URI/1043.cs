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
        double z = double.Parse(linha[2]);

        if(x+y > z || x+z > y || z+y > x)
        {
            Console.WriteLine("Perimetro = {0:0.0}", x+y+z);
        }
        else
        {
            Console.WriteLine("Area = {0:0.0}", ((a+b)*c)/2);
        }

    }
}