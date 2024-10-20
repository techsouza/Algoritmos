using System;

class URI
{

    static void Main(string[] args)
    {

        int n, numero, par;
        n = 5;
        par = 0;
        while (n > 0)
        {
            numero = Convert.ToInt32(Console.ReadLine());
            if (numero % 2 == 0)
                par = par + 1;
            else
                ;
            n = n - 1;
        }
        Console.WriteLine(par +" valores pares");
    }
}