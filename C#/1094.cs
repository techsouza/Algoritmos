using System;

class URI
{

    static void Main(string[] args)
    {

        int c = 0, r = 0, s = 0, quant = 0, caso;

        caso = Convert.ToInt32(Console.ReadLine());


        for (; caso > 0; caso--)
        {

            string[] linha1 = Console.ReadLine().Split(' ');
            int cobaia = int.Parse(linha1[0]);
            String sigla = linha1[1];

            quant += +cobaia;

            if (String.Compare(sigla, "C") == 0)
            {
                c +=cobaia;
            }
            if (String.Compare(sigla, "R") == 0)
            {
                r += cobaia;
            }
            if (String.Compare(sigla, "S") == 0)
            {
                s += cobaia;
            }



        }

        Console.WriteLine("Total: " + quant + " cobaias");
        Console.WriteLine("Total de coelhos: " + c);
        Console.WriteLine("Total de ratos: " + r);
        Console.WriteLine("Total de sapos: " + s);

        double q_c = (c * 100.00) / quant;
        double q_r = (r * 100.00) / quant;
        double q_s = (s * 100.00) / quant;

        Console.WriteLine("Percentual de coelhos: {0:0.00} %", q_c);
        Console.WriteLine("Percentual de ratos: {0:0.00} %", q_r);
        Console.WriteLine("Percentual de sapos: {0:0.00} %", q_s);


    }

}