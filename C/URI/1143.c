#include <stdio.h>
 
int main() {
 
 int n, numero, numero1, numero2, n1, n2, n3;
        scanf("%d", &n);
        numero = 1;
        numero1 = 1;
        numero2 = 1;
        while(n > 0)
        {
                n1 = numero;
                n2 = numero * numero1;
                n3 = numero * numero1 * numero2;
                n--;
                numero++;
                numero1++;
                numero2++;
                printf("%d %d %d\n", n1, n2, n3);
        }


 
    return 0;
}