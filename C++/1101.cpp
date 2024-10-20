#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int sum = 0;
    int x;
    int y;
    int i = 0;
    int aux;

    cin >> x;
    cin >> y;

    while (x > 0 && y > 0)
    {
        sum = 0;

        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        for (i = x; i <= y; i++)
        {
            sum += i;
            cout << i <<" ";
        }

        cout <<"Sum=" << sum << "\n";

        cin >> x;
        cin >> y;
    }

    return 0;
}
