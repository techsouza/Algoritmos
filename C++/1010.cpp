#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int codigo, quantidade;
    double valor, aux;

    std::cin >> codigo >> quantidade >> valor;

        aux = quantidade * valor;

    std::cin >> codigo >> quantidade >> valor;

        aux = quantidade * valor + aux;

        std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << aux << "\n";
}