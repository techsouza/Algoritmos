using System;

class URI
{

    static void Main(string[] args)
    {
        int i, j, cont_j;
        cont_j = 0;
        i = -1;
        j = 2;
        while (i < 9)
        {
            i = i + 2;
            j = j + 5;
            cont_j = 0;
            while (cont_j < 3)
            {
                Console.WriteLine("I=" + i + " J=" + j);
                cont_j++;
                j = j - 1;
            }
        }

    }
}