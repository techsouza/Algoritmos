#include <stdio.h>
 
int main() {
 
int n, par, impar, negativo, positivo, numero;
        par = 0;
        impar = 0;
        negativo = 0;
        positivo = 0;
        n = 0;
        while(5 > n)
        {
          scanf("%d", &numero);
          if(numero%2 == 0)
            par = par + 1;
          if(numero%2 == 1 || numero%2 == -1)
            impar = impar + 1;
          if(numero > 0)
            positivo = positivo + 1;
          if(numero < 0)
            negativo = negativo + 1;
        n = n + 1;
        }
        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);

    return 0;
}