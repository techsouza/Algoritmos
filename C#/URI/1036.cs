using System;

class URI
{

    static void Main(string[] args)
    {
        double a, b, c, r1, r2, delta;
        string[] linha1 = Console.ReadLine().Split(' ');
        a = Double.Parse(linha1[0]);
        b = Double.Parse(linha1[1]);
        c = Double.Parse(linha1[2]);
        delta = (b * b) - (4.0 * a * c);
        if (0 > delta || (2.0 * a) == 0.0)
            Console.WriteLine("Impossivel calcular");
        else
        {
            r1 = (-b + Math.Sqrt(delta)) / (2.0 * a);
            r2 = (-b - Math.Sqrt(delta)) / (2.0 * a);
            Console.WriteLine("R1 = {0:0.00000}", r1);
            Console.WriteLine("R2 = {0:0.00000}", r2);

        }
    }

}