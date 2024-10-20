#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    int y;
    int cont = 0;
    int aux = 0;

    cin >> x;
    cin >> y;
    if (x > y)
    {
        aux = x;
        x = y;
        y = aux;
    }

    while (x <= y)
    {
        if (x % 13 != 0)
        {
            cont = cont + x;
            x++;
        }
        else
            x++;
    }

    cout << cont << "\n";
}