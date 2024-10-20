using System;
using System.Collections.Generic;
using System.Linq;
using System.Globalization;

class URI
{

    static void Main(string[] args)
    {
        string[] valores = Console.ReadLine().Split(' ');
        int X = int.Parse(valores[0]);
        int Y = int.Parse(valores[1]);

        while (X != 0 && Y != 0)
        {
            if (X > 0 && Y > 0)
            {
                Console.WriteLine("primeiro");
            }
            else if (X < 0 && Y > 0)
            {
                Console.WriteLine("segundo");
            }
            else if (X < 0 && Y < 0)
            {
                Console.WriteLine("terceiro");
            }
            else
            {
                Console.WriteLine("quarto");
            }
            valores = Console.ReadLine().Split(' ');
            X = int.Parse(valores[0]);
            Y = int.Parse(valores[1]);
        }

    }
}