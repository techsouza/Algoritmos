#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int days;

    cin >> days;

    int years = days/365;
    days = days - (years*365);

    int months = days/30;
    days = days - (months*30);

    cout << years << " ano(s)\n" << months << " mes(es)\n" << days << " dia(s)\n";


}