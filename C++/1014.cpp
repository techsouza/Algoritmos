#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int km;
    double combustivel;

    cin >> km >> combustivel;

    double kml = km/combustivel;

    cout << fixed << setprecision(3) << kml << " km/l\n"; 

}




