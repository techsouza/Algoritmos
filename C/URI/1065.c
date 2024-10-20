#include <stdio.h>
 
int main() {
 
  int n, numero, par;
        n = 5;
        par = 0;
        while(n > 0)
        {
                scanf("%d", &numero);
                if(numero%2 == 0)
                        par = par + 1;
                else
                        ;
        n = n - 1;
        }
        printf("%d valores pares\n", par);

 
    return 0;
}