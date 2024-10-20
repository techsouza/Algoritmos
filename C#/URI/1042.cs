using System;
using System.Collections.Generic;
using System.Linq;
class URI
{
    public static void Main(string[] args)
    {



        string[] linha1 = Console.ReadLine().Split(' ');

        List<int> list = linha1.Select(l => Convert.ToInt32(l)).ToList();
        List<int> list1 = list.OrderBy(x => x).ToList();
        foreach (int i in list1)
            Console.WriteLine(i);
        //Console.WriteLine(string.Join("\r\n",list1));
        Console.WriteLine();
        foreach (int i in list)
            Console.WriteLine(i);
        //Console.WriteLine(string.Join("\r\n", list));

    }
}