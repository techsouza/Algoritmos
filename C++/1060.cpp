#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double n;
    int total=0;
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        if( n > 0)
            total++;
    }

    cout << total << " valores positivos\n";
}