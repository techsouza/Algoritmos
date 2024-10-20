#include <stdio.h>
 
int main() {
 
  int n, numero;
        scanf("%d", &n);
         while(n > 0)
         {
                scanf("%d", &numero);
                if(numero%2 == 0 && numero > 0)
                {
                        printf("EVEN POSITIVE\n");
                }
                else if(numero%2 == 1 && numero > 0)
                {
                        printf("ODD POSITIVE\n");
                }
                else if(numero%2 == 0 && numero < 0)
                {
                        printf("EVEN NEGATIVE\n");
                }
                else if(numero%2 == -1 && numero < 0)
                {
                        printf("ODD NEGATIVE\n");
                }
                else if(numero == 0)
                {
                        printf("NULL\n");
                }
        n = n -1;

         }


 
    return 0;
}
