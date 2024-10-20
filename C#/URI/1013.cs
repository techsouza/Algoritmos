using System; 

class URI {

    static void Main(string[] args) { 

            int a, b, c;

            string[] linha = Console.ReadLine().Split(' ');

            a = Int32.Parse(linha[0]);
            b = Int32.Parse(linha[1]);
            c = Int32.Parse(linha[2]);

            if (a > b && a > c)
                Console.WriteLine("{0} eh o maior", a);
            if (b > c && b > a)
                Console.WriteLine("{0} eh o maior", b);
            if (c > a && c > b)
                Console.WriteLine("{0} eh o maior", c);
    }

}