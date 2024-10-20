#include <stdio.h>
 
int main() {
 
  int n, numero, perfeito, i, aux;
        scanf("%d", &n);
        while(n > 0)
        {
          i = 1;
                scanf("%d", &numero);
                aux = numero;
                perfeito = 0;
                while((numero/2) >= i)
                {
                        if((numero%i) == 0)
                        {
                                perfeito = perfeito + i;
                        }
                  i++;
                }
                if(aux == perfeito)
                        printf("%d eh perfeito\n", aux);
                else if(aux != perfeito)
                        printf("%d nao eh perfeito\n", aux);
          n--;
        }

 
    return 0;
}