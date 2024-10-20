using System; 

class URI {

    static void Main(string[] args) { 
        String  a, b, c;

        a = Convert.ToString(Console.ReadLine());
        b = Convert.ToString(Console.ReadLine());
        c = Convert.ToString(Console.ReadLine());
        sigla = Convert.ToString(Console.ReadLine());


        if (String.Compare(a, "vertebrado")==0 && String.Compare(b, "ave") == 0 && String.Compare(c, "carnivoro") == 0)
        {
            Console.WriteLine("aguia");
        }
        if (String.Compare(a, "vertebrado") == 0 && String.Compare(b, "ave") == 0 && String.Compare(c, "onivoro") == 0)
        {
            Console.WriteLine("pomba");
        }
        if (String.Compare(a, "vertebrado") == 0 && String.Compare(b, "mamifero") == 0 && String.Compare(c, "onivoro") == 0)
        {
            Console.WriteLine("homem");
        }
        if (String.Compare(a, "vertebrado") == 0 && String.Compare(b, "mamifero") == 0 && String.Compare(c, "herbivoro") == 0)
        {
            Console.WriteLine("vaca");
        }
        if (String.Compare(a, "invertebrado") == 0 && String.Compare(b, "inseto") == 0 && String.Compare(c, "hematofago") == 0)
        {
            Console.WriteLine("pulga");
        }
        if (String.Compare(a, "invertebrado") == 0 && String.Compare(b, "inseto") == 0 && String.Compare(c, "herbivoro") == 0)
        {
            Console.WriteLine("lagarta");
        }
        if (String.Compare(a, "invertebrado") == 0 && String.Compare(b, "anelideo") == 0 && String.Compare(c, "hematofago") == 0)
        {
            Console.WriteLine("sanguessuga");
        }
        if (String.Compare(a, "invertebrado") == 0 && String.Compare(b, "anelideo") == 0 && String.Compare(c, "onivoro") == 0)
        {
            Console.WriteLine("minhoca");
        }
    }

}