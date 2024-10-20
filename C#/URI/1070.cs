using System;

class URI
{

    static void Main(string[] args)
    {
        int num = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < 12; i++)
        {
            if (num % 2 != 0)
                Console.WriteLine(num);

            num++;
        }

    }
}