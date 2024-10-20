#include<iostream>

using namespace std;

int main()
{
        
        int caso;
        cin >> caso;
        int dentro = 0;
        int fora = 0;
        int num = 0;

        for(; caso>0 ; caso--)
        {
            cin >> num;

            if(num >= 10 && num <= 20)
                dentro+=1;
            else
                fora+=1;
        }

        cout << dentro << " in\n";
        cout << fora << " out\n";

}