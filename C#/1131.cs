using System; 

class URI {

    static void Main(string[] args) { 

        int flag, x, y, inter_cont = 0, gremio_cont = 0, empate = 0, grenal_cont=0;

            flag = 1;
            while (flag == 1)
            {
                string[] linha = Console.ReadLine().Split(' ');

                x = int.Parse(linha[0]);
                y = int.Parse(linha[1]);

                if (x > y)
                {
                    inter_cont++;
                }
                else if (x < y)
                {
                    gremio_cont++;
                }
                else
                {
                    empate++;
                }
                grenal_cont++;
                Console.WriteLine("Novo grenal (1-sim 2-nao)");
                flag = int.Parse(Console.ReadLine());

            }

            Console.WriteLine("{0} grenais", grenal_cont);
            Console.WriteLine("Inter:{0}", inter_cont);
            Console.WriteLine("Gremio:{0}", gremio_cont);
            Console.WriteLine("Empates:{0}", empate);

            if(inter_cont > gremio_cont)
            {
                Console.WriteLine("Inter venceu mais");
            }
            else if (inter_cont < gremio_cont)
            {
                Console.WriteLine("Gremio venceu mais");
            }
            else
            {
                Console.WriteLine("Nao houve vencedor");
            }


    }

}