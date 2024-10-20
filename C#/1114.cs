using System;
using System.Collections.Generic;
using System.Linq;
using System.Globalization;

class URI
{

    static void Main(string[] args)
    {
       int senha = 0000;

        while  (senha != 2002)
        {
            senha = Convert.ToInt32(Console.ReadLine());

            Console.WriteLine(senha == 2002 ? "Acesso Permitido" : "Senha Invalida");

        }

    }
}