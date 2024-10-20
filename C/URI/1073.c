#include <stdio.h>
 
int main() {
 
  int numero, pot, n;
        scanf("%d", &numero);
        n = 2; 
        while( numero > 1)
        {
                pot = n * n;
                printf("%d^2 = %d\n", n, pot);
                n = n + 2;
                numero = numero -2;
        }

 
    return 0;
}