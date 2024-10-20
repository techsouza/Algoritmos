#include <stdio.h>
 
int main() {
 
  int numero, n, maior, posicao;
        n = 0;
        maior = 0;
        while(n < 100)
        {
        scanf("%d", &numero);
                if(numero > maior)
                {
                        maior = numero;
                        posicao = n+1;
                }
        n = n + 1;
        }
        printf("%d\n%d\n", maior, posicao);

    return 0;
}