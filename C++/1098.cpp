#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int var, i = 0, j = 1;
    for (var = 0; var < 11; ++var)
    {
        if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0)
        {
            cout << "I=" << (i / 10) << " J=" << ((i / 10) + j) << "\n";
            cout << "I=" << (i / 10) << " J=" << ((i / 10) + j + 1) << "\n";
            cout << "I=" << (i / 10) << " J=" << ((i / 10) + j + 2) << "\n";
        }
        else
        {
            cout << fixed << setprecision(1) << "I=" << (i / 10.0) << " J=" << (i / 10.0) + j << "\n";
            cout << fixed << setprecision(1) << "I=" << (i / 10.0) << " J=" << ((i / 10.0) + j + 1) << "\n";
            cout << fixed << setprecision(1) << "I=" << (i / 10.0) << " J=" << ((i / 10.0) + j + 2) << "\n";
        }
        i += 2;
    }
}
