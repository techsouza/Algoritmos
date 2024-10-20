using System; 

class URI {

    static void Main(string[] args) { 


        string[] meses = new string[3] {"January", "February", "March", "April",
                                        "May", "June", "July", "August",
                                        "September", "October", "November", "December"
                                        };


        int mes = Convert.ToInt32(Console.ReadLine());


        Console.WriteLine(meses[mes-1]);




    }
}
