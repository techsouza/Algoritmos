#include<iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int ddd;

    cin >> ddd;

    switch(ddd)
    {
        case 11:
            cout << "Sao Paulo\n";
            break;

        case 19:
            cout << "Campinas\n";
            break;

        case 21:
            cout << "Rio de Janeiro\n";
            break;

        case 27:
            cout << "Vitoria\n";
            break;

        case 32:
            cout << "Juiz de Fora\n";
            break;

        case 31:
            cout << "Belo Horizonte\n";
            break;

        case 61:
            cout << "Brasilia\n";
            break;

        case 71:
            cout << "Salvador\n";
            break;

        default:
            cout << "DDD nao cadastrado\n";
            break;
    }

}

