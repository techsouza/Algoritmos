#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    int caso;

    cin >> caso;

    for (; caso > 0; caso--)
    {

        cin >> num;
        if (num == 0)
            cout << "NULL"
                 << "\n";
        if (num % 2 != 0 && num < 0)
            cout << "ODD NEGATIVE"
                 << "\n";
        if (num % 2 == 0 && num < 0)
            cout << "EVEN NEGATIVE"
                 << "\n";
        if (num % 2 != 0 && num > 0)
            cout << "ODD POSITIVE"
                 << "\n";
        if (num % 2 == 0 && num > 0)
            cout << "EVEN POSITIVE"
                 << "\n";
    }
}
