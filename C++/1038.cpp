#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double codigo[] = {4.0, 4.5, 5.0, 2.0, 1.5};
    int a;
    int b;

    cin >> a >> b;
    a = a-1;
   
    cout << "Total: R$ " << fixed << setprecision(2) << codigo[a]*b << "\n";




}