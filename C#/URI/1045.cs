using System;

class URI{

    static void Main (String[] args) {
        string[] linha = Console.ReadLine().Split(' ');

        double a = Double.Parse(linha[0]);
        double b = Double.Parse(linha[1]);
        double c = Double.Parse(linha[2]);

        if(a>=b+c || b>=c+a || c>=b+a)
        {
            Console.WriteLine("NAO FORMA TRIANGULO");
        }
        else if (a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
        {
            Console.WriteLine("TRIANGULO RETANGULO");
        }
        else if (a*a > b*b+c*c || b*b > a*a+c*c || c*c > b*b+a*a)
        {
            Console.WriteLine("TRIANGULO OBTUSANGULO");
        }
        else if(a*a < b*b+c*c || b*b < a*a+c*c || c*c < b*b+a*a)
        {
            Console.WriteLine("TRIANGULO ACUTANGULO");
        }
        if (a == b && b == c )
        {
            Console.WriteLine("TRIANGULO EQUILATERO");
        }
        if(a==b && b!=c || c != a && c == b || c == a && b != a)
        {
            Console.WriteLine("TRIANGULO ISOSCELES");
        }
    }

}