using System; 

class URI {

    static void Main(string[] args) { 

        int n;
        n = Convert.ToInt32(Console.ReadLine());
        int a = 1, b = 2, c = 3;
        int cont = 0;
        while (n > 0)
        {
            Console.Write(a + " " + b + " " + c + " PUM\n");
            c += 2;
            a = c;
            b = c;
            b += 1;
            c += 2;
            cont += 1;
            n--;
        }

    }

}