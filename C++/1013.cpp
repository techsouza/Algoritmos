#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>
using namespace std;


int main(){

    int a, b, c, maiorAb, maior;

    cin >> a >> b >> c;
    maiorAb = (a+b+abs(a-b))/2;
    maior = (maiorAb+c+abs(maiorAb-c))/2;
    cout << maior << " eh o maior" << endl;

    return 0;
}