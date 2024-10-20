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
    double a, b, c;

    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> a >> b >> c;
        double media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout << fixed << setprecision(1) << media << "\n";
    }
}
