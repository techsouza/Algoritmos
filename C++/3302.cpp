#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    int caso, i, problema;

    cin >> caso;

    for(i=1; i <= caso; i++)
    {
        cin >> problema;
        std::cout << "resposta " << i << ": " << problema << "\n";
    }
    
}