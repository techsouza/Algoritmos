#include<iostream>
#include <iomanip>

using namespace std;

int main(){

    float hora;
    float km;

    cin >> hora;
    cin >> km;

     
    cout << fixed << setprecision(3) << (hora*km)/12 ;

    

}