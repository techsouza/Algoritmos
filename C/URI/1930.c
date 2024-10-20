#include <stdio.h>
 
int main() {
 
int n, tomadas, cont;
        n = 0;
        tomadas = 0;
        while(cont < 4)
        {
                scanf("%d", &n);
                tomadas = tomadas + n - 1;
                cont = cont + 1;
        } 
        tomadas = tomadas + 1;
        printf("%d\n", tomadas);

 
    return 0;
}