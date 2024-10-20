#include <iostream>

using namespace std;

int main()
{

    int a, n, i, aux = 0;

    cin >> a >> n;

    while (n <= 0)
        cin >> n;

    for (i = 1; i <= n; i++)
    {
        aux += a;
        a++;
    }

    cout << aux << "\n";

    return 0;
}