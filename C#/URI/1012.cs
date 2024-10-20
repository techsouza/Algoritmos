using System; 

class URI {

    static void Main(string[] args) { 

            double a, b, c, tri_ret, circulo, trapezio, quadrado, retangulo;
            string[] linha = Console.ReadLine().Split(' ');
            a = double.Parse(linha[0]);
            b = double.Parse(linha[1]);
            c = double.Parse(linha[2]);

            tri_ret = (a * c) / 2;
            circulo = 3.14159 * (c * c);
            trapezio = (c * (a + b)) / 2;
            quadrado = b * b;
            retangulo = a * b;


            Console.WriteLine("TRIANGULO: {0:0.000}", tri_ret);
            Console.WriteLine("CIRCULO: {0:0.000}", circulo);
            Console.WriteLine("TRAPEZIO: {0:0.000}", trapezio);
            Console.WriteLine("QUADRADO: {0:0.000}", quadrado);
            Console.WriteLine("RETANGULO: {0:0.000}", retangulo);
    }

}