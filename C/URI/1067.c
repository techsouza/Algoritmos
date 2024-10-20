#include <stdio.h>
 
int main() {
 
 int numero, impar;
        impar = 1;
        scanf("%d", &numero);
        while(numero > 0)
        {
          printf("%d\n", impar);
          impar = impar + 2;
          numero = numero - 2;
        }

 
    return 0;
}