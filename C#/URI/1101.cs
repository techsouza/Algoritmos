using System;
using System.Collections.Generic;
using System.Linq;
using System.Globalization;

class URI
{

    static void Main(string[] args)
    {
        int soma = 0, i, aux;

        string[] linha = Console.ReadLine().Split(' ');
        int a = int.Parse(linha[0]);
        int b = int.Parse(linha[1]);

        while (a > 0 && b > 0)
        {
            soma = 0;
            if (b > a)
            {
                aux = b;
                b = a;
                a = aux;
            }


            for (i = b; i <= a; i++)
            {
                soma = soma + i;
                Console.Write("{0} ", i);
            }
            Console.WriteLine("Sum={0}", soma);
            linha = Console.ReadLine().Split(' ');
            a = int.Parse(linha[0]);
            b = int.Parse(linha[1]);
        }
    }
}