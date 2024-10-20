#include <iostream>

using namespace std;

int main()
{

    int numero, pot, n;
    cin >> numero;
    n = 2;
    while (numero > 1)
    {
        pot = n * n;
        // printf("%d^2 = %d\n", n, pot);
        cout << n << "^2 = " << pot << "\n";
        n = n + 2;
        numero = numero - 2;
    }
}