#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
int main()
{
    std::string nome;
    double salario, montante;
    std::cin >> nome >> salario >> montante;

    std::cout << "TOTAL = R$ "<< std::fixed << std::setprecision(2) << (montante * 0.15) + salario << "\n";


    