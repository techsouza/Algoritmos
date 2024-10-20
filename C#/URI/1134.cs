using System;

class URI
{

    static void Main(string[] args)
    {

        int cliente = 5, alcool = 0, gasolina = 0, diesel = 0;


        while (cliente != 4)
        {
            cliente = Convert.ToInt32(Console.ReadLine());

            if (cliente == 1)
                alcool++;
            else if (cliente == 2)
                gasolina++;
            else if (cliente == 3)
                diesel++;
            else if (cliente == 4)
                ;
        }

        Console.WriteLine("MUITO OBRIGADO");
        Console.WriteLine("Alcool: {0}", alcool);
        Console.WriteLine("Gasolina: {0}", gasolina);
        Console.WriteLine("Diesel: {0}", diesel);



    }

}