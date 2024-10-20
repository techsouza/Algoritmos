#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if((a%2==0) && (b>c) && (c+d > a+b) && (d>a) && (c > 0) && (d > 0))
        cout << "Valores aceitos\n";
    else
        cout << "Valores nao aceitos\n";

}