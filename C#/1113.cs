using System;
using System.Collections.Generic;
using System.Linq;
using System.Globalization;

class URI
{

    static void Main(string[] args)
    {
        string[] valor;
        valor = Console.ReadLine().Split(' ');
        int x = int.Parse(valor[0]);
        int y = int.Parse(valor[1]);

        while (x != y)
        {
            if (x > y)
            {
                Console.WriteLine("Decrescente");
            }
            else if (x < y)
            {
                Console.WriteLine("Crescente");
            }

            valor = Console.ReadLine().Split(' ');
            x = int.Parse(valor[0]);
            y = int.Parse(valor[1]);
        }
    }
}