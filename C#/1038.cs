using System; 

class URI {

    static void Main(string[] args){
            int opcao, quantidade;
            double total=0;
            string[] linha = Console.ReadLine().Split(' ');
            opcao = int.Parse(linha[0]);
            quantidade = int.Parse(linha[1]);
            if (opcao == 1)
            {
                total = 4.00 * quantidade;
            }
            else if (opcao == 2)
            {
                total = 4.50 * quantidade;
            }
            else if (opcao == 3)
            {
                total = 5.00 * quantidade;
            }
            else if (opcao == 4)
            {
                total = 2.00 * quantidade;
            }
            else if (opcao == 5)
            {
                total = 1.50 * quantidade;
            }
            Console.WriteLine("Total: R$ {0:0.00}", total);

        }

}