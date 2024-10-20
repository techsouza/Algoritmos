using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Teste
{

    class URI
    {
        static void Main(string[] args)
        {
            double nota1, nota2, flag = 1;

            while (flag == 1)
            {

                nota1 = Convert.ToDouble(Console.ReadLine());
                while (nota1 > 10 || nota1 < 0)
                {
                    Console.WriteLine("nota invalida");
                    nota1 = Convert.ToDouble(Console.ReadLine());
                }

                nota2 = Convert.ToDouble(Console.ReadLine());
                while (nota2 > 10 || nota2 < 0)
                {
                    Console.WriteLine("nota invalida");
                    nota2 = Convert.ToDouble(Console.ReadLine());
                }

                double media = (nota1 + nota2) / 2;
                Console.WriteLine("media = {0:0.00}", media);

                Console.WriteLine("novo calculo (1-sim 2-nao)");
                flag = Convert.ToDouble(Console.ReadLine());
                while (flag != 1 && flag != 2)
                {
                    Console.WriteLine("novo calculo (1-sim 2-nao)");
                    flag = Convert.ToDouble(Console.ReadLine());
                }
            }

        }


    }
}
