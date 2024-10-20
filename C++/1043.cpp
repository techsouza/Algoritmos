#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double x, y, z;

    cin >> x >> y >> z;

    if(x+y > z && x+z > y && z+y > x)
        cout << "Perimetro = " << fixed << setprecision(1) << x+y+z;

    else
        cout << "Area = " << fixed << setprecision(1) << ((x+y)*z)/2;


}
