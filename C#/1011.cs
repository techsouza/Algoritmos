using System; 

class URI {

    static void Main(string[] args) { 

            double r, volume;

            r = Convert.ToDouble(Console.ReadLine());

            volume = (4.0 / 3) * 3.14159 * (r * r * r);
           Console.WriteLine("VOLUME = {0:0.000}", volume);
    }

}