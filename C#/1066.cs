using System;

class URI
{

    static void Main(string[] args)
    {
        resultado = 0;
        par = 0;
        impar = 0;
        positivo = 0;
        negativo = 0;
        for (int i = 0; i < 5; i++)
        {
            numero = Convert.ToInt32(Console.ReadLine());

            if (numero % 2 == 0)
            {
                par+=1;
            }
            
            if (numero % 2 != 0)
            {
                impar+=1;
            }
            
            if (numero > 0)
            {
                positivo+=1;
            }
            
            if (numero < 0)
            {
                negativo+=1;
            }

        }

        Console.WriteLine(par+"valor(es) par(es)");
        Console.WriteLine(impar+"valor(es) impar(es)");
        Console.WriteLine(positivo+"valor(es) positivo(s)");
        Console.WriteLine(negativo+"valor(es) negativo(s)");
    }
}