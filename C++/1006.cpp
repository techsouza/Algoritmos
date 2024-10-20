#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    {
        double a, b, c;

        std::cin >> a;
        std::cin >> b;
        std::cin >> c;

        a = ((2 * a) + (3 * b) + (5 * c)) / 10;

        std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << a;
        std::cout << "\n";


    }
}