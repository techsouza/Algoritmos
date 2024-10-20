
using System;

class URI
{

    static void Main(string[] args)
    {

        int total;
        string[] linha = Console.ReadLine().Split(' ');

        int hora_inicial = int.Parse(linha[0]);
        int minuto_inicial = int.Parse(linha[1]);
        int hora_final = int.Parse(linha[2]);
        int minuto_final = int.Parse(linha[3]);

        int total_inicial = hora_inicial * 60 + minuto_inicial;
        int total_final = hora_final * 60 + minuto_final;



        if (total_inicial == total_final)
            Console.WriteLine("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        else if (total_inicial > total_final)
        {
            total = total_inicial - 1440;
            total = Math.Abs(total) + total_final;
            int hora_total = total / 60;
            int minuto_total = total % 60;
            Console.WriteLine("O JOGO DUROU {0} HORA(S) E {1} MINUTO(S)", hora_total, minuto_total);
        }
        else
        {
            total = total_final - total_inicial;
            int hora_total = total / 60;
            int minuto_total = total % 60;
            Console.WriteLine("O JOGO DUROU {0} HORA(S) E {1} MINUTO(S)", hora_total, minuto_total);
        }

    }

}

