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
    for (int i = 1; i <= 10000; i++)
    {

        if (i % num == 2)
            cout << i << "\n";
    }
}
