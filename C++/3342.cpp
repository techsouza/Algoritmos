#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int tab;

    std::cin >> tab;

    if (tab % 2 == 0)
    {
        tab = tab * tab;
        std::cout << tab / 2 << " casas brancas e " << tab/2 <<" casas pretas\n";
    }
    else
    {
        tab = tab * tab;
        tab = tab / 2;
        std::cout << tab+1 << " casas brancas e " << tab <<" casas pretas\n";
    }
}