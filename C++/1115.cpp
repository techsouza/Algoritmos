#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x = -1, y = -1;
    cin >> x >> y;

    while ((x != 0) && (y != 0))
    {
        

        if (x > 0 && y > 0)
        {
            cout << "primeiro\n";
        }
        else if (x < 0 && y > 0)
        {
            cout << "segundo\n";
        }
        else if (x < 0 && y < 0)
        {
            cout << "terceiro\n";
        }
        else
        {
            cout << "quarto\n";
        }
        cin >> x >> y;
    }
}