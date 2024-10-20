#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int n, i, j;
    cin >> n;
    
    for(i = 1; i <= n; i++)
    {
        cout << i << " " << i * i << " " << i*i*i << "\n";
        for(j = 1; j <= 1 ; j++)
            cout << i << " " << i * i + 1 << " " << i*i*i + 1<< "\n";
    }
}
