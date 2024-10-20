#include<stdio.h>

int main()
{
    int soma, a, b;

    while(scanf("%d %d", &a, &b))
    {
        if(a == 0 && b == 0)
            break;
        soma = a + b;
        printf("%d\n", soma);
    }
    //printf("\n");
    return 0;
}
