#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{   
    int j = 60;
    int i = 1;

    while (j >= 0)
    {
        cout << "I=" << i << " J="<< j << "\n";

        i += 3;
        j -= 5;
    }
}