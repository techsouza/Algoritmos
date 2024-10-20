using System;

class URI
{

    static void Main(string[] args)
    {

        int numero, pot, n;
        numero = Convert.ToInt32(Console.ReadLine());
        n = 2;
        while (numero > 1)
        {
            pot = n * n;
            //printf("%d^2 = %d\n", n, pot);
            Console.WriteLine(n + "^2 = " + pot);
            n = n + 2;
            numero = numero - 2;
        }

    }
}