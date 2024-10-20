using System;

class URI
{

    static void Main(string[] args)
    {

        int x;
        int y;
        int cont = 0;
        int aux = 0;

         x = Convert.ToInt32(Console.ReadLine());
        y = Convert.ToInt32(Console.ReadLine());
        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        while (x <= y)
        {
            if (x % 13 != 0)
            {
                cont = cont + x;
                x++;
            }
            else
                x++;
        }

        Console.WriteLine(cont);
    }

}