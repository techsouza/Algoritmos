#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

int main(){
    int raio;

    std::cin >> raio;

    double total = (4.0/3.0) * 3.14159 * pow(raio,3);

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << total << "\n";
} 