    int tab;

    tab = Convert.ToInt32(Console.ReadLine());

    if (tab % 2 == 0)
    {
        tab = tab * tab;
        Console.WriteLine("{0} casas brancas e {0} casas pretas", tab / 2);
    }
    else
    {
        tab = tab * tab;
        tab = tab / 2;
        Console.WriteLine("{0} casas brancas e {1} casas pretas", tab + 1, tab);
    }