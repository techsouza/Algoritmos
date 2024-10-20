#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits> 

using namespace std;

int main()
{
    double a, b;

    std::cin >> a;
    std::cin >> b;

    a = ((3.5 * a) + (7.5 * b)) / 11;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << a;
    std::cout << "\n";


}