using System;

class URI
{

    static void Main(string[] args)
    {
        int caso = Convert.ToInt32(Console.ReadLine());

        for (; caso > 0; caso--)
        {
            int num = Convert.ToInt32(Console.ReadLine());
            if (num == 0)
                Console.WriteLine("NULL");
            if (num % 2 != 0 && num < 0)
               Console.WriteLine("ODD NEGATIVE");
            if (num % 2 == 0 && num < 0)
                Console.WriteLine("EVEN NEGATIVE");
            if (num % 2 != 0 && num > 0)
                Console.WriteLine("ODD POSITIVE");
            if (num % 2 == 0 && num > 0)
               Console.WriteLine("EVEN POSITIVE");
        }

    }
}