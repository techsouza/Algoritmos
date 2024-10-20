#include <stdio.h>
 
int main() {
 
  int n, ultimo, penultimo, soma;
        scanf("%d", &n);
                soma = 0;
                ultimo = 0;
                penultimo = 1;
                while(n > 1)
                {
                        printf("%d ", soma);
                        soma = ultimo  +  penultimo;
                        penultimo = ultimo;
                        ultimo = soma;    
 
                n--;


                }
                              printf("%d\n", soma);




 

    return 0;
}