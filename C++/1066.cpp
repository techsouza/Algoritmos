#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int par = 0;
    int impar = 0;
    int negativo = 0;
    int positivo = 0;
    int numero;
    for (int i = 0; i < 5; i++)
    {
        cin >> numero;
        if (numero % 2 == 0)
            par = par + 1;
        if (numero % 2 != 0)
            impar = impar + 1;
        if (numero > 0)
            positivo = positivo + 1;
        if (numero < 0)
            negativo = negativo + 1;
    }
    

    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n";
    cout << negativo << " valor(es) negativo(s)\n";
}