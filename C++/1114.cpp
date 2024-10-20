#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x=0000;


    while (x != 2002)
    {
        cin >> x;
        x == 2002 ? (cout << "Acesso Permitido\n") : (cout << "Senha Invalida\n");
    }
}