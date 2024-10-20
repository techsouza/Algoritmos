#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int c = 0, r = 0, s = 0, quant = 0, caso, cobaia;
    string sigla;

    cin >> caso;

    for (; caso > 0; caso--)
    {
        cin >> cobaia >> sigla;

        quant += cobaia;

        if (sigla == "C")
        {
            c += cobaia;
        }
        if (sigla == "R")
        {
            r += cobaia;
        }

        if (sigla == "S")
        {
            s += cobaia;
        }
    }

    cout << "Total: " << quant << " cobaias" << "\n";
    cout << "Total de coelhos: " << c << "\n";
    cout << "Total de ratos: " << r << "\n";
    cout << "Total de sapos: " << s << "\n";

    double q_c = (c * 100.00) / quant;
    double q_r = (r * 100.00) / quant;
    double q_s = (s * 100.00) / quant;

    cout << "Percentual de coelhos: "<< fixed << setprecision(2) << q_c << " %"<< "\n";
    cout << "Percentual de ratos: "<< fixed << setprecision(2) << q_r << " %" << "\n";
    cout << "Percentual de sapos: "<< fixed << setprecision(2) << q_s << " %" << "\n";

}