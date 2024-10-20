using System;

class URI
{

    static void Main(string[] args)
    {
        int x=1;
        x = Convert.ToInt32(Console.ReadLine());
        while (x != 0)
        {
            
            for (int i = 1; i <= x; i++)
            {
                if (i != x)
                {
                    Console.Write(i + " ");
                }
                else
                    Console.WriteLine(i);
            }
            x = Convert.ToInt32(Console.ReadLine());
        }
    }

}