#include <stdio.h>
 
int main() {
 
  int n, a, soma;
        scanf("%d %d", &a, &n);
        while(n == 0)
                scanf("%d", &n);
        soma = 0;
        while(n > 0)
        {
                soma = soma + a;
                a++;
                n--;
        }
        printf("%d\n", soma);




    return 0;
}