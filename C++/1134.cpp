#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int gasolina, alcool, diesel, opcao;
    gasolina = 0;
    alcool = 0;
    diesel = 0;
    do
    {
        cin >> opcao;
        if (opcao == 2)
            gasolina = gasolina + 1;
        else if (opcao == 1)
            alcool = alcool + 1;
        else if (opcao == 3)
            diesel = diesel + 1;
    } while (opcao != 4);

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcool << "\n";
    cout << "Gasolina: " << gasolina << "\n";
    cout << "Diesel: " << diesel << "\n";
}