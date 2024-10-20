using System; 

class URI {

    static void Main(string[] args) { 

            string[] linha1 = Console.ReadLine().Split(' ');
            int codigo = int.Parse(linha1[0]);
            int quant_pec = int.Parse(linha1[1]);
            double valor = double.Parse(linha1[2]);
            string[] linha2 = Console.ReadLine().Split(' ');
            int codigo2 = int.Parse(linha2[0]);
            int quant_pec2 = int.Parse(linha2[1]);
            double valor2 = double.Parse(linha2[2]);

            Console.WriteLine("VALOR A PAGAR: R$ {0:0.00}", _ = (quant_pec * valor) +(quant_pec2*valor2));


    }

}