#include<stdio.h>
int main()
{
 int n, numero, numero1, numero2, n1, n2, n3, soma1, soma;
        scanf("%d", &n);
        numero = 1;
        numero1 = 1;
        numero2 = 1;
        while(n > 0)
        {
                n1 = numero;
                n2 = numero * numero1;
                n3 = numero * numero1 * numero2;
                soma = n2 + 1;
                soma1 = n3 + 1;
                n--;
                numero++;
                numero1++;
                numero2++;
                printf("%d %d %d\n", n1, n2, n3);
                printf("%d %d %d\n", n1, soma, soma1); 
        }

return 0;
}
