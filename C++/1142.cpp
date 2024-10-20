#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int a = 1, b = 2, c = 3;
    int cont = 0;
    while (n > 0)
    {
        cout << a << " " << b << " " << c << " PUM\n";
        c += 2;
        a = c;
        b = c;
        b += 1;
        c += 2;
        cont += 1;
        n--;
    }
}
