
using System;

class URI
{

    static void Main(string[] args)
    {
        
        int caso = Convert.ToInt32(Console.ReadLine());
        int dentro = 0;
        int fora = 0;
        int num = 0;

        for(; caso>0 ; caso--)
        {
            num = Convert.ToInt32(Console.ReadLine());

            if(num >= 10 && num <= 20)
                dentro+=1;
            else
                fora+=1;
        }

        Console.WriteLine(dentro + " in");
        Console.WriteLine(fora + " out");

    }
}