using System; 

class URI {

    static void Main(string[] args) { 

         int a, b, soma=0, i, aux;

            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());

            if (a > b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            for (i = a + 1; i < b; i++)
            {
                if (i % 2 == 1 || i % 2 == -1)
                    soma += i;
                else
                    ;
            }

            Console.WriteLine("{0}", soma);

    }

}