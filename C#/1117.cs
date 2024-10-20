using System; 

class URI {

    static void Main(string[] args) { 

       double a, media;
            int cont;
            cont = 0;
            media = 0;

            while (cont < 2)
            {

                a = Convert.ToDouble(Console.ReadLine());
                if (a >= 0 && a <= 10)
                {
                    media = media + a;
                    cont++;
                }
                else
                   Console.WriteLine("nota invalida");

            }
            media = media / 2;
            Console.WriteLine("media = {0:0.00}", media);

    }

}