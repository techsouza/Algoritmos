#include<iostream>

using namespace std;

int main(){


    int a, b, total;

    cin >> a >> b;

    
        if (a == b)
            cout << "O JOGO DUROU 24 HORA(S)" << "\n";
        else if (a > b)
        {
            total = a - 24;
            total = abs(total) + b;
            cout << "O JOGO DUROU " << total << " HORA(S)\n";
        }
        else
        {
            total = b - a;
            cout << "O JOGO DUROU " <<  total << " HORA(S)\n";
        }

}