#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    int maior = 0;
    int posicao = 0;

    for (int i = 1; i <= 100; i++)
    {
        cin >> n;

        if (n > maior)
        {
            maior = n;
            posicao = i;
        }
    }
    cout << maior << "\n";
    cout << posicao << "\n";
}