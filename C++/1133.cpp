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
    int aux = 0;

    cin >> x;
    cin >> y;
    if (y < x)
    {
        aux = y;
        y = x;
        x = aux;
    }
    x = x + 1;
    while (x < y)
    {
        if (x % 5 == 2 || x % 5 == 3)
            cout << x << "\n";
        x++;
    }
}