#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, cont_j;
    cont_j = 0;
    i = -1;
    j = 2;
    while (i < 9)
    {
        i = i + 2;
        j = j + 5;
        cont_j = 0;
        while (cont_j < 3)
        {
            cout << "I=" << i << " J=" << j << "\n";
            cont_j++;
            j = j - 1;
        }
    }
}