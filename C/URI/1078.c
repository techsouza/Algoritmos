#include <stdio.h>
 
int main() {
 
 int n, result, contador;
        scanf("%d", &n);
        contador = 0;
        while(contador < 10)
        {
                contador = contador + 1;
                result = n * contador;
                printf("%d x %d = %d\n", contador, n, result);
        }

 
    return 0;
}