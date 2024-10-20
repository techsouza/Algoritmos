using System; 

class URI {

    static void Main(string[] args) { 

            double x1, x2, y1, y2, ponto;

            string[] linha = Console.ReadLine().Split(' ');

            x1 = double.Parse(linha[0]);
            y1 = double.Parse(linha[1]);

            string[] linha1 = Console.ReadLine().Split(' ');

            x2 = double.Parse(linha1[0]);
            y2 = double.Parse(linha1[1]);

            ponto = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
            Console.WriteLine("{0:0.0000}", Math.Sqrt(ponto));

    }

}