#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    double a, b;
    cin >> a >> b;
    a = ((100+a) * (b / 100 + 1)) - 100;
    cout << std::fixed << std::setprecision(6) << a << "\n";
}