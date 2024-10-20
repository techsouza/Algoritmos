using System; 

class URI {

    static void Main(string[] args)        {
            
            string[] linha1 = Console.ReadLine().Split(' ');
            int a = int.Parse(linha1[0]);
            int b = int.Parse(linha1[1]);
            int c = int.Parse(linha1[2]);
            int d = int.Parse(linha1[3]);
            if ((b > c) && (d > a) && ((c + d) > (a + b)) && (c > 0) && (d > 0) && (a % 2 == 0))
                Console.WriteLine("Valores aceitos");
            else
                Console.WriteLine("Valores nao aceitos");
        }

}