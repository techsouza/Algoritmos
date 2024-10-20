#include <stdio.h>
 
int main() {
 
  int n, soma, numero;
        scanf("%d", &n);
        while(n > 0)
        {
          soma = 0;
          scanf("%d", &numero);
                if(numero%2 == 0)
                        printf("%d\n", soma);
                else
                        printf("%d\n", soma+1);
          n--;
        }
 
    return 0;
}