#include <iostream>
 
using namespace std;
 
int main(){
    int a, b, c, d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;

    a = (a * b) - (c * d);

    std::cout << "DIFERENCA = "<<  a <<"\n";

    
}