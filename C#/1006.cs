using System; 

class URI {

    static void Main(string[] args) { 

            double a = Convert.ToDouble(Console.ReadLine());
            double b = Convert.ToDouble(Console.ReadLine());
            double c = Convert.ToDouble(Console.ReadLine());

            double total;

            total = ((a * 0.2) + (b * 0.3) + (c * 0.5));

            Console.WriteLine("MEDIA = {0:0.0}", total);
    }

}