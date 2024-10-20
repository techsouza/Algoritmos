using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {

    /*
     * Complete the simpleArraySum function below.
     */

    static void Main(string[] args) 
            {
            int tam = 0;
            

            tam = Convert.ToInt32(Console.ReadLine());
            int sum = 0;


            int[] a = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt32(arTemp));

            for (int i = 0; i < tam; i++)
            {




                sum = sum + a[i];

            }

            Console.WriteLine(sum);

        }
}