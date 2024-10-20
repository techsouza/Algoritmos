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

    cin >> num;

    for (int i = 0; i < 12; i++)
    {
        if (num % 2 != 0)
            cout << num << "\n";

        num++;
    }
}

