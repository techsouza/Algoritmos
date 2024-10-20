#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double med1, med2, med3, med4, media=0, exame=0;

    cin >> med1 >> med2 >> med3 >> med4;

    media = ((med1*2)+(med2*3)+(med3*4)+(med4*1))/10;

    if(media >= 7)
    {
        cout << "Media: " << fixed << setprecision(1) << media << "\n";
        cout << "Aluno aprovado." << "\n";
    }
    else if(media < 5)
    {
        cout << "Media: " << fixed << setprecision(1) << media << "\n";
        cout << "Aluno reprovado." << "\n";
    }
    else
    {
        cout << "Media: " << fixed << setprecision(1) << media << "\n";
        cout << "Aluno em exame." << "\n";
        cin >> exame; 
        double media_exame = (media+exame)/2;

        if(media_exame >= 5)
        {
            cout << "Nota do exame: " << fixed << setprecision(1) << exame << "\n";
            cout << "Aluno aprovado." << "\n";
            cout << "Media final: " << fixed << setprecision(1) << media_exame << "\n"; 
        }
        else
        {
           cout << "Nota do exame: " << fixed << setprecision(1) << exame << "\n";
            cout << "Aluno reprovado." << "\n";
            cout << "Media final: " << fixed << setprecision(1) << media_exame << "\n"; 
        }
    }

}