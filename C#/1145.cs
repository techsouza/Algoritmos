using System;

class URI
{

    static void Main(string[] args)
    {
        int x, y;
        string[] linha = Console.ReadLine().Split(' ');

        x = int.Parse(linha[0]);
        y = int.Parse(linha[1]);

        int n = 1;

        for (int i = 1; i <= y; i++)
        {
            if (n == x)
            {
                Console.WriteLine(i);
                n = 1;
            }
            else
            {
                Console.Write(i + " ");
                n++;
            }
        }

    }

}