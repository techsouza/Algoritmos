using System;

class URI
{
    static void Main(string[] args)
    {
        string jon = Console.ReadLine();
        String medico = Console.ReadLine();

        int a = jon.Length;
        int b = medico.Length;

        if (a >= b)
            Console.WriteLine("go");
        else
             Console.WriteLine("no");

    }
}