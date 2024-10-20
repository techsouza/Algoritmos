#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int cases = 0;
    int i = 0, tomadas = 0, vetor[100], soma = 0;

    scanf("%d", &cases);

    for (; cases > 0; cases--)
    {
       cin >> tomadas;
        int aux = tomadas;
        i = 0;
        soma = 0;
        for (; tomadas > 0; tomadas--)
        {
            scanf("%d", &vetor[i]);
            soma += vetor[i];
            i++;
        }
        soma = soma - aux + 1;
        cout << soma << "\n";
    }
}