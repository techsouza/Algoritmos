
using System;
using System.Globalization;

namespace uri
{
    class Program
    {

        static void Main(string[] args)
        {

            float n1, n2, n3, n4, media;
            float exameFinal = 0;
            float mediaFinal = 0;

            string[] vet = Console.ReadLine().Split(' ');
            n1 = float.Parse(vet[0], CultureInfo.InvariantCulture);
            n2 = float.Parse(vet[1], CultureInfo.InvariantCulture);
            n3 = float.Parse(vet[2], CultureInfo.InvariantCulture);
            n4 = float.Parse(vet[3], CultureInfo.InvariantCulture);

            media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
            media = (float)Math.Truncate(10 * media) / 10;

            if (media < 7.0 && media >= 5.0)
            {
                exameFinal = float.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

                mediaFinal = (media + exameFinal) / 2;

            }

            if (media >= 7.0 || mediaFinal >= 5.0)
            {
                Console.WriteLine("Media: " + media.ToString("F1", CultureInfo.InvariantCulture));

                if (media < 7.0 || mediaFinal >= 5.0)
                {
                    Console.WriteLine("Aluno em exame.");
                    Console.WriteLine("Nota do exame: " + exameFinal.ToString("F1", CultureInfo.InvariantCulture));
                    Console.WriteLine("Aluno aprovado.");
                    Console.WriteLine("Media final: " + mediaFinal.ToString("F1", CultureInfo.InvariantCulture));
                }

                else if (media >= 7.0)
                {
                    Console.WriteLine("Aluno aprovado.");
                }

                else
                {
                    Console.WriteLine("Aluno reprovado.");
                }
            }
            else
            {
                Console.WriteLine("Media: " + media.ToString("F1", CultureInfo.InvariantCulture));
                Console.WriteLine("Aluno reprovado.");
            }
        }
    }
}