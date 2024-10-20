using System; 

class URI {

    static void Main(string[] args) { 
            double litros;
            int tempo_gasto, vel_media;

            tempo_gasto = Convert.ToInt32(Console.ReadLine());
            vel_media = Convert.ToInt32(Console.ReadLine());

            litros = (vel_media / 12.0) * tempo_gasto;

            Console.WriteLine("{0:0.000}", litros);
    }

}