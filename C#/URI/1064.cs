using System;

class URI
{

    static void Main(string[] args)
    {
        int n, positivo = 0;
        double numero;
        double soma = 0;

        for (n = 0; n < 6; n++)
        {
            numero = Convert.ToDouble(Console.ReadLine());

            if (numero > 0)
            {
                positivo++;
                soma += numero;
            }
        }
        soma = soma / positivo;
        Console.WriteLine(positivo + " valores positivos");
        Console.WriteLine("{0:0.0}", soma);

    }
}