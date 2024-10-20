#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    while (x != y)
    {
        x > y ? (cout << "Decrescente\n") : (cout << "Crescente\n");

        cin >> x >> y;
    }
}