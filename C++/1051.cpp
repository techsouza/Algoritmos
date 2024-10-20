#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double ir = 0, valor;

    cin >> valor;

    if (valor > 4500)
    {
        ir += (valor - 4500) * 0.28;
        valor = 4500;
    }
    if (valor > 3000)
    {
        ir += (valor - 3000) * 0.18;
        valor = 3000;
    }
    if (valor > 2000)
    {
        ir += (valor - 2000) * 0.08;
    }
    if (ir == 0)
    {
        cout << "Isento\n";
    }
    else

        cout << fixed << setprecision(2) << "R$ " << ir << "\n";
}