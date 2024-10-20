
using System;

class Uri
{

    static void Main(string[] args)
    {

        double salario, reajuste=0;
        int percentual=0;
        salario = Convert.ToDouble(Console.ReadLine());
        if(salario >= 0 && salario <= 400.00)
        {
          reajuste = salario * 0.15;
          salario = salario + reajuste;
          percentual = 15;
        }
        else if (salario >= 400.01 && salario <= 800.00)
        {
          reajuste = salario * 0.12;
          salario = salario + reajuste;
          percentual = 12;
        }
        else if (salario >= 800.01 && salario <= 1200.00)
        {
          reajuste = salario * 0.10;
          salario = salario + reajuste; 
          percentual = 10;
        }
        else if (salario >= 1200.01 && salario <= 2000.00)
        {
          reajuste = salario * 0.07;
          salario = salario + reajuste;
          percentual = 7;
        }
        else if (salario > 2000.00)
        {
          reajuste = salario * 0.04;
          salario = salario + reajuste;
          percentual = 4;
        }
       Console.WriteLine("Novo salario: {0:0.00}\nReajuste ganho: {1:0.00}\nEm percentual: {2} %", salario, reajuste, percentual);
    }
}