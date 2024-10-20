using System; 

class URI {

    static void Main(string[] args)       
        {
            int tempo, horas, horas_seg, minutos, segundos;
            horas_seg = 3600;

            tempo = Convert.ToInt32(Console.ReadLine());


            horas = (tempo / horas_seg);

            minutos = (tempo - (horas_seg * horas)) / 60;

            segundos = (tempo - (horas_seg * horas) - (minutos * 60));


            Console.WriteLine(horas + ":" + minutos + ":" + segundos);
        }

}