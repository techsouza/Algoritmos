#include <stdio.h>
#include <iostream>

int main()
{
    int e, f, c, garrafas;

    std::cin >> e >> f >> c;

    garrafas = e + f;
    int cont=0;
    while(garrafas >= c)
    {
        garrafas = garrafas - c;
        garrafas = garrafas + 1;
        cont++;
    }

    std::cout << cont << "\n";
}