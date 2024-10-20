#include <stdio.h>
 
int main() {
 
 int n, numero, numero2, impar, aux;
        scanf("%d", &n);
        while(n > 0)
        {
                impar = 0;
                scanf("%d %d", &numero, &numero2);
                  if(numero > numero2)
                  {
                        aux = numero;
                        numero = numero2;
                        numero2 = aux;
                  }
                numero++;
                  while(numero < numero2)
                  {

                        if(numero%2==0)  
                                numero++;
                        else
                        {
                                impar = impar + numero;
                                numero = numero + 1;

                        }

                  }

                n--;
                printf("%d\n", impar);

        }



 
    return 0;
}