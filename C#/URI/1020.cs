using System; 

class URI {

    static void Main(string[] args)        {
            int mes, ano, restoano, restomes =0, nasc;
            nasc = Convert.ToInt32(Console.ReadLine());
            restoano = 0;
            ano = 0;
            mes = 0;
            if (nasc >= 365)
            {
                {
                    restoano = nasc % 365;
                    ano = nasc / 365;
                }
                if (restoano >= 30)
                    {
                        restomes = restoano % 30;
                        mes = restoano / 30;
                    }
            }
            else
            {
                restomes = nasc % 30;
                mes = nasc / 30;
            }
            Console.WriteLine(ano + " ano(s)\n" + mes + " mes(es)\n" + restomes + " dia(s)");
        }

}