#include<iostream>

using namespace std;

int main(){


    int hora_inicial, hora_final, minuto_inicial, minuto_final, total_final, total_inicial, total, hora_total, minuto_total;

    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    total_inicial = hora_inicial * 60 + minuto_inicial;
    total_final = hora_final * 60 + minuto_final;


        if (total_inicial == total_final)
            cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << "\n";
        else if (total_inicial > total_final)
        {
            total = total_inicial - 1440;
            total = abs(total) + total_final;
            hora_total = total / 60;
            minuto_total = total % 60;
            cout << "O JOGO DUROU " << hora_total << " HORA(S) E " << minuto_total << " MINUTO(S)\n";
        }
        else
        {
            total = total_final - total_inicial;
            hora_total = total / 60;
            minuto_total = total % 60;
            cout << "O JOGO DUROU " << hora_total << " HORA(S) E " << minuto_total << " MINUTO(S)\n";
        }

}