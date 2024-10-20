#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    double ponto = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));

    cout << fixed << setprecision(4) << sqrt(ponto) << endl;
}