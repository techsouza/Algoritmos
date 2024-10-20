using System;

class URI
{
    static void Main(string[] args)
    {
        int cases, laco, tomadas, soma = 0, i = 0;

        cases = Int32.Parse(Console.ReadLine());
        i = 0;
        for (; cases > 0; cases--)
        {
            string[] line = Console.ReadLine().Split(' ');
            laco = Int32.Parse(line[i]);
            soma = 0;
            i++;
            int aux = laco;
            for (; laco > 0; laco--)
            {

                tomadas = Int32.Parse(line[i]);

                soma = soma + tomadas;
                i++;

            }
            i = 0;
            soma = soma - aux + 1;
            Console.WriteLine("{0}", soma);

        }

    }
}