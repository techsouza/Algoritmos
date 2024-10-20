using System; 

class URI {

    static void Main(string[] args)        {
           double a;
            a = Convert.ToDouble(Console.ReadLine());
            if (a >= 0.00 && a <= 25.00)
                Console.WriteLine("Intervalo [0,25]");
            else if (a > 25.00 && a <= 50.00)
                Console.WriteLine("Intervalo (25,50]");
            else if (a > 50.00 && a <= 75.00)
                Console.WriteLine("Intervalo (50,75]");
            else if (a > 75.00 && a <= 100.00)
                Console.WriteLine("Intervalo (75,100]");
            else
                Console.WriteLine("Fora de intervalo");
        }

}