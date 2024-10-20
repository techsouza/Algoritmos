using System;

class URI
{

    static void Main(string[] args)
    {

        int x;
        int y;
        int aux = 0;

        x = Convert.ToInt32(Console.ReadLine());
        y = Convert.ToInt32(Console.ReadLine());
        if (y < x)
        {
            aux = y;
            y = x;
            x = aux;
        }
        x = x + 1;
        while (x < y)
        {
            if (x % 5 == 2 || x % 5 == 3)
                Console.WriteLine(x);
            x++;
        }

    }

}