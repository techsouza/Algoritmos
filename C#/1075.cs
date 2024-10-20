using System;

class URI
{

    static void Main(string[] args)
    {
        int n, contador;

        while (n = !0)
        {

            int numero = Convert.ToInt32(Console.ReadLine());
            for (int i = 1; i <= 10000; i++)
            {

                if (i % numero == 2)
                    Console.WriteLine(i);

            }


        }
    }
}