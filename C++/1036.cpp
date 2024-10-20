#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double a, b, c;

    cin >> a >> b >> c;

    if(a == 0 || ((b*b)-(4*a*c)) <= 0)
    {
        cout << "Impossivel calcular\n";
        return 0;
    }
    double r1 = (-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    double r2 = (-b-(sqrt((b*b)-(4*a*c))))/(2*a);
    cout << fixed << setprecision(5) << "R1 = " << r1 << "\n";
    cout << fixed << setprecision(5) << "R2 = " << r2 << "\n"; 

}
