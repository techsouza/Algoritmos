using System;

class URI
{

    static void Main(string[] args)
    {
        int var, i = 0, j = 1;
        for (var = 0; var < 11; ++var)
        {
            if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0)
            {
                Console.WriteLine("I={0:0} J={1:0}", (i / 10.0), ((i / 10.0) + j));
                Console.WriteLine("I={0:0} J={1:0}", (i / 10.0), ((i / 10.0) + j + 1));
                Console.WriteLine("I={0:0} J={1:0}", (i / 10.0), ((i / 10.0) + j + 2));
            }
            else
            {
                Console.WriteLine("I={0:0.0} J={1:0.0}", i / 10.0, (i / 10.0) + j);
                Console.WriteLine("I={0:0.0} J={1:0.0}", i / 10.0, (i / 10.0) + j + 1);
                Console.WriteLine("I={0:0.0} J={1:0.0}", i / 10.0, (i / 10.0) + j + 2);
            }
            i += 2;
        }

    }
}