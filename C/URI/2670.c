#include<stdio.h>

int main()
{
    int a1, a2, a3, maior=0, soma=0, i=0;

        scanf("%d", &a1);
        scanf("%d", &a2);
        scanf("%d", &a3);

        maior = (a2*2)+(a3*4);

        soma = (a1*2)+(a3*2);

        if(soma<maior)

            maior = soma;

        soma = (a1*4)+(a2*2);

         if(soma<maior)

            maior = soma;

        printf("%d\n", maior);
    return 0;
}
