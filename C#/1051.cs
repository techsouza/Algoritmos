using System; 

class URI {

    static void Main(string[] args) { 

         double ir = 0;
            double valor = Convert.ToDouble(Console.ReadLine());
          

            
            if (valor > 4500)
            {
                ir += (valor - 4500) * 0.28;
                valor = 4500;

            }
            if (valor > 3000)
            {
                ir += (valor - 3000) * 0.18;
                valor = 3000;

            }
            if (valor > 2000)
            {
                ir += (valor - 2000) * 0.08;
            }
            if (ir == 0)
            {
                Console.WriteLine("Isento");
                

            }
            else

                Console.WriteLine("R$ {0:0.00}", ir);

    }

}