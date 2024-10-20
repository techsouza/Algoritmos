using System; 

class URI {

    static void Main(string[] args) { 

         int total;
        string[] linha = Console.ReadLine().Split(' ');

        int a = int.Parse(linha[0]);
        int b = int.Parse(linha[1]);

        if (a == b)
            Console.WriteLine("O JOGO DUROU 24 HORA(S)");
        else if (a > b)
        {
            total = a - 24;
            total = Math.Abs(total) + b;
            Console.WriteLine("O JOGO DUROU {0} HORA(S)", total);
        }
        else
        {
            total = b - a;
            Console.WriteLine("O JOGO DUROU {0} HORA(S)", total);
        }

    }

}

