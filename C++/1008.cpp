#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits> 
using namespace std;
int main()
{
    int num, horas;
    double valor;

    std::cin >> num;
    std::cin >> horas;
    std::cin >> valor;

    std::cout << "NUMBER = " << num << "\n";
    std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << horas*valor << "\n";
}
