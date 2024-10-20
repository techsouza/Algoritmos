#include<stdio.h>

int main()
{
    int votacao, v[233000], i, satisfatorio=0, insatisfatorio=0;

    scanf("%d", &votacao);

    for(i=0; i<votacao; i++)
    {
        scanf("%d", &v[i]);
        if(v[i] == 0)
            satisfatorio++;
        else
            insatisfatorio++;
    }

    if(satisfatorio <= insatisfatorio)
        printf("N\n");
    else
        printf("Y\n");

    return 0;
}
