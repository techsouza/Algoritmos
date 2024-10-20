using System;

class URI
{

    static void Main(string[] args)
    {


        int n, positivo = 0;
        double numero;

        for (n = 0; n < 6; n++)
        {
            numero = Convert.ToDouble(Console.ReadLine());

            if (numero > 0)
                positivo++;
        }
        Console.WriteLine(positivo + " valores positivos");

    }
}