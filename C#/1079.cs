
using System;
using System.Collections.Generic;
using System.Linq;
using System.Globalization;

class Uri_1079
{

    public static void Main(string[] args)
    {
        int numero;
        numero = Convert.ToInt32(Console.ReadLine());
        float a, b, c;


        for (int i = 0; i < numero; i++)
        {
            string[] linha = Console.ReadLine().Split(' ');

            a = float.Parse(linha[0], CultureInfo.InvariantCulture);
            b = float.Parse(linha[1], CultureInfo.InvariantCulture);
            c = float.Parse(linha[2], CultureInfo.InvariantCulture);


            Console.WriteLine(((a * 2.0 + b * 3.0 + c * 5.0) / 10.0).ToString("0.0", CultureInfo.InvariantCulture));

        }


    }
}