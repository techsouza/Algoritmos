#include <iostream>
#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
        for (int i = 1; i < 10; i += 2)
        {
                for (int j = 7; j >= 5; j--)
                        cout << "I=" << i << " J=" << j << "\n";
        }
}