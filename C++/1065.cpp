#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, numero, par;
    n = 5;
    par = 0;
    while (n > 0)
    {
        cin >> numero;
        if (numero % 2 === 0)
            par = par + 1;
        else
            ;
        n = n - 1;
    }
    cout << par << " valores pares\n";
}