#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, media;
    int cont;
    cont = 0;
    media = 0;

    while (cont < 2)
    {

        cin >> a;
        if (a >= 0 && a <= 10)
        {
            media = media + a;
            cont++;
        }
        else
           cout << "nota invalida\n";
    }
    media = media / 2;
   cout << "media = " << fixed << setprecision(2) << media << "\n";
}