#include <stdio.h>
 
int main() {
 
  int n1, n2, total;
        scanf("%d %d", &n1, &n2);
        total = 0;
        if (n1 == n2)
        {
                total = 24;
        }
        else if(n1 > n2)
        {
                while(n1 < 24)
                {
                        total = total + 1;
                        n1 = n1 + 1; 
                }
        total = total + n2;
        }
        else
        { 
                while(n1 < n2)
                {

                        total = total + 1;
                        n2 = n2 - 1;
                }
        }
        printf("O JOGO DUROU %d HORA(S)\n", total);

 
    return 0;
}